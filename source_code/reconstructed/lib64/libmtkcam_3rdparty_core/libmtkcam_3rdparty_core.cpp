/*
 * Reverse-Engineered Source for: libmtkcam_3rdparty.core.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_3rdparty_core"

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
#include "libmtkcam_3rdparty_core.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProviderD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_6FusionEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_6FusionEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE17sProviderRegistryE = NULL;

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_3RawEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_3RawEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProviderD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::setRequired(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelection11setRequiredEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelection11setRequiredEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::MetadataSelection */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin17MetadataSelectionE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS1_10shared_ptrINS0_14MetadataHandleEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS1_10shared_ptrINS0_14MetadataHandleEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE13createRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, NSCam::NSPipelinePlugin::BufferSelection const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_15BufferSelectionE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_15BufferSelectionE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE13createRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::getSpecifiedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection16getSpecifiedSizeEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection16getSpecifiedSizeEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_5DepthEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_5DepthEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE11getInstanceEii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10IInterfaceD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15createSelectionEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEEC1Eii() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE17sProviderRegistryE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5DepthEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5DepthEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEED1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE10ofProviderEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::BufferSelection */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin15BufferSelectionE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10IInterfaceD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider::config(NSCam::NSPipelinePlugin::Depth::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::BufferSelection(NSCam::NSPipelinePlugin::BufferSelection const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionC2ERKS1_(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionC2ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10IInterfaceD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection4dumpERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection4dumpERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE17sProviderRegistryE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE10ofProviderEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE17sProviderRegistryE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getProvidersEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEEC2Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::MetadataSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionC1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::setRequired(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection11setRequiredEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection11setRequiredEi() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10IInterfaceD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::setOptional(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection11setOptionalEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection11setOptionalEi() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10IInterfaceD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::setDummy(std::__1::shared_ptr<NSCam::IMetadata>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelection8setDummyENSt3__110shared_ptrINS_9IMetadataEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelection8setDummyENSt3__110shared_ptrINS_9IMetadataEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10IInterfaceD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10IInterfaceD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEEC1Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getProvidersEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEEC1Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::MetadataSelection(NSCam::NSPipelinePlugin::MetadataSelection const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionC1ERKS1_(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionC1ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin17MetadataSelection4dumpERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin17MetadataSelection4dumpERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15createSelectionEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::MetadataSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionC2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5BokehEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5BokehEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE13createRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEEC1Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE11getInstanceEii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEEC2Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::getAlignment(unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection12getAlignmentERjS2_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection12getAlignmentERjS2_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10IInterfaceD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10IInterfaceD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider::config(NSCam::NSPipelinePlugin::Fusion::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10IInterfaceD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10IInterfaceD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::BufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionC1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::addAcceptedSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection15addAcceptedSizeEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection15addAcceptedSizeEi() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::getSizes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection8getSizesEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection8getSizesEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::getControl() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin17MetadataSelection10getControlEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin17MetadataSelection10getControlEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE11getInstanceEii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, NSCam::NSPipelinePlugin::MetadataSelection const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_17MetadataSelectionE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_17MetadataSelectionE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15createSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE13createRequestEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10IInterfaceD1Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::BufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS1_10shared_ptrINS0_12BufferHandleEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePluginlsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEENS1_10shared_ptrINS0_12BufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::getFormats() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection10getFormatsEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection10getFormatsEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::BufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionC2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::getRequired() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection11getRequiredEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection11getRequiredEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getProvidersEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::getOptional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection11getOptionalEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection11getOptionalEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10mInstancesE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProviderD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEEC1Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE10ofProviderEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE11getInstanceEii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEEC2Eii() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10mInstancesE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider::config(NSCam::NSPipelinePlugin::Raw::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10IInterfaceD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10IInterfaceD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE11getInstanceEii() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider::config(NSCam::NSPipelinePlugin::Yuv::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getProvidersEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getProvidersEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE11getInstanceEii() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE18sInterfaceRegistryE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9IProviderD2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE17sProviderRegistryE = NULL;

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15createSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::~MetadataSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionD0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::getAddtional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin17MetadataSelection12getAddtionalEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin17MetadataSelection12getAddtionalEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE10ofProviderEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE18sInterfaceRegistryE = NULL;

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getProvidersEv() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::BufferSelection(NSCam::NSPipelinePlugin::BufferSelection const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionC1ERKS1_(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionC1ERKS1_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15createSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getInstance(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE11getInstanceEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE11getInstanceEii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider::config(NSCam::NSPipelinePlugin::Bokeh::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProviderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9Selection5TokenENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::setSpecifiedSize(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection16setSpecifiedSizeERKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection16setSpecifiedSizeERKNS_5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getProvidersEm() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE13createRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::~MetadataSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEED1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getProvidersEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getProvidersEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::getRequired() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin17MetadataSelection11getRequiredEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin17MetadataSelection11getRequiredEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEEC2Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::setAlignment(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection12setAlignmentEjj(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection12setAlignmentEjj() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::~BufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEEC2Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getProvidersEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProviderD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getProvidersEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::setAddtional(std::__1::shared_ptr<NSCam::IMetadata>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelection12setAddtionalENSt3__110shared_ptrINS_9IMetadataEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelection12setAddtionalENSt3__110shared_ptrINS_9IMetadataEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::~MetadataSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEEC2Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getProvidersEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getProviders(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getProvidersEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getProvidersEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE17sProviderRegistryE = NULL;

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15createSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>*>&>::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProviderD0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::addSupportFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection16addSupportFormatEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection16addSupportFormatEi() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::~BufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE13createRequestEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::addAcceptedFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection17addAcceptedFormatEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection17addAcceptedFormatEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE18sInterfaceRegistryE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getProviders() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getProvidersEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getProvidersEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE10ofProviderEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin15BufferSelection7isValidEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin15BufferSelection7isValidEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_6FusionEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_6FusionEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_10MultiFrameEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_10MultiFrameEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*> >::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l> std::__1::move_backward<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__113move_backwardINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_3YuvEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_3YuvEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEED0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider::config(NSCam::NSPipelinePlugin::MultiFrame::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProvider6configERKNS2_11ConfigParamE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9IProvider6configERKNS2_11ConfigParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProviderD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface> (*)(), std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface> (*)()> >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface> (* const&)()>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IInterface> (* const&)()) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPFNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE10IInterfaceEEEvENS_9allocatorISA_EEE21__push_back_slow_pathIRKSA_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEEE = NULL;

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9SelectionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::~BufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelectionD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelectionD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*>&>::push_back(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getInterfaceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_4JoinEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_4JoinEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry, std::__1::allocator<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry> >::__push_back_slow_path<NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry>(NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_5BokehEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16NSPipelinePlugin14PluginRegistryINS2_5BokehEE22ConstructProviderEntryENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5TokenC2Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5TokenC2Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::createToken(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection11createTokenEiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection11createTokenEiii() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::addInterface(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE12addInterfaceEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E10IInterfaceEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*> >::push_front(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEEC2Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEEC2Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProviderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9IProviderD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Depth>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5DepthEE10ofProviderEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProviderD0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Fusion>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_6FusionEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::setControl(std::__1::shared_ptr<NSCam::IMetadata>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelection10setControlENSt3__110shared_ptrINS_9IMetadataEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelection10setControlENSt3__110shared_ptrINS_9IMetadataEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::popSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12popSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::createSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15createSelectionEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15createSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::ofInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE11ofInterfaceEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE11ofInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9SelectionEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::addProvider(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE11addProviderEPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE10mInstancesE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Raw>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> (*)(), unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3RawEE22ConstructProviderEntryC1EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE7RequestENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEEC1Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::pushSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE13pushSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10IInterfaceD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10IInterfaceD0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Join>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_4JoinEE18sInterfaceRegistryE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Yuv>::sProviderRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PluginRegistryINS0_3YuvEE17sProviderRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProviderD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEED0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9Selection5TokenENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE9IProviderD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9IProviderEEENS_5dequeINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_19__map_value_compareIS9_SG_NS_4lessIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSR_IJEEEEEENS_4pairINS_15__tree_iteratorISG_PNS_11__tree_nodeISG_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15RequestCallbackD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15RequestCallbackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::numOfSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE14numOfSelectionENSt3__110shared_ptrINS3_9IProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProviderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection::Token::to_string() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5Token9to_stringEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9Selection5Token9to_stringEv() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::getSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>)::sel */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_10MultiFrameEE12getSelectionENSt3__110shared_ptrINS3_9IProviderEEEE3sel = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE9IProviderD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::sInterfaceRegistry */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE18sInterfaceRegistryE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token::operator==(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5TokeneqERKS5_(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE9Selection5TokeneqERKS5_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::getDummy() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin17MetadataSelection8getDummyEv(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin17MetadataSelection8getDummyEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection::Token::Token(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5TokenC1Eiii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE9Selection5TokenC1Eiii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::Bokeh>::ofProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE10ofProviderEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_5BokehEE10ofProviderEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::MetadataSelection::MetadataSelection(NSCam::NSPipelinePlugin::MetadataSelection const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin17MetadataSelectionC2ERKS1_(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin17MetadataSelectionC2ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::createRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE13createRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE13createRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::BufferSelection::addSupportSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin15BufferSelection14addSupportSizeEi(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin15BufferSelection14addSupportSizeEi() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> > >::erase(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> const*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection> const* const*, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9SelectionEEENS_9allocatorIS8_EEE5eraseENS_16__deque_iteratorIS8_PKS8_RSD_PKSE_lLl256EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::weak_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_8weak_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEEEEEEENS_19__map_value_compareImS9_NS_4lessImEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEEE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::getInstance(int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE11getInstanceEiRKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PluginRegistry<NSCam::NSPipelinePlugin::MultiFrame>::ConstructProviderEntry::ConstructProviderEntry(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PluginRegistryINS0_10MultiFrameEE22ConstructProviderEntryC2EPFNSt3__110shared_ptrINS0_14PipelinePluginIS2_E9IProviderEEEvE() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l> std::__1::move<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>(std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>, std::__1::__deque_iterator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>**, long, 256l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_(void) {
    ALOGD("_ZNSt3__14moveINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9SelectionEEEPS8_RS8_PS9_lLl256ES8_S9_SA_SB_lLl256EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSC_IT_T0_T1_T2_T3_XT4_EEESO_SI_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: guard variable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::mInstances */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEE10mInstancesE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEED2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface::~IInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10IInterfaceD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE10IInterfaceD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProviderD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE9IProviderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::~PipelinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEED1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::frontSelection(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE14frontSelectionENSt3__110shared_ptrINS3_9IProviderEEENS5_INS3_9Selection5TokenEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::PipelinePlugin(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEEC1Eii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3RawEEC1Eii() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15RequestCallbackD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_3YuvEE15RequestCallbackD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback::~RequestCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15RequestCallbackD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_4JoinEE15RequestCallbackD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider::~IProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProviderD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE9IProviderD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request, std::__1::allocator<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_4JoinEE7RequestENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPNS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE9SelectionEEES8_S9_RS8_PS9_lLl256EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SJ_SI_PNS_9enable_ifIXsr27__is_random_access_iteratorISJ_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9IProviderEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

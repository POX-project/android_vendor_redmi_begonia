/*
 * Reverse-Engineered Source for: jcos_client.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "jcos_client"

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
#include "jcos_client.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: JcopOsDwnld::finalize() */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld8finalizeEv(void) {
    ALOGD("_ZN11JcopOsDwnld8finalizeEv() called");
    return 0;
}

/* Exported Object: gpJcopOs_Dwnld_Context */
extern "C" __attribute__((visibility("default"))) void* gpJcopOs_Dwnld_Context = NULL;

/* Demangled: JcopOsDwnld::load_JcopOS_image(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld17load_JcopOS_imageEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void) {
    ALOGD("_ZN11JcopOsDwnld17load_JcopOS_imageEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo() called");
    return 0;
}

/* Demangled: JcopOsDwnld::JcopOs_update_seq_handler() */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld25JcopOs_update_seq_handlerEv(void) {
    ALOGD("_ZN11JcopOsDwnld25JcopOs_update_seq_handlerEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Exported Object: isPatchUpdate */
extern "C" __attribute__((visibility("default"))) void* isPatchUpdate = NULL;

/* Exported Object: jd */
extern "C" __attribute__((visibility("default"))) void* jd = NULL;

/* Demangled: JcopOsDwnld::TriggerApdu(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld11TriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void) {
    ALOGD("_ZN11JcopOsDwnld11TriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo() called");
    return 0;
}

/* Demangled: JcopOsDwnld::SetJcopOsState(JcopOs_ImageInfo*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld14SetJcopOsStateEP16JcopOs_ImageInfoh(void) {
    ALOGD("_ZN11JcopOsDwnld14SetJcopOsStateEP16JcopOs_ImageInfoh() called");
    return 0;
}

/* Demangled: JcopOsDwnld::UaiTriggerApdu(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld14UaiTriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void) {
    ALOGD("_ZN11JcopOsDwnld14UaiTriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo() called");
    return 0;
}

/* Demangled: JCDNLD_Init(IChannel*) */
extern "C" __attribute__((visibility("default"))) int _Z11JCDNLD_InitP8IChannel(void) {
    ALOGD("_Z11JCDNLD_InitP8IChannel() called");
    return 0;
}

/* Demangled: JCDNLD_CheckVersion() */
extern "C" __attribute__((visibility("default"))) int _Z19JCDNLD_CheckVersionv(void) {
    ALOGD("_Z19JCDNLD_CheckVersionv() called");
    return 0;
}

/* Exported Object: channel */
extern "C" __attribute__((visibility("default"))) void* channel = NULL;

/* Demangled: JcopOsDwnld::getJcopOsFileInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld17getJcopOsFileInfoEv(void) {
    ALOGD("_ZN11JcopOsDwnld17getJcopOsFileInfoEv() called");
    return 0;
}

/* Demangled: JcopOsDwnld::initialize(IChannel*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld10initializeEP8IChannel(void) {
    ALOGD("_ZN11JcopOsDwnld10initializeEP8IChannel() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Exported Object: JcopOs_dwnld_seqhandler */
extern "C" __attribute__((visibility("default"))) void* JcopOs_dwnld_seqhandler = NULL;

/* Exported Object: JcopOsDwnld::sJcopDwnld */
extern "C" __attribute__((visibility("default"))) void* _ZN11JcopOsDwnld10sJcopDwnldE = NULL;

/* Demangled: JcopOsDwnld::SendUAICmds(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld11SendUAICmdsEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void) {
    ALOGD("_ZN11JcopOsDwnld11SendUAICmdsEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo() called");
    return 0;
}

/* Demangled: JcopOsDwnld::GetJcopOsState(JcopOs_ImageInfo*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld14GetJcopOsStateEP16JcopOs_ImageInfoPh(void) {
    ALOGD("_ZN11JcopOsDwnld14GetJcopOsStateEP16JcopOs_ImageInfoPh() called");
    return 0;
}

/* Exported Object: isUaiEnabled */
extern "C" __attribute__((visibility("default"))) void* isUaiEnabled = NULL;

/* Demangled: JCDNLD_StartDownload() */
extern "C" __attribute__((visibility("default"))) int _Z20JCDNLD_StartDownloadv(void) {
    ALOGD("_Z20JCDNLD_StartDownloadv() called");
    return 0;
}

/* Demangled: JcopOsDwnld::GetInfo(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld7GetInfoEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void) {
    ALOGD("_ZN11JcopOsDwnld7GetInfoEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo() called");
    return 0;
}

/* Demangled: JCDNLD_DeInit() */
extern "C" __attribute__((visibility("default"))) int _Z13JCDNLD_DeInitv(void) {
    ALOGD("_Z13JCDNLD_DeInitv() called");
    return 0;
}

/* Demangled: JcopOsDwnld::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld11getInstanceEv(void) {
    ALOGD("_ZN11JcopOsDwnld11getInstanceEv() called");
    return 0;
}

/* Demangled: JcopOsDwnld::JcopOs_Download() */
extern "C" __attribute__((visibility("default"))) int _ZN11JcopOsDwnld15JcopOs_DownloadEv(void) {
    ALOGD("_ZN11JcopOsDwnld15JcopOs_DownloadEv() called");
    return 0;
}

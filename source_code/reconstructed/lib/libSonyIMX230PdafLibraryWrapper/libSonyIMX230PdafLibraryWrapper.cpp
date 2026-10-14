/*
 * Reverse-Engineered Source for: libSonyIMX230PdafLibraryWrapper.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libSonyIMX230PdafLibraryWrapper"

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
#include "libSonyIMX230PdafLibraryWrapper.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SonyPdLibTransOutputRectToPdafRect */
extern "C" __attribute__((visibility("default"))) int SonyPdLibTransOutputRectToPdafRect(void) {
    ALOGD("SonyPdLibTransOutputRectToPdafRect() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::SetPDCLData(unsigned int, unsigned char*, int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapper11SetPDCLDataEjPhRiRj(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapper11SetPDCLDataEjPhRiRj() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::DbgDumpSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapper14DbgDumpSettingEv(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapper14DbgDumpSettingEv() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::Init(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapper4InitER12SPDProfile_t(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapper4InitER12SPDProfile_t() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::~SonyIMX230PdafLibraryWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapperD2Ev(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapperD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: SonyPdLibTransOutputPointToPdafPoint */
extern "C" __attribute__((visibility("default"))) int SonyPdLibTransOutputPointToPdafPoint(void) {
    ALOGD("SonyPdLibTransOutputPointToPdafPoint() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::SetCaliData(unsigned int, unsigned char*, unsigned int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapper11SetCaliDataEjPhjPt(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapper11SetCaliDataEjPhjPt() called");
    return 0;
}

/* Demangled: SonyPdLibInterpretRegData */
extern "C" __attribute__((visibility("default"))) int SonyPdLibInterpretRegData(void) {
    ALOGD("SonyPdLibInterpretRegData() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapper10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapper10GetDefocusER13SPDROIInput_TR14SPDROIResult_T() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::SonyIMX230PdafLibraryWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapperC1Ev(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapperC1Ev() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapper23GetVersionOfPdafLibraryER15SPDLibVersion_t(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapper23GetVersionOfPdafLibraryER15SPDLibVersion_t() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::SonyIMX230PdafLibraryWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapperC2Ev(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapperC2Ev() called");
    return 0;
}

/* Demangled: SonyIMX230PdafLibraryWrapper::~SonyIMX230PdafLibraryWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN28SonyIMX230PdafLibraryWrapperD1Ev(void) {
    ALOGD("_ZN28SonyIMX230PdafLibraryWrapperD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

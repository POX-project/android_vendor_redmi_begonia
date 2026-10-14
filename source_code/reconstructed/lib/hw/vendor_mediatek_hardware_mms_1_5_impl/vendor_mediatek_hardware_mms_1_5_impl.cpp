/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mms@1.5-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mms_1_5_impl"

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
#include "vendor_mediatek_hardware_mms_1_5_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HIDL_FETCH_IMms */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMms(void) {
    ALOGD("HIDL_FETCH_IMms() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::mmsJpeg_query_buffer(int, int, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation20mmsJpeg_query_bufferEiiPjS5_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation20mmsJpeg_query_bufferEiiPjS5_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::jpegCloseClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms15jpegCloseClientEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms15jpegCloseClientEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::isCopybitSupportedOutFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms27isCopybitSupportedOutFormatEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms27isCopybitSupportedOutFormatEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::Mms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::~Mms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_5::implementation::Mms::~Mms() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_514implementation3MmsD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_514implementation3MmsD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::mapColorFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation14mapColorFormatEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation14mapColorFormatEi() called");
    return 0;
}

/* Demangled: std::__1::function<void (unsigned long long, int)>::operator()(unsigned long long, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvyiEEclEyi(void) {
    ALOGD("_ZNKSt3__18functionIFvyiEEclEyi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_3::IMms-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_NS2_4V1_34IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::BlitStreamAUX(vendor::mediatek::hardware::mms::V1_5::HwMDPParamAUX const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms13BlitStreamAUXERKNS3_13HwMDPParamAUXE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms13BlitStreamAUXERKNS3_13HwMDPParamAUXE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::mdp_run(vendor::mediatek::hardware::mms::V1_1::HwMDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms7mdp_runERKNS2_4V1_110HwMDPParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms7mdp_runERKNS2_4V1_110HwMDPParamE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_NS2_4V1_04IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::mmsJpeg_getVA(int, unsigned int, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation13mmsJpeg_getVAEijPPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation13mmsJpeg_getVAEijPPv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::Mms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::~Mms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_NS2_4V1_24IMmsE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::jpegOpenClient(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms14jpegOpenClientEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms14jpegOpenClientEjj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::va_to_mva(int, int, unsigned long, unsigned int, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation9va_to_mvaEiimjPjPi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation9va_to_mvaEiimjPjPi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_4::IMms-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_NS2_4V1_44IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::BlitStreamFD(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms12BlitStreamFDERKNS2_4V1_310MDPParamFDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms12BlitStreamFDERKNS2_4V1_310MDPParamFDE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::getCopybitDefaultOutFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms26getCopybitDefaultOutFormatEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms26getCopybitDefaultOutFormatEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::copybit(vendor::mediatek::hardware::mms::V1_0::HwCopybitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms7copybitERKNS2_4V1_014HwCopybitParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms7copybitERKNS2_4V1_014HwCopybitParamE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_NS2_4V1_14IMmsE = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::copybit_Bufsize(unsigned int*, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation15copybit_BufsizeEPjiijj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation15copybit_BufsizeEPjiijj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::jpegencode(vendor::mediatek::hardware::mms::V1_0::HwJpegEncoderConfig const&, std::__1::function<void (unsigned long long, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::mmsJpeg_freeVA(unsigned int, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation14mmsJpeg_freeVAEjPPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation14mmsJpeg_freeVAEjPPv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::copybitprofile(vendor::mediatek::hardware::mms::V1_4::HwCopybitParamProfile const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms14copybitprofileERKNS2_4V1_421HwCopybitParamProfileE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms14copybitprofileERKNS2_4V1_421HwCopybitParamProfileE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::~Mms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3MmsD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_5::IMms-in-vendor::mediatek::hardware::mms::V1_5::implementation::Mms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_514implementation3MmsE0_NS3_4IMmsE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_5::implementation::Mms::~Mms() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_514implementation3MmsD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_514implementation3MmsD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::BlitStream(vendor::mediatek::hardware::mms::V1_2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms10BlitStreamERKNS2_4V1_28MDPParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms10BlitStreamERKNS2_4V1_28MDPParamE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_5::implementation::Mms::getCopybitOutUsage(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms18getCopybitOutUsageEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_514implementation3Mms18getCopybitOutUsageEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

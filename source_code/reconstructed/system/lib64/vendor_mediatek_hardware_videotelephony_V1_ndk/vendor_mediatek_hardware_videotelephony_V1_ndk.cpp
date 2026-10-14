/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.videotelephony-V1-ndk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_videotelephony_V1_ndk"

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
#include "vendor_mediatek_hardware_videotelephony_V1_ndk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: guard variable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE = NULL;

/* Exported Object: vtable for aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::readFromParcel(AParcel const*, std::__1::shared_ptr<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony>*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony14readFromParcelEPK7AParcelPNSt3__110shared_ptrIS4_EE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony14readFromParcelEPK7AParcelPNSt3__110shared_ptrIS4_EE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::~IVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyD2Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyD2Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::isRemote() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault8isRemoteEv(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault8isRemoteEv() called");
    return 0;
}

/* Exported Object: vtable for aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::configureFmqMode(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony16configureFmqModeEiPi(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony16configureFmqModeEiPi() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::getInterfaceVersion(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault19getInterfaceVersionEPi(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault19getInterfaceVersionEPi() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony14getDefaultImplEv(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony14getDefaultImplEv() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::~BnVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyD2Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyD2Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::writeToParcel(AParcel*, std::__1::shared_ptr<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony13writeToParcelEP7AParcelRKNSt3__110shared_ptrIS4_EE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony13writeToParcelEP7AParcelRKNSt3__110shared_ptrIS4_EE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::asBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault8asBinderEv(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault8asBinderEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::~IVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyD1Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyD1Ev() called");
    return 0;
}

/* Exported Object: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony12default_implE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::BpVideoTelephony(ndk::SpAIBinder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyC1ERKN3ndk10SpAIBinderE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyC1ERKN3ndk10SpAIBinderE() called");
    return 0;
}

/* Demangled: ndk::BnCInterface<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony>::asBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN3ndk12BnCInterfaceIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEE8asBinderEv(void) {
    ALOGD("_ZN3ndk12BnCInterfaceIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEE8asBinderEv() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::BpVideoTelephony(ndk::SpAIBinder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyC2ERKN3ndk10SpAIBinderE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyC2ERKN3ndk10SpAIBinderE() called");
    return 0;
}

/* Demangled: aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite>::readFromParcel(AParcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl7android8hardware6common3fmq12MQDescriptorIaNS3_21SynchronizedReadWriteEE14readFromParcelEPK7AParcel(void) {
    ALOGD("_ZN4aidl7android8hardware6common3fmq12MQDescriptorIaNS3_21SynchronizedReadWriteEE14readFromParcelEPK7AParcel() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::configureFmqSyncWrite(aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite>*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony21configureFmqSyncWriteEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony21configureFmqSyncWriteEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE() called");
    return 0;
}

/* Exported Object: vtable for ndk::BnCInterface<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3ndk12BnCInterfaceIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEEE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::getInterfaceHash(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephony16getInterfaceHashEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephony16getInterfaceHashEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::fromBinder(ndk::SpAIBinder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony10fromBinderERKN3ndk10SpAIBinderE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony10fromBinderERKN3ndk10SpAIBinderE() called");
    return 0;
}

/* Demangled: int ndk::AParcel_readStdVectorParcelableElement<aidl::android::hardware::common::fmq::GrantorDescriptor>(AParcel const*, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3ndk38AParcel_readStdVectorParcelableElementIN4aidl7android8hardware6common3fmq17GrantorDescriptorEEEiPK7AParcelPvm(void) {
    ALOGD("_ZN3ndk38AParcel_readStdVectorParcelableElementIN4aidl7android8hardware6common3fmq17GrantorDescriptorEEEiPK7AParcelPvm() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::~BpVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyD2Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyD2Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::getInterfaceVersion(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony19getInterfaceVersionEPi(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony19getInterfaceVersionEPi() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::getInterfaceHash(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony16getInterfaceHashEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony16getInterfaceHashEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::~IVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyD0Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: std::__1::vector<aidl::android::hardware::common::fmq::GrantorDescriptor, std::__1::allocator<aidl::android::hardware::common::fmq::GrantorDescriptor> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4aidl7android8hardware6common3fmq17GrantorDescriptorENS_9allocatorIS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN4aidl7android8hardware6common3fmq17GrantorDescriptorENS_9allocatorIS6_EEE8__appendEm() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::~BnVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyD1Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyD1Ev() called");
    return 0;
}

/* Exported Object: vtable for ndk::BpCInterface<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3ndk12BpCInterfaceIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEEE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::configureFmqSyncRead(aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite>*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony20configureFmqSyncReadEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephony20configureFmqSyncReadEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::createBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephony12createBinderEv(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephony12createBinderEv() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::setDefaultImpl(std::__1::shared_ptr<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony14setDefaultImplERKNSt3__110shared_ptrIS4_EE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony14setDefaultImplERKNSt3__110shared_ptrIS4_EE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::getInterfaceHash(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault16getInterfaceHashEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault16getInterfaceHashEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::IVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyC2Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyC2Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::~BpVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyD1Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyD1Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::~BnVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyD0Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyD0Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::getInterfaceVersion(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephony19getInterfaceVersionEPi(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephony19getInterfaceVersionEPi() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::configureFmqSyncWrite(aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite>*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault21configureFmqSyncWriteEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault21configureFmqSyncWriteEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE() called");
    return 0;
}

/* Demangled: int ndk::AParcel_writeStdVectorParcelableElement<aidl::android::hardware::common::fmq::GrantorDescriptor>(AParcel*, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3ndk39AParcel_writeStdVectorParcelableElementIN4aidl7android8hardware6common3fmq17GrantorDescriptorEEEiP7AParcelPKvm(void) {
    ALOGD("_ZN3ndk39AParcel_writeStdVectorParcelableElementIN4aidl7android8hardware6common3fmq17GrantorDescriptorEEEiP7AParcelPKvm() called");
    return 0;
}

/* Exported Object: vtable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefaultE = NULL;

/* Demangled: aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite>::writeToParcel(AParcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4aidl7android8hardware6common3fmq12MQDescriptorIaNS3_21SynchronizedReadWriteEE13writeToParcelEP7AParcel(void) {
    ALOGD("_ZNK4aidl7android8hardware6common3fmq12MQDescriptorIaNS3_21SynchronizedReadWriteEE13writeToParcelEP7AParcel() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BnVideoTelephony::BnVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyC2Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BnVideoTelephonyC2Ev() called");
    return 0;
}

/* Exported Object: vtable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::configureFmqMode(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault16configureFmqModeEiPi(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault16configureFmqModeEiPi() called");
    return 0;
}

/* Exported Object: vtable for ndk::SharedRefBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3ndk13SharedRefBaseE = NULL;

/* Exported Object: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE = NULL;

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::BpVideoTelephony::~BpVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyD0Ev(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony16BpVideoTelephonyD0Ev() called");
    return 0;
}

/* Demangled: ndk::BpCInterface<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony>::asBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN3ndk12BpCInterfaceIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEE8asBinderEv(void) {
    ALOGD("_ZN3ndk12BpCInterfaceIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEE8asBinderEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephonyEED2Ev() called");
    return 0;
}

/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephonyDefault::configureFmqSyncRead(aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite>*) */
extern "C" __attribute__((visibility("default"))) int _ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault20configureFmqSyncReadEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE(void) {
    ALOGD("_ZN4aidl6vendor8mediatek8hardware14videotelephony22IVideoTelephonyDefault20configureFmqSyncReadEPNS_7android8hardware6common3fmq12MQDescriptorIaNS8_21SynchronizedReadWriteEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony10descriptorE = NULL;

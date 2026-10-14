/*
 * Reverse-Engineered Source for: android.hardware.vibrator-service.mediatek
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_vibrator_service_mediatek"

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
#include "android_hardware_vibrator_service_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating android_hardware_vibrator_service_mediatek", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting android_hardware_vibrator_service_mediatek service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("android_hardware_vibrator_service_mediatek service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: guard variable for aidl::android::hardware::vibrator::IVibratorCallback::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl7android8hardware8vibrator17IVibratorCallback4hashE = NULL;

/* Exported Object: guard variable for aidl::android::hardware::vibrator::IVibrator::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl7android8hardware8vibrator9IVibrator4hashE = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Exported Object: aidl::android::hardware::vibrator::IVibratorCallback::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl7android8hardware8vibrator17IVibratorCallback4hashE = NULL;

/* Exported Object: aidl::android::hardware::vibrator::IVibrator::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl7android8hardware8vibrator9IVibrator4hashE = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: ndk::BnCInterface<aidl::android::hardware::vibrator::IVibrator>::asBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN3ndk12BnCInterfaceIN4aidl7android8hardware8vibrator9IVibratorEE8asBinderEv(void) {
    ALOGD("_ZN3ndk12BnCInterfaceIN4aidl7android8hardware8vibrator9IVibratorEE8asBinderEv() called");
    return 0;
}

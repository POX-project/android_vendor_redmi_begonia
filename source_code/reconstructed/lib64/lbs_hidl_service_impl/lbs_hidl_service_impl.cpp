/*
 * Reverse-Engineered Source for: lbs_hidl_service-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "lbs_hidl_service_impl"

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
#include "lbs_hidl_service_impl.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_SOCKET_AGPSD2 "/dev/socket/agpsd2"
#define DEV_DEV_SOCKET_AGPSD3 "/dev/socket/agpsd3"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_SOCKET_AGPSD2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SOCKET_AGPSD2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SOCKET_AGPSD2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_SOCKET_AGPSD3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SOCKET_AGPSD3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SOCKET_AGPSD3, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMtklogger2Mnld */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18hidlMtklogger2MnldE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService::sendToServerWithCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceEED2Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE = NULL;

/* Demangled: safe_strncpy */
extern "C" __attribute__((visibility("default"))) int safe_strncpy(void) {
    ALOGD("safe_strncpy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::LbsHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC1EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC1EPKc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::handleHidlDeath() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService15handleHidlDeathEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService15handleHidlDeathEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::lbs_timeout_restart_enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation27lbs_timeout_restart_enabledEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation27lbs_timeout_restart_enabledEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::g_epfd */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation6g_epfdE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE = NULL;

/* Demangled: mtk_socket_client_connect */
extern "C" __attribute__((visibility("default"))) int mtk_socket_client_connect(void) {
    ALOGD("mtk_socket_client_connect() called");
    return 0;
}

/* Demangled: mtk_socket_write */
extern "C" __attribute__((visibility("default"))) int mtk_socket_write(void) {
    ALOGD("mtk_socket_write() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE0_NS3_4ILbsE = NULL;

/* Demangled: mtk_socket_buff_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_buff_dump(void) {
    ALOGD("mtk_socket_buff_dump() called");
    return 0;
}

/* Demangled: mtk_socket_int64_t_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_int64_t_array_is_equal(void) {
    ALOGD("mtk_socket_int64_t_array_is_equal() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::lbs_timeout_ne_enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation22lbs_timeout_ne_enabledEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation22lbs_timeout_ne_enabledEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_NS3_4ILbsE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE = NULL;

/* Demangled: mtk_socket_get_float */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_float(void) {
    ALOGD("mtk_socket_get_float() called");
    return 0;
}

/* Demangled: mtk_socket_get_string */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_string(void) {
    ALOGD("mtk_socket_get_string() called");
    return 0;
}

/* Demangled: mtk_socket_put_int64_t_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_int64_t_array(void) {
    ALOGD("mtk_socket_put_int64_t_array() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlDebugService2Mnld */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation21hidlDebugService2MnldE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::dump_buff(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation9dump_buffEPKci(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation9dump_buffEPKci() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev() called");
    return 0;
}

/* Demangled: mtk_socket_string_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_string_array_is_equal(void) {
    ALOGD("mtk_socket_string_array_is_equal() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS3_4ILbsE = NULL;

/* Demangled: _mtk_socket_log */
extern "C" __attribute__((visibility("default"))) int _mtk_socket_log(void) {
    ALOGD("_mtk_socket_log() called");
    return 0;
}

/* Demangled: mtk_socket_expected_bool */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_bool(void) {
    ALOGD("mtk_socket_expected_bool() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::g_log_epfd */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10g_log_epfdE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE = NULL;

/* Demangled: mtk_socket_client_close */
extern "C" __attribute__((visibility("default"))) int mtk_socket_client_close(void) {
    ALOGD("mtk_socket_client_close() called");
    return 0;
}

/* Demangled: mtk_socket_int_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_int_array_dump(void) {
    ALOGD("mtk_socket_int_array_dump() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlApn2Agps */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlApn2AgpsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService::UdpHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC2EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC2EPKc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::init_timer_id(void (*)(sigval), int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13init_timer_idEPFv6sigvalEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation13init_timer_idEPFv6sigvalEi() called");
    return 0;
}

/* Demangled: mtk_socket_put_short */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_short(void) {
    ALOGD("mtk_socket_put_short() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlAgpsDebugInterface */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation22hidlAgpsDebugInterfaceE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_NS3_4ILbsE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE = NULL;

/* Demangled: mtk_socket_get_char_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_char_array(void) {
    ALOGD("mtk_socket_get_char_array() called");
    return 0;
}

/* Demangled: mtk_socket_put_bool */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_bool(void) {
    ALOGD("mtk_socket_put_bool() called");
    return 0;
}

/* Demangled: mtk_socket_string_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_string_array_dump(void) {
    ALOGD("mtk_socket_string_array_dump() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlAgps2Apn */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlAgps2ApnE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_NS4_14LbsHidlServiceE = NULL;

/* Demangled: mtk_socket_tcp_connect_local */
extern "C" __attribute__((visibility("default"))) int mtk_socket_tcp_connect_local(void) {
    ALOGD("mtk_socket_tcp_connect_local() called");
    return 0;
}

/* Demangled: mtk_socket_client_cleanup */
extern "C" __attribute__((visibility("default"))) int mtk_socket_client_cleanup(void) {
    ALOGD("mtk_socket_client_cleanup() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::handleSocketEvent(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService17handleSocketEventEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService17handleSocketEventEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService::UdpHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC1EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC1EPKc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::handleHidlDeath() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService15handleHidlDeathEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService15handleHidlDeathEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_NS3_4ILbsE = NULL;

/* Demangled: mtk_socket_put_double */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_double(void) {
    ALOGD("mtk_socket_put_double() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation15hidlLPPeNetworkE = NULL;

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMnld2DebugService */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation21hidlMnld2DebugServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::cpp_main() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation8cpp_mainEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation8cpp_mainEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::LbsHidlDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService21LbsHidlDeathRecipientE = NULL;

/* Demangled: mtk_socket_put_double_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_double_array(void) {
    ALOGD("mtk_socket_put_double_array() called");
    return 0;
}

/* Demangled: mtk_socket_put_int_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_int_array(void) {
    ALOGD("mtk_socket_put_int_array() called");
    return 0;
}

/* Demangled: mtk_socket_put_string_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_string_array(void) {
    ALOGD("mtk_socket_put_string_array() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::deinit_timer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12deinit_timerEPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation12deinit_timerEPv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::covertVector2Array(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::Agps2ApnHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC2EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC2EPKc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::handleHidlDeath() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService15handleHidlDeathEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService15handleHidlDeathEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS4_14LbsHidlServiceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE = NULL;

/* Demangled: mtk_socket_poll */
extern "C" __attribute__((visibility("default"))) int mtk_socket_poll(void) {
    ALOGD("mtk_socket_poll() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::sendToServerWithCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mtk_socket_put_int */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_int(void) {
    ALOGD("mtk_socket_put_int() called");
    return 0;
}

/* Demangled: mtk_socket_put_int64_t */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_int64_t(void) {
    ALOGD("mtk_socket_put_int64_t() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::handleCase */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10handleCaseE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: mtk_socket_get_bool */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_bool(void) {
    ALOGD("mtk_socket_get_bool() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeBT */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10hidlLPPeBTE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::Agps2ApnHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC1EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC1EPKc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::handleSocketEvent(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService17handleSocketEventEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService17handleSocketEventEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::start_timer(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11start_timerEPvi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation11start_timerEPvi() called");
    return 0;
}

/* Demangled: mtk_socket_get_short */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_short(void) {
    ALOGD("mtk_socket_get_short() called");
    return 0;
}

/* Demangled: mtk_socket_bool_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_bool_array_is_equal(void) {
    ALOGD("mtk_socket_bool_array_is_equal() called");
    return 0;
}

/* Demangled: mtk_socket_char_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_char_array_dump(void) {
    ALOGD("mtk_socket_char_array_dump() called");
    return 0;
}

/* Demangled: mtk_socket_expected_float */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_float(void) {
    ALOGD("mtk_socket_expected_float() called");
    return 0;
}

/* Demangled: mtk_socket_float_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_float_array_is_equal(void) {
    ALOGD("mtk_socket_float_array_is_equal() called");
    return 0;
}

/* Demangled: mtk_socket_short_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_short_array_is_equal(void) {
    ALOGD("mtk_socket_short_array_is_equal() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::init_timer(void (*)(sigval)) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10init_timerEPFv6sigvalE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation10init_timerEPFv6sigvalE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char>(unsigned char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE = NULL;

/* Demangled: mtk_socket_double_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_double_array_is_equal(void) {
    ALOGD("mtk_socket_double_array_is_equal() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeLbs */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11hidlLPPeLbsE = NULL;

/* Demangled: mtk_socket_get_int_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_int_array(void) {
    ALOGD("mtk_socket_get_int_array() called");
    return 0;
}

/* Demangled: mtk_socket_expected_double */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_double(void) {
    ALOGD("mtk_socket_expected_double() called");
    return 0;
}

/* Demangled: mtk_socket_put_char_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_char_array(void) {
    ALOGD("mtk_socket_put_char_array() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMnld2Mtklogger */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18hidlMnld2MtkloggerE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::getSocketFd() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11getSocketFdEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11getSocketFdEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: mtk_socket_put_string */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_string(void) {
    ALOGD("mtk_socket_put_string() called");
    return 0;
}

/* Demangled: mtk_socket_expected_int64_t */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_int64_t(void) {
    ALOGD("mtk_socket_expected_int64_t() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceEED2Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE = NULL;

/* Demangled: mtk_socket_get_int64_t_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_int64_t_array(void) {
    ALOGD("mtk_socket_get_int64_t_array() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeSensor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14hidlLPPeSensorE = NULL;

/* Demangled: mtk_socket_get_bool_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_bool_array(void) {
    ALOGD("mtk_socket_get_bool_array() called");
    return 0;
}

/* Demangled: mtk_socket_put_float_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_float_array(void) {
    ALOGD("mtk_socket_put_float_array() called");
    return 0;
}

/* Demangled: mtk_socket_expected_char */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_char(void) {
    ALOGD("mtk_socket_expected_char() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMeta2Mnld */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13hidlMeta2MnldE = NULL;

/* Demangled: mtk_socket_short_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_short_array_dump(void) {
    ALOGD("mtk_socket_short_array_dump() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev() called");
    return 0;
}

/* Demangled: mtk_socket_float_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_float_array_dump(void) {
    ALOGD("mtk_socket_float_array_dump() called");
    return 0;
}

/* Demangled: mtk_socket_server_bind_network */
extern "C" __attribute__((visibility("default"))) int mtk_socket_server_bind_network(void) {
    ALOGD("mtk_socket_server_bind_network() called");
    return 0;
}

/* Demangled: mtk_socket_string_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_string_is_equal(void) {
    ALOGD("mtk_socket_string_is_equal() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlAgpsInterface */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation17hidlAgpsInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService::AgpsInterfaceHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC2EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC2EPKc() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::g_ver */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation5g_verE = NULL;

/* Demangled: mtk_socket_put_char */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_char(void) {
    ALOGD("mtk_socket_put_char() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMnld2NlpUtils */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation17hidlMnld2NlpUtilsE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::covertArray2Vector(char const*, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: mtk_socket_get_double */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_double(void) {
    ALOGD("mtk_socket_get_double() called");
    return 0;
}

/* Demangled: mtk_socket_get_int64_t */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_int64_t(void) {
    ALOGD("mtk_socket_get_int64_t() called");
    return 0;
}

/* Demangled: mtk_socket_expected_int */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_int(void) {
    ALOGD("mtk_socket_expected_int() called");
    return 0;
}

/* Demangled: mtk_socket_int64_t_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_int64_t_array_dump(void) {
    ALOGD("mtk_socket_int64_t_array_dump() called");
    return 0;
}

/* Demangled: mtk_socket_read */
extern "C" __attribute__((visibility("default"))) int mtk_socket_read(void) {
    ALOGD("mtk_socket_read() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::dump_vector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11dump_vectorERNSt3__16vectorIhNS5_9allocatorIhEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation11dump_vectorERNSt3__16vectorIhNS5_9allocatorIhEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeWlan */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlLPPeWlanE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::AgpsDebugInterfaceHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC2EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC2EPKc() called");
    return 0;
}

/* Demangled: mtk_socket_client_init_network */
extern "C" __attribute__((visibility("default"))) int mtk_socket_client_init_network(void) {
    ALOGD("mtk_socket_client_init_network() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeAgps */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlLPPeAgpsE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS4_14UdpHidlServiceE = NULL;

/* Demangled: mtk_socket_put_short_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_short_array(void) {
    ALOGD("mtk_socket_put_short_array() called");
    return 0;
}

/* Demangled: mtk_socket_expected_string */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_string(void) {
    ALOGD("mtk_socket_expected_string() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService::AgpsInterfaceHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC1EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC1EPKc() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceEED2Ev() called");
    return 0;
}

/* Demangled: mtk_socket_get_int */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_int(void) {
    ALOGD("mtk_socket_get_int() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::stop_timer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10stop_timerEPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation10stop_timerEPv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE = NULL;

/* Demangled: mtk_socket_expected_short */
extern "C" __attribute__((visibility("default"))) int mtk_socket_expected_short(void) {
    ALOGD("mtk_socket_expected_short() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLbsLogv2s */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13hidlLbsLogv2sE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::AgpsDebugInterfaceHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC1EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC1EPKc() called");
    return 0;
}

/* Demangled: mtk_socket_get_float_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_float_array(void) {
    ALOGD("mtk_socket_get_float_array() called");
    return 0;
}

/* Demangled: mtk_socket_put_float */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_float(void) {
    ALOGD("mtk_socket_put_float() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeIpAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14hidlLPPeIpAddrE = NULL;

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::getSocketFd() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11getSocketFdEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11getSocketFdEv() called");
    return 0;
}

/* Demangled: mtk_socket_get_char */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_char(void) {
    ALOGD("mtk_socket_get_char() called");
    return 0;
}

/* Demangled: mtk_socket_server_bind_network_ipv6 */
extern "C" __attribute__((visibility("default"))) int mtk_socket_server_bind_network_ipv6(void) {
    ALOGD("mtk_socket_server_bind_network_ipv6() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: mtk_socket_put_bool_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_put_bool_array(void) {
    ALOGD("mtk_socket_put_bool_array() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_NS4_14LbsHidlServiceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE = NULL;

/* Demangled: mtk_socket_client_init_local */
extern "C" __attribute__((visibility("default"))) int mtk_socket_client_init_local(void) {
    ALOGD("mtk_socket_client_init_local() called");
    return 0;
}

/* Demangled: mtk_socket_server_bind_local */
extern "C" __attribute__((visibility("default"))) int mtk_socket_server_bind_local(void) {
    ALOGD("mtk_socket_server_bind_local() called");
    return 0;
}

/* Demangled: mtk_socket_get_short_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_short_array(void) {
    ALOGD("mtk_socket_get_short_array() called");
    return 0;
}

/* Demangled: mtk_socket_char_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_char_array_is_equal(void) {
    ALOGD("mtk_socket_char_array_is_equal() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::LbsHidlService(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC2EPKc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC2EPKc() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_NS4_14LbsHidlServiceE = NULL;

/* Demangled: mtk_socket_bool_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_bool_array_dump(void) {
    ALOGD("mtk_socket_bool_array_dump() called");
    return 0;
}

/* Demangled: mtk_socket_double_array_dump */
extern "C" __attribute__((visibility("default"))) int mtk_socket_double_array_dump(void) {
    ALOGD("mtk_socket_double_array_dump() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::epoll_add_fd(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12epoll_add_fdEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3lbs4V1_014implementation12epoll_add_fdEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: mtk_socket_get_double_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_double_array(void) {
    ALOGD("mtk_socket_get_double_array() called");
    return 0;
}

/* Demangled: mtk_socket_get_string_array */
extern "C" __attribute__((visibility("default"))) int mtk_socket_get_string_array(void) {
    ALOGD("mtk_socket_get_string_array() called");
    return 0;
}

/* Demangled: mtk_socket_int_array_is_equal */
extern "C" __attribute__((visibility("default"))) int mtk_socket_int_array_is_equal(void) {
    ALOGD("mtk_socket_int_array_is_equal() called");
    return 0;
}

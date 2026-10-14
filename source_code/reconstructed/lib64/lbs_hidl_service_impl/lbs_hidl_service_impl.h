/*
 * Reverse-Engineered ABI Specification for: lbs_hidl_service-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: lbs_hidl_service-impl.so
 */

#ifndef BEGONIA_RE_LBS_HIDL_SERVICE_IMPL_H
#define BEGONIA_RE_LBS_HIDL_SERVICE_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18hidlMtklogger2MnldE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMtklogger2Mnld */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18hidlMtklogger2MnldE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService::sendToServerWithCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceEED2Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE;

/* Symbol: safe_strncpy */
/* Demangled: safe_strncpy */
int safe_strncpy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC1EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::LbsHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC1EPKc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService15handleHidlDeathEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::handleHidlDeath() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService15handleHidlDeathEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation27lbs_timeout_restart_enabledEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::lbs_timeout_restart_enabled() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation27lbs_timeout_restart_enabledEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation6g_epfdE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::g_epfd */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation6g_epfdE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE;

/* Symbol: mtk_socket_client_connect */
/* Demangled: mtk_socket_client_connect */
int mtk_socket_client_connect(void);

/* Symbol: mtk_socket_write */
/* Demangled: mtk_socket_write */
int mtk_socket_write(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE0_NS3_4ILbsE;

/* Symbol: mtk_socket_buff_dump */
/* Demangled: mtk_socket_buff_dump */
int mtk_socket_buff_dump(void);

/* Symbol: mtk_socket_int64_t_array_is_equal */
/* Demangled: mtk_socket_int64_t_array_is_equal */
int mtk_socket_int64_t_array_is_equal(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation22lbs_timeout_ne_enabledEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::lbs_timeout_ne_enabled() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation22lbs_timeout_ne_enabledEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_NS3_4ILbsE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE;

/* Symbol: mtk_socket_get_float */
/* Demangled: mtk_socket_get_float */
int mtk_socket_get_float(void);

/* Symbol: mtk_socket_get_string */
/* Demangled: mtk_socket_get_string */
int mtk_socket_get_string(void);

/* Symbol: mtk_socket_put_int64_t_array */
/* Demangled: mtk_socket_put_int64_t_array */
int mtk_socket_put_int64_t_array(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation21hidlDebugService2MnldE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlDebugService2Mnld */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation21hidlDebugService2MnldE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation9dump_buffEPKci */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::dump_buff(char const*, int) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation9dump_buffEPKci(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev(void);

/* Symbol: mtk_socket_string_array_is_equal */
/* Demangled: mtk_socket_string_array_is_equal */
int mtk_socket_string_array_is_equal(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS3_4ILbsE;

/* Symbol: _mtk_socket_log */
/* Demangled: _mtk_socket_log */
int _mtk_socket_log(void);

/* Symbol: mtk_socket_expected_bool */
/* Demangled: mtk_socket_expected_bool */
int mtk_socket_expected_bool(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10g_log_epfdE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::g_log_epfd */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10g_log_epfdE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE;

/* Symbol: mtk_socket_client_close */
/* Demangled: mtk_socket_client_close */
int mtk_socket_client_close(void);

/* Symbol: mtk_socket_int_array_dump */
/* Demangled: mtk_socket_int_array_dump */
int mtk_socket_int_array_dump(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlApn2AgpsE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlApn2Agps */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlApn2AgpsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC2EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService::UdpHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC2EPKc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13init_timer_idEPFv6sigvalEi */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::init_timer_id(void (*)(sigval), int) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13init_timer_idEPFv6sigvalEi(void);

/* Symbol: mtk_socket_put_short */
/* Demangled: mtk_socket_put_short */
int mtk_socket_put_short(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation22hidlAgpsDebugInterfaceE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlAgpsDebugInterface */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation22hidlAgpsDebugInterfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_NS3_4ILbsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE;

/* Symbol: mtk_socket_get_char_array */
/* Demangled: mtk_socket_get_char_array */
int mtk_socket_get_char_array(void);

/* Symbol: mtk_socket_put_bool */
/* Demangled: mtk_socket_put_bool */
int mtk_socket_put_bool(void);

/* Symbol: mtk_socket_string_array_dump */
/* Demangled: mtk_socket_string_array_dump */
int mtk_socket_string_array_dump(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlAgps2ApnE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlAgps2Apn */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlAgps2ApnE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_NS4_14LbsHidlServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_NS4_14LbsHidlServiceE;

/* Symbol: mtk_socket_tcp_connect_local */
/* Demangled: mtk_socket_tcp_connect_local */
int mtk_socket_tcp_connect_local(void);

/* Symbol: mtk_socket_client_cleanup */
/* Demangled: mtk_socket_client_cleanup */
int mtk_socket_client_cleanup(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService17handleSocketEventEi */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::handleSocketEvent(int) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService17handleSocketEventEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC1EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService::UdpHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceC1EPKc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService15handleHidlDeathEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::handleHidlDeath() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService15handleHidlDeathEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_NS3_4ILbsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::ILbs-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE0_NS3_4ILbsE;

/* Symbol: mtk_socket_put_double */
/* Demangled: mtk_socket_put_double */
int mtk_socket_put_double(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation15hidlLPPeNetworkE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeNetwork */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation15hidlLPPeNetworkE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation21hidlMnld2DebugServiceE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMnld2DebugService */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation21hidlMnld2DebugServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation8cpp_mainEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::cpp_main() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation8cpp_mainEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService21LbsHidlDeathRecipientE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::LbsHidlDeathRecipient */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService21LbsHidlDeathRecipientE;

/* Symbol: mtk_socket_put_double_array */
/* Demangled: mtk_socket_put_double_array */
int mtk_socket_put_double_array(void);

/* Symbol: mtk_socket_put_int_array */
/* Demangled: mtk_socket_put_int_array */
int mtk_socket_put_int_array(void);

/* Symbol: mtk_socket_put_string_array */
/* Demangled: mtk_socket_put_string_array */
int mtk_socket_put_string_array(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12deinit_timerEPv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::deinit_timer(void*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12deinit_timerEPv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::covertVector2Array(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, char*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC2EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::Agps2ApnHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC2EPKc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService15handleHidlDeathEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::handleHidlDeath() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService15handleHidlDeathEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService::sendToServer(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlService12sendToServerERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS4_14LbsHidlServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS4_14LbsHidlServiceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE;

/* Symbol: mtk_socket_poll */
/* Demangled: mtk_socket_poll */
int mtk_socket_poll(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::sendToServerWithCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService24sendToServerWithCallbackERKN7android2spINS3_12ILbsCallbackEEERKNS6_8hardware8hidl_vecIhEE(void);

/* Symbol: mtk_socket_put_int */
/* Demangled: mtk_socket_put_int */
int mtk_socket_put_int(void);

/* Symbol: mtk_socket_put_int64_t */
/* Demangled: mtk_socket_put_int64_t */
int mtk_socket_put_int64_t(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10handleCaseE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::handleCase */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10handleCaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: mtk_socket_get_bool */
/* Demangled: mtk_socket_get_bool */
int mtk_socket_get_bool(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10hidlLPPeBTE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeBT */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10hidlLPPeBTE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC1EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::Agps2ApnHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceC1EPKc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService17handleSocketEventEi */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::handleSocketEvent(int) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService17handleSocketEventEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11start_timerEPvi */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::start_timer(void*, int) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11start_timerEPvi(void);

/* Symbol: mtk_socket_get_short */
/* Demangled: mtk_socket_get_short */
int mtk_socket_get_short(void);

/* Symbol: mtk_socket_bool_array_is_equal */
/* Demangled: mtk_socket_bool_array_is_equal */
int mtk_socket_bool_array_is_equal(void);

/* Symbol: mtk_socket_char_array_dump */
/* Demangled: mtk_socket_char_array_dump */
int mtk_socket_char_array_dump(void);

/* Symbol: mtk_socket_expected_float */
/* Demangled: mtk_socket_expected_float */
int mtk_socket_expected_float(void);

/* Symbol: mtk_socket_float_array_is_equal */
/* Demangled: mtk_socket_float_array_is_equal */
int mtk_socket_float_array_is_equal(void);

/* Symbol: mtk_socket_short_array_is_equal */
/* Demangled: mtk_socket_short_array_is_equal */
int mtk_socket_short_array_is_equal(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10init_timerEPFv6sigvalE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::init_timer(void (*)(sigval)) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10init_timerEPFv6sigvalE(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_ */
/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char>(unsigned char&&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE;

/* Symbol: mtk_socket_double_array_is_equal */
/* Demangled: mtk_socket_double_array_is_equal */
int mtk_socket_double_array_is_equal(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11hidlLPPeLbsE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeLbs */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11hidlLPPeLbsE;

/* Symbol: mtk_socket_get_int_array */
/* Demangled: mtk_socket_get_int_array */
int mtk_socket_get_int_array(void);

/* Symbol: mtk_socket_expected_double */
/* Demangled: mtk_socket_expected_double */
int mtk_socket_expected_double(void);

/* Symbol: mtk_socket_put_char_array */
/* Demangled: mtk_socket_put_char_array */
int mtk_socket_put_char_array(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18hidlMnld2MtkloggerE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMnld2Mtklogger */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18hidlMnld2MtkloggerE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11getSocketFdEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService::getSocketFd() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlService11getSocketFdEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: mtk_socket_put_string */
/* Demangled: mtk_socket_put_string */
int mtk_socket_put_string(void);

/* Symbol: mtk_socket_expected_int64_t */
/* Demangled: mtk_socket_expected_int64_t */
int mtk_socket_expected_int64_t(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceEED2Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE;

/* Symbol: mtk_socket_get_int64_t_array */
/* Demangled: mtk_socket_get_int64_t_array */
int mtk_socket_get_int64_t_array(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14hidlLPPeSensorE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeSensor */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14hidlLPPeSensorE;

/* Symbol: mtk_socket_get_bool_array */
/* Demangled: mtk_socket_get_bool_array */
int mtk_socket_get_bool_array(void);

/* Symbol: mtk_socket_put_float_array */
/* Demangled: mtk_socket_put_float_array */
int mtk_socket_put_float_array(void);

/* Symbol: mtk_socket_expected_char */
/* Demangled: mtk_socket_expected_char */
int mtk_socket_expected_char(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13hidlMeta2MnldE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMeta2Mnld */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13hidlMeta2MnldE;

/* Symbol: mtk_socket_short_array_dump */
/* Demangled: mtk_socket_short_array_dump */
int mtk_socket_short_array_dump(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
int _ZTv0_n24_N6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD1Ev(void);

/* Symbol: mtk_socket_float_array_dump */
/* Demangled: mtk_socket_float_array_dump */
int mtk_socket_float_array_dump(void);

/* Symbol: mtk_socket_server_bind_network */
/* Demangled: mtk_socket_server_bind_network */
int mtk_socket_server_bind_network(void);

/* Symbol: mtk_socket_string_is_equal */
/* Demangled: mtk_socket_string_is_equal */
int mtk_socket_string_is_equal(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation17hidlAgpsInterfaceE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlAgpsInterface */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation17hidlAgpsInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC2EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService::AgpsInterfaceHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC2EPKc(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation5g_verE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::g_ver */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation5g_verE;

/* Symbol: mtk_socket_put_char */
/* Demangled: mtk_socket_put_char */
int mtk_socket_put_char(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::setCallback(android::sp<vendor::mediatek::hardware::lbs::V1_0::ILbsCallback> const&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlService11setCallbackERKN7android2spINS3_12ILbsCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation17hidlMnld2NlpUtilsE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlMnld2NlpUtils */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation17hidlMnld2NlpUtilsE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::covertArray2Vector(char const*, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE(void);

/* Symbol: mtk_socket_get_double */
/* Demangled: mtk_socket_get_double */
int mtk_socket_get_double(void);

/* Symbol: mtk_socket_get_int64_t */
/* Demangled: mtk_socket_get_int64_t */
int mtk_socket_get_int64_t(void);

/* Symbol: mtk_socket_expected_int */
/* Demangled: mtk_socket_expected_int */
int mtk_socket_expected_int(void);

/* Symbol: mtk_socket_int64_t_array_dump */
/* Demangled: mtk_socket_int64_t_array_dump */
int mtk_socket_int64_t_array_dump(void);

/* Symbol: mtk_socket_read */
/* Demangled: mtk_socket_read */
int mtk_socket_read(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11dump_vectorERNSt3__16vectorIhNS5_9allocatorIhEEEE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::dump_vector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation11dump_vectorERNSt3__16vectorIhNS5_9allocatorIhEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlLPPeWlanE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeWlan */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlLPPeWlanE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC2EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::AgpsDebugInterfaceHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC2EPKc(void);

/* Symbol: mtk_socket_client_init_network */
/* Demangled: mtk_socket_client_init_network */
int mtk_socket_client_init_network(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlLPPeAgpsE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeAgps */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12hidlLPPeAgpsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS4_14UdpHidlServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_NS4_14UdpHidlServiceE;

/* Symbol: mtk_socket_put_short_array */
/* Demangled: mtk_socket_put_short_array */
int mtk_socket_put_short_array(void);

/* Symbol: mtk_socket_expected_string */
/* Demangled: mtk_socket_expected_string */
int mtk_socket_expected_string(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC1EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService::AgpsInterfaceHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceC1EPKc(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceEED2Ev(void);

/* Symbol: mtk_socket_get_int */
/* Demangled: mtk_socket_get_int */
int mtk_socket_get_int(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10stop_timerEPv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::stop_timer(void*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation10stop_timerEPv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern void* _ZTVN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE;

/* Symbol: mtk_socket_expected_short */
/* Demangled: mtk_socket_expected_short */
int mtk_socket_expected_short(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13hidlLbsLogv2sE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLbsLogv2s */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation13hidlLbsLogv2sE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD2Ev */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::~LbsHidlService() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC1EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::AgpsDebugInterfaceHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceC1EPKc(void);

/* Symbol: mtk_socket_get_float_array */
/* Demangled: mtk_socket_get_float_array */
int mtk_socket_get_float_array(void);

/* Symbol: mtk_socket_put_float */
/* Demangled: mtk_socket_put_float */
int mtk_socket_put_float(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14hidlLPPeIpAddrE */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::hidlLPPeIpAddr */
extern void* _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14hidlLPPeIpAddrE;

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11getSocketFdEv */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService::getSocketFd() */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlService11getSocketFdEv(void);

/* Symbol: mtk_socket_get_char */
/* Demangled: mtk_socket_get_char */
int mtk_socket_get_char(void);

/* Symbol: mtk_socket_server_bind_network_ipv6 */
/* Demangled: mtk_socket_server_bind_network_ipv6 */
int mtk_socket_server_bind_network_ipv6(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: mtk_socket_put_bool_array */
/* Demangled: mtk_socket_put_bool_array */
int mtk_socket_put_bool_array(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_NS4_14LbsHidlServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsDebugInterfaceHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation29AgpsDebugInterfaceHidlServiceE0_NS4_14LbsHidlServiceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::lbs::V1_0::implementation::AgpsInterfaceHidlService */
extern void* _ZTTN6vendor8mediatek8hardware3lbs4V1_014implementation24AgpsInterfaceHidlServiceE;

/* Symbol: mtk_socket_client_init_local */
/* Demangled: mtk_socket_client_init_local */
int mtk_socket_client_init_local(void);

/* Symbol: mtk_socket_server_bind_local */
/* Demangled: mtk_socket_server_bind_local */
int mtk_socket_server_bind_local(void);

/* Symbol: mtk_socket_get_short_array */
/* Demangled: mtk_socket_get_short_array */
int mtk_socket_get_short_array(void);

/* Symbol: mtk_socket_char_array_is_equal */
/* Demangled: mtk_socket_char_array_is_equal */
int mtk_socket_char_array_is_equal(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC2EPKc */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService::LbsHidlService(char const*) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation14LbsHidlServiceC2EPKc(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_NS4_14LbsHidlServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::lbs::V1_0::implementation::LbsHidlService-in-vendor::mediatek::hardware::lbs::V1_0::implementation::UdpHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation14UdpHidlServiceE0_NS4_14LbsHidlServiceE;

/* Symbol: mtk_socket_bool_array_dump */
/* Demangled: mtk_socket_bool_array_dump */
int mtk_socket_bool_array_dump(void);

/* Symbol: mtk_socket_double_array_dump */
/* Demangled: mtk_socket_double_array_dump */
int mtk_socket_double_array_dump(void);

/* Symbol: _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12epoll_add_fdEii */
/* Demangled: vendor::mediatek::hardware::lbs::V1_0::implementation::epoll_add_fd(int, int) */
int _ZN6vendor8mediatek8hardware3lbs4V1_014implementation12epoll_add_fdEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::lbs::V1_0::implementation::Agps2ApnHidlService */
extern void* _ZTCN6vendor8mediatek8hardware3lbs4V1_014implementation19Agps2ApnHidlServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: mtk_socket_get_double_array */
/* Demangled: mtk_socket_get_double_array */
int mtk_socket_get_double_array(void);

/* Symbol: mtk_socket_get_string_array */
/* Demangled: mtk_socket_get_string_array */
int mtk_socket_get_string_array(void);

/* Symbol: mtk_socket_int_array_is_equal */
/* Demangled: mtk_socket_int_array_is_equal */
int mtk_socket_int_array_is_equal(void);

__END_DECLS

#endif /* BEGONIA_RE_LBS_HIDL_SERVICE_IMPL_H */

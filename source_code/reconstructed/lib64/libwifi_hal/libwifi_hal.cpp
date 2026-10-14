/*
 * Reverse-Engineered Source for: libwifi-hal.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libwifi_hal"

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
#include "libwifi_hal.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_WMTWIFI "/dev/wmtWifi"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_WMTWIFI, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_WMTWIFI, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_WMTWIFI, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::wifi_hal::DriverTool::ChangeFirmwareMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8wifi_hal10DriverTool18ChangeFirmwareModeEi(void) {
    ALOGD("_ZN7android8wifi_hal10DriverTool18ChangeFirmwareModeEi() called");
    return 0;
}

/* Demangled: wifi_register_cmd(wifi_info*, int, WifiCommand*) */
extern "C" __attribute__((visibility("default"))) int _Z17wifi_register_cmdP9wifi_infoiP11WifiCommand(void) {
    ALOGD("_Z17wifi_register_cmdP9wifi_infoiP11WifiCommand() called");
    return 0;
}

/* Demangled: wifi_unregister_vendor_handler(wifi_info*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z30wifi_unregister_vendor_handlerP9wifi_infoji(void) {
    ALOGD("_Z30wifi_unregister_vendor_handlerP9wifi_infoji() called");
    return 0;
}

/* Exported Object: vtable for GetChannelListCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV21GetChannelListCommand = NULL;

/* Demangled: wifi_set_scanning_mac_oui */
extern "C" __attribute__((visibility("default"))) int wifi_set_scanning_mac_oui(void) {
    ALOGD("wifi_set_scanning_mac_oui() called");
    return 0;
}

/* Demangled: wifi_stop_sending_offloaded_packet */
extern "C" __attribute__((visibility("default"))) int wifi_stop_sending_offloaded_packet(void) {
    ALOGD("wifi_stop_sending_offloaded_packet() called");
    return 0;
}

/* Demangled: getIfaceHandle(interface_info*) */
extern "C" __attribute__((visibility("default"))) int _Z14getIfaceHandleP14interface_info(void) {
    ALOGD("_Z14getIfaceHandleP14interface_info() called");
    return 0;
}

/* Demangled: wifi_register_handler(wifi_info*, int, int (*)(nl_msg*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z21wifi_register_handlerP9wifi_infoiPFiP6nl_msgPvES3_(void) {
    ALOGD("_Z21wifi_register_handlerP9wifi_infoiPFiP6nl_msgPvES3_() called");
    return 0;
}

/* Demangled: getWifiHandle(wifi_interface_info*) */
extern "C" __attribute__((visibility("default"))) int _Z13getWifiHandleP19wifi_interface_info(void) {
    ALOGD("_Z13getWifiHandleP19wifi_interface_info() called");
    return 0;
}

/* Demangled: wifi_get_roaming_capabilities */
extern "C" __attribute__((visibility("default"))) int wifi_get_roaming_capabilities(void) {
    ALOGD("wifi_get_roaming_capabilities() called");
    return 0;
}

/* Exported Object: vtable for WifiCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV11WifiCommand = NULL;

/* Exported Object: vtable for GetFeatureSetCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV20GetFeatureSetCommand = NULL;

/* Demangled: wifi_get_ifaces */
extern "C" __attribute__((visibility("default"))) int wifi_get_ifaces(void) {
    ALOGD("wifi_get_ifaces() called");
    return 0;
}

/* Exported Object: android::wifi_hal::DriverTool::kFirmwareModeSta */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8wifi_hal10DriverTool16kFirmwareModeStaE = NULL;

/* Demangled: wifi_unload_driver */
extern "C" __attribute__((visibility("default"))) int wifi_unload_driver(void) {
    ALOGD("wifi_unload_driver() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: init_wifi_vendor_hal_func_table */
extern "C" __attribute__((visibility("default"))) int init_wifi_vendor_hal_func_table(void) {
    ALOGD("init_wifi_vendor_hal_func_table() called");
    return 0;
}

/* Demangled: wifi_cancel_cmd(int, wifi_interface_info*) */
extern "C" __attribute__((visibility("default"))) int _Z15wifi_cancel_cmdiP19wifi_interface_info(void) {
    ALOGD("_Z15wifi_cancel_cmdiP19wifi_interface_info() called");
    return 0;
}

/* Demangled: wifi_socket_set_local_port(nl_sock*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26wifi_socket_set_local_portP7nl_sockj(void) {
    ALOGD("_Z26wifi_socket_set_local_portP7nl_sockj() called");
    return 0;
}

/* Demangled: WifiCommand::requestResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand15requestResponseEv(void) {
    ALOGD("_ZN11WifiCommand15requestResponseEv() called");
    return 0;
}

/* Demangled: wifi_get_driver_version */
extern "C" __attribute__((visibility("default"))) int wifi_get_driver_version(void) {
    ALOGD("wifi_get_driver_version() called");
    return 0;
}

/* Demangled: wifi_get_supported_feature_set */
extern "C" __attribute__((visibility("default"))) int wifi_get_supported_feature_set(void) {
    ALOGD("wifi_get_supported_feature_set() called");
    return 0;
}

/* Demangled: wifi_select_tx_power_scenario */
extern "C" __attribute__((visibility("default"))) int wifi_select_tx_power_scenario(void) {
    ALOGD("wifi_select_tx_power_scenario() called");
    return 0;
}

/* Exported Object: vtable for android::wifi_hal::DriverTool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8wifi_hal10DriverToolE = NULL;

/* Demangled: wifi_change_fw_path */
extern "C" __attribute__((visibility("default"))) int wifi_change_fw_path(void) {
    ALOGD("wifi_change_fw_path() called");
    return 0;
}

/* Demangled: WifiCommand::requestResponse(WifiRequest&) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand15requestResponseER11WifiRequest(void) {
    ALOGD("_ZN11WifiCommand15requestResponseER11WifiRequest() called");
    return 0;
}

/* Demangled: WifiEvent::parse() */
extern "C" __attribute__((visibility("default"))) int _ZN9WifiEvent5parseEv(void) {
    ALOGD("_ZN9WifiEvent5parseEv() called");
    return 0;
}

/* Exported Object: android::wifi_hal::DriverTool::kFirmwareModeAp */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8wifi_hal10DriverTool15kFirmwareModeApE = NULL;

/* Exported Object: android::wifi_hal::DriverTool::kFirmwareModeP2p */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8wifi_hal10DriverTool16kFirmwareModeP2pE = NULL;

/* Demangled: is_wifi_driver_loaded */
extern "C" __attribute__((visibility("default"))) int is_wifi_driver_loaded(void) {
    ALOGD("is_wifi_driver_loaded() called");
    return 0;
}

/* Exported Object: vtable for SetScanMacOuiCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SetScanMacOuiCommand = NULL;

/* Demangled: wifi_initialize */
extern "C" __attribute__((visibility("default"))) int wifi_initialize(void) {
    ALOGD("wifi_initialize() called");
    return 0;
}

/* Demangled: WifiCommand::error_handler(sockaddr_nl*, nlmsgerr*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand13error_handlerEP11sockaddr_nlP8nlmsgerrPv(void) {
    ALOGD("_ZN11WifiCommand13error_handlerEP11sockaddr_nlP8nlmsgerrPv() called");
    return 0;
}

/* Exported Object: vtable for MemoryDumpCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV17MemoryDumpCommand = NULL;

/* Demangled: android::wifi_hal::DriverTool::IsDriverLoaded() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8wifi_hal10DriverTool14IsDriverLoadedEv(void) {
    ALOGD("_ZN7android8wifi_hal10DriverTool14IsDriverLoadedEv() called");
    return 0;
}

/* Demangled: android::wifi_system::HalTool::CanGetValidChannels(wifi_hal_fn*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11wifi_system7HalTool19CanGetValidChannelsEP11wifi_hal_fn(void) {
    ALOGD("_ZN7android11wifi_system7HalTool19CanGetValidChannelsEP11wifi_hal_fn() called");
    return 0;
}

/* Demangled: wifi_cleanup */
extern "C" __attribute__((visibility("default"))) int wifi_cleanup(void) {
    ALOGD("wifi_cleanup() called");
    return 0;
}

/* Demangled: wifi_get_valid_channels */
extern "C" __attribute__((visibility("default"))) int wifi_get_valid_channels(void) {
    ALOGD("wifi_get_valid_channels() called");
    return 0;
}

/* Demangled: wifi_set_country_code */
extern "C" __attribute__((visibility("default"))) int wifi_set_country_code(void) {
    ALOGD("wifi_set_country_code() called");
    return 0;
}

/* Demangled: wifi_unregister_cmd(wifi_info*, WifiCommand*) */
extern "C" __attribute__((visibility("default"))) int _Z19wifi_unregister_cmdP9wifi_infoP11WifiCommand(void) {
    ALOGD("_Z19wifi_unregister_cmdP9wifi_infoP11WifiCommand() called");
    return 0;
}

/* Demangled: wifi_unregister_handler(wifi_info*, int) */
extern "C" __attribute__((visibility("default"))) int _Z23wifi_unregister_handlerP9wifi_infoi(void) {
    ALOGD("_Z23wifi_unregister_handlerP9wifi_infoi() called");
    return 0;
}

/* Demangled: WifiCommand::kernelErrorToWifiHalError(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand25kernelErrorToWifiHalErrorEi(void) {
    ALOGD("_ZN11WifiCommand25kernelErrorToWifiHalErrorEi() called");
    return 0;
}

/* Demangled: WifiEvent::log() */
extern "C" __attribute__((visibility("default"))) int _ZN9WifiEvent3logEv(void) {
    ALOGD("_ZN9WifiEvent3logEv() called");
    return 0;
}

/* Demangled: getIfaceInfo(wifi_interface_info*) */
extern "C" __attribute__((visibility("default"))) int _Z12getIfaceInfoP19wifi_interface_info(void) {
    ALOGD("_Z12getIfaceInfoP19wifi_interface_info() called");
    return 0;
}

/* Demangled: WifiCommand::event_handler(nl_msg*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand13event_handlerEP6nl_msgPv(void) {
    ALOGD("_ZN11WifiCommand13event_handlerEP6nl_msgPv() called");
    return 0;
}

/* Exported Object: vtable for SelectTxPowerCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SelectTxPowerCommand = NULL;

/* Demangled: attributeToString(int) */
extern "C" __attribute__((visibility("default"))) int _Z17attributeToStringi(void) {
    ALOGD("_Z17attributeToStringi() called");
    return 0;
}

/* Demangled: wifi_get_fw_path */
extern "C" __attribute__((visibility("default"))) int wifi_get_fw_path(void) {
    ALOGD("wifi_get_fw_path() called");
    return 0;
}

/* Demangled: WifiRequest::create(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiRequest6createEji(void) {
    ALOGD("_ZN11WifiRequest6createEji() called");
    return 0;
}

/* Demangled: wifi_reset_tx_power_scenario */
extern "C" __attribute__((visibility("default"))) int wifi_reset_tx_power_scenario(void) {
    ALOGD("wifi_reset_tx_power_scenario() called");
    return 0;
}

/* Demangled: get_version(wifi_interface_info*, char*, int*, GetCmdType) */
extern "C" __attribute__((visibility("default"))) int _Z11get_versionP19wifi_interface_infoPcPi10GetCmdType(void) {
    ALOGD("_Z11get_versionP19wifi_interface_infoPcPi10GetCmdType() called");
    return 0;
}

/* Exported Object: vtable for DebugCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DebugCommand = NULL;

/* Demangled: wifi_register_vendor_handler(wifi_info*, unsigned int, int, int (*)(nl_msg*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z28wifi_register_vendor_handlerP9wifi_infojiPFiP6nl_msgPvES3_(void) {
    ALOGD("_Z28wifi_register_vendor_handlerP9wifi_infojiPFiP6nl_msgPvES3_() called");
    return 0;
}

/* Exported Object: vtable for MKeepAliveCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV17MKeepAliveCommand = NULL;

/* Exported Object: vtable for android::wifi_system::HalTool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11wifi_system7HalToolE = NULL;

/* Demangled: getWifiHandle(hal_info*) */
extern "C" __attribute__((visibility("default"))) int _Z13getWifiHandleP8hal_info(void) {
    ALOGD("_Z13getWifiHandleP8hal_info() called");
    return 0;
}

/* Demangled: wifi_get_iface_name */
extern "C" __attribute__((visibility("default"))) int wifi_get_iface_name(void) {
    ALOGD("wifi_get_iface_name() called");
    return 0;
}

/* Demangled: getHalInfo(wifi_interface_info*) */
extern "C" __attribute__((visibility("default"))) int _Z10getHalInfoP19wifi_interface_info(void) {
    ALOGD("_Z10getHalInfoP19wifi_interface_info() called");
    return 0;
}

/* Exported Object: vtable for EnableRoamingCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV20EnableRoamingCommand = NULL;

/* Demangled: android::wifi_hal::DriverTool::LoadDriver() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8wifi_hal10DriverTool10LoadDriverEv(void) {
    ALOGD("_ZN7android8wifi_hal10DriverTool10LoadDriverEv() called");
    return 0;
}

/* Demangled: get_interface(char const*, interface_info*) */
extern "C" __attribute__((visibility("default"))) int _Z13get_interfacePKcP14interface_info(void) {
    ALOGD("_Z13get_interfacePKcP14interface_info() called");
    return 0;
}

/* Demangled: wifi_event_loop */
extern "C" __attribute__((visibility("default"))) int wifi_event_loop(void) {
    ALOGD("wifi_event_loop() called");
    return 0;
}

/* Demangled: android::wifi_hal::DriverTool::IsFirmwareModeChangeNeeded(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8wifi_hal10DriverTool26IsFirmwareModeChangeNeededEi(void) {
    ALOGD("_ZN7android8wifi_hal10DriverTool26IsFirmwareModeChangeNeededEi() called");
    return 0;
}

/* Demangled: wifi_change_driver_state(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z24wifi_change_driver_statePKc(void) {
    ALOGD("_Z24wifi_change_driver_statePKc() called");
    return 0;
}

/* Demangled: android::wifi_hal::DriverTool::UnloadDriver() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8wifi_hal10DriverTool12UnloadDriverEv(void) {
    ALOGD("_ZN7android8wifi_hal10DriverTool12UnloadDriverEv() called");
    return 0;
}

/* Demangled: WifiCommand::finish_handler(nl_msg*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand14finish_handlerEP6nl_msgPv(void) {
    ALOGD("_ZN11WifiCommand14finish_handlerEP6nl_msgPv() called");
    return 0;
}

/* Demangled: WifiCommand::requestVendorEvent(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand18requestVendorEventEji(void) {
    ALOGD("_ZN11WifiCommand18requestVendorEventEji() called");
    return 0;
}

/* Exported Object: vtable for GetMulticastIdCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV21GetMulticastIdCommand = NULL;

/* Demangled: wifi_configure_roaming */
extern "C" __attribute__((visibility("default"))) int wifi_configure_roaming(void) {
    ALOGD("wifi_configure_roaming() called");
    return 0;
}

/* Demangled: wifi_enable_firmware_roaming */
extern "C" __attribute__((visibility("default"))) int wifi_enable_firmware_roaming(void) {
    ALOGD("wifi_enable_firmware_roaming() called");
    return 0;
}

/* Demangled: wifi_get_firmware_version */
extern "C" __attribute__((visibility("default"))) int wifi_get_firmware_version(void) {
    ALOGD("wifi_get_firmware_version() called");
    return 0;
}

/* Demangled: WifiEvent::get_cmdString() */
extern "C" __attribute__((visibility("default"))) int _ZN9WifiEvent13get_cmdStringEv(void) {
    ALOGD("_ZN9WifiEvent13get_cmdStringEv() called");
    return 0;
}

/* Demangled: wifi_unregister_cmd(wifi_info*, int) */
extern "C" __attribute__((visibility("default"))) int _Z19wifi_unregister_cmdP9wifi_infoi(void) {
    ALOGD("_Z19wifi_unregister_cmdP9wifi_infoi() called");
    return 0;
}

/* Exported Object: vtable for SetRSSIMonitorCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV21SetRSSIMonitorCommand = NULL;

/* Demangled: wifi_get_driver_memory_dump */
extern "C" __attribute__((visibility("default"))) int wifi_get_driver_memory_dump(void) {
    ALOGD("wifi_get_driver_memory_dump() called");
    return 0;
}

/* Exported Object: vtable for SetCountryCodeCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV21SetCountryCodeCommand = NULL;

/* Demangled: WifiCommand::valid_handler(nl_msg*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand13valid_handlerEP6nl_msgPv(void) {
    ALOGD("_ZN11WifiCommand13valid_handlerEP6nl_msgPv() called");
    return 0;
}

/* Demangled: android::wifi_system::HalTool::InitFunctionTable(wifi_hal_fn*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11wifi_system7HalTool17InitFunctionTableEP11wifi_hal_fn(void) {
    ALOGD("_ZN7android11wifi_system7HalTool17InitFunctionTableEP11wifi_hal_fn() called");
    return 0;
}

/* Demangled: getHalInfo(wifi_info*) */
extern "C" __attribute__((visibility("default"))) int _Z10getHalInfoP9wifi_info(void) {
    ALOGD("_Z10getHalInfoP9wifi_info() called");
    return 0;
}

/* Demangled: wifi_start_sending_offloaded_packet */
extern "C" __attribute__((visibility("default"))) int wifi_start_sending_offloaded_packet(void) {
    ALOGD("wifi_start_sending_offloaded_packet() called");
    return 0;
}

/* Demangled: WifiCommand::ack_handler(nl_msg*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand11ack_handlerEP6nl_msgPv(void) {
    ALOGD("_ZN11WifiCommand11ack_handlerEP6nl_msgPv() called");
    return 0;
}

/* Demangled: WifiCommand::requestEvent(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand12requestEventEi(void) {
    ALOGD("_ZN11WifiCommand12requestEventEi() called");
    return 0;
}

/* Demangled: wifi_load_driver */
extern "C" __attribute__((visibility("default"))) int wifi_load_driver(void) {
    ALOGD("wifi_load_driver() called");
    return 0;
}

/* Demangled: WifiRequest::create(int, unsigned char, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiRequest6createEihii(void) {
    ALOGD("_ZN11WifiRequest6createEihii() called");
    return 0;
}

/* Exported Object: vtable for ConfigRoamingCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV20ConfigRoamingCommand = NULL;

/* Demangled: wifi_get_cmd(wifi_info*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12wifi_get_cmdP9wifi_infoi(void) {
    ALOGD("_Z12wifi_get_cmdP9wifi_infoi() called");
    return 0;
}

/* Demangled: WifiCommand::response_handler(nl_msg*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11WifiCommand16response_handlerEP6nl_msgPv(void) {
    ALOGD("_ZN11WifiCommand16response_handlerEP6nl_msgPv() called");
    return 0;
}

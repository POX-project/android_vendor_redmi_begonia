/*
 * Reverse-Engineered ABI Specification for: libwifi-hal-mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libwifi-hal-mtk.so
 */

#ifndef BEGONIA_RE_LIBWIFI_HAL_MTK_H
#define BEGONIA_RE_LIBWIFI_HAL_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8wifi_hal10DriverTool18ChangeFirmwareModeEi */
/* Demangled: android::wifi_hal::DriverTool::ChangeFirmwareMode(int) */
int _ZN7android8wifi_hal10DriverTool18ChangeFirmwareModeEi(void);

/* Symbol: _Z17wifi_register_cmdP9wifi_infoiP11WifiCommand */
/* Demangled: wifi_register_cmd(wifi_info*, int, WifiCommand*) */
int _Z17wifi_register_cmdP9wifi_infoiP11WifiCommand(void);

/* Symbol: _Z30wifi_unregister_vendor_handlerP9wifi_infoji */
/* Demangled: wifi_unregister_vendor_handler(wifi_info*, unsigned int, int) */
int _Z30wifi_unregister_vendor_handlerP9wifi_infoji(void);

/* Symbol: _ZTV21GetChannelListCommand */
/* Demangled: vtable for GetChannelListCommand */
extern void* _ZTV21GetChannelListCommand;

/* Symbol: wifi_set_scanning_mac_oui */
/* Demangled: wifi_set_scanning_mac_oui */
int wifi_set_scanning_mac_oui(void);

/* Symbol: wifi_stop_sending_offloaded_packet */
/* Demangled: wifi_stop_sending_offloaded_packet */
int wifi_stop_sending_offloaded_packet(void);

/* Symbol: _Z14getIfaceHandleP14interface_info */
/* Demangled: getIfaceHandle(interface_info*) */
int _Z14getIfaceHandleP14interface_info(void);

/* Symbol: _Z21wifi_register_handlerP9wifi_infoiPFiP6nl_msgPvES3_ */
/* Demangled: wifi_register_handler(wifi_info*, int, int (*)(nl_msg*, void*), void*) */
int _Z21wifi_register_handlerP9wifi_infoiPFiP6nl_msgPvES3_(void);

/* Symbol: _Z13getWifiHandleP19wifi_interface_info */
/* Demangled: getWifiHandle(wifi_interface_info*) */
int _Z13getWifiHandleP19wifi_interface_info(void);

/* Symbol: wifi_get_roaming_capabilities */
/* Demangled: wifi_get_roaming_capabilities */
int wifi_get_roaming_capabilities(void);

/* Symbol: _ZTV11WifiCommand */
/* Demangled: vtable for WifiCommand */
extern void* _ZTV11WifiCommand;

/* Symbol: _ZTV20GetFeatureSetCommand */
/* Demangled: vtable for GetFeatureSetCommand */
extern void* _ZTV20GetFeatureSetCommand;

/* Symbol: wifi_get_ifaces */
/* Demangled: wifi_get_ifaces */
int wifi_get_ifaces(void);

/* Symbol: _ZN7android8wifi_hal10DriverTool16kFirmwareModeStaE */
/* Demangled: android::wifi_hal::DriverTool::kFirmwareModeSta */
extern void* _ZN7android8wifi_hal10DriverTool16kFirmwareModeStaE;

/* Symbol: wifi_unload_driver */
/* Demangled: wifi_unload_driver */
int wifi_unload_driver(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: init_wifi_vendor_hal_func_table */
/* Demangled: init_wifi_vendor_hal_func_table */
int init_wifi_vendor_hal_func_table(void);

/* Symbol: _Z15wifi_cancel_cmdiP19wifi_interface_info */
/* Demangled: wifi_cancel_cmd(int, wifi_interface_info*) */
int _Z15wifi_cancel_cmdiP19wifi_interface_info(void);

/* Symbol: _Z26wifi_socket_set_local_portP7nl_sockj */
/* Demangled: wifi_socket_set_local_port(nl_sock*, unsigned int) */
int _Z26wifi_socket_set_local_portP7nl_sockj(void);

/* Symbol: _ZN11WifiCommand15requestResponseEv */
/* Demangled: WifiCommand::requestResponse() */
int _ZN11WifiCommand15requestResponseEv(void);

/* Symbol: wifi_get_driver_version */
/* Demangled: wifi_get_driver_version */
int wifi_get_driver_version(void);

/* Symbol: wifi_get_supported_feature_set */
/* Demangled: wifi_get_supported_feature_set */
int wifi_get_supported_feature_set(void);

/* Symbol: wifi_select_tx_power_scenario */
/* Demangled: wifi_select_tx_power_scenario */
int wifi_select_tx_power_scenario(void);

/* Symbol: _ZTVN7android8wifi_hal10DriverToolE */
/* Demangled: vtable for android::wifi_hal::DriverTool */
extern void* _ZTVN7android8wifi_hal10DriverToolE;

/* Symbol: wifi_change_fw_path */
/* Demangled: wifi_change_fw_path */
int wifi_change_fw_path(void);

/* Symbol: _ZN11WifiCommand15requestResponseER11WifiRequest */
/* Demangled: WifiCommand::requestResponse(WifiRequest&) */
int _ZN11WifiCommand15requestResponseER11WifiRequest(void);

/* Symbol: _ZN9WifiEvent5parseEv */
/* Demangled: WifiEvent::parse() */
int _ZN9WifiEvent5parseEv(void);

/* Symbol: _ZN7android8wifi_hal10DriverTool15kFirmwareModeApE */
/* Demangled: android::wifi_hal::DriverTool::kFirmwareModeAp */
extern void* _ZN7android8wifi_hal10DriverTool15kFirmwareModeApE;

/* Symbol: _ZN7android8wifi_hal10DriverTool16kFirmwareModeP2pE */
/* Demangled: android::wifi_hal::DriverTool::kFirmwareModeP2p */
extern void* _ZN7android8wifi_hal10DriverTool16kFirmwareModeP2pE;

/* Symbol: is_wifi_driver_loaded */
/* Demangled: is_wifi_driver_loaded */
int is_wifi_driver_loaded(void);

/* Symbol: _ZTV20SetScanMacOuiCommand */
/* Demangled: vtable for SetScanMacOuiCommand */
extern void* _ZTV20SetScanMacOuiCommand;

/* Symbol: wifi_initialize */
/* Demangled: wifi_initialize */
int wifi_initialize(void);

/* Symbol: _ZN11WifiCommand13error_handlerEP11sockaddr_nlP8nlmsgerrPv */
/* Demangled: WifiCommand::error_handler(sockaddr_nl*, nlmsgerr*, void*) */
int _ZN11WifiCommand13error_handlerEP11sockaddr_nlP8nlmsgerrPv(void);

/* Symbol: _ZTV17MemoryDumpCommand */
/* Demangled: vtable for MemoryDumpCommand */
extern void* _ZTV17MemoryDumpCommand;

/* Symbol: _ZN7android8wifi_hal10DriverTool14IsDriverLoadedEv */
/* Demangled: android::wifi_hal::DriverTool::IsDriverLoaded() */
int _ZN7android8wifi_hal10DriverTool14IsDriverLoadedEv(void);

/* Symbol: _ZN7android11wifi_system7HalTool19CanGetValidChannelsEP11wifi_hal_fn */
/* Demangled: android::wifi_system::HalTool::CanGetValidChannels(wifi_hal_fn*) */
int _ZN7android11wifi_system7HalTool19CanGetValidChannelsEP11wifi_hal_fn(void);

/* Symbol: wifi_cleanup */
/* Demangled: wifi_cleanup */
int wifi_cleanup(void);

/* Symbol: wifi_get_valid_channels */
/* Demangled: wifi_get_valid_channels */
int wifi_get_valid_channels(void);

/* Symbol: wifi_set_country_code */
/* Demangled: wifi_set_country_code */
int wifi_set_country_code(void);

/* Symbol: _Z19wifi_unregister_cmdP9wifi_infoP11WifiCommand */
/* Demangled: wifi_unregister_cmd(wifi_info*, WifiCommand*) */
int _Z19wifi_unregister_cmdP9wifi_infoP11WifiCommand(void);

/* Symbol: _Z23wifi_unregister_handlerP9wifi_infoi */
/* Demangled: wifi_unregister_handler(wifi_info*, int) */
int _Z23wifi_unregister_handlerP9wifi_infoi(void);

/* Symbol: _ZN11WifiCommand25kernelErrorToWifiHalErrorEi */
/* Demangled: WifiCommand::kernelErrorToWifiHalError(int) */
int _ZN11WifiCommand25kernelErrorToWifiHalErrorEi(void);

/* Symbol: _ZN9WifiEvent3logEv */
/* Demangled: WifiEvent::log() */
int _ZN9WifiEvent3logEv(void);

/* Symbol: _Z12getIfaceInfoP19wifi_interface_info */
/* Demangled: getIfaceInfo(wifi_interface_info*) */
int _Z12getIfaceInfoP19wifi_interface_info(void);

/* Symbol: _ZN11WifiCommand13event_handlerEP6nl_msgPv */
/* Demangled: WifiCommand::event_handler(nl_msg*, void*) */
int _ZN11WifiCommand13event_handlerEP6nl_msgPv(void);

/* Symbol: _ZTV20SelectTxPowerCommand */
/* Demangled: vtable for SelectTxPowerCommand */
extern void* _ZTV20SelectTxPowerCommand;

/* Symbol: _Z17attributeToStringi */
/* Demangled: attributeToString(int) */
int _Z17attributeToStringi(void);

/* Symbol: wifi_get_fw_path */
/* Demangled: wifi_get_fw_path */
int wifi_get_fw_path(void);

/* Symbol: _ZN11WifiRequest6createEji */
/* Demangled: WifiRequest::create(unsigned int, int) */
int _ZN11WifiRequest6createEji(void);

/* Symbol: wifi_reset_tx_power_scenario */
/* Demangled: wifi_reset_tx_power_scenario */
int wifi_reset_tx_power_scenario(void);

/* Symbol: _Z11get_versionP19wifi_interface_infoPcPi10GetCmdType */
/* Demangled: get_version(wifi_interface_info*, char*, int*, GetCmdType) */
int _Z11get_versionP19wifi_interface_infoPcPi10GetCmdType(void);

/* Symbol: _ZTV12DebugCommand */
/* Demangled: vtable for DebugCommand */
extern void* _ZTV12DebugCommand;

/* Symbol: _Z28wifi_register_vendor_handlerP9wifi_infojiPFiP6nl_msgPvES3_ */
/* Demangled: wifi_register_vendor_handler(wifi_info*, unsigned int, int, int (*)(nl_msg*, void*), void*) */
int _Z28wifi_register_vendor_handlerP9wifi_infojiPFiP6nl_msgPvES3_(void);

/* Symbol: _ZTV17MKeepAliveCommand */
/* Demangled: vtable for MKeepAliveCommand */
extern void* _ZTV17MKeepAliveCommand;

/* Symbol: _ZTVN7android11wifi_system7HalToolE */
/* Demangled: vtable for android::wifi_system::HalTool */
extern void* _ZTVN7android11wifi_system7HalToolE;

/* Symbol: _Z13getWifiHandleP8hal_info */
/* Demangled: getWifiHandle(hal_info*) */
int _Z13getWifiHandleP8hal_info(void);

/* Symbol: wifi_get_iface_name */
/* Demangled: wifi_get_iface_name */
int wifi_get_iface_name(void);

/* Symbol: _Z10getHalInfoP19wifi_interface_info */
/* Demangled: getHalInfo(wifi_interface_info*) */
int _Z10getHalInfoP19wifi_interface_info(void);

/* Symbol: _ZTV20EnableRoamingCommand */
/* Demangled: vtable for EnableRoamingCommand */
extern void* _ZTV20EnableRoamingCommand;

/* Symbol: _ZN7android8wifi_hal10DriverTool10LoadDriverEv */
/* Demangled: android::wifi_hal::DriverTool::LoadDriver() */
int _ZN7android8wifi_hal10DriverTool10LoadDriverEv(void);

/* Symbol: _Z13get_interfacePKcP14interface_info */
/* Demangled: get_interface(char const*, interface_info*) */
int _Z13get_interfacePKcP14interface_info(void);

/* Symbol: wifi_event_loop */
/* Demangled: wifi_event_loop */
int wifi_event_loop(void);

/* Symbol: _ZN7android8wifi_hal10DriverTool26IsFirmwareModeChangeNeededEi */
/* Demangled: android::wifi_hal::DriverTool::IsFirmwareModeChangeNeeded(int) */
int _ZN7android8wifi_hal10DriverTool26IsFirmwareModeChangeNeededEi(void);

/* Symbol: _Z24wifi_change_driver_statePKc */
/* Demangled: wifi_change_driver_state(char const*) */
int _Z24wifi_change_driver_statePKc(void);

/* Symbol: _ZN7android8wifi_hal10DriverTool12UnloadDriverEv */
/* Demangled: android::wifi_hal::DriverTool::UnloadDriver() */
int _ZN7android8wifi_hal10DriverTool12UnloadDriverEv(void);

/* Symbol: _ZN11WifiCommand14finish_handlerEP6nl_msgPv */
/* Demangled: WifiCommand::finish_handler(nl_msg*, void*) */
int _ZN11WifiCommand14finish_handlerEP6nl_msgPv(void);

/* Symbol: _ZN11WifiCommand18requestVendorEventEji */
/* Demangled: WifiCommand::requestVendorEvent(unsigned int, int) */
int _ZN11WifiCommand18requestVendorEventEji(void);

/* Symbol: _ZTV21GetMulticastIdCommand */
/* Demangled: vtable for GetMulticastIdCommand */
extern void* _ZTV21GetMulticastIdCommand;

/* Symbol: wifi_configure_roaming */
/* Demangled: wifi_configure_roaming */
int wifi_configure_roaming(void);

/* Symbol: wifi_enable_firmware_roaming */
/* Demangled: wifi_enable_firmware_roaming */
int wifi_enable_firmware_roaming(void);

/* Symbol: wifi_get_firmware_version */
/* Demangled: wifi_get_firmware_version */
int wifi_get_firmware_version(void);

/* Symbol: _ZN9WifiEvent13get_cmdStringEv */
/* Demangled: WifiEvent::get_cmdString() */
int _ZN9WifiEvent13get_cmdStringEv(void);

/* Symbol: _Z19wifi_unregister_cmdP9wifi_infoi */
/* Demangled: wifi_unregister_cmd(wifi_info*, int) */
int _Z19wifi_unregister_cmdP9wifi_infoi(void);

/* Symbol: _ZTV21SetRSSIMonitorCommand */
/* Demangled: vtable for SetRSSIMonitorCommand */
extern void* _ZTV21SetRSSIMonitorCommand;

/* Symbol: wifi_get_driver_memory_dump */
/* Demangled: wifi_get_driver_memory_dump */
int wifi_get_driver_memory_dump(void);

/* Symbol: _ZTV21SetCountryCodeCommand */
/* Demangled: vtable for SetCountryCodeCommand */
extern void* _ZTV21SetCountryCodeCommand;

/* Symbol: _ZN11WifiCommand13valid_handlerEP6nl_msgPv */
/* Demangled: WifiCommand::valid_handler(nl_msg*, void*) */
int _ZN11WifiCommand13valid_handlerEP6nl_msgPv(void);

/* Symbol: _ZN7android11wifi_system7HalTool17InitFunctionTableEP11wifi_hal_fn */
/* Demangled: android::wifi_system::HalTool::InitFunctionTable(wifi_hal_fn*) */
int _ZN7android11wifi_system7HalTool17InitFunctionTableEP11wifi_hal_fn(void);

/* Symbol: _Z10getHalInfoP9wifi_info */
/* Demangled: getHalInfo(wifi_info*) */
int _Z10getHalInfoP9wifi_info(void);

/* Symbol: wifi_start_sending_offloaded_packet */
/* Demangled: wifi_start_sending_offloaded_packet */
int wifi_start_sending_offloaded_packet(void);

/* Symbol: _ZN11WifiCommand11ack_handlerEP6nl_msgPv */
/* Demangled: WifiCommand::ack_handler(nl_msg*, void*) */
int _ZN11WifiCommand11ack_handlerEP6nl_msgPv(void);

/* Symbol: _ZN11WifiCommand12requestEventEi */
/* Demangled: WifiCommand::requestEvent(int) */
int _ZN11WifiCommand12requestEventEi(void);

/* Symbol: wifi_load_driver */
/* Demangled: wifi_load_driver */
int wifi_load_driver(void);

/* Symbol: _ZN11WifiRequest6createEihii */
/* Demangled: WifiRequest::create(int, unsigned char, int, int) */
int _ZN11WifiRequest6createEihii(void);

/* Symbol: _ZTV20ConfigRoamingCommand */
/* Demangled: vtable for ConfigRoamingCommand */
extern void* _ZTV20ConfigRoamingCommand;

/* Symbol: _Z12wifi_get_cmdP9wifi_infoi */
/* Demangled: wifi_get_cmd(wifi_info*, int) */
int _Z12wifi_get_cmdP9wifi_infoi(void);

/* Symbol: _ZN11WifiCommand16response_handlerEP6nl_msgPv */
/* Demangled: WifiCommand::response_handler(nl_msg*, void*) */
int _ZN11WifiCommand16response_handlerEP6nl_msgPv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWIFI_HAL_MTK_H */

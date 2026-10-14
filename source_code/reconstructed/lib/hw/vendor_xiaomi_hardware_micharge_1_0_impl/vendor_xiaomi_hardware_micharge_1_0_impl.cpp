/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.micharge@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_micharge_1_0_impl"

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
#include "vendor_xiaomi_hardware_micharge_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getCoolModeState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge16getCoolModeStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge16getCoolModeStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryChargeType(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::writeToFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation11writeToFileERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation11writeToFileERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getPdApdoMax(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge12getPdApdoMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge12getPdApdoMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getUsbVoltage(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getUsbVoltageENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getUsbVoltageENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getWlsPowerMax(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getWlsPowerMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getWlsPowerMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryThermaLevel(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge21getBatteryThermaLevelENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge21getBatteryThermaLevelENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setWirelessChargingEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge26setWirelessChargingEnabledEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge26setWirelessChargingEnabledEb() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setInputSuspendState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20setInputSuspendStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20setInputSuspendStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setRxCr(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge7setRxCrERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge7setRxCrERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setBtState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge10setBtStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge10setBtStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setNightChargingState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge21setNightChargingStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge21setNightChargingStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBtTransferStartState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge23getBtTransferStartStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge23getBtTransferStartStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::MiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getQuickChargeType(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge18getQuickChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge18getQuickChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getWirelessReverseStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge24getWirelessReverseStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge24getWirelessReverseStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::isWirelessChargingSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge27isWirelessChargingSupportedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge27isWirelessChargingSupportedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getTxAdapt(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge10getTxAdaptENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge10getTxAdaptENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getSocDecimalRate(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge17getSocDecimalRateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge17getSocDecimalRateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::readFilePathValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation17readFilePathValueERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation17readFilePathValueERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatterySoh(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getBatterySohENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getBatterySohENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getUsbCurrent(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getUsbCurrentENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getUsbCurrentENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryVbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getBatteryVbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getBatteryVbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryCapacity(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge18getBatteryCapacityENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge18getBatteryCapacityENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryCycleCount(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryCycleCountENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryCycleCountENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryResistance(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryResistanceENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryResistanceENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryIbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getBatteryIbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getBatteryIbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getPdAuthentication(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge19getPdAuthenticationENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge19getPdAuthenticationENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryChargeFull(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryChargeFullENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getBatteryChargeFullENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getNightChargingState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge21getNightChargingStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge21getNightChargingStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setCoolModeState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge16setCoolModeStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge16setCoolModeStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getInputSuspendState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getInputSuspendStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge20getInputSuspendStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryAuthentic(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge19getBatteryAuthenticENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge19getBatteryAuthenticENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getFastChargeModeStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge23getFastChargeModeStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge23getFastChargeModeStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::MiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setWlsTxSpeed(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13setWlsTxSpeedERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13setWlsTxSpeedERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getBatteryTbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getBatteryTbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge14getBatteryTbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::setBtTransferStartState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge23setBtTransferStartStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge23setBtTransferStartStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::isBatteryLifeFunctionSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge30isBatteryLifeFunctionSupportedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge30isBatteryLifeFunctionSupportedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge-in-vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeE0_NS3_9IMiChargeE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getSocDecimal(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getSocDecimalENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge13getSocDecimalENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge::getWirelessChargingStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge25getWirelessChargingStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiCharge25getWirelessChargingStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::micharge::V1_0::implementation::MiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_014implementation8MiChargeE = NULL;

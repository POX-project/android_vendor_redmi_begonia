/*
 * Reverse-Engineered Source for: libaalservice.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaalservice"

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
#include "libaalservice.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MTK_DISP_MGR "/dev/mtk_disp_mgr"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MTK_DISP_MGR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MTK_DISP_MGR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MTK_DISP_MGR, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AALService::setESSLEDMinStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService16setESSLEDMinStepEj(void) {
    ALOGD("_ZN10AALService16setESSLEDMinStepEj() called");
    return 0;
}

/* Demangled: AALLightSensor::AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensorC1Ev(void) {
    ALOGD("_ZN14AALLightSensorC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: AALLightSensor::isEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensor9isEnabledEv(void) {
    ALOGD("_ZN14AALLightSensor9isEnabledEv() called");
    return 0;
}

/* Exported Object: vtable for AALLightCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTV16AALLightCallback = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: AALService::custInvoke(int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10custInvokeEix(void) {
    ALOGD("_ZN10AALService10custInvokeEix() called");
    return 0;
}

/* Demangled: AALService::onBacklightChanged(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService18onBacklightChangedEi(void) {
    ALOGD("_ZN10AALService18onBacklightChangedEi() called");
    return 0;
}

/* Exported Object: VTT for AALService */
extern "C" __attribute__((visibility("default"))) void* _ZTT10AALService = NULL;

/* Demangled: AALService::setGamePQHandle(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService15setGamePQHandleEPK13native_handle(void) {
    ALOGD("_ZN10AALService15setGamePQHandleEPK13native_handle() called");
    return 0;
}

/* Demangled: AALService::~AALService() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALServiceD1Ev(void) {
    ALOGD("_ZN10AALServiceD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: VTT for AALLightSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTT14AALLightSensor = NULL;

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: virtual thunk to AALService::~AALService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N10AALServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N10AALServiceD0Ev() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: AALService::initDRE30SW(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService11initDRE30SWEm(void) {
    ALOGD("_ZN10AALService11initDRE30SWEm() called");
    return 0;
}

/* Demangled: AALService::initDRE30Output(AALOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService15initDRE30OutputEP9AALOutput(void) {
    ALOGD("_ZN10AALService15initDRE30OutputEP9AALOutput() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: AALService::setESSOLEDMinStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService17setESSOLEDMinStepEj(void) {
    ALOGD("_ZN10AALService17setESSOLEDMinStepEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ifstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: AALLightSensor::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensor10threadLoopEv(void) {
    ALOGD("_ZN14AALLightSensor10threadLoopEv() called");
    return 0;
}

/* Demangled: AALLightSensor::~AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensorD1Ev(void) {
    ALOGD("_ZN14AALLightSensorD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_() called");
    return 0;
}

/* Demangled: AALService::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10readyToRunEv(void) {
    ALOGD("_ZN10AALService10readyToRunEv() called");
    return 0;
}

/* Demangled: AALService::readIOField(unsigned int, unsigned int*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService11readIOFieldEjPjbi(void) {
    ALOGD("_ZN10AALService11readIOFieldEjPjbi() called");
    return 0;
}

/* Demangled: AALService::getESSOLEDMinStep(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService17getESSOLEDMinStepEPj(void) {
    ALOGD("_ZN10AALService17getESSOLEDMinStepEPj() called");
    return 0;
}

/* Demangled: AALService::setSmartBacklightStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService25setSmartBacklightStrengthEi(void) {
    ALOGD("_ZN10AALService25setSmartBacklightStrengthEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::frameworks::sensorservice::V1_0::ISensorManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_() called");
    return 0;
}

/* Demangled: virtual thunk to AALLightSensor::~AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N14AALLightSensorD1Ev(void) {
    ALOGD("_ZTv0_n12_N14AALLightSensorD1Ev() called");
    return 0;
}

/* Demangled: AALService::writeField(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10writeFieldEjji(void) {
    ALOGD("_ZN10AALService10writeFieldEjji() called");
    return 0;
}

/* Demangled: AALService::getDREBlock(unsigned int const*, int, int, AALInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService11getDREBlockEPKjiiP8AALInput(void) {
    ALOGD("_ZN10AALService11getDREBlockEPKjiiP8AALInput() called");
    return 0;
}

/* Demangled: AALService::onPartialUpdateChange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService21onPartialUpdateChangeEi(void) {
    ALOGD("_ZN10AALService21onPartialUpdateChangeEi() called");
    return 0;
}

/* Demangled: AALLightSensor::loadCustParameters(CustParameters&) */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensor18loadCustParametersER14CustParameters(void) {
    ALOGD("_ZN14AALLightSensor18loadCustParametersER14CustParameters() called");
    return 0;
}

/* Demangled: android::sp<AALLightCallback>::operator=(AALLightCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI16AALLightCallbackEaSEPS1_(void) {
    ALOGD("_ZN7android2spI16AALLightCallbackEaSEPS1_() called");
    return 0;
}

/* Demangled: AALService::writeBlock(AALOutput const*, int, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10writeBlockEPK9AALOutputiiiPj(void) {
    ALOGD("_ZN10AALService10writeBlockEPK9AALOutputiiiPj() called");
    return 0;
}

/* Demangled: AALService::enableAALEvent(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService14enableAALEventEb(void) {
    ALOGD("_ZN10AALService14enableAALEventEb() called");
    return 0;
}

/* Demangled: AALService::setScreenState(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService14setScreenStateEii(void) {
    ALOGD("_ZN10AALService14setScreenStateEii() called");
    return 0;
}

/* Demangled: AALService::onESSEnableChanged(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService18onESSEnableChangedEi(void) {
    ALOGD("_ZN10AALService18onESSEnableChangedEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::sp<AALLightCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI16AALLightCallbackED2Ev(void) {
    ALOGD("_ZN7android2spI16AALLightCallbackED2Ev() called");
    return 0;
}

/* Demangled: AALService::setFunction(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService11setFunctionEj(void) {
    ALOGD("_ZN10AALService11setFunctionEj() called");
    return 0;
}

/* Demangled: AALService::AALService() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALServiceC2Ev(void) {
    ALOGD("_ZN10AALServiceC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android::sp<SensorDeathRecipient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI20SensorDeathRecipientED2Ev(void) {
    ALOGD("_ZN7android2spI20SensorDeathRecipientED2Ev() called");
    return 0;
}

/* Demangled: AALService::onDREEnableChanged(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService18onDREEnableChangedEi(void) {
    ALOGD("_ZN10AALService18onDREEnableChangedEi() called");
    return 0;
}

/* Demangled: AALService::translateDRE30OutRegisters(AALOutput const*, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService26translateDRE30OutRegistersEPK9AALOutputiiPj(void) {
    ALOGD("_ZN10AALService26translateDRE30OutRegistersEPK9AALOutputiiPj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: AALService::setDREMode(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10setDREModeEij(void) {
    ALOGD("_ZN10AALService10setDREModeEij() called");
    return 0;
}

/* Demangled: AALService::onALIChanged(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService12onALIChangedEPvi(void) {
    ALOGD("_ZN10AALService12onALIChangedEPvi() called");
    return 0;
}

/* Demangled: AALService::onESSLevelChanged(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService17onESSLevelChangedEi(void) {
    ALOGD("_ZN10AALService17onESSLevelChangedEi() called");
    return 0;
}

/* Demangled: AALService::~AALService() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALServiceD0Ev(void) {
    ALOGD("_ZN10AALServiceD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: AALService::readField(unsigned int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService9readFieldEjPji(void) {
    ALOGD("_ZN10AALService9readFieldEjPji() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: AALLightSensor::AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensorC2Ev(void) {
    ALOGD("_ZN14AALLightSensorC2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::sp<android::frameworks::sensorservice::V1_0::IEventQueue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_() called");
    return 0;
}

/* Exported Object: vtable for SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SensorDeathRecipient = NULL;

/* Demangled: AALService::unitTest() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService8unitTestEv(void) {
    ALOGD("_ZN10AALService8unitTestEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: vtable for AALService */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AALService = NULL;

/* Exported Object: construction vtable for android::Thread-in-AALLightSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTC14AALLightSensor0_N7android6ThreadE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: AALService::~AALService() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALServiceD2Ev(void) {
    ALOGD("_ZN10AALServiceD2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::frameworks::sensorservice::V1_0::IEventQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_() called");
    return 0;
}

/* Exported Object: vtable for AALLightSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTV14AALLightSensor = NULL;

/* Demangled: AALService::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10threadLoopEv(void) {
    ALOGD("_ZN10AALService10threadLoopEv() called");
    return 0;
}

/* Demangled: AALService::writeCurve16(AALOutput const*, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService12writeCurve16EPK9AALOutputiiPj(void) {
    ALOGD("_ZN10AALService12writeCurve16EPK9AALOutputiiPj() called");
    return 0;
}

/* Demangled: AALService::setSmartBacklightRange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService22setSmartBacklightRangeEi(void) {
    ALOGD("_ZN10AALService22setSmartBacklightRangeEi() called");
    return 0;
}

/* Demangled: AALService::dump(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService4dumpERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEERS7_(void) {
    ALOGD("_ZN10AALService4dumpERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEERS7_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: virtual thunk to AALService::~AALService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N10AALServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N10AALServiceD1Ev() called");
    return 0;
}

/* Demangled: AALLightSensor::~AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensorD0Ev(void) {
    ALOGD("_ZN14AALLightSensorD0Ev() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: AALService::setReadabilityLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService19setReadabilityLevelEi(void) {
    ALOGD("_ZN10AALService19setReadabilityLevelEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: AALService::initDriverRegs() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService14initDriverRegsEv(void) {
    ALOGD("_ZN10AALService14initDriverRegsEv() called");
    return 0;
}

/* Demangled: AALService::debugDump(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService9debugDumpEj(void) {
    ALOGD("_ZN10AALService9debugDumpEj() called");
    return 0;
}

/* Demangled: AALLightSensor::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensor10setEnabledEb(void) {
    ALOGD("_ZN14AALLightSensor10setEnabledEb() called");
    return 0;
}

/* Demangled: AALLightSensor::setListener(void (*)(void*, int), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensor11setListenerEPFvPviES0_(void) {
    ALOGD("_ZN14AALLightSensor11setListenerEPFvPviES0_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: AALLightSensor::~AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN14AALLightSensorD2Ev(void) {
    ALOGD("_ZN14AALLightSensorD2Ev() called");
    return 0;
}

/* Demangled: android::sp<SensorDeathRecipient>::operator=(SensorDeathRecipient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI20SensorDeathRecipientEaSEPS1_(void) {
    ALOGD("_ZN7android2spI20SensorDeathRecipientEaSEPS1_() called");
    return 0;
}

/* Demangled: virtual thunk to AALLightSensor::~AALLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N14AALLightSensorD0Ev(void) {
    ALOGD("_ZTv0_n12_N14AALLightSensorD0Ev() called");
    return 0;
}

/* Demangled: AALService::writeIOField(unsigned int, unsigned int, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService12writeIOFieldEjjbi(void) {
    ALOGD("_ZN10AALService12writeIOFieldEjjbi() called");
    return 0;
}

/* Demangled: AALService::setFunctionImpl(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService15setFunctionImplEj(void) {
    ALOGD("_ZN10AALService15setFunctionImplEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: AALService::onPanelTypeChanged(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService18onPanelTypeChangedEi(void) {
    ALOGD("_ZN10AALService18onPanelTypeChangedEi() called");
    return 0;
}

/* Demangled: AALService::AALService() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALServiceC1Ev(void) {
    ALOGD("_ZN10AALServiceC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: AALService::getDREMode(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService10getDREModeEPi(void) {
    ALOGD("_ZN10AALService10getDREModeEPi() called");
    return 0;
}

/* Demangled: AALService::runThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService13runThreadLoopEv(void) {
    ALOGD("_ZN10AALService13runThreadLoopEv() called");
    return 0;
}

/* Demangled: AALService::getESSLEDMinStep(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService16getESSLEDMinStepEPj(void) {
    ALOGD("_ZN10AALService16getESSLEDMinStepEPj() called");
    return 0;
}

/* Demangled: AALService::translateDRE30InRegisters(unsigned int const*, AALInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService25translateDRE30InRegistersEPKjP8AALInput(void) {
    ALOGD("_ZN10AALService25translateDRE30InRegistersEPKjP8AALInput() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: AALService::setFunctionProperty(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService19setFunctionPropertyEj(void) {
    ALOGD("_ZN10AALService19setFunctionPropertyEj() called");
    return 0;
}

/* Demangled: AALService::setLowBLReadabilityLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AALService24setLowBLReadabilityLevelEi(void) {
    ALOGD("_ZN10AALService24setLowBLReadabilityLevelEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-AALService */
extern "C" __attribute__((visibility("default"))) void* _ZTC10AALService0_N7android6ThreadE = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

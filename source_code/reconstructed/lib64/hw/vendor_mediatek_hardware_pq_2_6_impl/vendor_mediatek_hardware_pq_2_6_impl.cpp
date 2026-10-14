/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.pq@2.6-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_pq_2_6_impl"

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
#include "vendor_mediatek_hardware_pq_2_6_impl.h"


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

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::writeField(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10writeFieldEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10writeFieldEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::_setGammaIndex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14_setGammaIndexEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14_setGammaIndexEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadTDSHPTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadTDSHPTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadTDSHPTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableContentColor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableContentColorEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableContentColorEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQParamWithFilter(int, PQOutput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setPQParamWithFilterEiRK8PQOutput(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setPQParamWithFilterEiRK8PQOutput() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::composeColorRegisters(void*, DISP_PQ_PARAM const*, unsigned int const (*) [3], int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21composeColorRegistersEPvPK13DISP_PQ_PARAMPA3_Kji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21composeColorRegistersEPvPK13DISP_PQ_PARAMPA3_Kji() called");
    return 0;
}

/* Demangled: PQLightSensor::PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensorC1Ev(void) {
    ALOGD("_ZN13PQLightSensorC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::copyTuningField(void*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15copyTuningFieldEPvS6_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15copyTuningFieldEPvS6_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setLowBLReadabilityLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24setLowBLReadabilityLevelEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24setLowBLReadabilityLevelEi() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initDefaultPQParam() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDefaultPQParamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDefaultPQParamEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setReadabilityLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setReadabilityLevelEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setReadabilityLevelEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setSmartBacklightStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25setSmartBacklightStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25setSmartBacklightStrengthEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setDISPScenario(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setDISPScenarioEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setDISPScenarioEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGlobalPQStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setGlobalPQStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setGlobalPQStrengthEi() called");
    return 0;
}

/* Demangled: PQAshmemProxy::setTuningField(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy14setTuningFieldEii(void) {
    ALOGD("_ZN13PQAshmemProxy14setTuningFieldEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getPanelNameId() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getPanelNameIdEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getPanelNameIdEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGamePQHandle(android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setGamePQHandleERKN7android8hardware11hidl_handleE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setGamePQHandleERKN7android8hardware11hidl_handleE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::readField(unsigned int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::refreshDisplay() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14refreshDisplayEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14refreshDisplayEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isVividPictureMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18isVividPictureModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18isVividPictureModeEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_6::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::custInvoke(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10custInvokeEil(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10custInvokeEil() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: PQAshmemProxy::setPQValueToAshmem(ProxyTuningBuffer, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy18setPQValueToAshmemE17ProxyTuningBufferiii(void) {
    ALOGD("_ZN13PQAshmemProxy18setPQValueToAshmemE17ProxyTuningBufferiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setDisplayGamePQ(unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setDisplayGamePQEjii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setDisplayGamePQEjii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::onBacklightChanged(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18onBacklightChangedEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18onBacklightChangedEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::forceSensorDebounce(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19forceSensorDebounceEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19forceSensorDebounceEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getDisplayGamePQFeatures(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getDisplayGamePQFeaturesENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getDisplayGamePQFeaturesENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: PQAshmemProxy::PQAshmemProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxyC1Ev(void) {
    ALOGD("_ZN13PQAshmemProxyC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::calcPQStrength(void*, DISP_PQ_PARAM*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14calcPQStrengthEPvP13DISP_PQ_PARAMi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14calcPQStrengthEPvP13DISP_PQ_PARAMi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::ccorrMultiply_3x3(int const (*) [3], int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17ccorrMultiply_3x3EPA3_KiPA3_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17ccorrMultiply_3x3EPA3_KiPA3_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getUserModePQParam() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getUserModePQParamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getUserModePQParamEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::_getLcmIndexOfGamma() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19_getLcmIndexOfGammaEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19_getLcmIndexOfGammaEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setTuningField_impl(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setTuningField_implEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setTuningField_implEiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: PQLightSensor::PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensorC2Ev(void) {
    ALOGD("_ZN13PQLightSensorC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadRSZTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadRSZTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadRSZTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqparamMappingCoefficient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality29loadPqparamMappingCoefficientEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality29loadPqparamMappingCoefficientEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initPQProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initPQPropertyEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initPQPropertyEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configCCorrCoef(int, unsigned int const (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15configCCorrCoefEiPA3_Kj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15configCCorrCoefEiPA3_Kj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadCDparamTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadCDparamTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadCDparamTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setAmbientLightCT(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setAmbientLightCTEddd(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setAmbientLightCTEddd() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getPQStrengthRatio(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getPQStrengthRatioEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getPQStrengthRatioEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::compareDrvCCorrCoef(unsigned int (*) [3], unsigned int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19compareDrvCCorrCoefEPA3_jS7_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19compareDrvCCorrCoefEPA3_jS7_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setChameleonStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setChameleonStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setChameleonStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpTransitionRegisters(char const*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23dumpTransitionRegistersEPKcPvi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23dumpTransitionRegistersEPKcPvi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGlobalPQStableStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23setGlobalPQStableStatusEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23setGlobalPQStableStatusEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::loadGlobalPQDCIndex(GlobalPQIndex*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation19loadGlobalPQDCIndexEP13GlobalPQIndex(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation19loadGlobalPQDCIndexEP13GlobalPQIndex() called");
    return 0;
}

/* Exported Object: VTT for PQLightSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTT13PQLightSensor = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initChameleon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initChameleonEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initChameleonEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGammaIndex_impl(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getGammaIndex_implEPi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getGammaIndex_implEPi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQIndex(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setPQIndexEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setPQIndexEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setTDSHPFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12setTDSHPFlagEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12setTDSHPFlagEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setESSLEDMinStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setESSLEDMinStepEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setESSLEDMinStepEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setExternalPanelNits(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setExternalPanelNitsEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setExternalPanelNitsEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isGameVividPictureMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22isGameVividPictureModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22isGameVividPictureModeEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadNormalNvGammaTable(unsigned short (*) [3][512]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22loadNormalNvGammaTableEPA3_A512_t(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22loadNormalNvGammaTableEPA3_A512_t() called");
    return 0;
}

/* Demangled: PQAshmemProxy::isValid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy7isValidEi(void) {
    ALOGD("_ZN13PQAshmemProxy7isValidEi() called");
    return 0;
}

/* Demangled: PQLightSensor::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensor10threadLoopEv(void) {
    ALOGD("_ZN13PQLightSensor10threadLoopEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableSharpness(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableSharpnessEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableSharpnessEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::blulightDefender(DISP_PQ_PARAM const*, void*, unsigned int const (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16blulightDefenderEPK13DISP_PQ_PARAMPvPA3_Kj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16blulightDefenderEPK13DISP_PQ_PARAMPvPA3_Kj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS6_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS6_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15globalPQIndex_tEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15globalPQIndex_tEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isHDRVideo(vendor::mediatek::hardware::pq::V2_5::STATIC_METADATA_T const&, vendor::mediatek::hardware::pq::V2_5::DYNAMIC_METADATA_T const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10isHDRVideoERKNS2_4V2_517STATIC_METADATA_TERKNS6_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10isHDRVideoERKNS2_4V2_517STATIC_METADATA_TERKNS6_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableBlueLight(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableBlueLightEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableBlueLightEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::chameleonDisplay(int*, unsigned int (*) [3], int, unsigned int (*) [3], SensorInput) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16chameleonDisplayEPiPA3_jiS8_11SensorInput(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16chameleonDisplayEPiPA3_jiS8_11SensorInput() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpColorRegisters(char const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpColorRegistersEPKcPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpColorRegistersEPKcPv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setSmartBacklightRange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setSmartBacklightRangeEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setSmartBacklightRangeEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initGlobalPQ() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12initGlobalPQEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12initGlobalPQEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqparamTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqparamTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqparamTableEv() called");
    return 0;
}

/* Demangled: PQAshmemProxy::initMapMemory(android::sp<android::hidl::memory::V1_0::IMemory>) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy13initMapMemoryEN7android2spINS0_4hidl6memory4V1_07IMemoryEEE(void) {
    ALOGD("_ZN13PQAshmemProxy13initMapMemoryEN7android2spINS0_4hidl6memory4V1_07IMemoryEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateColorRegisters(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23translateColorRegistersEPvS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23translateColorRegistersEPvS6_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_015IPictureQualityE = NULL;

/* Demangled: PQAshmemProxy::PQAshmemProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxyC2Ev(void) {
    ALOGD("_ZN13PQAshmemProxyC2Ev() called");
    return 0;
}

/* Demangled: PQLightSensor::~PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensorD0Ev(void) {
    ALOGD("_ZN13PQLightSensorD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getCCorrCoefByIndex(int, unsigned int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getCCorrCoefByIndexEiPA3_j(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getCCorrCoefByIndexEiPA3_j() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enablePQEvent(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13enablePQEventEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13enablePQEventEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadCOLORTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadCOLORTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadCOLORTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::ClearForceTransitionStep() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24ClearForceTransitionStepEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24ClearForceTransitionStepEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableISOAdaptiveSharpness(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26enableISOAdaptiveSharpnessEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26enableISOAdaptiveSharpnessEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableMdpDRE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12enableMdpDREEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12enableMdpDREEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::onALIChanged(void*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12onALIChangedEPviiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12onALIChangedEPviiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableMdpCCORR(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableMdpCCORREj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableMdpCCORREj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadTRSparamTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17loadTRSparamTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17loadTRSparamTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS6_6ResultES9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS6_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setColorRegion(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setColorRegionEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setColorRegionEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpChameleonInRegisters(char const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24dumpChameleonInRegistersEPKcPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24dumpChameleonInRegistersEPKcPv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initBlueLight() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initBlueLightEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initBlueLightEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setEvent(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality8setEventEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality8setEventEj() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadDCTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDCTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDCTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initDCShareMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17initDCShareMemoryEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17initDCShareMemoryEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateToColorTuning(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22translateToColorTuningEPvS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22translateToColorTuningEPvS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::calculatePQParamWithFilter(PQInput const&, PQOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26calculatePQParamWithFilterERK7PQInputP8PQOutput(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26calculatePQParamWithFilterERK7PQInputP8PQOutput() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isGameUserDefinedPictureMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality28isGameUserDefinedPictureModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality28isGameUserDefinedPictureModeEii() called");
    return 0;
}

/* Demangled: PQAshmemProxy::pullFromMDP(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy11pullFromMDPEii(void) {
    ALOGD("_ZN13PQAshmemProxy11pullFromMDPEii() called");
    return 0;
}

/* Demangled: PQAshmemProxy::isReading(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy9isReadingEi(void) {
    ALOGD("_ZN13PQAshmemProxy9isReadingEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configGamma(int, unsigned short const (*) [3][512]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11configGammaEiPA3_A512_Kt(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11configGammaEiPA3_A512_Kt() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setColorMatrix3x3(android::hardware::hidl_array<int, 3ul, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLm3EJLm3EEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLm3EJLm3EEEEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadGammaEntryTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19loadGammaEntryTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19loadGammaEntryTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDynamicContrast(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableDynamicContrastEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableDynamicContrastEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isGameStandardPictureMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25isGameStandardPictureModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25isGameStandardPictureModeEii() called");
    return 0;
}

/* Demangled: PQLightSensor::~PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensorD1Ev(void) {
    ALOGD("_ZN13PQLightSensorD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initAshmem(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10initAshmemEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10initAshmemEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initDREShareMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDREShareMemoryEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDREShareMemoryEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15dispPQWinParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15dispPQWinParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDisplayColor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayColorEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayColorEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::ccorrMultiplyUnitGain(int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21ccorrMultiplyUnitGainEPA3_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21ccorrMultiplyUnitGainEPA3_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDisplayOverDrive(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDisplayOverDriveEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDisplayOverDriveEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isUserDefinedPictureMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24isUserDefinedPictureModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24isUserDefinedPictureModeEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_115IPictureQualityE = NULL;

/* Exported Object: vtable for PQLightSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTV13PQLightSensor = NULL;

/* Demangled: HIDL_FETCH_IPictureQuality */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IPictureQuality(void) {
    ALOGD("HIDL_FETCH_IPictureQuality() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_4::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_415IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqparamTableAI() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadPqparamTableAIEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadPqparamTableAIEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::composeChameleonRegisters(void*, unsigned int (*) [3], SensorInput, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25composeChameleonRegistersEPvPA3_j11SensorInputi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25composeChameleonRegistersEPvPA3_j11SensorInputi() called");
    return 0;
}

/* Demangled: PQAshmemProxy::isOverwritten(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy13isOverwrittenEi(void) {
    ALOGD("_ZN13PQAshmemProxy13isOverwrittenEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpDrvColorRegisters(char const*, DISPLAY_COLOR_REG const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21dumpDrvColorRegistersEPKcPK17DISPLAY_COLOR_REG(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21dumpDrvColorRegistersEPKcPK17DISPLAY_COLOR_REG() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::runThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13runThreadLoopEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13runThreadLoopEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isStandardPictureMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21isStandardPictureModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21isStandardPictureModeEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpChameleonOutRegisters(char const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25dumpChameleonOutRegistersEPKcPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25dumpChameleonOutRegistersEPKcPv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: PQLightSensor::diedSensorListener(void*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensor18diedSensorListenerEPvb(void) {
    ALOGD("_ZN13PQLightSensor18diedSensorListenerEPvb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQParamlevel(DISP_PQ_PARAM*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setPQParamlevelEP13DISP_PQ_PARAMii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setPQParamlevelEP13DISP_PQ_PARAMii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setDebuggingPqparam(vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::PQDebugFlag, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setDebuggingPqparamENS5_11PQDebugFlagEjjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setDebuggingPqparamENS5_11PQDebugFlagEjjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGammaIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13setGammaIndexEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13setGammaIndexEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getESSLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGlobalPQSwitch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setGlobalPQSwitchEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setGlobalPQSwitchEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadMetaNvGammaTable(unsigned short (*) [3][512]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20loadMetaNvGammaTableEPA3_A512_t(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20loadMetaNvGammaTableEPA3_A512_t() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configCCorrCoefByIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22configCCorrCoefByIndexEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22configCCorrCoefByIndexEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::compareDrvColorRegisters(DISPLAY_COLOR_REG*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24compareDrvColorRegistersEP17DISPLAY_COLOR_REGPv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24compareDrvColorRegistersEP17DISPLAY_COLOR_REGPv() called");
    return 0;
}

/* Demangled: PQAshmemProxy::~PQAshmemProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxyD1Ev(void) {
    ALOGD("_ZN13PQAshmemProxyD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::toSignedCcorr(unsigned int const (*) [3], int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13toSignedCcorrEPA3_KjPA3_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13toSignedCcorrEPA3_KjPA3_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableUltraResolution(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableUltraResolutionEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableUltraResolutionEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateFromColorTuning(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24translateFromColorTuningEPvS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24translateFromColorTuningEPvS6_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv() called");
    return 0;
}

/* Demangled: PQLightSensor::~PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensorD2Ev(void) {
    ALOGD("_ZN13PQLightSensorD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to PQLightSensor::~PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N13PQLightSensorD0Ev(void) {
    ALOGD("_ZTv0_n24_N13PQLightSensorD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadDSTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDSTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDSTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setFunction(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11setFunctionEjb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11setFunctionEjb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqindexTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqindexTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqindexTableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setESSOLEDMinStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setESSOLEDMinStepEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setESSOLEDMinStepEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTuningField_impl(int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getTuningField_implEiiPi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getTuningField_implEiiPi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDynamicSharpness(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDynamicSharpnessEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDynamicSharpnessEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9setPQModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9setPQModeEii() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_2::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_215IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::toUnsignedCcorr(int const (*) [3], unsigned int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15toUnsignedCcorrEPA3_KiPA3_j(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15toUnsignedCcorrEPA3_KiPA3_j() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_5::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_515IPictureQualityE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadDRETable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadDRETableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadDRETableEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initColorShift() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initColorShiftEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initColorShiftEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadNvGammaTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadNvGammaTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadNvGammaTableEv() called");
    return 0;
}

/* Demangled: PQLightSensor::updateLuxValue(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensor14updateLuxValueEiiii(void) {
    ALOGD("_ZN13PQLightSensor14updateLuxValueEiiii() called");
    return 0;
}

/* Demangled: PQAshmemProxy::getPQValueFromAshmem(ProxyTuningBuffer, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy20getPQValueFromAshmemE17ProxyTuningBufferiPi(void) {
    ALOGD("_ZN13PQAshmemProxy20getPQValueFromAshmemE17ProxyTuningBufferiPi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDisplayGamma(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayGammaEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayGammaEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-PQLightSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTC13PQLightSensor0_N7android6ThreadE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configDriverGamma(unsigned short const (*) [3][512]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17configDriverGammaEPA3_A512_Kt(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17configDriverGammaEPA3_A512_Kt() called");
    return 0;
}

/* Demangled: PQAshmemProxy::~PQAshmemProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxyD2Ev(void) {
    ALOGD("_ZN13PQAshmemProxyD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to PQLightSensor::~PQLightSensor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N13PQLightSensorD1Ev(void) {
    ALOGD("_ZTv0_n24_N13PQLightSensorD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setRGBGainEjjji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setRGBGainEjjji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::copyCCorrCoef(unsigned int (*) [3], unsigned int const (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13copyCCorrCoefEPA3_jPA3_Kj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13copyCCorrCoefEPA3_jPA3_Kj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadHDR10PlusTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadHDR10PlusTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadHDR10PlusTableEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::AmbientLightCTChange(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20AmbientLightCTChangeEddd(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20AmbientLightCTChangeEddd() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setBlueLightStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setBlueLightStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setBlueLightStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateDrvRegisters(DISPLAY_COLOR_REG*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21translateDrvRegistersEP17DISPLAY_COLOR_REGPvi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21translateDrvRegistersEP17DISPLAY_COLOR_REGPvi() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setScreenState(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setScreenStateEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setScreenStateEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableChameleon(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableChameleonEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableChameleonEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setAmbientLightRGBW(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setAmbientLightRGBWEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setAmbientLightRGBWEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC1Ev() called");
    return 0;
}

/* Demangled: PQLightSensor::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensor10setEnabledEb(void) {
    ALOGD("_ZN13PQLightSensor10setEnabledEb() called");
    return 0;
}

/* Demangled: PQAshmemProxy::getTuningField(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy14getTuningFieldEiPi(void) {
    ALOGD("_ZN13PQAshmemProxy14getTuningFieldEiPi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadHDRTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadHDRTableEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadHDRTableEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE8_N7android6ThreadE = NULL;

/* Demangled: PQAshmemProxy::pushToMDP(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQAshmemProxy9pushToMDPEi(void) {
    ALOGD("_ZN13PQAshmemProxy9pushToMDPEi() called");
    return 0;
}

/* Demangled: PQLightSensor::sensorListener(void*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQLightSensor14sensorListenerEPviiii(void) {
    ALOGD("_ZN13PQLightSensor14sensorListenerEPviiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setColorTransform(android::hardware::hidl_array<float, 4ul, 4ul> const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLm4EJLm4EEEEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLm4EJLm4EEEEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::composeConfigColorRegisters(DISPLAY_COLOR_REG*, DISP_PQ_PARAM const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality27composeConfigColorRegistersEP17DISPLAY_COLOR_REGPK13DISP_PQ_PARAM(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality27composeConfigColorRegistersEP17DISPLAY_COLOR_REGPK13DISP_PQ_PARAM() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setTuningField(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setTuningFieldEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setTuningFieldEiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpCCORRRegisters(char const*, unsigned int (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpCCORRRegistersEPKcPA3_j(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpCCORRRegistersEPKcPA3_j() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setForceTransitionStep(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setForceTransitionStepEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setForceTransitionStepEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_315IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableVideoHDR(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableVideoHDREj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableVideoHDREj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getESSOLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableContentColorVideo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23enableContentColorVideoEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23enableContentColorVideoEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_() called");
    return 0;
}

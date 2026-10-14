/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.pq@2.6-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.pq@2.6-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_6_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_6_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10writeFieldEjj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::writeField(unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10writeFieldEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14_setGammaIndexEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::_setGammaIndex(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14_setGammaIndexEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadTDSHPTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadTDSHPTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadTDSHPTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableContentColorEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableContentColor(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableContentColorEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setPQParamWithFilterEiRK8PQOutput */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQParamWithFilter(int, PQOutput const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setPQParamWithFilterEiRK8PQOutput(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21composeColorRegistersEPvPK13DISP_PQ_PARAMPA3_Kji */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::composeColorRegisters(void*, DISP_PQ_PARAM const*, unsigned int const (*) [3], int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21composeColorRegistersEPvPK13DISP_PQ_PARAMPA3_Kji(void);

/* Symbol: _ZN13PQLightSensorC1Ev */
/* Demangled: PQLightSensor::PQLightSensor() */
int _ZN13PQLightSensorC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15copyTuningFieldEPvS6_i */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::copyTuningField(void*, void*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15copyTuningFieldEPvS6_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24setLowBLReadabilityLevelEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setLowBLReadabilityLevel(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24setLowBLReadabilityLevelEi(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDefaultPQParamEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initDefaultPQParam() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDefaultPQParamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setReadabilityLevelEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setReadabilityLevel(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setReadabilityLevelEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25setSmartBacklightStrengthEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setSmartBacklightStrength(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25setSmartBacklightStrengthEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC2Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::PictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setDISPScenarioEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setDISPScenario(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setDISPScenarioEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setGlobalPQStrengthEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGlobalPQStrength(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setGlobalPQStrengthEi(void);

/* Symbol: _ZN13PQAshmemProxy14setTuningFieldEii */
/* Demangled: PQAshmemProxy::setTuningField(int, int) */
int _ZN13PQAshmemProxy14setTuningFieldEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getPanelNameIdEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getPanelNameId() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getPanelNameIdEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setGamePQHandleERKN7android8hardware11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGamePQHandle(android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setGamePQHandleERKN7android8hardware11hidl_handleE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::readField(unsigned int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14refreshDisplayEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::refreshDisplay() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14refreshDisplayEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18isVividPictureModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isVividPictureMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18isVividPictureModeEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS3_15IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_6::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS3_15IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10custInvokeEil */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::custInvoke(int, long) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10custInvokeEil(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::threadLoop() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void);

/* Symbol: _ZN13PQAshmemProxy18setPQValueToAshmemE17ProxyTuningBufferiii */
/* Demangled: PQAshmemProxy::setPQValueToAshmem(ProxyTuningBuffer, int, int, int) */
int _ZN13PQAshmemProxy18setPQValueToAshmemE17ProxyTuningBufferiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setDisplayGamePQEjii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setDisplayGamePQ(unsigned int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setDisplayGamePQEjii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18onBacklightChangedEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::onBacklightChanged(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18onBacklightChangedEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19forceSensorDebounceEiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::forceSensorDebounce(int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19forceSensorDebounceEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getDisplayGamePQFeaturesENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getDisplayGamePQFeatures(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getDisplayGamePQFeaturesENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN13PQAshmemProxyC1Ev */
/* Demangled: PQAshmemProxy::PQAshmemProxy() */
int _ZN13PQAshmemProxyC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14calcPQStrengthEPvP13DISP_PQ_PARAMi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::calcPQStrength(void*, DISP_PQ_PARAM*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14calcPQStrengthEPvP13DISP_PQ_PARAMi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17ccorrMultiply_3x3EPA3_KiPA3_i */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::ccorrMultiply_3x3(int const (*) [3], int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17ccorrMultiply_3x3EPA3_KiPA3_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getUserModePQParamEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getUserModePQParam() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getUserModePQParamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19_getLcmIndexOfGammaEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::_getLcmIndexOfGamma() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19_getLcmIndexOfGammaEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setTuningField_implEiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setTuningField_impl(int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setTuningField_implEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN13PQLightSensorC2Ev */
/* Demangled: PQLightSensor::PQLightSensor() */
int _ZN13PQLightSensorC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadRSZTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadRSZTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadRSZTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality29loadPqparamMappingCoefficientEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqparamMappingCoefficient() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality29loadPqparamMappingCoefficientEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initPQPropertyEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initPQProperty() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initPQPropertyEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15configCCorrCoefEiPA3_Kj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configCCorrCoef(int, unsigned int const (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15configCCorrCoefEiPA3_Kj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadCDparamTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadCDparamTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadCDparamTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setAmbientLightCTEddd */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setAmbientLightCT(double, double, double) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setAmbientLightCTEddd(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getPQStrengthRatioEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getPQStrengthRatio(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getPQStrengthRatioEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19compareDrvCCorrCoefEPA3_jS7_ */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::compareDrvCCorrCoef(unsigned int (*) [3], unsigned int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19compareDrvCCorrCoefEPA3_jS7_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setChameleonStrengthEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setChameleonStrength(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setChameleonStrengthEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23dumpTransitionRegistersEPKcPvi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpTransitionRegisters(char const*, void*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23dumpTransitionRegistersEPKcPvi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23setGlobalPQStableStatusEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGlobalPQStableStatus(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23setGlobalPQStableStatusEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation19loadGlobalPQDCIndexEP13GlobalPQIndex */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::loadGlobalPQDCIndex(GlobalPQIndex*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation19loadGlobalPQDCIndexEP13GlobalPQIndex(void);

/* Symbol: _ZTT13PQLightSensor */
/* Demangled: VTT for PQLightSensor */
extern void* _ZTT13PQLightSensor;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initChameleonEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initChameleon() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initChameleonEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getGammaIndex_implEPi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGammaIndex_impl(int*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18getGammaIndex_implEPi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setPQIndexEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQIndex(int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setPQIndexEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12setTDSHPFlagEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setTDSHPFlag(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12setTDSHPFlagEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setESSLEDMinStepEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setESSLEDMinStep(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setESSLEDMinStepEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setExternalPanelNitsEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setExternalPanelNits(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setExternalPanelNitsEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22isGameVividPictureModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isGameVividPictureMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22isGameVividPictureModeEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22loadNormalNvGammaTableEPA3_A512_t */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadNormalNvGammaTable(unsigned short (*) [3][512]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22loadNormalNvGammaTableEPA3_A512_t(void);

/* Symbol: _ZN13PQAshmemProxy7isValidEi */
/* Demangled: PQAshmemProxy::isValid(int) */
int _ZN13PQAshmemProxy7isValidEi(void);

/* Symbol: _ZN13PQLightSensor10threadLoopEv */
/* Demangled: PQLightSensor::threadLoop() */
int _ZN13PQLightSensor10threadLoopEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableSharpnessEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableSharpness(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableSharpnessEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16blulightDefenderEPK13DISP_PQ_PARAMPvPA3_Kj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::blulightDefender(DISP_PQ_PARAM const*, void*, unsigned int const (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16blulightDefenderEPK13DISP_PQ_PARAMPvPA3_Kj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS6_6ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS6_6ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15globalPQIndex_tEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15globalPQIndex_tEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10isHDRVideoERKNS2_4V2_517STATIC_METADATA_TERKNS6_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isHDRVideo(vendor::mediatek::hardware::pq::V2_5::STATIC_METADATA_T const&, vendor::mediatek::hardware::pq::V2_5::DYNAMIC_METADATA_T const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10isHDRVideoERKNS2_4V2_517STATIC_METADATA_TERKNS6_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableBlueLightEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableBlueLight(bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableBlueLightEbi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16chameleonDisplayEPiPA3_jiS8_11SensorInput */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::chameleonDisplay(int*, unsigned int (*) [3], int, unsigned int (*) [3], SensorInput) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16chameleonDisplayEPiPA3_jiS8_11SensorInput(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpColorRegistersEPKcPv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpColorRegisters(char const*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpColorRegistersEPKcPv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setSmartBacklightRangeEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setSmartBacklightRange(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setSmartBacklightRangeEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12initGlobalPQEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initGlobalPQ() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12initGlobalPQEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqparamTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqparamTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqparamTableEv(void);

/* Symbol: _ZN13PQAshmemProxy13initMapMemoryEN7android2spINS0_4hidl6memory4V1_07IMemoryEEE */
/* Demangled: PQAshmemProxy::initMapMemory(android::sp<android::hidl::memory::V1_0::IMemory>) */
int _ZN13PQAshmemProxy13initMapMemoryEN7android2spINS0_4hidl6memory4V1_07IMemoryEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23translateColorRegistersEPvS6_ */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateColorRegisters(void*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23translateColorRegistersEPvS6_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_015IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_015IPictureQualityE;

/* Symbol: _ZN13PQAshmemProxyC2Ev */
/* Demangled: PQAshmemProxy::PQAshmemProxy() */
int _ZN13PQAshmemProxyC2Ev(void);

/* Symbol: _ZN13PQLightSensorD0Ev */
/* Demangled: PQLightSensor::~PQLightSensor() */
int _ZN13PQLightSensorD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getCCorrCoefByIndexEiPA3_j */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getCCorrCoefByIndex(int, unsigned int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getCCorrCoefByIndexEiPA3_j(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::readyToRun() */
int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13enablePQEventEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enablePQEvent(bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13enablePQEventEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadCOLORTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadCOLORTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14loadCOLORTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24ClearForceTransitionStepEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::ClearForceTransitionStep() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24ClearForceTransitionStepEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26enableISOAdaptiveSharpnessEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableISOAdaptiveSharpness(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26enableISOAdaptiveSharpnessEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12enableMdpDREEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableMdpDRE(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12enableMdpDREEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12onALIChangedEPviiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::onALIChanged(void*, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12onALIChangedEPviiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableMdpCCORREj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableMdpCCORR(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableMdpCCORREj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17loadTRSparamTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadTRSparamTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17loadTRSparamTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS6_6ResultES9_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS6_6ResultES9_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setColorRegionEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setColorRegion(int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setColorRegionEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24dumpChameleonInRegistersEPKcPv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpChameleonInRegisters(char const*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24dumpChameleonInRegistersEPKcPv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initBlueLightEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initBlueLight() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13initBlueLightEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality8setEventEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setEvent(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality8setEventEj(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDCTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadDCTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDCTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17initDCShareMemoryEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initDCShareMemory() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17initDCShareMemoryEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22translateToColorTuningEPvS6_ */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateToColorTuning(void*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22translateToColorTuningEPvS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26calculatePQParamWithFilterERK7PQInputP8PQOutput */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::calculatePQParamWithFilter(PQInput const&, PQOutput*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality26calculatePQParamWithFilterERK7PQInputP8PQOutput(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality28isGameUserDefinedPictureModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isGameUserDefinedPictureMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality28isGameUserDefinedPictureModeEii(void);

/* Symbol: _ZN13PQAshmemProxy11pullFromMDPEii */
/* Demangled: PQAshmemProxy::pullFromMDP(int, int) */
int _ZN13PQAshmemProxy11pullFromMDPEii(void);

/* Symbol: _ZN13PQAshmemProxy9isReadingEi */
/* Demangled: PQAshmemProxy::isReading(int) */
int _ZN13PQAshmemProxy9isReadingEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11configGammaEiPA3_A512_Kt */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configGamma(int, unsigned short const (*) [3][512]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11configGammaEiPA3_A512_Kt(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLm3EJLm3EEEEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setColorMatrix3x3(android::hardware::hidl_array<int, 3ul, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLm3EJLm3EEEEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19loadGammaEntryTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadGammaEntryTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19loadGammaEntryTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableDynamicContrastEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDynamicContrast(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableDynamicContrastEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25isGameStandardPictureModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isGameStandardPictureMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25isGameStandardPictureModeEii(void);

/* Symbol: _ZN13PQLightSensorD1Ev */
/* Demangled: PQLightSensor::~PQLightSensor() */
int _ZN13PQLightSensorD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10initAshmemEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initAshmem(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10initAshmemEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDREShareMemoryEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initDREShareMemory() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18initDREShareMemoryEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15dispPQWinParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS8_15dispPQWinParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayColorEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDisplayColor(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayColorEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21ccorrMultiplyUnitGainEPA3_i */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::ccorrMultiplyUnitGain(int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21ccorrMultiplyUnitGainEPA3_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDisplayOverDriveEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDisplayOverDrive(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDisplayOverDriveEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24isUserDefinedPictureModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isUserDefinedPictureMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24isUserDefinedPictureModeEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_115IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_115IPictureQualityE;

/* Symbol: _ZTV13PQLightSensor */
/* Demangled: vtable for PQLightSensor */
extern void* _ZTV13PQLightSensor;

/* Symbol: HIDL_FETCH_IPictureQuality */
/* Demangled: HIDL_FETCH_IPictureQuality */
int HIDL_FETCH_IPictureQuality(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD2Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_415IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_4::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_415IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadPqparamTableAIEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqparamTableAI() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadPqparamTableAIEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25composeChameleonRegistersEPvPA3_j11SensorInputi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::composeChameleonRegisters(void*, unsigned int (*) [3], SensorInput, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25composeChameleonRegistersEPvPA3_j11SensorInputi(void);

/* Symbol: _ZN13PQAshmemProxy13isOverwrittenEi */
/* Demangled: PQAshmemProxy::isOverwritten(int) */
int _ZN13PQAshmemProxy13isOverwrittenEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21dumpDrvColorRegistersEPKcPK17DISPLAY_COLOR_REG */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpDrvColorRegisters(char const*, DISPLAY_COLOR_REG const*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21dumpDrvColorRegistersEPKcPK17DISPLAY_COLOR_REG(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13runThreadLoopEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::runThreadLoop() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13runThreadLoopEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21isStandardPictureModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::isStandardPictureMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21isStandardPictureModeEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25dumpChameleonOutRegistersEPKcPv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpChameleonOutRegisters(char const*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality25dumpChameleonOutRegistersEPKcPv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE(void);

/* Symbol: _ZN13PQLightSensor18diedSensorListenerEPvb */
/* Demangled: PQLightSensor::diedSensorListener(void*, bool) */
int _ZN13PQLightSensor18diedSensorListenerEPvb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setPQParamlevelEP13DISP_PQ_PARAMii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQParamlevel(DISP_PQ_PARAM*, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15setPQParamlevelEP13DISP_PQ_PARAMii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setDebuggingPqparamENS5_11PQDebugFlagEjjj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setDebuggingPqparam(vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::PQDebugFlag, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setDebuggingPqparamENS5_11PQDebugFlagEjjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13setGammaIndexEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGammaIndex(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13setGammaIndexEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getESSLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setGlobalPQSwitchEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setGlobalPQSwitch(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setGlobalPQSwitchEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS8_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20loadMetaNvGammaTableEPA3_A512_t */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadMetaNvGammaTable(unsigned short (*) [3][512]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20loadMetaNvGammaTableEPA3_A512_t(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22configCCorrCoefByIndexEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configCCorrCoefByIndex(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22configCCorrCoefByIndexEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24compareDrvColorRegistersEP17DISPLAY_COLOR_REGPv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::compareDrvColorRegisters(DISPLAY_COLOR_REG*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24compareDrvColorRegistersEP17DISPLAY_COLOR_REGPv(void);

/* Symbol: _ZN13PQAshmemProxyD1Ev */
/* Demangled: PQAshmemProxy::~PQAshmemProxy() */
int _ZN13PQAshmemProxyD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13toSignedCcorrEPA3_KjPA3_i */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::toSignedCcorr(unsigned int const (*) [3], int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13toSignedCcorrEPA3_KjPA3_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableUltraResolutionEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableUltraResolution(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21enableUltraResolutionEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24translateFromColorTuningEPvS6_ */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateFromColorTuning(void*, void*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality24translateFromColorTuningEPvS6_(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::threadLoop() */
int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10threadLoopEv(void);

/* Symbol: _ZN13PQLightSensorD2Ev */
/* Demangled: PQLightSensor::~PQLightSensor() */
int _ZN13PQLightSensorD2Ev(void);

/* Symbol: _ZTv0_n24_N13PQLightSensorD0Ev */
/* Demangled: virtual thunk to PQLightSensor::~PQLightSensor() */
int _ZTv0_n24_N13PQLightSensorD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDSTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadDSTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11loadDSTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11setFunctionEjb */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setFunction(unsigned int, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality11setFunctionEjb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqindexTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadPqindexTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadPqindexTableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setESSOLEDMinStepEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setESSOLEDMinStep(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setESSOLEDMinStepEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getTuningField_implEiiPi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getTuningField_impl(int, int, int*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getTuningField_implEiiPi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDynamicSharpnessEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDynamicSharpness(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22enableDynamicSharpnessEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9setPQModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setPQMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality9setPQModeEii(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_215IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_2::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_215IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15toUnsignedCcorrEPA3_KiPA3_j */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::toUnsignedCcorr(int const (*) [3], unsigned int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15toUnsignedCcorrEPA3_KiPA3_j(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_515IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_5::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_515IPictureQualityE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadDRETableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadDRETable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadDRETableEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initColorShiftEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::initColorShift() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14initColorShiftEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadNvGammaTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadNvGammaTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16loadNvGammaTableEv(void);

/* Symbol: _ZN13PQLightSensor14updateLuxValueEiiii */
/* Demangled: PQLightSensor::updateLuxValue(int, int, int, int) */
int _ZN13PQLightSensor14updateLuxValueEiiii(void);

/* Symbol: _ZN13PQAshmemProxy20getPQValueFromAshmemE17ProxyTuningBufferiPi */
/* Demangled: PQAshmemProxy::getPQValueFromAshmem(ProxyTuningBuffer, int, int*) */
int _ZN13PQAshmemProxy20getPQValueFromAshmemE17ProxyTuningBufferiPi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayGammaEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableDisplayGamma(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18enableDisplayGammaEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::readyToRun() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10readyToRunEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZTC13PQLightSensor0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-PQLightSensor */
extern void* _ZTC13PQLightSensor0_N7android6ThreadE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17configDriverGammaEPA3_A512_Kt */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::configDriverGamma(unsigned short const (*) [3][512]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17configDriverGammaEPA3_A512_Kt(void);

/* Symbol: _ZN13PQAshmemProxyD2Ev */
/* Demangled: PQAshmemProxy::~PQAshmemProxy() */
int _ZN13PQAshmemProxyD2Ev(void);

/* Symbol: _ZTv0_n24_N13PQLightSensorD1Ev */
/* Demangled: virtual thunk to PQLightSensor::~PQLightSensor() */
int _ZTv0_n24_N13PQLightSensorD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setRGBGainEjjji */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality10setRGBGainEjjji(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13copyCCorrCoefEPA3_jPA3_Kj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::copyCCorrCoef(unsigned int (*) [3], unsigned int const (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality13copyCCorrCoefEPA3_jPA3_Kj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadHDR10PlusTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadHDR10PlusTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18loadHDR10PlusTableEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZTv0_n24_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20AmbientLightCTChangeEddd */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::AmbientLightCTChange(double, double, double) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20AmbientLightCTChangeEddd(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setBlueLightStrengthEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setBlueLightStrength(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality20setBlueLightStrengthEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21translateDrvRegistersEP17DISPLAY_COLOR_REGPvi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::translateDrvRegisters(DISPLAY_COLOR_REG*, void*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality21translateDrvRegistersEP17DISPLAY_COLOR_REGPvi(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setScreenStateEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setScreenState(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setScreenStateEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableChameleonEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableChameleon(bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality15enableChameleonEbi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setAmbientLightRGBWEiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setAmbientLightRGBW(int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality19setAmbientLightRGBWEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC1Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::PictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityC1Ev(void);

/* Symbol: _ZN13PQLightSensor10setEnabledEb */
/* Demangled: PQLightSensor::setEnabled(bool) */
int _ZN13PQLightSensor10setEnabledEb(void);

/* Symbol: _ZN13PQAshmemProxy14getTuningFieldEiPi */
/* Demangled: PQAshmemProxy::getTuningField(int, int*) */
int _ZN13PQAshmemProxy14getTuningFieldEiPi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadHDRTableEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::loadHDRTable() */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality12loadHDRTableEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE8_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE8_N7android6ThreadE;

/* Symbol: _ZN13PQAshmemProxy9pushToMDPEi */
/* Demangled: PQAshmemProxy::pushToMDP(int) */
int _ZN13PQAshmemProxy9pushToMDPEi(void);

/* Symbol: _ZN13PQLightSensor14sensorListenerEPviiii */
/* Demangled: PQLightSensor::sensorListener(void*, int, int, int, int) */
int _ZN13PQLightSensor14sensorListenerEPviiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLm4EJLm4EEEEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setColorTransform(android::hardware::hidl_array<float, 4ul, 4ul> const&, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLm4EJLm4EEEEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality27composeConfigColorRegistersEP17DISPLAY_COLOR_REGPK13DISP_PQ_PARAM */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::composeConfigColorRegisters(DISPLAY_COLOR_REG*, DISP_PQ_PARAM const*) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality27composeConfigColorRegistersEP17DISPLAY_COLOR_REGPK13DISP_PQ_PARAM(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::~PictureQuality() */
int _ZThn8_N6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setTuningFieldEiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setTuningField(int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14setTuningFieldEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpCCORRRegistersEPKcPA3_j */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::dumpCCORRRegisters(char const*, unsigned int (*) [3]) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality18dumpCCORRRegistersEPKcPA3_j(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setForceTransitionStepEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::setForceTransitionStep(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality22setForceTransitionStepEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_315IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQualityE0_NS2_4V2_315IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableVideoHDREj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableVideoHDR(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality14enableVideoHDREj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::getESSOLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23enableContentColorVideoEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_6::implementation::PictureQuality::enableContentColorVideo(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_614implementation14PictureQuality23enableContentColorVideoEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, ASHMEM_ENUM> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ASHMEM_ENUMEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_6_IMPL_H */

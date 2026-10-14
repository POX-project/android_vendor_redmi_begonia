/*
 * Reverse-Engineered ABI Specification for: android.hardware.camera.provider@2.4-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.camera.provider@2.4-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_CAMERA_PROVIDER_2_4_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_CAMERA_PROVIDER_2_4_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase43setTorchModeStatusWhenOpenCloseCameraLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEjb */
/* Demangled: NSCam::CameraDeviceManagerBase::setTorchModeStatusWhenOpenCloseCameraLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, bool) */
int _ZN5NSCam23CameraDeviceManagerBase43setTorchModeStatusWhenOpenCloseCameraLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEjb(void);

/* Symbol: _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj */
/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase10initializeEv */
/* Demangled: NSCam::CameraDeviceManagerBase::initialize() */
int _ZN5NSCam23CameraDeviceManagerBase10initializeEv(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase15startOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::startOpenDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam23CameraDeviceManagerBase15startOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase22attachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::attachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
int _ZN5NSCam23CameraDeviceManagerBase22attachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImplC1EPKcPN5NSCam20ICameraDeviceManagerE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::CameraProviderImpl(char const*, NSCam::ICameraDeviceManager*) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImplC1EPKcPN5NSCam20ICameraDeviceManagerE(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::camera::common::V1_0::VendorTag, std::__1::allocator<android::hardware::camera::common::V1_0::VendorTag> >::__push_back_slow_path<android::hardware::camera::common::V1_0::VendorTag const&>(android::hardware::camera::common::V1_0::VendorTag const&) */
int _ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvm */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12CamCalHelper14sensorPowerOffEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void);

/* Symbol: _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::onCameraDeviceStatusChange(char const*, unsigned int) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImplC2EPKcPN5NSCam20ICameraDeviceManagerE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::CameraProviderImpl(char const*, NSCam::ICameraDeviceManager*) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImplC2EPKcPN5NSCam20ICameraDeviceManagerE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEEE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerImpl19onEnableTorchLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: NSCam::CameraDeviceManagerImpl::onEnableTorchLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN5NSCam23CameraDeviceManagerImpl19onEnableTorchLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase22detachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::detachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
int _ZN5NSCam23CameraDeviceManagerBase22detachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerImpl24onEnumerateDevicesLockedEv */
/* Demangled: NSCam::CameraDeviceManagerImpl::onEnumerateDevicesLocked() */
int _ZN5NSCam23CameraDeviceManagerImpl24onEnumerateDevicesLockedEv(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase22getVirtualDeviceLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPN7android2spINS0_14VirtEnumDeviceEEEPNSB_INS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::getVirtualDeviceLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice>*, android::sp<NSCam::ICameraDeviceManager::IVirtualDevice>*) const */
int _ZNK5NSCam23CameraDeviceManagerBase22getVirtualDeviceLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPN7android2spINS0_14VirtEnumDeviceEEEPNSB_INS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase26isTorchModeSupportedLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::isTorchModeSupportedLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK5NSCam23CameraDeviceManagerBase26isTorchModeSupportedLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBaseD2Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::~CameraDeviceManagerBase() */
int _ZN5NSCam23CameraDeviceManagerBaseD2Ev(void);

/* Symbol: createICameraProvider_V2_4 */
/* Demangled: createICameraProvider_V2_4 */
int createICameraProvider_V2_4(void);

/* Symbol: _ZN9CamCalDrv11getInstanceEv */
/* Demangled: CamCalDrv::getInstance() */
int _ZN9CamCalDrv11getInstanceEv(void);

/* Symbol: _ZN5NSCam12CamCalHelper13sensorPowerOnEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand9doExecuteEv */
/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::doExecute() */
int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand9doExecuteEv(void);

/* Symbol: _ZN13CamCalDrvBase14createInstanceEv */
/* Demangled: CamCalDrvBase::createInstance() */
int _ZN13CamCalDrvBase14createInstanceEv(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase12setTorchModeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj */
/* Demangled: NSCam::CameraDeviceManagerBase::setTorchMode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN5NSCam23CameraDeviceManagerBase12setTorchModeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj(void);

/* Symbol: _ZN9CamCalDrvC1Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC1Ev(void);

/* Symbol: _ZN9CamCalDrvD0Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD0Ev(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15getCameraIdListENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraIdList(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15getCameraIdListENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC1Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::OpenDevice::OpenDevice() */
int _ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC1Ev(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase18getDeviceInterfaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERN7android2spINSA_4hidl4base4V1_05IBaseEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::getDeviceInterface(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::base::V1_0::IBase>&) */
int _ZN5NSCam23CameraDeviceManagerBase18getDeviceInterfaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERN7android2spINSA_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN9CamCalDrv4InitEmPv */
/* Demangled: CamCalDrv::Init(unsigned long, void*) */
int _ZN9CamCalDrv4InitEmPv(void);

/* Symbol: _ZTV9CamCalDrv */
/* Demangled: vtable for CamCalDrv */
extern void* _ZTV9CamCalDrv;

/* Symbol: _ZN5NSCam12CamCalHelperC1Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD0Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEEE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase26waitForPreviousPowerOnDoneEv */
/* Demangled: NSCam::CameraDeviceManagerBase::waitForPreviousPowerOnDone() */
int _ZN5NSCam23CameraDeviceManagerBase26waitForPreviousPowerOnDoneEv(void);

/* Symbol: _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv */
/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl10initializeEv */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::initialize() */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl10initializeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC2EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE */
/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::SetTorchModeStatusCommand(NSCam::CameraDeviceManagerBase*, android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, NSCam::CameraDeviceManagerBase::ETorchModeStatus) */
int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC2EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandE */
/* Demangled: vtable for NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand */
extern void* _ZTVN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase17finishCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::finishCloseDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam23CameraDeviceManagerBase17finishCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9CamCalDrv13getDumpEnableEv */
/* Demangled: CamCalDrv::getDumpEnable() */
int _ZN9CamCalDrv13getDumpEnableEv(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11setCallbackERKNS_2spINS3_23ICameraProviderCallbackEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::setCallback(android::sp<android::hardware::camera::provider::V2_4::ICameraProviderCallback> const&) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11setCallbackERKNS_2spINS3_23ICameraProviderCallbackEEE(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V1_013ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_ */
/* Demangled: void android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface<android::hardware::camera::device::V1_0::ICameraDevice, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V1_0::ICameraDevice> const&)> >(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V1_0::ICameraDevice> const&)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V1_013ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTVN5NSCam23CameraDeviceManagerBaseE */
/* Demangled: vtable for NSCam::CameraDeviceManagerBase */
extern void* _ZTVN5NSCam23CameraDeviceManagerBaseE;

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V1_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V1_013ICameraDeviceEEEEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface_V1_x(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V1_0::ICameraDevice> const&)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V1_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V1_013ICameraDeviceEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC1EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE */
/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::SetTorchModeStatusCommand(NSCam::CameraDeviceManagerBase*, android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, NSCam::CameraDeviceManagerBase::ETorchModeStatus) */
int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC1EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE(void);

/* Symbol: _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE0_NS3_15ICameraProviderE */
/* Demangled: construction vtable for android::hardware::camera::provider::V2_4::ICameraProvider-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE0_NS3_15ICameraProviderE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj */
/* Demangled: non-virtual thunk to android::hardware::camera::provider::V2_4::CameraProviderImpl::onTorchModeStatusChange(char const*, unsigned int) */
int _ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase17updatePowerOnDoneEv */
/* Demangled: NSCam::CameraDeviceManagerBase::updatePowerOnDone() */
int _ZN5NSCam23CameraDeviceManagerBase17updatePowerOnDoneEv(void);

/* Symbol: _ZN5NSCam12CamCalHelper13getCamCalDataEPj */
/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void);

/* Symbol: _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12CamCalHelper8readDataEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEEE;

/* Symbol: HIDL_FETCH_ICameraProvider */
/* Demangled: HIDL_FETCH_ICameraProvider */
int HIDL_FETCH_ICameraProvider(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerImpl20onValidateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerImpl::onValidateOpenLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) const */
int _ZNK5NSCam23CameraDeviceManagerImpl20onValidateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EElEERPNS_15__tree_end_nodeISH_EESI_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EElEERPNS_15__tree_end_nodeISH_EESI_RKT_(void);

/* Symbol: _ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj */
/* Demangled: non-virtual thunk to android::hardware::camera::provider::V2_4::CameraProviderImpl::onCameraDeviceStatusChange(char const*, unsigned int) */
int _ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase15ActiveOperation6unlockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj */
/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::unlock(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, unsigned int) */
int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperation6unlockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBaseD1Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::~CameraDeviceManagerBase() */
int _ZN5NSCam23CameraDeviceManagerBaseD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE8_NS0_20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE8_NS0_20hidl_death_recipientE;

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase23isSetTorchModeSupportedEv */
/* Demangled: NSCam::CameraDeviceManagerBase::isSetTorchModeSupported() const */
int _ZNK5NSCam23CameraDeviceManagerBase23isSetTorchModeSupportedEv(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase13setSecureModeEj */
/* Demangled: NSCam::CameraDeviceManagerBase::setSecureMode(unsigned int) */
int _ZN5NSCam23CameraDeviceManagerBase13setSecureModeEj(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase9logLockedEPN7android6VectorINS1_7String8EEE */
/* Demangled: NSCam::CameraDeviceManagerBase::logLocked(android::Vector<android::String8>*) const */
int _ZNK5NSCam23CameraDeviceManagerBase9logLockedEPN7android6VectorINS1_7String8EEE(void);

/* Symbol: _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT */
/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZTVN5NSCam12CamCalHelperE */
/* Demangled: vtable for NSCam::CamCalHelper */
extern void* _ZTVN5NSCam12CamCalHelperE;

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZThn8_N7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: non-virtual thunk to android::hardware::camera::provider::V2_4::CameraProviderImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZThn8_N7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase5debugENSt3__110shared_ptrIN7android7PrinterEEERKNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::debug(std::__1::shared_ptr<android::Printer>, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam23CameraDeviceManagerBase5debugENSt3__110shared_ptrIN7android7PrinterEEERKNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_compareEPKvSH_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_compareEPKvSH_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase23queryMajorDeviceVersionEj */
/* Demangled: NSCam::CameraDeviceManagerBase::queryMajorDeviceVersion(unsigned int) */
int _ZN5NSCam23CameraDeviceManagerBase23queryMajorDeviceVersionEj(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation15logIfOwnerExistEPN7android6VectorINS2_7String8EEE */
/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::logIfOwnerExist(android::Vector<android::String8>*) const */
int _ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation15logIfOwnerExistEPN7android6VectorINS2_7String8EEE(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZTVN5NSCam23CameraDeviceManagerImplE */
/* Demangled: vtable for NSCam::CameraDeviceManagerImpl */
extern void* _ZTVN5NSCam23CameraDeviceManagerImplE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC2Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::PhysEnumDevice::PhysEnumDevice() */
int _ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC2Ev(void);

/* Symbol: _ZNSt3__13mapIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryENS_4lessIjEENS_9allocatorINS_4pairIKjS3_EEEEEixERS8_ */
/* Demangled: std::__1::map<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory> > >::operator[](unsigned int const&) */
int _ZNSt3__13mapIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryENS_4lessIjEENS_9allocatorINS_4pairIKjS3_EEEEEixERS8_(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerImplC2EPKc */
/* Demangled: NSCam::CameraDeviceManagerImpl::CameraDeviceManagerImpl(char const*) */
int _ZN5NSCam23CameraDeviceManagerImplC2EPKc(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC2Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::VirtEnumDevice::VirtEnumDevice() */
int _ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC2Ev(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase30convertFromLegacyDeviceVersionEjPjS1_ */
/* Demangled: NSCam::CameraDeviceManagerBase::convertFromLegacyDeviceVersion(unsigned int, unsigned int*, unsigned int*) */
int _ZN5NSCam23CameraDeviceManagerBase30convertFromLegacyDeviceVersionEjPjS1_(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase16finishOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: NSCam::CameraDeviceManagerBase::finishOpenDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN5NSCam23CameraDeviceManagerBase16finishOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase34flushTorchModeStatusChangeCallbackEv */
/* Demangled: NSCam::CameraDeviceManagerBase::flushTorchModeStatusChangeCallback() */
int _ZN5NSCam23CameraDeviceManagerBase34flushTorchModeStatusChangeCallbackEv(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBaseC2EPKc */
/* Demangled: NSCam::CameraDeviceManagerBase::CameraDeviceManagerBase(char const*) */
int _ZN5NSCam23CameraDeviceManagerBaseC2EPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK5NSCam23CameraDeviceManagerImpl29onGetMaxNumOfMultiOpenCamerasEv */
/* Demangled: NSCam::CameraDeviceManagerImpl::onGetMaxNumOfMultiOpenCameras() const */
int _ZNK5NSCam23CameraDeviceManagerImpl29onGetMaxNumOfMultiOpenCamerasEv(void);

/* Symbol: _ZTVN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceE */
/* Demangled: vtable for NSCam::CameraDeviceManagerBase::PhysEnumDevice */
extern void* _ZTVN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceE;

/* Symbol: getCameraDeviceManager */
/* Demangled: getCameraDeviceManager */
int getCameraDeviceManager(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase17getDeviceNameListERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::getDeviceNameList(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN5NSCam23CameraDeviceManagerBase17getDeviceNameListERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::reserve(unsigned long) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase23addVirtualDevicesLockedEjjN7android2spINS_17IMetadataProviderEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::addVirtualDevicesLocked(unsigned int, unsigned int, android::sp<NSCam::IMetadataProvider>) */
int _ZN5NSCam23CameraDeviceManagerBase23addVirtualDevicesLockedEjjN7android2spINS_17IMetadataProviderEEE(void);

/* Symbol: _ZN5NSCam12CamCalHelper4initEv */
/* Demangled: NSCam::CamCalHelper::init() */
int _ZN5NSCam12CamCalHelper4initEv(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE7reserveEm */
/* Demangled: std::__1::vector<android::hardware::camera::common::V1_0::VendorTag, std::__1::allocator<android::hardware::camera::common::V1_0::VendorTag> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE7reserveEm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBaseD0Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::~CameraDeviceManagerBase() */
int _ZN5NSCam23CameraDeviceManagerBaseD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC2Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::ActiveOperation() */
int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC2Ev(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase12setCallbacksERKN7android2spINS_20ICameraDeviceManager8CallbackEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::setCallbacks(android::sp<NSCam::ICameraDeviceManager::Callback> const&) */
int _ZN5NSCam23CameraDeviceManagerBase12setCallbacksERKN7android2spINS_20ICameraDeviceManager8CallbackEEE(void);

/* Symbol: _ZN9CamCalDrvD2Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD2Ev(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl13getVendorTagsENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS8_16VendorTagSectionEEEEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getVendorTags(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::camera::common::V1_0::VendorTagSection> const&)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl13getVendorTagsENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS8_16VendorTagSectionEEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, std::__1::less<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> >, std::__1::allocator<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> > >::destroy(std::__1::__tree_node<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, void*>*) */
int _ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN5NSCam12CamCalHelperD2Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD2Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase22enumerateDevicesLockedEv */
/* Demangled: NSCam::CameraDeviceManagerBase::enumerateDevicesLocked() */
int _ZN5NSCam23CameraDeviceManagerBase22enumerateDevicesLockedEv(void);

/* Symbol: _ZN5NSCam12CamCalHelper11getInstanceEv */
/* Demangled: NSCam::CamCalHelper::getInstance() */
int _ZN5NSCam12CamCalHelper11getInstanceEv(void);

/* Symbol: _ZTVN7android8hardware6camera8provider4V2_418CameraProviderImplE */
/* Demangled: vtable for android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern void* _ZTVN7android8hardware6camera8provider4V2_418CameraProviderImplE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZTVN5NSCam23CameraDeviceManagerBase10OpenDeviceE */
/* Demangled: vtable for NSCam::CameraDeviceManagerBase::OpenDevice */
extern void* _ZTVN5NSCam23CameraDeviceManagerBase10OpenDeviceE;

/* Symbol: _ZTVN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceE */
/* Demangled: vtable for NSCam::CameraDeviceManagerBase::VirtEnumDevice */
extern void* _ZTVN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase30addTorchModeStatusChangeLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: NSCam::CameraDeviceManagerBase::addTorchModeStatusChangeLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN5NSCam23CameraDeviceManagerBase30addTorchModeStatusChangeLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase18validateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::validateOpenLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) const */
int _ZNK5NSCam23CameraDeviceManagerBase18validateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZN9CamCalDrv15destroyInstanceEv */
/* Demangled: CamCalDrv::destroyInstance() */
int _ZN9CamCalDrv15destroyInstanceEv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerImpl24onAttachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerImpl::onAttachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
int _ZN5NSCam23CameraDeviceManagerImpl24onAttachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj */
/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void);

/* Symbol: _ZTTN7android8hardware6camera8provider4V2_418CameraProviderImplE */
/* Demangled: VTT for android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern void* _ZTTN7android8hardware6camera8provider4V2_418CameraProviderImplE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC1Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::PhysEnumDevice::PhysEnumDevice() */
int _ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC1Ev(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::onTorchModeStatusChange(char const*, unsigned int) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerImplC1EPKc */
/* Demangled: NSCam::CameraDeviceManagerImpl::CameraDeviceManagerImpl(char const*) */
int _ZN5NSCam23CameraDeviceManagerImplC1EPKc(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_ */
/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::vector(std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> > const&) */
int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC1Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::VirtEnumDevice::VirtEnumDevice() */
int _ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC1Ev(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase16startCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::startCloseDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam23CameraDeviceManagerBase16startCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE12__find_equalIS5_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, std::__1::less<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> >, std::__1::allocator<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> > >::__find_equal<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> >(std::__1::__tree_const_iterator<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, std::__1::__tree_node<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> const&) */
int _ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE12__find_equalIS5_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerImpl24onDetachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE */
/* Demangled: NSCam::CameraDeviceManagerImpl::onDetachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
int _ZN5NSCam23CameraDeviceManagerImpl24onDetachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void);

/* Symbol: _ZN9CamCalDrv15StCamCalCaldataE */
/* Demangled: CamCalDrv::StCamCalCaldata */
extern void* _ZN9CamCalDrv15StCamCalCaldataE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand11undoExecuteEv */
/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::undoExecute() */
int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand11undoExecuteEv(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase29isTorchModeControllableLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: NSCam::CameraDeviceManagerBase::isTorchModeControllableLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK5NSCam23CameraDeviceManagerBase29isTorchModeControllableLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15setupVendorTagsEv */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::setupVendorTags() */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15setupVendorTagsEv(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V3_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V3_213ICameraDeviceEEEEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface_V3_x(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDevice> const&)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V3_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V3_213ICameraDeviceEEEEEE(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC1Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::ActiveOperation() */
int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC1Ev(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase7getTypeEv */
/* Demangled: NSCam::CameraDeviceManagerBase::getType() const */
int _ZNK5NSCam23CameraDeviceManagerBase7getTypeEv(void);

/* Symbol: _ZN9CamCalDrvC2Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC2Ev(void);

/* Symbol: _ZN9CamCalDrvD1Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD1Ev(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl21mapToHidlCameraStatusEi */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::mapToHidlCameraStatus(int) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl21mapToHidlCameraStatusEi(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V3_213ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_ */
/* Demangled: void android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface<android::hardware::camera::device::V3_2::ICameraDevice, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDevice> const&)> >(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDevice> const&)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V3_213ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_(void);

/* Symbol: _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE16_N5NSCam20ICameraDeviceManager8CallbackE */
/* Demangled: construction vtable for NSCam::ICameraDeviceManager::Callback-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE16_N5NSCam20ICameraDeviceManager8CallbackE;

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase15ActiveOperation4lockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj */
/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::lock(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, unsigned int) */
int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperation4lockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj(void);

/* Symbol: _ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation8validateERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj */
/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::validate(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, unsigned int) const */
int _ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation8validateERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC2Ev */
/* Demangled: NSCam::CameraDeviceManagerBase::OpenDevice::OpenDevice() */
int _ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC2Ev(void);

/* Symbol: _ZN5NSCam23CameraDeviceManagerBase18getOpenedCameraNumEv */
/* Demangled: NSCam::CameraDeviceManagerBase::getOpenedCameraNum() */
int _ZN5NSCam23CameraDeviceManagerBase18getOpenedCameraNumEv(void);

/* Symbol: _ZN5NSCam12CamCalHelperC2Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC2Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD1Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD1Ev(void);

/* Symbol: _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23isSetTorchModeSupportedENSt3__18functionIFvNS1_6common4V1_06StatusEbEEE */
/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::isSetTorchModeSupported(std::__1::function<void (android::hardware::camera::common::V1_0::Status, bool)>) */
int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23isSetTorchModeSupportedENSt3__18functionIFvNS1_6common4V1_06StatusEbEEE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvm */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_CAMERA_PROVIDER_2_4_IMPL_MEDIATEK_H */

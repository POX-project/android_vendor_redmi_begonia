/*
 * Reverse-Engineered Source for: android.hardware.camera.provider@2.4-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_camera_provider_2_4_impl_mediatek"

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
#include "android_hardware_camera_provider_2_4_impl_mediatek.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAM_CAL_DRV "/dev/CAM_CAL_DRV"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAM_CAL_DRV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAM_CAL_DRV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAM_CAL_DRV, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::CameraDeviceManagerBase::setTorchModeStatusWhenOpenCloseCameraLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase43setTorchModeStatusWhenOpenCloseCameraLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEjb(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase43setTorchModeStatusWhenOpenCloseCameraLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEjb() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper19getSensorIndexByDevEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase10initializeEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase10initializeEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::startOpenDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase15startOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase15startOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::attachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase22attachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase22attachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::CameraProviderImpl(char const*, NSCam::ICameraDeviceManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImplC1EPKcPN5NSCam20ICameraDeviceManagerE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImplC1EPKcPN5NSCam20ICameraDeviceManagerE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::camera::common::V1_0::VendorTag, std::__1::allocator<android::hardware::camera::common::V1_0::VendorTag> >::__push_back_slow_path<android::hardware::camera::common::V1_0::VendorTag const&>(android::hardware::camera::common::V1_0::VendorTag const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper14sensorPowerOffEjj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::onCameraDeviceStatusChange(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::CameraProviderImpl(char const*, NSCam::ICameraDeviceManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImplC2EPKcPN5NSCam20ICameraDeviceManagerE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImplC2EPKcPN5NSCam20ICameraDeviceManagerE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEEE = NULL;

/* Demangled: NSCam::CameraDeviceManagerImpl::onEnableTorchLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerImpl19onEnableTorchLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerImpl19onEnableTorchLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::detachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase22detachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase22detachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerImpl::onEnumerateDevicesLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerImpl24onEnumerateDevicesLockedEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerImpl24onEnumerateDevicesLockedEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::getVirtualDeviceLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice>*, android::sp<NSCam::ICameraDeviceManager::IVirtualDevice>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase22getVirtualDeviceLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPN7android2spINS0_14VirtEnumDeviceEEEPNSB_INS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase22getVirtualDeviceLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPN7android2spINS0_14VirtEnumDeviceEEEPNSB_INS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::isTorchModeSupportedLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase26isTorchModeSupportedLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase26isTorchModeSupportedLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::~CameraDeviceManagerBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBaseD2Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBaseD2Ev() called");
    return 0;
}

/* Demangled: createICameraProvider_V2_4 */
extern "C" __attribute__((visibility("default"))) int createICameraProvider_V2_4(void) {
    ALOGD("createICameraProvider_V2_4() called");
    return 0;
}

/* Demangled: CamCalDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv11getInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13sensorPowerOnEjj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::doExecute() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand9doExecuteEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand9doExecuteEv() called");
    return 0;
}

/* Demangled: CamCalDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13CamCalDrvBase14createInstanceEv(void) {
    ALOGD("_ZN13CamCalDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::setTorchMode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase12setTorchModeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase12setTorchModeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC1Ev(void) {
    ALOGD("_ZN9CamCalDrvC1Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD0Ev(void) {
    ALOGD("_ZN9CamCalDrvD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraIdList(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15getCameraIdListENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15getCameraIdListENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::OpenDevice::OpenDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC1Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::getDeviceInterface(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::base::V1_0::IBase>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase18getDeviceInterfaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERN7android2spINSA_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase18getDeviceInterfaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERN7android2spINSA_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: CamCalDrv::Init(unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv4InitEmPv(void) {
    ALOGD("_ZN9CamCalDrv4InitEmPv() called");
    return 0;
}

/* Exported Object: vtable for CamCalDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CamCalDrv = NULL;

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD0Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEEE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::waitForPreviousPowerOnDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase26waitForPreviousPowerOnDoneEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase26waitForPreviousPowerOnDoneEv() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void) {
    ALOGD("_ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl10initializeEv(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl10initializeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::SetTorchModeStatusCommand(NSCam::CameraDeviceManagerBase*, android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, NSCam::CameraDeviceManagerBase::ETorchModeStatus) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC2EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC2EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::finishCloseDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase17finishCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase17finishCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: CamCalDrv::getDumpEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv13getDumpEnableEv(void) {
    ALOGD("_ZN9CamCalDrv13getDumpEnableEv() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::setCallback(android::sp<android::hardware::camera::provider::V2_4::ICameraProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11setCallbackERKNS_2spINS3_23ICameraProviderCallbackEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11setCallbackERKNS_2spINS3_23ICameraProviderCallbackEEE() called");
    return 0;
}

/* Demangled: void android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface<android::hardware::camera::device::V1_0::ICameraDevice, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V1_0::ICameraDevice> const&)> >(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V1_0::ICameraDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V1_013ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V1_013ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CameraDeviceManagerBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam23CameraDeviceManagerBaseE = NULL;

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface_V1_x(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V1_0::ICameraDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V1_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V1_013ICameraDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V1_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V1_013ICameraDeviceEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::SetTorchModeStatusCommand(NSCam::CameraDeviceManagerBase*, android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, NSCam::CameraDeviceManagerBase::ETorchModeStatus) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC1EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommandC1EPS0_RKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEENS0_16ETorchModeStatusE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::camera::provider::V2_4::ICameraProvider-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE0_NS3_15ICameraProviderE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: non-virtual thunk to android::hardware::camera::provider::V2_4::CameraProviderImpl::onTorchModeStatusChange(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj(void) {
    ALOGD("_ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::updatePowerOnDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase17updatePowerOnDoneEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase17updatePowerOnDoneEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13getCamCalDataEPj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper8readDataEjjjjPh() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEEE = NULL;

/* Demangled: HIDL_FETCH_ICameraProvider */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ICameraProvider(void) {
    ALOGD("HIDL_FETCH_ICameraProvider() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerImpl::onValidateOpenLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerImpl20onValidateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerImpl20onValidateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EElEERPNS_15__tree_end_nodeISH_EESI_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EElEERPNS_15__tree_end_nodeISH_EESI_RKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::camera::provider::V2_4::CameraProviderImpl::onCameraDeviceStatusChange(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj(void) {
    ALOGD("_ZThn16_N7android8hardware6camera8provider4V2_418CameraProviderImpl26onCameraDeviceStatusChangeEPKcj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::unlock(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperation6unlockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase15ActiveOperation6unlockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::~CameraDeviceManagerBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBaseD1Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBaseD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE8_NS0_20hidl_death_recipientE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::isSetTorchModeSupported() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase23isSetTorchModeSupportedEv(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase23isSetTorchModeSupportedEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::setSecureMode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase13setSecureModeEj(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase13setSecureModeEj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::logLocked(android::Vector<android::String8>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase9logLockedEPN7android6VectorINS1_7String8EEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase9logLockedEPN7android6VectorINS1_7String8EEE() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CamCalHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12CamCalHelperE = NULL;

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::camera::provider::V2_4::CameraProviderImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZThn8_N7android8hardware6camera8provider4V2_418CameraProviderImpl11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::debug(std::__1::shared_ptr<android::Printer>, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase5debugENSt3__110shared_ptrIN7android7PrinterEEERKNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase5debugENSt3__110shared_ptrIN7android7PrinterEEERKNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_compareEPKvSH_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_compareEPKvSH_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::queryMajorDeviceVersion(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase23queryMajorDeviceVersionEj(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase23queryMajorDeviceVersionEj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::logIfOwnerExist(android::Vector<android::String8>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation15logIfOwnerExistEPN7android6VectorINS2_7String8EEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation15logIfOwnerExistEPN7android6VectorINS2_7String8EEE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: vtable for NSCam::CameraDeviceManagerImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam23CameraDeviceManagerImplE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::PhysEnumDevice::PhysEnumDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC2Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC2Ev() called");
    return 0;
}

/* Demangled: std::__1::map<unsigned int, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::CameraDeviceManagerBase::VirtEnumDeviceFactory> > >::operator[](unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryENS_4lessIjEENS_9allocatorINS_4pairIKjS3_EEEEEixERS8_(void) {
    ALOGD("_ZNSt3__13mapIjN5NSCam23CameraDeviceManagerBase21VirtEnumDeviceFactoryENS_4lessIjEENS_9allocatorINS_4pairIKjS3_EEEEEixERS8_() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerImpl::CameraDeviceManagerImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerImplC2EPKc(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerImplC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::VirtEnumDevice::VirtEnumDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC2Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC2Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::convertFromLegacyDeviceVersion(unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase30convertFromLegacyDeviceVersionEjPjS1_(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase30convertFromLegacyDeviceVersionEjPjS1_() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::finishOpenDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase16finishOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase16finishOpenDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::flushTorchModeStatusChangeCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase34flushTorchModeStatusChangeCallbackEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase34flushTorchModeStatusChangeCallbackEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::CameraDeviceManagerBase(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBaseC2EPKc(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBaseC2EPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSCam::CameraDeviceManagerImpl::onGetMaxNumOfMultiOpenCameras() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerImpl29onGetMaxNumOfMultiOpenCamerasEv(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerImpl29onGetMaxNumOfMultiOpenCamerasEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CameraDeviceManagerBase::PhysEnumDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceE = NULL;

/* Demangled: getCameraDeviceManager */
extern "C" __attribute__((visibility("default"))) int getCameraDeviceManager(void) {
    ALOGD("getCameraDeviceManager() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::getDeviceNameList(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase17getDeviceNameListERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase17getDeviceNameListERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::addVirtualDevicesLocked(unsigned int, unsigned int, android::sp<NSCam::IMetadataProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase23addVirtualDevicesLockedEjjN7android2spINS_17IMetadataProviderEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase23addVirtualDevicesLockedEjjN7android2spINS_17IMetadataProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper4initEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper4initEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::camera::common::V1_0::VendorTag, std::__1::allocator<android::hardware::camera::common::V1_0::VendorTag> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware6camera6common4V1_09VendorTagENS_9allocatorIS6_EEE7reserveEm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::~CameraDeviceManagerBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBaseD0Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBaseD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::OpenDevice> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase10OpenDeviceEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::ActiveOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC2Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC2Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::setCallbacks(android::sp<NSCam::ICameraDeviceManager::Callback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase12setCallbacksERKN7android2spINS_20ICameraDeviceManager8CallbackEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase12setCallbacksERKN7android2spINS_20ICameraDeviceManager8CallbackEEE() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD2Ev(void) {
    ALOGD("_ZN9CamCalDrvD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getVendorTags(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::camera::common::V1_0::VendorTagSection> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl13getVendorTagsENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS8_16VendorTagSectionEEEEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl13getVendorTagsENSt3__18functionIFvNS1_6common4V1_06StatusERKNS0_8hidl_vecINS8_16VendorTagSectionEEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, std::__1::less<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> >, std::__1::allocator<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> > >::destroy(std::__1::__tree_node<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::enumerateDevicesLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase22enumerateDevicesLockedEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase22enumerateDevicesLockedEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper11getInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware6camera8provider4V2_418CameraProviderImplE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::CameraDeviceManagerBase::PhysEnumDevice> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Exported Object: vtable for NSCam::CameraDeviceManagerBase::OpenDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam23CameraDeviceManagerBase10OpenDeviceE = NULL;

/* Exported Object: vtable for NSCam::CameraDeviceManagerBase::VirtEnumDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::addTorchModeStatusChangeLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase30addTorchModeStatusChangeLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase30addTorchModeStatusChangeLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::validateOpenLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase18validateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase18validateOpenLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Demangled: CamCalDrv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv15destroyInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerImpl::onAttachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerImpl24onAttachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerImpl24onAttachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void) {
    ALOGD("_ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware6camera8provider4V2_418CameraProviderImplE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::PhysEnumDevice::PhysEnumDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC1Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase14PhysEnumDeviceC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::onTorchModeStatusChange(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23onTorchModeStatusChangeEPKcj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::CameraDeviceManagerBase::VirtEnumDevice> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_2spIN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerImpl::CameraDeviceManagerImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerImplC1EPKc(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerImplC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::vector(std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::VirtEnumDevice::VirtEnumDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC1Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase14VirtEnumDeviceC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::startCloseDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase16startCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase16startCloseDeviceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, std::__1::less<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> >, std::__1::allocator<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> > >::__find_equal<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> >(std::__1::__tree_const_iterator<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, std::__1::__tree_node<std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::pair<NSCam::CameraDeviceManagerBase::ETorchModeStatus, NSCam::CameraDeviceManagerBase::ETorchModeStatus> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE12__find_equalIS5_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_4pairIN5NSCam23CameraDeviceManagerBase16ETorchModeStatusES4_EENS_4lessIS5_EENS_9allocatorIS5_EEE12__find_equalIS5_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerImpl::onDetachOpenDeviceLocked(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerImpl24onDetachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerImpl24onDetachOpenDeviceLockedERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEE() called");
    return 0;
}

/* Exported Object: CamCalDrv::StCamCalCaldata */
extern "C" __attribute__((visibility("default"))) void* _ZN9CamCalDrv15StCamCalCaldataE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::SetTorchModeStatusCommand::undoExecute() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand11undoExecuteEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase25SetTorchModeStatusCommand11undoExecuteEv() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::isTorchModeControllableLocked(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase29isTorchModeControllableLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase29isTorchModeControllableLockedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::setupVendorTags() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15setupVendorTagsEv(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl15setupVendorTagsEv() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface_V3_x(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V3_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V3_213ICameraDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl29getCameraDeviceInterface_V3_xERKNS0_11hidl_stringENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spINS1_6device4V3_213ICameraDeviceEEEEEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::ActiveOperation() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC1Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase15ActiveOperationC1Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::getType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase7getTypeEv(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase7getTypeEv() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC2Ev(void) {
    ALOGD("_ZN9CamCalDrvC2Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD1Ev(void) {
    ALOGD("_ZN9CamCalDrvD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::mapToHidlCameraStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl21mapToHidlCameraStatusEi(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl21mapToHidlCameraStatusEi() called");
    return 0;
}

/* Demangled: void android::hardware::camera::provider::V2_4::CameraProviderImpl::getCameraDeviceInterface<android::hardware::camera::device::V3_2::ICameraDevice, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDevice> const&)> >(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V3_213ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl24getCameraDeviceInterfaceINS1_6device4V3_213ICameraDeviceENSt3__18functionIFvNS1_6common4V1_06StatusERKNS_2spIS8_EEEEEEEvRKNS0_11hidl_stringET0_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::ICameraDeviceManager::Callback-in-android::hardware::camera::provider::V2_4::CameraProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6camera8provider4V2_418CameraProviderImplE16_N5NSCam20ICameraDeviceManager8CallbackE = NULL;

/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::lock(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase15ActiveOperation4lockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase15ActiveOperation4lockERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::ActiveOperation::validate(android::sp<NSCam::ICameraDeviceManager::IVirtualDevice> const&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation8validateERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj(void) {
    ALOGD("_ZNK5NSCam23CameraDeviceManagerBase15ActiveOperation8validateERKN7android2spINS_20ICameraDeviceManager14IVirtualDeviceEEEj() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::OpenDevice::OpenDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC2Ev(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase10OpenDeviceC2Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDeviceManagerBase::getOpenedCameraNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23CameraDeviceManagerBase18getOpenedCameraNumEv(void) {
    ALOGD("_ZN5NSCam23CameraDeviceManagerBase18getOpenedCameraNumEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC2Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::camera::provider::V2_4::CameraProviderImpl::isSetTorchModeSupported(std::__1::function<void (android::hardware::camera::common::V1_0::Status, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23isSetTorchModeSupportedENSt3__18functionIFvNS1_6common4V1_06StatusEbEEE(void) {
    ALOGD("_ZN7android8hardware6camera8provider4V2_418CameraProviderImpl23isSetTorchModeSupportedENSt3__18functionIFvNS1_6common4V1_06StatusEbEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvm() called");
    return 0;
}

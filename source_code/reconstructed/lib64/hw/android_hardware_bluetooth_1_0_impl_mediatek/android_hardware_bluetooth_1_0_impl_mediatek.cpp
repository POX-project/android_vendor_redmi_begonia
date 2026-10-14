/*
 * Reverse-Engineered Source for: android.hardware.bluetooth@1.0-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_bluetooth_1_0_impl_mediatek"

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
#include "android_hardware_bluetooth_1_0_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::~AsyncFdWatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherD2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcherD2Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::bluetooth::hal::sem */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek9bluetooth3hal3semE = NULL;

/* Exported Object: vtable for vendor::mediatek::bluetooth::hal::StateMessageHanlder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE = NULL;

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothAddress::bytes_to_string(unsigned char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15bytes_to_stringEPKhPc(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15bytes_to_stringEPKhPc() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendScoData(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendScoDataERKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendScoDataERKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::HciPacketizer::GetPacket() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware9bluetooth3hci13HciPacketizer9GetPacketEv(void) {
    ALOGD("_ZNK7android8hardware9bluetooth3hci13HciPacketizer9GetPacketEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnAclDataPacketReady() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocol20OnAclDataPacketReadyEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocol20OnAclDataPacketReadyEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::BluetoothHci() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC1Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE = NULL;

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::OnFirmwareConfigured(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface20OnFirmwareConfiguredEh(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface20OnFirmwareConfiguredEh() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Shutdown() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface8ShutdownEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface8ShutdownEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::HciProtocol::WritevSafely(int, iovec*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11HciProtocol12WritevSafelyEiP5ioveci(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11HciProtocol12WritevSafelyEiP5ioveci() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> >, std::__1::allocator<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> > > >::__emplace_back_slow_path<vendor::mediatek::bluetooth::hal::OffState*>(vendor::mediatek::bluetooth::hal::OffState*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_8OffStateEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_8OffStateEEEEvDpOT_() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnEventDataReady(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocol16OnEventDataReadyEi(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocol16OnEventDataReadyEi() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::Send(unsigned char, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocol4SendEhPKhm(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocol4SendEhPKhm() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StartThread(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper11StartThreadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper11StartThreadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: guard variable for vendor::mediatek::bluetooth::hal::Singleton<vendor::mediatek::bluetooth::hal::StateMachine>::instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZGVN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE9instance_E = NULL;

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::~StateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachineD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachineD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::bluetooth::V1_0::IBluetoothHci-in-android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE0_NS2_13IBluetoothHciE = NULL;

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StopMessageLooper() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper17StopMessageLooperEv(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper17StopMessageLooperEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::RemoveObserver(vendor::mediatek::bluetooth::hal::VendorStateObserver*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine14RemoveObserverEPNS2_19VendorStateObserverE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine14RemoveObserverEPNS2_19VendorStateObserverE() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::StateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachineC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachineC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::initialize(android::sp<android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci10initializeERKNS_2spINS2_22IBluetoothHciCallbacksEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci10initializeERKNS_2spINS2_22IBluetoothHciCallbacksEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::MctProtocol(int*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocolC1EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocolC1EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::AsyncFdWatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherC1Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcherC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::~MtkStateController() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::TurnOff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek9bluetooth3hal18MtkStateController7TurnOffEv(void) {
    ALOGD("_ZNK6vendor8mediatek9bluetooth3hal18MtkStateController7TurnOffEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::bluetooth::hal::StateMessageHanlder */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE = NULL;

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::WatchFdForNonBlockingReads(int, std::__1::function<void (int)> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher26WatchFdForNonBlockingReadsEiRKNSt3__18functionIFviEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher26WatchFdForNonBlockingReadsEiRKNSt3__18functionIFviEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::HciProtocol::WriteSafely(int, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11HciProtocol11WriteSafelyEiPKhm(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11HciProtocol11WriteSafelyEiPKhm() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StopThread() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper10StopThreadEv(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper10StopThreadEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine5ResetEv(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine5ResetEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::bluetooth::hal::OnState */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek9bluetooth3hal7OnStateE = NULL;

/* Demangled: android::hardware::bluetooth::hci::H4Protocol::OnPacketReady() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci10H4Protocol13OnPacketReadyEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci10H4Protocol13OnPacketReadyEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::StopWatchingFileDescriptors() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher27StopWatchingFileDescriptorsEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher27StopWatchingFileDescriptorsEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnEventPacketReady() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocol18OnEventPacketReadyEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocol18OnEventPacketReadyEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothAddress::string_to_bytes(char const*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15string_to_bytesEPKcPh(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15string_to_bytesEPKcPh() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IBluetoothHci */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IBluetoothHci(void) {
    ALOGD("HIDL_FETCH_IBluetoothHci() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::get() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface3getEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface3getEv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::V1_0::implementation::BluetoothDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth4V1_014implementation23BluetoothDeathRecipientE = NULL;

/* Demangled: std::__1::list<vendor::mediatek::bluetooth::hal::VendorStateObserver*, std::__1::allocator<vendor::mediatek::bluetooth::hal::VendorStateObserver*> >::remove(vendor::mediatek::bluetooth::hal::VendorStateObserver* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIPN6vendor8mediatek9bluetooth3hal19VendorStateObserverENS_9allocatorIS6_EEE6removeERKS6_(void) {
    ALOGD("_ZNSt3__14listIPN6vendor8mediatek9bluetooth3hal19VendorStateObserverENS_9allocatorIS6_EEE6removeERKS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::InitHciCallbacks(android::sp<android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine16InitHciCallbacksERKN7android2spINS4_8hardware9bluetooth4V1_022IBluetoothHciCallbacksEEE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine16InitHciCallbacksERKN7android2spINS4_8hardware9bluetooth4V1_022IBluetoothHciCallbacksEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::HandleIncomingEvent(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface19HandleIncomingEventERKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface19HandleIncomingEventERKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::V1_0::implementation::VendorInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth4V1_014implementation15VendorInterfaceE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::function<void (int)> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::function<void (int)> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::function<void (int)> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::function<void (int)> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_8functionIFviEEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_8functionIFviEEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::H4Protocol::Send(unsigned char, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci10H4Protocol4SendEhPKhm(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci10H4Protocol4SendEhPKhm() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::bluetooth::hal::IdleState */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek9bluetooth3hal9IdleStateE = NULL;

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendDataToController(unsigned char, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20sendDataToControllerEhRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20sendDataToControllerEhRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::BluetoothHci() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::H4Protocol::OnDataReady(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci10H4Protocol11OnDataReadyEi(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci10H4Protocol11OnDataReadyEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> >, std::__1::allocator<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> > > >::__emplace_back_slow_path<vendor::mediatek::bluetooth::hal::OnState*>(vendor::mediatek::bluetooth::hal::OnState*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_7OnStateEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_7OnStateEEEEvDpOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::BtHalMessageLooper() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::~MtkStateController() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothAddress::get_local_address(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress17get_local_addressEPh(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress17get_local_addressEPh() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::ThreadRoutine(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper13ThreadRoutineERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper13ThreadRoutineERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::EnqueueMessage(android::sp<android::MessageHandler> const&, android::Message const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek9bluetooth3hal18BtHalMessageLooper14EnqueueMessageERKN7android2spINS4_14MessageHandlerEEERKNS4_7MessageE(void) {
    ALOGD("_ZNK6vendor8mediatek9bluetooth3hal18BtHalMessageLooper14EnqueueMessageERKN7android2spINS4_14MessageHandlerEEERKNS4_7MessageE() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::~StateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachineD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachineD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Send(unsigned char, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4SendEhPKhm(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4SendEhPKhm() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::hci::H4Protocol */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth3hci10H4ProtocolE = NULL;

/* Exported Object: vtable for vendor::mediatek::bluetooth::hal::OffState */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek9bluetooth3hal8OffStateE = NULL;

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnAclDataReady(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocol14OnAclDataReadyEi(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocol14OnAclDataReadyEi() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Open(std::__1::function<void (bool)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4OpenENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4OpenENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::~AsyncFdWatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherD1Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcherD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::AsyncFdWatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherC2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcherC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::hci::MctProtocol::MctProtocol(int*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci11MctProtocolC2EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci11MctProtocolC2EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::TurnOn() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek9bluetooth3hal18MtkStateController6TurnOnEv(void) {
    ALOGD("_ZNK6vendor8mediatek9bluetooth3hal18MtkStateController6TurnOnEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendHciCommand(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci14sendHciCommandERKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci14sendHciCommandERKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::UnlinkDeathReception() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20UnlinkDeathReceptionEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20UnlinkDeathReceptionEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE = NULL;

/* Demangled: android::hardware::bluetooth::hci::HciPacketizer::OnDataReady(int, HciPacketType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth3hci13HciPacketizer11OnDataReadyEi13HciPacketType(void) {
    ALOGD("_ZN7android8hardware9bluetooth3hci13HciPacketizer11OnDataReadyEi13HciPacketType() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StartMessageLooper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper18StartMessageLooperERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper18StartMessageLooperERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci5closeEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci5closeEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::bluetooth::hal::Singleton<vendor::mediatek::bluetooth::hal::StateMachine>::GetOnceFlag()::oncecall_ */
extern "C" __attribute__((visibility("default"))) void* _ZZN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE11GetOnceFlagEvE9oncecall_ = NULL;

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface5CloseEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface5CloseEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::stopThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher10stopThreadEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher10stopThreadEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine4StopEv(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine4StopEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine5StartEv(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine5StartEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::StateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachineC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachineC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::OnTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface9OnTimeoutEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface9OnTimeoutEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::ConfigureTimeout(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >, std::__1::function<void ()> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher16ConfigureTimeoutENSt3__16chrono8durationIxNS4_5ratioILl1ELl1000EEEEERKNS4_8functionIFvvEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher16ConfigureTimeoutENSt3__16chrono8durationIxNS4_5ratioILl1ELl1000EEEEERKNS4_8functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendAclData(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendAclDataERKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendAclDataERKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Initialize(std::__1::function<void (bool)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface10InitializeENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_(void) {
    ALOGD("_ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface10InitializeENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::ThreadRoutine() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher13ThreadRoutineEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher13ThreadRoutineEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::tryStartThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher14tryStartThreadEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher14tryStartThreadEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::AddObserver(vendor::mediatek::bluetooth::hal::VendorStateObserver*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine11AddObserverEPNS2_19VendorStateObserverE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine11AddObserverEPNS2_19VendorStateObserverE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::bluetooth::hal::MtkStateController */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek9bluetooth3hal18MtkStateControllerE = NULL;

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Transit(vendor::mediatek::bluetooth::hal::BtHalStateMessage) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine7TransitENS2_17BtHalStateMessageE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine7TransitENS2_17BtHalStateMessageE() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::BtHalMessageLooper() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::~MtkStateController() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::notifyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher12notifyThreadEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth5async14AsyncFdWatcher12notifyThreadEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> >, std::__1::allocator<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> > > >::__emplace_back_slow_path<vendor::mediatek::bluetooth::hal::IdleState*>(vendor::mediatek::bluetooth::hal::IdleState*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_9IdleStateEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_9IdleStateEEEEvDpOT_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::bluetooth::hal::Singleton<vendor::mediatek::bluetooth::hal::StateMachine>::instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE9instance_E = NULL;

/* Exported Object: vtable for android::hardware::bluetooth::hci::MctProtocol */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth3hci11MctProtocolE = NULL;

/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::UpdateVendorController(vendor::mediatek::bluetooth::hal::VendorStateController*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek9bluetooth3hal12StateMachine22UpdateVendorControllerEPNS2_21VendorStateControllerE(void) {
    ALOGD("_ZN6vendor8mediatek9bluetooth3hal12StateMachine22UpdateVendorControllerEPNS2_21VendorStateControllerE() called");
    return 0;
}

/* Exported Object: construction vtable for android::MessageHandler-in-vendor::mediatek::bluetooth::hal::StateMessageHanlder */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE0_N7android14MessageHandlerE = NULL;

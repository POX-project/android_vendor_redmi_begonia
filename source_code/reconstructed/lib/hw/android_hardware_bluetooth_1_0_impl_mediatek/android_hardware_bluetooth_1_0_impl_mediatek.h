/*
 * Reverse-Engineered ABI Specification for: android.hardware.bluetooth@1.0-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.bluetooth@1.0-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_BLUETOOTH_1_0_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_BLUETOOTH_1_0_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcherD2Ev */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::~AsyncFdWatcher() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherD2Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocol4SendEhPKhj */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::Send(unsigned char, unsigned char const*, unsigned int) */
int _ZN7android8hardware9bluetooth3hci11MctProtocol4SendEhPKhj(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal3semE */
/* Demangled: vendor::mediatek::bluetooth::hal::sem */
extern void* _ZN6vendor8mediatek9bluetooth3hal3semE;

/* Symbol: _ZTVN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE */
/* Demangled: vtable for vendor::mediatek::bluetooth::hal::StateMessageHanlder */
extern void* _ZTVN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE;

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15bytes_to_stringEPKhPc */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothAddress::bytes_to_string(unsigned char const*, char*) */
int _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15bytes_to_stringEPKhPc(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendScoDataERKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendScoData(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendScoDataERKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZNK7android8hardware9bluetooth3hci13HciPacketizer9GetPacketEv */
/* Demangled: android::hardware::bluetooth::hci::HciPacketizer::GetPacket() const */
int _ZNK7android8hardware9bluetooth3hci13HciPacketizer9GetPacketEv(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocol20OnAclDataPacketReadyEv */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnAclDataPacketReady() */
int _ZN7android8hardware9bluetooth3hci11MctProtocol20OnAclDataPacketReadyEv(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC1Ev */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::BluetoothHci() */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC1Ev(void);

/* Symbol: _ZTVN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE */
/* Demangled: vtable for android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern void* _ZTVN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE;

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface20OnFirmwareConfiguredEh */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::OnFirmwareConfigured(unsigned char) */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface20OnFirmwareConfiguredEh(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface8ShutdownEv */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Shutdown() */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface8ShutdownEv(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11HciProtocol12WritevSafelyEiP5ioveci */
/* Demangled: android::hardware::bluetooth::hci::HciProtocol::WritevSafely(int, iovec*, int) */
int _ZN7android8hardware9bluetooth3hci11HciProtocol12WritevSafelyEiP5ioveci(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_8OffStateEEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> >, std::__1::allocator<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> > > >::__emplace_back_slow_path<vendor::mediatek::bluetooth::hal::OffState*>(vendor::mediatek::bluetooth::hal::OffState*&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_8OffStateEEEEvDpOT_(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocol16OnEventDataReadyEi */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnEventDataReady(int) */
int _ZN7android8hardware9bluetooth3hci11MctProtocol16OnEventDataReadyEi(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper11StartThreadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StartThread(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper11StartThreadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZGVN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE9instance_E */
/* Demangled: guard variable for vendor::mediatek::bluetooth::hal::Singleton<vendor::mediatek::bluetooth::hal::StateMachine>::instance_ */
extern void* _ZGVN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE9instance_E;

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachineD1Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::~StateMachine() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachineD1Ev(void);

/* Symbol: _ZTCN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE0_NS2_13IBluetoothHciE */
/* Demangled: construction vtable for android::hardware::bluetooth::V1_0::IBluetoothHci-in-android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern void* _ZTCN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE0_NS2_13IBluetoothHciE;

/* Symbol: _ZN7android8hardware9bluetooth3hci11HciProtocol11WriteSafelyEiPKhj */
/* Demangled: android::hardware::bluetooth::hci::HciProtocol::WriteSafely(int, unsigned char const*, unsigned int) */
int _ZN7android8hardware9bluetooth3hci11HciProtocol11WriteSafelyEiPKhj(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper17StopMessageLooperEv */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StopMessageLooper() */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper17StopMessageLooperEv(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine14RemoveObserverEPNS2_19VendorStateObserverE */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::RemoveObserver(vendor::mediatek::bluetooth::hal::VendorStateObserver*) */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine14RemoveObserverEPNS2_19VendorStateObserverE(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachineC2Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::StateMachine() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachineC2Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci10initializeERKNS_2spINS2_22IBluetoothHciCallbacksEEE */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::initialize(android::sp<android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks> const&) */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci10initializeERKNS_2spINS2_22IBluetoothHciCallbacksEEE(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocolC1EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_ */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::MctProtocol(int*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware9bluetooth3hci11MctProtocolC1EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcherC1Ev */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::AsyncFdWatcher() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherC1Ev(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD2Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::~MtkStateController() */
int _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD2Ev(void);

/* Symbol: _ZNK6vendor8mediatek9bluetooth3hal18MtkStateController7TurnOffEv */
/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::TurnOff() const */
int _ZNK6vendor8mediatek9bluetooth3hal18MtkStateController7TurnOffEv(void);

/* Symbol: _ZTTN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE */
/* Demangled: VTT for vendor::mediatek::bluetooth::hal::StateMessageHanlder */
extern void* _ZTTN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE;

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher26WatchFdForNonBlockingReadsEiRKNSt3__18functionIFviEEE */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::WatchFdForNonBlockingReads(int, std::__1::function<void (int)> const&) */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher26WatchFdForNonBlockingReadsEiRKNSt3__18functionIFviEEE(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci10H4Protocol4SendEhPKhj */
/* Demangled: android::hardware::bluetooth::hci::H4Protocol::Send(unsigned char, unsigned char const*, unsigned int) */
int _ZN7android8hardware9bluetooth3hci10H4Protocol4SendEhPKhj(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper10StopThreadEv */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StopThread() */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper10StopThreadEv(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine5ResetEv */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Reset() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine5ResetEv(void);

/* Symbol: _ZTVN6vendor8mediatek9bluetooth3hal7OnStateE */
/* Demangled: vtable for vendor::mediatek::bluetooth::hal::OnState */
extern void* _ZTVN6vendor8mediatek9bluetooth3hal7OnStateE;

/* Symbol: _ZN7android8hardware9bluetooth3hci10H4Protocol13OnPacketReadyEv */
/* Demangled: android::hardware::bluetooth::hci::H4Protocol::OnPacketReady() */
int _ZN7android8hardware9bluetooth3hci10H4Protocol13OnPacketReadyEv(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher27StopWatchingFileDescriptorsEv */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::StopWatchingFileDescriptors() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher27StopWatchingFileDescriptorsEv(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocol18OnEventPacketReadyEv */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnEventPacketReady() */
int _ZN7android8hardware9bluetooth3hci11MctProtocol18OnEventPacketReadyEv(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15string_to_bytesEPKcPh */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothAddress::string_to_bytes(char const*, unsigned char*) */
int _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress15string_to_bytesEPKcPh(void);

/* Symbol: HIDL_FETCH_IBluetoothHci */
/* Demangled: HIDL_FETCH_IBluetoothHci */
int HIDL_FETCH_IBluetoothHci(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface3getEv */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::get() */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface3getEv(void);

/* Symbol: _ZTVN7android8hardware9bluetooth4V1_014implementation23BluetoothDeathRecipientE */
/* Demangled: vtable for android::hardware::bluetooth::V1_0::implementation::BluetoothDeathRecipient */
extern void* _ZTVN7android8hardware9bluetooth4V1_014implementation23BluetoothDeathRecipientE;

/* Symbol: _ZNSt3__14listIPN6vendor8mediatek9bluetooth3hal19VendorStateObserverENS_9allocatorIS6_EEE6removeERKS6_ */
/* Demangled: std::__1::list<vendor::mediatek::bluetooth::hal::VendorStateObserver*, std::__1::allocator<vendor::mediatek::bluetooth::hal::VendorStateObserver*> >::remove(vendor::mediatek::bluetooth::hal::VendorStateObserver* const&) */
int _ZNSt3__14listIPN6vendor8mediatek9bluetooth3hal19VendorStateObserverENS_9allocatorIS6_EEE6removeERKS6_(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine16InitHciCallbacksERKN7android2spINS4_8hardware9bluetooth4V1_022IBluetoothHciCallbacksEEE */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::InitHciCallbacks(android::sp<android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks> const&) */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine16InitHciCallbacksERKN7android2spINS4_8hardware9bluetooth4V1_022IBluetoothHciCallbacksEEE(void);

/* Symbol: _ZTCN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern void* _ZTCN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface19HandleIncomingEventERKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::HandleIncomingEvent(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface19HandleIncomingEventERKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZTVN7android8hardware9bluetooth4V1_014implementation15VendorInterfaceE */
/* Demangled: vtable for android::hardware::bluetooth::V1_0::implementation::VendorInterface */
extern void* _ZTVN7android8hardware9bluetooth4V1_014implementation15VendorInterfaceE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_8functionIFviEEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::function<void (int)> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::function<void (int)> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::function<void (int)> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::function<void (int)> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_8functionIFviEEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTVN6vendor8mediatek9bluetooth3hal9IdleStateE */
/* Demangled: vtable for vendor::mediatek::bluetooth::hal::IdleState */
extern void* _ZTVN6vendor8mediatek9bluetooth3hal9IdleStateE;

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20sendDataToControllerEhRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendDataToController(unsigned char, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20sendDataToControllerEhRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC2Ev */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::BluetoothHci() */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHciC2Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4SendEhPKhj */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Send(unsigned char, unsigned char const*, unsigned int) */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4SendEhPKhj(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci10H4Protocol11OnDataReadyEi */
/* Demangled: android::hardware::bluetooth::hci::H4Protocol::OnDataReady(int) */
int _ZN7android8hardware9bluetooth3hci10H4Protocol11OnDataReadyEi(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher16ConfigureTimeoutENSt3__16chrono8durationIxNS4_5ratioILx1ELx1000EEEEERKNS4_8functionIFvvEEE */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::ConfigureTimeout(std::__1::chrono::duration<long long, std::__1::ratio<1ll, 1000ll> >, std::__1::function<void ()> const&) */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher16ConfigureTimeoutENSt3__16chrono8durationIxNS4_5ratioILx1ELx1000EEEEERKNS4_8functionIFvvEEE(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_7OnStateEEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> >, std::__1::allocator<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> > > >::__emplace_back_slow_path<vendor::mediatek::bluetooth::hal::OnState*>(vendor::mediatek::bluetooth::hal::OnState*&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_7OnStateEEEEvDpOT_(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC1Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::BtHalMessageLooper() */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC1Ev(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD0Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::~MtkStateController() */
int _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD0Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress17get_local_addressEPh */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothAddress::get_local_address(unsigned char*) */
int _ZN7android8hardware9bluetooth4V1_014implementation16BluetoothAddress17get_local_addressEPh(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper13ThreadRoutineERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::ThreadRoutine(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper13ThreadRoutineERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK6vendor8mediatek9bluetooth3hal18BtHalMessageLooper14EnqueueMessageERKN7android2spINS4_14MessageHandlerEEERKNS4_7MessageE */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::EnqueueMessage(android::sp<android::MessageHandler> const&, android::Message const&) const */
int _ZNK6vendor8mediatek9bluetooth3hal18BtHalMessageLooper14EnqueueMessageERKN7android2spINS4_14MessageHandlerEEERKNS4_7MessageE(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachineD2Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::~StateMachine() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachineD2Ev(void);

/* Symbol: _ZTVN7android8hardware9bluetooth3hci10H4ProtocolE */
/* Demangled: vtable for android::hardware::bluetooth::hci::H4Protocol */
extern void* _ZTVN7android8hardware9bluetooth3hci10H4ProtocolE;

/* Symbol: _ZTVN6vendor8mediatek9bluetooth3hal8OffStateE */
/* Demangled: vtable for vendor::mediatek::bluetooth::hal::OffState */
extern void* _ZTVN6vendor8mediatek9bluetooth3hal8OffStateE;

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocol14OnAclDataReadyEi */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::OnAclDataReady(int) */
int _ZN7android8hardware9bluetooth3hci11MctProtocol14OnAclDataReadyEi(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4OpenENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_ */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Open(std::__1::function<void (bool)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface4OpenENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcherD1Ev */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::~AsyncFdWatcher() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherD1Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcherC2Ev */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::AsyncFdWatcher() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcherC2Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth3hci11MctProtocolC2EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_ */
/* Demangled: android::hardware::bluetooth::hci::MctProtocol::MctProtocol(int*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware9bluetooth3hci11MctProtocolC2EPiNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEESC_(void);

/* Symbol: _ZNK6vendor8mediatek9bluetooth3hal18MtkStateController6TurnOnEv */
/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::TurnOn() const */
int _ZNK6vendor8mediatek9bluetooth3hal18MtkStateController6TurnOnEv(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci14sendHciCommandERKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendHciCommand(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci14sendHciCommandERKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20UnlinkDeathReceptionEv */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::UnlinkDeathReception() */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci20UnlinkDeathReceptionEv(void);

/* Symbol: _ZTTN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE */
/* Demangled: VTT for android::hardware::bluetooth::V1_0::implementation::BluetoothHci */
extern void* _ZTTN7android8hardware9bluetooth4V1_014implementation12BluetoothHciE;

/* Symbol: _ZN7android8hardware9bluetooth3hci13HciPacketizer11OnDataReadyEi13HciPacketType */
/* Demangled: android::hardware::bluetooth::hci::HciPacketizer::OnDataReady(int, HciPacketType) */
int _ZN7android8hardware9bluetooth3hci13HciPacketizer11OnDataReadyEi13HciPacketType(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper18StartMessageLooperERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::StartMessageLooper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooper18StartMessageLooperERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci5closeEv */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::close() */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci5closeEv(void);

/* Symbol: _ZZN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE11GetOnceFlagEvE9oncecall_ */
/* Demangled: vendor::mediatek::bluetooth::hal::Singleton<vendor::mediatek::bluetooth::hal::StateMachine>::GetOnceFlag()::oncecall_ */
extern void* _ZZN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE11GetOnceFlagEvE9oncecall_;

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface5CloseEv */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Close() */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface5CloseEv(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher10stopThreadEv */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::stopThread() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher10stopThreadEv(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine4StopEv */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Stop() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine4StopEv(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine5StartEv */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Start() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine5StartEv(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachineC1Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::StateMachine() */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachineC1Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface9OnTimeoutEv */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::OnTimeout() */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface9OnTimeoutEv(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendAclDataERKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::BluetoothHci::sendAclData(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9bluetooth4V1_014implementation12BluetoothHci11sendAclDataERKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface10InitializeENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_ */
/* Demangled: android::hardware::bluetooth::V1_0::implementation::VendorInterface::Initialize(std::__1::function<void (bool)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware9bluetooth4V1_014implementation15VendorInterface10InitializeENSt3__18functionIFvbEEENS6_IFvRKNS0_8hidl_vecIhEEEEESE_SE_(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher13ThreadRoutineEv */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::ThreadRoutine() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher13ThreadRoutineEv(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher14tryStartThreadEv */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::tryStartThread() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher14tryStartThreadEv(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine11AddObserverEPNS2_19VendorStateObserverE */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::AddObserver(vendor::mediatek::bluetooth::hal::VendorStateObserver*) */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine11AddObserverEPNS2_19VendorStateObserverE(void);

/* Symbol: _ZTVN6vendor8mediatek9bluetooth3hal18MtkStateControllerE */
/* Demangled: vtable for vendor::mediatek::bluetooth::hal::MtkStateController */
extern void* _ZTVN6vendor8mediatek9bluetooth3hal18MtkStateControllerE;

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine7TransitENS2_17BtHalStateMessageE */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::Transit(vendor::mediatek::bluetooth::hal::BtHalStateMessage) */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine7TransitENS2_17BtHalStateMessageE(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC2Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::BtHalMessageLooper::BtHalMessageLooper() */
int _ZN6vendor8mediatek9bluetooth3hal18BtHalMessageLooperC2Ev(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD1Ev */
/* Demangled: vendor::mediatek::bluetooth::hal::MtkStateController::~MtkStateController() */
int _ZN6vendor8mediatek9bluetooth3hal18MtkStateControllerD1Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth5async14AsyncFdWatcher12notifyThreadEv */
/* Demangled: android::hardware::bluetooth::async::AsyncFdWatcher::notifyThread() */
int _ZN7android8hardware9bluetooth5async14AsyncFdWatcher12notifyThreadEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_9IdleStateEEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> >, std::__1::allocator<std::__1::unique_ptr<vendor::mediatek::bluetooth::hal::State, std::__1::default_delete<vendor::mediatek::bluetooth::hal::State> > > >::__emplace_back_slow_path<vendor::mediatek::bluetooth::hal::IdleState*>(vendor::mediatek::bluetooth::hal::IdleState*&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN6vendor8mediatek9bluetooth3hal5StateENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE24__emplace_back_slow_pathIJPNS5_9IdleStateEEEEvDpOT_(void);

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE9instance_E */
/* Demangled: vendor::mediatek::bluetooth::hal::Singleton<vendor::mediatek::bluetooth::hal::StateMachine>::instance_ */
extern void* _ZN6vendor8mediatek9bluetooth3hal9SingletonINS2_12StateMachineEE9instance_E;

/* Symbol: _ZTVN7android8hardware9bluetooth3hci11MctProtocolE */
/* Demangled: vtable for android::hardware::bluetooth::hci::MctProtocol */
extern void* _ZTVN7android8hardware9bluetooth3hci11MctProtocolE;

/* Symbol: _ZN6vendor8mediatek9bluetooth3hal12StateMachine22UpdateVendorControllerEPNS2_21VendorStateControllerE */
/* Demangled: vendor::mediatek::bluetooth::hal::StateMachine::UpdateVendorController(vendor::mediatek::bluetooth::hal::VendorStateController*) */
int _ZN6vendor8mediatek9bluetooth3hal12StateMachine22UpdateVendorControllerEPNS2_21VendorStateControllerE(void);

/* Symbol: _ZTCN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE0_N7android14MessageHandlerE */
/* Demangled: construction vtable for android::MessageHandler-in-vendor::mediatek::bluetooth::hal::StateMessageHanlder */
extern void* _ZTCN6vendor8mediatek9bluetooth3hal19StateMessageHanlderE0_N7android14MessageHandlerE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_BLUETOOTH_1_0_IMPL_MEDIATEK_H */

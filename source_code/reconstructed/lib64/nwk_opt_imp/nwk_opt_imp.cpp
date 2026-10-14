/*
 * Reverse-Engineered Source for: nwk_opt_imp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "nwk_opt_imp"

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
#include "nwk_opt_imp.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_INPUT "/dev/input"
#define DEV_DEV_MIX_EVENT "/dev/mix_event"
#define DEV_DEV_TTYC5 "/dev/ttyC5"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_INPUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_INPUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_INPUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MIX_EVENT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MIX_EVENT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MIX_EVENT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYC5, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYC5, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYC5, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating nwk_opt_imp", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting nwk_opt_imp service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("nwk_opt_imp service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt::updateStatus(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt12updateStatusEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt12updateStatusEiiii() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: EventHub::registerDeviceForEpollLocked(EventHub::Device*) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub28registerDeviceForEpollLockedEPNS_6DeviceE(void) {
    ALOGD("_ZN8EventHub28registerDeviceForEpollLockedEPNS_6DeviceE() called");
    return 0;
}

/* Demangled: Model::sendTxEvent(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model11sendTxEventEl(void) {
    ALOGD("_ZN5Model11sendTxEventEl() called");
    return 0;
}

/* Exported Object: last_last_delta */
extern "C" __attribute__((visibility("default"))) void* last_last_delta = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: SimpleRegionList::~SimpleRegionList() */
extern "C" __attribute__((visibility("default"))) int _ZN16SimpleRegionListD2Ev(void) {
    ALOGD("_ZN16SimpleRegionListD2Ev() called");
    return 0;
}

/* Demangled: disable_normal_predict() */
extern "C" __attribute__((visibility("default"))) int _Z22disable_normal_predictv(void) {
    ALOGD("_Z22disable_normal_predictv() called");
    return 0;
}

/* Demangled: MainThreadWZRY::switch_game_mode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY16switch_game_modeEii(void) {
    ALOGD("_ZN14MainThreadWZRY16switch_game_modeEii() called");
    return 0;
}

/* Exported Object: fps_buffer */
extern "C" __attribute__((visibility("default"))) void* fps_buffer = NULL;

/* Exported Object: tx_p */
extern "C" __attribute__((visibility("default"))) void* tx_p = NULL;

/* Demangled: android::Vector<android::TouchInputMapper::RawState>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16TouchInputMapper8RawStateEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_16TouchInputMapper8RawStateEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: enable_normal_predict() */
extern "C" __attribute__((visibility("default"))) int _Z21enable_normal_predictv(void) {
    ALOGD("_Z21enable_normal_predictv() called");
    return 0;
}

/* Demangled: FixThread::exit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThread4exitEi(void) {
    ALOGD("_ZN9FixThread4exitEi() called");
    return 0;
}

/* Exported Object: msg */
extern "C" __attribute__((visibility("default"))) void* msg = NULL;

/* Demangled: SimpleRegionList::~SimpleRegionList() */
extern "C" __attribute__((visibility("default"))) int _ZN16SimpleRegionListD1Ev(void) {
    ALOGD("_ZN16SimpleRegionListD1Ev() called");
    return 0;
}

/* Demangled: android::TouchInputMapper::TouchInputMapper(EventHub*, Model*, RegionList*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapperC2EP8EventHubP5ModelP10RegionList(void) {
    ALOGD("_ZN7android16TouchInputMapperC2EP8EventHubP5ModelP10RegionList() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::TouchInputMapper::RawState> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_16TouchInputMapper8RawStateEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: EventHub::EPOLL_MAX_EVENTS */
extern "C" __attribute__((visibility("default"))) void* _ZN8EventHub16EPOLL_MAX_EVENTSE = NULL;

/* Demangled: MainThreadFC::switch_game_mode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFC16switch_game_modeEii(void) {
    ALOGD("_ZN12MainThreadFC16switch_game_modeEii() called");
    return 0;
}

/* Demangled: android::Vector<android::TouchInputMapper::RawState>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16TouchInputMapper8RawStateEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_16TouchInputMapper8RawStateEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: mFps */
extern "C" __attribute__((visibility("default"))) void* mFps = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptE = NULL;

/* Demangled: SimpleRegionList::~SimpleRegionList() */
extern "C" __attribute__((visibility("default"))) int _ZN16SimpleRegionListD0Ev(void) {
    ALOGD("_ZN16SimpleRegionListD0Ev() called");
    return 0;
}

/* Demangled: Model::resetAbsouteTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5Model19resetAbsouteTimeoutEv(void) {
    ALOGD("_ZN5Model19resetAbsouteTimeoutEv() called");
    return 0;
}

/* Demangled: HeartThread::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN11HeartThread8loopOnceEv(void) {
    ALOGD("_ZN11HeartThread8loopOnceEv() called");
    return 0;
}

/* Demangled: EventHub::Device::Device(int, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub6DeviceC1EiiRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN8EventHub6DeviceC1EiiRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: SimpleRegionList::getRegion(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16SimpleRegionList9getRegionEj(void) {
    ALOGD("_ZN16SimpleRegionList9getRegionEj() called");
    return 0;
}

/* Demangled: HeartThread::HeartThread(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HeartThreadC1Eii(void) {
    ALOGD("_ZN11HeartThreadC1Eii() called");
    return 0;
}

/* Demangled: FixThread::enter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThread5enterEi(void) {
    ALOGD("_ZN9FixThread5enterEi() called");
    return 0;
}

/* Demangled: android::TouchInputMapper::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper5resetEv(void) {
    ALOGD("_ZN7android16TouchInputMapper5resetEv() called");
    return 0;
}

/* Demangled: resetGlobal() */
extern "C" __attribute__((visibility("default"))) int _Z11resetGlobalv(void) {
    ALOGD("_Z11resetGlobalv() called");
    return 0;
}

/* Demangled: MainThreadCJ::switch_game_mode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJ16switch_game_modeEii(void) {
    ALOGD("_ZN12MainThreadCJ16switch_game_modeEii() called");
    return 0;
}

/* Demangled: MainThreadFC::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFC4stopEv(void) {
    ALOGD("_ZN12MainThreadFC4stopEv() called");
    return 0;
}

/* Exported Object: success */
extern "C" __attribute__((visibility("default"))) void* success = NULL;

/* Demangled: android::MultiTouchMotionAccumulator::reset(EventHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator5resetEP8EventHub(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator5resetEP8EventHub() called");
    return 0;
}

/* Demangled: get_detect_info(RawEvent*, period_info*) */
extern "C" __attribute__((visibility("default"))) int _Z15get_detect_infoP8RawEventP11period_info(void) {
    ALOGD("_Z15get_detect_infoP8RawEventP11period_info() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: vtable for PredictThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV13PredictThread = NULL;

/* Exported Object: is_predict */
extern "C" __attribute__((visibility("default"))) void* is_predict = NULL;

/* Demangled: MainThreadFC::init() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFC4initEv(void) {
    ALOGD("_ZN12MainThreadFC4initEv() called");
    return 0;
}

/* Demangled: MainThreadFC::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFC5resetEv(void) {
    ALOGD("_ZN12MainThreadFC5resetEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt::NwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptC2Ev() called");
    return 0;
}

/* Demangled: SimpleRegion::dealWithTouch(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion13dealWithTouchEii(void) {
    ALOGD("_ZN12SimpleRegion13dealWithTouchEii() called");
    return 0;
}

/* Demangled: android::TouchInputMapper::cookAndDispatch(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper15cookAndDispatchEl(void) {
    ALOGD("_ZN7android16TouchInputMapper15cookAndDispatchEl() called");
    return 0;
}

/* Demangled: MainThreadWZRY::gameModeloop() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY12gameModeloopEv(void) {
    ALOGD("_ZN14MainThreadWZRY12gameModeloopEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::TouchInputMapper::processRawTouches() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper17processRawTouchesEv(void) {
    ALOGD("_ZN7android16TouchInputMapper17processRawTouchesEv() called");
    return 0;
}

/* Demangled: android::Vector<android::TouchInputMapper::RawState>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16TouchInputMapper8RawStateEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_16TouchInputMapper8RawStateEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: HeartThread::HeartThread(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HeartThreadC2Eii(void) {
    ALOGD("_ZN11HeartThreadC2Eii() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: s_msg */
extern "C" __attribute__((visibility("default"))) void* s_msg = NULL;

/* Demangled: android::MultiTouchMotionAccumulator::Slot::Slot() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator4SlotC2Ev(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator4SlotC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt::NwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptC1Ev() called");
    return 0;
}

/* Exported Object: EventHub::EPOLL_SIZE_HINT */
extern "C" __attribute__((visibility("default"))) void* _ZN8EventHub15EPOLL_SIZE_HINTE = NULL;

/* Demangled: EventHub::openDeviceLocked(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub16openDeviceLockedEPKci(void) {
    ALOGD("_ZN8EventHub16openDeviceLockedEPKci() called");
    return 0;
}

/* Demangled: EventHub::getAbsoluteAxisValue(int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub20getAbsoluteAxisValueEiiPi(void) {
    ALOGD("_ZN8EventHub20getAbsoluteAxisValueEiiPi() called");
    return 0;
}

/* Demangled: EventHub::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub6DeviceD2Ev(void) {
    ALOGD("_ZN8EventHub6DeviceD2Ev() called");
    return 0;
}

/* Demangled: SimpleRegion::getState() */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion8getStateEv(void) {
    ALOGD("_ZN12SimpleRegion8getStateEv() called");
    return 0;
}

/* Demangled: android::Vector<android::TouchInputMapper::RawState>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16TouchInputMapper8RawStateEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_16TouchInputMapper8RawStateEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: send_switch_msg(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15send_switch_msgjj(void) {
    ALOGD("_Z15send_switch_msgjj() called");
    return 0;
}

/* Demangled: PredictThread::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN13PredictThread8loopOnceEv(void) {
    ALOGD("_ZN13PredictThread8loopOnceEv() called");
    return 0;
}

/* Exported Object: vtable for MainThreadFC */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MainThreadFC = NULL;

/* Exported Object: fail */
extern "C" __attribute__((visibility("default"))) void* fail = NULL;

/* Demangled: EventHub::getEvents(int, RawEvent*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub9getEventsEiP8RawEventm(void) {
    ALOGD("_ZN8EventHub9getEventsEiP8RawEventm() called");
    return 0;
}

/* Demangled: Model::Model(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5ModelC2Ej(void) {
    ALOGD("_ZN5ModelC2Ej() called");
    return 0;
}

/* Demangled: android::MultiTouchMotionAccumulator::Slot::Slot() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator4SlotC1Ev(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator4SlotC1Ev() called");
    return 0;
}

/* Demangled: sendPredict_fast(unsigned int, unsigned int, short) */
extern "C" __attribute__((visibility("default"))) int _Z16sendPredict_fastjjs(void) {
    ALOGD("_Z16sendPredict_fastjjs() called");
    return 0;
}

/* Demangled: MainThreadCJ::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJ4stopEv(void) {
    ALOGD("_ZN12MainThreadCJ4stopEv() called");
    return 0;
}

/* Demangled: PredictThread::PredictThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PredictThreadC2Ei(void) {
    ALOGD("_ZN13PredictThreadC2Ei() called");
    return 0;
}

/* Demangled: EventHub::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub6DeviceD1Ev(void) {
    ALOGD("_ZN8EventHub6DeviceD1Ev() called");
    return 0;
}

/* Exported Object: fpsSwitchTimeout */
extern "C" __attribute__((visibility("default"))) void* fpsSwitchTimeout = NULL;

/* Demangled: android::MultiTouchMotionAccumulator::finishSync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator10finishSyncEv(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator10finishSyncEv() called");
    return 0;
}

/* Exported Object: m_uid */
extern "C" __attribute__((visibility("default"))) void* m_uid = NULL;

/* Demangled: EventHub::EventHub(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHubC2Ei(void) {
    ALOGD("_ZN8EventHubC2Ei() called");
    return 0;
}

/* Demangled: MainThreadCJ::init() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJ4initEv(void) {
    ALOGD("_ZN12MainThreadCJ4initEv() called");
    return 0;
}

/* Exported Object: lastPredict */
extern "C" __attribute__((visibility("default"))) void* lastPredict = NULL;

/* Demangled: Model::Model(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5ModelC1Ej(void) {
    ALOGD("_ZN5ModelC1Ej() called");
    return 0;
}

/* Demangled: android::TouchInputMapper::syncTouch(android::TouchInputMapper::RawState*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper9syncTouchEPNS0_8RawStateE(void) {
    ALOGD("_ZN7android16TouchInputMapper9syncTouchEPNS0_8RawStateE() called");
    return 0;
}

/* Demangled: PredictThread::PredictThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PredictThreadC1Ei(void) {
    ALOGD("_ZN13PredictThreadC1Ei() called");
    return 0;
}

/* Demangled: Model::getType() */
extern "C" __attribute__((visibility("default"))) int _ZN5Model7getTypeEv(void) {
    ALOGD("_ZN5Model7getTypeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: EventHub::EventHub(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHubC1Ei(void) {
    ALOGD("_ZN8EventHubC1Ei() called");
    return 0;
}

/* Demangled: Model::setFPS(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model6setFPSEi(void) {
    ALOGD("_ZN5Model6setFPSEi() called");
    return 0;
}

/* Demangled: MainThreadCJ::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJ8loopOnceEv(void) {
    ALOGD("_ZN12MainThreadCJ8loopOnceEv() called");
    return 0;
}

/* Demangled: FixThread::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThread4initEv(void) {
    ALOGD("_ZN9FixThread4initEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Exported Object: nwk_opt_log_on */
extern "C" __attribute__((visibility("default"))) void* nwk_opt_log_on = NULL;

/* Demangled: android::TouchInputMapper::isProtocolB() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper11isProtocolBEv(void) {
    ALOGD("_ZN7android16TouchInputMapper11isProtocolBEv() called");
    return 0;
}

/* Demangled: android::TouchInputMapper::TouchInputMapper(EventHub*, Model*, RegionList*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapperC1EP8EventHubP5ModelP10RegionList(void) {
    ALOGD("_ZN7android16TouchInputMapperC1EP8EventHubP5ModelP10RegionList() called");
    return 0;
}

/* Demangled: detect_dump() */
extern "C" __attribute__((visibility("default"))) int _Z11detect_dumpv(void) {
    ALOGD("_Z11detect_dumpv() called");
    return 0;
}

/* Exported Object: click_time */
extern "C" __attribute__((visibility("default"))) void* click_time = NULL;

/* Demangled: android::TouchInputMapper::process(RawEvent const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper7processEPK8RawEvent(void) {
    ALOGD("_ZN7android16TouchInputMapper7processEPK8RawEvent() called");
    return 0;
}

/* Demangled: detect_start() */
extern "C" __attribute__((visibility("default"))) int _Z12detect_startv(void) {
    ALOGD("_Z12detect_startv() called");
    return 0;
}

/* Exported Object: tx */
extern "C" __attribute__((visibility("default"))) void* tx = NULL;

/* Demangled: EventHub::scanDevicesLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub17scanDevicesLockedEv(void) {
    ALOGD("_ZN8EventHub17scanDevicesLockedEv() called");
    return 0;
}

/* Demangled: EventHub::Device::Device(int, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub6DeviceC2EiiRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN8EventHub6DeviceC2EiiRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WorkThread::work() */
extern "C" __attribute__((visibility("default"))) int _ZN10WorkThread4workEv(void) {
    ALOGD("_ZN10WorkThread4workEv() called");
    return 0;
}

/* Exported Object: simpleScheme */
extern "C" __attribute__((visibility("default"))) void* simpleScheme = NULL;

/* Demangled: android::Vector<android::TouchInputMapper::RawState>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16TouchInputMapper8RawStateEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_16TouchInputMapper8RawStateEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: MainThreadCJ::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJ5resetEv(void) {
    ALOGD("_ZN12MainThreadCJ5resetEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::RawPointerData::copyFrom(android::RawPointerData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14RawPointerData8copyFromERKS0_(void) {
    ALOGD("_ZN7android14RawPointerData8copyFromERKS0_() called");
    return 0;
}

/* Demangled: HeartThread::sendHeartSignal(long) */
extern "C" __attribute__((visibility("default"))) int _ZN11HeartThread15sendHeartSignalEl(void) {
    ALOGD("_ZN11HeartThread15sendHeartSignalEl() called");
    return 0;
}

/* Demangled: MainThreadFC::MainThreadFC() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFCC2Ev(void) {
    ALOGD("_ZN12MainThreadFCC2Ev() called");
    return 0;
}

/* Demangled: MainThreadWZRY::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY5resetEv(void) {
    ALOGD("_ZN14MainThreadWZRY5resetEv() called");
    return 0;
}

/* Exported Object: vtable for MainThreadCJ */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MainThreadCJ = NULL;

/* Demangled: EventHub::scanDirLocked(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub13scanDirLockedEPKc(void) {
    ALOGD("_ZN8EventHub13scanDirLockedEPKc() called");
    return 0;
}

/* Demangled: Model::sendTouchData(Region*, int, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model13sendTouchDataEP6Regioniil(void) {
    ALOGD("_ZN5Model13sendTouchDataEP6Regioniil() called");
    return 0;
}

/* Demangled: Model::simpleRecalTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5Model18simpleRecalTimeoutEv(void) {
    ALOGD("_ZN5Model18simpleRecalTimeoutEv() called");
    return 0;
}

/* Demangled: Model::Model() */
extern "C" __attribute__((visibility("default"))) int _ZN5ModelC2Ev(void) {
    ALOGD("_ZN5ModelC2Ev() called");
    return 0;
}

/* Exported Object: move_time */
extern "C" __attribute__((visibility("default"))) void* move_time = NULL;

/* Demangled: android::RawPointerData::RawPointerData() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14RawPointerDataC2Ev(void) {
    ALOGD("_ZN7android14RawPointerDataC2Ev() called");
    return 0;
}

/* Demangled: android::MultiTouchMotionAccumulator::Slot::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator4Slot5clearEv(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator4Slot5clearEv() called");
    return 0;
}

/* Demangled: FixThread::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThread8loopOnceEv(void) {
    ALOGD("_ZN9FixThread8loopOnceEv() called");
    return 0;
}

/* Demangled: EventHub::openDeviceLocked(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub16openDeviceLockedEPKc(void) {
    ALOGD("_ZN8EventHub16openDeviceLockedEPKc() called");
    return 0;
}

/* Demangled: MainThreadWZRY::setDisplayData(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY14setDisplayDataEiii(void) {
    ALOGD("_ZN14MainThreadWZRY14setDisplayDataEiii() called");
    return 0;
}

/* Demangled: SimpleRegion::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion5flushEv(void) {
    ALOGD("_ZN12SimpleRegion5flushEv() called");
    return 0;
}

/* Demangled: Model::getAbsoluteTimeout(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model18getAbsoluteTimeoutEPi(void) {
    ALOGD("_ZN5Model18getAbsoluteTimeoutEPi() called");
    return 0;
}

/* Demangled: MainThreadFC::start() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFC5startEv(void) {
    ALOGD("_ZN12MainThreadFC5startEv() called");
    return 0;
}

/* Demangled: MainThreadFC::MainThreadFC() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFCC1Ev(void) {
    ALOGD("_ZN12MainThreadFCC1Ev() called");
    return 0;
}

/* Demangled: Model::getNextTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5Model14getNextTimeoutEv(void) {
    ALOGD("_ZN5Model14getNextTimeoutEv() called");
    return 0;
}

/* Demangled: android::MultiTouchMotionAccumulator::clearSlots(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator10clearSlotsEi(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator10clearSlotsEi() called");
    return 0;
}

/* Demangled: MainThreadWZRY::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY8loopOnceEv(void) {
    ALOGD("_ZN14MainThreadWZRY8loopOnceEv() called");
    return 0;
}

/* Demangled: EventHub::EventHub() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHubC2Ev(void) {
    ALOGD("_ZN8EventHubC2Ev() called");
    return 0;
}

/* Demangled: Model::Model() */
extern "C" __attribute__((visibility("default"))) int _ZN5ModelC1Ev(void) {
    ALOGD("_ZN5ModelC1Ev() called");
    return 0;
}

/* Exported Object: mix_time */
extern "C" __attribute__((visibility("default"))) void* mix_time = NULL;

/* Demangled: android::RawPointerData::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14RawPointerData5clearEv(void) {
    ALOGD("_ZN7android14RawPointerData5clearEv() called");
    return 0;
}

/* Demangled: android::RawPointerData::RawPointerData() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14RawPointerDataC1Ev(void) {
    ALOGD("_ZN7android14RawPointerDataC1Ev() called");
    return 0;
}

/* Demangled: MainThreadCJ::MainThreadCJ() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJC2Ev(void) {
    ALOGD("_ZN12MainThreadCJC2Ev() called");
    return 0;
}

/* Exported Object: heart_success */
extern "C" __attribute__((visibility("default"))) void* heart_success = NULL;

/* Exported Object: last_range */
extern "C" __attribute__((visibility("default"))) void* last_range = NULL;

/* Demangled: EventHub::addDeviceLocked(EventHub::Device*) */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHub15addDeviceLockedEPNS_6DeviceE(void) {
    ALOGD("_ZN8EventHub15addDeviceLockedEPNS_6DeviceE() called");
    return 0;
}

/* Demangled: Model::switchState(Region*) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model11switchStateEP6Region(void) {
    ALOGD("_ZN5Model11switchStateEP6Region() called");
    return 0;
}

/* Demangled: PeriodThread::PeriodThread(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PeriodThreadC1Eiii(void) {
    ALOGD("_ZN12PeriodThreadC1Eiii() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: vtable for MainThreadWZRY */
extern "C" __attribute__((visibility("default"))) void* _ZTV14MainThreadWZRY = NULL;

/* Demangled: Model::~Model() */
extern "C" __attribute__((visibility("default"))) int _ZN5ModelD2Ev(void) {
    ALOGD("_ZN5ModelD2Ev() called");
    return 0;
}

/* Demangled: PeriodThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN12PeriodThread4stopEv(void) {
    ALOGD("_ZN12PeriodThread4stopEv() called");
    return 0;
}

/* Exported Object: fps_fd */
extern "C" __attribute__((visibility("default"))) void* fps_fd = NULL;

/* Demangled: EventHub::EventHub() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHubC1Ev(void) {
    ALOGD("_ZN8EventHubC1Ev() called");
    return 0;
}

/* Demangled: MainThreadCJ::MainThreadCJ() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJC1Ev(void) {
    ALOGD("_ZN12MainThreadCJC1Ev() called");
    return 0;
}

/* Demangled: FixThread::switch_game_mode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThread16switch_game_modeEi(void) {
    ALOGD("_ZN9FixThread16switch_game_modeEi() called");
    return 0;
}

/* Demangled: SimpleRegion::getTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion10getTimeoutEv(void) {
    ALOGD("_ZN12SimpleRegion10getTimeoutEv() called");
    return 0;
}

/* Demangled: Model::handleTxWithSimpleScheme(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model24handleTxWithSimpleSchemeEl(void) {
    ALOGD("_ZN5Model24handleTxWithSimpleSchemeEl() called");
    return 0;
}

/* Demangled: PeriodThread::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN12PeriodThread8loopOnceEv(void) {
    ALOGD("_ZN12PeriodThread8loopOnceEv() called");
    return 0;
}

/* Exported Object: vtable for FixThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV9FixThread = NULL;

/* Exported Object: lastTxTime */
extern "C" __attribute__((visibility("default"))) void* lastTxTime = NULL;

/* Exported Object: vtable for SimpleRegion */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SimpleRegion = NULL;

/* Demangled: android::TouchInputMapper::sync(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16TouchInputMapper4syncEl(void) {
    ALOGD("_ZN7android16TouchInputMapper4syncEl() called");
    return 0;
}

/* Demangled: PeriodThread::sendPeriodSignal(long) */
extern "C" __attribute__((visibility("default"))) int _ZN12PeriodThread16sendPeriodSignalEl(void) {
    ALOGD("_ZN12PeriodThread16sendPeriodSignalEl() called");
    return 0;
}

/* Exported Object: m_cmd_mode */
extern "C" __attribute__((visibility("default"))) void* m_cmd_mode = NULL;

/* Demangled: EventHub::~EventHub() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHubD2Ev(void) {
    ALOGD("_ZN8EventHubD2Ev() called");
    return 0;
}

/* Demangled: Model::~Model() */
extern "C" __attribute__((visibility("default"))) int _ZN5ModelD1Ev(void) {
    ALOGD("_ZN5ModelD1Ev() called");
    return 0;
}

/* Demangled: MainThreadWZRY::MainThreadWZRY() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRYC2Ev(void) {
    ALOGD("_ZN14MainThreadWZRYC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt::switch_game_mode(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt16switch_game_modeEji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt16switch_game_modeEji() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt-in-vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptE0_NS3_7INwkOptE = NULL;

/* Demangled: android::Vector<android::TouchInputMapper::RawState>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_16TouchInputMapper8RawStateEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_16TouchInputMapper8RawStateEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: FixThread::FixThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThreadC2Ei(void) {
    ALOGD("_ZN9FixThreadC2Ei() called");
    return 0;
}

/* Demangled: sendPredict(unsigned int, unsigned int, short) */
extern "C" __attribute__((visibility("default"))) int _Z11sendPredictjjs(void) {
    ALOGD("_Z11sendPredictjjs() called");
    return 0;
}

/* Demangled: PredictThread::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN13PredictThread4dumpEv(void) {
    ALOGD("_ZN13PredictThread4dumpEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: EventHub::~EventHub() */
extern "C" __attribute__((visibility("default"))) int _ZN8EventHubD1Ev(void) {
    ALOGD("_ZN8EventHubD1Ev() called");
    return 0;
}

/* Demangled: MainThreadWZRY::MainThreadWZRY() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRYC1Ev(void) {
    ALOGD("_ZN14MainThreadWZRYC1Ev() called");
    return 0;
}

/* Demangled: SimpleRegion::setState(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion8setStateEj(void) {
    ALOGD("_ZN12SimpleRegion8setStateEj() called");
    return 0;
}

/* Exported Object: vtable for SimpleRegionList */
extern "C" __attribute__((visibility("default"))) void* _ZTV16SimpleRegionList = NULL;

/* Demangled: android::MultiTouchMotionAccumulator::MultiTouchMotionAccumulator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulatorC2Ev(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulatorC2Ev() called");
    return 0;
}

/* Exported Object: mFdLock */
extern "C" __attribute__((visibility("default"))) void* mFdLock = NULL;

/* Demangled: FixThread::FixThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FixThreadC1Ei(void) {
    ALOGD("_ZN9FixThreadC1Ei() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOptE = NULL;

/* Demangled: Model::simpleRecalTimeout(Region*) */
extern "C" __attribute__((visibility("default"))) int _ZN5Model18simpleRecalTimeoutEP6Region(void) {
    ALOGD("_ZN5Model18simpleRecalTimeoutEP6Region() called");
    return 0;
}

/* Exported Object: delta */
extern "C" __attribute__((visibility("default"))) void* delta = NULL;

/* Demangled: PeriodThread::PeriodThread(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PeriodThreadC2Eiii(void) {
    ALOGD("_ZN12PeriodThreadC2Eiii() called");
    return 0;
}

/* Demangled: SimpleRegion::setScore(float) */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion8setScoreEf(void) {
    ALOGD("_ZN12SimpleRegion8setScoreEf() called");
    return 0;
}

/* Demangled: android::MultiTouchMotionAccumulator::MultiTouchMotionAccumulator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulatorC1Ev(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulatorC1Ev() called");
    return 0;
}

/* Demangled: detect_stop() */
extern "C" __attribute__((visibility("default"))) int _Z11detect_stopv(void) {
    ALOGD("_Z11detect_stopv() called");
    return 0;
}

/* Demangled: readFPS() */
extern "C" __attribute__((visibility("default"))) int _Z7readFPSv(void) {
    ALOGD("_Z7readFPSv() called");
    return 0;
}

/* Demangled: PredictThread::sendPredictSignal(int, long, period_info*) */
extern "C" __attribute__((visibility("default"))) int _ZN13PredictThread17sendPredictSignalEilP11period_info(void) {
    ALOGD("_ZN13PredictThread17sendPredictSignalEilP11period_info() called");
    return 0;
}

/* Demangled: MainThreadWZRY::start() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY5startEv(void) {
    ALOGD("_ZN14MainThreadWZRY5startEv() called");
    return 0;
}

/* Demangled: SimpleRegion::dealWithTx(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SimpleRegion10dealWithTxEbb(void) {
    ALOGD("_ZN12SimpleRegion10dealWithTxEbb() called");
    return 0;
}

/* Demangled: PeriodThread::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN12PeriodThread5resetEv(void) {
    ALOGD("_ZN12PeriodThread5resetEv() called");
    return 0;
}

/* Exported Object: last_delta */
extern "C" __attribute__((visibility("default"))) void* last_delta = NULL;

/* Demangled: android::MultiTouchMotionAccumulator::~MultiTouchMotionAccumulator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulatorD2Ev(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulatorD2Ev() called");
    return 0;
}

/* Demangled: WorkThread::start() */
extern "C" __attribute__((visibility("default"))) int _ZN10WorkThread5startEv(void) {
    ALOGD("_ZN10WorkThread5startEv() called");
    return 0;
}

/* Demangled: MainThreadWZRY::lowLatencyloop() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY14lowLatencyloopEv(void) {
    ALOGD("_ZN14MainThreadWZRY14lowLatencyloopEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: MainThreadCJ::start() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadCJ5startEv(void) {
    ALOGD("_ZN12MainThreadCJ5startEv() called");
    return 0;
}

/* Demangled: MainThreadFC::loopOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN12MainThreadFC8loopOnceEv(void) {
    ALOGD("_ZN12MainThreadFC8loopOnceEv() called");
    return 0;
}

/* Demangled: MainThreadWZRY::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY4stopEv(void) {
    ALOGD("_ZN14MainThreadWZRY4stopEv() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: do_send_predict */
extern "C" __attribute__((visibility("default"))) void* do_send_predict = NULL;

/* Exported Object: last_tx */
extern "C" __attribute__((visibility("default"))) void* last_tx = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt14notifyAppStateERKN7android8hardware11hidl_stringESA_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt14notifyAppStateERKN7android8hardware11hidl_stringESA_i() called");
    return 0;
}

/* Demangled: android::MultiTouchMotionAccumulator::~MultiTouchMotionAccumulator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulatorD1Ev(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulatorD1Ev() called");
    return 0;
}

/* Demangled: WorkThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN10WorkThread4stopEv(void) {
    ALOGD("_ZN10WorkThread4stopEv() called");
    return 0;
}

/* Demangled: MainThreadWZRY::init() */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY4initEv(void) {
    ALOGD("_ZN14MainThreadWZRY4initEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::implementation::NwkOpt::setDisplayData(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt14setDisplayDataEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_014implementation6NwkOpt14setDisplayDataEiii() called");
    return 0;
}

/* Demangled: SimpleRegionList::setRegionState(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16SimpleRegionList14setRegionStateEj(void) {
    ALOGD("_ZN16SimpleRegionList14setRegionStateEj() called");
    return 0;
}

/* Demangled: RegionList::updateRegion() */
extern "C" __attribute__((visibility("default"))) int _ZN10RegionList12updateRegionEv(void) {
    ALOGD("_ZN10RegionList12updateRegionEv() called");
    return 0;
}

/* Exported Object: vtable for HeartThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV11HeartThread = NULL;

/* Exported Object: vtable for PeriodThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV12PeriodThread = NULL;

/* Demangled: android::MultiTouchMotionAccumulator::process(RawEvent const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27MultiTouchMotionAccumulator7processEPK8RawEvent(void) {
    ALOGD("_ZN7android27MultiTouchMotionAccumulator7processEPK8RawEvent() called");
    return 0;
}

/* Demangled: sendPredict_imp(unsigned int, unsigned int, short, bool) */
extern "C" __attribute__((visibility("default"))) int _Z15sendPredict_impjjsb(void) {
    ALOGD("_Z15sendPredict_impjjsb() called");
    return 0;
}

/* Demangled: MainThreadWZRY::enter_game_mode(unsigned int, float, float, float, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MainThreadWZRY15enter_game_modeEjffffi(void) {
    ALOGD("_ZN14MainThreadWZRY15enter_game_modeEjffffi() called");
    return 0;
}

/* Exported Object: tty_fd */
extern "C" __attribute__((visibility("default"))) void* tty_fd = NULL;

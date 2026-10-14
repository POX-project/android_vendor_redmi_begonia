/*
 * Reverse-Engineered Source for: libmtkcam_metastore.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_metastore"

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
#include "libmtkcam_metastore.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: XiaoMi::DualCameraData_FromPersist_IsValid(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi34DualCameraData_FromPersist_IsValidEj(void) {
    ALOGD("_ZN6XiaoMi34DualCameraData_FromPersist_IsValidEj() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::constructRequestMetadata(int, camera_metadata*&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest24constructRequestMetadataEiRP15camera_metadataRN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest24constructRequestMetadataEiRP15camera_metadataRN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_COMMON() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::impConstructRequestMetadata_by_SymbolName(android::String8 const&, NSCam::IMetadata&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest41impConstructRequestMetadata_by_SymbolNameERKNS_7String8ERN5NSCam9IMetadataEi(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest41impConstructRequestMetadata_by_SymbolNameERKNS_7String8ERN5NSCam9IMetadataEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::__bitset<1u, 6u>, true, 0>::difference_type std::__1::__count_bool_true<std::__1::__bitset<1u, 6u>, true>(std::__1::__bit_iterator<std::__1::__bitset<1u, 6u>, true, 0>, std::__1::__bitset<1u, 6u>::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__117__count_bool_trueINS_8__bitsetILj1ELj6EEELb1EEENS_14__bit_iteratorIT_XT0_EXLi0EEE15difference_typeES5_NS4_9size_typeE(void) {
    ALOGD("_ZNSt3__117__count_bool_trueINS_8__bitsetILj1ELj6EEELb1EEENS_14__bit_iteratorIT_XT0_EXLi0EEE15difference_typeES5_NS4_9size_typeE() called");
    return 0;
}

/* Demangled: XiaoMi::MiAddConfigZoom(XiaoMi::E_MiCamera, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi15MiAddConfigZoomENS_10E_MiCameraERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN6XiaoMi15MiAddConfigZoomENS_10E_MiCameraERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updateReprocessCapabilities(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider27updateReprocessCapabilitiesERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider27updateReprocessCapabilitiesERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::getMtkData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest10getMtkDataEi(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest10getMtkDataEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::getDeviceFacing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18NSMetadataProvider16MetadataProvider15getDeviceFacingEv(void) {
    ALOGD("_ZNK7android18NSMetadataProvider16MetadataProvider15getDeviceFacingEv() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::valueAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager7valueAtEj(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager7valueAtEj() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::getData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest7getDataEi(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest7getDataEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updateZslData(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider13updateZslDataERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider13updateZslDataERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSTemplateRequestManager::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam24NSTemplateRequestManager5clearEv(void) {
    ALOGD("_ZN5NSCam24NSTemplateRequestManager5clearEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::MetadataProvider(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderC2Ei(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderC2Ei() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEEE = NULL;

/* Demangled: NSCam::ITemplateRequest::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ITemplateRequest11getInstanceEi(void) {
    ALOGD("_ZN5NSCam16ITemplateRequest11getInstanceEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::~MetadataProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderD2Ev(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderD2Ev() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::updateByCapabilities(int, NSCam::IMetadata&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest20updateByCapabilitiesEiRN5NSCam9IMetadataES4_(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest20updateByCapabilitiesEiRN5NSCam9IMetadataES4_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Exported Object: VTT for android::NSTemplateRequest::TemplateRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android17NSTemplateRequest15TemplateRequestE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: XiaoMi::GetFileSize(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi11GetFileSizeEPKc(void) {
    ALOGD("_ZN6XiaoMi11GetFileSizeEPKc() called");
    return 0;
}

/* Demangled: XiaoMi::Get_DualCameraData_FromPersist(unsigned int, unsigned char*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi30Get_DualCameraData_FromPersistEjPhy(void) {
    ALOGD("_ZN6XiaoMi30Get_DualCameraData_FromPersistEjPhy() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::impConstructStaticMetadata(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider26impConstructStaticMetadataERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider26impConstructStaticMetadataERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::onCreate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider8onCreateEv(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider8onCreateEv() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::getDeviceSetupOrientation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18NSMetadataProvider16MetadataProvider25getDeviceSetupOrientationEv(void) {
    ALOGD("_ZNK7android18NSMetadataProvider16MetadataProvider25getDeviceSetupOrientationEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Exported Object: vtable for android::NSTemplateRequest::TemplateRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17NSTemplateRequest15TemplateRequestE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::indexOfKey(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager10indexOfKeyEi(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager10indexOfKeyEi() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::showCustInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider12showCustInfoEv(void) {
    ALOGD("_ZN7android18NSMetadataProvider12showCustInfoEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updateHardwareLevel(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider19updateHardwareLevelERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider19updateHardwareLevelERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: XiaoMi::MiAddConfig(XiaoMi::E_MiCamera, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi11MiAddConfigENS_10E_MiCameraERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN6XiaoMi11MiAddConfigENS_10E_MiCameraERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager5clearEv(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager5clearEv() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::MetadataProvider(int, NSCam::IMetadata&, camera_metadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderC2EiRN5NSCam9IMetadataEP15camera_metadata(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderC2EiRN5NSCam9IMetadataEP15camera_metadata() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::valueFor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager8valueForEi(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager8valueForEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_false<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void) {
    ALOGD("_ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::MetadataProvider(int, NSCam::IMetadata&, camera_metadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderC1EiRN5NSCam9IMetadataEP15camera_metadata(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderC1EiRN5NSCam9IMetadataEP15camera_metadata() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEEE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::getDeviceWantedOrientation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18NSMetadataProvider16MetadataProvider26getDeviceWantedOrientationEv(void) {
    ALOGD("_ZNK7android18NSMetadataProvider16MetadataProvider26getDeviceWantedOrientationEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_COMMON() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::impConstructStaticMetadata_by_SymbolName(android::String8 const&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider40impConstructStaticMetadata_by_SymbolNameERKNS_7String8ERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider40impConstructStaticMetadata_by_SymbolNameERKNS_7String8ERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: XiaoMi::Get_Camera_FuseId_FromPersist(unsigned int, unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi29Get_Camera_FuseId_FromPersistEjPPhPj(void) {
    ALOGD("_ZN6XiaoMi29Get_Camera_FuseId_FromPersistEjPPhPj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::isHdrSensor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider11isHdrSensorEj(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider11isHdrSensorEj() called");
    return 0;
}

/* Demangled: virtual thunk to android::NSMetadataProvider::MetadataProvider::~MetadataProvider() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android18NSMetadataProvider16MetadataProviderD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android18NSMetadataProvider16MetadataProviderD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_COMMON() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::getDeviceVersion() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18NSMetadataProvider16MetadataProvider16getDeviceVersionEv(void) {
    ALOGD("_ZNK7android18NSMetadataProvider16MetadataProvider16getDeviceVersionEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX2530_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX2530_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX2530_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::MetadataProvider(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderC1Ei(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderC1Ei() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEEE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updatePostRawSensitivityBoost(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider29updatePostRawSensitivityBoostERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider29updatePostRawSensitivityBoostERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::~MetadataProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderD1Ev(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderD1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::vector(unsigned int, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::restoreStaticData() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider17restoreStaticDataEv(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider17restoreStaticDataEv() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: NSCam::IMetadataProvider::create(int, NSCam::IMetadata&, camera_metadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17IMetadataProvider6createEiRNS_9IMetadataEP15camera_metadata(void) {
    ALOGD("_ZN5NSCam17IMetadataProvider6createEiRNS_9IMetadataEP15camera_metadata() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::IMetadataProvider::create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17IMetadataProvider6createEi(void) {
    ALOGD("_ZN5NSCam17IMetadataProvider6createEi() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IMetadataProvider-in-android::NSMetadataProvider::MetadataProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18NSMetadataProvider16MetadataProviderE0_N5NSCam17IMetadataProviderE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSTemplateRequestManager::indexOfKey(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam24NSTemplateRequestManager10indexOfKeyEi(void) {
    ALOGD("_ZN5NSCam24NSTemplateRequestManager10indexOfKeyEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updateRawCapability(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider19updateRawCapabilityERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider19updateRawCapabilityERN5NSCam9IMetadataE() called");
    return 0;
}

/* Exported Object: VTT for android::NSMetadataProvider::MetadataProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android18NSMetadataProvider16MetadataProviderE = NULL;

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSTemplateRequestManager::valueAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam24NSTemplateRequestManager7valueAtEj(void) {
    ALOGD("_ZN5NSCam24NSTemplateRequestManager7valueAtEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::ITemplateRequest-in-android::NSTemplateRequest::TemplateRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android17NSTemplateRequest15TemplateRequestE0_N5NSCam16ITemplateRequestE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataProvider>::sp(NSCam::IMetadataProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_() called");
    return 0;
}

/* Demangled: android::NSRequestTemplate::showCustInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSRequestTemplate12showCustInfoEv(void) {
    ALOGD("_ZN7android17NSRequestTemplate12showCustInfoEv() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Exported Object: vtable for android::NSMetadataProvider::MetadataProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18NSMetadataProvider16MetadataProviderE = NULL;

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::constructStaticMetadata(android::sp<NSCam::IMetadataConverter>, camera_metadata*&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider23constructStaticMetadataENS_2spIN5NSCam18IMetadataConverterEEERP15camera_metadataRNS3_9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider23constructStaticMetadataENS_2spIN5NSCam18IMetadataConverterEEERP15camera_metadataRNS3_9IMetadataE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: NSCam::NSTemplateRequestManager::add(int, NSCam::ITemplateRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam24NSTemplateRequestManager3addEiPNS_16ITemplateRequestE(void) {
    ALOGD("_ZN5NSCam24NSTemplateRequestManager3addEiPNS_16ITemplateRequestE() called");
    return 0;
}

/* Demangled: NSCam::NSTemplateRequestManager::valueFor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam24NSTemplateRequestManager8valueForEi(void) {
    ALOGD("_ZN5NSCam24NSTemplateRequestManager8valueForEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::add(int, NSCam::IMetadataProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager3addEiPNS_17IMetadataProviderE(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager3addEiPNS_17IMetadataProviderE() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_COMMON(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_COMMON() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updateData(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider10updateDataERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider10updateDataERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: virtual thunk to android::NSMetadataProvider::MetadataProvider::~MetadataProvider() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android18NSMetadataProvider16MetadataProviderD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android18NSMetadataProvider16MetadataProviderD0Ev() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::sp<NSCam::ITemplateRequest>::sp(NSCam::ITemplateRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16ITemplateRequestEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam16ITemplateRequestEEC2EPS2_() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::updateHdrData(int, int, int, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider13updateHdrDataEiiiRN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider13updateHdrDataEiiiRN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::updateData(int, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest10updateDataEiRN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest10updateDataEiRN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IMetadataProvider> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam17IMetadataProviderEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::~MetadataProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProviderD0Ev(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::keyAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager5keyAtEj(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager5keyAtEj() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::remove(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager6removeEi(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager6removeEi() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::onCreate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest8onCreateEi(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest8onCreateEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::valueForByDeviceId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager18valueForByDeviceIdEi(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager18valueForByDeviceIdEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_COMMON() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_true<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void) {
    ALOGD("_ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, camera_metadata*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::getDeviceHasFlashLight() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18NSMetadataProvider16MetadataProvider22getDeviceHasFlashLightEv(void) {
    ALOGD("_ZNK7android18NSMetadataProvider16MetadataProvider22getDeviceHasFlashLightEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::NSTemplateRequest::TemplateRequest::impConstructRequestMetadata(NSCam::IMetadata&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17NSTemplateRequest15TemplateRequest27impConstructRequestMetadataERN5NSCam9IMetadataEi(void) {
    ALOGD("_ZN7android17NSTemplateRequest15TemplateRequest27impConstructRequestMetadataERN5NSCam9IMetadataEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSTemplateRequestManager::keyAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam24NSTemplateRequestManager5keyAtEj(void) {
    ALOGD("_ZN5NSCam24NSTemplateRequestManager5keyAtEj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSMetadataProviderManager::convertId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam25NSMetadataProviderManager9convertIdEi(void) {
    ALOGD("_ZN5NSCam25NSMetadataProviderManager9convertIdEi() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::ITemplateRequest> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam16ITemplateRequestEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FEATURE_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_REQUEST_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SCALER_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: XiaoMi::OverriderDualCamCalData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi23OverriderDualCamCalDataEi(void) {
    ALOGD("_ZN6XiaoMi23OverriderDualCamCalDataEi() called");
    return 0;
}

/* Demangled: android::NSMetadataProvider::MetadataProvider::setStaticData(NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18NSMetadataProvider16MetadataProvider13setStaticDataEPN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android18NSMetadataProvider16MetadataProvider13setStaticDataEPN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustRequestMetadata_DEVICE_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IMetadata> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam9IMetadataEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, camera_metadata*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP15camera_metadataEEEE = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/*
 * Reverse-Engineered Source for: libcamalgo.vsf.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_vsf"

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
#include "libcamalgo_vsf.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: OccCore::CropBoundary2X(int, int, int, int, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore14CropBoundary2XEiiiiPhS0_(void) {
    ALOGD("_ZN7OccCore14CropBoundary2XEiiiiPhS0_() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::blur(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: GFCore::HF_mean(unsigned char*, unsigned char*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore7HF_meanEPhS0_iii(void) {
    ALOGD("_ZN6GFCore7HF_meanEPhS0_iii() called");
    return 0;
}

/* Demangled: OccCore::OutlierRemoval(unsigned char*, unsigned char*, int, int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore14OutlierRemovalEPhS0_iiiRiS1_(void) {
    ALOGD("_ZN7OccCore14OutlierRemovalEPhS0_iiiRiS1_() called");
    return 0;
}

/* Demangled: GFCore::initialize(GFInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore10initializeEP10GFInitInfo(void) {
    ALOGD("_ZN6GFCore10initializeEP10GFInitInfo() called");
    return 0;
}

/* Demangled: GFPart1_gf(unsigned char*, unsigned char*, float*, float*, float, int, int, int, int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z10GFPart1_gfPhS_PfS0_fiiiiiPv(void) {
    ALOGD("_Z10GFPart1_gfPhS_PfS0_fiiiiiPv() called");
    return 0;
}

/* Demangled: GFCore::GFCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCoreC2Ev(void) {
    ALOGD("_ZN6GFCoreC2Ev() called");
    return 0;
}

/* Demangled: MTKOcc::FeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOcc11FeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKOcc11FeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: void Eigen::ConjugateGradient<Eigen::SparseMatrix<float, 0, int>, 3, Eigen::DiagonalPreconditioner<float> >::_solveWithGuess<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >(Eigen::Matrix<float, -1, -1, 0, -1, -1> const&, Eigen::Matrix<float, -1, -1, 0, -1, -1>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEE15_solveWithGuessINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES8_EEvRKT_RT0_(void) {
    ALOGD("_ZNK5Eigen17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEE15_solveWithGuessINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES8_EEvRKT_RT0_() called");
    return 0;
}

/* Demangled: GFInitInfo::GFInitInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10GFInitInfoC2Ev(void) {
    ALOGD("_ZN10GFInitInfoC2Ev() called");
    return 0;
}

/* Demangled: OccCore::initialize(OccInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore10initializeEP11OccInitInfo(void) {
    ALOGD("_ZN7OccCore10initializeEP11OccInitInfo() called");
    return 0;
}

/* Demangled: libgf_BilateralSolver::libgf_BilateralSolver(libgf_BilateralGrid&, int, float, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN21libgf_BilateralSolverC1ER19libgf_BilateralGridiffi(void) {
    ALOGD("_ZN21libgf_BilateralSolverC1ER19libgf_BilateralGridiffi() called");
    return 0;
}

/* Demangled: MTKGF::~MTKGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGFD0Ev(void) {
    ALOGD("_ZN5MTKGFD0Ev() called");
    return 0;
}

/* Exported Object: Eigen::internal::manage_caching_sizes(Eigen::Action, long*, long*)::m_l1CacheSize */
extern "C" __attribute__((visibility("default"))) void* _ZZN5Eigen8internal20manage_caching_sizesENS_6ActionEPlS2_E13m_l1CacheSize = NULL;

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: GFCore::getBufferSizeNeeded() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore19getBufferSizeNeededEv(void) {
    ALOGD("_ZN6GFCore19getBufferSizeNeededEv() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: OccCore::calBufferSizeNeeded(OccInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore19calBufferSizeNeededEP11OccInitInfo(void) {
    ALOGD("_ZN7OccCore19calBufferSizeNeededEP11OccInitInfo() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrix<int, 0, int>::reserveInnerVectors<Eigen::SparseMatrix<int, 0, int>::SingletonVector>(Eigen::SparseMatrix<int, 0, int>::SingletonVector const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS1_15SingletonVectorEEEvRKT_(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS1_15SingletonVectorEEEvRKT_() called");
    return 0;
}

/* Demangled: OccCore::CropBoundary(int, int, int, int, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12CropBoundaryEiiiiPhS0_(void) {
    ALOGD("_ZN7OccCore12CropBoundaryEiiiiPhS0_() called");
    return 0;
}

/* Demangled: GFCore::WESS3C_PEL(float**, GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, float, float, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore10WESS3C_PELEPPf17GF_IMAGE_FMT_ENUMPhS3_S3_ffiii(void) {
    ALOGD("_ZN6GFCore10WESS3C_PELEPPf17GF_IMAGE_FMT_ENUMPhS3_S3_ffiii() called");
    return 0;
}

/* Demangled: libgf_FBS::~libgf_FBS() */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBSD2Ev(void) {
    ALOGD("_ZN9libgf_FBSD2Ev() called");
    return 0;
}

/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::resize(long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE6resizeEll(void) {
    ALOGD("_ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE6resizeEll() called");
    return 0;
}

/* Demangled: GFCore::DownSample_Nearest_2X(unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore21DownSample_Nearest_2XEPhS0_iiii(void) {
    ALOGD("_ZN6GFCore21DownSample_Nearest_2XEPhS0_iiii() called");
    return 0;
}

/* Demangled: AppOcc::FeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOcc11FeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6AppOcc11FeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrix<float, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignIS2_EERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignIS2_EERS2_RKT_() called");
    return 0;
}

/* Demangled: GFCore::_dump_ppm(int, int, char const*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore9_dump_ppmEiiPKcPhi(void) {
    ALOGD("_ZN6GFCore9_dump_ppmEiiPKcPhi() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS0_IiLi0EiEEEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS0_IiLi0EiEEEEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: OccCore::OccProcessOLD2D(unsigned char*, unsigned char*, short*, short*, unsigned char*, unsigned char*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore15OccProcessOLD2DEPhS0_PsS1_S0_S0_S0_S0_(void) {
    ALOGD("_ZN7OccCore15OccProcessOLD2DEPhS0_PsS1_S0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::SparseMatrix<float, 1, int> >(Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 1, int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS0_IfLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiEaSINS0_IfLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: MTKOcc::~MTKOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOccD2Ev(void) {
    ALOGD("_ZN6MTKOccD2Ev() called");
    return 0;
}

/* Demangled: libgf_FBS::initTPQ(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBS7initTPQEi(void) {
    ALOGD("_ZN9libgf_FBS7initTPQEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: GFCore::WMF2WMI_Float(float*, float*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore13WMF2WMI_FloatEPfS0_iiii(void) {
    ALOGD("_ZN6GFCore13WMF2WMI_FloatEPfS0_iiii() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assignGeneric<Eigen::SparseMatrix<int, 0, int> >(Eigen::SparseMatrix<int, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericIS2_EEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericIS2_EEvRKT_() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: OccCore::WMF2WMI(unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore7WMF2WMIEPhS0_iiii(void) {
    ALOGD("_ZN7OccCore7WMF2WMIEPhS0_iiii() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<float, -1, 1, 0, -1, 1> >::resize(long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE6resizeEll(void) {
    ALOGD("_ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE6resizeEll() called");
    return 0;
}

/* Demangled: AppGF::AppGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGFC2Ev(void) {
    ALOGD("_ZN5AppGFC2Ev() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: AppGF::Init(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGF4InitEPvS0_(void) {
    ALOGD("_ZN5AppGF4InitEPvS0_() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9bad_alloc = NULL;

/* Demangled: OccCore::~OccCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCoreD2Ev(void) {
    ALOGD("_ZN7OccCoreD2Ev() called");
    return 0;
}

/* Demangled: GFCore::doBufferDump(char*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore12doBufferDumpEPcPii(void) {
    ALOGD("_ZN6GFCore12doBufferDumpEPcPii() called");
    return 0;
}

/* Demangled: GFCore::calBufferSizeNeeded(GFInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore19calBufferSizeNeededEP10GFInitInfo(void) {
    ALOGD("_ZN6GFCore19calBufferSizeNeededEP10GFInitInfo() called");
    return 0;
}

/* Demangled: guided_filter_gf::myIntegral(float*, double*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10myIntegralEPfPdii(void) {
    ALOGD("_ZN16guided_filter_gf10myIntegralEPfPdii() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: Eigen::DenseStorage<int, -1, -1, 1, 0>::DenseStorage(long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12DenseStorageIiLin1ELin1ELi1ELi0EEC2Elll(void) {
    ALOGD("_ZN5Eigen12DenseStorageIiLin1ELin1ELi1ELi0EEC2Elll() called");
    return 0;
}

/* Demangled: GFCore::HF_mean(unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore7HF_meanEPhS0_i(void) {
    ALOGD("_ZN6GFCore7HF_meanEPhS0_i() called");
    return 0;
}

/* Demangled: GFCore::FastBilateralSolverMp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore21FastBilateralSolverMpEPvP6rtinfo(void) {
    ALOGD("_ZN6GFCore21FastBilateralSolverMpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: OccCore::doOccMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore9doOccMainEv(void) {
    ALOGD("_ZN7OccCore9doOccMainEv() called");
    return 0;
}

/* Demangled: AppOcc::~AppOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOccD1Ev(void) {
    ALOGD("_ZN6AppOccD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__sort<IdxCompareUniqueOpt&, int*>(int*, int*, IdxCompareUniqueOpt&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIR19IdxCompareUniqueOptPiEEvT0_S4_T_(void) {
    ALOGD("_ZNSt3__16__sortIR19IdxCompareUniqueOptPiEEvT0_S4_T_() called");
    return 0;
}

/* Demangled: libgf_BilateralSolver::~libgf_BilateralSolver() */
extern "C" __attribute__((visibility("default"))) int _ZN21libgf_BilateralSolverD2Ev(void) {
    ALOGD("_ZN21libgf_BilateralSolverD2Ev() called");
    return 0;
}

/* Demangled: AppGF::destroyInstance(MTKGF*) */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGF15destroyInstanceEP5MTKGF(void) {
    ALOGD("_ZN5AppGF15destroyInstanceEP5MTKGF() called");
    return 0;
}

/* Demangled: Eigen::Matrix<int, -1, -1, 0, -1, -1>::Matrix<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> > >(Eigen::MatrixBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEES1_EEEERKNS_10MatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEES1_EEEERKNS_10MatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: GFCore::Depth_Smooth(unsigned char*, unsigned char*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore12Depth_SmoothEPhS0_S0_S0_(void) {
    ALOGD("_ZN6GFCore12Depth_SmoothEPhS0_S0_S0_() called");
    return 0;
}

/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: OccCore::doBufferDump(char*, DVEC_OCC*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12doBufferDumpEPcP8DVEC_OCCi(void) {
    ALOGD("_ZN7OccCore12doBufferDumpEPcP8DVEC_OCCi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: void Eigen::internal::set_from_triplets<std::__1::__wrap_iter<Eigen::Triplet<float, int>*>, Eigen::SparseMatrix<float, 0, int> >(std::__1::__wrap_iter<Eigen::Triplet<float, int>*> const&, std::__1::__wrap_iter<Eigen::Triplet<float, int>*> const&, Eigen::SparseMatrix<float, 0, int>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIfiEEEENS_12SparseMatrixIfLi0EiEEEEvRKT_SC_RT0_i(void) {
    ALOGD("_ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIfiEEEENS_12SparseMatrixIfLi0EiEEEEvRKT_SC_RT0_i() called");
    return 0;
}

/* Demangled: libgf_FBS::libgf_FBS() */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBSC1Ev(void) {
    ALOGD("_ZN9libgf_FBSC1Ev() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::get_valid_idx(std::__1::vector<int, std::__1::allocator<int> >&, Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid13get_valid_idxERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_(void) {
    ALOGD("_ZN19libgf_BilateralGrid13get_valid_idxERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_() called");
    return 0;
}

/* Demangled: void std::__1::__stable_sort_move<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__stable_sort_moveIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeE(void) {
    ALOGD("_ZNSt3__118__stable_sort_moveIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeE() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridC1Ev(void) {
    ALOGD("_ZN19libgf_BilateralGridC1Ev() called");
    return 0;
}

/* Demangled: AppGFTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppGFTmp11getInstanceEv(void) {
    ALOGD("_ZN8AppGFTmp11getInstanceEv() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: GFCore::doBufferDump(char*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore12doBufferDumpEPcPfi(void) {
    ALOGD("_ZN6GFCore12doBufferDumpEPcPfi() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::~libgf_BilateralGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridD2Ev(void) {
    ALOGD("_ZN19libgf_BilateralGridD2Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>::resize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiE6resizeEii(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiE6resizeEii() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: OccCore::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore5resetEv(void) {
    ALOGD("_ZN7OccCore5resetEv() called");
    return 0;
}

/* Demangled: AppOcc::AppOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOccC2Ev(void) {
    ALOGD("_ZN6AppOccC2Ev() called");
    return 0;
}

/* Demangled: OccCore::EdgeRemover(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11EdgeRemoverEPhS0_S0_iiii(void) {
    ALOGD("_ZN7OccCore11EdgeRemoverEPhS0_S0_iiii() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>::makeCompressed() */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiE14makeCompressedEv(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiE14makeCompressedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<IdxCompareUniqueOpt&, int*>(int*, int*, IdxCompareUniqueOpt&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IR19IdxCompareUniqueOptPiEEvT0_S4_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IR19IdxCompareUniqueOptPiEEvT0_S4_T_() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEEvRKT_() called");
    return 0;
}

/* Demangled: GFCore::BM_genTables() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore12BM_genTablesEv(void) {
    ALOGD("_ZN6GFCore12BM_genTablesEv() called");
    return 0;
}

/* Demangled: MTKOcc::Init(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOcc4InitEPvS0_(void) {
    ALOGD("_ZN6MTKOcc4InitEPvS0_() called");
    return 0;
}

/* Demangled: MTKOcc::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOcc5ResetEv(void) {
    ALOGD("_ZN6MTKOcc5ResetEv() called");
    return 0;
}

/* Demangled: Eigen::Matrix<float, -1, -1, 0, -1, -1>::Matrix<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > >(Eigen::MatrixBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIfEES1_EEEERKNS_10MatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIfEES1_EEEERKNS_10MatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: Eigen::DenseStorage<int, -1, -1, -1, 0>::DenseStorage(long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12DenseStorageIiLin1ELin1ELin1ELi0EEC2Elll(void) {
    ALOGD("_ZN5Eigen12DenseStorageIiLin1ELin1ELin1ELi0EEC2Elll() called");
    return 0;
}

/* Demangled: AppOcc::~AppOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOccD0Ev(void) {
    ALOGD("_ZN6AppOccD0Ev() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::get_valid_idx_opt(std::__1::vector<int, std::__1::allocator<int> >&, Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid17get_valid_idx_optERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_(void) {
    ALOGD("_ZN19libgf_BilateralGrid17get_valid_idx_optERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: OccCore::getResultInfo(OccResultInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore13getResultInfoEP13OccResultInfo(void) {
    ALOGD("_ZN7OccCore13getResultInfoEP13OccResultInfo() called");
    return 0;
}

/* Demangled: OccCore::PreserveBND(unsigned char*, unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11PreserveBNDEPhS0_S0_ii(void) {
    ALOGD("_ZN7OccCore11PreserveBNDEPhS0_S0_ii() called");
    return 0;
}

/* Demangled: GFCore::doBufferDump(char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore12doBufferDumpEPcPhi(void) {
    ALOGD("_ZN6GFCore12doBufferDumpEPcPhi() called");
    return 0;
}

/* Demangled: MTKGF::FeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGF11FeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN5MTKGF11FeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrix<int, 0, int>::reserveInnerVectors<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, 1, 0, -1, 1> > >(Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, 1, 0, -1, 1> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEENS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEEEvRKT_(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEENS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEEEvRKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::__push_back_slow_path<Eigen::SparseMatrix<int, 0, int> const&>(Eigen::SparseMatrix<int, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEERS2_RKT_() called");
    return 0;
}

/* Demangled: Eigen::internal::CompressedStorage<int, int>::resize(unsigned long, double) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal17CompressedStorageIiiE6resizeEmd(void) {
    ALOGD("_ZN5Eigen8internal17CompressedStorageIiiE6resizeEmd() called");
    return 0;
}

/* Demangled: guided_filter_gf::~guided_filter_gf() */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gfD0Ev(void) {
    ALOGD("_ZN16guided_filter_gfD0Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEERS2_RKT_() called");
    return 0;
}

/* Demangled: AppGF::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGF5ResetEv(void) {
    ALOGD("_ZN5AppGF5ResetEv() called");
    return 0;
}

/* Demangled: guided_filter_gf::getBufferSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf13getBufferSizeEii(void) {
    ALOGD("_ZN16guided_filter_gf13getBufferSizeEii() called");
    return 0;
}

/* Demangled: AppOcc::Main() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOcc4MainEv(void) {
    ALOGD("_ZN6AppOcc4MainEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Exported Object: midDivTbl */
extern "C" __attribute__((visibility("default"))) void* midDivTbl = NULL;

/* Demangled: guided_filter_gf::doBufferDump(char*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf12doBufferDumpEPcPfi(void) {
    ALOGD("_ZN16guided_filter_gf12doBufferDumpEPcPfi() called");
    return 0;
}

/* Exported Object: leftDivTbl */
extern "C" __attribute__((visibility("default"))) void* leftDivTbl = NULL;

/* Demangled: void std::__1::__inplace_merge<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115__inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeEl(void) {
    ALOGD("_ZNSt3__115__inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeEl() called");
    return 0;
}

/* Demangled: OccCore::doBufferDump(char*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12doBufferDumpEPcPii(void) {
    ALOGD("_ZN7OccCore12doBufferDumpEPcPii() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEEvRKT_() called");
    return 0;
}

/* Demangled: guided_filter_gf::myCombine1(float*, float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10myCombine1EPfS0_S0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf10myCombine1EPfS0_S0_S0_ii() called");
    return 0;
}

/* Demangled: AppOcc::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOcc11getInstanceEv(void) {
    ALOGD("_ZN6AppOcc11getInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: MTKOcc::Main() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOcc4MainEv(void) {
    ALOGD("_ZN6MTKOcc4MainEv() called");
    return 0;
}

/* Demangled: libgf_FBS::libgf_FBS() */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBSC2Ev(void) {
    ALOGD("_ZN9libgf_FBSC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<Eigen::Triplet<int, int>, std::__1::allocator<Eigen::Triplet<int, int> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen7TripletIiiEENS_9allocatorIS3_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen7TripletIiiEENS_9allocatorIS3_EEE7reserveEm() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrix<float, 1, int>::reserveInnerVectors<Eigen::Matrix<int, -1, 1, 0, -1, 1> >(Eigen::Matrix<int, -1, 1, 0, -1, 1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid(GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int, tpq_*) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridC2E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_(void) {
    ALOGD("_ZN19libgf_BilateralGridC2E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_() called");
    return 0;
}

/* Demangled: OccCore::Convert_Disparity(DVEC_OCC*, unsigned char*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore17Convert_DisparityEP8DVEC_OCCPhPiS3_(void) {
    ALOGD("_ZN7OccCore17Convert_DisparityEP8DVEC_OCCPhPiS3_() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> > const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> > const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<float, -1, -1, 0, -1, -1> const&() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_9TransposeINS_12SparseMatrixIiLi0EiEEEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEESB_SD_EcvRKSD_Ev(void) {
    ALOGD("_ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_9TransposeINS_12SparseMatrixIiLi0EiEEEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEESB_SD_EcvRKSD_Ev() called");
    return 0;
}

/* Demangled: GFCore::UpSample_Nearest(unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore16UpSample_NearestEPhS0_iiii(void) {
    ALOGD("_ZN6GFCore16UpSample_NearestEPhS0_iiii() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>::insertUncompressed(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiE18insertUncompressedEii(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiE18insertUncompressedEii() called");
    return 0;
}

/* Demangled: GFBufferInfo::GFBufferInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12GFBufferInfoC2Ev(void) {
    ALOGD("_ZN12GFBufferInfoC2Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEERS2_RKT_() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::construct_sparse_splat_mp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid25construct_sparse_splat_mpEPvP6rtinfo(void) {
    ALOGD("_ZN19libgf_BilateralGrid25construct_sparse_splat_mpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::slice(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: MTKGF::~MTKGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGFD2Ev(void) {
    ALOGD("_ZN5MTKGFD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: Eigen::Matrix<float, -1, -1, 0, -1, -1>& Eigen::PlainObjectBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::lazyAssign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const> >(Eigen::DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE10lazyAssignINS_13CwiseBinaryOpINS_8internal17scalar_product_opIffEEKS2_KNS_12CwiseUnaryOpINS6_17scalar_inverse_opIfEES9_EEEEEERS2_RKNS_9DenseBaseIT_EE(void) {
    ALOGD("_ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE10lazyAssignINS_13CwiseBinaryOpINS_8internal17scalar_product_opIffEEKS2_KNS_12CwiseUnaryOpINS6_17scalar_inverse_opIfEES9_EEEEEERS2_RKNS_9DenseBaseIT_EE() called");
    return 0;
}

/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<int, 0, int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> >, Eigen::SparseMatrix<int, 0, int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<int, -1, -1, 0, -1, -1> const&() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12SparseMatrixIiLi0EiEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES3_S5_EcvRKS5_Ev(void) {
    ALOGD("_ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12SparseMatrixIiLi0EiEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES3_S5_EcvRKS5_Ev() called");
    return 0;
}

/* Exported Object: vtable for MTKGF */
extern "C" __attribute__((visibility("default"))) void* _ZTV5MTKGF = NULL;

/* Demangled: void std::__1::__buffered_inplace_merge<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__buffered_inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeE(void) {
    ALOGD("_ZNSt3__124__buffered_inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeE() called");
    return 0;
}

/* Demangled: GFCore::initializeTuningParam(GFInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore21initializeTuningParamEP10GFInitInfo(void) {
    ALOGD("_ZN6GFCore21initializeTuningParamEP10GFInitInfo() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid(libgf_BilateralGrid const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridC2ERKS_(void) {
    ALOGD("_ZN19libgf_BilateralGridC2ERKS_() called");
    return 0;
}

/* Exported Object: vtable for AppGF */
extern "C" __attribute__((visibility("default"))) void* _ZTV5AppGF = NULL;

/* Demangled: Eigen::DenseStorage<float, -1, -1, -1, 0>::DenseStorage(long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12DenseStorageIfLin1ELin1ELin1ELi0EEC2Elll(void) {
    ALOGD("_ZN5Eigen12DenseStorageIfLin1ELin1ELin1ELi0EEC2Elll() called");
    return 0;
}

/* Demangled: GFCore::setProcInfo(GFProcInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore11setProcInfoEP10GFProcInfo(void) {
    ALOGD("_ZN6GFCore11setProcInfoEP10GFProcInfo() called");
    return 0;
}

/* Demangled: OccCore::_dump_ppm(int, int, char const*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore9_dump_ppmEiiPKcPhi(void) {
    ALOGD("_ZN7OccCore9_dump_ppmEiiPKcPhi() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: void std::__1::__stable_sort<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__stable_sortIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeEl(void) {
    ALOGD("_ZNSt3__113__stable_sortIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeEl() called");
    return 0;
}

/* Demangled: OccCore::OccCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCoreC2Ev(void) {
    ALOGD("_ZN7OccCoreC2Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assign<Eigen::SparseMatrix<int, 0, int> >(Eigen::SparseMatrix<int, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignIS2_EERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignIS2_EERS2_RKT_() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<IdxCompareUniqueOpt&, int*>(int*, int*, IdxCompareUniqueOpt&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIR19IdxCompareUniqueOptPiEEbT0_S4_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIR19IdxCompareUniqueOptPiEEbT0_S4_T_() called");
    return 0;
}

/* Demangled: libgf_BilateralSolver::~libgf_BilateralSolver() */
extern "C" __attribute__((visibility("default"))) int _ZN21libgf_BilateralSolverD1Ev(void) {
    ALOGD("_ZN21libgf_BilateralSolverD1Ev() called");
    return 0;
}

/* Demangled: AppOcc::Init(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOcc4InitEPvS0_(void) {
    ALOGD("_ZN6AppOcc4InitEPvS0_() called");
    return 0;
}

/* Demangled: libgf_BilateralSolver::bistochastize(Eigen::SparseMatrix<float, 0, int>&, Eigen::SparseMatrix<float, 0, int>&) */
extern "C" __attribute__((visibility("default"))) int _ZN21libgf_BilateralSolver13bistochastizeERN5Eigen12SparseMatrixIfLi0EiEES3_(void) {
    ALOGD("_ZN21libgf_BilateralSolver13bistochastizeERN5Eigen12SparseMatrixIfLi0EiEES3_() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS1_EEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS1_EEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::blur(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_quotient_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > >& Eigen::MatrixBase<Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_quotient_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > > >::operator=<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > >(Eigen::DenseBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal18scalar_quotient_opIffEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEENS_14CwiseNullaryOpINS2_18scalar_constant_opIfEES6_EEEEEaSISA_EERSB_RKNS_9DenseBaseIT_EE(void) {
    ALOGD("_ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal18scalar_quotient_opIffEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEENS_14CwiseNullaryOpINS2_18scalar_constant_opIfEES6_EEEEEaSISA_EERSB_RKNS_9DenseBaseIT_EE() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridC2Ev(void) {
    ALOGD("_ZN19libgf_BilateralGridC2Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS4_18scalar_multiple_opIfEEKNS3_INS4_20scalar_difference_opIfEEKS1_KNS_19SparseSparseProductIRSC_SE_EEEEEESC_EEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS4_18scalar_multiple_opIfEEKNS3_INS4_20scalar_difference_opIfEEKS1_KNS_19SparseSparseProductIRSC_SE_EEEEEESC_EEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: MTKOcc::~MTKOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOccD0Ev(void) {
    ALOGD("_ZN6MTKOccD0Ev() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEEvRKT_() called");
    return 0;
}

/* Demangled: OccCore::doBufferDumpYV12(char*, unsigned char*, unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore16doBufferDumpYV12EPcPhS1_S1_i(void) {
    ALOGD("_ZN7OccCore16doBufferDumpYV12EPcPhS1_S1_i() called");
    return 0;
}

/* Demangled: OccCore::HoleFill_Dilation_R(unsigned char*, unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore19HoleFill_Dilation_REPhS0_S0_ii(void) {
    ALOGD("_ZN7OccCore19HoleFill_Dilation_REPhS0_S0_ii() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: void Eigen::internal::conjugate_gradient<Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1> const, -1, 1, true>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>, Eigen::DiagonalPreconditioner<float> >(Eigen::SparseMatrix<float, 0, int> const&, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1> const, -1, 1, true> const&, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>&, Eigen::DiagonalPreconditioner<float> const&, int&, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>::RealScalar&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal18conjugate_gradientINS_12SparseMatrixIfLi0EiEENS_5BlockIKNS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS4_IS6_Lin1ELi1ELb1EEENS_22DiagonalPreconditionerIfEEEEvRKT_RKT0_RT1_RKT2_RiRNSI_10RealScalarE(void) {
    ALOGD("_ZN5Eigen8internal18conjugate_gradientINS_12SparseMatrixIfLi0EiEENS_5BlockIKNS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS4_IS6_Lin1ELi1ELb1EEENS_22DiagonalPreconditionerIfEEEEvRKT_RKT0_RT1_RKT2_RiRNSI_10RealScalarE() called");
    return 0;
}

/* Demangled: AppGF::~AppGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGFD2Ev(void) {
    ALOGD("_ZN5AppGFD2Ev() called");
    return 0;
}

/* Demangled: GFCore::~GFCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCoreD1Ev(void) {
    ALOGD("_ZN6GFCoreD1Ev() called");
    return 0;
}

/* Demangled: guided_filter_gf::myCombine4(float*, float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10myCombine4EPfS0_S0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf10myCombine4EPfS0_S0_S0_ii() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 1, int>::resize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi1EiE6resizeEii(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi1EiE6resizeEii() called");
    return 0;
}

/* Demangled: OccCore::HoleFill_Dilation_OCC(unsigned char*, unsigned char*, unsigned char*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore21HoleFill_Dilation_OCCEPhS0_S0_iii(void) {
    ALOGD("_ZN7OccCore21HoleFill_Dilation_OCCEPhS0_S0_iii() called");
    return 0;
}

/* Demangled: AppGF::AppGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGFC1Ev(void) {
    ALOGD("_ZN5AppGFC1Ev() called");
    return 0;
}

/* Demangled: AppOcc::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOcc5ResetEv(void) {
    ALOGD("_ZN6AppOcc5ResetEv() called");
    return 0;
}

/* Demangled: GFCore::initializeParseTuningParam(GFTuningInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore26initializeParseTuningParamEP12GFTuningInfo(void) {
    ALOGD("_ZN6GFCore26initializeParseTuningParamEP12GFTuningInfo() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::_hash_coords(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid12_hash_coordsERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid12_hash_coordsERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: guided_filter_gf::~guided_filter_gf() */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gfD2Ev(void) {
    ALOGD("_ZN16guided_filter_gfD2Ev() called");
    return 0;
}

/* Demangled: Eigen::Matrix<float, -1, 1, 0, -1, 1>& Eigen::MatrixBase<Eigen::Matrix<float, -1, 1, 0, -1, 1> >::lazyAssign<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> >(Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEENS_5BlockINS1_IfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEEEES7_SA_EERS2_RKNS_11ProductBaseIT_T0_T1_EE(void) {
    ALOGD("_ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEENS_5BlockINS1_IfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEEEES7_SA_EERS2_RKNS_11ProductBaseIT_T0_T1_EE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9bad_alloc = NULL;

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: GFCore::getResultInfo(GFResultInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore13getResultInfoEP12GFResultInfo(void) {
    ALOGD("_ZN6GFCore13getResultInfoEP12GFResultInfo() called");
    return 0;
}

/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::resize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6resizeEm(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6resizeEm() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 1, int>::resize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi1EiE6resizeEii(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi1EiE6resizeEii() called");
    return 0;
}

/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<float, -1, -1, 0, -1, -1> const&() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_12SparseMatrixIiLi0EiEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEES9_SB_EcvRKSB_Ev(void) {
    ALOGD("_ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_12SparseMatrixIiLi0EiEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEES9_SB_EcvRKSB_Ev() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::~libgf_BilateralGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridD1Ev(void) {
    ALOGD("_ZN19libgf_BilateralGridD1Ev() called");
    return 0;
}

/* Demangled: OccCore::doOccMain2X() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11doOccMain2XEv(void) {
    ALOGD("_ZN7OccCore11doOccMain2XEv() called");
    return 0;
}

/* Demangled: GFCore::WESS_temporal_int(unsigned char*, unsigned char*, unsigned char*, unsigned char*, double, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore17WESS_temporal_intEPhS0_S0_S0_dii(void) {
    ALOGD("_ZN6GFCore17WESS_temporal_intEPhS0_S0_S0_dii() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: Eigen::SparseMatrix<float, 0, int>::operator=(Eigen::SparseMatrix<float, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiEaSERKS1_(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiEaSERKS1_() called");
    return 0;
}

/* Demangled: AppOccTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppOccTmp11getInstanceEv(void) {
    ALOGD("_ZN9AppOccTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: GFPart2_gf(float*, float*, float*, float*, int, int, int, int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z10GFPart2_gfPfS_S_S_iiiiiPv(void) {
    ALOGD("_Z10GFPart2_gfPfS_S_S_iiiiiPv() called");
    return 0;
}

/* Demangled: GFCore::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore5resetEv(void) {
    ALOGD("_ZN6GFCore5resetEv() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: guided_filter_gf::mySubtract(float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10mySubtractEPfS0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf10mySubtractEPfS0_S0_ii() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assignGeneric<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEEvRKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE10deallocateEv(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE10deallocateEv() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 1, int>::sumupDuplicates() */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi1EiE15sumupDuplicatesEv(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi1EiE15sumupDuplicatesEv() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrix<float, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericIS2_EEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericIS2_EEvRKT_() called");
    return 0;
}

/* Demangled: Eigen::internal::sparse_cwise_binary_op_inner_iterator_selector<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const, Eigen::CwiseBinaryOpImpl<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const, Eigen::Sparse>::InnerIterator, Eigen::Sparse, Eigen::Sparse>::operator++() */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal46sparse_cwise_binary_op_inner_iterator_selectorINS0_13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS0_18scalar_multiple_opIfEEKNS_13CwiseBinaryOpINS0_20scalar_difference_opIfEEKNS_12SparseMatrixIfLi0EiEEKNS_19SparseSparseProductIRSC_SE_EEEEEESC_NS_17CwiseBinaryOpImplIS3_SK_SC_NS_6SparseEE13InnerIteratorESM_SM_EppEv(void) {
    ALOGD("_ZN5Eigen8internal46sparse_cwise_binary_op_inner_iterator_selectorINS0_13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS0_18scalar_multiple_opIfEEKNS_13CwiseBinaryOpINS0_20scalar_difference_opIfEEKNS_12SparseMatrixIfLi0EiEEKNS_19SparseSparseProductIRSC_SE_EEEEEESC_NS_17CwiseBinaryOpImplIS3_SK_SC_NS_6SparseEE13InnerIteratorESM_SM_EppEv() called");
    return 0;
}

/* Exported Object: Eigen::internal::manage_caching_sizes(Eigen::Action, long*, long*)::m_l2CacheSize */
extern "C" __attribute__((visibility("default"))) void* _ZZN5Eigen8internal20manage_caching_sizesENS_6ActionEPlS2_E13m_l2CacheSize = NULL;

/* Demangled: OccCore::simple_log2(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11simple_log2Ej(void) {
    ALOGD("_ZN7OccCore11simple_log2Ej() called");
    return 0;
}

/* Demangled: OccCore::doBufferRead(char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12doBufferReadEPcPhi(void) {
    ALOGD("_ZN7OccCore12doBufferReadEPcPhi() called");
    return 0;
}

/* Demangled: GFCore::WMF2WMI_PEL(unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore11WMF2WMI_PELEPhS0_iiii(void) {
    ALOGD("_ZN6GFCore11WMF2WMI_PELEPhS0_iiii() called");
    return 0;
}

/* Demangled: Eigen::DenseStorage<float, -1, -1, 1, 0>::DenseStorage(long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12DenseStorageIfLin1ELin1ELi1ELi0EEC2Elll(void) {
    ALOGD("_ZN5Eigen12DenseStorageIfLin1ELin1ELi1ELi0EEC2Elll() called");
    return 0;
}

/* Demangled: Eigen::Matrix<int, -1, -1, 0, -1, -1>::Matrix(Eigen::Matrix<int, -1, -1, 0, -1, -1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2ERKS1_(void) {
    ALOGD("_ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2ERKS1_() called");
    return 0;
}

/* Demangled: AppGF::Main() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGF4MainEv(void) {
    ALOGD("_ZN5AppGF4MainEv() called");
    return 0;
}

/* Demangled: OccCore::doBufferDump(char*, short*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12doBufferDumpEPcPsi(void) {
    ALOGD("_ZN7OccCore12doBufferDumpEPcPsi() called");
    return 0;
}

/* Demangled: GFBufferInfo::GFBufferInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12GFBufferInfoC1Ev(void) {
    ALOGD("_ZN12GFBufferInfoC1Ev() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEEvRKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEEvRKT_() called");
    return 0;
}

/* Demangled: libgf_FBS::uninitTPQ() */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBS9uninitTPQEv(void) {
    ALOGD("_ZN9libgf_FBS9uninitTPQEv() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::_compute_factorization(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid22_compute_factorizationERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid22_compute_factorizationERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: OccCore::DepthErosion(unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12DepthErosionEPhS0_ii(void) {
    ALOGD("_ZN7OccCore12DepthErosionEPhS0_ii() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: GFCore::Clip_gf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore7Clip_gfEi(void) {
    ALOGD("_ZN6GFCore7Clip_gfEi() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::_compute_factorization_opt(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid26_compute_factorization_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid26_compute_factorization_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::splat(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: Eigen::DenseBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::setConstant(float const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen9DenseBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKf(void) {
    ALOGD("_ZN5Eigen9DenseBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKf() called");
    return 0;
}

/* Demangled: Eigen::internal::gemm_pack_rhs<int, long, 2, 0, false, false>::operator()(int*, int const*, long, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal13gemm_pack_rhsIilLi2ELi0ELb0ELb0EEclEPiPKilllll(void) {
    ALOGD("_ZN5Eigen8internal13gemm_pack_rhsIilLi2ELi0ELb0ELb0EEclEPiPKilllll() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid(GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int, tpq_*) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridC1E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_(void) {
    ALOGD("_ZN19libgf_BilateralGridC1E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_() called");
    return 0;
}

/* Demangled: std::__1::vector<Eigen::Triplet<float, int>, std::__1::allocator<Eigen::Triplet<float, int> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen7TripletIfiEENS_9allocatorIS3_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen7TripletIfiEENS_9allocatorIS3_EEE7reserveEm() called");
    return 0;
}

/* Demangled: Eigen::internal::general_matrix_matrix_product<long, int, 0, false, int, 0, false, 0>::run(long, long, long, int const*, long, int const*, long, int*, long, int, Eigen::internal::level3_blocking<int, int>&, Eigen::internal::GemmParallelInfo<long>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal29general_matrix_matrix_productIliLi0ELb0EiLi0ELb0ELi0EE3runElllPKilS4_lPiliRNS0_15level3_blockingIiiEEPNS0_16GemmParallelInfoIlEE(void) {
    ALOGD("_ZN5Eigen8internal29general_matrix_matrix_productIliLi0ELb0EiLi0ELb0ELi0EE3runElllPKilS4_lPiliRNS0_15level3_blockingIiiEEPNS0_16GemmParallelInfoIlEE() called");
    return 0;
}

/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<int, -1, 1, 0, -1, 1> >::resize(long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEE6resizeEll(void) {
    ALOGD("_ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEE6resizeEll() called");
    return 0;
}

/* Demangled: guided_filter_gf::myAdd(float*, float, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf5myAddEPffS0_ii(void) {
    ALOGD("_ZN16guided_filter_gf5myAddEPffS0_ii() called");
    return 0;
}

/* Exported Object: rightDivTbl */
extern "C" __attribute__((visibility("default"))) void* rightDivTbl = NULL;

/* Demangled: libgf_BilateralGrid::unique_opt(Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid10unique_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_(void) {
    ALOGD("_ZN19libgf_BilateralGrid10unique_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_() called");
    return 0;
}

/* Demangled: AppGF::~AppGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGFD1Ev(void) {
    ALOGD("_ZN5AppGFD1Ev() called");
    return 0;
}

/* Demangled: GFCore::ConvertYUY2toI422(int, int, int, unsigned char const*, unsigned char*, unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore17ConvertYUY2toI422EiiiPKhPhS2_S2_i(void) {
    ALOGD("_ZN6GFCore17ConvertYUY2toI422EiiiPKhPhS2_S2_i() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: GFCore::BoundaryExtension(unsigned char*, unsigned char*, unsigned char*, GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore17BoundaryExtensionEPhS0_S0_17GF_IMAGE_FMT_ENUMS0_S0_S0_S0_ii(void) {
    ALOGD("_ZN6GFCore17BoundaryExtensionEPhS0_S0_17GF_IMAGE_FMT_ENUMS0_S0_S0_S0_ii() called");
    return 0;
}

/* Demangled: AppOcc::destroyInstance(MTKOcc*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOcc15destroyInstanceEP6MTKOcc(void) {
    ALOGD("_ZN6AppOcc15destroyInstanceEP6MTKOcc() called");
    return 0;
}

/* Demangled: Eigen::internal::conservative_sparse_sparse_product_selector<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int>, 0, 0, 0>::run(Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal43conservative_sparse_sparse_product_selectorINS_12SparseMatrixIfLi0EiEES3_S3_Li0ELi0ELi0EE3runERKS3_S6_RS3_(void) {
    ALOGD("_ZN5Eigen8internal43conservative_sparse_sparse_product_selectorINS_12SparseMatrixIfLi0EiEES3_S3_Li0ELi0ELi0EE3runERKS3_S6_RS3_() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>::resize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiE6resizeEii(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiE6resizeEii() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: OccCore::HoleFill_Dilation_L(unsigned char*, unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore19HoleFill_Dilation_LEPhS0_S0_ii(void) {
    ALOGD("_ZN7OccCore19HoleFill_Dilation_LEPhS0_S0_ii() called");
    return 0;
}

/* Demangled: OccCore::OccCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCoreC1Ev(void) {
    ALOGD("_ZN7OccCoreC1Ev() called");
    return 0;
}

/* Demangled: guided_filter_gf::myCombine3(float*, float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10myCombine3EPfS0_S0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf10myCombine3EPfS0_S0_S0_ii() called");
    return 0;
}

/* Exported Object: vtable for guided_filter_gf */
extern "C" __attribute__((visibility("default"))) void* _ZTV16guided_filter_gf = NULL;

/* Demangled: libgf_BilateralGrid::slice(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::unique(Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid6uniqueERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_(void) {
    ALOGD("_ZN19libgf_BilateralGrid6uniqueERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_() called");
    return 0;
}

/* Demangled: OccCore::UnPkDV(short*, short*, DVEC_OCC*, DVEC_OCC*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore6UnPkDVEPsS0_P8DVEC_OCCS2_(void) {
    ALOGD("_ZN7OccCore6UnPkDVEPsS0_P8DVEC_OCCS2_() called");
    return 0;
}

/* Demangled: OccCore::initializeTuningParam(OccInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore21initializeTuningParamEP11OccInitInfo(void) {
    ALOGD("_ZN7OccCore21initializeTuningParamEP11OccInitInfo() called");
    return 0;
}

/* Demangled: MTKGF::Init(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGF4InitEPvS0_(void) {
    ALOGD("_ZN5MTKGF4InitEPvS0_() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> >, Eigen::Matrix<int, -1, -1, 0, -1, -1> >, Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> >, Eigen::Matrix<int, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<int, -1, -1, 0, -1, -1> const&() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_9TransposeINS_12SparseMatrixIiLi0EiEEEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES5_S7_EcvRKS7_Ev(void) {
    ALOGD("_ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_9TransposeINS_12SparseMatrixIiLi0EiEEEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES5_S7_EcvRKS7_Ev() called");
    return 0;
}

/* Demangled: GFCore::Refocus_Core_New_HW_PEL() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore23Refocus_Core_New_HW_PELEv(void) {
    ALOGD("_ZN6GFCore23Refocus_Core_New_HW_PELEv() called");
    return 0;
}

/* Demangled: MTKGF::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGF5ResetEv(void) {
    ALOGD("_ZN5MTKGF5ResetEv() called");
    return 0;
}

/* Demangled: void Eigen::SparseMatrix<int, 1, int>::reserveInnerVectors<Eigen::Matrix<int, -1, 1, 0, -1, 1> >(Eigen::Matrix<int, -1, 1, 0, -1, 1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: GFCore::DownSample_Nearest_2X(unsigned char*, unsigned char*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore21DownSample_Nearest_2XEPhS0_iiiii(void) {
    ALOGD("_ZN6GFCore21DownSample_Nearest_2XEPhS0_iiiii() called");
    return 0;
}

/* Demangled: libgf_BilateralSolver::solve(Eigen::Matrix<float, -1, -1, 0, -1, -1>&, Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN21libgf_BilateralSolver5solveERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEES3_(void) {
    ALOGD("_ZN21libgf_BilateralSolver5solveERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEES3_() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: GFCore::GFCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCoreC1Ev(void) {
    ALOGD("_ZN6GFCoreC1Ev() called");
    return 0;
}

/* Demangled: GFCore::~GFCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCoreD2Ev(void) {
    ALOGD("_ZN6GFCoreD2Ev() called");
    return 0;
}

/* Demangled: libgf_BilateralSolver::libgf_BilateralSolver(libgf_BilateralGrid&, int, float, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN21libgf_BilateralSolverC2ER19libgf_BilateralGridiffi(void) {
    ALOGD("_ZN21libgf_BilateralSolverC2ER19libgf_BilateralGridiffi() called");
    return 0;
}

/* Demangled: OccCore::getBufferSizeNeeded() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore19getBufferSizeNeededEv(void) {
    ALOGD("_ZN7OccCore19getBufferSizeNeededEv() called");
    return 0;
}

/* Demangled: Eigen::internal::gemm_pack_lhs<int, long, 8, 4, 0, false, false>::operator()(int*, int const*, long, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal13gemm_pack_lhsIilLi8ELi4ELi0ELb0ELb0EEclEPiPKilllll(void) {
    ALOGD("_ZN5Eigen8internal13gemm_pack_lhsIilLi8ELi4ELi0ELb0ELb0EEclEPiPKilllll() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::blur(Eigen::SparseMatrix<float, 0, int>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid4blurERN5Eigen12SparseMatrixIfLi0EiEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid4blurERN5Eigen12SparseMatrixIfLi0EiEE() called");
    return 0;
}

/* Exported Object: vtable for MTKOcc */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKOcc = NULL;

/* Demangled: GFCore::Depth_dia(unsigned char*, unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore9Depth_diaEPhS0_S0_i(void) {
    ALOGD("_ZN6GFCore9Depth_diaEPhS0_S0_i() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<IdxCompareUniqueOpt&, int*>(int*, int*, int*, int*, IdxCompareUniqueOpt&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IR19IdxCompareUniqueOptPiEEjT0_S4_S4_S4_T_(void) {
    ALOGD("_ZNSt3__17__sort4IR19IdxCompareUniqueOptPiEEjT0_S4_S4_S4_T_() called");
    return 0;
}

/* Demangled: libgf_FBS::~libgf_FBS() */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBSD1Ev(void) {
    ALOGD("_ZN9libgf_FBSD1Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>::operator=(Eigen::SparseMatrix<int, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiEaSERKS1_(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiEaSERKS1_() called");
    return 0;
}

/* Exported Object: vtable for AppOcc */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppOcc = NULL;

/* Demangled: AppGF::FeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGF11FeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN5AppGF11FeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: void Eigen::GeneralProduct<Eigen::Matrix<int, -1, -1, 0, -1, -1>, Eigen::Matrix<int, -1, -1, 0, -1, -1>, 5>::scaleAndAddTo<Eigen::Matrix<int, -1, -1, 0, -1, -1> >(Eigen::Matrix<int, -1, -1, 0, -1, -1>&, int const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen14GeneralProductINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEES2_Li5EE13scaleAndAddToIS2_EEvRT_RKi(void) {
    ALOGD("_ZNK5Eigen14GeneralProductINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEES2_Li5EE13scaleAndAddToIS2_EEvRT_RKi() called");
    return 0;
}

/* Demangled: guided_filter_gf::operator()(unsigned char*, unsigned char*, unsigned char*, int, int, int, int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gfclEPhS0_S0_iiiif(void) {
    ALOGD("_ZN16guided_filter_gfclEPhS0_S0_iiiif() called");
    return 0;
}

/* Demangled: GFCore::Depth_MDA(unsigned char*, unsigned char*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore9Depth_MDAEPhS0_S0_S0_(void) {
    ALOGD("_ZN6GFCore9Depth_MDAEPhS0_S0_S0_() called");
    return 0;
}

/* Demangled: MTKOcc::createInstance(DRVOccObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKOcc14createInstanceE14DRVOccObject_s(void) {
    ALOGD("_ZN6MTKOcc14createInstanceE14DRVOccObject_s() called");
    return 0;
}

/* Demangled: libgf_FBS::out_of_memory(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBS13out_of_memoryEii(void) {
    ALOGD("_ZN9libgf_FBS13out_of_memoryEii() called");
    return 0;
}

/* Demangled: Eigen::Matrix<float, -1, 1, 0, -1, 1>& Eigen::MatrixBase<Eigen::Matrix<float, -1, 1, 0, -1, 1> >::lazyAssign<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> >(Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEES2_EES7_S2_EERS2_RKNS_11ProductBaseIT_T0_T1_EE(void) {
    ALOGD("_ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEES2_EES7_S2_EERS2_RKNS_11ProductBaseIT_T0_T1_EE() called");
    return 0;
}

/* Demangled: void Eigen::internal::solve_retval_with_guess<Eigen::ConjugateGradient<Eigen::SparseMatrix<float, 0, int>, 3, Eigen::DiagonalPreconditioner<float> >, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >::evalTo<Eigen::Matrix<float, -1, -1, 0, -1, -1> >(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5Eigen8internal23solve_retval_with_guessINS_17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES9_E6evalToIS9_EEvRT_(void) {
    ALOGD("_ZNK5Eigen8internal23solve_retval_with_guessINS_17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES9_E6evalToIS9_EEvRT_() called");
    return 0;
}

/* Demangled: OccCore::~OccCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCoreD1Ev(void) {
    ALOGD("_ZN7OccCoreD1Ev() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 1, int>::sumupDuplicates() */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi1EiE15sumupDuplicatesEv(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi1EiE15sumupDuplicatesEv() called");
    return 0;
}

/* Demangled: guided_filter_gf::ensureBuffer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf12ensureBufferEii(void) {
    ALOGD("_ZN16guided_filter_gf12ensureBufferEii() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrix<int, 0, int>::operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS1_S7_EEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS1_S7_EEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: GFCore::IIR32_gf(int*, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore8IIR32_gfEPiiS0_i(void) {
    ALOGD("_ZN6GFCore8IIR32_gfEPiiS0_i() called");
    return 0;
}

/* Demangled: guided_filter_gf::myMultiply(float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10myMultiplyEPfS0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf10myMultiplyEPfS0_S0_ii() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::operator=(libgf_BilateralGrid const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGridaSERKS_(void) {
    ALOGD("_ZN19libgf_BilateralGridaSERKS_() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> >(Eigen::SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS1_KNS_19SparseSparseProductIS1_RS7_EEEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS1_KNS_19SparseSparseProductIS1_RS7_EEEEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: GFCore::doBufferDumpYV12(char*, unsigned char*, unsigned char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore16doBufferDumpYV12EPcPhS1_S1_i(void) {
    ALOGD("_ZN6GFCore16doBufferDumpYV12EPcPhS1_S1_i() called");
    return 0;
}

/* Demangled: Eigen::DenseBase<Eigen::Matrix<int, -1, -1, 0, -1, -1> >::setConstant(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen9DenseBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKi(void) {
    ALOGD("_ZN5Eigen9DenseBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKi() called");
    return 0;
}

/* Demangled: OccCore::WMF2WMI_NEW(unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11WMF2WMI_NEWEPhS0_iiii(void) {
    ALOGD("_ZN7OccCore11WMF2WMI_NEWEPhS0_iiii() called");
    return 0;
}

/* Demangled: GFCore::GenConfidenceMap(unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore16GenConfidenceMapEPhS0_S0_iiiiii(void) {
    ALOGD("_ZN6GFCore16GenConfidenceMapEPhS0_S0_iiiiii() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::splat(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE(void) {
    ALOGD("_ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE() called");
    return 0;
}

/* Demangled: guided_filter_gf::myCombine2(float*, float*, float*, float*, float, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf10myCombine2EPfS0_S0_S0_fS0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf10myCombine2EPfS0_S0_S0_fS0_S0_ii() called");
    return 0;
}

/* Demangled: Eigen::internal::gebp_kernel<int, int, long, 8, 2, false, false>::operator()(int*, long, int const*, int const*, long, long, long, int, long, long, long, long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal11gebp_kernelIiilLi8ELi2ELb0ELb0EEclEPilPKiS5_lllillllS3_(void) {
    ALOGD("_ZN5Eigen8internal11gebp_kernelIiilLi8ELi2ELb0ELb0EEclEPilPKiS5_lllillllS3_() called");
    return 0;
}

/* Demangled: GFInitInfo::GFInitInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10GFInitInfoC1Ev(void) {
    ALOGD("_ZN10GFInitInfoC1Ev() called");
    return 0;
}

/* Demangled: GFCore::Depth_Post_Processing_New_HW_PEL() */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore32Depth_Post_Processing_New_HW_PELEv(void) {
    ALOGD("_ZN6GFCore32Depth_Post_Processing_New_HW_PELEv() called");
    return 0;
}

/* Demangled: guided_filter_gf::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf13releaseBufferEv(void) {
    ALOGD("_ZN16guided_filter_gf13releaseBufferEv() called");
    return 0;
}

/* Demangled: guided_filter_gf::operator()(float*, float*, float*, int, int, int, int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gfclEPfS0_S0_iiiif(void) {
    ALOGD("_ZN16guided_filter_gfclEPfS0_S0_iiiif() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrix<int, 0, int>::operator=<Eigen::SparseMatrix<int, 1, int> >(Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 1, int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIiLi0EiEaSINS0_IiLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIiLi0EiEaSINS0_IiLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm() called");
    return 0;
}

/* Demangled: OccCore::initializeParseTuningParam(OccTuningInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore26initializeParseTuningParamEP13OccTuningInfo(void) {
    ALOGD("_ZN7OccCore26initializeParseTuningParamEP13OccTuningInfo() called");
    return 0;
}

/* Demangled: GFCore::Depth_Smooth_flexible(unsigned char*, unsigned char*, int, int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore21Depth_Smooth_flexibleEPhS0_iiS0_(void) {
    ALOGD("_ZN6GFCore21Depth_Smooth_flexibleEPhS0_iiS0_() called");
    return 0;
}

/* Demangled: Eigen::DiagonalPreconditioner<float>& Eigen::DiagonalPreconditioner<float>::factorize<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrix<float, 0, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen22DiagonalPreconditionerIfE9factorizeINS_12SparseMatrixIfLi0EiEEEERS1_RKT_(void) {
    ALOGD("_ZN5Eigen22DiagonalPreconditionerIfE9factorizeINS_12SparseMatrixIfLi0EiEEEERS1_RKT_() called");
    return 0;
}

/* Demangled: guided_filter_gf::setBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf9setBufferEPh(void) {
    ALOGD("_ZN16guided_filter_gf9setBufferEPh() called");
    return 0;
}

/* Demangled: MTKGF::createInstance(DRVOccObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGF14createInstanceE14DRVOccObject_s(void) {
    ALOGD("_ZN5MTKGF14createInstanceE14DRVOccObject_s() called");
    return 0;
}

/* Demangled: OccCore::LDC_ideal(int, int, unsigned char*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore9LDC_idealEiiPhS0_S0_(void) {
    ALOGD("_ZN7OccCore9LDC_idealEiiPhS0_S0_() called");
    return 0;
}

/* Demangled: GFCore::doBufferRead(char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore12doBufferReadEPcPhi(void) {
    ALOGD("_ZN6GFCore12doBufferReadEPcPhi() called");
    return 0;
}

/* Demangled: GFCore::BM_extendTableByCtrlPoints(unsigned char*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore26BM_extendTableByCtrlPointsEPhPiS1_i(void) {
    ALOGD("_ZN6GFCore26BM_extendTableByCtrlPointsEPhPiS1_i() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: GFCore::setupBuffer(GFInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore11setupBufferEP10GFInitInfo(void) {
    ALOGD("_ZN6GFCore11setupBufferEP10GFInitInfo() called");
    return 0;
}

/* Demangled: MTKGF::Main() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKGF4MainEv(void) {
    ALOGD("_ZN5MTKGF4MainEv() called");
    return 0;
}

/* Demangled: AppOcc::~AppOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOccD2Ev(void) {
    ALOGD("_ZN6AppOccD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::vector(std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEEC2ERKS6_(void) {
    ALOGD("_ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEEC2ERKS6_() called");
    return 0;
}

/* Demangled: guided_filter_gf::myDivide(float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf8myDivideEPfS0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf8myDivideEPfS0_S0_ii() called");
    return 0;
}

/* Demangled: AppOcc::AppOcc() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppOccC1Ev(void) {
    ALOGD("_ZN6AppOccC1Ev() called");
    return 0;
}

/* Demangled: Eigen::Matrix<float, -1, -1, 0, -1, -1>::Matrix(Eigen::Matrix<float, -1, -1, 0, -1, -1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2ERKS1_(void) {
    ALOGD("_ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2ERKS1_() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: guided_filter_gf::myBoxFilter(float*, float*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf11myBoxFilterEPfS0_iiii(void) {
    ALOGD("_ZN16guided_filter_gf11myBoxFilterEPfS0_iiii() called");
    return 0;
}

/* Demangled: Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> >& Eigen::MatrixBase<Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> > >::operator=<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> >(Eigen::DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal13scalar_sum_opIfEENS_5BlockINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS_12CwiseUnaryOpINS2_18scalar_multiple_opIfEEKNS6_IfLin1ELi1ELi0ELin1ELi1EEEEEEEEaSISE_EERSF_RKNS_9DenseBaseIT_EE(void) {
    ALOGD("_ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal13scalar_sum_opIfEENS_5BlockINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS_12CwiseUnaryOpINS2_18scalar_multiple_opIfEEKNS6_IfLin1ELi1ELi0ELin1ELi1EEEEEEEEaSISE_EERSF_RKNS_9DenseBaseIT_EE() called");
    return 0;
}

/* Demangled: GFCore::BM_initTables(GFInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore13BM_initTablesEP10GFInitInfo(void) {
    ALOGD("_ZN6GFCore13BM_initTablesEP10GFInitInfo() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 1, int>& Eigen::SparseMatrix<float, 1, int>::operator=<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen12SparseMatrixIfLi1EiEaSINS0_IfLi0EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void) {
    ALOGD("_ZN5Eigen12SparseMatrixIfLi1EiEaSINS0_IfLi0EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE() called");
    return 0;
}

/* Demangled: libgf_FBS::FastBilateralSolver(GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, float, float, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9libgf_FBS19FastBilateralSolverE17GF_IMAGE_FMT_ENUMPhS1_S1_S1_S1_S1_iiiiffiiii(void) {
    ALOGD("_ZN9libgf_FBS19FastBilateralSolverE17GF_IMAGE_FMT_ENUMPhS1_S1_S1_S1_S1_iiiiffiiii() called");
    return 0;
}

/* Demangled: AppGF::~AppGF() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGFD0Ev(void) {
    ALOGD("_ZN5AppGFD0Ev() called");
    return 0;
}

/* Demangled: OccCore::setProcInfo(OccProcInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11setProcInfoEP11OccProcInfo(void) {
    ALOGD("_ZN7OccCore11setProcInfoEP11OccProcInfo() called");
    return 0;
}

/* Demangled: OccCore::doBufferDump(char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12doBufferDumpEPcPhi(void) {
    ALOGD("_ZN7OccCore12doBufferDumpEPcPhi() called");
    return 0;
}

/* Demangled: guided_filter_gf::myAdd(float*, float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16guided_filter_gf5myAddEPfS0_S0_ii(void) {
    ALOGD("_ZN16guided_filter_gf5myAddEPfS0_S0_ii() called");
    return 0;
}

/* Demangled: Eigen::internal::CompressedStorage<float, int>::resize(unsigned long, double) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal17CompressedStorageIfiE6resizeEmd(void) {
    ALOGD("_ZN5Eigen8internal17CompressedStorageIfiE6resizeEmd() called");
    return 0;
}

/* Demangled: void Eigen::internal::set_from_triplets<std::__1::__wrap_iter<Eigen::Triplet<int, int>*>, Eigen::SparseMatrix<int, 0, int> >(std::__1::__wrap_iter<Eigen::Triplet<int, int>*> const&, std::__1::__wrap_iter<Eigen::Triplet<int, int>*> const&, Eigen::SparseMatrix<int, 0, int>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIiiEEEENS_12SparseMatrixIiLi0EiEEEEvRKT_SC_RT0_i(void) {
    ALOGD("_ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIiiEEEENS_12SparseMatrixIiLi0EiEEEEvRKT_SC_RT0_i() called");
    return 0;
}

/* Demangled: GFCore::ClipABC(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore7ClipABCEiii(void) {
    ALOGD("_ZN6GFCore7ClipABCEiii() called");
    return 0;
}

/* Demangled: OccCore::setupBuffer(OccInitInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore11setupBufferEP11OccInitInfo(void) {
    ALOGD("_ZN7OccCore11setupBufferEP11OccInitInfo() called");
    return 0;
}

/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<int, -1, -1, 0, -1, -1> >::resize(long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE6resizeEll(void) {
    ALOGD("_ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE6resizeEll() called");
    return 0;
}

/* Demangled: GFCore::filterWrapper(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore13filterWrapperEPvP6rtinfo(void) {
    ALOGD("_ZN6GFCore13filterWrapperEPvP6rtinfo() called");
    return 0;
}

/* Demangled: GFCore::Depth_Core_New_HW_PEL(GF_MODE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN6GFCore21Depth_Core_New_HW_PELE12GF_MODE_ENUM(void) {
    ALOGD("_ZN6GFCore21Depth_Core_New_HW_PELE12GF_MODE_ENUM() called");
    return 0;
}

/* Demangled: OccCore::TexturelessCount(unsigned char*, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore16TexturelessCountEPhiiiiiii(void) {
    ALOGD("_ZN7OccCore16TexturelessCountEPhiiiiiii() called");
    return 0;
}

/* Demangled: OccCore::CropBoundary(int, int, int, int, int*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore12CropBoundaryEiiiiPiPh(void) {
    ALOGD("_ZN7OccCore12CropBoundaryEiiiiPiPh() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEERS2_RKT_() called");
    return 0;
}

/* Demangled: AppGF::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5AppGF11getInstanceEv(void) {
    ALOGD("_ZN5AppGF11getInstanceEv() called");
    return 0;
}

/* Demangled: libgf_BilateralGrid::blur_mp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN19libgf_BilateralGrid7blur_mpEPvP6rtinfo(void) {
    ALOGD("_ZN19libgf_BilateralGrid7blur_mpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: OccCore::CropBoundary_UV(int, int, int, int, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7OccCore15CropBoundary_UVEiiiiPhS0_(void) {
    ALOGD("_ZN7OccCore15CropBoundary_UVEiiiiPhS0_() called");
    return 0;
}

/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEERS2_RKT_(void) {
    ALOGD("_ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEERS2_RKT_() called");
    return 0;
}

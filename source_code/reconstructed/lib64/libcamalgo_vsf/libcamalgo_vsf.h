/*
 * Reverse-Engineered ABI Specification for: libcamalgo.vsf.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.vsf.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_VSF_H
#define BEGONIA_RE_LIBCAMALGO_VSF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7OccCore14CropBoundary2XEiiiiPhS0_ */
/* Demangled: OccCore::CropBoundary2X(int, int, int, int, unsigned char*, unsigned char*) */
int _ZN7OccCore14CropBoundary2XEiiiiPhS0_(void);

/* Symbol: _ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::blur(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN6GFCore7HF_meanEPhS0_iii */
/* Demangled: GFCore::HF_mean(unsigned char*, unsigned char*, int, int, int) */
int _ZN6GFCore7HF_meanEPhS0_iii(void);

/* Symbol: _ZN7OccCore14OutlierRemovalEPhS0_iiiRiS1_ */
/* Demangled: OccCore::OutlierRemoval(unsigned char*, unsigned char*, int, int, int, int&, int&) */
int _ZN7OccCore14OutlierRemovalEPhS0_iiiRiS1_(void);

/* Symbol: _ZN6GFCore10initializeEP10GFInitInfo */
/* Demangled: GFCore::initialize(GFInitInfo*) */
int _ZN6GFCore10initializeEP10GFInitInfo(void);

/* Symbol: _Z10GFPart1_gfPhS_PfS0_fiiiiiPv */
/* Demangled: GFPart1_gf(unsigned char*, unsigned char*, float*, float*, float, int, int, int, int, int, void*) */
int _Z10GFPart1_gfPhS_PfS0_fiiiiiPv(void);

/* Symbol: _ZN6GFCoreC2Ev */
/* Demangled: GFCore::GFCore() */
int _ZN6GFCoreC2Ev(void);

/* Symbol: _ZN6MTKOcc11FeatureCtrlEjPvS0_ */
/* Demangled: MTKOcc::FeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKOcc11FeatureCtrlEjPvS0_(void);

/* Symbol: _ZNK5Eigen17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEE15_solveWithGuessINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES8_EEvRKT_RT0_ */
/* Demangled: void Eigen::ConjugateGradient<Eigen::SparseMatrix<float, 0, int>, 3, Eigen::DiagonalPreconditioner<float> >::_solveWithGuess<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >(Eigen::Matrix<float, -1, -1, 0, -1, -1> const&, Eigen::Matrix<float, -1, -1, 0, -1, -1>&) const */
int _ZNK5Eigen17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEE15_solveWithGuessINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES8_EEvRKT_RT0_(void);

/* Symbol: _ZN10GFInitInfoC2Ev */
/* Demangled: GFInitInfo::GFInitInfo() */
int _ZN10GFInitInfoC2Ev(void);

/* Symbol: _ZN7OccCore10initializeEP11OccInitInfo */
/* Demangled: OccCore::initialize(OccInitInfo*) */
int _ZN7OccCore10initializeEP11OccInitInfo(void);

/* Symbol: _ZN21libgf_BilateralSolverC1ER19libgf_BilateralGridiffi */
/* Demangled: libgf_BilateralSolver::libgf_BilateralSolver(libgf_BilateralGrid&, int, float, float, int) */
int _ZN21libgf_BilateralSolverC1ER19libgf_BilateralGridiffi(void);

/* Symbol: _ZN5MTKGFD0Ev */
/* Demangled: MTKGF::~MTKGF() */
int _ZN5MTKGFD0Ev(void);

/* Symbol: _ZZN5Eigen8internal20manage_caching_sizesENS_6ActionEPlS2_E13m_l1CacheSize */
/* Demangled: Eigen::internal::manage_caching_sizes(Eigen::Action, long*, long*)::m_l1CacheSize */
extern void* _ZZN5Eigen8internal20manage_caching_sizesENS_6ActionEPlS2_E13m_l1CacheSize;

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: _ZN6GFCore19getBufferSizeNeededEv */
/* Demangled: GFCore::getBufferSizeNeeded() */
int _ZN6GFCore19getBufferSizeNeededEv(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _ZN7OccCore19calBufferSizeNeededEP11OccInitInfo */
/* Demangled: OccCore::calBufferSizeNeeded(OccInitInfo*) */
int _ZN7OccCore19calBufferSizeNeededEP11OccInitInfo(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS1_15SingletonVectorEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrix<int, 0, int>::reserveInnerVectors<Eigen::SparseMatrix<int, 0, int>::SingletonVector>(Eigen::SparseMatrix<int, 0, int>::SingletonVector const&) */
int _ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS1_15SingletonVectorEEEvRKT_(void);

/* Symbol: _ZN7OccCore12CropBoundaryEiiiiPhS0_ */
/* Demangled: OccCore::CropBoundary(int, int, int, int, unsigned char*, unsigned char*) */
int _ZN7OccCore12CropBoundaryEiiiiPhS0_(void);

/* Symbol: _ZN6GFCore10WESS3C_PELEPPf17GF_IMAGE_FMT_ENUMPhS3_S3_ffiii */
/* Demangled: GFCore::WESS3C_PEL(float**, GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, float, float, int, int, int) */
int _ZN6GFCore10WESS3C_PELEPPf17GF_IMAGE_FMT_ENUMPhS3_S3_ffiii(void);

/* Symbol: _ZN9libgf_FBSD2Ev */
/* Demangled: libgf_FBS::~libgf_FBS() */
int _ZN9libgf_FBSD2Ev(void);

/* Symbol: _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE6resizeEll */
/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::resize(long, long) */
int _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE6resizeEll(void);

/* Symbol: _ZN6GFCore21DownSample_Nearest_2XEPhS0_iiii */
/* Demangled: GFCore::DownSample_Nearest_2X(unsigned char*, unsigned char*, int, int, int, int) */
int _ZN6GFCore21DownSample_Nearest_2XEPhS0_iiii(void);

/* Symbol: _ZN6AppOcc11FeatureCtrlEjPvS0_ */
/* Demangled: AppOcc::FeatureCtrl(unsigned int, void*, void*) */
int _ZN6AppOcc11FeatureCtrlEjPvS0_(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignIS2_EERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrix<float, 0, int> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignIS2_EERS2_RKT_(void);

/* Symbol: _ZN6GFCore9_dump_ppmEiiPKcPhi */
/* Demangled: GFCore::_dump_ppm(int, int, char const*, unsigned char*, int) */
int _ZN6GFCore9_dump_ppmEiiPKcPhi(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS0_IiLi0EiEEEEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> > const&) */
int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS0_IiLi0EiEEEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN7OccCore15OccProcessOLD2DEPhS0_PsS1_S0_S0_S0_S0_ */
/* Demangled: OccCore::OccProcessOLD2D(unsigned char*, unsigned char*, short*, short*, unsigned char*, unsigned char*, unsigned char*, unsigned char*) */
int _ZN7OccCore15OccProcessOLD2DEPhS0_PsS1_S0_S0_S0_S0_(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiEaSINS0_IfLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::SparseMatrix<float, 1, int> >(Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 1, int> > const&) */
int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS0_IfLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN6MTKOccD2Ev */
/* Demangled: MTKOcc::~MTKOcc() */
int _ZN6MTKOccD2Ev(void);

/* Symbol: _ZN9libgf_FBS7initTPQEi */
/* Demangled: libgf_FBS::initTPQ(int) */
int _ZN9libgf_FBS7initTPQEi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN6GFCore13WMF2WMI_FloatEPfS0_iiii */
/* Demangled: GFCore::WMF2WMI_Float(float*, float*, int, int, int, int) */
int _ZN6GFCore13WMF2WMI_FloatEPfS0_iiii(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericIS2_EEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assignGeneric<Eigen::SparseMatrix<int, 0, int> >(Eigen::SparseMatrix<int, 0, int> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericIS2_EEvRKT_(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _ZN7OccCore7WMF2WMIEPhS0_iiii */
/* Demangled: OccCore::WMF2WMI(unsigned char*, unsigned char*, int, int, int, int) */
int _ZN7OccCore7WMF2WMIEPhS0_iiii(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE6resizeEll */
/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<float, -1, 1, 0, -1, 1> >::resize(long, long) */
int _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE6resizeEll(void);

/* Symbol: _ZN5AppGFC2Ev */
/* Demangled: AppGF::AppGF() */
int _ZN5AppGFC2Ev(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN5AppGF4InitEPvS0_ */
/* Demangled: AppGF::Init(void*, void*) */
int _ZN5AppGF4InitEPvS0_(void);

/* Symbol: _ZTISt9bad_alloc */
/* Demangled: typeinfo for std::bad_alloc */
extern void* _ZTISt9bad_alloc;

/* Symbol: _ZN7OccCoreD2Ev */
/* Demangled: OccCore::~OccCore() */
int _ZN7OccCoreD2Ev(void);

/* Symbol: _ZN6GFCore12doBufferDumpEPcPii */
/* Demangled: GFCore::doBufferDump(char*, int*, int) */
int _ZN6GFCore12doBufferDumpEPcPii(void);

/* Symbol: _ZN6GFCore19calBufferSizeNeededEP10GFInitInfo */
/* Demangled: GFCore::calBufferSizeNeeded(GFInitInfo*) */
int _ZN6GFCore19calBufferSizeNeededEP10GFInitInfo(void);

/* Symbol: _ZN16guided_filter_gf10myIntegralEPfPdii */
/* Demangled: guided_filter_gf::myIntegral(float*, double*, int, int) */
int _ZN16guided_filter_gf10myIntegralEPfPdii(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN5Eigen12DenseStorageIiLin1ELin1ELi1ELi0EEC2Elll */
/* Demangled: Eigen::DenseStorage<int, -1, -1, 1, 0>::DenseStorage(long, long, long) */
int _ZN5Eigen12DenseStorageIiLin1ELin1ELi1ELi0EEC2Elll(void);

/* Symbol: _ZN6GFCore7HF_meanEPhS0_i */
/* Demangled: GFCore::HF_mean(unsigned char*, unsigned char*, int) */
int _ZN6GFCore7HF_meanEPhS0_i(void);

/* Symbol: _ZN6GFCore21FastBilateralSolverMpEPvP6rtinfo */
/* Demangled: GFCore::FastBilateralSolverMp(void*, rtinfo*) */
int _ZN6GFCore21FastBilateralSolverMpEPvP6rtinfo(void);

/* Symbol: _ZN7OccCore9doOccMainEv */
/* Demangled: OccCore::doOccMain() */
int _ZN7OccCore9doOccMainEv(void);

/* Symbol: _ZN6AppOccD1Ev */
/* Demangled: AppOcc::~AppOcc() */
int _ZN6AppOccD1Ev(void);

/* Symbol: _ZNSt3__16__sortIR19IdxCompareUniqueOptPiEEvT0_S4_T_ */
/* Demangled: void std::__1::__sort<IdxCompareUniqueOpt&, int*>(int*, int*, IdxCompareUniqueOpt&) */
int _ZNSt3__16__sortIR19IdxCompareUniqueOptPiEEvT0_S4_T_(void);

/* Symbol: _ZN21libgf_BilateralSolverD2Ev */
/* Demangled: libgf_BilateralSolver::~libgf_BilateralSolver() */
int _ZN21libgf_BilateralSolverD2Ev(void);

/* Symbol: _ZN5AppGF15destroyInstanceEP5MTKGF */
/* Demangled: AppGF::destroyInstance(MTKGF*) */
int _ZN5AppGF15destroyInstanceEP5MTKGF(void);

/* Symbol: _ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEES1_EEEERKNS_10MatrixBaseIT_EE */
/* Demangled: Eigen::Matrix<int, -1, -1, 0, -1, -1>::Matrix<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> > >(Eigen::MatrixBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> > > const&) */
int _ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEES1_EEEERKNS_10MatrixBaseIT_EE(void);

/* Symbol: _ZN6GFCore12Depth_SmoothEPhS0_S0_S0_ */
/* Demangled: GFCore::Depth_Smooth(unsigned char*, unsigned char*, unsigned char*, unsigned char*) */
int _ZN6GFCore12Depth_SmoothEPhS0_S0_S0_(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::__append(unsigned long) */
int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZN7OccCore12doBufferDumpEPcP8DVEC_OCCi */
/* Demangled: OccCore::doBufferDump(char*, DVEC_OCC*, int) */
int _ZN7OccCore12doBufferDumpEPcP8DVEC_OCCi(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIfiEEEENS_12SparseMatrixIfLi0EiEEEEvRKT_SC_RT0_i */
/* Demangled: void Eigen::internal::set_from_triplets<std::__1::__wrap_iter<Eigen::Triplet<float, int>*>, Eigen::SparseMatrix<float, 0, int> >(std::__1::__wrap_iter<Eigen::Triplet<float, int>*> const&, std::__1::__wrap_iter<Eigen::Triplet<float, int>*> const&, Eigen::SparseMatrix<float, 0, int>&, int) */
int _ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIfiEEEENS_12SparseMatrixIfLi0EiEEEEvRKT_SC_RT0_i(void);

/* Symbol: _ZN9libgf_FBSC1Ev */
/* Demangled: libgf_FBS::libgf_FBS() */
int _ZN9libgf_FBSC1Ev(void);

/* Symbol: _ZN19libgf_BilateralGrid13get_valid_idxERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_ */
/* Demangled: libgf_BilateralGrid::get_valid_idx(std::__1::vector<int, std::__1::allocator<int> >&, Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN19libgf_BilateralGrid13get_valid_idxERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_(void);

/* Symbol: _ZNSt3__118__stable_sort_moveIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeE */
/* Demangled: void std::__1::__stable_sort_move<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*) */
int _ZNSt3__118__stable_sort_moveIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeE(void);

/* Symbol: _ZN19libgf_BilateralGridC1Ev */
/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid() */
int _ZN19libgf_BilateralGridC1Ev(void);

/* Symbol: _ZN8AppGFTmp11getInstanceEv */
/* Demangled: AppGFTmp::getInstance() */
int _ZN8AppGFTmp11getInstanceEv(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _ZN6GFCore12doBufferDumpEPcPfi */
/* Demangled: GFCore::doBufferDump(char*, float*, int) */
int _ZN6GFCore12doBufferDumpEPcPfi(void);

/* Symbol: _ZN19libgf_BilateralGridD2Ev */
/* Demangled: libgf_BilateralGrid::~libgf_BilateralGrid() */
int _ZN19libgf_BilateralGridD2Ev(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiE6resizeEii */
/* Demangled: Eigen::SparseMatrix<float, 0, int>::resize(int, int) */
int _ZN5Eigen12SparseMatrixIfLi0EiE6resizeEii(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN7OccCore5resetEv */
/* Demangled: OccCore::reset() */
int _ZN7OccCore5resetEv(void);

/* Symbol: _ZN6AppOccC2Ev */
/* Demangled: AppOcc::AppOcc() */
int _ZN6AppOccC2Ev(void);

/* Symbol: _ZN7OccCore11EdgeRemoverEPhS0_S0_iiii */
/* Demangled: OccCore::EdgeRemover(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
int _ZN7OccCore11EdgeRemoverEPhS0_S0_iiii(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiE14makeCompressedEv */
/* Demangled: Eigen::SparseMatrix<int, 0, int>::makeCompressed() */
int _ZN5Eigen12SparseMatrixIiLi0EiE14makeCompressedEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: _ZNSt3__118__insertion_sort_3IR19IdxCompareUniqueOptPiEEvT0_S4_T_ */
/* Demangled: void std::__1::__insertion_sort_3<IdxCompareUniqueOpt&, int*>(int*, int*, IdxCompareUniqueOpt&) */
int _ZNSt3__118__insertion_sort_3IR19IdxCompareUniqueOptPiEEvT0_S4_T_(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEEvRKT_(void);

/* Symbol: _ZN6GFCore12BM_genTablesEv */
/* Demangled: GFCore::BM_genTables() */
int _ZN6GFCore12BM_genTablesEv(void);

/* Symbol: _ZN6MTKOcc4InitEPvS0_ */
/* Demangled: MTKOcc::Init(void*, void*) */
int _ZN6MTKOcc4InitEPvS0_(void);

/* Symbol: _ZN6MTKOcc5ResetEv */
/* Demangled: MTKOcc::Reset() */
int _ZN6MTKOcc5ResetEv(void);

/* Symbol: _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIfEES1_EEEERKNS_10MatrixBaseIT_EE */
/* Demangled: Eigen::Matrix<float, -1, -1, 0, -1, -1>::Matrix<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > >(Eigen::MatrixBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > > const&) */
int _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2INS_14CwiseNullaryOpINS_8internal18scalar_constant_opIfEES1_EEEERKNS_10MatrixBaseIT_EE(void);

/* Symbol: _ZN5Eigen12DenseStorageIiLin1ELin1ELin1ELi0EEC2Elll */
/* Demangled: Eigen::DenseStorage<int, -1, -1, -1, 0>::DenseStorage(long, long, long) */
int _ZN5Eigen12DenseStorageIiLin1ELin1ELin1ELi0EEC2Elll(void);

/* Symbol: _ZN6AppOccD0Ev */
/* Demangled: AppOcc::~AppOcc() */
int _ZN6AppOccD0Ev(void);

/* Symbol: _ZN19libgf_BilateralGrid17get_valid_idx_optERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_ */
/* Demangled: libgf_BilateralGrid::get_valid_idx_opt(std::__1::vector<int, std::__1::allocator<int> >&, Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN19libgf_BilateralGrid17get_valid_idx_optERNSt3__16vectorIiNS0_9allocatorIiEEEERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEES5_S5_(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN7OccCore13getResultInfoEP13OccResultInfo */
/* Demangled: OccCore::getResultInfo(OccResultInfo*) */
int _ZN7OccCore13getResultInfoEP13OccResultInfo(void);

/* Symbol: _ZN7OccCore11PreserveBNDEPhS0_S0_ii */
/* Demangled: OccCore::PreserveBND(unsigned char*, unsigned char*, unsigned char*, int, int) */
int _ZN7OccCore11PreserveBNDEPhS0_S0_ii(void);

/* Symbol: _ZN6GFCore12doBufferDumpEPcPhi */
/* Demangled: GFCore::doBufferDump(char*, unsigned char*, int) */
int _ZN6GFCore12doBufferDumpEPcPhi(void);

/* Symbol: _ZN5MTKGF11FeatureCtrlEjPvS0_ */
/* Demangled: MTKGF::FeatureCtrl(unsigned int, void*, void*) */
int _ZN5MTKGF11FeatureCtrlEjPvS0_(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEENS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrix<int, 0, int>::reserveInnerVectors<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, 1, 0, -1, 1> > >(Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<int>, Eigen::Matrix<int, -1, 1, 0, -1, 1> > const&) */
int _ZN5Eigen12SparseMatrixIiLi0EiE19reserveInnerVectorsINS_14CwiseNullaryOpINS_8internal18scalar_constant_opIiEENS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEEEvRKT_(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::__push_back_slow_path<Eigen::SparseMatrix<int, 0, int> const&>(Eigen::SparseMatrix<int, 0, int> const&) */
int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEERS2_RKT_(void);

/* Symbol: _ZN5Eigen8internal17CompressedStorageIiiE6resizeEmd */
/* Demangled: Eigen::internal::CompressedStorage<int, int>::resize(unsigned long, double) */
int _ZN5Eigen8internal17CompressedStorageIiiE6resizeEmd(void);

/* Symbol: _ZN16guided_filter_gfD0Ev */
/* Demangled: guided_filter_gf::~guided_filter_gf() */
int _ZN16guided_filter_gfD0Ev(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEERS2_RKT_(void);

/* Symbol: _ZN5AppGF5ResetEv */
/* Demangled: AppGF::Reset() */
int _ZN5AppGF5ResetEv(void);

/* Symbol: _ZN16guided_filter_gf13getBufferSizeEii */
/* Demangled: guided_filter_gf::getBufferSize(int, int) */
int _ZN16guided_filter_gf13getBufferSizeEii(void);

/* Symbol: _ZN6AppOcc4MainEv */
/* Demangled: AppOcc::Main() */
int _ZN6AppOcc4MainEv(void);

/* Symbol: _ZNSt3__113__vector_baseIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__vector_base<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: midDivTbl */
/* Demangled: midDivTbl */
extern void* midDivTbl;

/* Symbol: _ZN16guided_filter_gf12doBufferDumpEPcPfi */
/* Demangled: guided_filter_gf::doBufferDump(char*, float*, int) */
int _ZN16guided_filter_gf12doBufferDumpEPcPfi(void);

/* Symbol: leftDivTbl */
/* Demangled: leftDivTbl */
extern void* leftDivTbl;

/* Symbol: _ZNSt3__115__inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeEl */
/* Demangled: void std::__1::__inplace_merge<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*, long) */
int _ZNSt3__115__inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeEl(void);

/* Symbol: _ZN7OccCore12doBufferDumpEPcPii */
/* Demangled: OccCore::doBufferDump(char*, int*, int) */
int _ZN7OccCore12doBufferDumpEPcPii(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS2_EEEEvRKT_(void);

/* Symbol: _ZN16guided_filter_gf10myCombine1EPfS0_S0_S0_ii */
/* Demangled: guided_filter_gf::myCombine1(float*, float*, float*, float*, int, int) */
int _ZN16guided_filter_gf10myCombine1EPfS0_S0_S0_ii(void);

/* Symbol: _ZN6AppOcc11getInstanceEv */
/* Demangled: AppOcc::getInstance() */
int _ZN6AppOcc11getInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN6MTKOcc4MainEv */
/* Demangled: MTKOcc::Main() */
int _ZN6MTKOcc4MainEv(void);

/* Symbol: _ZN9libgf_FBSC2Ev */
/* Demangled: libgf_FBS::libgf_FBS() */
int _ZN9libgf_FBSC2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen7TripletIiiEENS_9allocatorIS3_EEE7reserveEm */
/* Demangled: std::__1::vector<Eigen::Triplet<int, int>, std::__1::allocator<Eigen::Triplet<int, int> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5Eigen7TripletIiiEENS_9allocatorIS3_EEE7reserveEm(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrix<float, 1, int>::reserveInnerVectors<Eigen::Matrix<int, -1, 1, 0, -1, 1> >(Eigen::Matrix<int, -1, 1, 0, -1, 1> const&) */
int _ZN5Eigen12SparseMatrixIfLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZN19libgf_BilateralGridC2E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_ */
/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid(GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int, tpq_*) */
int _ZN19libgf_BilateralGridC2E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_(void);

/* Symbol: _ZN7OccCore17Convert_DisparityEP8DVEC_OCCPhPiS3_ */
/* Demangled: OccCore::Convert_Disparity(DVEC_OCC*, unsigned char*, int*, int*) */
int _ZN7OccCore17Convert_DisparityEP8DVEC_OCCPhPiS3_(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_9TransposeINS_12SparseMatrixIiLi0EiEEEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEESB_SD_EcvRKSD_Ev */
/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> > const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> > const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<float, -1, -1, 0, -1, -1> const&() const */
int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_9TransposeINS_12SparseMatrixIiLi0EiEEEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEESB_SD_EcvRKSD_Ev(void);

/* Symbol: _ZN6GFCore16UpSample_NearestEPhS0_iiii */
/* Demangled: GFCore::UpSample_Nearest(unsigned char*, unsigned char*, int, int, int, int) */
int _ZN6GFCore16UpSample_NearestEPhS0_iiii(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiE18insertUncompressedEii */
/* Demangled: Eigen::SparseMatrix<int, 0, int>::insertUncompressed(int, int) */
int _ZN5Eigen12SparseMatrixIiLi0EiE18insertUncompressedEii(void);

/* Symbol: _ZN12GFBufferInfoC2Ev */
/* Demangled: GFBufferInfo::GFBufferInfo() */
int _ZN12GFBufferInfoC2Ev(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEERS2_RKT_(void);

/* Symbol: _ZN19libgf_BilateralGrid25construct_sparse_splat_mpEPvP6rtinfo */
/* Demangled: libgf_BilateralGrid::construct_sparse_splat_mp(void*, rtinfo*) */
int _ZN19libgf_BilateralGrid25construct_sparse_splat_mpEPvP6rtinfo(void);

/* Symbol: _ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::slice(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN5MTKGFD2Ev */
/* Demangled: MTKGF::~MTKGF() */
int _ZN5MTKGFD2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE10lazyAssignINS_13CwiseBinaryOpINS_8internal17scalar_product_opIffEEKS2_KNS_12CwiseUnaryOpINS6_17scalar_inverse_opIfEES9_EEEEEERS2_RKNS_9DenseBaseIT_EE */
/* Demangled: Eigen::Matrix<float, -1, -1, 0, -1, -1>& Eigen::PlainObjectBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::lazyAssign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const> >(Eigen::DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const> > const&) */
int _ZN5Eigen15PlainObjectBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE10lazyAssignINS_13CwiseBinaryOpINS_8internal17scalar_product_opIffEEKS2_KNS_12CwiseUnaryOpINS6_17scalar_inverse_opIfEES9_EEEEEERS2_RKNS_9DenseBaseIT_EE(void);

/* Symbol: _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12SparseMatrixIiLi0EiEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES3_S5_EcvRKS5_Ev */
/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<int, 0, int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> >, Eigen::SparseMatrix<int, 0, int>, Eigen::Matrix<int, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<int, -1, -1, 0, -1, -1> const&() const */
int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12SparseMatrixIiLi0EiEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES3_S5_EcvRKS5_Ev(void);

/* Symbol: _ZTV5MTKGF */
/* Demangled: vtable for MTKGF */
extern void* _ZTV5MTKGF;

/* Symbol: _ZNSt3__124__buffered_inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeE */
/* Demangled: void std::__1::__buffered_inplace_merge<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*) */
int _ZNSt3__124__buffered_inplace_mergeIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_S6_T_NS_15iterator_traitsIS6_E15difference_typeESA_PNS9_10value_typeE(void);

/* Symbol: _ZN6GFCore21initializeTuningParamEP10GFInitInfo */
/* Demangled: GFCore::initializeTuningParam(GFInitInfo*) */
int _ZN6GFCore21initializeTuningParamEP10GFInitInfo(void);

/* Symbol: _ZN19libgf_BilateralGridC2ERKS_ */
/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid(libgf_BilateralGrid const&) */
int _ZN19libgf_BilateralGridC2ERKS_(void);

/* Symbol: _ZTV5AppGF */
/* Demangled: vtable for AppGF */
extern void* _ZTV5AppGF;

/* Symbol: _ZN5Eigen12DenseStorageIfLin1ELin1ELin1ELi0EEC2Elll */
/* Demangled: Eigen::DenseStorage<float, -1, -1, -1, 0>::DenseStorage(long, long, long) */
int _ZN5Eigen12DenseStorageIfLin1ELin1ELin1ELi0EEC2Elll(void);

/* Symbol: _ZN6GFCore11setProcInfoEP10GFProcInfo */
/* Demangled: GFCore::setProcInfo(GFProcInfo*) */
int _ZN6GFCore11setProcInfoEP10GFProcInfo(void);

/* Symbol: _ZN7OccCore9_dump_ppmEiiPKcPhi */
/* Demangled: OccCore::_dump_ppm(int, int, char const*, unsigned char*, int) */
int _ZN7OccCore9_dump_ppmEiiPKcPhi(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZNSt3__113__stable_sortIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeEl */
/* Demangled: void std::__1::__stable_sort<IdxCompareUnique&, std::__1::__wrap_iter<int*> >(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, IdxCompareUnique&, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<int*> >::value_type*, long) */
int _ZNSt3__113__stable_sortIR16IdxCompareUniqueNS_11__wrap_iterIPiEEEEvT0_S6_T_NS_15iterator_traitsIS6_E15difference_typeEPNS9_10value_typeEl(void);

/* Symbol: _ZN7OccCoreC2Ev */
/* Demangled: OccCore::OccCore() */
int _ZN7OccCoreC2Ev(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignIS2_EERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assign<Eigen::SparseMatrix<int, 0, int> >(Eigen::SparseMatrix<int, 0, int> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignIS2_EERS2_RKT_(void);

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIR19IdxCompareUniqueOptPiEEbT0_S4_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<IdxCompareUniqueOpt&, int*>(int*, int*, IdxCompareUniqueOpt&) */
int _ZNSt3__127__insertion_sort_incompleteIR19IdxCompareUniqueOptPiEEbT0_S4_T_(void);

/* Symbol: _ZN21libgf_BilateralSolverD1Ev */
/* Demangled: libgf_BilateralSolver::~libgf_BilateralSolver() */
int _ZN21libgf_BilateralSolverD1Ev(void);

/* Symbol: _ZN6AppOcc4InitEPvS0_ */
/* Demangled: AppOcc::Init(void*, void*) */
int _ZN6AppOcc4InitEPvS0_(void);

/* Symbol: _ZN21libgf_BilateralSolver13bistochastizeERN5Eigen12SparseMatrixIfLi0EiEES3_ */
/* Demangled: libgf_BilateralSolver::bistochastize(Eigen::SparseMatrix<float, 0, int>&, Eigen::SparseMatrix<float, 0, int>&) */
int _ZN21libgf_BilateralSolver13bistochastizeERN5Eigen12SparseMatrixIfLi0EiEES3_(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS1_EEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::SparseMatrix<float, 0, int> const> > const&) */
int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_12CwiseUnaryOpINS_8internal18scalar_multiple_opIfEEKS1_EEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::blur(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid4blurERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal18scalar_quotient_opIffEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEENS_14CwiseNullaryOpINS2_18scalar_constant_opIfEES6_EEEEEaSISA_EERSB_RKNS_9DenseBaseIT_EE */
/* Demangled: Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_quotient_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > >& Eigen::MatrixBase<Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_quotient_op<float, float>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > > >::operator=<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > >(Eigen::DenseBase<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> > > const&) */
int _ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal18scalar_quotient_opIffEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEENS_14CwiseNullaryOpINS2_18scalar_constant_opIfEES6_EEEEEaSISA_EERSB_RKNS_9DenseBaseIT_EE(void);

/* Symbol: _ZN19libgf_BilateralGridC2Ev */
/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid() */
int _ZN19libgf_BilateralGridC2Ev(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS4_18scalar_multiple_opIfEEKNS3_INS4_20scalar_difference_opIfEEKS1_KNS_19SparseSparseProductIRSC_SE_EEEEEESC_EEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> > const&) */
int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS4_18scalar_multiple_opIfEEKNS3_INS4_20scalar_difference_opIfEEKS1_KNS_19SparseSparseProductIRSC_SE_EEEEEESC_EEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN6MTKOccD0Ev */
/* Demangled: MTKOcc::~MTKOcc() */
int _ZN6MTKOccD0Ev(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS6_18scalar_multiple_opIfEEKNS5_INS6_20scalar_difference_opIfEEKS2_KNS_19SparseSparseProductIRSE_SG_EEEEEESE_EEEEvRKT_(void);

/* Symbol: _ZN7OccCore16doBufferDumpYV12EPcPhS1_S1_i */
/* Demangled: OccCore::doBufferDumpYV12(char*, unsigned char*, unsigned char*, unsigned char*, int) */
int _ZN7OccCore16doBufferDumpYV12EPcPhS1_S1_i(void);

/* Symbol: _ZN7OccCore19HoleFill_Dilation_REPhS0_S0_ii */
/* Demangled: OccCore::HoleFill_Dilation_R(unsigned char*, unsigned char*, unsigned char*, int, int) */
int _ZN7OccCore19HoleFill_Dilation_REPhS0_S0_ii(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN5Eigen8internal18conjugate_gradientINS_12SparseMatrixIfLi0EiEENS_5BlockIKNS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS4_IS6_Lin1ELi1ELb1EEENS_22DiagonalPreconditionerIfEEEEvRKT_RKT0_RT1_RKT2_RiRNSI_10RealScalarE */
/* Demangled: void Eigen::internal::conjugate_gradient<Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1> const, -1, 1, true>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>, Eigen::DiagonalPreconditioner<float> >(Eigen::SparseMatrix<float, 0, int> const&, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1> const, -1, 1, true> const&, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>&, Eigen::DiagonalPreconditioner<float> const&, int&, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>::RealScalar&) */
int _ZN5Eigen8internal18conjugate_gradientINS_12SparseMatrixIfLi0EiEENS_5BlockIKNS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS4_IS6_Lin1ELi1ELb1EEENS_22DiagonalPreconditionerIfEEEEvRKT_RKT0_RT1_RKT2_RiRNSI_10RealScalarE(void);

/* Symbol: _ZN5AppGFD2Ev */
/* Demangled: AppGF::~AppGF() */
int _ZN5AppGFD2Ev(void);

/* Symbol: _ZN6GFCoreD1Ev */
/* Demangled: GFCore::~GFCore() */
int _ZN6GFCoreD1Ev(void);

/* Symbol: _ZN16guided_filter_gf10myCombine4EPfS0_S0_S0_ii */
/* Demangled: guided_filter_gf::myCombine4(float*, float*, float*, float*, int, int) */
int _ZN16guided_filter_gf10myCombine4EPfS0_S0_S0_ii(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi1EiE6resizeEii */
/* Demangled: Eigen::SparseMatrix<int, 1, int>::resize(int, int) */
int _ZN5Eigen12SparseMatrixIiLi1EiE6resizeEii(void);

/* Symbol: _ZN7OccCore21HoleFill_Dilation_OCCEPhS0_S0_iii */
/* Demangled: OccCore::HoleFill_Dilation_OCC(unsigned char*, unsigned char*, unsigned char*, int, int, int) */
int _ZN7OccCore21HoleFill_Dilation_OCCEPhS0_S0_iii(void);

/* Symbol: _ZN5AppGFC1Ev */
/* Demangled: AppGF::AppGF() */
int _ZN5AppGFC1Ev(void);

/* Symbol: _ZN6AppOcc5ResetEv */
/* Demangled: AppOcc::Reset() */
int _ZN6AppOcc5ResetEv(void);

/* Symbol: _ZN6GFCore26initializeParseTuningParamEP12GFTuningInfo */
/* Demangled: GFCore::initializeParseTuningParam(GFTuningInfo*) */
int _ZN6GFCore26initializeParseTuningParamEP12GFTuningInfo(void);

/* Symbol: _ZN19libgf_BilateralGrid12_hash_coordsERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::_hash_coords(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid12_hash_coordsERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN16guided_filter_gfD2Ev */
/* Demangled: guided_filter_gf::~guided_filter_gf() */
int _ZN16guided_filter_gfD2Ev(void);

/* Symbol: _ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEENS_5BlockINS1_IfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEEEES7_SA_EERS2_RKNS_11ProductBaseIT_T0_T1_EE */
/* Demangled: Eigen::Matrix<float, -1, 1, 0, -1, 1>& Eigen::MatrixBase<Eigen::Matrix<float, -1, 1, 0, -1, 1> >::lazyAssign<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> >(Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true> > const&) */
int _ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEENS_5BlockINS1_IfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEEEES7_SA_EERS2_RKNS_11ProductBaseIT_T0_T1_EE(void);

/* Symbol: _ZTSSt9bad_alloc */
/* Demangled: typeinfo name for std::bad_alloc */
extern void* _ZTSSt9bad_alloc;

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZN6GFCore13getResultInfoEP12GFResultInfo */
/* Demangled: GFCore::getResultInfo(GFResultInfo*) */
int _ZN6GFCore13getResultInfoEP12GFResultInfo(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6resizeEm */
/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::resize(unsigned long) */
int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6resizeEm(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi1EiE6resizeEii */
/* Demangled: Eigen::SparseMatrix<float, 1, int>::resize(int, int) */
int _ZN5Eigen12SparseMatrixIfLi1EiE6resizeEii(void);

/* Symbol: _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_12SparseMatrixIiLi0EiEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEES9_SB_EcvRKSB_Ev */
/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<float, -1, -1, 0, -1, -1> const&() const */
int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS_12SparseMatrixIiLi0EiEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEEES9_SB_EcvRKSB_Ev(void);

/* Symbol: _ZN19libgf_BilateralGridD1Ev */
/* Demangled: libgf_BilateralGrid::~libgf_BilateralGrid() */
int _ZN19libgf_BilateralGridD1Ev(void);

/* Symbol: _ZN7OccCore11doOccMain2XEv */
/* Demangled: OccCore::doOccMain2X() */
int _ZN7OccCore11doOccMain2XEv(void);

/* Symbol: _ZN6GFCore17WESS_temporal_intEPhS0_S0_S0_dii */
/* Demangled: GFCore::WESS_temporal_int(unsigned char*, unsigned char*, unsigned char*, unsigned char*, double, int, int) */
int _ZN6GFCore17WESS_temporal_intEPhS0_S0_S0_dii(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiEaSERKS1_ */
/* Demangled: Eigen::SparseMatrix<float, 0, int>::operator=(Eigen::SparseMatrix<float, 0, int> const&) */
int _ZN5Eigen12SparseMatrixIfLi0EiEaSERKS1_(void);

/* Symbol: _ZN9AppOccTmp11getInstanceEv */
/* Demangled: AppOccTmp::getInstance() */
int _ZN9AppOccTmp11getInstanceEv(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: _Z10GFPart2_gfPfS_S_S_iiiiiPv */
/* Demangled: GFPart2_gf(float*, float*, float*, float*, int, int, int, int, int, void*) */
int _Z10GFPart2_gfPfS_S_S_iiiiiPv(void);

/* Symbol: _ZN6GFCore5resetEv */
/* Demangled: GFCore::reset() */
int _ZN6GFCore5resetEv(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN16guided_filter_gf10mySubtractEPfS0_S0_ii */
/* Demangled: guided_filter_gf::mySubtract(float*, float*, float*, int, int) */
int _ZN16guided_filter_gf10mySubtractEPfS0_S0_ii(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assignGeneric<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE13assignGenericINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEEvRKT_(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE10deallocateEv */
/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::deallocate() */
int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE10deallocateEv(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi1EiE15sumupDuplicatesEv */
/* Demangled: Eigen::SparseMatrix<int, 1, int>::sumupDuplicates() */
int _ZN5Eigen12SparseMatrixIiLi1EiE15sumupDuplicatesEv(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericIS2_EEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrix<float, 0, int> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericIS2_EEvRKT_(void);

/* Symbol: _ZN5Eigen8internal46sparse_cwise_binary_op_inner_iterator_selectorINS0_13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS0_18scalar_multiple_opIfEEKNS_13CwiseBinaryOpINS0_20scalar_difference_opIfEEKNS_12SparseMatrixIfLi0EiEEKNS_19SparseSparseProductIRSC_SE_EEEEEESC_NS_17CwiseBinaryOpImplIS3_SK_SC_NS_6SparseEE13InnerIteratorESM_SM_EppEv */
/* Demangled: Eigen::internal::sparse_cwise_binary_op_inner_iterator_selector<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const, Eigen::CwiseBinaryOpImpl<Eigen::internal::scalar_sum_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&> const> const> const, Eigen::SparseMatrix<float, 0, int> const, Eigen::Sparse>::InnerIterator, Eigen::Sparse, Eigen::Sparse>::operator++() */
int _ZN5Eigen8internal46sparse_cwise_binary_op_inner_iterator_selectorINS0_13scalar_sum_opIfEEKNS_12CwiseUnaryOpINS0_18scalar_multiple_opIfEEKNS_13CwiseBinaryOpINS0_20scalar_difference_opIfEEKNS_12SparseMatrixIfLi0EiEEKNS_19SparseSparseProductIRSC_SE_EEEEEESC_NS_17CwiseBinaryOpImplIS3_SK_SC_NS_6SparseEE13InnerIteratorESM_SM_EppEv(void);

/* Symbol: _ZZN5Eigen8internal20manage_caching_sizesENS_6ActionEPlS2_E13m_l2CacheSize */
/* Demangled: Eigen::internal::manage_caching_sizes(Eigen::Action, long*, long*)::m_l2CacheSize */
extern void* _ZZN5Eigen8internal20manage_caching_sizesENS_6ActionEPlS2_E13m_l2CacheSize;

/* Symbol: _ZN7OccCore11simple_log2Ej */
/* Demangled: OccCore::simple_log2(unsigned int) */
int _ZN7OccCore11simple_log2Ej(void);

/* Symbol: _ZN7OccCore12doBufferReadEPcPhi */
/* Demangled: OccCore::doBufferRead(char*, unsigned char*, int) */
int _ZN7OccCore12doBufferReadEPcPhi(void);

/* Symbol: _ZN6GFCore11WMF2WMI_PELEPhS0_iiii */
/* Demangled: GFCore::WMF2WMI_PEL(unsigned char*, unsigned char*, int, int, int, int) */
int _ZN6GFCore11WMF2WMI_PELEPhS0_iiii(void);

/* Symbol: _ZN5Eigen12DenseStorageIfLin1ELin1ELi1ELi0EEC2Elll */
/* Demangled: Eigen::DenseStorage<float, -1, -1, 1, 0>::DenseStorage(long, long, long) */
int _ZN5Eigen12DenseStorageIfLin1ELin1ELi1ELi0EEC2Elll(void);

/* Symbol: _ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2ERKS1_ */
/* Demangled: Eigen::Matrix<int, -1, -1, 0, -1, -1>::Matrix(Eigen::Matrix<int, -1, -1, 0, -1, -1> const&) */
int _ZN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEC2ERKS1_(void);

/* Symbol: _ZN5AppGF4MainEv */
/* Demangled: AppGF::Main() */
int _ZN5AppGF4MainEv(void);

/* Symbol: _ZN7OccCore12doBufferDumpEPcPsi */
/* Demangled: OccCore::doBufferDump(char*, short*, int) */
int _ZN7OccCore12doBufferDumpEPcPsi(void);

/* Symbol: _ZN12GFBufferInfoC1Ev */
/* Demangled: GFBufferInfo::GFBufferInfo() */
int _ZN12GFBufferInfoC1Ev(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assignGeneric<Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseUnaryOp<Eigen::internal::scalar_cast_op<int, float>, Eigen::SparseMatrix<int, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE13assignGenericINS_12CwiseUnaryOpINS_8internal14scalar_cast_opIifEEKNS1_IiLi0EiEEEEEEvRKT_(void);

/* Symbol: _ZN9libgf_FBS9uninitTPQEv */
/* Demangled: libgf_FBS::uninitTPQ() */
int _ZN9libgf_FBS9uninitTPQEv(void);

/* Symbol: _ZN19libgf_BilateralGrid22_compute_factorizationERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::_compute_factorization(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid22_compute_factorizationERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN7OccCore12DepthErosionEPhS0_ii */
/* Demangled: OccCore::DepthErosion(unsigned char*, unsigned char*, int, int) */
int _ZN7OccCore12DepthErosionEPhS0_ii(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN6GFCore7Clip_gfEi */
/* Demangled: GFCore::Clip_gf(int) */
int _ZN6GFCore7Clip_gfEi(void);

/* Symbol: _ZN19libgf_BilateralGrid26_compute_factorization_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::_compute_factorization_opt(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid26_compute_factorization_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::splat(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN5Eigen9DenseBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKf */
/* Demangled: Eigen::DenseBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::setConstant(float const&) */
int _ZN5Eigen9DenseBaseINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKf(void);

/* Symbol: _ZN5Eigen8internal13gemm_pack_rhsIilLi2ELi0ELb0ELb0EEclEPiPKilllll */
/* Demangled: Eigen::internal::gemm_pack_rhs<int, long, 2, 0, false, false>::operator()(int*, int const*, long, long, long, long, long) */
int _ZN5Eigen8internal13gemm_pack_rhsIilLi2ELi0ELb0ELb0EEclEPiPKilllll(void);

/* Symbol: _ZN19libgf_BilateralGridC1E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_ */
/* Demangled: libgf_BilateralGrid::libgf_BilateralGrid(GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int, tpq_*) */
int _ZN19libgf_BilateralGridC1E17GF_IMAGE_FMT_ENUMPhS1_S1_iiiiiP4tpq_(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen7TripletIfiEENS_9allocatorIS3_EEE7reserveEm */
/* Demangled: std::__1::vector<Eigen::Triplet<float, int>, std::__1::allocator<Eigen::Triplet<float, int> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5Eigen7TripletIfiEENS_9allocatorIS3_EEE7reserveEm(void);

/* Symbol: _ZN5Eigen8internal29general_matrix_matrix_productIliLi0ELb0EiLi0ELb0ELi0EE3runElllPKilS4_lPiliRNS0_15level3_blockingIiiEEPNS0_16GemmParallelInfoIlEE */
/* Demangled: Eigen::internal::general_matrix_matrix_product<long, int, 0, false, int, 0, false, 0>::run(long, long, long, int const*, long, int const*, long, int*, long, int, Eigen::internal::level3_blocking<int, int>&, Eigen::internal::GemmParallelInfo<long>*) */
int _ZN5Eigen8internal29general_matrix_matrix_productIliLi0ELb0EiLi0ELb0ELi0EE3runElllPKilS4_lPiliRNS0_15level3_blockingIiiEEPNS0_16GemmParallelInfoIlEE(void);

/* Symbol: _ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEE6resizeEll */
/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<int, -1, 1, 0, -1, 1> >::resize(long, long) */
int _ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEE6resizeEll(void);

/* Symbol: _ZN16guided_filter_gf5myAddEPffS0_ii */
/* Demangled: guided_filter_gf::myAdd(float*, float, float*, int, int) */
int _ZN16guided_filter_gf5myAddEPffS0_ii(void);

/* Symbol: rightDivTbl */
/* Demangled: rightDivTbl */
extern void* rightDivTbl;

/* Symbol: _ZN19libgf_BilateralGrid10unique_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_ */
/* Demangled: libgf_BilateralGrid::unique_opt(Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN19libgf_BilateralGrid10unique_optERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_(void);

/* Symbol: _ZN5AppGFD1Ev */
/* Demangled: AppGF::~AppGF() */
int _ZN5AppGFD1Ev(void);

/* Symbol: _ZN6GFCore17ConvertYUY2toI422EiiiPKhPhS2_S2_i */
/* Demangled: GFCore::ConvertYUY2toI422(int, int, int, unsigned char const*, unsigned char*, unsigned char*, unsigned char*, int) */
int _ZN6GFCore17ConvertYUY2toI422EiiiPKhPhS2_S2_i(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN6GFCore17BoundaryExtensionEPhS0_S0_17GF_IMAGE_FMT_ENUMS0_S0_S0_S0_ii */
/* Demangled: GFCore::BoundaryExtension(unsigned char*, unsigned char*, unsigned char*, GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, int) */
int _ZN6GFCore17BoundaryExtensionEPhS0_S0_17GF_IMAGE_FMT_ENUMS0_S0_S0_S0_ii(void);

/* Symbol: _ZN6AppOcc15destroyInstanceEP6MTKOcc */
/* Demangled: AppOcc::destroyInstance(MTKOcc*) */
int _ZN6AppOcc15destroyInstanceEP6MTKOcc(void);

/* Symbol: _ZN5Eigen8internal43conservative_sparse_sparse_product_selectorINS_12SparseMatrixIfLi0EiEES3_S3_Li0ELi0ELi0EE3runERKS3_S6_RS3_ */
/* Demangled: Eigen::internal::conservative_sparse_sparse_product_selector<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int>, 0, 0, 0>::run(Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int> const&, Eigen::SparseMatrix<float, 0, int>&) */
int _ZN5Eigen8internal43conservative_sparse_sparse_product_selectorINS_12SparseMatrixIfLi0EiEES3_S3_Li0ELi0ELi0EE3runERKS3_S6_RS3_(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiE6resizeEii */
/* Demangled: Eigen::SparseMatrix<int, 0, int>::resize(int, int) */
int _ZN5Eigen12SparseMatrixIiLi0EiE6resizeEii(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN7OccCore19HoleFill_Dilation_LEPhS0_S0_ii */
/* Demangled: OccCore::HoleFill_Dilation_L(unsigned char*, unsigned char*, unsigned char*, int, int) */
int _ZN7OccCore19HoleFill_Dilation_LEPhS0_S0_ii(void);

/* Symbol: _ZN7OccCoreC1Ev */
/* Demangled: OccCore::OccCore() */
int _ZN7OccCoreC1Ev(void);

/* Symbol: _ZN16guided_filter_gf10myCombine3EPfS0_S0_S0_ii */
/* Demangled: guided_filter_gf::myCombine3(float*, float*, float*, float*, int, int) */
int _ZN16guided_filter_gf10myCombine3EPfS0_S0_S0_ii(void);

/* Symbol: _ZTV16guided_filter_gf */
/* Demangled: vtable for guided_filter_gf */
extern void* _ZTV16guided_filter_gf;

/* Symbol: _ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::slice(Eigen::Matrix<int, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid5sliceERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN19libgf_BilateralGrid6uniqueERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_ */
/* Demangled: libgf_BilateralGrid::unique(Eigen::Matrix<int, -1, -1, 0, -1, -1>&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN19libgf_BilateralGrid6uniqueERN5Eigen6MatrixIiLin1ELin1ELi0ELin1ELin1EEERNSt3__16vectorIiNS4_9allocatorIiEEEES9_S9_(void);

/* Symbol: _ZN7OccCore6UnPkDVEPsS0_P8DVEC_OCCS2_ */
/* Demangled: OccCore::UnPkDV(short*, short*, DVEC_OCC*, DVEC_OCC*) */
int _ZN7OccCore6UnPkDVEPsS0_P8DVEC_OCCS2_(void);

/* Symbol: _ZN7OccCore21initializeTuningParamEP11OccInitInfo */
/* Demangled: OccCore::initializeTuningParam(OccInitInfo*) */
int _ZN7OccCore21initializeTuningParamEP11OccInitInfo(void);

/* Symbol: _ZN5MTKGF4InitEPvS0_ */
/* Demangled: MTKGF::Init(void*, void*) */
int _ZN5MTKGF4InitEPvS0_(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_9TransposeINS_12SparseMatrixIiLi0EiEEEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES5_S7_EcvRKS7_Ev */
/* Demangled: Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> >, Eigen::Matrix<int, -1, -1, 0, -1, -1> >, Eigen::Transpose<Eigen::SparseMatrix<int, 0, int> >, Eigen::Matrix<int, -1, -1, 0, -1, -1> >::operator Eigen::Matrix<int, -1, -1, 0, -1, -1> const&() const */
int _ZNK5Eigen11ProductBaseINS_22SparseTimeDenseProductINS_9TransposeINS_12SparseMatrixIiLi0EiEEEENS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEEES5_S7_EcvRKS7_Ev(void);

/* Symbol: _ZN6GFCore23Refocus_Core_New_HW_PELEv */
/* Demangled: GFCore::Refocus_Core_New_HW_PEL() */
int _ZN6GFCore23Refocus_Core_New_HW_PELEv(void);

/* Symbol: _ZN5MTKGF5ResetEv */
/* Demangled: MTKGF::Reset() */
int _ZN5MTKGF5ResetEv(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_ */
/* Demangled: void Eigen::SparseMatrix<int, 1, int>::reserveInnerVectors<Eigen::Matrix<int, -1, 1, 0, -1, 1> >(Eigen::Matrix<int, -1, 1, 0, -1, 1> const&) */
int _ZN5Eigen12SparseMatrixIiLi1EiE19reserveInnerVectorsINS_6MatrixIiLin1ELi1ELi0ELin1ELi1EEEEEvRKT_(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: _ZN6GFCore21DownSample_Nearest_2XEPhS0_iiiii */
/* Demangled: GFCore::DownSample_Nearest_2X(unsigned char*, unsigned char*, int, int, int, int, int) */
int _ZN6GFCore21DownSample_Nearest_2XEPhS0_iiiii(void);

/* Symbol: _ZN21libgf_BilateralSolver5solveERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEES3_ */
/* Demangled: libgf_BilateralSolver::solve(Eigen::Matrix<float, -1, -1, 0, -1, -1>&, Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
int _ZN21libgf_BilateralSolver5solveERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEES3_(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN6GFCoreC1Ev */
/* Demangled: GFCore::GFCore() */
int _ZN6GFCoreC1Ev(void);

/* Symbol: _ZN6GFCoreD2Ev */
/* Demangled: GFCore::~GFCore() */
int _ZN6GFCoreD2Ev(void);

/* Symbol: _ZN21libgf_BilateralSolverC2ER19libgf_BilateralGridiffi */
/* Demangled: libgf_BilateralSolver::libgf_BilateralSolver(libgf_BilateralGrid&, int, float, float, int) */
int _ZN21libgf_BilateralSolverC2ER19libgf_BilateralGridiffi(void);

/* Symbol: _ZN7OccCore19getBufferSizeNeededEv */
/* Demangled: OccCore::getBufferSizeNeeded() */
int _ZN7OccCore19getBufferSizeNeededEv(void);

/* Symbol: _ZN5Eigen8internal13gemm_pack_lhsIilLi8ELi4ELi0ELb0ELb0EEclEPiPKilllll */
/* Demangled: Eigen::internal::gemm_pack_lhs<int, long, 8, 4, 0, false, false>::operator()(int*, int const*, long, long, long, long, long) */
int _ZN5Eigen8internal13gemm_pack_lhsIilLi8ELi4ELi0ELb0ELb0EEclEPiPKilllll(void);

/* Symbol: _ZN19libgf_BilateralGrid4blurERN5Eigen12SparseMatrixIfLi0EiEE */
/* Demangled: libgf_BilateralGrid::blur(Eigen::SparseMatrix<float, 0, int>&) */
int _ZN19libgf_BilateralGrid4blurERN5Eigen12SparseMatrixIfLi0EiEE(void);

/* Symbol: _ZTV6MTKOcc */
/* Demangled: vtable for MTKOcc */
extern void* _ZTV6MTKOcc;

/* Symbol: _ZN6GFCore9Depth_diaEPhS0_S0_i */
/* Demangled: GFCore::Depth_dia(unsigned char*, unsigned char*, unsigned char*, int) */
int _ZN6GFCore9Depth_diaEPhS0_S0_i(void);

/* Symbol: _ZNSt3__17__sort4IR19IdxCompareUniqueOptPiEEjT0_S4_S4_S4_T_ */
/* Demangled: unsigned int std::__1::__sort4<IdxCompareUniqueOpt&, int*>(int*, int*, int*, int*, IdxCompareUniqueOpt&) */
int _ZNSt3__17__sort4IR19IdxCompareUniqueOptPiEEjT0_S4_S4_S4_T_(void);

/* Symbol: _ZN9libgf_FBSD1Ev */
/* Demangled: libgf_FBS::~libgf_FBS() */
int _ZN9libgf_FBSD1Ev(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiEaSERKS1_ */
/* Demangled: Eigen::SparseMatrix<int, 0, int>::operator=(Eigen::SparseMatrix<int, 0, int> const&) */
int _ZN5Eigen12SparseMatrixIiLi0EiEaSERKS1_(void);

/* Symbol: _ZTV6AppOcc */
/* Demangled: vtable for AppOcc */
extern void* _ZTV6AppOcc;

/* Symbol: _ZN5AppGF11FeatureCtrlEjPvS0_ */
/* Demangled: AppGF::FeatureCtrl(unsigned int, void*, void*) */
int _ZN5AppGF11FeatureCtrlEjPvS0_(void);

/* Symbol: _ZNK5Eigen14GeneralProductINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEES2_Li5EE13scaleAndAddToIS2_EEvRT_RKi */
/* Demangled: void Eigen::GeneralProduct<Eigen::Matrix<int, -1, -1, 0, -1, -1>, Eigen::Matrix<int, -1, -1, 0, -1, -1>, 5>::scaleAndAddTo<Eigen::Matrix<int, -1, -1, 0, -1, -1> >(Eigen::Matrix<int, -1, -1, 0, -1, -1>&, int const&) const */
int _ZNK5Eigen14GeneralProductINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEES2_Li5EE13scaleAndAddToIS2_EEvRT_RKi(void);

/* Symbol: _ZN16guided_filter_gfclEPhS0_S0_iiiif */
/* Demangled: guided_filter_gf::operator()(unsigned char*, unsigned char*, unsigned char*, int, int, int, int, float) */
int _ZN16guided_filter_gfclEPhS0_S0_iiiif(void);

/* Symbol: _ZN6GFCore9Depth_MDAEPhS0_S0_S0_ */
/* Demangled: GFCore::Depth_MDA(unsigned char*, unsigned char*, unsigned char*, unsigned char*) */
int _ZN6GFCore9Depth_MDAEPhS0_S0_S0_(void);

/* Symbol: _ZN6MTKOcc14createInstanceE14DRVOccObject_s */
/* Demangled: MTKOcc::createInstance(DRVOccObject_s) */
int _ZN6MTKOcc14createInstanceE14DRVOccObject_s(void);

/* Symbol: _ZN9libgf_FBS13out_of_memoryEii */
/* Demangled: libgf_FBS::out_of_memory(int, int) */
int _ZN9libgf_FBS13out_of_memoryEii(void);

/* Symbol: _ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEES2_EES7_S2_EERS2_RKNS_11ProductBaseIT_T0_T1_EE */
/* Demangled: Eigen::Matrix<float, -1, 1, 0, -1, 1>& Eigen::MatrixBase<Eigen::Matrix<float, -1, 1, 0, -1, 1> >::lazyAssign<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> >(Eigen::ProductBase<Eigen::SparseTimeDenseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> >, Eigen::SparseMatrix<float, 0, int>, Eigen::Matrix<float, -1, 1, 0, -1, 1> > const&) */
int _ZN5Eigen10MatrixBaseINS_6MatrixIfLin1ELi1ELi0ELin1ELi1EEEE10lazyAssignINS_22SparseTimeDenseProductINS_12SparseMatrixIfLi0EiEES2_EES7_S2_EERS2_RKNS_11ProductBaseIT_T0_T1_EE(void);

/* Symbol: _ZNK5Eigen8internal23solve_retval_with_guessINS_17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES9_E6evalToIS9_EEvRT_ */
/* Demangled: void Eigen::internal::solve_retval_with_guess<Eigen::ConjugateGradient<Eigen::SparseMatrix<float, 0, int>, 3, Eigen::DiagonalPreconditioner<float> >, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >::evalTo<Eigen::Matrix<float, -1, -1, 0, -1, -1> >(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) const */
int _ZNK5Eigen8internal23solve_retval_with_guessINS_17ConjugateGradientINS_12SparseMatrixIfLi0EiEELi3ENS_22DiagonalPreconditionerIfEEEENS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES9_E6evalToIS9_EEvRT_(void);

/* Symbol: _ZN7OccCoreD1Ev */
/* Demangled: OccCore::~OccCore() */
int _ZN7OccCoreD1Ev(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi1EiE15sumupDuplicatesEv */
/* Demangled: Eigen::SparseMatrix<float, 1, int>::sumupDuplicates() */
int _ZN5Eigen12SparseMatrixIfLi1EiE15sumupDuplicatesEv(void);

/* Symbol: _ZN16guided_filter_gf12ensureBufferEii */
/* Demangled: guided_filter_gf::ensureBuffer(int, int) */
int _ZN16guided_filter_gf12ensureBufferEii(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS1_S7_EEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrix<int, 0, int>::operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> > const&) */
int _ZN5Eigen12SparseMatrixIiLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS1_S7_EEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN6GFCore8IIR32_gfEPiiS0_i */
/* Demangled: GFCore::IIR32_gf(int*, int, int*, int) */
int _ZN6GFCore8IIR32_gfEPiiS0_i(void);

/* Symbol: _ZN16guided_filter_gf10myMultiplyEPfS0_S0_ii */
/* Demangled: guided_filter_gf::myMultiply(float*, float*, float*, int, int) */
int _ZN16guided_filter_gf10myMultiplyEPfS0_S0_ii(void);

/* Symbol: _ZN19libgf_BilateralGridaSERKS_ */
/* Demangled: libgf_BilateralGrid::operator=(libgf_BilateralGrid const&) */
int _ZN19libgf_BilateralGridaSERKS_(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS1_KNS_19SparseSparseProductIS1_RS7_EEEEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrix<float, 0, int>::operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> >(Eigen::SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> > const&) */
int _ZN5Eigen12SparseMatrixIfLi0EiEaSINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS1_KNS_19SparseSparseProductIS1_RS7_EEEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN6GFCore16doBufferDumpYV12EPcPhS1_S1_i */
/* Demangled: GFCore::doBufferDumpYV12(char*, unsigned char*, unsigned char*, unsigned char*, int) */
int _ZN6GFCore16doBufferDumpYV12EPcPhS1_S1_i(void);

/* Symbol: _ZN5Eigen9DenseBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKi */
/* Demangled: Eigen::DenseBase<Eigen::Matrix<int, -1, -1, 0, -1, -1> >::setConstant(int const&) */
int _ZN5Eigen9DenseBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE11setConstantERKi(void);

/* Symbol: _ZN7OccCore11WMF2WMI_NEWEPhS0_iiii */
/* Demangled: OccCore::WMF2WMI_NEW(unsigned char*, unsigned char*, int, int, int, int) */
int _ZN7OccCore11WMF2WMI_NEWEPhS0_iiii(void);

/* Symbol: _ZN6GFCore16GenConfidenceMapEPhS0_S0_iiiiii */
/* Demangled: GFCore::GenConfidenceMap(unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int, int) */
int _ZN6GFCore16GenConfidenceMapEPhS0_S0_iiiiii(void);

/* Symbol: _ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE */
/* Demangled: libgf_BilateralGrid::splat(Eigen::Matrix<float, -1, -1, 0, -1, -1>&) */
int _ZN19libgf_BilateralGrid5splatERN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEE(void);

/* Symbol: _ZN16guided_filter_gf10myCombine2EPfS0_S0_S0_fS0_S0_ii */
/* Demangled: guided_filter_gf::myCombine2(float*, float*, float*, float*, float, float*, float*, int, int) */
int _ZN16guided_filter_gf10myCombine2EPfS0_S0_S0_fS0_S0_ii(void);

/* Symbol: _ZN5Eigen8internal11gebp_kernelIiilLi8ELi2ELb0ELb0EEclEPilPKiS5_lllillllS3_ */
/* Demangled: Eigen::internal::gebp_kernel<int, int, long, 8, 2, false, false>::operator()(int*, long, int const*, int const*, long, long, long, int, long, long, long, long, int*) */
int _ZN5Eigen8internal11gebp_kernelIiilLi8ELi2ELb0ELb0EEclEPilPKiS5_lllillllS3_(void);

/* Symbol: _ZN10GFInitInfoC1Ev */
/* Demangled: GFInitInfo::GFInitInfo() */
int _ZN10GFInitInfoC1Ev(void);

/* Symbol: _ZN6GFCore32Depth_Post_Processing_New_HW_PELEv */
/* Demangled: GFCore::Depth_Post_Processing_New_HW_PEL() */
int _ZN6GFCore32Depth_Post_Processing_New_HW_PELEv(void);

/* Symbol: _ZN16guided_filter_gf13releaseBufferEv */
/* Demangled: guided_filter_gf::releaseBuffer() */
int _ZN16guided_filter_gf13releaseBufferEv(void);

/* Symbol: _ZN16guided_filter_gfclEPfS0_S0_iiiif */
/* Demangled: guided_filter_gf::operator()(float*, float*, float*, int, int, int, int, float) */
int _ZN16guided_filter_gfclEPfS0_S0_iiiif(void);

/* Symbol: _ZN5Eigen12SparseMatrixIiLi0EiEaSINS0_IiLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrix<int, 0, int>::operator=<Eigen::SparseMatrix<int, 1, int> >(Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 1, int> > const&) */
int _ZN5Eigen12SparseMatrixIiLi0EiEaSINS0_IiLi1EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::reserve(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm(void);

/* Symbol: _ZN7OccCore26initializeParseTuningParamEP13OccTuningInfo */
/* Demangled: OccCore::initializeParseTuningParam(OccTuningInfo*) */
int _ZN7OccCore26initializeParseTuningParamEP13OccTuningInfo(void);

/* Symbol: _ZN6GFCore21Depth_Smooth_flexibleEPhS0_iiS0_ */
/* Demangled: GFCore::Depth_Smooth_flexible(unsigned char*, unsigned char*, int, int, unsigned char*) */
int _ZN6GFCore21Depth_Smooth_flexibleEPhS0_iiS0_(void);

/* Symbol: _ZN5Eigen22DiagonalPreconditionerIfE9factorizeINS_12SparseMatrixIfLi0EiEEEERS1_RKT_ */
/* Demangled: Eigen::DiagonalPreconditioner<float>& Eigen::DiagonalPreconditioner<float>::factorize<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrix<float, 0, int> const&) */
int _ZN5Eigen22DiagonalPreconditionerIfE9factorizeINS_12SparseMatrixIfLi0EiEEEERS1_RKT_(void);

/* Symbol: _ZN16guided_filter_gf9setBufferEPh */
/* Demangled: guided_filter_gf::setBuffer(unsigned char*) */
int _ZN16guided_filter_gf9setBufferEPh(void);

/* Symbol: _ZN5MTKGF14createInstanceE14DRVOccObject_s */
/* Demangled: MTKGF::createInstance(DRVOccObject_s) */
int _ZN5MTKGF14createInstanceE14DRVOccObject_s(void);

/* Symbol: _ZN7OccCore9LDC_idealEiiPhS0_S0_ */
/* Demangled: OccCore::LDC_ideal(int, int, unsigned char*, unsigned char*, unsigned char*) */
int _ZN7OccCore9LDC_idealEiiPhS0_S0_(void);

/* Symbol: _ZN6GFCore12doBufferReadEPcPhi */
/* Demangled: GFCore::doBufferRead(char*, unsigned char*, int) */
int _ZN6GFCore12doBufferReadEPcPhi(void);

/* Symbol: _ZN6GFCore26BM_extendTableByCtrlPointsEPhPiS1_i */
/* Demangled: GFCore::BM_extendTableByCtrlPoints(unsigned char*, int*, int*, int) */
int _ZN6GFCore26BM_extendTableByCtrlPointsEPhPiS1_i(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: _ZN6GFCore11setupBufferEP10GFInitInfo */
/* Demangled: GFCore::setupBuffer(GFInitInfo*) */
int _ZN6GFCore11setupBufferEP10GFInitInfo(void);

/* Symbol: _ZN5MTKGF4MainEv */
/* Demangled: MTKGF::Main() */
int _ZN5MTKGF4MainEv(void);

/* Symbol: _ZN6AppOccD2Ev */
/* Demangled: AppOcc::~AppOcc() */
int _ZN6AppOccD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEEC2ERKS6_ */
/* Demangled: std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > >::vector(std::__1::vector<Eigen::SparseMatrix<int, 0, int>, std::__1::allocator<Eigen::SparseMatrix<int, 0, int> > > const&) */
int _ZNSt3__16vectorIN5Eigen12SparseMatrixIiLi0EiEENS_9allocatorIS3_EEEC2ERKS6_(void);

/* Symbol: _ZN16guided_filter_gf8myDivideEPfS0_S0_ii */
/* Demangled: guided_filter_gf::myDivide(float*, float*, float*, int, int) */
int _ZN16guided_filter_gf8myDivideEPfS0_S0_ii(void);

/* Symbol: _ZN6AppOccC1Ev */
/* Demangled: AppOcc::AppOcc() */
int _ZN6AppOccC1Ev(void);

/* Symbol: _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2ERKS1_ */
/* Demangled: Eigen::Matrix<float, -1, -1, 0, -1, -1>::Matrix(Eigen::Matrix<float, -1, -1, 0, -1, -1> const&) */
int _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2ERKS1_(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN16guided_filter_gf11myBoxFilterEPfS0_iiii */
/* Demangled: guided_filter_gf::myBoxFilter(float*, float*, int, int, int, int) */
int _ZN16guided_filter_gf11myBoxFilterEPfS0_iiii(void);

/* Symbol: _ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal13scalar_sum_opIfEENS_5BlockINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS_12CwiseUnaryOpINS2_18scalar_multiple_opIfEEKNS6_IfLin1ELi1ELi0ELin1ELi1EEEEEEEEaSISE_EERSF_RKNS_9DenseBaseIT_EE */
/* Demangled: Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> >& Eigen::MatrixBase<Eigen::SelfCwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, 1, true>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> > >::operator=<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> >(Eigen::DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_multiple_op<float>, Eigen::Matrix<float, -1, 1, 0, -1, 1> const> > const&) */
int _ZN5Eigen10MatrixBaseINS_17SelfCwiseBinaryOpINS_8internal13scalar_sum_opIfEENS_5BlockINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEELin1ELi1ELb1EEENS_12CwiseUnaryOpINS2_18scalar_multiple_opIfEEKNS6_IfLin1ELi1ELi0ELin1ELi1EEEEEEEEaSISE_EERSF_RKNS_9DenseBaseIT_EE(void);

/* Symbol: _ZN6GFCore13BM_initTablesEP10GFInitInfo */
/* Demangled: GFCore::BM_initTables(GFInitInfo*) */
int _ZN6GFCore13BM_initTablesEP10GFInitInfo(void);

/* Symbol: _ZN5Eigen12SparseMatrixIfLi1EiEaSINS0_IfLi0EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE */
/* Demangled: Eigen::SparseMatrix<float, 1, int>& Eigen::SparseMatrix<float, 1, int>::operator=<Eigen::SparseMatrix<float, 0, int> >(Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> > const&) */
int _ZN5Eigen12SparseMatrixIfLi1EiEaSINS0_IfLi0EiEEEERS1_RKNS_16SparseMatrixBaseIT_EE(void);

/* Symbol: _ZN9libgf_FBS19FastBilateralSolverE17GF_IMAGE_FMT_ENUMPhS1_S1_S1_S1_S1_iiiiffiiii */
/* Demangled: libgf_FBS::FastBilateralSolver(GF_IMAGE_FMT_ENUM, unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, float, float, int, int, int, int) */
int _ZN9libgf_FBS19FastBilateralSolverE17GF_IMAGE_FMT_ENUMPhS1_S1_S1_S1_S1_iiiiffiiii(void);

/* Symbol: _ZN5AppGFD0Ev */
/* Demangled: AppGF::~AppGF() */
int _ZN5AppGFD0Ev(void);

/* Symbol: _ZN7OccCore11setProcInfoEP11OccProcInfo */
/* Demangled: OccCore::setProcInfo(OccProcInfo*) */
int _ZN7OccCore11setProcInfoEP11OccProcInfo(void);

/* Symbol: _ZN7OccCore12doBufferDumpEPcPhi */
/* Demangled: OccCore::doBufferDump(char*, unsigned char*, int) */
int _ZN7OccCore12doBufferDumpEPcPhi(void);

/* Symbol: _ZN16guided_filter_gf5myAddEPfS0_S0_ii */
/* Demangled: guided_filter_gf::myAdd(float*, float*, float*, int, int) */
int _ZN16guided_filter_gf5myAddEPfS0_S0_ii(void);

/* Symbol: _ZN5Eigen8internal17CompressedStorageIfiE6resizeEmd */
/* Demangled: Eigen::internal::CompressedStorage<float, int>::resize(unsigned long, double) */
int _ZN5Eigen8internal17CompressedStorageIfiE6resizeEmd(void);

/* Symbol: _ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIiiEEEENS_12SparseMatrixIiLi0EiEEEEvRKT_SC_RT0_i */
/* Demangled: void Eigen::internal::set_from_triplets<std::__1::__wrap_iter<Eigen::Triplet<int, int>*>, Eigen::SparseMatrix<int, 0, int> >(std::__1::__wrap_iter<Eigen::Triplet<int, int>*> const&, std::__1::__wrap_iter<Eigen::Triplet<int, int>*> const&, Eigen::SparseMatrix<int, 0, int>&, int) */
int _ZN5Eigen8internal17set_from_tripletsINSt3__111__wrap_iterIPNS_7TripletIiiEEEENS_12SparseMatrixIiLi0EiEEEEvRKT_SC_RT0_i(void);

/* Symbol: _ZN6GFCore7ClipABCEiii */
/* Demangled: GFCore::ClipABC(int, int, int) */
int _ZN6GFCore7ClipABCEiii(void);

/* Symbol: _ZN7OccCore11setupBufferEP11OccInitInfo */
/* Demangled: OccCore::setupBuffer(OccInitInfo*) */
int _ZN7OccCore11setupBufferEP11OccInitInfo(void);

/* Symbol: _ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE6resizeEll */
/* Demangled: Eigen::PlainObjectBase<Eigen::Matrix<int, -1, -1, 0, -1, -1> >::resize(long, long) */
int _ZN5Eigen15PlainObjectBaseINS_6MatrixIiLin1ELin1ELi0ELin1ELin1EEEE6resizeEll(void);

/* Symbol: _ZN6GFCore13filterWrapperEPvP6rtinfo */
/* Demangled: GFCore::filterWrapper(void*, rtinfo*) */
int _ZN6GFCore13filterWrapperEPvP6rtinfo(void);

/* Symbol: _ZN6GFCore21Depth_Core_New_HW_PELE12GF_MODE_ENUM */
/* Demangled: GFCore::Depth_Core_New_HW_PEL(GF_MODE_ENUM) */
int _ZN6GFCore21Depth_Core_New_HW_PELE12GF_MODE_ENUM(void);

/* Symbol: _ZN7OccCore16TexturelessCountEPhiiiiiii */
/* Demangled: OccCore::TexturelessCount(unsigned char*, int, int, int, int, int, int, int) */
int _ZN7OccCore16TexturelessCountEPhiiiiiii(void);

/* Symbol: _ZN7OccCore12CropBoundaryEiiiiPiPh */
/* Demangled: OccCore::CropBoundary(int, int, int, int, int*, unsigned char*) */
int _ZN7OccCore12CropBoundaryEiiiiPiPh(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<float, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<float, 0, int> >::assign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float>, Eigen::SparseMatrix<float, 0, int> const, Eigen::SparseSparseProduct<Eigen::SparseMatrix<float, 0, int>, Eigen::SparseMatrix<float, 0, int> const&> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIfLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIfEEKS2_KNS_19SparseSparseProductIS2_RS9_EEEEEERS2_RKT_(void);

/* Symbol: _ZN5AppGF11getInstanceEv */
/* Demangled: AppGF::getInstance() */
int _ZN5AppGF11getInstanceEv(void);

/* Symbol: _ZN19libgf_BilateralGrid7blur_mpEPvP6rtinfo */
/* Demangled: libgf_BilateralGrid::blur_mp(void*, rtinfo*) */
int _ZN19libgf_BilateralGrid7blur_mpEPvP6rtinfo(void);

/* Symbol: _ZN7OccCore15CropBoundary_UVEiiiiPhS0_ */
/* Demangled: OccCore::CropBoundary_UV(int, int, int, int, unsigned char*, unsigned char*) */
int _ZN7OccCore15CropBoundary_UVEiiiiPhS0_(void);

/* Symbol: _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEERS2_RKT_ */
/* Demangled: Eigen::SparseMatrix<int, 0, int>& Eigen::SparseMatrixBase<Eigen::SparseMatrix<int, 0, int> >::assign<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> >(Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<int>, Eigen::SparseMatrix<int, 0, int> const, Eigen::SparseMatrix<int, 0, int> const> const&) */
int _ZN5Eigen16SparseMatrixBaseINS_12SparseMatrixIiLi0EiEEE6assignINS_13CwiseBinaryOpINS_8internal13scalar_sum_opIiEEKS2_S9_EEEERS2_RKT_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_VSF_H */

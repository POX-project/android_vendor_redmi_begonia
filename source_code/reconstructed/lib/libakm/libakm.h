/*
 * Reverse-Engineered ABI Specification for: libakm.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libakm.so
 */

#ifndef BEGONIA_RE_LIBAKM_H
#define BEGONIA_RE_LIBAKM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: AKSC_updateQuatF */
/* Demangled: AKSC_updateQuatF */
int AKSC_updateQuatF(void);

/* Symbol: AKSC_addI16 */
/* Demangled: AKSC_addI16 */
int AKSC_addI16(void);

/* Symbol: AKSC_Quat_getIdentityF */
/* Demangled: AKSC_Quat_getIdentityF */
int AKSC_Quat_getIdentityF(void);

/* Symbol: AKL_D9D_SetPointer */
/* Demangled: AKL_D9D_SetPointer */
int AKL_D9D_SetPointer(void);

/* Symbol: AKSC_I16VecSub */
/* Demangled: AKSC_I16VecSub */
int AKSC_I16VecSub(void);

/* Symbol: AKSC_Certification */
/* Demangled: AKSC_Certification */
int AKSC_Certification(void);

/* Symbol: FltMulFVec */
/* Demangled: FltMulFVec */
int FltMulFVec(void);

/* Symbol: __aeabi_frsub */
/* Demangled: __aeabi_frsub */
int __aeabi_frsub(void);

/* Symbol: AKSC_VNorm */
/* Demangled: AKSC_VNorm */
int AKSC_VNorm(void);

/* Symbol: Fmat34Transpose */
/* Demangled: Fmat34Transpose */
int Fmat34Transpose(void);

/* Symbol: AKSC_arcTan */
/* Demangled: AKSC_arcTan */
int AKSC_arcTan(void);

/* Symbol: AKSC_bufferI16 */
/* Demangled: AKSC_bufferI16 */
int AKSC_bufferI16(void);

/* Symbol: zzAKSC_HDOEProcessS3 */
/* Demangled: zzAKSC_HDOEProcessS3 */
int zzAKSC_HDOEProcessS3(void);

/* Symbol: FMAT44_ZERO */
/* Demangled: FMAT44_ZERO */
extern void* FMAT44_ZERO;

/* Symbol: AKSC_CalcAveragePG */
/* Demangled: AKSC_CalcAveragePG */
int AKSC_CalcAveragePG(void);

/* Symbol: AKSC_GetVersion_Major */
/* Demangled: AKSC_GetVersion_Major */
int AKSC_GetVersion_Major(void);

/* Symbol: GetMagneticVectorOffset */
/* Demangled: GetMagneticVectorOffset */
int GetMagneticVectorOffset(void);

/* Symbol: ONEMATF */
/* Demangled: ONEMATF */
extern void* ONEMATF;

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: AKL_DOEEX_SetLevel */
/* Demangled: AKL_DOEEX_SetLevel */
int AKL_DOEEX_SetLevel(void);

/* Symbol: AKSC_Fquat_SetW_positive */
/* Demangled: AKSC_Fquat_SetW_positive */
int AKSC_Fquat_SetW_positive(void);

/* Symbol: AKSC_D9Dv2 */
/* Demangled: AKSC_D9Dv2 */
int AKSC_D9Dv2(void);

/* Symbol: FVecInnerP */
/* Demangled: FVecInnerP */
int FVecInnerP(void);

/* Symbol: AKSC_GetGyroOffsetAuto */
/* Demangled: AKSC_GetGyroOffsetAuto */
int AKSC_GetGyroOffsetAuto(void);

/* Symbol: AKL_D6D_Init */
/* Demangled: AKL_D6D_Init */
int AKL_D6D_Init(void);

/* Symbol: AKSC_calcOffsetF */
/* Demangled: AKSC_calcOffsetF */
int AKSC_calcOffsetF(void);

/* Symbol: AKD_GetUsbCurrent */
/* Demangled: AKD_GetUsbCurrent */
int AKD_GetUsbCurrent(void);

/* Symbol: Fmat33Add */
/* Demangled: Fmat33Add */
int Fmat33Add(void);

/* Symbol: AKSC_Mat2QUAT */
/* Demangled: AKSC_Mat2QUAT */
int AKSC_Mat2QUAT(void);

/* Symbol: FVecAdd */
/* Demangled: FVecAdd */
int FVecAdd(void);

/* Symbol: AKL_PG_Init */
/* Demangled: AKL_PG_Init */
int AKL_PG_Init(void);

/* Symbol: AKSC_angRng */
/* Demangled: AKSC_angRng */
int AKSC_angRng(void);

/* Symbol: AKSC_GetGyroOffsetAutoF */
/* Demangled: AKSC_GetGyroOffsetAutoF */
int AKSC_GetGyroOffsetAutoF(void);

/* Symbol: akm_cbuf_calc_var */
/* Demangled: akm_cbuf_calc_var */
int akm_cbuf_calc_var(void);

/* Symbol: AKSC_HFlucCheck */
/* Demangled: AKSC_HFlucCheck */
int AKSC_HFlucCheck(void);

/* Symbol: AKSC_HOffsetCal */
/* Demangled: AKSC_HOffsetCal */
int AKSC_HOffsetCal(void);

/* Symbol: AKSC_I16VecNorm */
/* Demangled: AKSC_I16VecNorm */
int AKSC_I16VecNorm(void);

/* Symbol: AKL_PG_SetPointer */
/* Demangled: AKL_PG_SetPointer */
int AKL_PG_SetPointer(void);

/* Symbol: AKSC_GetSizeDOEaGVarF */
/* Demangled: AKSC_GetSizeDOEaGVarF */
int AKSC_GetSizeDOEaGVarF(void);

/* Symbol: akm_wrapper_lib_init */
/* Demangled: akm_wrapper_lib_init */
int akm_wrapper_lib_init(void);

/* Symbol: Fmat43MultFvec31 */
/* Demangled: Fmat43MultFvec31 */
int Fmat43MultFvec31(void);

/* Symbol: AKL_GetParameterSize */
/* Demangled: AKL_GetParameterSize */
int AKL_GetParameterSize(void);

/* Symbol: AKSC_Inclination */
/* Demangled: AKSC_Inclination */
int AKSC_Inclination(void);

/* Symbol: AKSC_InitHFlucCheck */
/* Demangled: AKSC_InitHFlucCheck */
int AKSC_InitHFlucCheck(void);

/* Symbol: AKSC_D9D_normVector */
/* Demangled: AKSC_D9D_normVector */
int AKSC_D9D_normVector(void);

/* Symbol: AKSC_GetDOEVarInDOEaGVarF */
/* Demangled: AKSC_GetDOEVarInDOEaGVarF */
int AKSC_GetDOEVarInDOEaGVarF(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: AKL_NULL_Function */
/* Demangled: AKL_NULL_Function */
int AKL_NULL_Function(void);

/* Symbol: AKL_PG_CalcAngularRate */
/* Demangled: AKL_PG_CalcAngularRate */
int AKL_PG_CalcAngularRate(void);

/* Symbol: AKSC_GetD9DVerSize */
/* Demangled: AKSC_GetD9DVerSize */
int AKSC_GetD9DVerSize(void);

/* Symbol: FltMulFMAT */
/* Demangled: FltMulFMAT */
int FltMulFMAT(void);

/* Symbol: AKSC_I16MInverse */
/* Demangled: AKSC_I16MInverse */
int AKSC_I16MInverse(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: AKSC_SetD9Dv2Prms */
/* Demangled: AKSC_SetD9Dv2Prms */
int AKSC_SetD9Dv2Prms(void);

/* Symbol: UNIMATF */
/* Demangled: UNIMATF */
extern void* UNIMATF;

/* Symbol: AKSC_InitD9Dv2 */
/* Demangled: AKSC_InitD9Dv2 */
int AKSC_InitD9Dv2(void);

/* Symbol: AKSC_PseudoGyroF */
/* Demangled: AKSC_PseudoGyroF */
int AKSC_PseudoGyroF(void);

/* Symbol: AKSC_abs16 */
/* Demangled: AKSC_abs16 */
int AKSC_abs16(void);

/* Symbol: AKSC_D9D_watchState */
/* Demangled: AKSC_D9D_watchState */
int AKSC_D9D_watchState(void);

/* Symbol: AKSC_Quat2YPR */
/* Demangled: AKSC_Quat2YPR */
int AKSC_Quat2YPR(void);

/* Symbol: AKL_DOEEX_Init */
/* Demangled: AKL_DOEEX_Init */
int AKL_DOEEX_Init(void);

/* Symbol: FVecNorm */
/* Demangled: FVecNorm */
int FVecNorm(void);

/* Symbol: AKSC_GetD9Dv2DebugInfo */
/* Demangled: AKSC_GetD9Dv2DebugInfo */
int AKSC_GetD9Dv2DebugInfo(void);

/* Symbol: AKSC_I32MDetermEx */
/* Demangled: AKSC_I32MDetermEx */
int AKSC_I32MDetermEx(void);

/* Symbol: AKSC_CheckInitI16vec */
/* Demangled: AKSC_CheckInitI16vec */
int AKSC_CheckInitI16vec(void);

/* Symbol: AKSC_GetSizeOfD9DObjectIn32BitWord */
/* Demangled: AKSC_GetSizeOfD9DObjectIn32BitWord */
int AKSC_GetSizeOfD9DObjectIn32BitWord(void);

/* Symbol: FVEC_ZERO */
/* Demangled: FVEC_ZERO */
extern void* FVEC_ZERO;

/* Symbol: UNIMAT */
/* Demangled: UNIMAT */
extern void* UNIMAT;

/* Symbol: AKL_SetMode */
/* Demangled: AKL_SetMode */
int AKL_SetMode(void);

/* Symbol: I16V_INIT_VALUE */
/* Demangled: I16V_INIT_VALUE */
extern void* I16V_INIT_VALUE;

/* Symbol: AKSC_DS3_proc */
/* Demangled: AKSC_DS3_proc */
int AKSC_DS3_proc(void);

/* Symbol: AKSC_invSqrt */
/* Demangled: AKSC_invSqrt */
int AKSC_invSqrt(void);

/* Symbol: AKSC_getCoeffF */
/* Demangled: AKSC_getCoeffF */
int AKSC_getCoeffF(void);

/* Symbol: zzAKSC_InitHDOEProcPrmsS3 */
/* Demangled: zzAKSC_InitHDOEProcPrmsS3 */
int zzAKSC_InitHDOEProcPrmsS3(void);

/* Symbol: AKSC_CalcAverage */
/* Demangled: AKSC_CalcAverage */
int AKSC_CalcAverage(void);

/* Symbol: FMAT43_ZERO */
/* Demangled: FMAT43_ZERO */
extern void* FMAT43_ZERO;

/* Symbol: AKSC_CheckActbitI32Mat */
/* Demangled: AKSC_CheckActbitI32Mat */
int AKSC_CheckActbitI32Mat(void);

/* Symbol: AKSC_I16MulI16Vec */
/* Demangled: AKSC_I16MulI16Vec */
int AKSC_I16MulI16Vec(void);

/* Symbol: AKSC_Direction9D */
/* Demangled: AKSC_Direction9D */
int AKSC_Direction9D(void);

/* Symbol: AKL_PG_FreePointer */
/* Demangled: AKL_PG_FreePointer */
int AKL_PG_FreePointer(void);

/* Symbol: __aeabi_fadd */
/* Demangled: __aeabi_fadd */
int __aeabi_fadd(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: MMult */
/* Demangled: MMult */
int MMult(void);

/* Symbol: AKSC_ExecDistCompen */
/* Demangled: AKSC_ExecDistCompen */
int AKSC_ExecDistCompen(void);

/* Symbol: FMAT44_UNI */
/* Demangled: FMAT44_UNI */
extern void* FMAT44_UNI;

/* Symbol: Fmat2I16Mat */
/* Demangled: Fmat2I16Mat */
int Fmat2I16Mat(void);

/* Symbol: AKSC_InitHDOEEX */
/* Demangled: AKSC_InitHDOEEX */
int AKSC_InitHDOEEX(void);

/* Symbol: AKM_SetData */
/* Demangled: AKM_SetData */
int AKM_SetData(void);

/* Symbol: AKL_D9D_CalcFusion */
/* Demangled: AKL_D9D_CalcFusion */
int AKL_D9D_CalcFusion(void);

/* Symbol: FQUAT_INIT_VALUE */
/* Demangled: FQUAT_INIT_VALUE */
extern void* FQUAT_INIT_VALUE;

/* Symbol: AKSC_Div_Vect_Scalar */
/* Demangled: AKSC_Div_Vect_Scalar */
int AKSC_Div_Vect_Scalar(void);

/* Symbol: AKSC_SetLayoutF */
/* Demangled: AKSC_SetLayoutF */
int AKSC_SetLayoutF(void);

/* Symbol: AKSC_ThetaFilter */
/* Demangled: AKSC_ThetaFilter */
int AKSC_ThetaFilter(void);

/* Symbol: AKSC_Quat_createF */
/* Demangled: AKSC_Quat_createF */
int AKSC_Quat_createF(void);

/* Symbol: AKSC_CheckInitFvec */
/* Demangled: AKSC_CheckInitFvec */
int AKSC_CheckInitFvec(void);

/* Symbol: AKL_DOE_SetLevel */
/* Demangled: AKL_DOE_SetLevel */
int AKL_DOE_SetLevel(void);

/* Symbol: AKSC_SetHDOELevel */
/* Demangled: AKSC_SetHDOELevel */
int AKSC_SetHDOELevel(void);

/* Symbol: AKSC_Quat_getIdentity */
/* Demangled: AKSC_Quat_getIdentity */
int AKSC_Quat_getIdentity(void);

/* Symbol: AKSC_D9D_checkAllStateCond */
/* Demangled: AKSC_D9D_checkAllStateCond */
int AKSC_D9D_checkAllStateCond(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: AKL_LoadParameter */
/* Demangled: AKL_LoadParameter */
int AKL_LoadParameter(void);

/* Symbol: akm_wrapper_init */
/* Demangled: akm_wrapper_init */
int akm_wrapper_init(void);

/* Symbol: AKL_DOEEX_SetPointer */
/* Demangled: AKL_DOEEX_SetPointer */
int AKL_DOEEX_SetPointer(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: AKSC_SetD9Dv2PrmsSet */
/* Demangled: AKSC_SetD9Dv2PrmsSet */
int AKSC_SetD9Dv2PrmsSet(void);

/* Symbol: akm_wrapper_stop */
/* Demangled: akm_wrapper_stop */
int akm_wrapper_stop(void);

/* Symbol: AKL_GetNVdataSize */
/* Demangled: AKL_GetNVdataSize */
int AKL_GetNVdataSize(void);

/* Symbol: AKL_Init */
/* Demangled: AKL_Init */
int AKL_Init(void);

/* Symbol: check_usb_charging */
/* Demangled: check_usb_charging */
int check_usb_charging(void);

/* Symbol: AKSC_InitDirection9D */
/* Demangled: AKSC_InitDirection9D */
int AKSC_InitDirection9D(void);

/* Symbol: M44MultM43 */
/* Demangled: M44MultM43 */
int M44MultM43(void);

/* Symbol: AKSC_GetVersion_AlgorithmCode */
/* Demangled: AKSC_GetVersion_AlgorithmCode */
int AKSC_GetVersion_AlgorithmCode(void);

/* Symbol: M44MultM44 */
/* Demangled: M44MultM44 */
int M44MultM44(void);

/* Symbol: AKSC_I16VecAdd */
/* Demangled: AKSC_I16VecAdd */
int AKSC_I16VecAdd(void);

/* Symbol: AKSC_cos */
/* Demangled: AKSC_cos */
int AKSC_cos(void);

/* Symbol: AKSC_div16f */
/* Demangled: AKSC_div16f */
int AKSC_div16f(void);

/* Symbol: FMAT_ZERO */
/* Demangled: FMAT_ZERO */
extern void* FMAT_ZERO;

/* Symbol: akm_log_level */
/* Demangled: akm_log_level */
extern void* akm_log_level;

/* Symbol: akm_cbuf_calc_mid_ave */
/* Demangled: akm_cbuf_calc_mid_ave */
int akm_cbuf_calc_mid_ave(void);

/* Symbol: AKL_D6D_SetPointer */
/* Demangled: AKL_D6D_SetPointer */
int AKL_D6D_SetPointer(void);

/* Symbol: AKSC_cholDcF */
/* Demangled: AKSC_cholDcF */
int AKSC_cholDcF(void);

/* Symbol: FMAT43_INI */
/* Demangled: FMAT43_INI */
extern void* FMAT43_INI;

/* Symbol: AKM_LoadAndStart */
/* Demangled: AKM_LoadAndStart */
int AKM_LoadAndStart(void);

/* Symbol: AKSC_SenseCorrect_8963 */
/* Demangled: AKSC_SenseCorrect_8963 */
int AKSC_SenseCorrect_8963(void);

/* Symbol: AKSC_Theta_DVec */
/* Demangled: AKSC_Theta_DVec */
int AKSC_Theta_DVec(void);

/* Symbol: FMatMulFVec */
/* Demangled: FMatMulFVec */
int FMatMulFVec(void);

/* Symbol: Fmat44MultFvec41 */
/* Demangled: Fmat44MultFvec41 */
int Fmat44MultFvec41(void);

/* Symbol: AKL_DOE_Calibrate */
/* Demangled: AKL_DOE_Calibrate */
int AKL_DOE_Calibrate(void);

/* Symbol: AKSC_buffer */
/* Demangled: AKSC_buffer */
int AKSC_buffer(void);

/* Symbol: AKSC_I16VecCrossP */
/* Demangled: AKSC_I16VecCrossP */
int AKSC_I16VecCrossP(void);

/* Symbol: AKSC_bufferFm */
/* Demangled: AKSC_bufferFm */
int AKSC_bufferFm(void);

/* Symbol: I16V_ZERO */
/* Demangled: I16V_ZERO */
extern void* I16V_ZERO;

/* Symbol: AKSC_InitPseudoGyroF */
/* Demangled: AKSC_InitPseudoGyroF */
int AKSC_InitPseudoGyroF(void);

/* Symbol: AKSC_Quat_comb */
/* Demangled: AKSC_Quat_comb */
int AKSC_Quat_comb(void);

/* Symbol: AKSC_GetVersion_Variation */
/* Demangled: AKSC_GetVersion_Variation */
int AKSC_GetVersion_Variation(void);

/* Symbol: AKSC_Theta_Bird */
/* Demangled: AKSC_Theta_Bird */
int AKSC_Theta_Bird(void);

/* Symbol: AKSC_norm16 */
/* Demangled: AKSC_norm16 */
int AKSC_norm16(void);

/* Symbol: AKSC_SetLayout */
/* Demangled: AKSC_SetLayout */
int AKSC_SetLayout(void);

/* Symbol: AKSC_bufferFv */
/* Demangled: AKSC_bufferFv */
int AKSC_bufferFv(void);

/* Symbol: AKSC_abs32 */
/* Demangled: AKSC_abs32 */
int AKSC_abs32(void);

/* Symbol: AKSC_HDOEaGF */
/* Demangled: AKSC_HDOEaGF */
int AKSC_HDOEaGF(void);

/* Symbol: FMAT34_ZERO */
/* Demangled: FMAT34_ZERO */
extern void* FMAT34_ZERO;

/* Symbol: AKL_LoadPDC */
/* Demangled: AKL_LoadPDC */
int AKL_LoadPDC(void);

/* Symbol: AKL_DOE_FreePointer */
/* Demangled: AKL_DOE_FreePointer */
int AKL_DOE_FreePointer(void);

/* Symbol: AKSC_sqrtU32 */
/* Demangled: AKSC_sqrtU32 */
int AKSC_sqrtU32(void);

/* Symbol: CalcDirection */
/* Demangled: CalcDirection */
int CalcDirection(void);

/* Symbol: AKSC_DirectionS3 */
/* Demangled: AKSC_DirectionS3 */
int AKSC_DirectionS3(void);

/* Symbol: AKL_Release */
/* Demangled: AKL_Release */
int AKL_Release(void);

/* Symbol: AKL_DOEAG_SetLevel */
/* Demangled: AKL_DOEAG_SetLevel */
int AKL_DOEAG_SetLevel(void);

/* Symbol: AKSC_st2CRC */
/* Demangled: AKSC_st2CRC */
int AKSC_st2CRC(void);

/* Symbol: AKSC_Quat_combF */
/* Demangled: AKSC_Quat_combF */
int AKSC_Quat_combF(void);

/* Symbol: InitAKSCPRMS */
/* Demangled: InitAKSCPRMS */
int InitAKSCPRMS(void);

/* Symbol: AKSC_TransByHbase */
/* Demangled: AKSC_TransByHbase */
int AKSC_TransByHbase(void);

/* Symbol: AKSC_Quat_getMatFromQuatF */
/* Demangled: AKSC_Quat_getMatFromQuatF */
int AKSC_Quat_getMatFromQuatF(void);

/* Symbol: FVEC_INIT_VALUE */
/* Demangled: FVEC_INIT_VALUE */
extern void* FVEC_INIT_VALUE;

/* Symbol: AKSC_I16MTranspose */
/* Demangled: AKSC_I16MTranspose */
int AKSC_I16MTranspose(void);

/* Symbol: AKL_CalcFusion */
/* Demangled: AKL_CalcFusion */
int AKL_CalcFusion(void);

/* Symbol: AKL_GetLibraryInfo */
/* Demangled: AKL_GetLibraryInfo */
int AKL_GetLibraryInfo(void);

/* Symbol: AKSC_I16VecInnerP */
/* Demangled: AKSC_I16VecInnerP */
int AKSC_I16VecInnerP(void);

/* Symbol: AKL_D6D_FreePointer */
/* Demangled: AKL_D6D_FreePointer */
int AKL_D6D_FreePointer(void);

/* Symbol: CalcAngularRate */
/* Demangled: CalcAngularRate */
int CalcAngularRate(void);

/* Symbol: AKSC_Quat_rotateF */
/* Demangled: AKSC_Quat_rotateF */
int AKSC_Quat_rotateF(void);

/* Symbol: AKSC_fitOnPlaneF */
/* Demangled: AKSC_fitOnPlaneF */
int AKSC_fitOnPlaneF(void);

/* Symbol: AKSC_Quat_multF */
/* Demangled: AKSC_Quat_multF */
int AKSC_Quat_multF(void);

/* Symbol: AKSC_SenseCorrect_09911 */
/* Demangled: AKSC_SenseCorrect_09911 */
int AKSC_SenseCorrect_09911(void);

/* Symbol: AKSC_CheckInitI16mat */
/* Demangled: AKSC_CheckInitI16mat */
int AKSC_CheckInitI16mat(void);

/* Symbol: AKSC_I16MMult */
/* Demangled: AKSC_I16MMult */
int AKSC_I16MMult(void);

/* Symbol: AKSC_SenseCorrect_09912 */
/* Demangled: AKSC_SenseCorrect_09912 */
int AKSC_SenseCorrect_09912(void);

/* Symbol: AKSC_SenseCorrect_09913 */
/* Demangled: AKSC_SenseCorrect_09913 */
int AKSC_SenseCorrect_09913(void);

/* Symbol: AKSC_SenseCorrect_09915 */
/* Demangled: AKSC_SenseCorrect_09915 */
int AKSC_SenseCorrect_09915(void);

/* Symbol: AKSC_SenseCorrect_09916C */
/* Demangled: AKSC_SenseCorrect_09916C */
int AKSC_SenseCorrect_09916C(void);

/* Symbol: AKM_LibraryInit */
/* Demangled: AKM_LibraryInit */
int AKM_LibraryInit(void);

/* Symbol: AKSC_SenseCorrect_09916D */
/* Demangled: AKSC_SenseCorrect_09916D */
int AKSC_SenseCorrect_09916D(void);

/* Symbol: akm_wrapper_start */
/* Demangled: akm_wrapper_start */
int akm_wrapper_start(void);

/* Symbol: AKSC_SenseCorrect_09918 */
/* Demangled: AKSC_SenseCorrect_09918 */
int AKSC_SenseCorrect_09918(void);

/* Symbol: AKSC_Quat_rotate */
/* Demangled: AKSC_Quat_rotate */
int AKSC_Quat_rotate(void);

/* Symbol: Fmat33MultFmat33 */
/* Demangled: Fmat33MultFmat33 */
int Fmat33MultFmat33(void);

/* Symbol: AKSC_Quat_normalizeF */
/* Demangled: AKSC_Quat_normalizeF */
int AKSC_Quat_normalizeF(void);

/* Symbol: AKSC_Op_smoothEMA */
/* Demangled: AKSC_Op_smoothEMA */
int AKSC_Op_smoothEMA(void);

/* Symbol: IDQUATF */
/* Demangled: IDQUATF */
extern void* IDQUATF;

/* Symbol: AKL_D9D_FreePointer */
/* Demangled: AKL_D9D_FreePointer */
int AKL_D9D_FreePointer(void);

/* Symbol: AKSC_getRadiusF */
/* Demangled: AKSC_getRadiusF */
int AKSC_getRadiusF(void);

/* Symbol: AKM_GetLibraryInfo */
/* Demangled: AKM_GetLibraryInfo */
int AKM_GetLibraryInfo(void);

/* Symbol: AKSC_fitOnPlane */
/* Demangled: AKSC_fitOnPlane */
int AKSC_fitOnPlane(void);

/* Symbol: s_fdDev */
/* Demangled: s_fdDev */
extern void* s_fdDev;

/* Symbol: FMAT44_INI */
/* Demangled: FMAT44_INI */
extern void* FMAT44_INI;

/* Symbol: Fmat44Sub */
/* Demangled: Fmat44Sub */
int Fmat44Sub(void);

/* Symbol: AKSC_Quat_getRotAxis */
/* Demangled: AKSC_Quat_getRotAxis */
int AKSC_Quat_getRotAxis(void);

/* Symbol: AKSC_CheckInitFmat */
/* Demangled: AKSC_CheckInitFmat */
int AKSC_CheckInitFmat(void);

/* Symbol: AKSC_divU16 */
/* Demangled: AKSC_divU16 */
int AKSC_divU16(void);

/* Symbol: AKL_SetPDC */
/* Demangled: AKL_SetPDC */
int AKL_SetPDC(void);

/* Symbol: AKSC_cholSlF */
/* Demangled: AKSC_cholSlF */
int AKSC_cholSlF(void);

/* Symbol: AKM_GetData */
/* Demangled: AKM_GetData */
int AKM_GetData(void);

/* Symbol: AKSC_norm32 */
/* Demangled: AKSC_norm32 */
int AKSC_norm32(void);

/* Symbol: get_battery_current */
/* Demangled: get_battery_current */
int get_battery_current(void);

/* Symbol: AKSC_GetVersion_Revision */
/* Demangled: AKSC_GetVersion_Revision */
int AKSC_GetVersion_Revision(void);

/* Symbol: AKL_D6D_CalcFusion */
/* Demangled: AKL_D6D_CalcFusion */
int AKL_D6D_CalcFusion(void);

/* Symbol: AKSC_SetHDOEaGLevelF */
/* Demangled: AKSC_SetHDOEaGLevelF */
int AKSC_SetHDOEaGLevelF(void);

/* Symbol: M34MultM43 */
/* Demangled: M34MultM43 */
int M34MultM43(void);

/* Symbol: AKL_DOEAG_SetPointer */
/* Demangled: AKL_DOEAG_SetPointer */
int AKL_DOEAG_SetPointer(void);

/* Symbol: AKSC_CheckDistCompen */
/* Demangled: AKSC_CheckDistCompen */
int AKSC_CheckDistCompen(void);

/* Symbol: AKSC_SenseCorrect_09917D */
/* Demangled: AKSC_SenseCorrect_09917D */
int AKSC_SenseCorrect_09917D(void);

/* Symbol: AKSC_I32ShMul */
/* Demangled: AKSC_I32ShMul */
int AKSC_I32ShMul(void);

/* Symbol: M34MultM44 */
/* Demangled: M34MultM44 */
int M34MultM44(void);

/* Symbol: AKSC_Quat_getMatFromQuat */
/* Demangled: AKSC_Quat_getMatFromQuat */
int AKSC_Quat_getMatFromQuat(void);

/* Symbol: AKL_ChangeFormation */
/* Demangled: AKL_ChangeFormation */
int AKL_ChangeFormation(void);

/* Symbol: __floatunsisf */
/* Demangled: __floatunsisf */
int __floatunsisf(void);

/* Symbol: AKSC_sqrt16 */
/* Demangled: AKSC_sqrt16 */
int AKSC_sqrt16(void);

/* Symbol: MAG_LIB_API_INTERFACE */
/* Demangled: MAG_LIB_API_INTERFACE */
extern void* MAG_LIB_API_INTERFACE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: __addsf3 */
/* Demangled: __addsf3 */
int __addsf3(void);

/* Symbol: AKL_SaveParameter */
/* Demangled: AKL_SaveParameter */
int AKL_SaveParameter(void);

/* Symbol: AKL_D9D_Init */
/* Demangled: AKL_D9D_Init */
int AKL_D9D_Init(void);

/* Symbol: akm_cbuf_init */
/* Demangled: akm_cbuf_init */
int akm_cbuf_init(void);

/* Symbol: AKL_GetVector */
/* Demangled: AKL_GetVector */
int AKL_GetVector(void);

/* Symbol: AKL_DOE_Init */
/* Demangled: AKL_DOE_Init */
int AKL_DOE_Init(void);

/* Symbol: AKSC_MatTrans */
/* Demangled: AKSC_MatTrans */
int AKSC_MatTrans(void);

/* Symbol: AKSC_I16MatMulI16Vec */
/* Demangled: AKSC_I16MatMulI16Vec */
int AKSC_I16MatMulI16Vec(void);

/* Symbol: AKM_HData_CheckInit */
/* Demangled: AKM_HData_CheckInit */
int AKM_HData_CheckInit(void);

/* Symbol: AKSC_div16 */
/* Demangled: AKSC_div16 */
int AKSC_div16(void);

/* Symbol: akm_cbuf_calc_ave */
/* Demangled: akm_cbuf_calc_ave */
int akm_cbuf_calc_ave(void);

/* Symbol: AKSC_Quat_getConjugate */
/* Demangled: AKSC_Quat_getConjugate */
int AKSC_Quat_getConjugate(void);

/* Symbol: AKL_DOEAG_FreePointer */
/* Demangled: AKL_DOEAG_FreePointer */
int AKL_DOEAG_FreePointer(void);

/* Symbol: AKSC_GetVersion_Minor */
/* Demangled: AKSC_GetVersion_Minor */
int AKSC_GetVersion_Minor(void);

/* Symbol: AKSC_SetHDOEEXLevel */
/* Demangled: AKSC_SetHDOEEXLevel */
int AKSC_SetHDOEEXLevel(void);

/* Symbol: Fmat33Sub */
/* Demangled: Fmat33Sub */
int Fmat33Sub(void);

/* Symbol: AKSC_D9D_setParams */
/* Demangled: AKSC_D9D_setParams */
int AKSC_D9D_setParams(void);

/* Symbol: AKL_DOEEX_Calibrate */
/* Demangled: AKL_DOEEX_Calibrate */
int AKL_DOEEX_Calibrate(void);

/* Symbol: AKM_HData_Check */
/* Demangled: AKM_HData_Check */
int AKM_HData_Check(void);

/* Symbol: FVecSub */
/* Demangled: FVecSub */
int FVecSub(void);

/* Symbol: AKSC_GetSizeDOEEXVar */
/* Demangled: AKSC_GetSizeDOEEXVar */
int AKSC_GetSizeDOEEXVar(void);

/* Symbol: AKSC_HDOEEX */
/* Demangled: AKSC_HDOEEX */
int AKSC_HDOEEX(void);

/* Symbol: __aeabi_ui2f */
/* Demangled: __aeabi_ui2f */
int __aeabi_ui2f(void);

/* Symbol: AKSC_pat2mat */
/* Demangled: AKSC_pat2mat */
int AKSC_pat2mat(void);

/* Symbol: AKL_DOEAG_Init */
/* Demangled: AKL_DOEAG_Init */
int AKL_DOEAG_Init(void);

/* Symbol: AKL_ForceReCalibration */
/* Demangled: AKL_ForceReCalibration */
int AKL_ForceReCalibration(void);

/* Symbol: AKSC_GetVersion_DateCode */
/* Demangled: AKSC_GetVersion_DateCode */
int AKSC_GetVersion_DateCode(void);

/* Symbol: get_battery_capacity */
/* Demangled: get_battery_capacity */
int get_battery_capacity(void);

/* Symbol: AKM_StopAndSave */
/* Demangled: AKM_StopAndSave */
int AKM_StopAndSave(void);

/* Symbol: MTranspose */
/* Demangled: MTranspose */
int MTranspose(void);

/* Symbol: GetMagneticVectorDecomp */
/* Demangled: GetMagneticVectorDecomp */
int GetMagneticVectorDecomp(void);

/* Symbol: Fmat34MultFmat43 */
/* Demangled: Fmat34MultFmat43 */
int Fmat34MultFmat43(void);

/* Symbol: FMAT34_INI */
/* Demangled: FMAT34_INI */
extern void* FMAT34_INI;

/* Symbol: M43MultM33 */
/* Demangled: M43MultM33 */
int M43MultM33(void);

/* Symbol: AKSC_IQuat2Fquat */
/* Demangled: AKSC_IQuat2Fquat */
int AKSC_IQuat2Fquat(void);

/* Symbol: M43MultM34 */
/* Demangled: M43MultM34 */
int M43MultM34(void);

/* Symbol: AKSC_DecompS3 */
/* Demangled: AKSC_DecompS3 */
int AKSC_DecompS3(void);

/* Symbol: AKSC_I32MDeterm */
/* Demangled: AKSC_I32MDeterm */
int AKSC_I32MDeterm(void);

/* Symbol: Fmat34MultFvec41 */
/* Demangled: Fmat34MultFvec41 */
int Fmat34MultFvec41(void);

/* Symbol: AKSC_InitDecomp */
/* Demangled: AKSC_InitDecomp */
int AKSC_InitDecomp(void);

/* Symbol: MDeterm */
/* Demangled: MDeterm */
int MDeterm(void);

/* Symbol: AKSC_vectorCalc */
/* Demangled: AKSC_vectorCalc */
int AKSC_vectorCalc(void);

/* Symbol: AKL_DOEAG_Calibrate */
/* Demangled: AKL_DOEAG_Calibrate */
int AKL_DOEAG_Calibrate(void);

/* Symbol: AKSC_sin */
/* Demangled: AKSC_sin */
int AKSC_sin(void);

/* Symbol: close_UsbChargeDevice */
/* Demangled: close_UsbChargeDevice */
int close_UsbChargeDevice(void);

/* Symbol: akm_func_for_avoid_compile_err */
/* Demangled: akm_func_for_avoid_compile_err */
int akm_func_for_avoid_compile_err(void);

/* Symbol: AKSC_cholSl */
/* Demangled: AKSC_cholSl */
int AKSC_cholSl(void);

/* Symbol: AKL_SetVector */
/* Demangled: AKL_SetVector */
int AKL_SetVector(void);

/* Symbol: AKSC_Quat_slerpF */
/* Demangled: AKSC_Quat_slerpF */
int AKSC_Quat_slerpF(void);

/* Symbol: AKSC_InitHDOEaGF */
/* Demangled: AKSC_InitHDOEaGF */
int AKSC_InitHDOEaGF(void);

/* Symbol: FMatCross */
/* Demangled: FMatCross */
int FMatCross(void);

/* Symbol: AKSC_Fquat2IQuat */
/* Demangled: AKSC_Fquat2IQuat */
int AKSC_Fquat2IQuat(void);

/* Symbol: check_usb_online */
/* Demangled: check_usb_online */
int check_usb_online(void);

/* Symbol: open_UsbChargeDevice */
/* Demangled: open_UsbChargeDevice */
int open_UsbChargeDevice(void);

/* Symbol: AKSC_atan2 */
/* Demangled: AKSC_atan2 */
int AKSC_atan2(void);

/* Symbol: AKSC_Quat_slerp */
/* Demangled: AKSC_Quat_slerp */
int AKSC_Quat_slerp(void);

/* Symbol: AKSC_D9D_checkDiffOri */
/* Demangled: AKSC_D9D_checkDiffOri */
int AKSC_D9D_checkDiffOri(void);

/* Symbol: AKSC_I16MMult2 */
/* Demangled: AKSC_I16MMult2 */
int AKSC_I16MMult2(void);

/* Symbol: FltMulFMAT44 */
/* Demangled: FltMulFMAT44 */
int FltMulFMAT44(void);

/* Symbol: __subsf3 */
/* Demangled: __subsf3 */
int __subsf3(void);

/* Symbol: AKL_GetDeviceType */
/* Demangled: AKL_GetDeviceType */
int AKL_GetDeviceType(void);

/* Symbol: AKSC_Delta */
/* Demangled: AKSC_Delta */
int AKSC_Delta(void);

/* Symbol: AKSC_Op_clip */
/* Demangled: AKSC_Op_clip */
int AKSC_Op_clip(void);

/* Symbol: AKL_DOEEX_FreePointer */
/* Demangled: AKL_DOEEX_FreePointer */
int AKL_DOEEX_FreePointer(void);

/* Symbol: AKSC_Quat_create */
/* Demangled: AKSC_Quat_create */
int AKSC_Quat_create(void);

/* Symbol: __floatsisf */
/* Demangled: __floatsisf */
int __floatsisf(void);

/* Symbol: FMAT_INIT_VALUE */
/* Demangled: FMAT_INIT_VALUE */
extern void* FMAT_INIT_VALUE;

/* Symbol: akm_wrapper_get_mag */
/* Demangled: akm_wrapper_get_mag */
int akm_wrapper_get_mag(void);

/* Symbol: AKM_SetDefaultNV */
/* Demangled: AKM_SetDefaultNV */
int AKM_SetDefaultNV(void);

/* Symbol: __aeabi_i2f */
/* Demangled: __aeabi_i2f */
int __aeabi_i2f(void);

/* Symbol: AKL_DOE_SetPointer */
/* Demangled: AKL_DOE_SetPointer */
int AKL_DOE_SetPointer(void);

/* Symbol: AKSC_getCoeff */
/* Demangled: AKSC_getCoeff */
int AKSC_getCoeff(void);

/* Symbol: AKSC_sqrt32 */
/* Demangled: AKSC_sqrt32 */
int AKSC_sqrt32(void);

/* Symbol: __aeabi_fsub */
/* Demangled: __aeabi_fsub */
int __aeabi_fsub(void);

/* Symbol: AKSC_cholDc */
/* Demangled: AKSC_cholDc */
int AKSC_cholDc(void);

/* Symbol: AKSC_Quat_normalize */
/* Demangled: AKSC_Quat_normalize */
int AKSC_Quat_normalize(void);

/* Symbol: Fmat44Add */
/* Demangled: Fmat44Add */
int Fmat44Add(void);

/* Symbol: akm_cbuf_update */
/* Demangled: akm_cbuf_update */
int akm_cbuf_update(void);

/* Symbol: AKSC_Quat_getConjugateF */
/* Demangled: AKSC_Quat_getConjugateF */
int AKSC_Quat_getConjugateF(void);

/* Symbol: InitMeasure */
/* Demangled: InitMeasure */
int InitMeasure(void);

/* Symbol: AKSC_bufferI16mat */
/* Demangled: AKSC_bufferI16mat */
int AKSC_bufferI16mat(void);

/* Symbol: FVecCrossP */
/* Demangled: FVecCrossP */
int FVecCrossP(void);

/* Symbol: AKSC_Scalar_Vect */
/* Demangled: AKSC_Scalar_Vect */
int AKSC_Scalar_Vect(void);

/* Symbol: AKSC_div32 */
/* Demangled: AKSC_div32 */
int AKSC_div32(void);

/* Symbol: AKSC_CheckActbitI32 */
/* Demangled: AKSC_CheckActbitI32 */
int AKSC_CheckActbitI32(void);

/* Symbol: AKL_StopMeasurement */
/* Demangled: AKL_StopMeasurement */
int AKL_StopMeasurement(void);

/* Symbol: AKL_StartMeasurement */
/* Demangled: AKL_StartMeasurement */
int AKL_StartMeasurement(void);

/* Symbol: MInverse */
/* Demangled: MInverse */
int MInverse(void);

/* Symbol: Fmat44Transpose */
/* Demangled: Fmat44Transpose */
int Fmat44Transpose(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAKM_H */

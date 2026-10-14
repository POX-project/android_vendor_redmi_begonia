/*
 * Reverse-Engineered Source for: libvp9dec_sa.ca7.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvp9dec_sa_ca7"

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
#include "libvp9dec_sa_ca7.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VP9CondWait */
extern "C" __attribute__((visibility("default"))) int VP9CondWait(void) {
    ALOGD("VP9CondWait() called");
    return 0;
}

/* Demangled: _vp9dec_37B419A4BD8ED9A53B8396ABEF13AA9C5B32C36E7F454853E3FF554CEB994B7CF80AF84652EBF035605181C604012C21 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_37B419A4BD8ED9A53B8396ABEF13AA9C5B32C36E7F454853E3FF554CEB994B7CF80AF84652EBF035605181C604012C21(void) {
    ALOGD("_vp9dec_37B419A4BD8ED9A53B8396ABEF13AA9C5B32C36E7F454853E3FF554CEB994B7CF80AF84652EBF035605181C604012C21() called");
    return 0;
}

/* Demangled: VP9DecoderSetParameter */
extern "C" __attribute__((visibility("default"))) int VP9DecoderSetParameter(void) {
    ALOGD("VP9DecoderSetParameter() called");
    return 0;
}

/* Exported Object: vp9_col_iscan_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_col_iscan_4x4 = NULL;

/* Demangled: VP9DECLOGD */
extern "C" __attribute__((visibility("default"))) int VP9DECLOGD(void) {
    ALOGD("VP9DECLOGD() called");
    return 0;
}

/* Demangled: _vp9dec_A4CA357EECF185734F9FB89CADE1D094B3869D3279BB538E686601900FB3788C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A4CA357EECF185734F9FB89CADE1D094B3869D3279BB538E686601900FB3788C(void) {
    ALOGD("_vp9dec_A4CA357EECF185734F9FB89CADE1D094B3869D3279BB538E686601900FB3788C() called");
    return 0;
}

/* Exported Object: vp9_convolve8_vert */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve8_vert = NULL;

/* Demangled: _vp9dec_61DA9916D1411BE1DCAC4C851DB09ADE5847DA41396D364BEEBE83784974E764 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_61DA9916D1411BE1DCAC4C851DB09ADE5847DA41396D364BEEBE83784974E764(void) {
    ALOGD("_vp9dec_61DA9916D1411BE1DCAC4C851DB09ADE5847DA41396D364BEEBE83784974E764() called");
    return 0;
}

/* Exported Object: num_pels_log2_lookup */
extern "C" __attribute__((visibility("default"))) void* num_pels_log2_lookup = NULL;

/* Demangled: VP9SwDecSetComplexityLevel */
extern "C" __attribute__((visibility("default"))) int VP9SwDecSetComplexityLevel(void) {
    ALOGD("VP9SwDecSetComplexityLevel() called");
    return 0;
}

/* Exported Object: vp9_fdct4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_fdct4x4 = NULL;

/* Demangled: _vp9dec_752DDE6184C027404F730EFB24C2525CD37A3F06F7219F9BA7E1AA15D381955B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_752DDE6184C027404F730EFB24C2525CD37A3F06F7219F9BA7E1AA15D381955B(void) {
    ALOGD("_vp9dec_752DDE6184C027404F730EFB24C2525CD37A3F06F7219F9BA7E1AA15D381955B() called");
    return 0;
}

/* Exported Object: vp9_get_mb_ss */
extern "C" __attribute__((visibility("default"))) void* vp9_get_mb_ss = NULL;

/* Demangled: VP9GetCoreNum */
extern "C" __attribute__((visibility("default"))) int VP9GetCoreNum(void) {
    ALOGD("VP9GetCoreNum() called");
    return 0;
}

/* Demangled: _vp9dec_DDF9041D23B831A4ADB65FDE160A23B29B686D6F1EC0A120E38753F25A3CFF01 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DDF9041D23B831A4ADB65FDE160A23B29B686D6F1EC0A120E38753F25A3CFF01(void) {
    ALOGD("_vp9dec_DDF9041D23B831A4ADB65FDE160A23B29B686D6F1EC0A120E38753F25A3CFF01() called");
    return 0;
}

/* Demangled: _vp9dec_32CC09C504B6D8CA358BAA1EA66F930A9A8D42DBA36C6B099C808EE3A648BC2E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_32CC09C504B6D8CA358BAA1EA66F930A9A8D42DBA36C6B099C808EE3A648BC2E(void) {
    ALOGD("_vp9dec_32CC09C504B6D8CA358BAA1EA66F930A9A8D42DBA36C6B099C808EE3A648BC2E() called");
    return 0;
}

/* Exported Object: vp9_sad32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x32 = NULL;

/* Demangled: _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A69DA11CAF9C2ED3EFB351585EE9A301E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A69DA11CAF9C2ED3EFB351585EE9A301E(void) {
    ALOGD("_vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A69DA11CAF9C2ED3EFB351585EE9A301E() called");
    return 0;
}

/* Demangled: _vp9dec_5FB1F6801B2E2221023AEB5D494456D60F10BB8409075B4E91595999F6772B8A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5FB1F6801B2E2221023AEB5D494456D60F10BB8409075B4E91595999F6772B8A(void) {
    ALOGD("_vp9dec_5FB1F6801B2E2221023AEB5D494456D60F10BB8409075B4E91595999F6772B8A() called");
    return 0;
}

/* Exported Object: vp9_sad8x16x3 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x16x3 = NULL;

/* Exported Object: vp9_sad4x4x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x4x4d = NULL;

/* Demangled: _vp9dec_6C941F9931D4828CDEAE5C330162083783361027716D473B9DE336B99A3446D4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6C941F9931D4828CDEAE5C330162083783361027716D473B9DE336B99A3446D4(void) {
    ALOGD("_vp9dec_6C941F9931D4828CDEAE5C330162083783361027716D473B9DE336B99A3446D4() called");
    return 0;
}

/* Exported Object: vp9_v_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_v_predictor_8x8 = NULL;

/* Exported Object: vp9_sad8x16_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x16_avg = NULL;

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: _vp9dec_53E55FA65DDB33AFBB42D97EE889FD986A93401857E956F4F04C486D560A8BDC */
extern "C" __attribute__((visibility("default"))) int _vp9dec_53E55FA65DDB33AFBB42D97EE889FD986A93401857E956F4F04C486D560A8BDC(void) {
    ALOGD("_vp9dec_53E55FA65DDB33AFBB42D97EE889FD986A93401857E956F4F04C486D560A8BDC() called");
    return 0;
}

/* Exported Object: vp9_loop_filter_vertical_edge_16 */
extern "C" __attribute__((visibility("default"))) void* vp9_loop_filter_vertical_edge_16 = NULL;

/* Demangled: _vp9dec_86E31112B5AF87CD3A2894624789EED0778EEF4D38850CB9DC6E1A053483BF30 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_86E31112B5AF87CD3A2894624789EED0778EEF4D38850CB9DC6E1A053483BF30(void) {
    ALOGD("_vp9dec_86E31112B5AF87CD3A2894624789EED0778EEF4D38850CB9DC6E1A053483BF30() called");
    return 0;
}

/* Demangled: _vp9dec_29EB0408EE21BF9798E55F124E9EA15069803EEB5889CADAC64DFFD90B921673 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_29EB0408EE21BF9798E55F124E9EA15069803EEB5889CADAC64DFFD90B921673(void) {
    ALOGD("_vp9dec_29EB0408EE21BF9798E55F124E9EA15069803EEB5889CADAC64DFFD90B921673() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance16x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance16x8 = NULL;

/* Demangled: _vp9dec_0F7F19CBCF3472FF3D6058DDBC1AF5E18E14D7FEBE122A0A6C00D972634123FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_0F7F19CBCF3472FF3D6058DDBC1AF5E18E14D7FEBE122A0A6C00D972634123FF(void) {
    ALOGD("_vp9dec_0F7F19CBCF3472FF3D6058DDBC1AF5E18E14D7FEBE122A0A6C00D972634123FF() called");
    return 0;
}

/* Demangled: VP9SwDecSetPbiFramerate */
extern "C" __attribute__((visibility("default"))) int VP9SwDecSetPbiFramerate(void) {
    ALOGD("VP9SwDecSetPbiFramerate() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: VP9MemCopy */
extern "C" __attribute__((visibility("default"))) int VP9MemCopy(void) {
    ALOGD("VP9MemCopy() called");
    return 0;
}

/* Demangled: _vp9dec_901ACA90AC229699C1849A17FC858E34 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_901ACA90AC229699C1849A17FC858E34(void) {
    ALOGD("_vp9dec_901ACA90AC229699C1849A17FC858E34() called");
    return 0;
}

/* Demangled: _vp9dec_63B6984A6E616F09C523712C3FECB0B48E14D7FEBE122A0A6C00D972634123FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_63B6984A6E616F09C523712C3FECB0B48E14D7FEBE122A0A6C00D972634123FF(void) {
    ALOGD("_vp9dec_63B6984A6E616F09C523712C3FECB0B48E14D7FEBE122A0A6C00D972634123FF() called");
    return 0;
}

/* Exported Object: vp9_dc_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_dc_predictor_16x16 = NULL;

/* Demangled: _vp9dec_5D88D3867C063B40A484B156F9A6EAD4F54BC17DEB5D66EBF34E54B564DF0D30 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5D88D3867C063B40A484B156F9A6EAD4F54BC17DEB5D66EBF34E54B564DF0D30(void) {
    ALOGD("_vp9dec_5D88D3867C063B40A484B156F9A6EAD4F54BC17DEB5D66EBF34E54B564DF0D30() called");
    return 0;
}

/* Demangled: VP9MutexUnlock */
extern "C" __attribute__((visibility("default"))) int VP9MutexUnlock(void) {
    ALOGD("VP9MutexUnlock() called");
    return 0;
}

/* Exported Object: vp9_sad16x32x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x32x4d = NULL;

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: _vp9dec_A9EA9D0A5C817173EBCB670215443005F853B2EBABD96962907A76FB3CA7310C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A9EA9D0A5C817173EBCB670215443005F853B2EBABD96962907A76FB3CA7310C(void) {
    ALOGD("_vp9dec_A9EA9D0A5C817173EBCB670215443005F853B2EBABD96962907A76FB3CA7310C() called");
    return 0;
}

/* Exported Object: vp9_v_predictor_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_v_predictor_32x32 = NULL;

/* Demangled: _vp9dec_A4036B77218FB160539CE97815D9B5492D785C900886279F83FD85FEA4AEDE2C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A4036B77218FB160539CE97815D9B5492D785C900886279F83FD85FEA4AEDE2C(void) {
    ALOGD("_vp9dec_A4036B77218FB160539CE97815D9B5492D785C900886279F83FD85FEA4AEDE2C() called");
    return 0;
}

/* Demangled: _vp9dec_045536044D23B836612AD7EC5B0A07769ADA9BC0B0CD44F74C7EECFA9B106961 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_045536044D23B836612AD7EC5B0A07769ADA9BC0B0CD44F74C7EECFA9B106961(void) {
    ALOGD("_vp9dec_045536044D23B836612AD7EC5B0A07769ADA9BC0B0CD44F74C7EECFA9B106961() called");
    return 0;
}

/* Exported Object: num_4x4_blocks_high_lookup */
extern "C" __attribute__((visibility("default"))) void* num_4x4_blocks_high_lookup = NULL;

/* Demangled: VP9DecoderGetNextDisplay */
extern "C" __attribute__((visibility("default"))) int VP9DecoderGetNextDisplay(void) {
    ALOGD("VP9DecoderGetNextDisplay() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance16x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance16x32 = NULL;

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9B30C66C3243CED7BFAB762B1151B83F6 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9B30C66C3243CED7BFAB762B1151B83F6(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9B30C66C3243CED7BFAB762B1151B83F6() called");
    return 0;
}

/* Exported Object: _vp9dec_AAC7DF9932BB1860A393C6AD816D1EF92C7E91D60722B5816C9304E043EFCFC8 */
extern "C" __attribute__((visibility("default"))) void* _vp9dec_AAC7DF9932BB1860A393C6AD816D1EF92C7E91D60722B5816C9304E043EFCFC8 = NULL;

/* Demangled: VP9SemWait */
extern "C" __attribute__((visibility("default"))) int VP9SemWait(void) {
    ALOGD("VP9SemWait() called");
    return 0;
}

/* Exported Object: vp9_variance_halfpixvar16x16_hv */
extern "C" __attribute__((visibility("default"))) void* vp9_variance_halfpixvar16x16_hv = NULL;

/* Demangled: _vp9dec_CD7B2D441E5D347FD7FEB5439A7D74F5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_CD7B2D441E5D347FD7FEB5439A7D74F5(void) {
    ALOGD("_vp9dec_CD7B2D441E5D347FD7FEB5439A7D74F5() called");
    return 0;
}

/* Exported Object: max_txsize_lookup */
extern "C" __attribute__((visibility("default"))) void* max_txsize_lookup = NULL;

/* Demangled: _vp9dec_F8611996A93A5EF7DB8783EAA4929B52 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8611996A93A5EF7DB8783EAA4929B52(void) {
    ALOGD("_vp9dec_F8611996A93A5EF7DB8783EAA4929B52() called");
    return 0;
}

/* Demangled: _vp9dec_48C6B80771EE1F3B3FCFF948BA9D3A1C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_48C6B80771EE1F3B3FCFF948BA9D3A1C(void) {
    ALOGD("_vp9dec_48C6B80771EE1F3B3FCFF948BA9D3A1C() called");
    return 0;
}

/* Demangled: _vp9dec_570C8C76B3E6A0478C747CA508303CE3E0F20FA0EC81AD3360BD8076FBA5A7F1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_570C8C76B3E6A0478C747CA508303CE3E0F20FA0EC81AD3360BD8076FBA5A7F1(void) {
    ALOGD("_vp9dec_570C8C76B3E6A0478C747CA508303CE3E0F20FA0EC81AD3360BD8076FBA5A7F1() called");
    return 0;
}

/* Demangled: _vp9dec_E103178B2C19FC0397AE995258D3D6874242CEC6CE5499BA927E9F48759FF32E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_E103178B2C19FC0397AE995258D3D6874242CEC6CE5499BA927E9F48759FF32E(void) {
    ALOGD("_vp9dec_E103178B2C19FC0397AE995258D3D6874242CEC6CE5499BA927E9F48759FF32E() called");
    return 0;
}

/* Demangled: _vp9dec_B1E0EE1A7E79C74517E7AFEB143A35F9BE32A08FF28F3D08B7E976516AD5CB8D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B1E0EE1A7E79C74517E7AFEB143A35F9BE32A08FF28F3D08B7E976516AD5CB8D(void) {
    ALOGD("_vp9dec_B1E0EE1A7E79C74517E7AFEB143A35F9BE32A08FF28F3D08B7E976516AD5CB8D() called");
    return 0;
}

/* Exported Object: vp9_kf_y_mode_prob */
extern "C" __attribute__((visibility("default"))) void* vp9_kf_y_mode_prob = NULL;

/* Demangled: _vp9dec_4DD4E721F9AC6914CB19F3285925D4328D9931AD3BF182DA1B7D2009E5EBC916 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4DD4E721F9AC6914CB19F3285925D4328D9931AD3BF182DA1B7D2009E5EBC916(void) {
    ALOGD("_vp9dec_4DD4E721F9AC6914CB19F3285925D4328D9931AD3BF182DA1B7D2009E5EBC916() called");
    return 0;
}

/* Exported Object: vp9_mv_fp_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_fp_tree = NULL;

/* Demangled: _vp9dec_00A46662B1C5399099D4A1608C1E2B06EBAD3AF6B0FA39D22A3DA6840F1F8BAE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_00A46662B1C5399099D4A1608C1E2B06EBAD3AF6B0FA39D22A3DA6840F1F8BAE(void) {
    ALOGD("_vp9dec_00A46662B1C5399099D4A1608C1E2B06EBAD3AF6B0FA39D22A3DA6840F1F8BAE() called");
    return 0;
}

/* Exported Object: vp9_sad64x32x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad64x32x4d = NULL;

/* Demangled: VP9SwDecQueryCapability */
extern "C" __attribute__((visibility("default"))) int VP9SwDecQueryCapability(void) {
    ALOGD("VP9SwDecQueryCapability() called");
    return 0;
}

/* Demangled: _vp9dec_4006286E891CF59DE611A1C1AC05D5A18E14D7FEBE122A0A6C00D972634123FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4006286E891CF59DE611A1C1AC05D5A18E14D7FEBE122A0A6C00D972634123FF(void) {
    ALOGD("_vp9dec_4006286E891CF59DE611A1C1AC05D5A18E14D7FEBE122A0A6C00D972634123FF() called");
    return 0;
}

/* Exported Object: num_8x8_blocks_high_lookup */
extern "C" __attribute__((visibility("default"))) void* num_8x8_blocks_high_lookup = NULL;

/* Demangled: _vp9dec_3B42D9AB419A500471D0F7A1FFA7E09ECD216EA2F453E21341316361B0C4BCB7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3B42D9AB419A500471D0F7A1FFA7E09ECD216EA2F453E21341316361B0C4BCB7(void) {
    ALOGD("_vp9dec_3B42D9AB419A500471D0F7A1FFA7E09ECD216EA2F453E21341316361B0C4BCB7() called");
    return 0;
}

/* Demangled: _vp9dec_ED1C650067C9BAFC3C446B5F1996C49D34D5CCA1926DCED38A5D0928A9F05D7C11F806BA703AE261F4D45367AB1412CB */
extern "C" __attribute__((visibility("default"))) int _vp9dec_ED1C650067C9BAFC3C446B5F1996C49D34D5CCA1926DCED38A5D0928A9F05D7C11F806BA703AE261F4D45367AB1412CB(void) {
    ALOGD("_vp9dec_ED1C650067C9BAFC3C446B5F1996C49D34D5CCA1926DCED38A5D0928A9F05D7C11F806BA703AE261F4D45367AB1412CB() called");
    return 0;
}

/* Demangled: __aeabi_idiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv(void) {
    ALOGD("__aeabi_idiv() called");
    return 0;
}

/* Exported Object: vp9_mv_class_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_class_tree = NULL;

/* Exported Object: vp9_sub_pixel_variance32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance32x32 = NULL;

/* Demangled: _vp9dec_706721E4172F86AFCDC7FF57E31AA217 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_706721E4172F86AFCDC7FF57E31AA217(void) {
    ALOGD("_vp9dec_706721E4172F86AFCDC7FF57E31AA217() called");
    return 0;
}

/* Demangled: _vp9dec_5D88D3867C063B40A484B156F9A6EAD49F12B4B34C59FAE2865E80968EA8C305 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5D88D3867C063B40A484B156F9A6EAD49F12B4B34C59FAE2865E80968EA8C305(void) {
    ALOGD("_vp9dec_5D88D3867C063B40A484B156F9A6EAD49F12B4B34C59FAE2865E80968EA8C305() called");
    return 0;
}

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E8BAB7143B6529C4029108D2A87355E943 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E8BAB7143B6529C4029108D2A87355E943(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E8BAB7143B6529C4029108D2A87355E943() called");
    return 0;
}

/* Exported Object: vp9_iht4x4_16_add */
extern "C" __attribute__((visibility("default"))) void* vp9_iht4x4_16_add = NULL;

/* Demangled: _vp9dec_08E587B7A1426CDF16D02A633DBD9FB510CF5D31D2D6956C52C174550C7B97B7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_08E587B7A1426CDF16D02A633DBD9FB510CF5D31D2D6956C52C174550C7B97B7(void) {
    ALOGD("_vp9dec_08E587B7A1426CDF16D02A633DBD9FB510CF5D31D2D6956C52C174550C7B97B7() called");
    return 0;
}

/* Demangled: _vp9dec_48EBD9E944D45921EC64A8CF627A4CA5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_48EBD9E944D45921EC64A8CF627A4CA5(void) {
    ALOGD("_vp9dec_48EBD9E944D45921EC64A8CF627A4CA5() called");
    return 0;
}

/* Demangled: _vp9dec_434BC0205A9FEA0F0208519F57EA44B8534FEE8EF53FE667F7F5229F19CFCC99 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_434BC0205A9FEA0F0208519F57EA44B8534FEE8EF53FE667F7F5229F19CFCC99(void) {
    ALOGD("_vp9dec_434BC0205A9FEA0F0208519F57EA44B8534FEE8EF53FE667F7F5229F19CFCC99() called");
    return 0;
}

/* Exported Object: mi_width_log2_lookup */
extern "C" __attribute__((visibility("default"))) void* mi_width_log2_lookup = NULL;

/* Demangled: VP9SemPost */
extern "C" __attribute__((visibility("default"))) int VP9SemPost(void) {
    ALOGD("VP9SemPost() called");
    return 0;
}

/* Demangled: VP9DeBindingCore */
extern "C" __attribute__((visibility("default"))) int VP9DeBindingCore(void) {
    ALOGD("VP9DeBindingCore() called");
    return 0;
}

/* Demangled: _vp9dec_9E186C12926DE84968B7092C2E1DF1819143BDA5AD3883123832732343C2BA07 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9E186C12926DE84968B7092C2E1DF1819143BDA5AD3883123832732343C2BA07(void) {
    ALOGD("_vp9dec_9E186C12926DE84968B7092C2E1DF1819143BDA5AD3883123832732343C2BA07() called");
    return 0;
}

/* Demangled: VP9SwDecNextPicture */
extern "C" __attribute__((visibility("default"))) int VP9SwDecNextPicture(void) {
    ALOGD("VP9SwDecNextPicture() called");
    return 0;
}

/* Demangled: _vp9dec_07734D23DC502151D7844EF67C6DCC9B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_07734D23DC502151D7844EF67C6DCC9B(void) {
    ALOGD("_vp9dec_07734D23DC502151D7844EF67C6DCC9B() called");
    return 0;
}

/* Demangled: _vp9dec_383FD33E54E4708FE400DAC78B2330DD9B94D92958F132249B7DC387C60418E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_383FD33E54E4708FE400DAC78B2330DD9B94D92958F132249B7DC387C60418E0(void) {
    ALOGD("_vp9dec_383FD33E54E4708FE400DAC78B2330DD9B94D92958F132249B7DC387C60418E0() called");
    return 0;
}

/* Exported Object: b_width_log2_lookup */
extern "C" __attribute__((visibility("default"))) void* b_width_log2_lookup = NULL;

/* Demangled: _vp9dec_F6038C29A97BF746607F84BB301990AC */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F6038C29A97BF746607F84BB301990AC(void) {
    ALOGD("_vp9dec_F6038C29A97BF746607F84BB301990AC() called");
    return 0;
}

/* Demangled: _vp9dec_00A46662B1C5399099D4A1608C1E2B06028ECB0D0E516129CDC45020D8CED0CF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_00A46662B1C5399099D4A1608C1E2B06028ECB0D0E516129CDC45020D8CED0CF(void) {
    ALOGD("_vp9dec_00A46662B1C5399099D4A1608C1E2B06028ECB0D0E516129CDC45020D8CED0CF() called");
    return 0;
}

/* Exported Object: vp9_sad32x32x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x32x4d = NULL;

/* Demangled: _vp9dec_5F735839B475784819D189E5E8D7FA52 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5F735839B475784819D189E5E8D7FA52(void) {
    ALOGD("_vp9dec_5F735839B475784819D189E5E8D7FA52() called");
    return 0;
}

/* Demangled: _vp9dec_81848BDB1BDEFCA2F4BABEFC5556A3BA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_81848BDB1BDEFCA2F4BABEFC5556A3BA(void) {
    ALOGD("_vp9dec_81848BDB1BDEFCA2F4BABEFC5556A3BA() called");
    return 0;
}

/* Demangled: _vp9dec_FAFB6BA357D8BFB3CE187227640FE5729ADA9BC0B0CD44F74C7EECFA9B106961 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_FAFB6BA357D8BFB3CE187227640FE5729ADA9BC0B0CD44F74C7EECFA9B106961(void) {
    ALOGD("_vp9dec_FAFB6BA357D8BFB3CE187227640FE5729ADA9BC0B0CD44F74C7EECFA9B106961() called");
    return 0;
}

/* Exported Object: vp9_convolve_copy */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve_copy = NULL;

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Exported Object: vp9_col_iscan_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_col_iscan_16x16 = NULL;

/* Demangled: _vp9dec_8868A8DFE92B30ADD8828F1C561A8575287FAA5DB503BEC6348B63EF8FEA2979 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_8868A8DFE92B30ADD8828F1C561A8575287FAA5DB503BEC6348B63EF8FEA2979(void) {
    ALOGD("_vp9dec_8868A8DFE92B30ADD8828F1C561A8575287FAA5DB503BEC6348B63EF8FEA2979() called");
    return 0;
}

/* Demangled: _vp9dec_50E4D322B678F29BDA5F57B2186E57D4CB93A6F2A424113F143AF55E951B7388 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_50E4D322B678F29BDA5F57B2186E57D4CB93A6F2A424113F143AF55E951B7388(void) {
    ALOGD("_vp9dec_50E4D322B678F29BDA5F57B2186E57D4CB93A6F2A424113F143AF55E951B7388() called");
    return 0;
}

/* Demangled: _vp9dec_D3B7650C72F7EC10CC0AE397D948D9FBB66A47550D4D925183DDD8B947BE7CA9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D3B7650C72F7EC10CC0AE397D948D9FBB66A47550D4D925183DDD8B947BE7CA9(void) {
    ALOGD("_vp9dec_D3B7650C72F7EC10CC0AE397D948D9FBB66A47550D4D925183DDD8B947BE7CA9() called");
    return 0;
}

/* Demangled: _vp9dec_827250923771B24CD08BB4A4203FBC70E73A8084BD12CA1ED6C971A3F10F7D5F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_827250923771B24CD08BB4A4203FBC70E73A8084BD12CA1ED6C971A3F10F7D5F(void) {
    ALOGD("_vp9dec_827250923771B24CD08BB4A4203FBC70E73A8084BD12CA1ED6C971A3F10F7D5F() called");
    return 0;
}

/* Exported Object: size_group_lookup */
extern "C" __attribute__((visibility("default"))) void* size_group_lookup = NULL;

/* Demangled: _vp9dec_61EAE165665B579C3BE91F412A13C66C6B95E93A6E38A8F01FD8FF25689A0FBD */
extern "C" __attribute__((visibility("default"))) int _vp9dec_61EAE165665B579C3BE91F412A13C66C6B95E93A6E38A8F01FD8FF25689A0FBD(void) {
    ALOGD("_vp9dec_61EAE165665B579C3BE91F412A13C66C6B95E93A6E38A8F01FD8FF25689A0FBD() called");
    return 0;
}

/* Demangled: _vp9dec_5E5B2300A762254F6ACF31163F9AC4FF35F60776189F64FC4E255D03B65022DE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5E5B2300A762254F6ACF31163F9AC4FF35F60776189F64FC4E255D03B65022DE(void) {
    ALOGD("_vp9dec_5E5B2300A762254F6ACF31163F9AC4FF35F60776189F64FC4E255D03B65022DE() called");
    return 0;
}

/* Demangled: _vp9dec_5F2E98F2002190949BF09ED271DE8680EA1C4CF67041FF40E2717D370FD391D5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5F2E98F2002190949BF09ED271DE8680EA1C4CF67041FF40E2717D370FD391D5(void) {
    ALOGD("_vp9dec_5F2E98F2002190949BF09ED271DE8680EA1C4CF67041FF40E2717D370FD391D5() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Exported Object: vp9_d45_predictor_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_d45_predictor_32x32 = NULL;

/* Demangled: _vp9dec_33F77281C889C62A446A383395564B09DFF069DE0406BF4470A4A286AFCA76E5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_33F77281C889C62A446A383395564B09DFF069DE0406BF4470A4A286AFCA76E5(void) {
    ALOGD("_vp9dec_33F77281C889C62A446A383395564B09DFF069DE0406BF4470A4A286AFCA76E5() called");
    return 0;
}

/* Exported Object: vp9_sad32x32_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x32_avg = NULL;

/* Demangled: VP9GetThreadNeedByFrameSize */
extern "C" __attribute__((visibility("default"))) int VP9GetThreadNeedByFrameSize(void) {
    ALOGD("VP9GetThreadNeedByFrameSize() called");
    return 0;
}

/* Demangled: _vp9dec_4C8CC202ED7376EB3F544D5F9E21CCBE0F10BB8409075B4E91595999F6772B8A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4C8CC202ED7376EB3F544D5F9E21CCBE0F10BB8409075B4E91595999F6772B8A(void) {
    ALOGD("_vp9dec_4C8CC202ED7376EB3F544D5F9E21CCBE0F10BB8409075B4E91595999F6772B8A() called");
    return 0;
}

/* Exported Object: vp9_row_iscan_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_row_iscan_8x8 = NULL;

/* Demangled: _vp9dec_24902FE7C6760000769FCA0129BAABA281F76C6FC0356BC2A01762E359071AEF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_24902FE7C6760000769FCA0129BAABA281F76C6FC0356BC2A01762E359071AEF(void) {
    ALOGD("_vp9dec_24902FE7C6760000769FCA0129BAABA281F76C6FC0356BC2A01762E359071AEF() called");
    return 0;
}

/* Demangled: _vp9dec_51A6D8631DF8F39A392893B04443E1CD */
extern "C" __attribute__((visibility("default"))) int _vp9dec_51A6D8631DF8F39A392893B04443E1CD(void) {
    ALOGD("_vp9dec_51A6D8631DF8F39A392893B04443E1CD() called");
    return 0;
}

/* Exported Object: vp9_d63_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_d63_predictor_8x8 = NULL;

/* Demangled: _vp9dec_5020737859CC86AAFA00D736CBC05BD7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5020737859CC86AAFA00D736CBC05BD7(void) {
    ALOGD("_vp9dec_5020737859CC86AAFA00D736CBC05BD7() called");
    return 0;
}

/* Demangled: _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0E99E43D83E445E8405EA4BBCF33D5C77 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0E99E43D83E445E8405EA4BBCF33D5C77(void) {
    ALOGD("_vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0E99E43D83E445E8405EA4BBCF33D5C77() called");
    return 0;
}

/* Exported Object: vp9_variance32x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance32x64 = NULL;

/* Demangled: _vp9dec_EB48D1649B9E72983305EA56FCA97E9C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_EB48D1649B9E72983305EA56FCA97E9C(void) {
    ALOGD("_vp9dec_EB48D1649B9E72983305EA56FCA97E9C() called");
    return 0;
}

/* Exported Object: vp9_idct32x32_135_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct32x32_135_add = NULL;

/* Demangled: VP9GetBClusterIndex */
extern "C" __attribute__((visibility("default"))) int VP9GetBClusterIndex(void) {
    ALOGD("VP9GetBClusterIndex() called");
    return 0;
}

/* Demangled: _vp9dec_C5C996D53C0AFBF39271F7D49C9D54543DA562D19E7A177B2FBC35A9531B022A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C5C996D53C0AFBF39271F7D49C9D54543DA562D19E7A177B2FBC35A9531B022A(void) {
    ALOGD("_vp9dec_C5C996D53C0AFBF39271F7D49C9D54543DA562D19E7A177B2FBC35A9531B022A() called");
    return 0;
}

/* Demangled: _vp9dec_2BD6D67B770053CE01D4E76E2441EE5A2DBD844D1B8436C939ABF75E08A97424 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_2BD6D67B770053CE01D4E76E2441EE5A2DBD844D1B8436C939ABF75E08A97424(void) {
    ALOGD("_vp9dec_2BD6D67B770053CE01D4E76E2441EE5A2DBD844D1B8436C939ABF75E08A97424() called");
    return 0;
}

/* Exported Object: vp9_idct32x32_34_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct32x32_34_add = NULL;

/* Exported Object: vp9_idct4x4_1_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct4x4_1_add = NULL;

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E87195A4DDCC60A3E6FD99311DEA04853B53002D80AB43B86F6989BB23C98A5EB8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E87195A4DDCC60A3E6FD99311DEA04853B53002D80AB43B86F6989BB23C98A5EB8(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E87195A4DDCC60A3E6FD99311DEA04853B53002D80AB43B86F6989BB23C98A5EB8() called");
    return 0;
}

/* Exported Object: num_4x4_blocks_wide_lookup */
extern "C" __attribute__((visibility("default"))) void* num_4x4_blocks_wide_lookup = NULL;

/* Exported Object: vp9_idct8x8_64_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct8x8_64_add = NULL;

/* Exported Object: vp9_kf_partition_probs */
extern "C" __attribute__((visibility("default"))) void* vp9_kf_partition_probs = NULL;

/* Demangled: VP9DecoderDecodeOneUnit */
extern "C" __attribute__((visibility("default"))) int VP9DecoderDecodeOneUnit(void) {
    ALOGD("VP9DecoderDecodeOneUnit() called");
    return 0;
}

/* Exported Object: vp9_convolve8 */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve8 = NULL;

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9C03D012F6D2D2FE2D5795CBA6EBF2FB9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9C03D012F6D2D2FE2D5795CBA6EBF2FB9(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9C03D012F6D2D2FE2D5795CBA6EBF2FB9() called");
    return 0;
}

/* Demangled: _vp9dec_ABDED049F17D8534847BA9F826040A4DD45D462A2616A5C6DAFC1B6C570EA675 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_ABDED049F17D8534847BA9F826040A4DD45D462A2616A5C6DAFC1B6C570EA675(void) {
    ALOGD("_vp9dec_ABDED049F17D8534847BA9F826040A4DD45D462A2616A5C6DAFC1B6C570EA675() called");
    return 0;
}

/* Exported Object: vp9_short_fht8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_short_fht8x8 = NULL;

/* Exported Object: _vp9dec_AAC7DF9932BB1860A393C6AD816D1EF98854F946472B1E98DAF0F8A95AAF4A7C */
extern "C" __attribute__((visibility("default"))) void* _vp9dec_AAC7DF9932BB1860A393C6AD816D1EF98854F946472B1E98DAF0F8A95AAF4A7C = NULL;

/* Exported Object: vp9_sad8x8x3 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x8x3 = NULL;

/* Exported Object: vp9_refining_search_sad */
extern "C" __attribute__((visibility("default"))) void* vp9_refining_search_sad = NULL;

/* Exported Object: partition_lookup */
extern "C" __attribute__((visibility("default"))) void* partition_lookup = NULL;

/* Demangled: _vp9dec_EF1DDADB29208E44D47DC72A00EF2261 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_EF1DDADB29208E44D47DC72A00EF2261(void) {
    ALOGD("_vp9dec_EF1DDADB29208E44D47DC72A00EF2261() called");
    return 0;
}

/* Demangled: _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CA54A7848A651D35AA5C148E9E36C114E4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CA54A7848A651D35AA5C148E9E36C114E4(void) {
    ALOGD("_vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CA54A7848A651D35AA5C148E9E36C114E4() called");
    return 0;
}

/* Exported Object: vp9_sad8x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x16 = NULL;

/* Exported Object: vp9_sad32x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x64 = NULL;

/* Demangled: _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BE3609ED1DE2BB5C21F7B2F01B011F334 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BE3609ED1DE2BB5C21F7B2F01B011F334(void) {
    ALOGD("_vp9dec_AD8B44EB52369A1CE6877A4E82DB569BE3609ED1DE2BB5C21F7B2F01B011F334() called");
    return 0;
}

/* Demangled: _vp9dec_58B089F0491522EDD8FEE6B781094D4755153CFDAD30D9ABFE39D2BF4D1CB4A1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_58B089F0491522EDD8FEE6B781094D4755153CFDAD30D9ABFE39D2BF4D1CB4A1(void) {
    ALOGD("_vp9dec_58B089F0491522EDD8FEE6B781094D4755153CFDAD30D9ABFE39D2BF4D1CB4A1() called");
    return 0;
}

/* Demangled: VP9Sleep */
extern "C" __attribute__((visibility("default"))) int VP9Sleep(void) {
    ALOGD("VP9Sleep() called");
    return 0;
}

/* Exported Object: vp9_sad16x16x3 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x16x3 = NULL;

/* Demangled: _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BC03D012F6D2D2FE2D5795CBA6EBF2FB9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BC03D012F6D2D2FE2D5795CBA6EBF2FB9(void) {
    ALOGD("_vp9dec_AD8B44EB52369A1CE6877A4E82DB569BC03D012F6D2D2FE2D5795CBA6EBF2FB9() called");
    return 0;
}

/* Demangled: VP9GetCPUMaskPerCluster */
extern "C" __attribute__((visibility("default"))) int VP9GetCPUMaskPerCluster(void) {
    ALOGD("VP9GetCPUMaskPerCluster() called");
    return 0;
}

/* Demangled: _vp9dec_F05710F50841213A0CD7566AA3F979E6BE32A08FF28F3D08B7E976516AD5CB8D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F05710F50841213A0CD7566AA3F979E6BE32A08FF28F3D08B7E976516AD5CB8D(void) {
    ALOGD("_vp9dec_F05710F50841213A0CD7566AA3F979E6BE32A08FF28F3D08B7E976516AD5CB8D() called");
    return 0;
}

/* Demangled: _vp9dec_A4CA357EECF185734F9FB89CADE1D094884F887BEF188E913FB63385C932AE166C04079DCBD55D372291298D6DBCA8CF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A4CA357EECF185734F9FB89CADE1D094884F887BEF188E913FB63385C932AE166C04079DCBD55D372291298D6DBCA8CF(void) {
    ALOGD("_vp9dec_A4CA357EECF185734F9FB89CADE1D094884F887BEF188E913FB63385C932AE166C04079DCBD55D372291298D6DBCA8CF() called");
    return 0;
}

/* Demangled: _vp9dec_E53C2ADEFF6486AE901FB532317E4566CB74D70F06F17407AE67944A457197EA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_E53C2ADEFF6486AE901FB532317E4566CB74D70F06F17407AE67944A457197EA(void) {
    ALOGD("_vp9dec_E53C2ADEFF6486AE901FB532317E4566CB74D70F06F17407AE67944A457197EA() called");
    return 0;
}

/* Demangled: _vp9dec_3709BB3173143947DC2AA24706309EC56C391DCB7C386C860C3A799546FA1FC9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3709BB3173143947DC2AA24706309EC56C391DCB7C386C860C3A799546FA1FC9(void) {
    ALOGD("_vp9dec_3709BB3173143947DC2AA24706309EC56C391DCB7C386C860C3A799546FA1FC9() called");
    return 0;
}

/* Demangled: _vp9dec_AD36E5B3B29C20B8D2F70EF27405F3CD8E14D7FEBE122A0A6C00D972634123FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD36E5B3B29C20B8D2F70EF27405F3CD8E14D7FEBE122A0A6C00D972634123FF(void) {
    ALOGD("_vp9dec_AD36E5B3B29C20B8D2F70EF27405F3CD8E14D7FEBE122A0A6C00D972634123FF() called");
    return 0;
}

/* Demangled: _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D083BE88ADA77C08275BF6B467867257E8AD240179F8B1FA43F265D9935039172E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D083BE88ADA77C08275BF6B467867257E8AD240179F8B1FA43F265D9935039172E(void) {
    ALOGD("_vp9dec_F8F0A78118CD5AED86CFDEC28440D3D083BE88ADA77C08275BF6B467867257E8AD240179F8B1FA43F265D9935039172E() called");
    return 0;
}

/* Demangled: _vp9dec_C5C996D53C0AFBF39271F7D49C9D54541B55A7001E5C551A867EFDA46ABE53F7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C5C996D53C0AFBF39271F7D49C9D54541B55A7001E5C551A867EFDA46ABE53F7(void) {
    ALOGD("_vp9dec_C5C996D53C0AFBF39271F7D49C9D54541B55A7001E5C551A867EFDA46ABE53F7() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance8x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance8x4 = NULL;

/* Demangled: _vp9dec_14C1517247E78438B2C4B10F0386DD37F3BCE4071B26A063ABEBBAB1D09381D0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_14C1517247E78438B2C4B10F0386DD37F3BCE4071B26A063ABEBBAB1D09381D0(void) {
    ALOGD("_vp9dec_14C1517247E78438B2C4B10F0386DD37F3BCE4071B26A063ABEBBAB1D09381D0() called");
    return 0;
}

/* Demangled: _vp9dec_100447A5905A6C9C3695FF2696AD8A9A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_100447A5905A6C9C3695FF2696AD8A9A(void) {
    ALOGD("_vp9dec_100447A5905A6C9C3695FF2696AD8A9A() called");
    return 0;
}

/* Exported Object: vp9_full_search_sad */
extern "C" __attribute__((visibility("default"))) void* vp9_full_search_sad = NULL;

/* Exported Object: num_8x8_blocks_wide_lookup */
extern "C" __attribute__((visibility("default"))) void* num_8x8_blocks_wide_lookup = NULL;

/* Exported Object: vp9_variance_halfpixvar16x16_h */
extern "C" __attribute__((visibility("default"))) void* vp9_variance_halfpixvar16x16_h = NULL;

/* Demangled: _vp9dec_0AFD4523CE64FCEF3B2A05E348D7DFA809F2B41328607FE8C6476C78C7DC1E68 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_0AFD4523CE64FCEF3B2A05E348D7DFA809F2B41328607FE8C6476C78C7DC1E68(void) {
    ALOGD("_vp9dec_0AFD4523CE64FCEF3B2A05E348D7DFA809F2B41328607FE8C6476C78C7DC1E68() called");
    return 0;
}

/* Demangled: _vp9dec_AAE789B8AC2D4955FC1A8F5D3C7830CA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AAE789B8AC2D4955FC1A8F5D3C7830CA(void) {
    ALOGD("_vp9dec_AAE789B8AC2D4955FC1A8F5D3C7830CA() called");
    return 0;
}

/* Demangled: _vp9dec_9042445E16727EE423F5A2F289E4C9B6CA17E257A26E00FF46B2DCA387BEEA3B0608E5342C17381AF763C60439D1AF03 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9042445E16727EE423F5A2F289E4C9B6CA17E257A26E00FF46B2DCA387BEEA3B0608E5342C17381AF763C60439D1AF03(void) {
    ALOGD("_vp9dec_9042445E16727EE423F5A2F289E4C9B6CA17E257A26E00FF46B2DCA387BEEA3B0608E5342C17381AF763C60439D1AF03() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance8x8 = NULL;

/* Demangled: _vp9dec_61EAE165665B579C3BE91F412A13C66C46E3A7F359F74F95BA735AC27994C899 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_61EAE165665B579C3BE91F412A13C66C46E3A7F359F74F95BA735AC27994C899(void) {
    ALOGD("_vp9dec_61EAE165665B579C3BE91F412A13C66C46E3A7F359F74F95BA735AC27994C899() called");
    return 0;
}

/* Exported Object: partition_context_lookup */
extern "C" __attribute__((visibility("default"))) void* partition_context_lookup = NULL;

/* Demangled: VP9SwDecUpdateSpeedyMode */
extern "C" __attribute__((visibility("default"))) int VP9SwDecUpdateSpeedyMode(void) {
    ALOGD("VP9SwDecUpdateSpeedyMode() called");
    return 0;
}

/* Demangled: _vp9dec_6FD64A88D386A283DC602319C5A67BF82DBD844D1B8436C939ABF75E08A97424 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6FD64A88D386A283DC602319C5A67BF82DBD844D1B8436C939ABF75E08A97424(void) {
    ALOGD("_vp9dec_6FD64A88D386A283DC602319C5A67BF82DBD844D1B8436C939ABF75E08A97424() called");
    return 0;
}

/* Demangled: _vp9dec_3B1C3CEB99A582DE27C81A304FF0C38BE71ADD860F787EF670B635E19038256453002D80AB43B86F6989BB23C98A5EB8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3B1C3CEB99A582DE27C81A304FF0C38BE71ADD860F787EF670B635E19038256453002D80AB43B86F6989BB23C98A5EB8(void) {
    ALOGD("_vp9dec_3B1C3CEB99A582DE27C81A304FF0C38BE71ADD860F787EF670B635E19038256453002D80AB43B86F6989BB23C98A5EB8() called");
    return 0;
}

/* Demangled: __divsi3 */
extern "C" __attribute__((visibility("default"))) int __divsi3(void) {
    ALOGD("__divsi3() called");
    return 0;
}

/* Demangled: _vp9dec_719D98A4632BC017D314D9AD09540648 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_719D98A4632BC017D314D9AD09540648(void) {
    ALOGD("_vp9dec_719D98A4632BC017D314D9AD09540648() called");
    return 0;
}

/* Exported Object: col_scan_4x4_neighbors */
extern "C" __attribute__((visibility("default"))) void* col_scan_4x4_neighbors = NULL;

/* Exported Object: vp9_sub_pel_filters_8lp_composite */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pel_filters_8lp_composite = NULL;

/* Demangled: _vp9dec_1D82879F8250C05752C669739B6459B92D785C900886279F83FD85FEA4AEDE2C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_1D82879F8250C05752C669739B6459B92D785C900886279F83FD85FEA4AEDE2C(void) {
    ALOGD("_vp9dec_1D82879F8250C05752C669739B6459B92D785C900886279F83FD85FEA4AEDE2C() called");
    return 0;
}

/* Exported Object: col_scan_8x8_neighbors */
extern "C" __attribute__((visibility("default"))) void* col_scan_8x8_neighbors = NULL;

/* Demangled: _vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7B2A0954B25B76D3C960CA86B726F52E9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7B2A0954B25B76D3C960CA86B726F52E9(void) {
    ALOGD("_vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7B2A0954B25B76D3C960CA86B726F52E9() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance4x4 = NULL;

/* Demangled: _vp9dec_F4197AB3024921090F4FF61F963E2B2BC4BB10B9050440F08BB57849470CACFE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F4197AB3024921090F4FF61F963E2B2BC4BB10B9050440F08BB57849470CACFE(void) {
    ALOGD("_vp9dec_F4197AB3024921090F4FF61F963E2B2BC4BB10B9050440F08BB57849470CACFE() called");
    return 0;
}

/* Demangled: VP9DecoderGetParameter */
extern "C" __attribute__((visibility("default"))) int VP9DecoderGetParameter(void) {
    ALOGD("VP9DecoderGetParameter() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance4x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance4x8 = NULL;

/* Demangled: VP9ExtMalloc */
extern "C" __attribute__((visibility("default"))) int VP9ExtMalloc(void) {
    ALOGD("VP9ExtMalloc() called");
    return 0;
}

/* Exported Object: vp9_convolve_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve_avg = NULL;

/* Exported Object: vp9_variance_halfpixvar16x16_v */
extern "C" __attribute__((visibility("default"))) void* vp9_variance_halfpixvar16x16_v = NULL;

/* Exported Object: mode2txfm_map */
extern "C" __attribute__((visibility("default"))) void* mode2txfm_map = NULL;

/* Demangled: _vp9dec_0652303329F8127FA8081733BA1F506F407EE430D04C5564862E0285D47FAD9B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_0652303329F8127FA8081733BA1F506F407EE430D04C5564862E0285D47FAD9B(void) {
    ALOGD("_vp9dec_0652303329F8127FA8081733BA1F506F407EE430D04C5564862E0285D47FAD9B() called");
    return 0;
}

/* Demangled: _vp9dec_AD0816EFFDF8D1B0DD5877E991A99411CB93A6F2A424113F143AF55E951B7388 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD0816EFFDF8D1B0DD5877E991A99411CB93A6F2A424113F143AF55E951B7388(void) {
    ALOGD("_vp9dec_AD0816EFFDF8D1B0DD5877E991A99411CB93A6F2A424113F143AF55E951B7388() called");
    return 0;
}

/* Demangled: _vp9dec_3F14D4F96C9403B097911CD7A4ED13B2BF5CE40D96736C2F5DF2FF80C388EE8E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3F14D4F96C9403B097911CD7A4ED13B2BF5CE40D96736C2F5DF2FF80C388EE8E(void) {
    ALOGD("_vp9dec_3F14D4F96C9403B097911CD7A4ED13B2BF5CE40D96736C2F5DF2FF80C388EE8E() called");
    return 0;
}

/* Demangled: _vp9dec_F309B4D946E55E6F850C93542C16B6151AD0496CCE9FBCDAD80F92DDEAF40D1D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F309B4D946E55E6F850C93542C16B6151AD0496CCE9FBCDAD80F92DDEAF40D1D(void) {
    ALOGD("_vp9dec_F309B4D946E55E6F850C93542C16B6151AD0496CCE9FBCDAD80F92DDEAF40D1D() called");
    return 0;
}

/* Exported Object: row_scan_16x16_neighbors */
extern "C" __attribute__((visibility("default"))) void* row_scan_16x16_neighbors = NULL;

/* Demangled: _vp9dec_00A46662B1C5399099D4A1608C1E2B06A409C1094A07FE3E4666122F3BBE35C5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_00A46662B1C5399099D4A1608C1E2B06A409C1094A07FE3E4666122F3BBE35C5(void) {
    ALOGD("_vp9dec_00A46662B1C5399099D4A1608C1E2B06A409C1094A07FE3E4666122F3BBE35C5() called");
    return 0;
}

/* Demangled: _vp9dec_C7A74129DB3A934E5C7407413B139197A3A59D0193F3B43CBDAE26B46CD6DA5653002D80AB43B86F6989BB23C98A5EB8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C7A74129DB3A934E5C7407413B139197A3A59D0193F3B43CBDAE26B46CD6DA5653002D80AB43B86F6989BB23C98A5EB8(void) {
    ALOGD("_vp9dec_C7A74129DB3A934E5C7407413B139197A3A59D0193F3B43CBDAE26B46CD6DA5653002D80AB43B86F6989BB23C98A5EB8() called");
    return 0;
}

/* Exported Object: vp9_iht16x16_256_add */
extern "C" __attribute__((visibility("default"))) void* vp9_iht16x16_256_add = NULL;

/* Exported Object: vp9_dc_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_dc_predictor_4x4 = NULL;

/* Exported Object: perfCPUCapacityPerCluster */
extern "C" __attribute__((visibility("default"))) void* perfCPUCapacityPerCluster = NULL;

/* Exported Object: vp9_default_iscan_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_default_iscan_8x8 = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: perfFreqTableC0Parsed */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableC0Parsed = NULL;

/* Exported Object: vp9_mbloop_filter_vertical_edge_16 */
extern "C" __attribute__((visibility("default"))) void* vp9_mbloop_filter_vertical_edge_16 = NULL;

/* Demangled: _vp9dec_B5337F71F1690202257ABE5723C191435BDE7272D1C9B73AB0433D3DBBA63812 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B5337F71F1690202257ABE5723C191435BDE7272D1C9B73AB0433D3DBBA63812(void) {
    ALOGD("_vp9dec_B5337F71F1690202257ABE5723C191435BDE7272D1C9B73AB0433D3DBBA63812() called");
    return 0;
}

/* Demangled: _vp9dec_ED1C650067C9BAFC3C446B5F1996C49DF6BCCB490FAF968DBEB071776A32D0EB744D0436F729EE4AF8D36FA058689102 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_ED1C650067C9BAFC3C446B5F1996C49DF6BCCB490FAF968DBEB071776A32D0EB744D0436F729EE4AF8D36FA058689102(void) {
    ALOGD("_vp9dec_ED1C650067C9BAFC3C446B5F1996C49DF6BCCB490FAF968DBEB071776A32D0EB744D0436F729EE4AF8D36FA058689102() called");
    return 0;
}

/* Exported Object: vp9_variance16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance16x16 = NULL;

/* Exported Object: vp9_tm_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_tm_predictor_8x8 = NULL;

/* Demangled: _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B277C80271E192C75195C32C13667BF5AC */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B277C80271E192C75195C32C13667BF5AC(void) {
    ALOGD("_vp9dec_D6E4BA376F5C3FD8072BC90B35D979B277C80271E192C75195C32C13667BF5AC() called");
    return 0;
}

/* Demangled: _vp9dec_6D797ACADCF930D72AD648A174B2C0FEE3609ED1DE2BB5C21F7B2F01B011F334 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6D797ACADCF930D72AD648A174B2C0FEE3609ED1DE2BB5C21F7B2F01B011F334(void) {
    ALOGD("_vp9dec_6D797ACADCF930D72AD648A174B2C0FEE3609ED1DE2BB5C21F7B2F01B011F334() called");
    return 0;
}

/* Exported Object: vp9_sad32x16_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x16_avg = NULL;

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: _vp9dec_6D797ACADCF930D72AD648A174B2C0FEC03D012F6D2D2FE2D5795CBA6EBF2FB9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6D797ACADCF930D72AD648A174B2C0FEC03D012F6D2D2FE2D5795CBA6EBF2FB9(void) {
    ALOGD("_vp9dec_6D797ACADCF930D72AD648A174B2C0FEC03D012F6D2D2FE2D5795CBA6EBF2FB9() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance32x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance32x64 = NULL;

/* Demangled: _vp9dec_A1A4B79402D9E76A593ED033DC5EA1AD */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A1A4B79402D9E76A593ED033DC5EA1AD(void) {
    ALOGD("_vp9dec_A1A4B79402D9E76A593ED033DC5EA1AD() called");
    return 0;
}

/* Demangled: VP9SwDecSetThumbnailMode */
extern "C" __attribute__((visibility("default"))) int VP9SwDecSetThumbnailMode(void) {
    ALOGD("VP9SwDecSetThumbnailMode() called");
    return 0;
}

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F982A5978E1C7E68833D712AF4A7837CDD */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F982A5978E1C7E68833D712AF4A7837CDD(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F982A5978E1C7E68833D712AF4A7837CDD() called");
    return 0;
}

/* Exported Object: vp9_sub_pel_filters_8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pel_filters_8 = NULL;

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E898A769821F801EC246853C899B2CA477744D0436F729EE4AF8D36FA058689102 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E898A769821F801EC246853C899B2CA477744D0436F729EE4AF8D36FA058689102(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E898A769821F801EC246853C899B2CA477744D0436F729EE4AF8D36FA058689102() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance64x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance64x32 = NULL;

/* Demangled: _vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7E6E9B1F6948BC46DBF99DE5FBC53700A9E1280CEC8EC50E9EC9E6C1D60F29E3A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7E6E9B1F6948BC46DBF99DE5FBC53700A9E1280CEC8EC50E9EC9E6C1D60F29E3A(void) {
    ALOGD("_vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7E6E9B1F6948BC46DBF99DE5FBC53700A9E1280CEC8EC50E9EC9E6C1D60F29E3A() called");
    return 0;
}

/* Demangled: _vp9dec_5F2E98F2002190949BF09ED271DE8680802BA9416F2A88729A5FFC39A2ABF9EE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5F2E98F2002190949BF09ED271DE8680802BA9416F2A88729A5FFC39A2ABF9EE(void) {
    ALOGD("_vp9dec_5F2E98F2002190949BF09ED271DE8680802BA9416F2A88729A5FFC39A2ABF9EE() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: _vp9dec_E3949EE8C2D266AD427A1EF030C9A0E992EC72E07A6142200582E8AABED50C19 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_E3949EE8C2D266AD427A1EF030C9A0E992EC72E07A6142200582E8AABED50C19(void) {
    ALOGD("_vp9dec_E3949EE8C2D266AD427A1EF030C9A0E992EC72E07A6142200582E8AABED50C19() called");
    return 0;
}

/* Demangled: _vp9dec_63A672B3899D13B8B026EB0E43A3A2532CCB553AF0AEA66941FB016B90260A53 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_63A672B3899D13B8B026EB0E43A3A2532CCB553AF0AEA66941FB016B90260A53(void) {
    ALOGD("_vp9dec_63A672B3899D13B8B026EB0E43A3A2532CCB553AF0AEA66941FB016B90260A53() called");
    return 0;
}

/* Demangled: _vp9dec_71901ACDA814CE6EC532D49AC8BF32579BAC646F3149A3B71D7F5E17B357067F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_71901ACDA814CE6EC532D49AC8BF32579BAC646F3149A3B71D7F5E17B357067F(void) {
    ALOGD("_vp9dec_71901ACDA814CE6EC532D49AC8BF32579BAC646F3149A3B71D7F5E17B357067F() called");
    return 0;
}

/* Exported Object: mi_height_log2_lookup */
extern "C" __attribute__((visibility("default"))) void* mi_height_log2_lookup = NULL;

/* Demangled: _vp9dec_D8075E06A39B6CD8585AF3FD8BB21DD585A4971563AC4D52CC92B6E7AD02788A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D8075E06A39B6CD8585AF3FD8BB21DD585A4971563AC4D52CC92B6E7AD02788A(void) {
    ALOGD("_vp9dec_D8075E06A39B6CD8585AF3FD8BB21DD585A4971563AC4D52CC92B6E7AD02788A() called");
    return 0;
}

/* Demangled: vp9decPerfServiceDeinit */
extern "C" __attribute__((visibility("default"))) int vp9decPerfServiceDeinit(void) {
    ALOGD("vp9decPerfServiceDeinit() called");
    return 0;
}

/* Exported Object: vp9_sad16x8_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x8_avg = NULL;

/* Demangled: _vp9dec_53F0F87AA544CAA84767EA301EAB5C46 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_53F0F87AA544CAA84767EA301EAB5C46(void) {
    ALOGD("_vp9dec_53F0F87AA544CAA84767EA301EAB5C46() called");
    return 0;
}

/* Demangled: _vp9dec_6C9192B263C5E91786B3EE03D2CE099F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6C9192B263C5E91786B3EE03D2CE099F(void) {
    ALOGD("_vp9dec_6C9192B263C5E91786B3EE03D2CE099F() called");
    return 0;
}

/* Exported Object: vp9_sad16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x16 = NULL;

/* Exported Object: vp9_sub_pixel_variance8x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance8x16 = NULL;

/* Demangled: _vp9dec_BF517C3C3E95D13D2DA35D9BD85C24051E19C5EF6CA4E089F8C52D24246710D0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BF517C3C3E95D13D2DA35D9BD85C24051E19C5EF6CA4E089F8C52D24246710D0(void) {
    ALOGD("_vp9dec_BF517C3C3E95D13D2DA35D9BD85C24051E19C5EF6CA4E089F8C52D24246710D0() called");
    return 0;
}

/* Exported Object: vp9_loop_filter_horizontal_edge_16 */
extern "C" __attribute__((visibility("default"))) void* vp9_loop_filter_horizontal_edge_16 = NULL;

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Exported Object: vp9_d207_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_d207_predictor_8x8 = NULL;

/* Exported Object: b_height_log2_lookup */
extern "C" __attribute__((visibility("default"))) void* b_height_log2_lookup = NULL;

/* Demangled: _vp9dec_69DCD7DACF05671493FF67189F996113F8C77DF031691A73EBDEA82C16177890 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_69DCD7DACF05671493FF67189F996113F8C77DF031691A73EBDEA82C16177890(void) {
    ALOGD("_vp9dec_69DCD7DACF05671493FF67189F996113F8C77DF031691A73EBDEA82C16177890() called");
    return 0;
}

/* Demangled: _vp9dec_69EA2F87FB607C38755479EC091C853E55FF8683E76E034782C7F74698E9EE09 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_69EA2F87FB607C38755479EC091C853E55FF8683E76E034782C7F74698E9EE09(void) {
    ALOGD("_vp9dec_69EA2F87FB607C38755479EC091C853E55FF8683E76E034782C7F74698E9EE09() called");
    return 0;
}

/* Demangled: _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A9B94631EDE38C571206910468B55FAEC */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A9B94631EDE38C571206910468B55FAEC(void) {
    ALOGD("_vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A9B94631EDE38C571206910468B55FAEC() called");
    return 0;
}

/* Demangled: _vp9dec_ED1C650067C9BAFC3C446B5F1996C49D34D5CCA1926DCED38A5D0928A9F05D7C29A767435B4DB36A2F04F7BDEED65247 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_ED1C650067C9BAFC3C446B5F1996C49D34D5CCA1926DCED38A5D0928A9F05D7C29A767435B4DB36A2F04F7BDEED65247(void) {
    ALOGD("_vp9dec_ED1C650067C9BAFC3C446B5F1996C49D34D5CCA1926DCED38A5D0928A9F05D7C29A767435B4DB36A2F04F7BDEED65247() called");
    return 0;
}

/* Demangled: _vp9dec_505454F13DC2876097BA8A3AEB047596 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_505454F13DC2876097BA8A3AEB047596(void) {
    ALOGD("_vp9dec_505454F13DC2876097BA8A3AEB047596() called");
    return 0;
}

/* Demangled: _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B21C94BBDF72913754B4AF5EB8CE3AE081 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B21C94BBDF72913754B4AF5EB8CE3AE081(void) {
    ALOGD("_vp9dec_D6E4BA376F5C3FD8072BC90B35D979B21C94BBDF72913754B4AF5EB8CE3AE081() called");
    return 0;
}

/* Demangled: _vp9dec_83B9670E88AF48AA425E49D2A033419BB2FBEE69A1B246E7E095BF2CC25DA09C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_83B9670E88AF48AA425E49D2A033419BB2FBEE69A1B246E7E095BF2CC25DA09C(void) {
    ALOGD("_vp9dec_83B9670E88AF48AA425E49D2A033419BB2FBEE69A1B246E7E095BF2CC25DA09C() called");
    return 0;
}

/* Demangled: _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0F4151926A8B3FEC8D560CBE97B449B3364042466E8DE1F389852BCCD5735CFE6 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0F4151926A8B3FEC8D560CBE97B449B3364042466E8DE1F389852BCCD5735CFE6(void) {
    ALOGD("_vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0F4151926A8B3FEC8D560CBE97B449B3364042466E8DE1F389852BCCD5735CFE6() called");
    return 0;
}

/* Demangled: _vp9dec_C7A74129DB3A934E5C7407413B1391979AA9B6146F59DF95329EF04CE034233D7E1F82D8DB948654CFD1026F79F9BF31 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C7A74129DB3A934E5C7407413B1391979AA9B6146F59DF95329EF04CE034233D7E1F82D8DB948654CFD1026F79F9BF31(void) {
    ALOGD("_vp9dec_C7A74129DB3A934E5C7407413B1391979AA9B6146F59DF95329EF04CE034233D7E1F82D8DB948654CFD1026F79F9BF31() called");
    return 0;
}

/* Demangled: _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CACBDC68023D1F6E9069E90C5632A2E863 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CACBDC68023D1F6E9069E90C5632A2E863(void) {
    ALOGD("_vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CACBDC68023D1F6E9069E90C5632A2E863() called");
    return 0;
}

/* Exported Object: rVP9API */
extern "C" __attribute__((visibility("default"))) void* rVP9API = NULL;

/* Exported Object: vp9_v_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_v_predictor_16x16 = NULL;

/* Demangled: _vp9dec_A3501D288E2E450C4E1D97AF637E273753002D80AB43B86F6989BB23C98A5EB8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A3501D288E2E450C4E1D97AF637E273753002D80AB43B86F6989BB23C98A5EB8(void) {
    ALOGD("_vp9dec_A3501D288E2E450C4E1D97AF637E273753002D80AB43B86F6989BB23C98A5EB8() called");
    return 0;
}

/* Exported Object: vp9_sad64x32_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad64x32_avg = NULL;

/* Demangled: _vp9dec_A924EA6154494DB36562A88DE073553F3EF8A6EA78EC71645976BB8E460991DB */
extern "C" __attribute__((visibility("default"))) int _vp9dec_A924EA6154494DB36562A88DE073553F3EF8A6EA78EC71645976BB8E460991DB(void) {
    ALOGD("_vp9dec_A924EA6154494DB36562A88DE073553F3EF8A6EA78EC71645976BB8E460991DB() called");
    return 0;
}

/* Demangled: VP9MutexInit */
extern "C" __attribute__((visibility("default"))) int VP9MutexInit(void) {
    ALOGD("VP9MutexInit() called");
    return 0;
}

/* Exported Object: vp9_col_iscan_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_col_iscan_8x8 = NULL;

/* Demangled: _vp9dec_79AA0FF859067A937FA1F5B319E83AD69DA46050FFB162B89DCD599B793FE0E3 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_79AA0FF859067A937FA1F5B319E83AD69DA46050FFB162B89DCD599B793FE0E3(void) {
    ALOGD("_vp9dec_79AA0FF859067A937FA1F5B319E83AD69DA46050FFB162B89DCD599B793FE0E3() called");
    return 0;
}

/* Exported Object: vp9_variance16x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance16x8 = NULL;

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Exported Object: vp9_switchable_interp_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_switchable_interp_tree = NULL;

/* Exported Object: vp9_sad4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x4 = NULL;

/* Demangled: _vp9dec_57F3A700BAD8677DA6A210B2BE01F2CF52B308B4CA23EFB9D46E3F0594097D1E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_57F3A700BAD8677DA6A210B2BE01F2CF52B308B4CA23EFB9D46E3F0594097D1E(void) {
    ALOGD("_vp9dec_57F3A700BAD8677DA6A210B2BE01F2CF52B308B4CA23EFB9D46E3F0594097D1E() called");
    return 0;
}

/* Exported Object: vp9_fdct8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_fdct8x8 = NULL;

/* Demangled: _vp9dec_CC98B28FEDDD82742880A938A8117B94FAC2B68EAE3E6931208CED39042EEA46 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_CC98B28FEDDD82742880A938A8117B94FAC2B68EAE3E6931208CED39042EEA46(void) {
    ALOGD("_vp9dec_CC98B28FEDDD82742880A938A8117B94FAC2B68EAE3E6931208CED39042EEA46() called");
    return 0;
}

/* Exported Object: perfCPUMaskPerCluster */
extern "C" __attribute__((visibility("default"))) void* perfCPUMaskPerCluster = NULL;

/* Demangled: _vp9dec_28CBB67D3804C2E52548C1E3D7C559E34D8CF85D2582C53C8A157A8EDBC77BAE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_28CBB67D3804C2E52548C1E3D7C559E34D8CF85D2582C53C8A157A8EDBC77BAE(void) {
    ALOGD("_vp9dec_28CBB67D3804C2E52548C1E3D7C559E34D8CF85D2582C53C8A157A8EDBC77BAE() called");
    return 0;
}

/* Demangled: VP9CondDestroy */
extern "C" __attribute__((visibility("default"))) int VP9CondDestroy(void) {
    ALOGD("VP9CondDestroy() called");
    return 0;
}

/* Exported Object: vp9_sad4x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x8 = NULL;

/* Demangled: _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D05ACC70BF6ACF6212EAD231927F588EA7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D05ACC70BF6ACF6212EAD231927F588EA7(void) {
    ALOGD("_vp9dec_F8F0A78118CD5AED86CFDEC28440D3D05ACC70BF6ACF6212EAD231927F588EA7() called");
    return 0;
}

/* Exported Object: _vp9dec_29770824BE8EC78A4C39B104438C34D3239B6F1AA76C79724C894C3185DF9F65 */
extern "C" __attribute__((visibility("default"))) void* _vp9dec_29770824BE8EC78A4C39B104438C34D3239B6F1AA76C79724C894C3185DF9F65 = NULL;

/* Demangled: _vp9dec_DDF9041D23B831A4ADB65FDE160A23B25FFCC6271EC420F3C6A3A1919D4143FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DDF9041D23B831A4ADB65FDE160A23B25FFCC6271EC420F3C6A3A1919D4143FF(void) {
    ALOGD("_vp9dec_DDF9041D23B831A4ADB65FDE160A23B25FFCC6271EC420F3C6A3A1919D4143FF() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: _vp9dec_6CE073242FB1FE4B54E828A01762B0A797CC943E186C5D18AB341F56FD47A86E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6CE073242FB1FE4B54E828A01762B0A797CC943E186C5D18AB341F56FD47A86E(void) {
    ALOGD("_vp9dec_6CE073242FB1FE4B54E828A01762B0A797CC943E186C5D18AB341F56FD47A86E() called");
    return 0;
}

/* Demangled: _vp9dec_F8CDD89AB50809B8DD814DF134593473 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8CDD89AB50809B8DD814DF134593473(void) {
    ALOGD("_vp9dec_F8CDD89AB50809B8DD814DF134593473() called");
    return 0;
}

/* Demangled: _vp9dec_4786BC5212DA61CE6DD269104DE5D45FE3CBA054791DA9D05880F77102537B0B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4786BC5212DA61CE6DD269104DE5D45FE3CBA054791DA9D05880F77102537B0B(void) {
    ALOGD("_vp9dec_4786BC5212DA61CE6DD269104DE5D45FE3CBA054791DA9D05880F77102537B0B() called");
    return 0;
}

/* Demangled: _vp9dec_8E090581A721CABEAC1A88479AA45BE1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_8E090581A721CABEAC1A88479AA45BE1(void) {
    ALOGD("_vp9dec_8E090581A721CABEAC1A88479AA45BE1() called");
    return 0;
}

/* Exported Object: g_debug_interface */
extern "C" __attribute__((visibility("default"))) void* g_debug_interface = NULL;

/* Exported Object: vp9_variance4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance4x4 = NULL;

/* Demangled: _vp9dec_3212334F089508EEB8C208D1FA5A8A2DE2724BA0CEF896CE1A55E81AC5741AA1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3212334F089508EEB8C208D1FA5A8A2DE2724BA0CEF896CE1A55E81AC5741AA1(void) {
    ALOGD("_vp9dec_3212334F089508EEB8C208D1FA5A8A2DE2724BA0CEF896CE1A55E81AC5741AA1() called");
    return 0;
}

/* Demangled: _vp9dec_7B21A8E5159B62066AEAF75D52787DDAE3609ED1DE2BB5C21F7B2F01B011F334 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7B21A8E5159B62066AEAF75D52787DDAE3609ED1DE2BB5C21F7B2F01B011F334(void) {
    ALOGD("_vp9dec_7B21A8E5159B62066AEAF75D52787DDAE3609ED1DE2BB5C21F7B2F01B011F334() called");
    return 0;
}

/* Demangled: _vp9dec_BDFE03B91C01718173E7A908AFD00CEB522423517C2610C7B4773C37C734E433 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BDFE03B91C01718173E7A908AFD00CEB522423517C2610C7B4773C37C734E433(void) {
    ALOGD("_vp9dec_BDFE03B91C01718173E7A908AFD00CEB522423517C2610C7B4773C37C734E433() called");
    return 0;
}

/* Exported Object: vp9_sad32x64_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x64_avg = NULL;

/* Exported Object: vp9_variance4x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance4x8 = NULL;

/* Demangled: _vp9dec_D766175777158A54D683D36624A96BDBC3B6F082853CF532FF554136F28698C5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D766175777158A54D683D36624A96BDBC3B6F082853CF532FF554136F28698C5(void) {
    ALOGD("_vp9dec_D766175777158A54D683D36624A96BDBC3B6F082853CF532FF554136F28698C5() called");
    return 0;
}

/* Demangled: _vp9dec_7B21A8E5159B62066AEAF75D52787DDAC03D012F6D2D2FE2D5795CBA6EBF2FB9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7B21A8E5159B62066AEAF75D52787DDAC03D012F6D2D2FE2D5795CBA6EBF2FB9(void) {
    ALOGD("_vp9dec_7B21A8E5159B62066AEAF75D52787DDAC03D012F6D2D2FE2D5795CBA6EBF2FB9() called");
    return 0;
}

/* Demangled: _vp9dec_C751A8B07C864DA5F99425EB7CC9B0321EAF14200F90743EA7ABC9F714A70C92 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C751A8B07C864DA5F99425EB7CC9B0321EAF14200F90743EA7ABC9F714A70C92(void) {
    ALOGD("_vp9dec_C751A8B07C864DA5F99425EB7CC9B0321EAF14200F90743EA7ABC9F714A70C92() called");
    return 0;
}

/* Demangled: _vp9dec_E02BAA18A61F4901546F8ABF0EE0CFDF11086DFA257FB72BABCB15ADA84DBB0F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_E02BAA18A61F4901546F8ABF0EE0CFDF11086DFA257FB72BABCB15ADA84DBB0F(void) {
    ALOGD("_vp9dec_E02BAA18A61F4901546F8ABF0EE0CFDF11086DFA257FB72BABCB15ADA84DBB0F() called");
    return 0;
}

/* Demangled: _vp9dec_17BFDE28EF2B8B96F44B4363503FC19D80D1EF5C8D84101F91F57FB1DF177616 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_17BFDE28EF2B8B96F44B4363503FC19D80D1EF5C8D84101F91F57FB1DF177616(void) {
    ALOGD("_vp9dec_17BFDE28EF2B8B96F44B4363503FC19D80D1EF5C8D84101F91F57FB1DF177616() called");
    return 0;
}

/* Exported Object: vp9_coef_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_coef_tree = NULL;

/* Exported Object: vp9_variance16x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance16x32 = NULL;

/* Demangled: _vp9dec_6C9FC069B5AD4E568514406A391548EF8773CABFA83332470FB62299A0FEACAB */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6C9FC069B5AD4E568514406A391548EF8773CABFA83332470FB62299A0FEACAB(void) {
    ALOGD("_vp9dec_6C9FC069B5AD4E568514406A391548EF8773CABFA83332470FB62299A0FEACAB() called");
    return 0;
}

/* Demangled: _vp9dec_570C8C76B3E6A0478C747CA508303CE354A7848A651D35AA5C148E9E36C114E4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_570C8C76B3E6A0478C747CA508303CE354A7848A651D35AA5C148E9E36C114E4(void) {
    ALOGD("_vp9dec_570C8C76B3E6A0478C747CA508303CE354A7848A651D35AA5C148E9E36C114E4() called");
    return 0;
}

/* Demangled: _vp9dec_6B92BF74A915E01C9167A65209DBB92D3DA562D19E7A177B2FBC35A9531B022A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6B92BF74A915E01C9167A65209DBB92D3DA562D19E7A177B2FBC35A9531B022A(void) {
    ALOGD("_vp9dec_6B92BF74A915E01C9167A65209DBB92D3DA562D19E7A177B2FBC35A9531B022A() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance16x16 = NULL;

/* Exported Object: vp9_default_iscan_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_default_iscan_32x32 = NULL;

/* Demangled: VP9DecoderClose */
extern "C" __attribute__((visibility("default"))) int VP9DecoderClose(void) {
    ALOGD("VP9DecoderClose() called");
    return 0;
}

/* Exported Object: vp9_idct32x32_1_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct32x32_1_add = NULL;

/* Exported Object: vp9_h_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_h_predictor_4x4 = NULL;

/* Demangled: _vp9dec_6A8DCBA60C02F2163BB0E165A1E977A4F121BAB5C15843E42CE5C05BF273AEA4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6A8DCBA60C02F2163BB0E165A1E977A4F121BAB5C15843E42CE5C05BF273AEA4(void) {
    ALOGD("_vp9dec_6A8DCBA60C02F2163BB0E165A1E977A4F121BAB5C15843E42CE5C05BF273AEA4() called");
    return 0;
}

/* Demangled: _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CA80D40D0F7BA7F6C46D66DF6EF89EFAAE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CA80D40D0F7BA7F6C46D66DF6EF89EFAAE(void) {
    ALOGD("_vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CA80D40D0F7BA7F6C46D66DF6EF89EFAAE() called");
    return 0;
}

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9E3609ED1DE2BB5C21F7B2F01B011F334 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9E3609ED1DE2BB5C21F7B2F01B011F334(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9E3609ED1DE2BB5C21F7B2F01B011F334() called");
    return 0;
}

/* Exported Object: vp9_idct16x16_10_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct16x16_10_add = NULL;

/* Demangled: _vp9dec_C5C996D53C0AFBF39271F7D49C9D545453A24BC39144DCCA45CE026A523930CB */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C5C996D53C0AFBF39271F7D49C9D545453A24BC39144DCCA45CE026A523930CB(void) {
    ALOGD("_vp9dec_C5C996D53C0AFBF39271F7D49C9D545453A24BC39144DCCA45CE026A523930CB() called");
    return 0;
}

/* Demangled: _vp9dec_3C0B1546DFCD2376FB1BB081A99B8548BFFAB5716E1026A2F47ABB827FF2AA1D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3C0B1546DFCD2376FB1BB081A99B8548BFFAB5716E1026A2F47ABB827FF2AA1D(void) {
    ALOGD("_vp9dec_3C0B1546DFCD2376FB1BB081A99B8548BFFAB5716E1026A2F47ABB827FF2AA1D() called");
    return 0;
}

/* Exported Object: vp9_loop_filter_horizontal_edge */
extern "C" __attribute__((visibility("default"))) void* vp9_loop_filter_horizontal_edge = NULL;

/* Demangled: _vp9dec_383FD33E54E4708FE400DAC78B2330DDCB93A6F2A424113F143AF55E951B7388 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_383FD33E54E4708FE400DAC78B2330DDCB93A6F2A424113F143AF55E951B7388(void) {
    ALOGD("_vp9dec_383FD33E54E4708FE400DAC78B2330DDCB93A6F2A424113F143AF55E951B7388() called");
    return 0;
}

/* Demangled: _vp9dec_8E8030DC76EEA8397F2D4A539648B9C93923DD621E73AE76B4A29A80D449EE62 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_8E8030DC76EEA8397F2D4A539648B9C93923DD621E73AE76B4A29A80D449EE62(void) {
    ALOGD("_vp9dec_8E8030DC76EEA8397F2D4A539648B9C93923DD621E73AE76B4A29A80D449EE62() called");
    return 0;
}

/* Demangled: _vp9dec_C29989EC8374D8CC22189C0D918E83EE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C29989EC8374D8CC22189C0D918E83EE(void) {
    ALOGD("_vp9dec_C29989EC8374D8CC22189C0D918E83EE() called");
    return 0;
}

/* Demangled: _vp9dec_F0E2CDAE8459C5946D59464F4BE539854D322FA1560B457A115E50F7002C0CB2 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F0E2CDAE8459C5946D59464F4BE539854D322FA1560B457A115E50F7002C0CB2(void) {
    ALOGD("_vp9dec_F0E2CDAE8459C5946D59464F4BE539854D322FA1560B457A115E50F7002C0CB2() called");
    return 0;
}

/* Demangled: _vp9dec_22E6471381D538F29824631D8051E212D37A3F06F7219F9BA7E1AA15D381955B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_22E6471381D538F29824631D8051E212D37A3F06F7219F9BA7E1AA15D381955B(void) {
    ALOGD("_vp9dec_22E6471381D538F29824631D8051E212D37A3F06F7219F9BA7E1AA15D381955B() called");
    return 0;
}

/* Demangled: _vp9dec_4DFA9C09E6389B6B1653B788FDE2E40453EF01B62BBFD0028D79D6491A572CDC2D785C900886279F83FD85FEA4AEDE2C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4DFA9C09E6389B6B1653B788FDE2E40453EF01B62BBFD0028D79D6491A572CDC2D785C900886279F83FD85FEA4AEDE2C(void) {
    ALOGD("_vp9dec_4DFA9C09E6389B6B1653B788FDE2E40453EF01B62BBFD0028D79D6491A572CDC2D785C900886279F83FD85FEA4AEDE2C() called");
    return 0;
}

/* Demangled: _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B29F6109A45549937E0CD6F09A7D80949F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B29F6109A45549937E0CD6F09A7D80949F(void) {
    ALOGD("_vp9dec_D6E4BA376F5C3FD8072BC90B35D979B29F6109A45549937E0CD6F09A7D80949F() called");
    return 0;
}

/* Demangled: _vp9dec_64D9A49F05DFAA8D5D88E784BB0422FE9B686D6F1EC0A120E38753F25A3CFF01 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_64D9A49F05DFAA8D5D88E784BB0422FE9B686D6F1EC0A120E38753F25A3CFF01(void) {
    ALOGD("_vp9dec_64D9A49F05DFAA8D5D88E784BB0422FE9B686D6F1EC0A120E38753F25A3CFF01() called");
    return 0;
}

/* Demangled: VP9PthreadCreate */
extern "C" __attribute__((visibility("default"))) int VP9PthreadCreate(void) {
    ALOGD("VP9PthreadCreate() called");
    return 0;
}

/* Exported Object: vp9_sad16x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x32 = NULL;

/* Demangled: _vp9dec_836E32907FCDEE83B0975382F6D0CF69 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_836E32907FCDEE83B0975382F6D0CF69(void) {
    ALOGD("_vp9dec_836E32907FCDEE83B0975382F6D0CF69() called");
    return 0;
}

/* Exported Object: vp9_mb_lpf_horizontal_edge_w */
extern "C" __attribute__((visibility("default"))) void* vp9_mb_lpf_horizontal_edge_w = NULL;

/* Demangled: _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0AE83E2F878ECC33C1747D90C73D758150BD04C54EFA6117B9D37B65F1F6FD50B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0AE83E2F878ECC33C1747D90C73D758150BD04C54EFA6117B9D37B65F1F6FD50B(void) {
    ALOGD("_vp9dec_F8F0A78118CD5AED86CFDEC28440D3D0AE83E2F878ECC33C1747D90C73D758150BD04C54EFA6117B9D37B65F1F6FD50B() called");
    return 0;
}

/* Demangled: _vp9dec_69DCD7DACF05671493FF67189F99611369DA11CAF9C2ED3EFB351585EE9A301E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_69DCD7DACF05671493FF67189F99611369DA11CAF9C2ED3EFB351585EE9A301E(void) {
    ALOGD("_vp9dec_69DCD7DACF05671493FF67189F99611369DA11CAF9C2ED3EFB351585EE9A301E() called");
    return 0;
}

/* Exported Object: vp9_mbloop_filter_horizontal_edge_16 */
extern "C" __attribute__((visibility("default"))) void* vp9_mbloop_filter_horizontal_edge_16 = NULL;

/* Demangled: _vp9dec_D1DA9404444B22FFACFD900914A31A3B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D1DA9404444B22FFACFD900914A31A3B(void) {
    ALOGD("_vp9dec_D1DA9404444B22FFACFD900914A31A3B() called");
    return 0;
}

/* Demangled: _vp9dec_C7A74129DB3A934E5C7407413B1391972987A9219CC9EAC3547601999E0D7ADA7E1F82D8DB948654CFD1026F79F9BF31 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C7A74129DB3A934E5C7407413B1391972987A9219CC9EAC3547601999E0D7ADA7E1F82D8DB948654CFD1026F79F9BF31(void) {
    ALOGD("_vp9dec_C7A74129DB3A934E5C7407413B1391972987A9219CC9EAC3547601999E0D7ADA7E1F82D8DB948654CFD1026F79F9BF31() called");
    return 0;
}

/* Demangled: _vp9dec_6B92BF74A915E01C9167A65209DBB92D1B55A7001E5C551A867EFDA46ABE53F7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6B92BF74A915E01C9167A65209DBB92D1B55A7001E5C551A867EFDA46ABE53F7(void) {
    ALOGD("_vp9dec_6B92BF74A915E01C9167A65209DBB92D1B55A7001E5C551A867EFDA46ABE53F7() called");
    return 0;
}

/* Demangled: _vp9dec_3D4B76C0452E72C24C33E007D1E9C20F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3D4B76C0452E72C24C33E007D1E9C20F(void) {
    ALOGD("_vp9dec_3D4B76C0452E72C24C33E007D1E9C20F() called");
    return 0;
}

/* Exported Object: vp9_sub_pel_filters_8s_composite */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pel_filters_8s_composite = NULL;

/* Demangled: _vp9dec_27D8720AC74FA2388867445F205FE0B0A5346F63B77EF2EEB1143CA1BB15C523 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_27D8720AC74FA2388867445F205FE0B0A5346F63B77EF2EEB1143CA1BB15C523(void) {
    ALOGD("_vp9dec_27D8720AC74FA2388867445F205FE0B0A5346F63B77EF2EEB1143CA1BB15C523() called");
    return 0;
}

/* Demangled: _vp9dec_2CDE0CC661C3190A0B584FB69129E54DB1CCDD93A0C23EC3E4D0844C40E2E4D3 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_2CDE0CC661C3190A0B584FB69129E54DB1CCDD93A0C23EC3E4D0844C40E2E4D3(void) {
    ALOGD("_vp9dec_2CDE0CC661C3190A0B584FB69129E54DB1CCDD93A0C23EC3E4D0844C40E2E4D3() called");
    return 0;
}

/* Exported Object: vp9_d153_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_d153_predictor_16x16 = NULL;

/* Exported Object: vp9_sad8x8_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x8_avg = NULL;

/* Demangled: _vp9dec_DA1BC459274625EB9556ABE7570DA1F803A1762E1623804207DE2EBAD848279E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DA1BC459274625EB9556ABE7570DA1F803A1762E1623804207DE2EBAD848279E(void) {
    ALOGD("_vp9dec_DA1BC459274625EB9556ABE7570DA1F803A1762E1623804207DE2EBAD848279E() called");
    return 0;
}

/* Exported Object: vp9_sad16x16x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x16x4d = NULL;

/* Exported Object: vp9_d45_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_d45_predictor_16x16 = NULL;

/* Exported Object: _vp9dec_F25A184CF06A27911109D8C36200ACD3 */
extern "C" __attribute__((visibility("default"))) void* _vp9dec_F25A184CF06A27911109D8C36200ACD3 = NULL;

/* Demangled: _vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7E6E9B1F6948BC46DBF99DE5FBC53700A2773C2904D8909FED59B6600D0BA3EE1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7E6E9B1F6948BC46DBF99DE5FBC53700A2773C2904D8909FED59B6600D0BA3EE1(void) {
    ALOGD("_vp9dec_82DD2B4CBBC7F0D6BE62F2E478E8F1B7E6E9B1F6948BC46DBF99DE5FBC53700A2773C2904D8909FED59B6600D0BA3EE1() called");
    return 0;
}

/* Demangled: _vp9dec_1668314ED5DD752E439A2C897E5FA6CD6741E5AAFAB96900C95C2D52C5C10F02 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_1668314ED5DD752E439A2C897E5FA6CD6741E5AAFAB96900C95C2D52C5C10F02(void) {
    ALOGD("_vp9dec_1668314ED5DD752E439A2C897E5FA6CD6741E5AAFAB96900C95C2D52C5C10F02() called");
    return 0;
}

/* Demangled: _vp9dec_BDFE03B91C01718173E7A908AFD00CEB9B0D546C5F3A145230B4C85B7B002B2D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BDFE03B91C01718173E7A908AFD00CEB9B0D546C5F3A145230B4C85B7B002B2D(void) {
    ALOGD("_vp9dec_BDFE03B91C01718173E7A908AFD00CEB9B0D546C5F3A145230B4C85B7B002B2D() called");
    return 0;
}

/* Demangled: _vp9dec_CE6B8C8245799800D21BD6A9A8585181 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_CE6B8C8245799800D21BD6A9A8585181(void) {
    ALOGD("_vp9dec_CE6B8C8245799800D21BD6A9A8585181() called");
    return 0;
}

/* Demangled: _vp9dec_0DB5FDF3FD4C30C0C82B1C3EF0BE5C783923DD621E73AE76B4A29A80D449EE62 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_0DB5FDF3FD4C30C0C82B1C3EF0BE5C783923DD621E73AE76B4A29A80D449EE62(void) {
    ALOGD("_vp9dec_0DB5FDF3FD4C30C0C82B1C3EF0BE5C783923DD621E73AE76B4A29A80D449EE62() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: _vp9dec_D766175777158A54D683D36624A96BDBC35BF8705E72E86CA74D8D01551E6810 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D766175777158A54D683D36624A96BDBC35BF8705E72E86CA74D8D01551E6810(void) {
    ALOGD("_vp9dec_D766175777158A54D683D36624A96BDBC35BF8705E72E86CA74D8D01551E6810() called");
    return 0;
}

/* Demangled: VP9GetCoreNeedByFrameSize */
extern "C" __attribute__((visibility("default"))) int VP9GetCoreNeedByFrameSize(void) {
    ALOGD("VP9GetCoreNeedByFrameSize() called");
    return 0;
}

/* Demangled: VP9CondInit */
extern "C" __attribute__((visibility("default"))) int VP9CondInit(void) {
    ALOGD("VP9CondInit() called");
    return 0;
}

/* Demangled: _vp9dec_0BF7047E009B3A614C3BEBF32891AC9E3B1A88DE539C5A5E453B7BE1AE10D553 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_0BF7047E009B3A614C3BEBF32891AC9E3B1A88DE539C5A5E453B7BE1AE10D553(void) {
    ALOGD("_vp9dec_0BF7047E009B3A614C3BEBF32891AC9E3B1A88DE539C5A5E453B7BE1AE10D553() called");
    return 0;
}

/* Demangled: _vp9dec_37B419A4BD8ED9A53B8396ABEF13AA9C6E48E20C6411DFBC3CA3E08D34D7EC2A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_37B419A4BD8ED9A53B8396ABEF13AA9C6E48E20C6411DFBC3CA3E08D34D7EC2A(void) {
    ALOGD("_vp9dec_37B419A4BD8ED9A53B8396ABEF13AA9C6E48E20C6411DFBC3CA3E08D34D7EC2A() called");
    return 0;
}

/* Demangled: VP9SwDecQueryFrameOutStatus */
extern "C" __attribute__((visibility("default"))) int VP9SwDecQueryFrameOutStatus(void) {
    ALOGD("VP9SwDecQueryFrameOutStatus() called");
    return 0;
}

/* Demangled: _vp9dec_D8A09A99FD92623F91C8A18FF4EF43A7468A136563A39D11442A4FF1C72EB0F2 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D8A09A99FD92623F91C8A18FF4EF43A7468A136563A39D11442A4FF1C72EB0F2(void) {
    ALOGD("_vp9dec_D8A09A99FD92623F91C8A18FF4EF43A7468A136563A39D11442A4FF1C72EB0F2() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance16x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance16x8 = NULL;

/* Demangled: VP9SwDecSetPbiVABufferLevel */
extern "C" __attribute__((visibility("default"))) int VP9SwDecSetPbiVABufferLevel(void) {
    ALOGD("VP9SwDecSetPbiVABufferLevel() called");
    return 0;
}

/* Demangled: _vp9dec_E02BAA18A61F4901546F8ABF0EE0CFDF1C073E8617C08DF3430ABEE9514BE3AE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_E02BAA18A61F4901546F8ABF0EE0CFDF1C073E8617C08DF3430ABEE9514BE3AE(void) {
    ALOGD("_vp9dec_E02BAA18A61F4901546F8ABF0EE0CFDF1C073E8617C08DF3430ABEE9514BE3AE() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance64x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance64x64 = NULL;

/* Demangled: _vp9dec_B44653592B2D74B499470451962702C1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B44653592B2D74B499470451962702C1(void) {
    ALOGD("_vp9dec_B44653592B2D74B499470451962702C1() called");
    return 0;
}

/* Demangled: _vp9dec_190E442820A52F55F83EB75801DF800FE963727B153065FCD7A18DBF63C1387D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_190E442820A52F55F83EB75801DF800FE963727B153065FCD7A18DBF63C1387D(void) {
    ALOGD("_vp9dec_190E442820A52F55F83EB75801DF800FE963727B153065FCD7A18DBF63C1387D() called");
    return 0;
}

/* Demangled: vp9decPerfServiceSwitchLevel */
extern "C" __attribute__((visibility("default"))) int vp9decPerfServiceSwitchLevel(void) {
    ALOGD("vp9decPerfServiceSwitchLevel() called");
    return 0;
}

/* Demangled: _vp9dec_856FF0E3A0BBB243E4D9FF3CD235A317 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_856FF0E3A0BBB243E4D9FF3CD235A317(void) {
    ALOGD("_vp9dec_856FF0E3A0BBB243E4D9FF3CD235A317() called");
    return 0;
}

/* Exported Object: vp9_sad8x4_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x4_avg = NULL;

/* Demangled: _vp9dec_63C6F04225C72B5D9A52E4A00E31669F367A765DA564825C7B368A398452C3E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_63C6F04225C72B5D9A52E4A00E31669F367A765DA564825C7B368A398452C3E0(void) {
    ALOGD("_vp9dec_63C6F04225C72B5D9A52E4A00E31669F367A765DA564825C7B368A398452C3E0() called");
    return 0;
}

/* Demangled: _vp9dec_87A3BFBBE3A5E259B90032336276D8CF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_87A3BFBBE3A5E259B90032336276D8CF(void) {
    ALOGD("_vp9dec_87A3BFBBE3A5E259B90032336276D8CF() called");
    return 0;
}

/* Demangled: _vp9dec_68E417D840AFBC076A56ACA9FE2976E2 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_68E417D840AFBC076A56ACA9FE2976E2(void) {
    ALOGD("_vp9dec_68E417D840AFBC076A56ACA9FE2976E2() called");
    return 0;
}

/* Demangled: _vp9dec_69DCD7DACF05671493FF67189F9961135447B01F7A028E2A98DF84321C2A9C2F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_69DCD7DACF05671493FF67189F9961135447B01F7A028E2A98DF84321C2A9C2F(void) {
    ALOGD("_vp9dec_69DCD7DACF05671493FF67189F9961135447B01F7A028E2A98DF84321C2A9C2F() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance32x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance32x16 = NULL;

/* Exported Object: mask_cpu_num */
extern "C" __attribute__((visibility("default"))) void* mask_cpu_num = NULL;

/* Exported Object: vp9_loop_filter_vertical_edge */
extern "C" __attribute__((visibility("default"))) void* vp9_loop_filter_vertical_edge = NULL;

/* Exported Object: subsize_lookup */
extern "C" __attribute__((visibility("default"))) void* subsize_lookup = NULL;

/* Demangled: VP9DecoderGetCodecRequired */
extern "C" __attribute__((visibility("default"))) int VP9DecoderGetCodecRequired(void) {
    ALOGD("VP9DecoderGetCodecRequired() called");
    return 0;
}

/* Exported Object: vp9_fdct32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_fdct32x32 = NULL;

/* Exported Object: vp9_sad16x8x3 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x8x3 = NULL;

/* Exported Object: vp9_sub_pixel_variance16x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance16x32 = NULL;

/* Demangled: _vp9dec_D8A09A99FD92623F91C8A18FF4EF43A7CA4D3F7FF066ED9CF426E9F364D8AF0C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D8A09A99FD92623F91C8A18FF4EF43A7CA4D3F7FF066ED9CF426E9F364D8AF0C(void) {
    ALOGD("_vp9dec_D8A09A99FD92623F91C8A18FF4EF43A7CA4D3F7FF066ED9CF426E9F364D8AF0C() called");
    return 0;
}

/* Demangled: _vp9dec_88A4A613088CC1D9D054E6F4CAF0CFFD47DEA9575053575990C5CD107CAD16F1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_88A4A613088CC1D9D054E6F4CAF0CFFD47DEA9575053575990C5CD107CAD16F1(void) {
    ALOGD("_vp9dec_88A4A613088CC1D9D054E6F4CAF0CFFD47DEA9575053575990C5CD107CAD16F1() called");
    return 0;
}

/* Exported Object: vp9_mv_joint_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_joint_tree = NULL;

/* Demangled: _vp9dec_8C1A2E63302AE69CA19831BD29FF3C98 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_8C1A2E63302AE69CA19831BD29FF3C98(void) {
    ALOGD("_vp9dec_8C1A2E63302AE69CA19831BD29FF3C98() called");
    return 0;
}

/* Demangled: _vp9dec_61EAE165665B579C3BE91F412A13C66C11086DFA257FB72BABCB15ADA84DBB0F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_61EAE165665B579C3BE91F412A13C66C11086DFA257FB72BABCB15ADA84DBB0F(void) {
    ALOGD("_vp9dec_61EAE165665B579C3BE91F412A13C66C11086DFA257FB72BABCB15ADA84DBB0F() called");
    return 0;
}

/* Exported Object: vp9_d63_predictor_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_d63_predictor_32x32 = NULL;

/* Exported Object: vp9_d45_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_d45_predictor_4x4 = NULL;

/* Demangled: VP9SemDestroy */
extern "C" __attribute__((visibility("default"))) int VP9SemDestroy(void) {
    ALOGD("VP9SemDestroy() called");
    return 0;
}

/* Demangled: _vp9dec_5D5005BDD249050437B514EF889865DCD382DD55F040338E0711F612DF6F325F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5D5005BDD249050437B514EF889865DCD382DD55F040338E0711F612DF6F325F(void) {
    ALOGD("_vp9dec_5D5005BDD249050437B514EF889865DCD382DD55F040338E0711F612DF6F325F() called");
    return 0;
}

/* Demangled: _vp9dec_9D1993F37F079A73484BA0C9E8F9C69A107AAC1F776D3CC17C315B829D827472 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9D1993F37F079A73484BA0C9E8F9C69A107AAC1F776D3CC17C315B829D827472(void) {
    ALOGD("_vp9dec_9D1993F37F079A73484BA0C9E8F9C69A107AAC1F776D3CC17C315B829D827472() called");
    return 0;
}

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9DC3627FA8E8C9A600470BEB840F659FE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9DC3627FA8E8C9A600470BEB840F659FE(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9DC3627FA8E8C9A600470BEB840F659FE() called");
    return 0;
}

/* Exported Object: perfFreqTableC1Parsed */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableC1Parsed = NULL;

/* Demangled: _vp9dec_538A094857F6F2DF612C6266AB29A7CC3F90D2585E03154EA665CE4ACFF598A7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_538A094857F6F2DF612C6266AB29A7CC3F90D2585E03154EA665CE4ACFF598A7(void) {
    ALOGD("_vp9dec_538A094857F6F2DF612C6266AB29A7CC3F90D2585E03154EA665CE4ACFF598A7() called");
    return 0;
}

/* Demangled: _vp9dec_570C8C76B3E6A0478C747CA508303CE3CBDC68023D1F6E9069E90C5632A2E863 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_570C8C76B3E6A0478C747CA508303CE3CBDC68023D1F6E9069E90C5632A2E863(void) {
    ALOGD("_vp9dec_570C8C76B3E6A0478C747CA508303CE3CBDC68023D1F6E9069E90C5632A2E863() called");
    return 0;
}

/* Demangled: _vp9dec_D766175777158A54D683D36624A96BDBAAAB89D252BFDAD921967BE658255D22 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D766175777158A54D683D36624A96BDBAAAB89D252BFDAD921967BE658255D22(void) {
    ALOGD("_vp9dec_D766175777158A54D683D36624A96BDBAAAB89D252BFDAD921967BE658255D22() called");
    return 0;
}

/* Demangled: _vp9dec_3C0B1546DFCD2376FB1BB081A99B85486702270961797DB46377E8A79F74B3E9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3C0B1546DFCD2376FB1BB081A99B85486702270961797DB46377E8A79F74B3E9(void) {
    ALOGD("_vp9dec_3C0B1546DFCD2376FB1BB081A99B85486702270961797DB46377E8A79F74B3E9() called");
    return 0;
}

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E8614B6F7BACD335D45122521515882220 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E8614B6F7BACD335D45122521515882220(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E8614B6F7BACD335D45122521515882220() called");
    return 0;
}

/* Demangled: _vp9dec_F81C4A44B39D5C76E533BBD12521FF1985A4971563AC4D52CC92B6E7AD02788A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F81C4A44B39D5C76E533BBD12521FF1985A4971563AC4D52CC92B6E7AD02788A(void) {
    ALOGD("_vp9dec_F81C4A44B39D5C76E533BBD12521FF1985A4971563AC4D52CC92B6E7AD02788A() called");
    return 0;
}

/* Exported Object: vp9_sad32x16x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x16x4d = NULL;

/* Demangled: VP9SemInit */
extern "C" __attribute__((visibility("default"))) int VP9SemInit(void) {
    ALOGD("VP9SemInit() called");
    return 0;
}

/* Demangled: _vp9dec_3B1C3CEB99A582DE27C81A304FF0C38B563906AA2C9EFCDC9E19648DA5A1E8FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3B1C3CEB99A582DE27C81A304FF0C38B563906AA2C9EFCDC9E19648DA5A1E8FF(void) {
    ALOGD("_vp9dec_3B1C3CEB99A582DE27C81A304FF0C38B563906AA2C9EFCDC9E19648DA5A1E8FF() called");
    return 0;
}

/* Demangled: _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BDC3627FA8E8C9A600470BEB840F659FE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BDC3627FA8E8C9A600470BEB840F659FE(void) {
    ALOGD("_vp9dec_AD8B44EB52369A1CE6877A4E82DB569BDC3627FA8E8C9A600470BEB840F659FE() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Exported Object: vp9_h_predictor_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_h_predictor_32x32 = NULL;

/* Demangled: _vp9dec_8850C27503F0939DDF35F02F624880084B016705915ACA5EC90760B5E059612B917F1C5E1C4654281FB2674854D0F753 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_8850C27503F0939DDF35F02F624880084B016705915ACA5EC90760B5E059612B917F1C5E1C4654281FB2674854D0F753(void) {
    ALOGD("_vp9dec_8850C27503F0939DDF35F02F624880084B016705915ACA5EC90760B5E059612B917F1C5E1C4654281FB2674854D0F753() called");
    return 0;
}

/* Demangled: _vp9dec_47C5D3453383F5C31B79469CC5AF8863 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_47C5D3453383F5C31B79469CC5AF8863(void) {
    ALOGD("_vp9dec_47C5D3453383F5C31B79469CC5AF8863() called");
    return 0;
}

/* Exported Object: vp9_sub_pel_filters_8_composite */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pel_filters_8_composite = NULL;

/* Demangled: VP9SwDecInitYUVSetting */
extern "C" __attribute__((visibility("default"))) int VP9SwDecInitYUVSetting(void) {
    ALOGD("VP9SwDecInitYUVSetting() called");
    return 0;
}

/* Exported Object: vp9_idct4x4_16_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct4x4_16_add = NULL;

/* Demangled: _vp9dec_1C007ED6ADD72FD8F74E1E8CCF855D483CC73B3CB0EFB2DE63372F147972A92D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_1C007ED6ADD72FD8F74E1E8CCF855D483CC73B3CB0EFB2DE63372F147972A92D(void) {
    ALOGD("_vp9dec_1C007ED6ADD72FD8F74E1E8CCF855D483CC73B3CB0EFB2DE63372F147972A92D() called");
    return 0;
}

/* Exported Object: vp9_d153_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_d153_predictor_4x4 = NULL;

/* Exported Object: vp9_sad4x8_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x8_avg = NULL;

/* Exported Object: vp9_block_error */
extern "C" __attribute__((visibility("default"))) void* vp9_block_error = NULL;

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: _vp9dec_07FA4B027C22C2F701E8AB792C586066 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_07FA4B027C22C2F701E8AB792C586066(void) {
    ALOGD("_vp9dec_07FA4B027C22C2F701E8AB792C586066() called");
    return 0;
}

/* Exported Object: vp9_sad64x64_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad64x64_avg = NULL;

/* Exported Object: vp9_d207_predictor_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_d207_predictor_32x32 = NULL;

/* Exported Object: vp9_intra_mode_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_intra_mode_tree = NULL;

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Exported Object: vp9_sad8x8x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x8x4d = NULL;

/* Demangled: _vp9dec_991E530FF5E8CBA1F41BBA648C453053 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_991E530FF5E8CBA1F41BBA648C453053(void) {
    ALOGD("_vp9dec_991E530FF5E8CBA1F41BBA648C453053() called");
    return 0;
}

/* Exported Object: left_pel_129 */
extern "C" __attribute__((visibility("default"))) void* left_pel_129 = NULL;

/* Demangled: VP9DecoderOpen */
extern "C" __attribute__((visibility("default"))) int VP9DecoderOpen(void) {
    ALOGD("VP9DecoderOpen() called");
    return 0;
}

/* Exported Object: default_scan_32x32_neighbors */
extern "C" __attribute__((visibility("default"))) void* default_scan_32x32_neighbors = NULL;

/* Exported Object: vp9_sub_pixel_avg_variance8x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance8x4 = NULL;

/* Demangled: _vp9dec_5112160E569EA5DB5982F0A349D57C387CAA3F40E5E2CF6E6F0E8B8118F5FB00 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5112160E569EA5DB5982F0A349D57C387CAA3F40E5E2CF6E6F0E8B8118F5FB00(void) {
    ALOGD("_vp9dec_5112160E569EA5DB5982F0A349D57C387CAA3F40E5E2CF6E6F0E8B8118F5FB00() called");
    return 0;
}

/* Exported Object: vp9_mbloop_filter_horizontal_edge */
extern "C" __attribute__((visibility("default"))) void* vp9_mbloop_filter_horizontal_edge = NULL;

/* Demangled: _vp9dec_00A46662B1C5399099D4A1608C1E2B061AE4EA6FECC30BD0BCE0106375888B20 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_00A46662B1C5399099D4A1608C1E2B061AE4EA6FECC30BD0BCE0106375888B20(void) {
    ALOGD("_vp9dec_00A46662B1C5399099D4A1608C1E2B061AE4EA6FECC30BD0BCE0106375888B20() called");
    return 0;
}

/* Exported Object: vp9_mse16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_mse16x16 = NULL;

/* Exported Object: vp9_sub_pixel_avg_variance8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance8x8 = NULL;

/* Demangled: _vp9dec_570C8C76B3E6A0478C747CA508303CE380D40D0F7BA7F6C46D66DF6EF89EFAAE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_570C8C76B3E6A0478C747CA508303CE380D40D0F7BA7F6C46D66DF6EF89EFAAE(void) {
    ALOGD("_vp9dec_570C8C76B3E6A0478C747CA508303CE380D40D0F7BA7F6C46D66DF6EF89EFAAE() called");
    return 0;
}

/* Demangled: VP9SwDecOpen */
extern "C" __attribute__((visibility("default"))) int VP9SwDecOpen(void) {
    ALOGD("VP9SwDecOpen() called");
    return 0;
}

/* Demangled: _vp9dec_6FCEF48A9740D466ED95FD9EEAA52A3ABD5CE9C1F916F36DC75DF06A22721F98 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6FCEF48A9740D466ED95FD9EEAA52A3ABD5CE9C1F916F36DC75DF06A22721F98(void) {
    ALOGD("_vp9dec_6FCEF48A9740D466ED95FD9EEAA52A3ABD5CE9C1F916F36DC75DF06A22721F98() called");
    return 0;
}

/* Demangled: _vp9dec_21904FB11A9DE07089DB2D675D39B95F11086DFA257FB72BABCB15ADA84DBB0F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_21904FB11A9DE07089DB2D675D39B95F11086DFA257FB72BABCB15ADA84DBB0F(void) {
    ALOGD("_vp9dec_21904FB11A9DE07089DB2D675D39B95F11086DFA257FB72BABCB15ADA84DBB0F() called");
    return 0;
}

/* Exported Object: vp9_sad8x16x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x16x4d = NULL;

/* Demangled: _vp9dec_782660886255CE6ABC1381A346458D165025A22EF0497FB4BD9E74DD8AB0FF51 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_782660886255CE6ABC1381A346458D165025A22EF0497FB4BD9E74DD8AB0FF51(void) {
    ALOGD("_vp9dec_782660886255CE6ABC1381A346458D165025A22EF0497FB4BD9E74DD8AB0FF51() called");
    return 0;
}

/* Exported Object: vp9_kf_uv_mode_prob */
extern "C" __attribute__((visibility("default"))) void* vp9_kf_uv_mode_prob = NULL;

/* Exported Object: vp9_sad4x4_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x4_avg = NULL;

/* Exported Object: perfFreqTableC0 */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableC0 = NULL;

/* Demangled: _vp9dec_76C92AA05435F8148A2A23D564B5487EEA8FACB84B76CDD2CB4349576F53A2B7 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_76C92AA05435F8148A2A23D564B5487EEA8FACB84B76CDD2CB4349576F53A2B7(void) {
    ALOGD("_vp9dec_76C92AA05435F8148A2A23D564B5487EEA8FACB84B76CDD2CB4349576F53A2B7() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: _vp9dec_C5C996D53C0AFBF39271F7D49C9D5454F55CAE449CFAF76447A941754D3484BF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C5C996D53C0AFBF39271F7D49C9D5454F55CAE449CFAF76447A941754D3484BF(void) {
    ALOGD("_vp9dec_C5C996D53C0AFBF39271F7D49C9D5454F55CAE449CFAF76447A941754D3484BF() called");
    return 0;
}

/* Exported Object: perfFreqTableC1 */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableC1 = NULL;

/* Demangled: _vp9dec_61EAE165665B579C3BE91F412A13C66C1C073E8617C08DF3430ABEE9514BE3AE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_61EAE165665B579C3BE91F412A13C66C1C073E8617C08DF3430ABEE9514BE3AE(void) {
    ALOGD("_vp9dec_61EAE165665B579C3BE91F412A13C66C1C073E8617C08DF3430ABEE9514BE3AE() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance32x32 = NULL;

/* Demangled: _vp9dec_EC69A677F68D29C3C6AEBBB16AF4AB46FAA2008D94504AF89213397A50CF900A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_EC69A677F68D29C3C6AEBBB16AF4AB46FAA2008D94504AF89213397A50CF900A(void) {
    ALOGD("_vp9dec_EC69A677F68D29C3C6AEBBB16AF4AB46FAA2008D94504AF89213397A50CF900A() called");
    return 0;
}

/* Demangled: VP9SwDecDecode */
extern "C" __attribute__((visibility("default"))) int VP9SwDecDecode(void) {
    ALOGD("VP9SwDecDecode() called");
    return 0;
}

/* Exported Object: vp9_convolve8_avg_horiz */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve8_avg_horiz = NULL;

/* Demangled: _vp9dec_1C0922D433812E00C7892045BD73C2E76C04079DCBD55D372291298D6DBCA8CF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_1C0922D433812E00C7892045BD73C2E76C04079DCBD55D372291298D6DBCA8CF(void) {
    ALOGD("_vp9dec_1C0922D433812E00C7892045BD73C2E76C04079DCBD55D372291298D6DBCA8CF() called");
    return 0;
}

/* Exported Object: vp9_dc_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_dc_predictor_8x8 = NULL;

/* Demangled: _vp9dec_3C0B1546DFCD2376FB1BB081A99B8548D1833189BF6C1809997AA712B199DD87 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3C0B1546DFCD2376FB1BB081A99B8548D1833189BF6C1809997AA712B199DD87(void) {
    ALOGD("_vp9dec_3C0B1546DFCD2376FB1BB081A99B8548D1833189BF6C1809997AA712B199DD87() called");
    return 0;
}

/* Exported Object: vp9_idct8x8_10_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct8x8_10_add = NULL;

/* Demangled: _vp9dec_D766175777158A54D683D36624A96BDB65914E98E3456C8C24057785A314E450 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D766175777158A54D683D36624A96BDB65914E98E3456C8C24057785A314E450(void) {
    ALOGD("_vp9dec_D766175777158A54D683D36624A96BDB65914E98E3456C8C24057785A314E450() called");
    return 0;
}

/* Demangled: _vp9dec_6D797ACADCF930D72AD648A174B2C0FEDC3627FA8E8C9A600470BEB840F659FE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6D797ACADCF930D72AD648A174B2C0FEDC3627FA8E8C9A600470BEB840F659FE(void) {
    ALOGD("_vp9dec_6D797ACADCF930D72AD648A174B2C0FEDC3627FA8E8C9A600470BEB840F659FE() called");
    return 0;
}

/* Demangled: _vp9dec_6D8D8F8CB86F889FEE71D0D8E453195BA90C9353FFB8E3B47652DBDE371E945D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6D8D8F8CB86F889FEE71D0D8E453195BA90C9353FFB8E3B47652DBDE371E945D(void) {
    ALOGD("_vp9dec_6D8D8F8CB86F889FEE71D0D8E453195BA90C9353FFB8E3B47652DBDE371E945D() called");
    return 0;
}

/* Demangled: _vp9dec_419282FF54C9DB51DB2F4C74B558CBB6 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_419282FF54C9DB51DB2F4C74B558CBB6(void) {
    ALOGD("_vp9dec_419282FF54C9DB51DB2F4C74B558CBB6() called");
    return 0;
}

/* Exported Object: vp9_variance64x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance64x32 = NULL;

/* Exported Object: vp9_v_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_v_predictor_4x4 = NULL;

/* Demangled: _vp9dec_FC8CBD76381F11AAA0393E6E5E0E17AA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_FC8CBD76381F11AAA0393E6E5E0E17AA(void) {
    ALOGD("_vp9dec_FC8CBD76381F11AAA0393E6E5E0E17AA() called");
    return 0;
}

/* Demangled: _vp9dec_2FA3097416A2730DA0187FFB41E77F9FDB78EA354BBC84135071F7CE7C73694E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_2FA3097416A2730DA0187FFB41E77F9FDB78EA354BBC84135071F7CE7C73694E(void) {
    ALOGD("_vp9dec_2FA3097416A2730DA0187FFB41E77F9FDB78EA354BBC84135071F7CE7C73694E() called");
    return 0;
}

/* Demangled: _vp9dec_AC5D46BFA4C3470C03EE2CFAB92369F3C35CF8AFE64DF25F9149F80D58AD81A9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AC5D46BFA4C3470C03EE2CFAB92369F3C35CF8AFE64DF25F9149F80D58AD81A9(void) {
    ALOGD("_vp9dec_AC5D46BFA4C3470C03EE2CFAB92369F3C35CF8AFE64DF25F9149F80D58AD81A9() called");
    return 0;
}

/* Exported Object: vp9_row_iscan_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_row_iscan_16x16 = NULL;

/* Demangled: _vp9dec_83484A7520DF0A1A140AED0017B2414AE51A92548B52AB1A792478090D0FC93F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_83484A7520DF0A1A140AED0017B2414AE51A92548B52AB1A792478090D0FC93F(void) {
    ALOGD("_vp9dec_83484A7520DF0A1A140AED0017B2414AE51A92548B52AB1A792478090D0FC93F() called");
    return 0;
}

/* Exported Object: vp9_variance8x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance8x16 = NULL;

/* Demangled: _vp9dec_C75476B0477EC4695184A88C78EDF526 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C75476B0477EC4695184A88C78EDF526(void) {
    ALOGD("_vp9dec_C75476B0477EC4695184A88C78EDF526() called");
    return 0;
}

/* Demangled: _vp9dec_BC60145EAC72C9E75B60009FA99483021E19C5EF6CA4E089F8C52D24246710D0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BC60145EAC72C9E75B60009FA99483021E19C5EF6CA4E089F8C52D24246710D0(void) {
    ALOGD("_vp9dec_BC60145EAC72C9E75B60009FA99483021E19C5EF6CA4E089F8C52D24246710D0() called");
    return 0;
}

/* Demangled: _vp9dec_AA40C59DD1472D5194825B6C8AC7ACC42D785C900886279F83FD85FEA4AEDE2C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AA40C59DD1472D5194825B6C8AC7ACC42D785C900886279F83FD85FEA4AEDE2C(void) {
    ALOGD("_vp9dec_AA40C59DD1472D5194825B6C8AC7ACC42D785C900886279F83FD85FEA4AEDE2C() called");
    return 0;
}

/* Exported Object: vp9_mb_lpf_vertical_edge_w */
extern "C" __attribute__((visibility("default"))) void* vp9_mb_lpf_vertical_edge_w = NULL;

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E898A769821F801EC246853C899B2CA4777E1F82D8DB948654CFD1026F79F9BF31 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E898A769821F801EC246853C899B2CA4777E1F82D8DB948654CFD1026F79F9BF31(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E898A769821F801EC246853C899B2CA4777E1F82D8DB948654CFD1026F79F9BF31() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F97199DA70645D80AFD8A6C65967DC6C40 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F97199DA70645D80AFD8A6C65967DC6C40(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F97199DA70645D80AFD8A6C65967DC6C40() called");
    return 0;
}

/* Demangled: _vp9dec_BF517C3C3E95D13D2DA35D9BD85C24058EE6E766858CE89AA8AE4864C8F876FA35F60776189F64FC4E255D03B65022DE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BF517C3C3E95D13D2DA35D9BD85C24058EE6E766858CE89AA8AE4864C8F876FA35F60776189F64FC4E255D03B65022DE(void) {
    ALOGD("_vp9dec_BF517C3C3E95D13D2DA35D9BD85C24058EE6E766858CE89AA8AE4864C8F876FA35F60776189F64FC4E255D03B65022DE() called");
    return 0;
}

/* Demangled: _vp9dec_3709BB3173143947DC2AA24706309EC5EB50A274A2AF311C8F46CA789CC0B7F6 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3709BB3173143947DC2AA24706309EC5EB50A274A2AF311C8F46CA789CC0B7F6(void) {
    ALOGD("_vp9dec_3709BB3173143947DC2AA24706309EC5EB50A274A2AF311C8F46CA789CC0B7F6() called");
    return 0;
}

/* Demangled: VP9Memset */
extern "C" __attribute__((visibility("default"))) int VP9Memset(void) {
    ALOGD("VP9Memset() called");
    return 0;
}

/* Demangled: VP9MutexDestroy */
extern "C" __attribute__((visibility("default"))) int VP9MutexDestroy(void) {
    ALOGD("VP9MutexDestroy() called");
    return 0;
}

/* Exported Object: col_scan_16x16_neighbors */
extern "C" __attribute__((visibility("default"))) void* col_scan_16x16_neighbors = NULL;

/* Demangled: _vp9dec_DE918FD1F8E185E801A57CA579FE9755 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DE918FD1F8E185E801A57CA579FE9755(void) {
    ALOGD("_vp9dec_DE918FD1F8E185E801A57CA579FE9755() called");
    return 0;
}

/* Demangled: vp9decPerfServiceInit */
extern "C" __attribute__((visibility("default"))) int vp9decPerfServiceInit(void) {
    ALOGD("vp9decPerfServiceInit() called");
    return 0;
}

/* Exported Object: vp9_sad64x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad64x32 = NULL;

/* Exported Object: vp9_bilinear_filters */
extern "C" __attribute__((visibility("default"))) void* vp9_bilinear_filters = NULL;

/* Exported Object: vp9_sad8x4x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x4x4d = NULL;

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Exported Object: vp9_idct16x16_256_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct16x16_256_add = NULL;

/* Exported Object: vp9_scan_orders */
extern "C" __attribute__((visibility("default"))) void* vp9_scan_orders = NULL;

/* Demangled: _vp9dec_CB00BF0695FD6C93F9F7FE37237EF907B2A0954B25B76D3C960CA86B726F52E9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_CB00BF0695FD6C93F9F7FE37237EF907B2A0954B25B76D3C960CA86B726F52E9(void) {
    ALOGD("_vp9dec_CB00BF0695FD6C93F9F7FE37237EF907B2A0954B25B76D3C960CA86B726F52E9() called");
    return 0;
}

/* Exported Object: vp9_short_fht16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_short_fht16x16 = NULL;

/* Demangled: VP9SwDecFlushBuffer */
extern "C" __attribute__((visibility("default"))) int VP9SwDecFlushBuffer(void) {
    ALOGD("VP9SwDecFlushBuffer() called");
    return 0;
}

/* Exported Object: vpx_codec_vp9_dx_algo */
extern "C" __attribute__((visibility("default"))) void* vpx_codec_vp9_dx_algo = NULL;

/* Demangled: _vp9dec_C4CB9975BC522CF831969B210D380BD72D785C900886279F83FD85FEA4AEDE2C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C4CB9975BC522CF831969B210D380BD72D785C900886279F83FD85FEA4AEDE2C(void) {
    ALOGD("_vp9dec_C4CB9975BC522CF831969B210D380BD72D785C900886279F83FD85FEA4AEDE2C() called");
    return 0;
}

/* Exported Object: _vp9dec_573C8B2C2021E48FAB8D4D6775DEFC5D */
extern "C" __attribute__((visibility("default"))) void* _vp9dec_573C8B2C2021E48FAB8D4D6775DEFC5D = NULL;

/* Demangled: _vp9dec_F0EC9AC732BB34CB8BD2BEF510702D8F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F0EC9AC732BB34CB8BD2BEF510702D8F(void) {
    ALOGD("_vp9dec_F0EC9AC732BB34CB8BD2BEF510702D8F() called");
    return 0;
}

/* Demangled: _vp9dec_FF026EF618A4416FE964C4F852B00397A6F46C4097AE3BED38D444FB1D94C683 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_FF026EF618A4416FE964C4F852B00397A6F46C4097AE3BED38D444FB1D94C683(void) {
    ALOGD("_vp9dec_FF026EF618A4416FE964C4F852B00397A6F46C4097AE3BED38D444FB1D94C683() called");
    return 0;
}

/* Demangled: VP9SwDecDestroy */
extern "C" __attribute__((visibility("default"))) int VP9SwDecDestroy(void) {
    ALOGD("VP9SwDecDestroy() called");
    return 0;
}

/* Exported Object: vp9_default_iscan_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_default_iscan_16x16 = NULL;

/* Demangled: VP9SwDecThreadWaitDone */
extern "C" __attribute__((visibility("default"))) int VP9SwDecThreadWaitDone(void) {
    ALOGD("VP9SwDecThreadWaitDone() called");
    return 0;
}

/* Exported Object: vp9_mv_class0_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_mv_class0_tree = NULL;

/* Demangled: _vp9dec_85A17252BB8E509E37884393947FFD19778EEF4D38850CB9DC6E1A053483BF30 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_85A17252BB8E509E37884393947FFD19778EEF4D38850CB9DC6E1A053483BF30(void) {
    ALOGD("_vp9dec_85A17252BB8E509E37884393947FFD19778EEF4D38850CB9DC6E1A053483BF30() called");
    return 0;
}

/* Exported Object: rVP9OALCallBack */
extern "C" __attribute__((visibility("default"))) void* rVP9OALCallBack = NULL;

/* Demangled: _vp9dec_AF6D12D8F0E6548517ABAEF2B4CD9EC896E3CECE4B05AFFCC6E895D8E204C122 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AF6D12D8F0E6548517ABAEF2B4CD9EC896E3CECE4B05AFFCC6E895D8E204C122(void) {
    ALOGD("_vp9dec_AF6D12D8F0E6548517ABAEF2B4CD9EC896E3CECE4B05AFFCC6E895D8E204C122() called");
    return 0;
}

/* Exported Object: vp9_sad8x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x4 = NULL;

/* Demangled: _vp9dec_F1D7AA0B404CE173E3097A1135A4DFC32277243A7D4D7E6DB2D5CC3F556BF49C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F1D7AA0B404CE173E3097A1135A4DFC32277243A7D4D7E6DB2D5CC3F556BF49C(void) {
    ALOGD("_vp9dec_F1D7AA0B404CE173E3097A1135A4DFC32277243A7D4D7E6DB2D5CC3F556BF49C() called");
    return 0;
}

/* Exported Object: num_8x8_blocks_high4wide0_lookup */
extern "C" __attribute__((visibility("default"))) void* num_8x8_blocks_high4wide0_lookup = NULL;

/* Exported Object: vp9_dc_predictor_32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_dc_predictor_32x32 = NULL;

/* Demangled: _vp9dec_7D4861E7323D5C9C71A8D1BD65D03F9C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7D4861E7323D5C9C71A8D1BD65D03F9C(void) {
    ALOGD("_vp9dec_7D4861E7323D5C9C71A8D1BD65D03F9C() called");
    return 0;
}

/* Exported Object: vp9_sad8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad8x8 = NULL;

/* Demangled: _vp9dec_4B37E404292DCA981B0706E1997619AB */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4B37E404292DCA981B0706E1997619AB(void) {
    ALOGD("_vp9dec_4B37E404292DCA981B0706E1997619AB() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: _vp9dec_765A7CE4B6F9040F539703478E1B13199B94D92958F132249B7DC387C60418E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_765A7CE4B6F9040F539703478E1B13199B94D92958F132249B7DC387C60418E0(void) {
    ALOGD("_vp9dec_765A7CE4B6F9040F539703478E1B13199B94D92958F132249B7DC387C60418E0() called");
    return 0;
}

/* Demangled: VP9PthreadJoin */
extern "C" __attribute__((visibility("default"))) int VP9PthreadJoin(void) {
    ALOGD("VP9PthreadJoin() called");
    return 0;
}

/* Demangled: VP9BindingCore */
extern "C" __attribute__((visibility("default"))) int VP9BindingCore(void) {
    ALOGD("VP9BindingCore() called");
    return 0;
}

/* Demangled: _vp9dec_62315B2A91A7556E6FC782FC0490DFA5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_62315B2A91A7556E6FC782FC0490DFA5(void) {
    ALOGD("_vp9dec_62315B2A91A7556E6FC782FC0490DFA5() called");
    return 0;
}

/* Demangled: _vp9dec_AA40C59DD1472D5194825B6C8AC7ACC4FB40F4239D43ADC25BA207CA54D3A32A */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AA40C59DD1472D5194825B6C8AC7ACC4FB40F4239D43ADC25BA207CA54D3A32A(void) {
    ALOGD("_vp9dec_AA40C59DD1472D5194825B6C8AC7ACC4FB40F4239D43ADC25BA207CA54D3A32A() called");
    return 0;
}

/* Demangled: _vp9dec_7B21A8E5159B62066AEAF75D52787DDADC3627FA8E8C9A600470BEB840F659FE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7B21A8E5159B62066AEAF75D52787DDADC3627FA8E8C9A600470BEB840F659FE(void) {
    ALOGD("_vp9dec_7B21A8E5159B62066AEAF75D52787DDADC3627FA8E8C9A600470BEB840F659FE() called");
    return 0;
}

/* Exported Object: vp9_variance8x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance8x4 = NULL;

/* Demangled: VP9SwDecConfigYUV */
extern "C" __attribute__((visibility("default"))) int VP9SwDecConfigYUV(void) {
    ALOGD("VP9SwDecConfigYUV() called");
    return 0;
}

/* Demangled: _vp9dec_AE2E9FECFBD893AA96C2583A418492B39B94D92958F132249B7DC387C60418E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AE2E9FECFBD893AA96C2583A418492B39B94D92958F132249B7DC387C60418E0(void) {
    ALOGD("_vp9dec_AE2E9FECFBD893AA96C2583A418492B39B94D92958F132249B7DC387C60418E0() called");
    return 0;
}

/* Exported Object: g_debug_decode_frame */
extern "C" __attribute__((visibility("default"))) void* g_debug_decode_frame = NULL;

/* Demangled: _vp9dec_C721364C413EF0C25DACD79D6BD00A684103EC8360427D3E4CD01D9BD26284E6 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C721364C413EF0C25DACD79D6BD00A684103EC8360427D3E4CD01D9BD26284E6(void) {
    ALOGD("_vp9dec_C721364C413EF0C25DACD79D6BD00A684103EC8360427D3E4CD01D9BD26284E6() called");
    return 0;
}

/* Demangled: _vp9dec_0F7F19CBCF3472FF3D6058DDBC1AF5E1747F9E34D3A6558708EEFFC6B10506F9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_0F7F19CBCF3472FF3D6058DDBC1AF5E1747F9E34D3A6558708EEFFC6B10506F9(void) {
    ALOGD("_vp9dec_0F7F19CBCF3472FF3D6058DDBC1AF5E1747F9E34D3A6558708EEFFC6B10506F9() called");
    return 0;
}

/* Exported Object: row_scan_4x4_neighbors */
extern "C" __attribute__((visibility("default"))) void* row_scan_4x4_neighbors = NULL;

/* Exported Object: vp9_sub_pel_filters_8lp */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pel_filters_8lp = NULL;

/* Demangled: VP9SwDecDeinit */
extern "C" __attribute__((visibility("default"))) int VP9SwDecDeinit(void) {
    ALOGD("VP9SwDecDeinit() called");
    return 0;
}

/* Demangled: VP9SwDecSetFreeRunStatus */
extern "C" __attribute__((visibility("default"))) int VP9SwDecSetFreeRunStatus(void) {
    ALOGD("VP9SwDecSetFreeRunStatus() called");
    return 0;
}

/* Demangled: _vp9dec_08F0DE42C42C7BA2C7EE14B8E8CF425B1D3821DB61A01D29E8954EEE16E49D62 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_08F0DE42C42C7BA2C7EE14B8E8CF425B1D3821DB61A01D29E8954EEE16E49D62(void) {
    ALOGD("_vp9dec_08F0DE42C42C7BA2C7EE14B8E8CF425B1D3821DB61A01D29E8954EEE16E49D62() called");
    return 0;
}

/* Exported Object: vp9_idct32x32_1024_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct32x32_1024_add = NULL;

/* Exported Object: vp9_get_sse_sum_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_get_sse_sum_8x8 = NULL;

/* Exported Object: vp9_seg_maps */
extern "C" __attribute__((visibility("default"))) void* vp9_seg_maps = NULL;

/* Exported Object: vp9_diamond_search_sad */
extern "C" __attribute__((visibility("default"))) void* vp9_diamond_search_sad = NULL;

/* Exported Object: vp9_variance8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance8x8 = NULL;

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9BFB9E5D20DDFF962F84666FD4EDD83AA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9BFB9E5D20DDFF962F84666FD4EDD83AA(void) {
    ALOGD("_vp9dec_9F39C3FD4358E01E6F9CDF723619A5F9BFB9E5D20DDFF962F84666FD4EDD83AA() called");
    return 0;
}

/* Exported Object: row_scan_8x8_neighbors */
extern "C" __attribute__((visibility("default"))) void* row_scan_8x8_neighbors = NULL;

/* Demangled: _vp9dec_32A81A637DA99AB1180E7C3AE3B4ECAFE422B06FA167C572EEDB9CD5D52DFCD4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_32A81A637DA99AB1180E7C3AE3B4ECAFE422B06FA167C572EEDB9CD5D52DFCD4(void) {
    ALOGD("_vp9dec_32A81A637DA99AB1180E7C3AE3B4ECAFE422B06FA167C572EEDB9CD5D52DFCD4() called");
    return 0;
}

/* Demangled: _vp9dec_3063506A0DACB91B094194F2C67C622B */
extern "C" __attribute__((visibility("default"))) int _vp9dec_3063506A0DACB91B094194F2C67C622B(void) {
    ALOGD("_vp9dec_3063506A0DACB91B094194F2C67C622B() called");
    return 0;
}

/* Exported Object: vp9_sad64x64x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad64x64x4d = NULL;

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: _vp9dec_BF517C3C3E95D13D2DA35D9BD85C24058EE6E766858CE89AA8AE4864C8F876FA8457514B20126D713184F8944CFFE28C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BF517C3C3E95D13D2DA35D9BD85C24058EE6E766858CE89AA8AE4864C8F876FA8457514B20126D713184F8944CFFE28C(void) {
    ALOGD("_vp9dec_BF517C3C3E95D13D2DA35D9BD85C24058EE6E766858CE89AA8AE4864C8F876FA8457514B20126D713184F8944CFFE28C() called");
    return 0;
}

/* Demangled: _vp9dec_BDD1FD00AF996986C240914F3E45AD1F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BDD1FD00AF996986C240914F3E45AD1F(void) {
    ALOGD("_vp9dec_BDD1FD00AF996986C240914F3E45AD1F() called");
    return 0;
}

/* Exported Object: vp9_idct16x16_1_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct16x16_1_add = NULL;

/* Exported Object: vp9_tm_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_tm_predictor_16x16 = NULL;

/* Exported Object: _vp9dec_EC870AE55BE24D5B89195AA1465CECE7 */
extern "C" __attribute__((visibility("default"))) void* _vp9dec_EC870AE55BE24D5B89195AA1465CECE7 = NULL;

/* Exported Object: vp9_sub_pixel_variance64x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance64x32 = NULL;

/* Demangled: _vp9dec_69DCD7DACF05671493FF67189F9961139B94631EDE38C571206910468B55FAEC */
extern "C" __attribute__((visibility("default"))) int _vp9dec_69DCD7DACF05671493FF67189F9961139B94631EDE38C571206910468B55FAEC(void) {
    ALOGD("_vp9dec_69DCD7DACF05671493FF67189F9961139B94631EDE38C571206910468B55FAEC() called");
    return 0;
}

/* Demangled: VP9DecoderDeInit */
extern "C" __attribute__((visibility("default"))) int VP9DecoderDeInit(void) {
    ALOGD("VP9DecoderDeInit() called");
    return 0;
}

/* Demangled: VP9SwDecSwitchLevel */
extern "C" __attribute__((visibility("default"))) int VP9SwDecSwitchLevel(void) {
    ALOGD("VP9SwDecSwitchLevel() called");
    return 0;
}

/* Exported Object: vp9_sad16x32_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x32_avg = NULL;

/* Demangled: _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BBFB9E5D20DDFF962F84666FD4EDD83AA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD8B44EB52369A1CE6877A4E82DB569BBFB9E5D20DDFF962F84666FD4EDD83AA(void) {
    ALOGD("_vp9dec_AD8B44EB52369A1CE6877A4E82DB569BBFB9E5D20DDFF962F84666FD4EDD83AA() called");
    return 0;
}

/* Demangled: _vp9dec_DA8CA1B2B3187C7C4E0C14A2B7E9EE13898DB4098A95EC854F020624246A24FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DA8CA1B2B3187C7C4E0C14A2B7E9EE13898DB4098A95EC854F020624246A24FF(void) {
    ALOGD("_vp9dec_DA8CA1B2B3187C7C4E0C14A2B7E9EE13898DB4098A95EC854F020624246A24FF() called");
    return 0;
}

/* Exported Object: vp9_h_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_h_predictor_8x8 = NULL;

/* Exported Object: vp9_segment_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_segment_tree = NULL;

/* Demangled: _vp9dec_898F4C368261FB040C32D66CA2CC300A1DEEE3453683B6104AE427556B8D23FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_898F4C368261FB040C32D66CA2CC300A1DEEE3453683B6104AE427556B8D23FF(void) {
    ALOGD("_vp9dec_898F4C368261FB040C32D66CA2CC300A1DEEE3453683B6104AE427556B8D23FF() called");
    return 0;
}

/* Demangled: _vp9dec_4829531693A2F470567B054417B2AC784BE60FC885961914F0B73059B04F02FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4829531693A2F470567B054417B2AC784BE60FC885961914F0B73059B04F02FF(void) {
    ALOGD("_vp9dec_4829531693A2F470567B054417B2AC784BE60FC885961914F0B73059B04F02FF() called");
    return 0;
}

/* Demangled: _vp9dec_C09D1799EAC46050200DF74910A801A5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C09D1799EAC46050200DF74910A801A5(void) {
    ALOGD("_vp9dec_C09D1799EAC46050200DF74910A801A5() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance8x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance8x16 = NULL;

/* Demangled: _vp9dec_1165EDFF2275AAEC1CE1F3BDC7C3D16F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_1165EDFF2275AAEC1CE1F3BDC7C3D16F(void) {
    ALOGD("_vp9dec_1165EDFF2275AAEC1CE1F3BDC7C3D16F() called");
    return 0;
}

/* Demangled: _vp9dec_010CAB3A0B766AE596D9C022F5648DA4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_010CAB3A0B766AE596D9C022F5648DA4(void) {
    ALOGD("_vp9dec_010CAB3A0B766AE596D9C022F5648DA4() called");
    return 0;
}

/* Demangled: _vp9dec_BAD04830D4A14C9DA5885A3D358178FDA31CE1277B576D1C826660A52617A5C4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_BAD04830D4A14C9DA5885A3D358178FDA31CE1277B576D1C826660A52617A5C4(void) {
    ALOGD("_vp9dec_BAD04830D4A14C9DA5885A3D358178FDA31CE1277B576D1C826660A52617A5C4() called");
    return 0;
}

/* Exported Object: vp9_sad16x8x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x8x4d = NULL;

/* Demangled: _vp9dec_F309B4D946E55E6F850C93542C16B615778EEF4D38850CB9DC6E1A053483BF30 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F309B4D946E55E6F850C93542C16B615778EEF4D38850CB9DC6E1A053483BF30(void) {
    ALOGD("_vp9dec_F309B4D946E55E6F850C93542C16B615778EEF4D38850CB9DC6E1A053483BF30() called");
    return 0;
}

/* Demangled: VP9CondSignal */
extern "C" __attribute__((visibility("default"))) int VP9CondSignal(void) {
    ALOGD("VP9CondSignal() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Exported Object: vp9_default_scan_orders */
extern "C" __attribute__((visibility("default"))) void* vp9_default_scan_orders = NULL;

/* Exported Object: vp9_row_iscan_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_row_iscan_4x4 = NULL;

/* Exported Object: vp9_d63_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_d63_predictor_4x4 = NULL;

/* Demangled: _vp9dec_00A46662B1C5399099D4A1608C1E2B06F54BC17DEB5D66EBF34E54B564DF0D30 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_00A46662B1C5399099D4A1608C1E2B06F54BC17DEB5D66EBF34E54B564DF0D30(void) {
    ALOGD("_vp9dec_00A46662B1C5399099D4A1608C1E2B06F54BC17DEB5D66EBF34E54B564DF0D30() called");
    return 0;
}

/* Demangled: _vp9dec_CB96CB67240B7B242046D5A68298F60C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_CB96CB67240B7B242046D5A68298F60C(void) {
    ALOGD("_vp9dec_CB96CB67240B7B242046D5A68298F60C() called");
    return 0;
}

/* Demangled: _vp9dec_D43BA3B5DD28F1E1F46B5EE3147DEE0675C59615010591C3EE39E68B374802F0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D43BA3B5DD28F1E1F46B5EE3147DEE0675C59615010591C3EE39E68B374802F0(void) {
    ALOGD("_vp9dec_D43BA3B5DD28F1E1F46B5EE3147DEE0675C59615010591C3EE39E68B374802F0() called");
    return 0;
}

/* Demangled: _vp9dec_DCE8958FEF61389AEE819178634C33DAA526AB1672A2F7E39C7D5BD1F4390DB5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DCE8958FEF61389AEE819178634C33DAA526AB1672A2F7E39C7D5BD1F4390DB5(void) {
    ALOGD("_vp9dec_DCE8958FEF61389AEE819178634C33DAA526AB1672A2F7E39C7D5BD1F4390DB5() called");
    return 0;
}

/* Demangled: _vp9dec_64D9A49F05DFAA8D5D88E784BB0422FE5FFCC6271EC420F3C6A3A1919D4143FF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_64D9A49F05DFAA8D5D88E784BB0422FE5FFCC6271EC420F3C6A3A1919D4143FF(void) {
    ALOGD("_vp9dec_64D9A49F05DFAA8D5D88E784BB0422FE5FFCC6271EC420F3C6A3A1919D4143FF() called");
    return 0;
}

/* Exported Object: vp9_sad32x64x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x64x4d = NULL;

/* Exported Object: perfFreqTableMapping */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableMapping = NULL;

/* Demangled: _vp9dec_4006286E891CF59DE611A1C1AC05D5A1747F9E34D3A6558708EEFFC6B10506F9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4006286E891CF59DE611A1C1AC05D5A1747F9E34D3A6558708EEFFC6B10506F9(void) {
    ALOGD("_vp9dec_4006286E891CF59DE611A1C1AC05D5A1747F9E34D3A6558708EEFFC6B10506F9() called");
    return 0;
}

/* Demangled: _vp9dec_AE2E9FECFBD893AA96C2583A418492B3CB93A6F2A424113F143AF55E951B7388 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AE2E9FECFBD893AA96C2583A418492B3CB93A6F2A424113F143AF55E951B7388(void) {
    ALOGD("_vp9dec_AE2E9FECFBD893AA96C2583A418492B3CB93A6F2A424113F143AF55E951B7388() called");
    return 0;
}

/* Exported Object: vp9_sub_pel_filters_8s */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pel_filters_8s = NULL;

/* Demangled: GetVP9DecoderAPI */
extern "C" __attribute__((visibility("default"))) int GetVP9DecoderAPI(void) {
    ALOGD("GetVP9DecoderAPI() called");
    return 0;
}

/* Demangled: _vp9dec_AA40C59DD1472D5194825B6C8AC7ACC47FAFFC911E7A44AD817846AB8840E85D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AA40C59DD1472D5194825B6C8AC7ACC47FAFFC911E7A44AD817846AB8840E85D(void) {
    ALOGD("_vp9dec_AA40C59DD1472D5194825B6C8AC7ACC47FAFFC911E7A44AD817846AB8840E85D() called");
    return 0;
}

/* Demangled: _vp9dec_76C92AA05435F8148A2A23D564B5487E7D874A390BB07835263EDBFB74A458F0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_76C92AA05435F8148A2A23D564B5487E7D874A390BB07835263EDBFB74A458F0(void) {
    ALOGD("_vp9dec_76C92AA05435F8148A2A23D564B5487E7D874A390BB07835263EDBFB74A458F0() called");
    return 0;
}

/* Demangled: _vp9dec_6A4303377F03D52BF2888E813DBC4E998311D03099D66B2C504CD76BD4FB9572 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6A4303377F03D52BF2888E813DBC4E998311D03099D66B2C504CD76BD4FB9572(void) {
    ALOGD("_vp9dec_6A4303377F03D52BF2888E813DBC4E998311D03099D66B2C504CD76BD4FB9572() called");
    return 0;
}

/* Exported Object: above_pel_127 */
extern "C" __attribute__((visibility("default"))) void* above_pel_127 = NULL;

/* Demangled: VP9DecoderInit */
extern "C" __attribute__((visibility("default"))) int VP9DecoderInit(void) {
    ALOGD("VP9DecoderInit() called");
    return 0;
}

/* Demangled: _vp9dec_B3807F9434F155793A555EFB417BFC25A8E3374A2146F72B3FD0FA4294D73AB3 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B3807F9434F155793A555EFB417BFC25A8E3374A2146F72B3FD0FA4294D73AB3(void) {
    ALOGD("_vp9dec_B3807F9434F155793A555EFB417BFC25A8E3374A2146F72B3FD0FA4294D73AB3() called");
    return 0;
}

/* Demangled: _vp9dec_F791F4FDF13F3FAD94728D833F7858F4 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F791F4FDF13F3FAD94728D833F7858F4(void) {
    ALOGD("_vp9dec_F791F4FDF13F3FAD94728D833F7858F4() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_avg_variance32x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance32x64 = NULL;

/* Exported Object: vp9_short_fht4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_short_fht4x4 = NULL;

/* Demangled: _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D083BE88ADA77C08275BF6B467867257E89CDE9086B0C3566A3430B842AE049395 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_F8F0A78118CD5AED86CFDEC28440D3D083BE88ADA77C08275BF6B467867257E89CDE9086B0C3566A3430B842AE049395(void) {
    ALOGD("_vp9dec_F8F0A78118CD5AED86CFDEC28440D3D083BE88ADA77C08275BF6B467867257E89CDE9086B0C3566A3430B842AE049395() called");
    return 0;
}

/* Exported Object: g_ut_flag */
extern "C" __attribute__((visibility("default"))) void* g_ut_flag = NULL;

/* Exported Object: vp9_fdct16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_fdct16x16 = NULL;

/* Demangled: VP9SwDecInit */
extern "C" __attribute__((visibility("default"))) int VP9SwDecInit(void) {
    ALOGD("VP9SwDecInit() called");
    return 0;
}

/* Exported Object: default_scan_16x16_neighbors */
extern "C" __attribute__((visibility("default"))) void* default_scan_16x16_neighbors = NULL;

/* Exported Object: vp9_convolve8_horiz */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve8_horiz = NULL;

/* Exported Object: vp9_variance64x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance64x64 = NULL;

/* Exported Object: vp9_d63_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_d63_predictor_16x16 = NULL;

/* Exported Object: num_4x4_blocks_wide8high0_lookup */
extern "C" __attribute__((visibility("default"))) void* num_4x4_blocks_wide8high0_lookup = NULL;

/* Exported Object: vp9_idct8x8_1_add */
extern "C" __attribute__((visibility("default"))) void* vp9_idct8x8_1_add = NULL;

/* Exported Object: vp9_fdct32x32_rd */
extern "C" __attribute__((visibility("default"))) void* vp9_fdct32x32_rd = NULL;

/* Demangled: _vp9dec_38DE275BC09C33E20CC4C72EE0A35D129B20E412873195443E19965064AD2C46 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_38DE275BC09C33E20CC4C72EE0A35D129B20E412873195443E19965064AD2C46(void) {
    ALOGD("_vp9dec_38DE275BC09C33E20CC4C72EE0A35D129B20E412873195443E19965064AD2C46() called");
    return 0;
}

/* Demangled: _vp9dec_5D88D3867C063B40A484B156F9A6EAD41AE4EA6FECC30BD0BCE0106375888B20 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_5D88D3867C063B40A484B156F9A6EAD41AE4EA6FECC30BD0BCE0106375888B20(void) {
    ALOGD("_vp9dec_5D88D3867C063B40A484B156F9A6EAD41AE4EA6FECC30BD0BCE0106375888B20() called");
    return 0;
}

/* Demangled: _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A5447B01F7A028E2A98DF84321C2A9C2F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A5447B01F7A028E2A98DF84321C2A9C2F(void) {
    ALOGD("_vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4A5447B01F7A028E2A98DF84321C2A9C2F() called");
    return 0;
}

/* Demangled: VP9ExtFree */
extern "C" __attribute__((visibility("default"))) int VP9ExtFree(void) {
    ALOGD("VP9ExtFree() called");
    return 0;
}

/* Demangled: _vp9dec_50E4D322B678F29BDA5F57B2186E57D49B94D92958F132249B7DC387C60418E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_50E4D322B678F29BDA5F57B2186E57D49B94D92958F132249B7DC387C60418E0(void) {
    ALOGD("_vp9dec_50E4D322B678F29BDA5F57B2186E57D49B94D92958F132249B7DC387C60418E0() called");
    return 0;
}

/* Demangled: _vp9dec_6D797ACADCF930D72AD648A174B2C0FEBFB9E5D20DDFF962F84666FD4EDD83AA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6D797ACADCF930D72AD648A174B2C0FEBFB9E5D20DDFF962F84666FD4EDD83AA(void) {
    ALOGD("_vp9dec_6D797ACADCF930D72AD648A174B2C0FEBFB9E5D20DDFF962F84666FD4EDD83AA() called");
    return 0;
}

/* Demangled: _vp9dec_6B92BF74A915E01C9167A65209DBB92DF55CAE449CFAF76447A941754D3484BF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6B92BF74A915E01C9167A65209DBB92DF55CAE449CFAF76447A941754D3484BF(void) {
    ALOGD("_vp9dec_6B92BF74A915E01C9167A65209DBB92DF55CAE449CFAF76447A941754D3484BF() called");
    return 0;
}

/* Exported Object: vp9_variance32x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance32x16 = NULL;

/* Exported Object: vp9_sub_pixel_variance4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance4x4 = NULL;

/* Exported Object: ss_size_lookup */
extern "C" __attribute__((visibility("default"))) void* ss_size_lookup = NULL;

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E8686D50C4C9696F03DAE39034A7D0333A1AD0496CCE9FBCDAD80F92DDEAF40D1D */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E8686D50C4C9696F03DAE39034A7D0333A1AD0496CCE9FBCDAD80F92DDEAF40D1D(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E8686D50C4C9696F03DAE39034A7D0333A1AD0496CCE9FBCDAD80F92DDEAF40D1D() called");
    return 0;
}

/* Demangled: _vp9dec_ED1C650067C9BAFC3C446B5F1996C49DF6BCCB490FAF968DBEB071776A32D0EB7E1F82D8DB948654CFD1026F79F9BF31 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_ED1C650067C9BAFC3C446B5F1996C49DF6BCCB490FAF968DBEB071776A32D0EB7E1F82D8DB948654CFD1026F79F9BF31(void) {
    ALOGD("_vp9dec_ED1C650067C9BAFC3C446B5F1996C49DF6BCCB490FAF968DBEB071776A32D0EB7E1F82D8DB948654CFD1026F79F9BF31() called");
    return 0;
}

/* Demangled: _vp9dec_00A46662B1C5399099D4A1608C1E2B069F12B4B34C59FAE2865E80968EA8C305 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_00A46662B1C5399099D4A1608C1E2B069F12B4B34C59FAE2865E80968EA8C305(void) {
    ALOGD("_vp9dec_00A46662B1C5399099D4A1608C1E2B069F12B4B34C59FAE2865E80968EA8C305() called");
    return 0;
}

/* Demangled: _vp9dec_C7A74129DB3A934E5C7407413B139197426D0B018C0CCE742B86ABE02B81FA4653002D80AB43B86F6989BB23C98A5EB8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C7A74129DB3A934E5C7407413B139197426D0B018C0CCE742B86ABE02B81FA4653002D80AB43B86F6989BB23C98A5EB8(void) {
    ALOGD("_vp9dec_C7A74129DB3A934E5C7407413B139197426D0B018C0CCE742B86ABE02B81FA4653002D80AB43B86F6989BB23C98A5EB8() called");
    return 0;
}

/* Exported Object: vp9_temporal_filter_apply */
extern "C" __attribute__((visibility("default"))) void* vp9_temporal_filter_apply = NULL;

/* Demangled: _vp9dec_6B92BF74A915E01C9167A65209DBB92D53A24BC39144DCCA45CE026A523930CB */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6B92BF74A915E01C9167A65209DBB92D53A24BC39144DCCA45CE026A523930CB(void) {
    ALOGD("_vp9dec_6B92BF74A915E01C9167A65209DBB92D53A24BC39144DCCA45CE026A523930CB() called");
    return 0;
}

/* Demangled: _vp9dec_B42DE31FD958BBDDF9409632063AA692 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B42DE31FD958BBDDF9409632063AA692(void) {
    ALOGD("_vp9dec_B42DE31FD958BBDDF9409632063AA692() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance4x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance4x8 = NULL;

/* Demangled: _vp9dec_C3B26BAD075819A3F9A834709F6A19252D785C900886279F83FD85FEA4AEDE2C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C3B26BAD075819A3F9A834709F6A19252D785C900886279F83FD85FEA4AEDE2C(void) {
    ALOGD("_vp9dec_C3B26BAD075819A3F9A834709F6A19252D785C900886279F83FD85FEA4AEDE2C() called");
    return 0;
}

/* Exported Object: vp9_inter_mode_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_inter_mode_tree = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: vp9_sad4x4x3 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x4x3 = NULL;

/* Demangled: _vp9dec_11E8394272B0758BCBB3B7404149F387 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_11E8394272B0758BCBB3B7404149F387(void) {
    ALOGD("_vp9dec_11E8394272B0758BCBB3B7404149F387() called");
    return 0;
}

/* Exported Object: vp9_sad64x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad64x64 = NULL;

/* Exported Object: vp9_h_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_h_predictor_16x16 = NULL;

/* Demangled: _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CAE0F20FA0EC81AD3360BD8076FBA5A7F1 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CAE0F20FA0EC81AD3360BD8076FBA5A7F1(void) {
    ALOGD("_vp9dec_7E0A2D7C2563EE37A7A0A6F5473C60CAE0F20FA0EC81AD3360BD8076FBA5A7F1() called");
    return 0;
}

/* Demangled: _vp9dec_9A58975092A0430587F972B467EA1295 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_9A58975092A0430587F972B467EA1295(void) {
    ALOGD("_vp9dec_9A58975092A0430587F972B467EA1295() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Exported Object: vp9_bilinear_filters_composite */
extern "C" __attribute__((visibility("default"))) void* vp9_bilinear_filters_composite = NULL;

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Exported Object: vp9_sad32x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad32x16 = NULL;

/* Demangled: _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4AF8C77DF031691A73EBDEA82C16177890 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4AF8C77DF031691A73EBDEA82C16177890(void) {
    ALOGD("_vp9dec_4F2BA8AAF99D8FBF44D4743FE8D3DC4AF8C77DF031691A73EBDEA82C16177890() called");
    return 0;
}

/* Demangled: _vp9dec_865E865B04A445EC51337839BD66DC5F */
extern "C" __attribute__((visibility("default"))) int _vp9dec_865E865B04A445EC51337839BD66DC5F(void) {
    ALOGD("_vp9dec_865E865B04A445EC51337839BD66DC5F() called");
    return 0;
}

/* Exported Object: vp9_sad16x16_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x16_avg = NULL;

/* Exported Object: vp9_d207_predictor_16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_d207_predictor_16x16 = NULL;

/* Demangled: VP9SwDecUpdateSpeedyAlg */
extern "C" __attribute__((visibility("default"))) int VP9SwDecUpdateSpeedyAlg(void) {
    ALOGD("VP9SwDecUpdateSpeedyAlg() called");
    return 0;
}

/* Demangled: _vp9dec_68B87C91BB650E8967DA0ACB1EB3A090C72F23C7942F65757A3CE1335A66A9DE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_68B87C91BB650E8967DA0ACB1EB3A090C72F23C7942F65757A3CE1335A66A9DE(void) {
    ALOGD("_vp9dec_68B87C91BB650E8967DA0ACB1EB3A090C72F23C7942F65757A3CE1335A66A9DE() called");
    return 0;
}

/* Exported Object: vp9_d45_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_d45_predictor_8x8 = NULL;

/* Exported Object: max_uv_txsize_lookup */
extern "C" __attribute__((visibility("default"))) void* max_uv_txsize_lookup = NULL;

/* Demangled: _vp9dec_54C772A80993324E37B96675885910B83DE034523C7461E0103496C499B0CC45 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_54C772A80993324E37B96675885910B83DE034523C7461E0103496C499B0CC45(void) {
    ALOGD("_vp9dec_54C772A80993324E37B96675885910B83DE034523C7461E0103496C499B0CC45() called");
    return 0;
}

/* Exported Object: vp9_default_iscan_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_default_iscan_4x4 = NULL;

/* Demangled: _vp9dec_22D5646489B829DA9BE6A45D58AA0CC9DB78EA354BBC84135071F7CE7C73694E */
extern "C" __attribute__((visibility("default"))) int _vp9dec_22D5646489B829DA9BE6A45D58AA0CC9DB78EA354BBC84135071F7CE7C73694E(void) {
    ALOGD("_vp9dec_22D5646489B829DA9BE6A45D58AA0CC9DB78EA354BBC84135071F7CE7C73694E() called");
    return 0;
}

/* Exported Object: default_scan_4x4_neighbors */
extern "C" __attribute__((visibility("default"))) void* default_scan_4x4_neighbors = NULL;

/* Demangled: VP9GetMaxThreads */
extern "C" __attribute__((visibility("default"))) int VP9GetMaxThreads(void) {
    ALOGD("VP9GetMaxThreads() called");
    return 0;
}

/* Exported Object: vp9_sad16x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_sad16x8 = NULL;

/* Exported Object: vp9_tm_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_tm_predictor_4x4 = NULL;

/* Exported Object: default_scan_8x8_neighbors */
extern "C" __attribute__((visibility("default"))) void* default_scan_8x8_neighbors = NULL;

/* Exported Object: vp9_coefmodel_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_coefmodel_tree = NULL;

/* Demangled: _vp9dec_40BD36427BCA9A8B883147ECE29F48E8666F91FD8D887E4EC567233BCD193DBD */
extern "C" __attribute__((visibility("default"))) int _vp9dec_40BD36427BCA9A8B883147ECE29F48E8666F91FD8D887E4EC567233BCD193DBD(void) {
    ALOGD("_vp9dec_40BD36427BCA9A8B883147ECE29F48E8666F91FD8D887E4EC567233BCD193DBD() called");
    return 0;
}

/* Exported Object: vp9_sad4x8x4d */
extern "C" __attribute__((visibility("default"))) void* vp9_sad4x8x4d = NULL;

/* Exported Object: vp9_partition_tree */
extern "C" __attribute__((visibility("default"))) void* vp9_partition_tree = NULL;

/* Demangled: _vp9dec_6A6115EAA27B5EC37F3706775F3DAB8D79D35569B9264F47AE26FF6908CC188C */
extern "C" __attribute__((visibility("default"))) int _vp9dec_6A6115EAA27B5EC37F3706775F3DAB8D79D35569B9264F47AE26FF6908CC188C(void) {
    ALOGD("_vp9dec_6A6115EAA27B5EC37F3706775F3DAB8D79D35569B9264F47AE26FF6908CC188C() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: _vp9dec_71DF965D728C1920043CC3FD9795317253002D80AB43B86F6989BB23C98A5EB8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_71DF965D728C1920043CC3FD9795317253002D80AB43B86F6989BB23C98A5EB8(void) {
    ALOGD("_vp9dec_71DF965D728C1920043CC3FD9795317253002D80AB43B86F6989BB23C98A5EB8() called");
    return 0;
}

/* Demangled: _vp9dec_81D27F6B5E976DF7EDEFFDCDD576FFF3DE9897B8346999F70030A2A2F108A643 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_81D27F6B5E976DF7EDEFFDCDD576FFF3DE9897B8346999F70030A2A2F108A643(void) {
    ALOGD("_vp9dec_81D27F6B5E976DF7EDEFFDCDD576FFF3DE9897B8346999F70030A2A2F108A643() called");
    return 0;
}

/* Demangled: _vp9dec_AD36E5B3B29C20B8D2F70EF27405F3CD747F9E34D3A6558708EEFFC6B10506F9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD36E5B3B29C20B8D2F70EF27405F3CD747F9E34D3A6558708EEFFC6B10506F9(void) {
    ALOGD("_vp9dec_AD36E5B3B29C20B8D2F70EF27405F3CD747F9E34D3A6558708EEFFC6B10506F9() called");
    return 0;
}

/* Exported Object: vp9_iht8x8_64_add */
extern "C" __attribute__((visibility("default"))) void* vp9_iht8x8_64_add = NULL;

/* Exported Object: vp9_sub_pixel_avg_variance16x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_avg_variance16x16 = NULL;

/* Demangled: _vp9dec_2458A049FB5D1DDDFEC19B6E54948225 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_2458A049FB5D1DDDFEC19B6E54948225(void) {
    ALOGD("_vp9dec_2458A049FB5D1DDDFEC19B6E54948225() called");
    return 0;
}

/* Exported Object: vp9_mbloop_filter_vertical_edge */
extern "C" __attribute__((visibility("default"))) void* vp9_mbloop_filter_vertical_edge = NULL;

/* Demangled: _vp9dec_791246EB58AC184FF2BC0DE68370442D9B94D92958F132249B7DC387C60418E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_791246EB58AC184FF2BC0DE68370442D9B94D92958F132249B7DC387C60418E0(void) {
    ALOGD("_vp9dec_791246EB58AC184FF2BC0DE68370442D9B94D92958F132249B7DC387C60418E0() called");
    return 0;
}

/* Demangled: _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B2274E3EDC8B8BD69430F5E7554BC995EA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_D6E4BA376F5C3FD8072BC90B35D979B2274E3EDC8B8BD69430F5E7554BC995EA(void) {
    ALOGD("_vp9dec_D6E4BA376F5C3FD8072BC90B35D979B2274E3EDC8B8BD69430F5E7554BC995EA() called");
    return 0;
}

/* Demangled: _vp9dec_DB9BFB1390EF94118ADBB8E7F5EE99BC40B1FD95DD9E9153BBB4C48219CFCA74 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_DB9BFB1390EF94118ADBB8E7F5EE99BC40B1FD95DD9E9153BBB4C48219CFCA74(void) {
    ALOGD("_vp9dec_DB9BFB1390EF94118ADBB8E7F5EE99BC40B1FD95DD9E9153BBB4C48219CFCA74() called");
    return 0;
}

/* Exported Object: vp9_d153_predictor_8x8 */
extern "C" __attribute__((visibility("default"))) void* vp9_d153_predictor_8x8 = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: _vp9dec_B95C05323E02675602A0BD01DB225153C8E031C94F89C8C527F4F227B8B37887 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B95C05323E02675602A0BD01DB225153C8E031C94F89C8C527F4F227B8B37887(void) {
    ALOGD("_vp9dec_B95C05323E02675602A0BD01DB225153C8E031C94F89C8C527F4F227B8B37887() called");
    return 0;
}

/* Demangled: _vp9dec_1032806073DAC5ED631EEBE47FDBA022CA092C1E789DC9C6CE6F2E19BE519EFF */
extern "C" __attribute__((visibility("default"))) int _vp9dec_1032806073DAC5ED631EEBE47FDBA022CA092C1E789DC9C6CE6F2E19BE519EFF(void) {
    ALOGD("_vp9dec_1032806073DAC5ED631EEBE47FDBA022CA092C1E789DC9C6CE6F2E19BE519EFF() called");
    return 0;
}

/* Exported Object: vp9_convolve8_avg */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve8_avg = NULL;

/* Exported Object: vp9_d207_predictor_4x4 */
extern "C" __attribute__((visibility("default"))) void* vp9_d207_predictor_4x4 = NULL;

/* Demangled: _vp9dec_7B21A8E5159B62066AEAF75D52787DDABFB9E5D20DDFF962F84666FD4EDD83AA */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7B21A8E5159B62066AEAF75D52787DDABFB9E5D20DDFF962F84666FD4EDD83AA(void) {
    ALOGD("_vp9dec_7B21A8E5159B62066AEAF75D52787DDABFB9E5D20DDFF962F84666FD4EDD83AA() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: _vp9dec_28C982BC9B3F9D154B670E003DFA8F029D28DD2A588B7052E274E2067A22AC33 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_28C982BC9B3F9D154B670E003DFA8F029D28DD2A588B7052E274E2067A22AC33(void) {
    ALOGD("_vp9dec_28C982BC9B3F9D154B670E003DFA8F029D28DD2A588B7052E274E2067A22AC33() called");
    return 0;
}

/* Demangled: _vp9dec_ABDED049F17D8534847BA9F826040A4DB66A47550D4D925183DDD8B947BE7CA9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_ABDED049F17D8534847BA9F826040A4DB66A47550D4D925183DDD8B947BE7CA9(void) {
    ALOGD("_vp9dec_ABDED049F17D8534847BA9F826040A4DB66A47550D4D925183DDD8B947BE7CA9() called");
    return 0;
}

/* Exported Object: rVP9DECCallBack */
extern "C" __attribute__((visibility("default"))) void* rVP9DECCallBack = NULL;

/* Demangled: _vp9dec_7590164188BEF5323DE454F914E0C1A91A91877F2023F049CA09D9C20133B4F5 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_7590164188BEF5323DE454F914E0C1A91A91877F2023F049CA09D9C20133B4F5(void) {
    ALOGD("_vp9dec_7590164188BEF5323DE454F914E0C1A91A91877F2023F049CA09D9C20133B4F5() called");
    return 0;
}

/* Demangled: __aeabi_idivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_idivmod(void) {
    ALOGD("__aeabi_idivmod() called");
    return 0;
}

/* Demangled: _vp9dec_423C890AAA508841670FCF1568C21CD9 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_423C890AAA508841670FCF1568C21CD9(void) {
    ALOGD("_vp9dec_423C890AAA508841670FCF1568C21CD9() called");
    return 0;
}

/* Exported Object: vp9_sub_pixel_variance64x64 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance64x64 = NULL;

/* Demangled: _vp9dec_C5A466B8BAE8966A6C1BF5125EAF2B6940E2C032B885C76528A48D23A2FD58F8 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_C5A466B8BAE8966A6C1BF5125EAF2B6940E2C032B885C76528A48D23A2FD58F8(void) {
    ALOGD("_vp9dec_C5A466B8BAE8966A6C1BF5125EAF2B6940E2C032B885C76528A48D23A2FD58F8() called");
    return 0;
}

/* Exported Object: tx_mode_to_biggest_tx_size */
extern "C" __attribute__((visibility("default"))) void* tx_mode_to_biggest_tx_size = NULL;

/* Demangled: _vp9dec_AD0816EFFDF8D1B0DD5877E991A994119B94D92958F132249B7DC387C60418E0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_AD0816EFFDF8D1B0DD5877E991A994119B94D92958F132249B7DC387C60418E0(void) {
    ALOGD("_vp9dec_AD0816EFFDF8D1B0DD5877E991A994119B94D92958F132249B7DC387C60418E0() called");
    return 0;
}

/* Exported Object: vp9_subtract_block */
extern "C" __attribute__((visibility("default"))) void* vp9_subtract_block = NULL;

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: _vp9dec_36FFC033B9A1C8F4B2F295971D9D594E6BCB6B81CC7AABF1C14672B3615C1ECE */
extern "C" __attribute__((visibility("default"))) int _vp9dec_36FFC033B9A1C8F4B2F295971D9D594E6BCB6B81CC7AABF1C14672B3615C1ECE(void) {
    ALOGD("_vp9dec_36FFC033B9A1C8F4B2F295971D9D594E6BCB6B81CC7AABF1C14672B3615C1ECE() called");
    return 0;
}

/* Exported Object: vp9_variance32x32 */
extern "C" __attribute__((visibility("default"))) void* vp9_variance32x32 = NULL;

/* Exported Object: vp9_convolve8_avg_vert */
extern "C" __attribute__((visibility("default"))) void* vp9_convolve8_avg_vert = NULL;

/* Exported Object: vp9_sub_pixel_variance32x16 */
extern "C" __attribute__((visibility("default"))) void* vp9_sub_pixel_variance32x16 = NULL;

/* Demangled: VP9MutexLock */
extern "C" __attribute__((visibility("default"))) int VP9MutexLock(void) {
    ALOGD("VP9MutexLock() called");
    return 0;
}

/* Exported Object: vp9_mb_lpf_vertical_edge_w_16 */
extern "C" __attribute__((visibility("default"))) void* vp9_mb_lpf_vertical_edge_w_16 = NULL;

/* Demangled: _vp9dec_B946D2447D3FD43888C9DE1A538EEB3B75C59615010591C3EE39E68B374802F0 */
extern "C" __attribute__((visibility("default"))) int _vp9dec_B946D2447D3FD43888C9DE1A538EEB3B75C59615010591C3EE39E68B374802F0(void) {
    ALOGD("_vp9dec_B946D2447D3FD43888C9DE1A538EEB3B75C59615010591C3EE39E68B374802F0() called");
    return 0;
}

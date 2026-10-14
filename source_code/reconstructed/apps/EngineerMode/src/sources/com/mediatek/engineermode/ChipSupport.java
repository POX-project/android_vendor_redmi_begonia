package com.mediatek.engineermode;

/* JADX INFO: loaded from: classes2.dex */
public class ChipSupport {
    public static final int MTK_6580_SUPPORT = 2;
    public static final int MTK_6735_SUPPORT = 1;
    public static final int MTK_COMMON_CHIP_SUPPORT = 20;
    public static final int MTK_INIERNAL_LOAD = 0;
    public static final int MTK_TC1_COMMON_SERVICE = 1;

    static {
        System.loadLibrary("em_support_jni");
    }

    private ChipSupport() {
    }

    public static native String getAudioTuningVersion();

    public static native int getChip();

    public static boolean isCurrentChipEquals(int i) {
        return getChip() == i;
    }

    public static native boolean isFeatureSupported(int i);

    public static native int lcmOff();

    public static native int lcmOn();
}

package com.mediatek.ims.plugin;

/* JADX INFO: loaded from: classes.dex */
public interface ImsCallOemPlugin {
    boolean alwaysSetPreviewSurface();

    String getVTUsageAction();

    String getVTUsagePermission();

    boolean isUpdateViwifiFeatureValueAsViLTE();

    boolean needHangupOtherCallWhenEccDialing();

    boolean needNotifyBadBitRate();

    boolean needReportCallTerminatedForFdn();

    boolean useNormalDialForEmergencyCall();
}

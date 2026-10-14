package com.mediatek.internal.telephony.datasub;

import android.content.Intent;

/* JADX INFO: loaded from: classes.dex */
public interface ISmartDataSwitchAssistantOpExt {
    boolean checkIsSwitchAvailable(int i);

    void init(SmartDataSwitchAssistant smartDataSwitchAssistant);

    boolean isNeedSwitchCallType(int i);

    boolean isSmartDataSwtichAllowed();

    void onCallEnded();

    void onCallStarted();

    void onHandoverToCellular();

    void onHandoverToWifi();

    boolean onServiceStateChanged(int i);

    void onSrvccStateChanged();

    void onSubChanged();

    void onTemporaryDataSettingsChanged();

    boolean preCheckByCallStateExt(Intent intent, boolean z);
}

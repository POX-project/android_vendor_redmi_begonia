package com.mediatek.lbs.em2.utils;

/* JADX INFO: loaded from: classes.dex */
public interface AgpsDebugListener {
    void onDialogMessageReceived(String str, String str2);

    void onNiStatisticMessageReceived(int i, int i2, String str);

    void onToastMessageReceived(String str);

    void onViewMessageReceived(int i, String str);

    void onVzwDebugMessageReceived(String str);
}

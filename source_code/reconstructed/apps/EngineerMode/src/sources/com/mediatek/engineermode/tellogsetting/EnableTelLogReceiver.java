package com.mediatek.engineermode.tellogsetting;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes3.dex */
public class EnableTelLogReceiver extends BroadcastReceiver {
    private static final String ACTION_ENABLE_TELLOG_DONE = "com.mediatek.engineermode.tellog.enable.done";
    private static final String ACTION_ENABLE_TELLOG_START = "com.mediatek.engineermode.tellog.enable.start";
    private static final String ENABLE_TELLOG_RESULT = "result";
    private static final String TAG = "telLogSetting";
    private static final String TAR_CLASS_NAME = "com.mediatek.issuesubmitter.MainActivity";
    private static final String TAR_PKG = "com.mediatek.issuesubmitter";

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (ACTION_ENABLE_TELLOG_START.equals(intent.getAction())) {
            Elog.i(TAG, "receive ACTION_ENABLE_TELLOG_START");
            boolean zSwitchTelLog = new TelLogController().switchTelLog(context, true);
            Intent intent2 = new Intent(ACTION_ENABLE_TELLOG_DONE);
            intent2.setClassName(TAR_PKG, TAR_CLASS_NAME);
            intent2.putExtra(ENABLE_TELLOG_RESULT, zSwitchTelLog);
            context.sendBroadcast(intent2);
        }
    }
}

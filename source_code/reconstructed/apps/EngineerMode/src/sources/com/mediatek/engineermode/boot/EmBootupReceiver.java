package com.mediatek.engineermode.boot;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.bluetooth.BtTestTool;
import com.mediatek.engineermode.bluetooth.BtWatchService;
import com.mediatek.engineermode.bypass.BypassService;
import com.mediatek.engineermode.bypass.BypassSettings;
import com.mediatek.engineermode.wifi.MtkCTIATestDialog;
import com.mediatek.engineermode.wifi.WifiLogSwitchActivity;
import com.mediatek.engineermode.wifi.WifiWatchService;

/* JADX INFO: loaded from: classes2.dex */
public class EmBootupReceiver extends BroadcastReceiver {
    private static final String MODEM_FILTER_SHAREPRE = "telephony_modem_filter_settings";
    private static final String TAG = "BootupReceiver";

    private void onBootupCompleted(Context context, Intent intent) {
        Elog.d(TAG, "Start onBootupCompleted");
        writeSharedPreference(context, false);
        writeShortVolteInterruptPreference(context);
        writeDsdaFloatingWindowPreference(context);
        tryInvokeBypassService(context);
        if (MtkCTIATestDialog.isWifiCtiaEnabled(context)) {
            WifiWatchService.enableService(context, true);
        }
        WifiLogSwitchActivity.onWifiStateChanged(context);
        if (BtTestTool.getAlwaysVisible(context)) {
            BtTestTool.setAlwaysVisible(true);
            BtWatchService.enableService(context, true);
        }
        Elog.d(TAG, "End onBootupCompleted");
    }

    private void tryInvokeBypassService(Context context) {
        if (context.getSharedPreferences(BypassSettings.PREF_SERV_ENABLE, 0).getBoolean(BypassSettings.PREF_SERV_ENABLE, false)) {
            BypassService.enableService(context, true);
            Elog.w(TAG, "ready to start BypassService");
        }
    }

    private void writeDsdaFloatingWindowPreference(Context context) {
        Elog.d(TAG, "writeDsdaFloatingWindowPreference false");
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("DsdaMonitor", 0).edit();
        editorEdit.putBoolean("Dsda_floating", false);
        editorEdit.commit();
    }

    private void writeSharedPreference(Context context, boolean z) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences(MODEM_FILTER_SHAREPRE, 0).edit();
        editorEdit.putBoolean(context.getString(R.string.enable_md_filter_sim1), z);
        editorEdit.putBoolean(context.getString(R.string.enable_md_filter_sim2), z);
        editorEdit.commit();
    }

    private void writeShortVolteInterruptPreference(Context context) {
        Elog.d(TAG, "writeShortVolteInterruptPreference false");
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("GwsdConfigure", 0).edit();
        editorEdit.putBoolean("gwsd_dual_capability", false);
        editorEdit.commit();
        SharedPreferences.Editor editorEdit2 = context.getSharedPreferences("LteGwsdConfigure", 0).edit();
        editorEdit2.putBoolean("gwsd_dual_capability", false);
        editorEdit2.commit();
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if ("android.intent.action.BOOT_COMPLETED".equals(intent.getAction())) {
            onBootupCompleted(context, intent);
        }
    }
}

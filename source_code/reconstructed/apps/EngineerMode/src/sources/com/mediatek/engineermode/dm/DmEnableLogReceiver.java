package com.mediatek.engineermode.dm;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes2.dex */
public class DmEnableLogReceiver extends BroadcastReceiver {
    private static final String ACTION_ENABLE_DM_LOG = "com.mediatek.engineermode.dm.ACTION_ENABLE_DM_LOG";
    private static final String EXTRA_ENABLED = "enabled";
    private static final String EXTRA_TARGET = "target";
    private static final String TAG = "DmEnableLogReceiver";
    private static final String TARGET_ALL = "all";
    private static final String TARGET_DM = "dm";
    private static final String TARGET_PKM = "pkm";

    /* JADX WARN: Code duplicated, block: B:27:0x0078  */
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (ACTION_ENABLE_DM_LOG.equals(intent.getAction())) {
            String stringExtra = intent.getStringExtra(EXTRA_TARGET);
            if (stringExtra == null) {
                stringExtra = "none";
            }
            byte b = 0;
            boolean z = intent.getIntExtra(EXTRA_ENABLED, 0) > 0;
            Elog.i(TAG, "receive ACTION_ENABLE_DM_LOG, target = " + stringExtra + ", enabled = " + z);
            DmSettingController dmSettingController = new DmSettingController(context);
            int iHashCode = stringExtra.hashCode();
            if (iHashCode != 3209) {
                if (iHashCode != 96673) {
                    if (iHashCode == 111058 && stringExtra.equals(TARGET_PKM)) {
                        b = 2;
                    } else {
                        b = -1;
                    }
                } else if (!stringExtra.equals(TARGET_ALL)) {
                    b = -1;
                }
            } else if (stringExtra.equals(TARGET_DM)) {
                b = 1;
            } else {
                b = -1;
            }
            if (b == 0) {
                dmSettingController.enableDmLog(z);
                dmSettingController.enablePkmLog(z);
            } else if (b == 1) {
                dmSettingController.enableDmLog(z);
            } else {
                if (b != 2) {
                    return;
                }
                dmSettingController.enablePkmLog(z);
            }
        }
    }
}

package com.mediatek.engineermode.bypass;

import android.R;
import android.app.Notification;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.usb.UsbManager;
import android.os.IBinder;
import android.support.v4.app.NotificationCompat;
import android.support.v4.content.LocalBroadcastManager;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.mdml.JsonCmd;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class BypassService extends Service {
    private static final boolean DEBUG = true;
    private static final int ID_FORE_GROUND = 20170713;
    private static final String TAG = "BypassService";
    private Bypass mBypass;

    private final class Bypass {
        private static final String ACTION_RADIO_AVAILABLE = "android.intent.action.RADIO_AVAILABLE";
        private static final String ACTION_USB_BYPASS_GETBYPASS = "com.via.bypass.action.getbypass";
        private static final String ACTION_USB_BYPASS_GETBYPASS_RESULT = "com.via.bypass.action.getbypass_result";
        private static final String ACTION_USB_BYPASS_SETBYPASS = "com.via.bypass.action.setbypass";
        private static final String ACTION_USB_BYPASS_SETBYPASS_RESULT = "com.via.bypass.action.setbypass_result";
        private static final String ACTION_USB_BYPASS_SETFUNCTION = "com.via.bypass.action.setfunction";
        private static final String ACTION_USB_BYPASS_SETTETHERFUNCTION = "com.via.bypass.action.settetherfunction";
        private static final String ACTION_VIA_ETS_DEV_CHANGED = "via.cdma.action.ets.dev.changed";
        private static final String ACTION_VIA_SET_ETS_DEV = "via.cdma.action.set.ets.dev";
        private static final String EXTRAL_VIA_ETS_DEV = "via.cdma.extral.ets.dev";
        private static final String VALUE_BYPASS_CODE = "com.via.bypass.bypass_code";
        private static final String VALUE_ENABLE_BYPASS = "com.via.bypass.enable_bypass";
        private static final String VALUE_ISSET_BYPASS = "com.via.bypass.isset_bypass";
        private int mBypassAll;
        private int mBypassToSet;
        private UsbManager mUsbManager;
        private final int[] mBypassCodes = {1, 2, 4, 8, 16};
        private final String[] mBypassName = {"gps", "pcv", "atc", "ets", JsonCmd.STR_DATA_KEY};
        private boolean mEtsDevInUse = false;
        private final BroadcastReceiver mBypassReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.bypass.BypassService.Bypass.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                Elog.i(BypassService.TAG, "onReceive=" + intent.getAction());
                if (intent.getAction() != null) {
                    if (intent.getAction().equals(Bypass.ACTION_USB_BYPASS_SETFUNCTION)) {
                        if (!Boolean.valueOf(intent.getBooleanExtra(Bypass.VALUE_ENABLE_BYPASS, false)).booleanValue()) {
                            Bypass.this.closeBypassFunction();
                            return;
                        }
                        Bypass.this.mUsbManager = (UsbManager) context.getSystemService("usb");
                        if (Bypass.this.mUsbManager == null) {
                            Elog.w(BypassService.TAG, "Cannot get mUsbManager.");
                            return;
                        } else {
                            Bypass.this.mUsbManager.setCurrentFunction("via_bypass", false);
                            return;
                        }
                    }
                    if (intent.getAction().equals(Bypass.ACTION_USB_BYPASS_SETTETHERFUNCTION)) {
                        Elog.w(BypassService.TAG, "intent - ACTION_USB_BYPASS_SETTETHERFUNCTION");
                        return;
                    }
                    if (intent.getAction().equals(Bypass.ACTION_USB_BYPASS_SETBYPASS)) {
                        int intExtra = intent.getIntExtra(Bypass.VALUE_BYPASS_CODE, -1);
                        if (intExtra < 0 || intExtra > Bypass.this.mBypassAll) {
                            Bypass.this.notifySetBypassResult(false, Bypass.this.getCurrentBypassMode());
                            return;
                        } else {
                            Bypass.this.setBypassMode(intExtra);
                            return;
                        }
                    }
                    if (intent.getAction().equals(Bypass.ACTION_USB_BYPASS_GETBYPASS)) {
                        Intent intent2 = new Intent(Bypass.ACTION_USB_BYPASS_GETBYPASS_RESULT);
                        intent2.putExtra(Bypass.VALUE_BYPASS_CODE, Bypass.this.getCurrentBypassMode());
                        LocalBroadcastManager.getInstance(BypassService.this).sendBroadcast(intent2);
                    } else {
                        if (intent.getAction().equals(Bypass.ACTION_VIA_ETS_DEV_CHANGED)) {
                            Bypass.this.setBypass(intent.getBooleanExtra("set.ets.dev.result", false) ? Bypass.this.mBypassToSet : Bypass.this.getCurrentBypassMode());
                            return;
                        }
                        if (!intent.getAction().equals(Bypass.ACTION_RADIO_AVAILABLE)) {
                            if (!intent.getAction().equals(BypassSettings.USBMANAGER_ACTION_USB_STATE) || intent.getBooleanExtra("connected", false)) {
                                return;
                            }
                            Bypass.this.updateBypassMode(0);
                            return;
                        }
                        if (Bypass.this.mEtsDevInUse) {
                            Intent intent3 = new Intent(Bypass.ACTION_VIA_SET_ETS_DEV);
                            intent3.putExtra(Bypass.EXTRAL_VIA_ETS_DEV, 1);
                            LocalBroadcastManager.getInstance(BypassService.this).sendBroadcast(intent3);
                        }
                    }
                }
            }
        };
        private File[] mBypassFiles = new File[this.mBypassName.length];

        public Bypass() {
            this.mBypassAll = 0;
            this.mUsbManager = (UsbManager) BypassService.this.getSystemService(UsbManager.class);
            for (int i = 0; i < this.mBypassName.length; i++) {
                this.mBypassFiles[i] = new File("/sys/class/usb_rawbulk/" + this.mBypassName[i] + "/enable");
                this.mBypassAll = this.mBypassAll + this.mBypassCodes[i];
            }
            IntentFilter intentFilter = new IntentFilter(ACTION_USB_BYPASS_SETFUNCTION);
            intentFilter.addAction(ACTION_USB_BYPASS_SETTETHERFUNCTION);
            intentFilter.addAction(ACTION_USB_BYPASS_SETBYPASS);
            intentFilter.addAction(ACTION_USB_BYPASS_GETBYPASS);
            intentFilter.addAction(ACTION_VIA_ETS_DEV_CHANGED);
            intentFilter.addAction(ACTION_RADIO_AVAILABLE);
            intentFilter.addAction(BypassSettings.USBMANAGER_ACTION_USB_STATE);
            LocalBroadcastManager.getInstance(BypassService.this).registerReceiver(this.mBypassReceiver, intentFilter);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void closeBypassFunction() {
            this.mUsbManager.setCurrentFunction(null, false);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public int getCurrentBypassMode() {
            int i = 0;
            for (int i2 = 0; i2 < this.mBypassCodes.length; i2++) {
                String textFile = readTextFile(i2);
                Elog.d(BypassService.TAG, "'" + this.mBypassFiles[i2].getAbsolutePath() + "' value is " + textFile);
                if (textFile != null && textFile.trim().equals("1")) {
                    i |= this.mBypassCodes[i2];
                }
            }
            Elog.d(BypassService.TAG, "getCurrentBypassMode()=" + i);
            return i;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void notifySetBypassResult(Boolean bool, int i) {
            Intent intent = new Intent(ACTION_USB_BYPASS_SETBYPASS_RESULT);
            intent.putExtra(VALUE_ISSET_BYPASS, bool);
            intent.putExtra(VALUE_BYPASS_CODE, i);
            LocalBroadcastManager.getInstance(BypassService.this).sendBroadcast(intent);
        }

        private String readTextFile(int i) {
            try {
                return ShellExe.readTextFile(i) == 0 ? ShellExe.getOutput() : ShellExe.getOutput();
            } catch (IOException e) {
                return "ERROR.IO_JE";
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void setBypass(int i) {
            Elog.d(BypassService.TAG, "setBypass bypass = " + i);
            int currentBypassMode = getCurrentBypassMode();
            Boolean boolValueOf = Boolean.valueOf(BypassService.DEBUG);
            if (i == currentBypassMode) {
                Elog.d(BypassService.TAG, "setBypass bypass == oldbypass!!");
                notifySetBypassResult(boolValueOf, currentBypassMode);
                return;
            }
            int i2 = 0;
            while (true) {
                int[] iArr = this.mBypassCodes;
                if (i2 >= iArr.length) {
                    notifySetBypassResult(boolValueOf, currentBypassMode);
                    Elog.d(BypassService.TAG, "setBypass success bypassResult = " + currentBypassMode);
                    return;
                }
                if ((iArr[i2] & i) != 0) {
                    Elog.d(BypassService.TAG, "Write '" + this.mBypassFiles[i2].getAbsolutePath() + "1");
                    try {
                        EmUtils.getEmHidlService().setBypassEn(Integer.toString(i2));
                    } catch (Exception e) {
                        Elog.e(BypassService.TAG, "set property failed ...");
                        e.printStackTrace();
                    }
                    currentBypassMode |= this.mBypassCodes[i2];
                } else {
                    Elog.d(BypassService.TAG, "Write '" + this.mBypassFiles[i2].getAbsolutePath() + "0");
                    try {
                        EmUtils.getEmHidlService().setBypassDis(Integer.toString(i2));
                    } catch (Exception e2) {
                        Elog.e(BypassService.TAG, "set property failed ...");
                        e2.printStackTrace();
                    }
                    int[] iArr2 = this.mBypassCodes;
                    if ((iArr2[i2] & currentBypassMode) != 0) {
                        currentBypassMode ^= iArr2[i2];
                    }
                }
                Elog.d(BypassService.TAG, "Write '" + this.mBypassFiles[i2].getAbsolutePath() + "' successsfully!");
                i2++;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void setBypassMode(int i) {
            Elog.d(BypassService.TAG, "setBypassMode()=" + i);
            updateBypassMode(i);
        }

        private boolean setEtsDev(int i) {
            int currentBypassMode = getCurrentBypassMode();
            Elog.d(BypassService.TAG, "setEtsDev bypass = " + i + " oldBypass = " + currentBypassMode);
            int[] iArr = this.mBypassCodes;
            if ((iArr[3] & i) != 0 && (iArr[3] & currentBypassMode) == 0) {
                Elog.d(BypassService.TAG, "setEtsDev mEtsDevInUse = true");
                Intent intent = new Intent(ACTION_VIA_SET_ETS_DEV);
                intent.putExtra(EXTRAL_VIA_ETS_DEV, 1);
                LocalBroadcastManager.getInstance(BypassService.this).sendBroadcast(intent);
                this.mEtsDevInUse = BypassService.DEBUG;
                return BypassService.DEBUG;
            }
            int[] iArr2 = this.mBypassCodes;
            if ((iArr2[3] & i) != 0 || (iArr2[3] & currentBypassMode) == 0) {
                return false;
            }
            Elog.d(BypassService.TAG, "setEtsDev mEtsDevInUse = false");
            Intent intent2 = new Intent(ACTION_VIA_SET_ETS_DEV);
            intent2.putExtra(EXTRAL_VIA_ETS_DEV, 0);
            LocalBroadcastManager.getInstance(BypassService.this).sendBroadcast(intent2);
            this.mEtsDevInUse = false;
            return BypassService.DEBUG;
        }

        void updateBypassMode(int i) {
            Elog.d(BypassService.TAG, "updateBypassMode");
            if (!setEtsDev(i)) {
                setBypass(i);
                return;
            }
            Elog.d(BypassService.TAG, "updateBypassMode mBypassToSet = " + this.mBypassToSet);
            this.mBypassToSet = i;
        }
    }

    private Notification buildNotification() {
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, EmApplication.getSilentNotificationChannelID());
        builder.setSmallIcon(R.drawable.ic_dialog_alert);
        builder.setContentTitle(TAG);
        builder.setContentText("Enable BypassService");
        Notification notificationBuild = builder.build();
        notificationBuild.flags |= 32;
        Intent intent = new Intent(this, (Class<?>) BypassService.class);
        intent.setFlags(335544320);
        notificationBuild.setLatestEventInfo(this, TAG, "Enable BypassService", PendingIntent.getActivity(this, 0, intent, 0));
        return notificationBuild;
    }

    public static void enableService(Context context, boolean z) {
        Intent intent = new Intent(context, (Class<?>) BypassService.class);
        Elog.i(TAG, "enableService:" + z);
        if (z) {
            context.startForegroundService(intent);
        } else {
            context.stopService(intent);
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        Elog.w(TAG, "onCreate");
        this.mBypass = new Bypass();
        try {
            EmUtils.getEmHidlService().setBypassService("1");
        } catch (Exception e) {
            Elog.e(TAG, "set property failed ...");
            e.printStackTrace();
        }
    }

    @Override // android.app.Service
    public void onDestroy() {
        stopService(new Intent(this, (Class<?>) BypassService.class));
        super.onDestroy();
        Elog.w(TAG, "onDestroy");
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        startForeground(ID_FORE_GROUND, buildNotification());
        Elog.w(TAG, "onStartCommand");
        return 1;
    }
}

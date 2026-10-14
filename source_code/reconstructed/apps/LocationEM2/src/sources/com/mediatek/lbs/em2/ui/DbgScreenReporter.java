package com.mediatek.lbs.em2.ui;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.support.v4.content.LocalBroadcastManager;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.util.Log;
import java.util.ArrayList;
import java.util.Date;

/* JADX INFO: loaded from: classes.dex */
public class DbgScreenReporter extends Service {
    private int mAllSvNum;
    private String mCallDialTime;
    private String mCallEndTime;
    private String mFixInfo;
    private LocalBroadcastManager mLocalBroadcastManager;
    private String mReportFileName;
    private int mCallState = 1;
    private ArrayList<Object> mPilotList = new ArrayList<>();
    private ArrayList<SvInfo> mSvList = new ArrayList<>();
    private boolean mRegistered = false;
    PhoneStateListener callStateListener = new PhoneStateListener() { // from class: com.mediatek.lbs.em2.ui.DbgScreenReporter.1
        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            if (i == 1) {
                DbgScreenReporter.log("call_state_changed callback state Ringing");
                return;
            }
            if (i == 2) {
                DbgScreenReporter.log("call_state_changed callback state Offhook");
                if (DbgScreenReporter.this.mCallState != 2) {
                    DbgScreenReporter.this.mCallState = 2;
                    DbgScreenReporter dbgScreenReporter = DbgScreenReporter.this;
                    dbgScreenReporter.sendMessage(0, dbgScreenReporter.mCallState);
                    return;
                }
                return;
            }
            if (i == 0) {
                DbgScreenReporter.log("call_state_changed callback state Idle");
                if (DbgScreenReporter.this.mCallState != 1) {
                    DbgScreenReporter.this.mCallState = 1;
                    DbgScreenReporter dbgScreenReporter2 = DbgScreenReporter.this;
                    dbgScreenReporter2.sendMessage(0, dbgScreenReporter2.mCallState);
                }
            }
        }
    };
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.lbs.em2.ui.DbgScreenReporter.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("com.mediatek.lbs.em2.action.debug_message")) {
                String string = intent.getExtras().getString("vzw_dbg");
                DbgScreenReporter.log("vzw_dbg: " + string);
                DbgScreenReporter.this.sendMessage(2, 0, 0, string);
            }
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.DbgScreenReporter.3
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                DbgScreenReporter.this.HandleCallStateUpdated(message.arg1);
                return;
            }
            if (i == 1) {
                DbgScreenReporter.this.createReport();
            } else if (i != 2) {
                DbgScreenReporter.log("WARNING: unknown handle event recv!!");
            } else {
                DbgScreenReporter.this.parseMsg((String) message.obj);
            }
        }
    };

    public class SvInfo {
        int mSv_cno;
        int mSv_prn_num;

        public SvInfo(DbgScreenReporter dbgScreenReporter) {
        }
    }

    private void clearAllValues() {
        this.mPilotList.clear();
        this.mSvList.clear();
        this.mFixInfo = null;
        this.mCallDialTime = null;
        this.mCallEndTime = null;
    }

    private String convertLatitude(String str) {
        return String.format("%.06f", Float.valueOf((LbsUtility.parseInt(str) * 180.0f) / 3.3554432E7f));
    }

    private String convertLongitude(String str) {
        return String.format("%.06f", Float.valueOf((LbsUtility.parseInt(str) * 360.0f) / 6.7108864E7f));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void createReport() {
        this.mReportFileName = "E911TEST_" + LbsUtility.getTimeString2(new Date().getTime()) + ".csv";
        StringBuilder sb = new StringBuilder();
        sb.append("Create report file name: ");
        sb.append(this.mReportFileName);
        log(sb.toString());
        LbsUtility.write2File(getApplicationContext(), "DbgScreenReport", null, this.mReportFileName, "Call Dial Time, Call End Time, Fix Time, Fix Type, Latitude, Longitude, #SV, #MS Sat, SV info, Avg CNo, call_count\n", true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.lbs.em2.action.debug_message");
        this.mLocalBroadcastManager.registerReceiver(this.mBroadcastReceiver, intentFilter);
        ((TelephonyManager) getSystemService("phone")).listen(this.callStateListener, 32);
    }

    private String generateFixReport(String str, String str2, String str3, String str4) {
        StringBuilder sb;
        String str5 = (((((("" + str3 + ", ") + ", ") + str + ", ") + str2 + ", ") + this.mAllSvNum + ", ") + this.mSvList.size() + ", ") + "( ";
        int i = 0;
        for (SvInfo svInfo : this.mSvList) {
            if (svInfo.mSv_prn_num > 9) {
                sb = new StringBuilder();
                sb.append("");
            } else {
                sb = new StringBuilder();
                sb.append("0");
            }
            sb.append(svInfo.mSv_prn_num);
            str5 = str5 + "SV" + sb.toString() + ":" + svInfo.mSv_cno + " ";
            i += svInfo.mSv_cno;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str5 + "), ");
        sb2.append(this.mSvList.size() > 0 ? Integer.valueOf(i / this.mSvList.size()) : "");
        sb2.append(", ");
        return sb2.toString() + str4 + "\n";
    }

    private String getTimestamp(String str, String str2, String str3, String str4, String str5, String str6) {
        StringBuilder sb = new StringBuilder();
        sb.append(str2);
        sb.append("/");
        sb.append(str3);
        sb.append("/");
        sb.append(str);
        sb.append(" ");
        if (str4.length() <= 1) {
            str4 = "0" + str4;
        }
        sb.append(str4);
        sb.append(":");
        if (str5.length() <= 1) {
            str5 = "0" + str5;
        }
        sb.append(str5);
        sb.append(":");
        if (str6.length() <= 1) {
            str6 = "0" + str6;
        }
        sb.append(str6);
        return sb.toString();
    }

    protected static void log(Object obj) {
        Log.d("LocationEM_DbgScreenReporter", "" + obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2) {
        sendMessage(i, i2, 0, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2, int i3, Object obj) {
        this.mHandler.obtainMessage(i, i2, i3, obj).sendToTarget();
    }

    private void setServiceForeground() {
        log("setServiceForeground");
        NotificationManager notificationManager = (NotificationManager) getSystemService("notification");
        NotificationChannel notificationChannel = new NotificationChannel("mtk_app_channel_id", "MTK APP", 2);
        notificationChannel.enableLights(false);
        notificationChannel.setLightColor(-65536);
        notificationChannel.enableVibration(false);
        notificationManager.createNotificationChannel(notificationChannel);
        Notification notificationBuild = new Notification.Builder(this).setAutoCancel(true).setContentTitle("Debug Screen Reporter").setContentText("Service is Running! Tap to launch Activity.").setContentIntent(PendingIntent.getActivity(this, 0, LbsUtility.getEm2LaunchIntent(this), 0)).setSmallIcon(R.drawable.ic_launcher2).setWhen(System.currentTimeMillis()).setChannel("mtk_app_channel_id").build();
        log(String.format("notification = %s", notificationBuild));
        startForeground(17767, notificationBuild);
    }

    void HandleCallStateUpdated(int i) {
        if (i != 1) {
            if (i != 2) {
                return;
            }
            clearAllValues();
            this.mCallDialTime = LbsUtility.getTimeString3(new Date().getTime());
            LbsUtility.launchLocationEM(getApplicationContext());
            return;
        }
        this.mCallEndTime = LbsUtility.getTimeString3(new Date().getTime());
        if (this.mCallDialTime != null) {
            Context applicationContext = getApplicationContext();
            String str = this.mReportFileName;
            StringBuilder sb = new StringBuilder();
            sb.append(this.mCallDialTime);
            sb.append(", ");
            sb.append(this.mCallEndTime);
            sb.append(", ");
            String str2 = this.mFixInfo;
            if (str2 == null) {
                str2 = "\n";
            }
            sb.append(str2);
            LbsUtility.write2File(applicationContext, "DbgScreenReport", null, str, sb.toString(), true);
        }
        LbsUtility.launchLocationEM(getApplicationContext());
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        log("onCreate");
        super.onCreate();
        this.mLocalBroadcastManager = LocalBroadcastManager.getInstance(this);
        setServiceForeground();
        sendMessage(1, 0);
        this.mRegistered = true;
    }

    @Override // android.app.Service
    public void onDestroy() {
        log("onDestroy");
        super.onDestroy();
        if (this.mRegistered) {
            stopForeground(true);
            this.mLocalBroadcastManager.unregisterReceiver(this.mBroadcastReceiver);
            ((TelephonyManager) getSystemService("phone")).listen(this.callStateListener, 0);
        }
    }

    @Override // android.app.Service
    public void onStart(Intent intent, int i) {
        log("onStart");
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        log("onStartCommand");
        return super.onStartCommand(intent, i, i2);
    }

    void parseAa(String str) {
        String[] strArrSplit = LbsUtility.split(str);
        if (strArrSplit == null || strArrSplit.length < 3) {
            return;
        }
        this.mAllSvNum = LbsUtility.parseInt(strArrSplit[2]);
    }

    void parseMsg(String str) {
        if (str.contains("vzw_aa")) {
            parseAa(str);
            return;
        }
        if (str.contains("vzw_pos")) {
            parsePos(str);
        } else if (str.contains("vzw_prm")) {
            parsePrm(str);
        } else {
            str.contains("vzw_ppm");
        }
    }

    void parsePos(String str) {
        String[] strArrSplit = LbsUtility.split(str);
        if (strArrSplit == null || strArrSplit.length < 27) {
            log("parsePos Error, item is null or size less than 27");
            return;
        }
        String str2 = strArrSplit[2];
        String str3 = strArrSplit[3];
        String str4 = strArrSplit[20];
        String str5 = strArrSplit[21];
        String str6 = strArrSplit[22];
        String str7 = strArrSplit[23];
        String str8 = strArrSplit[24];
        String str9 = strArrSplit[25];
        String str10 = strArrSplit[26];
        this.mFixInfo = generateFixReport(convertLatitude(str2), convertLongitude(str3), getTimestamp(str4, str5, str6, str7, str8, str9), str10);
    }

    void parsePrm(String str) {
        String[] strArrSplit = LbsUtility.split(str);
        if (strArrSplit == null) {
            log("parsePrm Error, pares record return null");
            return;
        }
        int i = 2;
        if (strArrSplit.length >= 3) {
            LbsUtility.parseInt(strArrSplit[2]);
            i = 3;
        }
        while (i < strArrSplit.length) {
            if (strArrSplit.length - i < 6) {
                log("parsePrm Error, left item size is less than 6, msg: " + str);
                return;
            }
            int i2 = i + 1;
            String str2 = strArrSplit[i];
            int i3 = i2 + 1;
            String str3 = strArrSplit[i2];
            int i4 = i3 + 1;
            String str4 = strArrSplit[i3];
            int i5 = i4 + 1;
            String str5 = strArrSplit[i4];
            int i6 = i5 + 1;
            String str6 = strArrSplit[i5];
            int i7 = i6 + 1;
            String str7 = strArrSplit[i6];
            SvInfo svInfo = new SvInfo(this);
            LbsUtility.parseInt(str2);
            svInfo.mSv_prn_num = LbsUtility.parseInt(str3);
            svInfo.mSv_cno = LbsUtility.parseInt(str4);
            this.mSvList.add(svInfo);
            i = i7;
        }
    }
}

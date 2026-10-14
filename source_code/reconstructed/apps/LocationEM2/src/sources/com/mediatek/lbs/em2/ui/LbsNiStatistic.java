package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.ActivityNotFoundException;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.location.Location;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v4.content.LocalBroadcastManager;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;
import com.mediatek.lbs.em2.utils.AgpsInterface;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class LbsNiStatistic extends Activity {
    protected AgpsInterface mAgpsInterface;
    private Button mButtonCall;
    private Button mButtonCearReports;
    private int mDistance;
    private List<Integer> mDistanceList;
    private String mFixInfo;
    private String mFixResultsList;
    private String mLocFixTime;
    private int mLocFixType;
    private double mLocLat;
    private double mLocLng;
    private LocalBroadcastManager mLocalBroadcastManager;
    public String mNiStatisticRportPath;
    private int mProtocolType;
    private String mReportFileName;
    private String mSessionStartTime;
    private String mSessionStopTime;
    private TextView mTextViewDistanceOfFixesValue;
    private TextView mTextViewFixResultsValue;
    private TextView mTextViewMinMaxDistanceValue;
    private TextView mTextViewRefLocationValue;
    private TextView mTextViewReportLocationValue;
    private TextView mTextViewReportPath;
    private TextView mTextViewSvCountValue;
    private TextView mTextViewSvSnrValue;
    private TextView mTextViewYieldRateCountValue;
    private TextView mTextViewYieldRateValue;
    private ToggleButton mToggleButtonNiStatistic;
    private int mSessionState = 1;
    private boolean mBroadcastReceiverRegistered = false;
    private int mTimerCount = 0;
    private int mSessionCount = 0;
    private int mLocationFixedCount = 0;
    private boolean mSuccessGotLocations = false;
    private int mMinDistance = 0;
    private int mMaxDistance = 0;
    private int mDistance67 = 0;
    private int mDistance90 = 0;
    private int mDistance95 = 0;
    private int mDistance97 = 0;
    private int mMeasSvCount = 0;
    private String mMeasSvSnr = null;
    PhoneStateListener callStateListener = new PhoneStateListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.1
        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            if (i == 1) {
                LbsNiStatistic.log("call_state_changed callback state Ringing");
                return;
            }
            if (i == 2) {
                LbsNiStatistic.log("call_state_changed callback state Offhook");
                LbsNiStatistic.this.sendMessage(0, 2);
            } else if (i == 0) {
                LbsNiStatistic.log("call_state_changed callback state Idle");
                LbsNiStatistic.this.sendMessage(0, 1);
            }
        }
    };
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("com.mediatek.lbs.em2.action.ni_message")) {
                LbsNiStatistic.this.sendMessage(2, intent.getIntExtra("ni_msgType", 0), intent.getIntExtra("ni_protocolType", 0), intent.getStringExtra("ni_msg"));
            }
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.10
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                LbsNiStatistic.this.HandleCallStateUpdated(message.arg1);
                return;
            }
            if (i == 1) {
                LbsNiStatistic lbsNiStatistic = LbsNiStatistic.this;
                lbsNiStatistic.HandleTimerCallInfo(lbsNiStatistic.mTimerCount);
            } else {
                if (i == 2) {
                    LbsNiStatistic.this.parseMsg(message.arg1, message.arg2, (String) message.obj);
                    return;
                }
                if (i == 3) {
                    LbsNiStatistic.this.createReport();
                    return;
                }
                LbsNiStatistic.log("WARNING: unknown handle event recv!! msg: " + message.what);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void HandleTimerCallInfo(int i) {
        StringBuilder sb;
        String str;
        this.mTimerCount++;
        int i2 = i / 60;
        int i3 = i % 60;
        if (i3 < 10) {
            sb = new StringBuilder();
            sb.append("0");
        } else {
            sb = new StringBuilder();
            sb.append("");
        }
        sb.append(i3);
        String string = sb.toString();
        if (i2 < 10) {
            str = "0" + i2;
        } else {
            str = "" + i2;
        }
        this.mButtonCall.setText("Session Active: " + str + ":" + string);
        if (this.mSessionState == 2) {
            sendDelayedMessage(1, 1000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearAllValues() {
        this.mSessionCount = 0;
        this.mLocationFixedCount = 0;
        this.mSessionStartTime = null;
        this.mSessionStopTime = null;
        this.mLocFixTime = "";
        this.mLocFixType = -1;
        this.mMinDistance = 0;
        this.mMaxDistance = 0;
        this.mFixResultsList = "";
        this.mDistanceList.clear();
        this.mTextViewYieldRateCountValue.setText("0/0/0");
        this.mTextViewYieldRateValue.setText("0");
        this.mTextViewReportLocationValue.setText("");
        this.mTextViewMinMaxDistanceValue.setText("0/0");
        this.mTextViewDistanceOfFixesValue.setText("0/0/0/0");
        this.mTextViewSvCountValue.setText("0");
        this.mTextViewSvSnrValue.setText("");
        this.mTextViewFixResultsValue.setText("");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void createReport() {
        this.mReportFileName = "E911TEST_" + LbsUtility.getTimeString2(new Date().getTime()) + ".csv";
        StringBuilder sb = new StringBuilder();
        sb.append("Create report file name: ");
        sb.append(this.mReportFileName);
        log(sb.toString());
        LbsUtility.write2File(getApplicationContext(), "NiStatisticReport", null, this.mReportFileName, "Session count, Session Start Time, Session Stop Time, Fix Time, Location Fixed, Yield Rate, Protocol, Fix Type, Latitude, Longitude, Distance, 67%Distance, 90%Distance, 95%Distance, 97%Distance, #SV, SV info\n", true);
    }

    private void handleSessionStateIdle() {
        String str;
        String str2;
        this.mSessionCount++;
        this.mSessionStopTime = LbsUtility.getTimeString3(new Date().getTime());
        if (this.mSuccessGotLocations) {
            this.mLocationFixedCount++;
            str = "Y";
        } else {
            str = "N";
        }
        this.mTextViewYieldRateCountValue.setText("" + this.mLocationFixedCount + "/" + (this.mSessionCount - this.mLocationFixedCount) + "/" + this.mSessionCount);
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(String.format("%.01f", Float.valueOf((((float) this.mLocationFixedCount) * 100.0f) / ((float) this.mSessionCount))));
        sb.append("%");
        String string = sb.toString();
        this.mTextViewYieldRateValue.setText(string);
        this.mTextViewReportLocationValue.setText("" + String.format("%.06f", Double.valueOf(this.mLocLat)) + ", " + String.format("%.06f", Double.valueOf(this.mLocLng)));
        int i = this.mDistance;
        if (i > 0) {
            this.mDistanceList.add(Integer.valueOf(i));
            Collections.sort(this.mDistanceList);
        }
        int size = this.mDistanceList.size();
        if (size > 0) {
            this.mDistance67 = this.mDistanceList.get((size * 67) / 100).intValue();
            this.mDistance90 = this.mDistanceList.get((size * 90) / 100).intValue();
            this.mDistance95 = this.mDistanceList.get((size * 95) / 100).intValue();
            this.mDistance97 = this.mDistanceList.get((size * 97) / 100).intValue();
            String str3 = ((("" + this.mDistance67 + "/\n") + this.mDistance90 + "/\n") + this.mDistance95 + "/\n") + this.mDistance97;
            this.mTextViewDistanceOfFixesValue.setText(str3);
            log("distance indexes : " + str3);
        } else {
            log("distance list is empty");
        }
        this.mFixInfo = "" + this.mSessionCount + "," + this.mSessionStartTime + "," + this.mSessionStopTime + "," + this.mLocFixTime + ",";
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.mFixResultsList);
        sb2.append(this.mSessionCount < 10 ? "0" : "");
        this.mFixResultsList = sb2.toString();
        StringBuilder sb3 = new StringBuilder();
        sb3.append(this.mFixResultsList);
        sb3.append(this.mSessionCount < 100 ? "0" : "");
        this.mFixResultsList = sb3.toString();
        this.mFixResultsList += this.mSessionCount + ": ";
        int i2 = this.mProtocolType;
        if (i2 == 2) {
            str2 = "UP";
        } else {
            str2 = i2 == 1 ? "CP" : "NA";
        }
        this.mFixResultsList += "[" + str2 + "] ";
        int i3 = this.mLocFixType;
        if (i3 == -1) {
            this.mFixInfo += str + "," + string + "," + str2 + ",N/A,,,,,,,,,\n";
            this.mFixResultsList += "No Update \n";
        } else if (i3 == 0) {
            this.mFixInfo += str + "," + string + "," + str2 + ",MSB,";
            this.mFixInfo += this.mLocLat + "," + this.mLocLng + "," + this.mDistance + "," + this.mDistance67 + ",";
            this.mFixInfo += this.mDistance90 + "," + this.mDistance95 + "," + this.mDistance97 + ",,\n";
            this.mFixResultsList += "distance=" + this.mDistance + "\n";
        } else if (i3 == 1) {
            this.mFixInfo += str + "," + string + "," + str2 + ",MSA,";
            this.mFixInfo += this.mLocLat + "," + this.mLocLng + "," + this.mDistance + "," + this.mDistance67 + ",";
            this.mFixInfo += this.mDistance90 + "," + this.mDistance95 + "," + this.mDistance97 + ",";
            this.mFixInfo += this.mMeasSvCount + "," + this.mMeasSvSnr + "\n";
            this.mFixResultsList += "distance=" + this.mDistance + " svCount=" + this.mMeasSvCount + ", SNR: " + this.mMeasSvSnr + "\n";
        }
        Context applicationContext = getApplicationContext();
        String str4 = this.mReportFileName;
        String str5 = this.mFixInfo;
        LbsUtility.write2File(applicationContext, "NiStatisticReport", null, str4, str5 == null ? "\n" : str5, true);
        this.mTextViewFixResultsValue.setText(this.mFixResultsList);
        this.mSessionStartTime = null;
        this.mFixInfo = null;
        this.mHandler.removeMessages(1);
    }

    protected static void log(Object obj) {
        Log.d("LocationEM_NiStatistic", "" + obj);
    }

    private void parseLocation(String str) {
        String[] strArrSplit = split(str);
        if (strArrSplit.length < 3) {
            log("Failed to get 3 values in niMsg");
            return;
        }
        try {
            this.mLocLat = Double.parseDouble(strArrSplit[0]);
            this.mLocLng = Double.parseDouble(strArrSplit[1]);
        } catch (NumberFormatException e) {
            Log.d("LbsNiStatistic", "ParseFloat" + e);
        }
        float[] fArr = new float[2];
        Location.distanceBetween(this.mLocLat, this.mLocLng, LbsGps.mRefLat, LbsGps.mRefLng, fArr);
        int i = (int) fArr[0];
        this.mDistance = i;
        int i2 = this.mProtocolType;
        if (i2 == 2) {
            this.mSuccessGotLocations = true;
        } else {
            if (i2 != 1 || i >= 50) {
                return;
            }
            this.mSuccessGotLocations = true;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void parseMsg(int i, int i2, String str) {
        log("parseMsg protocolType=" + i2);
        if (i == 0 || i == 1) {
            if (this.mLocFixTime.isEmpty()) {
                this.mLocFixTime = LbsUtility.getTimeString3(new Date().getTime());
            }
            if (this.mLocFixType == -1) {
                this.mLocFixType = i;
            }
        }
        if (i == 0) {
            log("handle NI_MESSAGE_TYPE_POS protocolType=" + i2);
            parseLocation(str);
            this.mTextViewReportLocationValue.setText("" + String.format("%.06f", Double.valueOf(this.mLocLat)) + ", " + String.format("%.06f", Double.valueOf(this.mLocLng)));
            int i3 = this.mMinDistance;
            if (i3 == 0 || i3 > this.mDistance) {
                this.mMinDistance = this.mDistance;
            }
            int i4 = this.mMaxDistance;
            int i5 = this.mDistance;
            if (i4 < i5) {
                this.mMaxDistance = i5;
            }
            this.mTextViewMinMaxDistanceValue.setText("" + this.mMinDistance + "/\n" + this.mMaxDistance);
            return;
        }
        if (i != 1) {
            if (i != 2) {
                if (i != 3) {
                    return;
                }
                log("handle NI_MESSAGE_TYPE_SESSION_END protocolType=" + i2);
                updateSessionIdle();
                return;
            }
            log("handle NI_MESSAGE_TYPE_SESSION_START protocolType=" + i2);
            if (i2 == 2) {
                this.mProtocolType = 2;
            } else {
                this.mProtocolType = 1;
            }
            updateSessionActive();
            return;
        }
        log("handle NI_MESSAGE_TYPE_MEAS protocolType=" + i2);
        String[] strArrSplit = split(str);
        if (strArrSplit.length < 2) {
            log("Failed to get 2 values in Meas niMsg");
            return;
        }
        try {
            this.mMeasSvCount = Integer.parseInt(strArrSplit[0]);
            log("parseMsg Meas niMsg mMeasSvCount = " + this.mMeasSvCount);
        } catch (NumberFormatException e) {
            Log.d("LbsNiStatistic", "ParseInt" + e);
        }
        this.mMeasSvSnr = strArrSplit[1];
        this.mTextViewSvCountValue.setText("" + this.mMeasSvCount);
        this.mTextViewSvSnrValue.setText(this.mMeasSvSnr);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void registerBroadcasts() {
        if (!this.mBroadcastReceiverRegistered) {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.mediatek.lbs.em2.action.ni_message");
            this.mLocalBroadcastManager.registerReceiver(this.mBroadcastReceiver, intentFilter);
        }
        this.mBroadcastReceiverRegistered = true;
        ((TelephonyManager) getSystemService("phone")).listen(this.callStateListener, 32);
    }

    private void sendDelayedMessage(int i, long j) {
        this.mHandler.sendEmptyMessageDelayed(i, j);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2) {
        sendMessage(i, i2, 0, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2, int i3, Object obj) {
        this.mHandler.obtainMessage(i, i2, i3, obj).sendToTarget();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setNiStatistic2Agpsd(boolean z) {
        log("setNiStatistic2Agpsd enabled: " + z);
        AgpsInterface agpsInterface = this.mAgpsInterface;
        if (agpsInterface == null) {
            log("setNiStatistic2Agpsd return because of null mAgpsInterface");
        } else {
            agpsInterface.setNiStatisticEnable(z);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Are you sure to detele all Reports?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.8
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsNiStatistic.this.deleteReportFiles();
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.9
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showNiStatisticConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Enable NI STATISTIC may save sensitve data in report files, are you sure to enable it?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.6
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsNiStatistic.this.mToggleButtonNiStatistic.setEnabled(true);
                LbsNiStatistic.this.mButtonCall.setEnabled(true);
                LbsNiStatistic.this.registerBroadcasts();
                LbsNiStatistic.this.mButtonCearReports.setEnabled(false);
                LbsNiStatistic.this.sendMessage(3, 0);
                LbsNiStatistic.this.clearAllValues();
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.7
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsNiStatistic.this.mToggleButtonNiStatistic.setChecked(false);
            }
        });
        builder.create().show();
    }

    private String[] split(String str) {
        return str.split(",");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startComponent(String str, String str2) {
        try {
            Intent intent = new Intent();
            intent.setComponent(new ComponentName(str, str2));
            intent.addFlags(268435456);
            startActivity(intent);
        } catch (ActivityNotFoundException e) {
            e.printStackTrace();
            log("ERR: startComponent failed fullActivityName=" + str2);
            Toast.makeText(getApplicationContext(), "ERR: startComponent failed!!", 1).show();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unregisterBroadcasts() {
        if (this.mBroadcastReceiverRegistered) {
            this.mLocalBroadcastManager.unregisterReceiver(this.mBroadcastReceiver);
        }
        this.mBroadcastReceiverRegistered = false;
        ((TelephonyManager) getSystemService("phone")).listen(this.callStateListener, 0);
    }

    void HandleCallStateUpdated(int i) {
        if (i == 0) {
            this.mButtonCall.setText("AutoDialer");
        } else if (i == 1) {
            log("Call_State_Idle");
        } else {
            if (i != 2) {
                return;
            }
            log("Call_State_Active");
        }
    }

    void deleteReportFiles() {
        log("deleteReportFiles in path: " + this.mNiStatisticRportPath);
        File file = new File(this.mNiStatisticRportPath);
        if (file.isDirectory()) {
            for (File file2 : file.listFiles()) {
                file2.delete();
            }
        }
    }

    protected void initAgpsInterface() {
        try {
            this.mAgpsInterface = new AgpsInterface();
        } catch (IOException e) {
            log("agpsInterface connection failure");
            e.printStackTrace();
        }
    }

    protected void initUI() {
        this.mToggleButtonNiStatistic = (ToggleButton) findViewById(R.id.toggleButton_NiStatistic);
        this.mButtonCall = (Button) findViewById(R.id.button_Call);
        this.mButtonCearReports = (Button) findViewById(R.id.button_ClearReports);
        this.mTextViewYieldRateCountValue = (TextView) findViewById(R.id.TextNi_YieldRateCountValue);
        this.mTextViewYieldRateValue = (TextView) findViewById(R.id.TextNi_YieldRateValue);
        this.mTextViewReportLocationValue = (TextView) findViewById(R.id.TextNi_ReportLocationValue);
        this.mTextViewMinMaxDistanceValue = (TextView) findViewById(R.id.TextNi_MimMaxDistanceValue);
        this.mTextViewDistanceOfFixesValue = (TextView) findViewById(R.id.TextNi_DistanceOfFixesValue);
        this.mTextViewSvCountValue = (TextView) findViewById(R.id.TextNi_SvCountValue);
        this.mTextViewSvSnrValue = (TextView) findViewById(R.id.TextNi_SvSnrValue);
        this.mTextViewRefLocationValue = (TextView) findViewById(R.id.TextNi_RefLocationValue);
        this.mTextViewReportPath = (TextView) findViewById(R.id.TextView_ReportPath);
        this.mTextViewFixResultsValue = (TextView) findViewById(R.id.TextView_FixResultsValue);
        this.mToggleButtonNiStatistic.setChecked(false);
        this.mToggleButtonNiStatistic.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsNiStatistic.this.mToggleButtonNiStatistic.isChecked()) {
                    LbsNiStatistic.log("NiDebug button Clicked ON");
                    LbsNiStatistic.this.showNiStatisticConfirmDialog();
                } else {
                    LbsNiStatistic.log("NiDebug button Clicked OFF");
                    LbsNiStatistic.this.updateSessionIdle();
                    LbsNiStatistic.this.mHandler.removeMessages(1);
                    LbsNiStatistic.this.HandleCallStateUpdated(0);
                    LbsNiStatistic.this.mButtonCall.setEnabled(false);
                    LbsNiStatistic.this.unregisterBroadcasts();
                    LbsNiStatistic.this.mButtonCearReports.setEnabled(true);
                }
                LbsNiStatistic lbsNiStatistic = LbsNiStatistic.this;
                lbsNiStatistic.setNiStatistic2Agpsd(lbsNiStatistic.mToggleButtonNiStatistic.isChecked());
            }
        });
        this.mButtonCall.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsNiStatistic.this.startComponent("com.mediatek.autodialer", "com.mediatek.autodialer.AutoDialerActivity");
            }
        });
        this.mButtonCearReports.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNiStatistic.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsNiStatistic.this.showConfirmDialog();
            }
        });
        this.mNiStatisticRportPath = "/sdcard/NiStatisticReport/";
        log("Report file path: " + this.mNiStatisticRportPath);
        File file = new File(this.mNiStatisticRportPath);
        if (!file.exists()) {
            file.mkdirs();
        }
        this.mTextViewReportPath.setText(this.mNiStatisticRportPath);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            initAgpsInterface();
            setContentView(R.layout.ni_statistic);
            this.mLocalBroadcastManager = LocalBroadcastManager.getInstance(this);
            this.mDistanceList = new ArrayList();
            initUI();
            log("onCreate, set debug Screen function disabled");
            HandleCallStateUpdated(0);
            this.mButtonCall.setEnabled(false);
            setNiStatistic2Agpsd(false);
        } catch (RuntimeException unused) {
            log("onCreate, Failed to initAgpsInterface");
        }
    }

    @Override // android.app.Activity
    public void onDestroy() {
        log("onDestroy");
        super.onDestroy();
        setNiStatistic2Agpsd(false);
        unregisterBroadcasts();
        this.mHandler.removeMessages(1);
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    public void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
    }

    @Override // android.app.Activity
    public void onResume() {
        String str;
        super.onResume();
        if (LbsGps.mRefLat == 0.0d && LbsGps.mRefLng == 0.0d) {
            str = "0,0 (Please set it at [GPS][REF POSITION])";
            this.mTextViewRefLocationValue.setTextColor(-65536);
        } else {
            str = "" + String.format("%.06f", Double.valueOf(LbsGps.mRefLat)) + ", " + String.format("%.06f", Double.valueOf(LbsGps.mRefLng));
            this.mTextViewRefLocationValue.setTextColor(-16711936);
        }
        this.mTextViewRefLocationValue.setText(str);
    }

    void updateSessionActive() {
        if (this.mSessionState == 2) {
            updateSessionIdle();
        }
        this.mButtonCall.setText("Session Active: 00:00");
        this.mSuccessGotLocations = false;
        this.mSessionStartTime = LbsUtility.getTimeString3(new Date().getTime());
        this.mTimerCount = 0;
        this.mMeasSvCount = 0;
        this.mMeasSvSnr = "";
        this.mLocFixTime = "";
        this.mDistance = 0;
        this.mLocLat = 0.0d;
        this.mLocLng = 0.0d;
        this.mMinDistance = 0;
        this.mMaxDistance = 0;
        this.mLocFixType = -1;
        this.mSessionState = 2;
        sendDelayedMessage(1, 1000L);
        this.mTextViewReportLocationValue.setText("" + String.format("%.06f", Double.valueOf(this.mLocLat)) + ", " + String.format("%.06f", Double.valueOf(this.mLocLng)));
        this.mTextViewMinMaxDistanceValue.setText("" + this.mMinDistance + "/" + this.mMaxDistance);
        TextView textView = this.mTextViewSvCountValue;
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(this.mMeasSvCount);
        textView.setText(sb.toString());
        this.mTextViewSvSnrValue.setText(this.mMeasSvSnr);
        LbsUtility.launchLocationEM(getApplicationContext());
    }

    void updateSessionIdle() {
        if (this.mSessionState == 1) {
            return;
        }
        this.mButtonCall.setText("Session Idle");
        this.mSessionState = 1;
        handleSessionStateIdle();
        LbsUtility.launchLocationEM(getApplicationContext());
    }
}

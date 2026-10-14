package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v4.content.LocalBroadcastManager;
import android.telecom.TelecomManager;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.ToggleButton;
import com.mediatek.lbs.em2.utils.AgpsInterface;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class LbsC2kDbg extends Activity {
    protected AgpsInterface mAgpsInterface;
    private Button mButtonCall;
    private Button mButtonCearReports;
    private Button mButtonDecreaseTimeout;
    private Button mButtonIncreaseTimeout;
    public String mDbgScreenRportPath;
    private LocalBroadcastManager mLocalBroadcastManager;
    private TextView mTextViewC2kBaseLocation;
    private TextView mTextViewC2kHVelocityValue;
    private TextView mTextViewC2kHeadingValue;
    private TextView mTextViewC2kHeightValue;
    private TextView mTextViewC2kLocationValue;
    private TextView mTextViewC2kPpmNum;
    private TextView mTextViewC2kPpmResult;
    private TextView mTextViewC2kPrmNum;
    private TextView mTextViewC2kPrmResult;
    private TextView mTextViewC2kRefPnValue;
    private TextView mTextViewC2kSidNidBaseIdValue;
    private TextView mTextViewC2kTimeStampValue;
    private TextView mTextViewC2kUncAlongPerpValue;
    private TextView mTextViewC2kUncAngleValue;
    private TextView mTextViewC2kUncVerValue;
    private TextView mTextViewC2kVVelocityValue;
    private TextView mTextViewReportPath;
    private TextView mTextViewWaitFixTimeout;
    private ToggleButton mToggleButtonC2kDbg;
    ArrayList<PilotInfo> mPilotList = new ArrayList<>();
    ArrayList<SvInfo> mSvList = new ArrayList<>();
    private int mCallState = 0;
    private boolean mBroadcastReceiverRegistered = false;
    private int mWaitFixTimeout = 30;
    private boolean mLaunchDialerWhenTimeout = false;
    private int mTimeCount = 0;
    private StringList mPpmStringList = new StringList(12);
    private StringList mPrmStringList = new StringList(12);
    PhoneStateListener callStateListener = new PhoneStateListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.1
        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            if (i == 1) {
                LbsC2kDbg.log("call_state_changed callback state Ringing");
                return;
            }
            if (i == 2) {
                LbsC2kDbg.log("call_state_changed callback state Offhook");
                if (LbsC2kDbg.this.mCallState != 2) {
                    LbsC2kDbg.this.mCallState = 2;
                    LbsC2kDbg lbsC2kDbg = LbsC2kDbg.this;
                    lbsC2kDbg.sendMessage(0, lbsC2kDbg.mCallState);
                    return;
                }
                return;
            }
            if (i == 0) {
                LbsC2kDbg.log("call_state_changed callback state Idle");
                LbsC2kDbg.this.mCallState = 1;
                LbsC2kDbg lbsC2kDbg2 = LbsC2kDbg.this;
                lbsC2kDbg2.sendMessage(0, lbsC2kDbg2.mCallState);
            }
        }
    };
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("com.mediatek.lbs.em2.action.debug_message")) {
                String string = intent.getExtras().getString("vzw_dbg");
                LbsC2kDbg.log("vzw_dbg: " + string);
                LbsC2kDbg.this.sendMessage(2, 0, 0, string);
            }
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.12
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                LbsC2kDbg.this.HandleCallStateUpdated(message.arg1);
                return;
            }
            if (i == 1) {
                LbsC2kDbg lbsC2kDbg = LbsC2kDbg.this;
                lbsC2kDbg.HandleTimerCallInfo(lbsC2kDbg.mTimeCount);
            } else if (i != 2) {
                LbsC2kDbg.log("WARNING: unknown handle event recv!!");
            } else {
                LbsC2kDbg.this.parseMsg((String) message.obj);
            }
        }
    };

    public class PilotInfo {
        int mIndex;
        float mPilot_pn_phase;
        float mPilot_strength;
        int mPn;

        public PilotInfo(LbsC2kDbg lbsC2kDbg) {
        }
    }

    public class SvInfo {
        int mIndex;
        float mPs_doppler;
        int mSv_cno;
        float mSv_code_ph;
        int mSv_prn_num;

        public SvInfo(LbsC2kDbg lbsC2kDbg) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void HandleTimerCallInfo(int i) {
        StringBuilder sb;
        String str;
        this.mTimeCount++;
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
        this.mButtonCall.setText("Call Active : " + str + ":" + string);
        if (i >= this.mWaitFixTimeout && this.mLaunchDialerWhenTimeout) {
            log("Wait fix timeout: " + this.mWaitFixTimeout);
            ((TelecomManager) getSystemService("telecom")).showInCallScreen(false);
            this.mLaunchDialerWhenTimeout = false;
        }
        sendDelayedMessage(1, 1000L);
    }

    static /* synthetic */ int access$1108(LbsC2kDbg lbsC2kDbg) {
        int i = lbsC2kDbg.mWaitFixTimeout;
        lbsC2kDbg.mWaitFixTimeout = i + 1;
        return i;
    }

    static /* synthetic */ int access$1110(LbsC2kDbg lbsC2kDbg) {
        int i = lbsC2kDbg.mWaitFixTimeout;
        lbsC2kDbg.mWaitFixTimeout = i - 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearAllValues() {
        this.mPilotList.clear();
        this.mSvList.clear();
        this.mTextViewC2kLocationValue.setText("");
        this.mTextViewC2kTimeStampValue.setText("");
        this.mTextViewC2kHVelocityValue.setText("");
        this.mTextViewC2kVVelocityValue.setText("");
        this.mTextViewC2kHeadingValue.setText("");
        this.mTextViewC2kHeightValue.setText("");
        this.mTextViewC2kUncAngleValue.setText("");
        this.mTextViewC2kUncAlongPerpValue.setText("");
        this.mTextViewC2kUncVerValue.setText("");
        this.mTextViewC2kSidNidBaseIdValue.setText("");
        this.mTextViewC2kRefPnValue.setText("");
        this.mTextViewC2kBaseLocation.setText("");
        this.mTextViewC2kPpmNum.setText("0");
        this.mTextViewC2kPrmNum.setText("0");
        this.mTextViewC2kPpmResult.setText("");
        this.mTextViewC2kPrmResult.setText("");
    }

    private String convertFromTable(String str) {
        switch (LbsUtility.parseInt(str)) {
            case 0:
                return "0.5";
            case 1:
                return "0.75";
            case 2:
                return "1";
            case 3:
                return "1.5";
            case 4:
                return "2";
            case 5:
                return "3";
            case 6:
                return "4";
            case 7:
                return "6";
            case 8:
                return "8";
            case 9:
                return "12";
            case 10:
                return "16";
            case 11:
                return "24";
            case 12:
                return "32";
            case 13:
                return "48";
            case 14:
                return "64";
            case 15:
                return "96";
            case 16:
                return "128";
            case 17:
                return "192";
            case 18:
                return "256";
            case 19:
                return "384";
            case 20:
                return "512";
            case 21:
                return "768";
            case 22:
                return "1024";
            case 23:
                return "1536";
            case 24:
                return "2048";
            case 25:
                return "3072";
            case 26:
                return "4096";
            case 27:
                return "6144";
            case 28:
                return "8192";
            case 29:
            default:
                return "12288";
        }
    }

    private String convertHVelocity(String str) {
        return String.format("%.06f", Float.valueOf(LbsUtility.parseInt(str) * 0.25f));
    }

    private String convertHeading(String str) {
        return String.format("%.06f", Float.valueOf((LbsUtility.parseInt(str) * 360.0f) / 1024.0f));
    }

    private String convertLatitude(String str) {
        return String.format("%.06f", Float.valueOf((LbsUtility.parseInt(str) * 180.0f) / 3.3554432E7f));
    }

    private String convertLongitude(String str) {
        return String.format("%.06f", Float.valueOf((LbsUtility.parseInt(str) * 360.0f) / 6.7108864E7f));
    }

    private float convertPilotPnPhase(String str) {
        return LbsUtility.parseInt(str) / 16.0f;
    }

    private float convertPilotStrength(String str) {
        int i = LbsUtility.parseInt(str);
        if (i == 0) {
            return 0.0f;
        }
        return i / (-2.0f);
    }

    private float convertPsDoppler(String str) {
        return LbsUtility.parseInt(str) * 0.2f;
    }

    private float convertSvCodePh(String str, String str2) {
        return LbsUtility.parseInt(str) + (LbsUtility.parseInt(str2) / 1024.0f);
    }

    private String convertUncAngle(String str) {
        return String.format("%.06f", Float.valueOf(LbsUtility.parseInt(str) * 5.625f));
    }

    private String convertVVelocity(String str) {
        return String.format("%.06f", Float.valueOf(LbsUtility.parseInt(str) * 0.5f));
    }

    private String getTestCount(String str) {
        int i = LbsUtility.parseInt(str);
        if (i == 1) {
            return "(1st)";
        }
        if (i == 2) {
            return "(2nd)";
        }
        if (i == 3) {
            return "(3rd)";
        }
        return "(" + str + "th)";
    }

    private String getTimestamp(String str, String str2, String str3, String str4, String str5, String str6) {
        String str7;
        switch (LbsUtility.parseInt(str2)) {
            case 1:
                str7 = "Jan";
                break;
            case 2:
                str7 = "Feb";
                break;
            case 3:
                str7 = "Mar";
                break;
            case 4:
                str7 = "Apr";
                break;
            case 5:
                str7 = "May";
                break;
            case 6:
                str7 = "Jun";
                break;
            case 7:
                str7 = "Jul";
                break;
            case 8:
                str7 = "Aug";
                break;
            case 9:
                str7 = "Sep";
                break;
            case 10:
                str7 = "Oct";
                break;
            case 11:
                str7 = "Nov";
                break;
            case 12:
                str7 = "Dec";
                break;
            default:
                str7 = "";
                break;
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str7);
        sb.append(" ");
        sb.append(str3);
        sb.append(", ");
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
        Log.d("LocationEM_C2kDbg", "" + obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void registerBroadcasts() {
        if (!this.mBroadcastReceiverRegistered) {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.mediatek.lbs.em2.action.debug_message");
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
    public void setC2kDebugScreen(boolean z) {
        log("setC2kDebugScreen enabled: " + z);
        AgpsInterface agpsInterface = this.mAgpsInterface;
        if (agpsInterface == null) {
            log("setC2kDebugScreen return because of null mAgpsInterface");
            return;
        }
        agpsInterface.setVzwDebugScreenEnable(z);
        if (z) {
            startService(new Intent().setClass(this, DbgScreenReporter.class));
        } else {
            stopService(new Intent().setClass(this, DbgScreenReporter.class));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showC2kConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Enable C2K DEBUG may save sensitve data in report files, are you sure to enable it?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.8
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsC2kDbg.this.mToggleButtonC2kDbg.setEnabled(true);
                LbsC2kDbg.this.mButtonCall.setEnabled(true);
                LbsC2kDbg.this.registerBroadcasts();
                LbsC2kDbg.this.mButtonCearReports.setEnabled(false);
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.9
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsC2kDbg.this.mToggleButtonC2kDbg.setChecked(false);
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Are you sure to detele all Reports?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.10
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsC2kDbg.this.deleteReportFiles();
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.11
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
            }
        });
        builder.create().show();
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
            this.mButtonCall.setText("Call State");
            return;
        }
        if (i == 1) {
            this.mButtonCall.setText("Call Idle");
            this.mHandler.removeMessages(1);
        } else {
            if (i != 2) {
                return;
            }
            this.mButtonCall.setText("Call Active : 00:00");
            this.mLaunchDialerWhenTimeout = true;
            this.mTimeCount = 0;
            sendDelayedMessage(1, 1000L);
            clearAllValues();
        }
    }

    void deleteReportFiles() {
        log("deleteReportFiles in path: " + this.mDbgScreenRportPath);
        File file = new File(this.mDbgScreenRportPath);
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
        this.mToggleButtonC2kDbg = (ToggleButton) findViewById(R.id.toggleButton_C2kDbg);
        this.mButtonCall = (Button) findViewById(R.id.button_Call);
        this.mButtonIncreaseTimeout = (Button) findViewById(R.id.button_IncreaseTimeout);
        this.mButtonDecreaseTimeout = (Button) findViewById(R.id.button_DecreaseTimeout);
        this.mButtonCearReports = (Button) findViewById(R.id.button_ClearReports);
        this.mTextViewC2kLocationValue = (TextView) findViewById(R.id.TextC2k_LocationValue);
        this.mTextViewC2kTimeStampValue = (TextView) findViewById(R.id.TextC2k_TimeStampValue);
        this.mTextViewC2kHVelocityValue = (TextView) findViewById(R.id.TextC2k_HVelocityValue);
        this.mTextViewC2kVVelocityValue = (TextView) findViewById(R.id.TextC2k_VVelocityValue);
        this.mTextViewC2kHeadingValue = (TextView) findViewById(R.id.TextC2k_HeadingValue);
        this.mTextViewC2kHeightValue = (TextView) findViewById(R.id.TextC2k_HeightValue);
        this.mTextViewC2kUncAngleValue = (TextView) findViewById(R.id.TextC2k_UncAngleValue);
        this.mTextViewC2kUncAlongPerpValue = (TextView) findViewById(R.id.TextC2k_UncAlongPerpValue);
        this.mTextViewC2kUncVerValue = (TextView) findViewById(R.id.TextC2k_UncVerValue);
        this.mTextViewC2kSidNidBaseIdValue = (TextView) findViewById(R.id.TextC2k_SidNidBaseIdValue);
        this.mTextViewC2kRefPnValue = (TextView) findViewById(R.id.TextC2k_RefPnValue);
        this.mTextViewC2kBaseLocation = (TextView) findViewById(R.id.TextC2k_BaseLocationValue);
        this.mTextViewC2kPpmNum = (TextView) findViewById(R.id.TextC2k_PpmNumValue);
        this.mTextViewC2kPrmNum = (TextView) findViewById(R.id.TextC2k_PrmNumValue);
        this.mTextViewC2kPpmResult = (TextView) findViewById(R.id.TextView_PpmResult);
        this.mTextViewC2kPrmResult = (TextView) findViewById(R.id.TextView_PrmResult);
        this.mTextViewReportPath = (TextView) findViewById(R.id.TextView_ReportPath);
        this.mTextViewWaitFixTimeout = (TextView) findViewById(R.id.TextView_WaitFixTimeout);
        this.mToggleButtonC2kDbg.setChecked(false);
        this.mToggleButtonC2kDbg.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsC2kDbg.this.mToggleButtonC2kDbg.isChecked()) {
                    LbsC2kDbg.log("C2kDebug button Clicked ON");
                    LbsC2kDbg.this.showC2kConfirmDialog();
                } else {
                    LbsC2kDbg.log("C2kDebug button Clicked OFF");
                    LbsC2kDbg.this.mHandler.removeMessages(1);
                    LbsC2kDbg.this.HandleCallStateUpdated(0);
                    LbsC2kDbg.this.mButtonCall.setEnabled(false);
                    LbsC2kDbg.this.unregisterBroadcasts();
                    LbsC2kDbg.this.clearAllValues();
                    LbsC2kDbg.this.mButtonCearReports.setEnabled(true);
                }
                LbsC2kDbg lbsC2kDbg = LbsC2kDbg.this;
                lbsC2kDbg.setC2kDebugScreen(lbsC2kDbg.mToggleButtonC2kDbg.isChecked());
            }
        });
        this.mButtonCall.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsC2kDbg.this.mCallState == 2) {
                    ((TelecomManager) LbsC2kDbg.this.getSystemService("telecom")).showInCallScreen(false);
                } else {
                    LbsC2kDbg.this.startActivity(new Intent("android.intent.action.DIAL"));
                }
            }
        });
        this.mButtonIncreaseTimeout.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsC2kDbg.access$1108(LbsC2kDbg.this);
                LbsC2kDbg.this.mTextViewWaitFixTimeout.setText("Waiting Fix Timeout (s) : " + LbsC2kDbg.this.mWaitFixTimeout);
            }
        });
        this.mButtonDecreaseTimeout.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsC2kDbg.access$1110(LbsC2kDbg.this);
                LbsC2kDbg lbsC2kDbg = LbsC2kDbg.this;
                lbsC2kDbg.mWaitFixTimeout = lbsC2kDbg.mWaitFixTimeout < 0 ? 0 : LbsC2kDbg.this.mWaitFixTimeout;
                LbsC2kDbg.this.mTextViewWaitFixTimeout.setText("Waiting Fix Timeout (s) : " + LbsC2kDbg.this.mWaitFixTimeout);
            }
        });
        this.mButtonCearReports.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsC2kDbg.7
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsC2kDbg.this.showConfirmDialog();
            }
        });
        this.mDbgScreenRportPath = "/sdcard/DbgScreenReport/";
        log("Report file path: " + this.mDbgScreenRportPath);
        File file = new File(this.mDbgScreenRportPath);
        if (!file.exists()) {
            file.mkdirs();
        }
        this.mTextViewReportPath.setText(this.mDbgScreenRportPath);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            initAgpsInterface();
            setContentView(R.layout.c2k_dbg);
            this.mLocalBroadcastManager = LocalBroadcastManager.getInstance(this);
            initUI();
            log("onCreate, set debug Screen function disabled");
            HandleCallStateUpdated(0);
            this.mButtonCall.setEnabled(false);
            setC2kDebugScreen(false);
        } catch (RuntimeException unused) {
            log("onCreate, Failed to initAgpsInterface");
        }
    }

    @Override // android.app.Activity
    public void onDestroy() {
        log("onDestroy");
        super.onDestroy();
        setC2kDebugScreen(false);
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
        super.onResume();
    }

    void parseAa(String str) {
        String[] strArrSplit = LbsUtility.split(str);
        if (strArrSplit == null || strArrSplit.length < 3) {
            return;
        }
        LbsUtility.parseInt(strArrSplit[2]);
    }

    void parseMsg(String str) {
        if (str.contains("vzw_aa")) {
            parseAa(str);
            return;
        }
        if (str.contains("vzw_ppm")) {
            parsePpm(str);
        } else if (str.contains("vzw_pos")) {
            parsePos(str);
        } else if (str.contains("vzw_prm")) {
            parsePrm(str);
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
        String str4 = strArrSplit[4];
        String str5 = strArrSplit[5];
        String str6 = strArrSplit[6];
        String str7 = strArrSplit[7];
        String str8 = strArrSplit[8];
        String str9 = strArrSplit[9];
        String str10 = strArrSplit[10];
        String str11 = strArrSplit[11];
        String str12 = strArrSplit[12];
        String str13 = strArrSplit[13];
        String str14 = strArrSplit[14];
        String str15 = strArrSplit[15];
        String str16 = strArrSplit[16];
        String str17 = strArrSplit[17];
        String str18 = strArrSplit[18];
        String str19 = strArrSplit[19];
        String str20 = strArrSplit[20];
        String str21 = strArrSplit[21];
        String str22 = strArrSplit[22];
        String str23 = strArrSplit[23];
        String str24 = strArrSplit[24];
        String str25 = strArrSplit[25];
        String testCount = getTestCount(strArrSplit[26]);
        String timestamp = getTimestamp(str20, str21, str22, str23, str24, str25);
        this.mTextViewC2kLocationValue.setText(convertLatitude(str2) + " / " + convertLongitude(str3) + " " + testCount);
        this.mTextViewC2kTimeStampValue.setText(timestamp);
        TextView textView = this.mTextViewC2kHVelocityValue;
        StringBuilder sb = new StringBuilder();
        sb.append(convertHVelocity(str10));
        sb.append(" m/s");
        textView.setText(sb.toString());
        this.mTextViewC2kVVelocityValue.setText(convertVVelocity(str11) + " m/s");
        this.mTextViewC2kHeadingValue.setText(convertHeading(str9) + " d");
        this.mTextViewC2kHeightValue.setText(str8 + " m");
        this.mTextViewC2kUncAngleValue.setText(convertUncAngle(str4) + " d");
        this.mTextViewC2kUncAlongPerpValue.setText(convertFromTable(str5) + " m /" + convertFromTable(str6) + " m");
        TextView textView2 = this.mTextViewC2kUncVerValue;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(convertFromTable(str7));
        sb2.append(" m");
        textView2.setText(sb2.toString());
        this.mTextViewC2kSidNidBaseIdValue.setText(str12 + " / " + str13 + " / " + str14);
        this.mTextViewC2kRefPnValue.setText(str17);
        this.mTextViewC2kBaseLocation.setText(convertLatitude(str15) + " / " + convertLongitude(str16));
    }

    void parsePpm(String str) {
        int i;
        StringBuilder sb;
        String[] strArrSplit = LbsUtility.split(str);
        if (strArrSplit == null) {
            log("parsePpm Error, split record return null");
            return;
        }
        int i2 = 3;
        if (strArrSplit.length >= 3) {
            i = LbsUtility.parseInt(strArrSplit[2]);
        } else {
            i2 = 2;
            i = 0;
        }
        while (i2 < strArrSplit.length) {
            if (strArrSplit.length - i2 < 5) {
                log("parsePpm Error, left item size is less than 5, msg: " + str);
                break;
            }
            int i3 = i2 + 1;
            String str2 = strArrSplit[i2];
            int i4 = i3 + 1;
            String str3 = strArrSplit[i3];
            int i5 = i4 + 1;
            String str4 = strArrSplit[i4];
            int i6 = i5 + 1;
            String str5 = strArrSplit[i5];
            int i7 = i6 + 1;
            String str6 = strArrSplit[i6];
            PilotInfo pilotInfo = new PilotInfo(this);
            pilotInfo.mIndex = LbsUtility.parseInt(str2);
            pilotInfo.mPn = LbsUtility.parseInt(str3);
            pilotInfo.mPilot_pn_phase = convertPilotPnPhase(str4);
            pilotInfo.mPilot_strength = convertPilotStrength(str5);
            LbsUtility.parseInt(str6);
            this.mPilotList.add(pilotInfo);
            i2 = i7;
        }
        this.mTextViewC2kPpmNum.setText("" + i);
        this.mPpmStringList.clear();
        this.mPpmStringList.add("        PN  PN_Phase  Ec/Io");
        for (PilotInfo pilotInfo2 : this.mPilotList) {
            if (pilotInfo2.mIndex > 9) {
                sb = new StringBuilder();
                sb.append("");
            } else {
                sb = new StringBuilder();
                sb.append("0");
            }
            sb.append(pilotInfo2.mIndex);
            this.mPpmStringList.add("\n[" + sb.toString() + "]  " + (pilotInfo2.mPn > 9 ? "" + pilotInfo2.mPn : "0" + pilotInfo2.mPn) + "  " + String.format("%.04f", Float.valueOf(pilotInfo2.mPilot_pn_phase)) + "  " + String.format("%.01f", Float.valueOf(pilotInfo2.mPilot_strength)));
        }
        this.mTextViewC2kPpmResult.setText(this.mPpmStringList.get());
    }

    void parsePrm(String str) {
        int i;
        StringBuilder sb;
        String[] strArrSplit = LbsUtility.split(str);
        if (strArrSplit == null) {
            log("parsePrm Error, split record return null");
            return;
        }
        int i2 = 3;
        if (strArrSplit.length >= 3) {
            i = LbsUtility.parseInt(strArrSplit[2]);
        } else {
            i2 = 2;
            i = 0;
        }
        while (i2 < strArrSplit.length) {
            if (strArrSplit.length - i2 < 6) {
                log("parsePrm Error, left item size is less than 6, msg: " + str);
                break;
            }
            int i3 = i2 + 1;
            String str2 = strArrSplit[i2];
            int i4 = i3 + 1;
            String str3 = strArrSplit[i3];
            int i5 = i4 + 1;
            String str4 = strArrSplit[i4];
            int i6 = i5 + 1;
            String str5 = strArrSplit[i5];
            int i7 = i6 + 1;
            String str6 = strArrSplit[i6];
            int i8 = i7 + 1;
            String str7 = strArrSplit[i7];
            SvInfo svInfo = new SvInfo(this);
            svInfo.mIndex = LbsUtility.parseInt(str2);
            svInfo.mSv_prn_num = LbsUtility.parseInt(str3);
            svInfo.mSv_cno = LbsUtility.parseInt(str4);
            svInfo.mPs_doppler = convertPsDoppler(str5);
            svInfo.mSv_code_ph = convertSvCodePh(str6, str7);
            this.mSvList.add(svInfo);
            i2 = i8;
        }
        this.mTextViewC2kPrmNum.setText("" + i);
        this.mPrmStringList.clear();
        this.mPrmStringList.add("    PRN  C/NO  Dopp  Code_Ph");
        for (SvInfo svInfo2 : this.mSvList) {
            if (svInfo2.mIndex > 9) {
                sb = new StringBuilder();
                sb.append("");
            } else {
                sb = new StringBuilder();
                sb.append("0");
            }
            sb.append(svInfo2.mIndex);
            this.mPrmStringList.add("\n[" + sb.toString() + "]  " + (svInfo2.mSv_prn_num > 9 ? "" + svInfo2.mSv_prn_num : "0" + svInfo2.mSv_prn_num) + "  " + svInfo2.mSv_cno + ".0  " + String.format("%.02f", Float.valueOf(svInfo2.mPs_doppler)) + "  " + String.format("%.04f", Float.valueOf(svInfo2.mSv_code_ph)));
        }
        this.mTextViewC2kPrmResult.setText(this.mPrmStringList.get());
    }
}

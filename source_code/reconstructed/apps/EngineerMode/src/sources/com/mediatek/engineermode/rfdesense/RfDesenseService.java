package com.mediatek.engineermode.rfdesense;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Intent;
import android.graphics.BitmapFactory;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.support.v4.app.NotificationCompat;
import android.support.v4.media.MediaPlayer2;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.Manifest;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.RadioStateManager;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseService extends Service {
    private TelephonyManager mTelephonyManager;
    private final String TAG = "RfDesense/TxTestService";
    private final int STATE_NONE = 0;
    private final int STATE_STARTED = 1;
    private final String DEFAULT_VALUES = "[GSM,850,192,5,5][TDSCDMA,BAND34,10087,24,10][WCDMA,BAND1,9612,23,10][LTE(FDD),BAND1,19500,24,10][LTE(TDD),BAND34,20175,24,10][CDMA(1X),BC0,384,83,10][10]";
    private List<RfDesenseServiceData> mRfDesenseServiceData = new ArrayList();
    private HashMap<String, RfDesenseServiceData> mRfdesenseDefaultData = new HashMap<>();
    private HashMap<Integer, String> mErrorCodeMapping = new HashMap<>();
    private int mErrorCodeKey = 1000;
    private RfDesenseRatInfo mCurrectRatInfo = null;
    private int mState = 0;
    private long mTestDuration = 0;
    private int mTestCount = 1;
    private long mTestDurationSended = 0;
    private int mTestCountSended = 0;
    private boolean mIsSending = false;
    private Toast mToast = null;
    private ArrayList<RfDesenseRatInfo> mRatList = new ArrayList<>();
    private final Handler mServiceHandler = new Handler() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseService.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i = message.what;
            if (i == 1) {
                if (asyncResult.exception != null) {
                    Elog.d("RfDesense/TxTestService", "RfService ->start cmd failed");
                    RfDesenseService.this.mServiceHandler.sendMessageDelayed(Message.obtain(RfDesenseService.this.mServiceHandler, 2), 1000L);
                }
                Elog.d("RfDesense/TxTestService", "RfService ->start cmd ok");
                Elog.d("RfDesense/TxTestService", "RfService ->mTestDuration = " + RfDesenseService.this.mTestDuration);
                RfDesenseService.this.sendResultToClient(RadioStateManager.MSG_RADIO_STATE_CHANGED, "start test");
                RfDesenseService.this.mServiceHandler.sendMessageDelayed(Message.obtain(RfDesenseService.this.mServiceHandler, 2), 1000L);
                return;
            }
            if (i == 2) {
                if (RfDesenseService.this.mState == 2) {
                    RfDesenseService.this.stopTx();
                    return;
                }
                RfDesenseService.access$514(RfDesenseService.this, 1L);
                Elog.d("RfDesense/TxTestService", "RfService ->mTestDurationSended:" + RfDesenseService.this.mTestDurationSended);
                if (RfDesenseService.this.mTestDurationSended <= RfDesenseService.this.mTestDuration) {
                    RfDesenseService.this.mServiceHandler.sendMessageDelayed(Message.obtain(RfDesenseService.this.mServiceHandler, 2), 1000L);
                    return;
                } else {
                    RfDesenseService.this.mTestDurationSended = 0L;
                    RfDesenseService.this.txTestStop(4);
                    return;
                }
            }
            if (i == 4) {
                if (asyncResult.exception != null) {
                    Elog.d("RfDesense/TxTestService", "RfService ->stop cmd failed");
                    RfDesenseService.this.updateUIView();
                    return;
                }
                Elog.d("RfDesense/TxTestService", "RfService ->stop cmd ok");
                RfDesenseService rfDesenseService = RfDesenseService.this;
                rfDesenseService.mCurrectRatInfo = rfDesenseService.getCurrectRatInfo();
                if (RfDesenseService.this.mCurrectRatInfo != null) {
                    RfDesenseService.this.rebootModem();
                    return;
                }
                Elog.d("RfDesense/TxTestService", "RfService ->send done,mTestCountSended = " + RfDesenseService.this.mTestCountSended);
                RfDesenseService.access$908(RfDesenseService.this);
                if (RfDesenseService.this.mTestCountSended >= RfDesenseService.this.mTestCount) {
                    Elog.d("RfDesense/TxTestService", "RfService ->send all rat done");
                    RfDesenseService.this.sendResultToClient(2000, "");
                    RfDesenseService.this.updateUIView();
                    RfDesenseService.this.stopSelf();
                    return;
                }
                for (int i2 = 0; i2 < RfDesenseTxTest.mRatName.length; i2++) {
                    ((RfDesenseRatInfo) RfDesenseService.this.mRatList.get(i2)).setRatSendState(false);
                }
                RfDesenseService.this.rebootModem();
                return;
            }
            if (i == 6) {
                RfDesenseService.this.mServiceHandler.sendMessageDelayed(Message.obtain(RfDesenseService.this.mServiceHandler, 8), 1000L);
                return;
            }
            if (i == 8) {
                if (RfDesenseService.this.mState == 1) {
                    Elog.d("RfDesense/TxTestService", "RfService ->reboot modem succeed");
                    RfDesenseService rfDesenseService2 = RfDesenseService.this;
                    rfDesenseService2.mCurrectRatInfo = rfDesenseService2.getCurrectRatInfo();
                    if (RfDesenseService.this.mCurrectRatInfo == null || RfDesenseService.this.mCurrectRatInfo.getRatCmdSwitch().equals("")) {
                        Elog.d("RfDesense/TxTestService", "RfService ->no need switch rat ");
                        Elog.d("RfDesense/TxTestService", "RfService ->entry airplane...");
                        RfDesenseService.this.startAirplane();
                        return;
                    }
                    Elog.d("RfDesense/TxTestService", "RfService ->switch rat(" + RfDesenseService.this.mCurrectRatInfo.getRatCmdSwitch() + ")");
                    RfDesenseService rfDesenseService3 = RfDesenseService.this;
                    rfDesenseService3.sendAtCommand(rfDesenseService3.mCurrectRatInfo.getRatCmdSwitch(), 15);
                    return;
                }
                return;
            }
            if (i == 9) {
                RfDesenseService.this.mServiceHandler.sendMessageDelayed(Message.obtain(RfDesenseService.this.mServiceHandler, 16), 2000L);
                return;
            }
            switch (i) {
                case 12:
                    Elog.d("RfDesense/TxTestService", "RfService ->AT+EWMPOLICY=0 send succeed");
                    Elog.d("RfDesense/TxTestService", "RfService ->send AT+ECSRA=2,0,1,0,1,0 ...");
                    RfDesenseService.this.sendAtCommand("AT+ECSRA=2,0,1,0,1,0", 14);
                    break;
                case 13:
                    Elog.d("RfDesense/TxTestService", "RfService ->AT+EWMPOLICY=0 send succeed");
                    Elog.d("RfDesense/TxTestService", "RfService ->send AT+ECSRA=2,1,0,1,1,0 ...");
                    RfDesenseService.this.sendAtCommand("AT+ECSRA=2,1,0,1,1,0", 14);
                    break;
                case 14:
                    Elog.d("RfDesense/TxTestService", "RfService ->AT+ECSRA send succeed");
                    RfDesenseService.this.startAirplane();
                    break;
                case 15:
                    if (asyncResult.exception == null) {
                        Elog.d("RfDesense/TxTestService", "RfService ->switch rat succeed");
                        if (RfDesenseService.this.mCurrectRatInfo.getRatName().equals(RfDesenseTxTest.mRatName[1])) {
                            Elog.d("RfDesense/TxTestService", "RfService ->send AT+EWMPOLICY=0");
                            RfDesenseService.this.sendAtCommand("AT+EWMPOLICY=0", 12);
                        } else if (RfDesenseService.this.mCurrectRatInfo.getRatName().equals(RfDesenseTxTest.mRatName[2])) {
                            Elog.d("RfDesense/TxTestService", "RfService ->send AT+EWMPOLICY=0");
                            RfDesenseService.this.sendAtCommand("AT+EWMPOLICY=0", 13);
                        } else {
                            Elog.d("RfDesense/TxTestService", "RfService ->entry airplane...");
                            RfDesenseService.this.startAirplane();
                        }
                    } else {
                        Elog.d("RfDesense/TxTestService", "RfService ->switch rat failed");
                        RfDesenseService.this.mServiceHandler.sendMessageDelayed(Message.obtain(RfDesenseService.this.mServiceHandler, 8), 1000L);
                    }
                    break;
                case 16:
                    Elog.d("RfDesense/TxTestService", "RfService -> entry airplane succeed...");
                    if (RfDesenseService.this.mCurrectRatInfo != null) {
                        RfDesenseService.this.mCurrectRatInfo.setRatSendState(true);
                        RfDesenseService rfDesenseService4 = RfDesenseService.this;
                        rfDesenseService4.sendAtCommand(rfDesenseService4.mCurrectRatInfo.getRatCmdStart(), 1);
                        Elog.d("RfDesense/TxTestService", "RfService ->send: " + RfDesenseService.this.mCurrectRatInfo.getRatName() + " " + RfDesenseService.this.mCurrectRatInfo.getRatCmdStart());
                    } else {
                        Elog.d("RfDesense/TxTestService", "mCurrectRatInfo == null");
                    }
                    break;
            }
        }
    };
    private int mRadioStatesLast = -1;
    private PhoneStateListener mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseService.2
        public void onRadioPowerStateChanged(int i) {
            if (i == 1) {
                Elog.v("RfDesense/TxTestService", "RADIO_POWER_ON");
                RfDesenseService.this.mServiceHandler.sendEmptyMessage(6);
                RfDesenseService.this.mRadioStatesLast = i;
            } else if (i != 0) {
                if (i == 2) {
                    Elog.v("RfDesense/TxTestService", "RADIO_POWER_UNAVAILABLE");
                }
            } else {
                Elog.v("RfDesense/TxTestService", "RADIO_POWER_OFF");
                if (RfDesenseService.this.mRadioStatesLast == 1) {
                    RfDesenseService.this.mServiceHandler.sendEmptyMessage(9);
                }
                RfDesenseService.this.mRadioStatesLast = i;
            }
        }
    };

    static /* synthetic */ long access$514(RfDesenseService rfDesenseService, long j) {
        long j2 = rfDesenseService.mTestDurationSended + j;
        rfDesenseService.mTestDurationSended = j2;
        return j2;
    }

    static /* synthetic */ int access$908(RfDesenseService rfDesenseService) {
        int i = rfDesenseService.mTestCountSended;
        rfDesenseService.mTestCountSended = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public RfDesenseRatInfo getCurrectRatInfo() {
        this.mCurrectRatInfo = null;
        for (int i = 0; i < this.mRatList.size(); i++) {
            if (this.mRatList.get(i).getRatCheckState().booleanValue() && !this.mRatList.get(i).getRatSendState().booleanValue()) {
                RfDesenseRatInfo rfDesenseRatInfo = this.mRatList.get(i);
                this.mCurrectRatInfo = rfDesenseRatInfo;
                this.mTestDuration = rfDesenseRatInfo.getRatTxtimes() * 60;
                break;
            }
        }
        return this.mCurrectRatInfo;
    }

    private Notification getNotification(String str, int i) {
        PendingIntent activity = PendingIntent.getActivity(this, 0, new Intent(this, (Class<?>) RfDesenseTxTest.class), 0);
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, EmApplication.getSilentNotificationChannelID());
        builder.setSmallIcon(R.drawable.cross);
        builder.setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.cross));
        builder.setContentIntent(activity);
        builder.setContentTitle(str);
        return builder.build();
    }

    private NotificationManager getNotificationManager() {
        return (NotificationManager) getSystemService("notification");
    }

    private void initRatList() {
        for (int i = 0; i < RfDesenseTxTest.mRatName.length; i++) {
            RfDesenseRatInfo rfDesenseRatInfo = new RfDesenseRatInfo();
            rfDesenseRatInfo.setRatName(RfDesenseTxTest.mRatName[i]);
            rfDesenseRatInfo.setRatCmdStart(RfDesenseTxTest.mRatCmdStart[i]);
            rfDesenseRatInfo.setRatCmdStop(RfDesenseTxTest.mRatCmdStop[i]);
            rfDesenseRatInfo.setRatPowerRead(RfDesenseTxTest.mRatCmdPowerRead[i]);
            rfDesenseRatInfo.setRatCheckState(false);
            rfDesenseRatInfo.setRatSendState(false);
            this.mRatList.add(rfDesenseRatInfo);
        }
    }

    private void parseIntentData(String str) {
        int i;
        String[] strArrSplit = str.split("\\[|\\]");
        int i2 = 1001;
        if (strArrSplit.length == 0) {
            sendResultToClient(1001, "null]");
            return;
        }
        int i3 = 0;
        while (i3 < strArrSplit.length) {
            if (strArrSplit[i3].isEmpty()) {
                i = i2;
            } else {
                Elog.d("RfDesense/TxTestService", "RfService ->rat = " + strArrSplit[i3]);
                RfDesenseServiceData rfDesenseServiceData = new RfDesenseServiceData();
                String[] strArrSplit2 = strArrSplit[i3].split(",");
                if (strArrSplit2.length == 1) {
                    try {
                        int iIntValue = Integer.valueOf(strArrSplit2[0]).intValue();
                        if (iIntValue == -1) {
                            this.mTestCount = 1;
                        } else {
                            this.mTestCount = iIntValue;
                        }
                        i = i2;
                    } catch (Exception e) {
                        if (strArrSplit2[0].equals("TEST")) {
                            sendResultToClient(1003, "");
                            return;
                        }
                        sendResultToClient(i2, strArrSplit2[0] + "]");
                        return;
                    }
                } else {
                    if (strArrSplit2.length < 5) {
                        sendResultToClient(i2, strArrSplit2[0] + "]");
                        return;
                    }
                    rfDesenseServiceData.setRat(strArrSplit2[0]);
                    RfDesenseServiceData rfDesenseServiceData2 = this.mRfdesenseDefaultData.get(strArrSplit2[0] + " " + strArrSplit2[1]);
                    if (rfDesenseServiceData2 == null) {
                        sendResultToClient(i2, strArrSplit2[0] + "]");
                        return;
                    }
                    rfDesenseServiceData.setBand(rfDesenseServiceData2.getBand());
                    try {
                        int iIntValue2 = Integer.valueOf(strArrSplit2[2]).intValue();
                        if (iIntValue2 == -1) {
                            rfDesenseServiceData.setChannel(rfDesenseServiceData2.getChannel());
                        } else {
                            rfDesenseServiceData.setChannel(iIntValue2);
                        }
                        int iIntValue3 = Integer.valueOf(strArrSplit2[3]).intValue();
                        if (iIntValue3 == -1) {
                            rfDesenseServiceData.setPower(rfDesenseServiceData2.getPower());
                        } else {
                            rfDesenseServiceData.setPower(iIntValue3);
                        }
                        int iIntValue4 = Integer.valueOf(strArrSplit2[4]).intValue();
                        if (iIntValue4 == -1) {
                            rfDesenseServiceData.setTime(rfDesenseServiceData2.getTime());
                        } else {
                            rfDesenseServiceData.setTime(iIntValue4);
                        }
                        if (strArrSplit2.length > 5) {
                            rfDesenseServiceData.setBw(Integer.valueOf(strArrSplit2[5]).intValue());
                        }
                        if (strArrSplit2.length > 6) {
                            rfDesenseServiceData.setRb(Integer.valueOf(strArrSplit2[6]).intValue());
                        }
                        if (strArrSplit2.length > 7 || !(strArrSplit2.length <= 5 || strArrSplit2[0].equals(RfDesenseTxTest.mRatName[3]) || strArrSplit2[0].equals(RfDesenseTxTest.mRatName[4]))) {
                            sendResultToClient(1001, strArrSplit2[0] + "]");
                            return;
                        }
                        this.mRfDesenseServiceData.add(rfDesenseServiceData);
                        i = 1001;
                    } catch (Exception e2) {
                        sendResultToClient(1001, strArrSplit2[0] + "]");
                        return;
                    }
                }
            }
            i3++;
            i2 = i;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rebootModem() {
        EmUtils.rebootModem();
        EmUtils.setAirplaneModeEnabled(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendAtCommand(String str, int i) {
        EmUtils.invokeOemRilRequestStringsEm(new String[]{str, ""}, this.mServiceHandler.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void txTestStop(int i) {
        RfDesenseRatInfo rfDesenseRatInfo = this.mCurrectRatInfo;
        if (rfDesenseRatInfo == null) {
            Elog.d("RfDesense/TxTestService", "RfService ->mCurrectRatInfo is null");
            updateUIView();
            return;
        }
        sendAtCommand(rfDesenseRatInfo.getRatCmdStop(), i);
        Elog.d("RfDesense/TxTestService", "RfService ->stop: " + this.mCurrectRatInfo.getRatName() + " " + this.mCurrectRatInfo.getRatCmdStop());
    }

    private void updateRatList() {
        for (int i = 0; i < this.mRfDesenseServiceData.size(); i++) {
            for (int i2 = 0; i2 < RfDesenseTxTest.mRatName.length; i2++) {
                if (RfDesenseTxTest.mRatName[i2].equals(this.mRfDesenseServiceData.get(i).getRat())) {
                    this.mRatList.get(i2).setRatCmdLteBwRb(this.mRfDesenseServiceData.get(i).getBw(), this.mRfDesenseServiceData.get(i).getRb());
                    this.mRatList.get(i2).setRatCmdStart(RfDesenseTxTest.mRatName[i2], this.mRfDesenseServiceData.get(i).getChannel(), this.mRfDesenseServiceData.get(i).getPower(), this.mRfDesenseServiceData.get(i).getBand());
                    this.mRatList.get(i2).setRatTxtimes(this.mRfDesenseServiceData.get(i).getTime());
                    Elog.d("RfDesense/TxTestService", "RfService ->mRatInfo send = " + RfDesenseTxTest.mRatName[i2] + "," + this.mRatList.get(i2).getRatCmdStart() + ",time = " + this.mRatList.get(i2).getRatTxtimes());
                    this.mRatList.get(i2).setRatCheckState(true);
                    break;
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUIView() {
        this.mIsSending = false;
        for (int i = 0; i < RfDesenseTxTest.mRatName.length; i++) {
            this.mRatList.get(i).setRatSendState(false);
        }
    }

    void initDefaultSuppotData() {
        this.mRfdesenseDefaultData.put("GSM 850", new RfDesenseServiceData(190, 5, 128, 10));
        this.mRfdesenseDefaultData.put("GSM 900", new RfDesenseServiceData(62, 5, 2, 10));
        this.mRfdesenseDefaultData.put("GSM 1800", new RfDesenseServiceData(MediaPlayer2.MEDIA_INFO_VIDEO_TRACK_LAGGING, 0, 8, 10));
        this.mRfdesenseDefaultData.put("GSM 1900", new RfDesenseServiceData(661, 0, 16, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND1", new RfDesenseServiceData(9750, 23, 1, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND2", new RfDesenseServiceData(9400, 23, 2, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND3", new RfDesenseServiceData(1112, 23, 3, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND4", new RfDesenseServiceData(1412, 23, 4, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND5", new RfDesenseServiceData(4182, 23, 5, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND6", new RfDesenseServiceData(4175, 23, 6, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND7", new RfDesenseServiceData(2175, 23, 7, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND8", new RfDesenseServiceData(2787, 23, 8, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND9", new RfDesenseServiceData(8837, 23, 9, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND10", new RfDesenseServiceData(3025, 23, 10, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND11", new RfDesenseServiceData(3524, 23, 11, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND12", new RfDesenseServiceData(3647, 23, 12, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND13", new RfDesenseServiceData(3805, 23, 13, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND14", new RfDesenseServiceData(3905, 23, 14, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND19", new RfDesenseServiceData(337, 23, 19, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND20", new RfDesenseServiceData(4350, 23, 20, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND21", new RfDesenseServiceData(487, 23, 21, 10));
        this.mRfdesenseDefaultData.put("WCDMA BAND22", new RfDesenseServiceData(4625, 23, 22, 10));
        this.mRfdesenseDefaultData.put("TDSCDMA BAND34", new RfDesenseServiceData(10087, 24, 1, 10));
        this.mRfdesenseDefaultData.put("TDSCDMA BAND39", new RfDesenseServiceData(9500, 24, 6, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND1", new RfDesenseServiceData(19500, 23, 1, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND2", new RfDesenseServiceData(18800, 23, 2, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND3", new RfDesenseServiceData(17475, 23, 3, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND4", new RfDesenseServiceData(17325, 23, 4, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND5", new RfDesenseServiceData(8365, 23, 5, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND6", new RfDesenseServiceData(8300, 23, 46, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND7", new RfDesenseServiceData(25350, 23, 7, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND8", new RfDesenseServiceData(8975, 23, 8, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND9", new RfDesenseServiceData(17674, 23, 9, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND10", new RfDesenseServiceData(17400, 23, 10, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND11", new RfDesenseServiceData(14379, 23, 11, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND12", new RfDesenseServiceData(7075, 23, 12, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND13", new RfDesenseServiceData(7820, 23, 13, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND14", new RfDesenseServiceData(7930, 23, 14, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND17", new RfDesenseServiceData(7100, 23, 17, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND18", new RfDesenseServiceData(8225, 23, 18, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND19", new RfDesenseServiceData(8375, 23, 19, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND20", new RfDesenseServiceData(8470, 23, 20, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND21", new RfDesenseServiceData(14554, 23, 21, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND22", new RfDesenseServiceData(34500, 23, 22, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND23", new RfDesenseServiceData(20100, 23, 23, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND24", new RfDesenseServiceData(16435, 23, 24, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND25", new RfDesenseServiceData(18825, 23, 25, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND26", new RfDesenseServiceData(8315, 23, 26, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND27", new RfDesenseServiceData(8155, 23, 27, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND28", new RfDesenseServiceData(7255, 23, 28, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND30", new RfDesenseServiceData(23100, 23, 30, 10));
        this.mRfdesenseDefaultData.put("LTE(FDD) BAND31", new RfDesenseServiceData(4550, 23, 31, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND33", new RfDesenseServiceData(19100, 23, 33, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND34", new RfDesenseServiceData(20175, 23, 34, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND35", new RfDesenseServiceData(18800, 23, 35, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND36", new RfDesenseServiceData(19600, 23, 36, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND37", new RfDesenseServiceData(19200, 23, 37, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND38", new RfDesenseServiceData(25950, 23, 38, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND39", new RfDesenseServiceData(19000, 23, 39, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND40", new RfDesenseServiceData(23500, 23, 40, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND41", new RfDesenseServiceData(25930, 23, 41, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND42", new RfDesenseServiceData(35000, 23, 42, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND43", new RfDesenseServiceData(37000, 23, 43, 10));
        this.mRfdesenseDefaultData.put("LTE(TDD) BAND44", new RfDesenseServiceData(7530, 23, 44, 10));
        this.mRfdesenseDefaultData.put("CDMA(1X) BC0", new RfDesenseServiceData(RfDesenseTxTestCdma.DEFAULT_CHANNEL_VALUE, 83, 0, 10));
        this.mErrorCodeMapping.put(1000, "argument parse pass and start tx");
        this.mErrorCodeMapping.put(1001, "[rat,");
        this.mErrorCodeMapping.put(1002, "service is tx ing,please try again later");
        this.mErrorCodeMapping.put(1003, "service works well");
        this.mErrorCodeMapping.put(2000, "test finished");
        this.mErrorCodeMapping.put(Integer.valueOf(RadioStateManager.MSG_RADIO_STATE_CHANGED), "test start ret");
        this.mErrorCodeMapping.put(2002, "test failed");
        this.mErrorCodeMapping.put(2003, "test stoped");
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        Elog.d("RfDesense/TxTestService", "RfService -> onCreate()");
        TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
        this.mTelephonyManager = telephonyManager;
        telephonyManager.listen(this.mPhoneStateListener, 8388608);
        startForeground(1, getNotification("Rfdesense service started...", 0));
    }

    @Override // android.app.Service
    public void onDestroy() {
        Elog.d("RfDesense/TxTestService", "RfService -> onDestroy");
        stopForeground(true);
        this.mTelephonyManager.listen(this.mPhoneStateListener, 0);
        this.mState = 2;
        if (this.mIsSending) {
            sendResultToClient(2003, "");
        }
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        Elog.d("RfDesense/TxTestService", "RfService -> onStartCommand()");
        if (this.mIsSending) {
            sendResultToClient(1002, "");
            return 2;
        }
        String stringExtra = intent.getStringExtra(RfDesenseBroadcastReceiver.ARGUMENTS);
        if (stringExtra == null) {
            stringExtra = "[GSM,850,192,5,5][TDSCDMA,BAND34,10087,24,10][WCDMA,BAND1,9612,23,10][LTE(FDD),BAND1,19500,24,10][LTE(TDD),BAND34,20175,24,10][CDMA(1X),BC0,384,83,10][10]";
            Elog.d("RfDesense/TxTestService", "RfService -> use default arguments");
        }
        String strReplaceAll = stringExtra.replaceAll(" ", "");
        Elog.d("RfDesense/TxTestService", "RfService -> arguments: " + strReplaceAll);
        this.mRatList.clear();
        this.mRfDesenseServiceData.clear();
        this.mErrorCodeKey = 1000;
        initDefaultSuppotData();
        initRatList();
        parseIntentData(strReplaceAll);
        if (this.mErrorCodeKey == 1000) {
            updateRatList();
            sendResultToClient(1000, "");
            startTx();
        }
        return 2;
    }

    void sendResultToClient(int i, String str) {
        String str2;
        this.mErrorCodeKey = i;
        RfDesenseRatInfo rfDesenseRatInfo = this.mCurrectRatInfo;
        String ratName = rfDesenseRatInfo != null ? rfDesenseRatInfo.getRatName() : "";
        if (i == 2002 || i == 2001) {
            str2 = "[count," + this.mTestCountSended + "][rat," + ratName + "]";
        } else {
            str2 = this.mErrorCodeMapping.get(Integer.valueOf(i)) + str;
        }
        Intent intent = new Intent();
        intent.setAction("com.mediatek.engineermode.rfdesenseServiceResult");
        intent.putExtra("result_id", i);
        intent.putExtra("result_info", str2);
        sendBroadcast(intent, Manifest.permission.permission);
        Elog.d("RfDesense/TxTestService", "RfService ->send " + i + " : " + this.mErrorCodeMapping.get(Integer.valueOf(i)) + str2);
    }

    void startAirplane() {
        Elog.d("RfDesense/TxTestService", "start entry Airplane...");
        EmUtils.setAirplaneModeEnabled(true);
    }

    void startTx() {
        RfDesenseRatInfo currectRatInfo = getCurrectRatInfo();
        this.mCurrectRatInfo = currectRatInfo;
        if (currectRatInfo == null) {
            Elog.d("RfDesense/TxTestService", "RfService ->you must set at least one rat to tx ");
            return;
        }
        Elog.d("RfDesense/TxTestService", "RfService ->mCurrectRatInfo = " + this.mCurrectRatInfo.getRatCmdStart());
        this.mIsSending = true;
        this.mTestCountSended = 0;
        this.mTestDurationSended = 0L;
        this.mState = 1;
        Elog.d("RfDesense/TxTestService", "RfService ->mTestCount = " + this.mTestCount);
        rebootModem();
    }

    void stopTx() {
        this.mIsSending = false;
        this.mServiceHandler.removeCallbacksAndMessages(null);
        rebootModem();
        super.onDestroy();
    }
}

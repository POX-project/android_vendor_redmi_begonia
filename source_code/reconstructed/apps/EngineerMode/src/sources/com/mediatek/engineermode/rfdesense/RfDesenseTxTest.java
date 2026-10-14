package com.mediatek.engineermode.rfdesense;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.RadioStateManager;
import com.mediatek.engineermode.RatConfiguration;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTest extends Activity implements View.OnClickListener, AdapterView.OnItemClickListener, RadioStateManager.RadioListener {
    public static final int CDMD_MODE_1X = 1;
    public static final int CDMD_MODE_EVDO = 2;
    public static final String DEFAULT_CDMA_EVDO_ATCMD_93before = "AT+ERFTX=1,384,0,83,1";
    public static final int DEFAULT_CHECK_LIMIT = 2;
    public static final int DEFAULT_READBACK_INTREVAL = 5;
    public static final int DEFAULT_TEST_COUNT = 1;
    public static final int DEFAULT_TEST_DURATION = 10;
    private static final int DIG_EXIT_TEST_RESET_MD = 2002;
    public static final int HINT = 0;
    public static final String KEY_CDMA1X_ATCMD_ANT_SWITCH = "cdma1x_at_cmd_ant_switch";
    public static final String KEY_CDMA_1X_ATCMD = "cdma_at_cmd";
    public static final String KEY_CDMA_EVDO_ATCMD = "cdma_evdo_at_cmd";
    public static final String KEY_CHECK_LIMIT = "check_limit";
    public static final String KEY_EVDO_ATCMD_ANT_SWITCH = "evdo_at_cmd_ant_switch";
    public static final String KEY_GSM_ATCMD = "gsm_at_cmd";
    public static final String KEY_GSM_ATCMD_ANT_SWITCH = "gsm_at_cmd_ant_switch";
    public static final String KEY_LTE_FDD_ATCMD = "lte_fdd_at_cmd";
    public static final String KEY_LTE_TDD_ATCMD = "lte_tdd_at_cmd";
    public static final String KEY_NR_ATCMD = "nr_at_cmd";
    public static final String KEY_NR_ATCMD_ANT_SWITCH = "nr_at_cmd_ant_switch";
    public static final String KEY_READBACK_INTREVAL = "readback_interval";
    public static final String KEY_TDSCDMA_ATCMD = "tdscdma_at_cmd";
    public static final String KEY_TDSCDMA_ATCMD_ANT_SWITCH = "tdscdma_at_cmd_ant_switch";
    public static final String KEY_TEST_COUNT = "test_count";
    public static final String KEY_TEST_DURATION = "test_duration";
    public static final String KEY_WCDMA_ATCMD = "wcdma_at_cmd";
    public static final String KEY_WCDMA_ATCMD_ANT_SWITCH = "wcdma_at_cmd_ant_switch";
    public static final int MSG_ANT_SWITCH = 18;
    public static final int MSG_CONTINUE_TX = 2;
    public static final int MSG_ECSRA = 14;
    public static final int MSG_EWMPOLICY_TDSCDMA = 12;
    public static final int MSG_EWMPOLICY_WCDMA = 13;
    public static final int MSG_FORCE_TX_POWER_READ_URC = 7;
    public static final int MSG_NEXT_RAT = 4;
    public static final int MSG_READ_POWER = 10;
    public static final int MSG_START_TX = 1;
    public static final int MSG_START_TX_TEST = 16;
    public static final int MSG_STOP_ALL_TX = 3;
    public static final int MSG_SWITCH_RAT = 8;
    public static final int MSG_SWITCH_RAT_DONE = 15;
    public static final int MSG_TURN_OFF_RF = 9;
    public static final int MSG_TURN_ON_RF = 6;
    public static final int MSG_UPDATE_BUTTON = 5;
    public static final String PREF_FILE = "rfdesense_tx_test";
    public static final int RAT_INDEX_CDMA_1X = 6;
    public static final int RAT_INDEX_CDMA_EVDO = 5;
    public static final int RAT_INDEX_GSM = 0;
    public static final int RAT_INDEX_LTE_FDD = 3;
    public static final int RAT_INDEX_LTE_TDD = 4;
    public static final int RAT_INDEX_NR = 7;
    public static final int RAT_INDEX_TDSCDMA = 1;
    public static final int RAT_INDEX_WCDMA = 2;
    public static final int SIM_CARD_INSERT = 1;
    public static final int STATE_NONE = 0;
    public static final int STATE_STARTED = 1;
    public static final int STATE_STOPPED = 2;
    public static final String TAG = "RfDesense/TxTest";
    private EditText mEtCheckLimit;
    private EditText mEtReadbackInterval;
    private EditText mEtTestCount;
    private EditText mEtTestDuration;
    private Button mExitButton;
    private RadioStateManager mRadioStateManager;
    private Button mStartButton;
    private Button mStopButton;
    private TextView mTvCheckLimit;
    private TextView mTvReadbackInterval;
    private TextView mTvTxStatus;
    public static String[] mRatName = {"GSM", "TDSCDMA", "WCDMA", "LTE(FDD)", "LTE(TDD)", "CDMA(EVDO)", "CDMA(1X)", "NR"};
    public static String[] mRatCmdAntSwitch = {"0", "0", "0", "0", "0", "0", "0", "0"};
    public static final String DEFAULT_GSM_ATCMD = "AT+ERFTX=2,1,190,4100,128,5,6,0";
    public static final String DEFAULT_TDSCDMA_ATCMD = "AT+ERFTX=0,0,1,10087,24";
    public static final String DEFAULT_WCDMA_ATCMD = "AT+ERFTX=0,0,1,9750,23";
    public static final String DEFAULT_LTE_FDD_ATCMD = "AT+ERFTX=6,0,1,3,3,17475,1,0,0,0,1,0,23";
    public static final String DEFAULT_LTE_TDD_ATCMD = "AT+ERFTX=6,0,1,38,3,25950,0,0,0,0,1,0,23";
    public static final String DEFAULT_CDMA_EVDO_ATCMD = "AT+ERFTX=13,4,384,0,83";
    public static final String DEFAULT_CDMA_1X_ATCMD = "AT+ECRFTX=1,384,0,83,0";
    public static final String DEFAULT_NR_ATCMD = "AT+EGMC=1,\"NrForcedTx\",2,1,20,2";
    public static String[] mRatCmdStart = {DEFAULT_GSM_ATCMD, DEFAULT_TDSCDMA_ATCMD, DEFAULT_WCDMA_ATCMD, DEFAULT_LTE_FDD_ATCMD, DEFAULT_LTE_TDD_ATCMD, DEFAULT_CDMA_EVDO_ATCMD, DEFAULT_CDMA_1X_ATCMD, DEFAULT_NR_ATCMD};
    public static String[] mRatCmdStop = {"AT+ERFTX=2,0", "AT+ERFTX=0,1", "AT+ERFTX=0,1", "AT+ERFTX=6,0,0", "AT+ERFTX=6,0,0", "AT+ERFTX=13,5", "AT+ECRFTX=0", "AT+EGMC=1,\"NrForcedTx\",0"};
    public static String[] mRatCmdPowerRead = {"AT+ERFTX=2,6", "AT+ERFTX=0,3", "AT+ERFTX=0,3", "AT+ERFTX=6,1", "AT+ERFTX=6,1", "AT+ERFTX=13,3", "AT+ERFTX=13,3", "AT+EGMC=0,\"NrFetchTxPwr\""};
    public static RfDesenseRatInfo mCurrectRatInfo = null;
    public static int phoneid = 0;
    public static long mTestDuration = 0;
    public static long mTestCount = 0;
    public static long mTestDurationSended = 0;
    public static long mTestCountSended = 0;
    public static long mCheckLimit = 0;
    public static long mReadbackInterval = 0;
    private static int mKeyStates = 0;
    private static int mTestExitStatus = 0;
    public String[] mRatBand = {"", "", "", "", "", "", "", ""};
    public String[] mRatPowerSet = {"", "", "", "", "", "", "", ""};
    public RfDesenseRatAdapter mFileListAdapter = null;
    public ArrayList<RfDesenseRatInfo> mRatList = new ArrayList<>();
    private int mRadioStatesLast = -1;
    private int[] band850_900 = {0, 0, 0, 0, 0, 33, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5};
    private int[] band1800_1900 = {30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0};
    private String[] mGSMBand = {"850", "P900", "E900", "R900", "1800", "1900"};
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTest.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String ratband;
            String ratPowerSet;
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i = message.what;
            if (i == 1) {
                if (asyncResult.exception == null) {
                    Elog.d(RfDesenseTxTest.TAG, RfDesenseTxTest.mCurrectRatInfo.getRatName() + " start cmd ok");
                    RfDesenseTxTest.this.showTxStatusUI(RfDesenseTxTest.mCurrectRatInfo.getRatName() + " start cmd ok\n");
                } else {
                    Elog.e(RfDesenseTxTest.TAG, RfDesenseTxTest.mCurrectRatInfo.getRatName() + " start cmd failed");
                    RfDesenseTxTest.this.showTxStatusUI(RfDesenseTxTest.mCurrectRatInfo.getRatName() + " start cmd failed\n");
                }
                RfDesenseTxTest.this.mHandler.sendMessageDelayed(Message.obtain(RfDesenseTxTest.this.mHandler, 2), 1000L);
                return;
            }
            if (i == 2) {
                if (RfDesenseTxTest.mKeyStates == 2) {
                    RfDesenseTxTest.this.mHandler.removeMessages(2);
                    RfDesenseTxTest.this.txTestStop(3);
                    return;
                }
                RfDesenseTxTest.mTestDurationSended += RfDesenseTxTest.mReadbackInterval;
                if (RfDesenseTxTest.mTestDurationSended > RfDesenseTxTest.mTestDuration) {
                    RfDesenseTxTest.mTestDurationSended = 0L;
                    RfDesenseTxTest.this.txTestStop(4);
                    return;
                }
                RfDesenseTxTest.this.mHandler.sendMessageDelayed(Message.obtain(RfDesenseTxTest.this.mHandler, 2), RfDesenseTxTest.mReadbackInterval * 1000);
                if (!FeatureSupport.is93Modem() || RfDesenseTxTest.mCurrectRatInfo == null || RfDesenseTxTest.mCurrectRatInfo.getRatCmdPowerRead().equals("")) {
                    return;
                }
                Elog.d(RfDesenseTxTest.TAG, "send read tx power:" + RfDesenseTxTest.mCurrectRatInfo.getRatCmdPowerRead());
                RfDesenseTxTest.this.sendAtCommand(RfDesenseTxTest.mCurrectRatInfo.getRatCmdPowerRead(), 10);
                return;
            }
            if (i == 3) {
                if (asyncResult.exception == null) {
                    Elog.d(RfDesenseTxTest.TAG, "Stop all succeed");
                } else {
                    Elog.e(RfDesenseTxTest.TAG, "Stop all failed");
                }
                RfDesenseTxTest.this.updateUIView();
                return;
            }
            if (i == 4) {
                if (asyncResult.exception == null) {
                    Elog.d(RfDesenseTxTest.TAG, "stop cmd ok");
                    RfDesenseTxTest.this.showTxStatusUI(RfDesenseTxTest.mCurrectRatInfo.getRatName() + " stop cmd ok \n");
                } else {
                    Elog.e(RfDesenseTxTest.TAG, "stop cmd failed");
                    RfDesenseTxTest.this.showTxStatusUI(RfDesenseTxTest.mCurrectRatInfo.getRatName() + " stop cmd failed \n");
                }
                RfDesenseTxTest.mCurrectRatInfo = RfDesenseTxTest.this.getCurrectRatInfo();
                if (RfDesenseTxTest.mCurrectRatInfo != null) {
                    RfDesenseTxTest.this.mHandler.sendMessageDelayed(Message.obtain(RfDesenseTxTest.this.mHandler, 16), 2000L);
                    return;
                }
                RfDesenseTxTest.mTestCountSended++;
                Elog.d(RfDesenseTxTest.TAG, "send done,mTestCountSended = " + RfDesenseTxTest.mTestCountSended);
                if (RfDesenseTxTest.mTestCountSended >= RfDesenseTxTest.mTestCount) {
                    RfDesenseTxTest.this.showTxStatusUI("send all rat done\n");
                    RfDesenseTxTest.this.updateUIView();
                    return;
                }
                for (int i2 = 0; i2 < RfDesenseTxTest.this.mRatList.size(); i2++) {
                    RfDesenseTxTest.this.mRatList.get(i2).setRatSendState(false);
                }
                RfDesenseTxTest.this.mHandler.sendMessageDelayed(Message.obtain(RfDesenseTxTest.this.mHandler, 16), 2000L);
                return;
            }
            if (i == 5) {
                RfDesenseTxTest.this.updateButtons();
                return;
            }
            if (i == 7) {
                int[] iArr = (int[]) asyncResult.result;
                float f = iArr[1] / 8.0f;
                int iIntValue = Integer.valueOf(RfDesenseTxTest.mCurrectRatInfo.getRatPowerSet()).intValue();
                int i3 = Integer.parseInt(RfDesenseTxTest.mCurrectRatInfo.getRatband());
                if (iArr[0] == 0) {
                    ratband = RfDesenseTxTest.this.mGSMBand[i3];
                    String str = "PCL" + iIntValue + "(";
                    if (i3 == 0 || i3 == 1 || i3 == 2 || i3 == 3) {
                        ratPowerSet = str + RfDesenseTxTest.this.band850_900[iIntValue] + ")";
                        iIntValue = RfDesenseTxTest.this.band850_900[iIntValue];
                    } else {
                        ratPowerSet = str + RfDesenseTxTest.this.band1800_1900[iIntValue] + ")";
                        iIntValue = RfDesenseTxTest.this.band1800_1900[iIntValue];
                    }
                } else {
                    ratband = RfDesenseTxTest.mCurrectRatInfo.getRatband();
                    ratPowerSet = RfDesenseTxTest.mCurrectRatInfo.getRatPowerSet();
                }
                String str2 = Math.abs(((float) iIntValue) - f) > ((float) RfDesenseTxTest.mCheckLimit) ? "failed\n" : "succeed\n";
                RfDesenseTxTest.this.showTxStatusUI(String.format("%-20s %-15s %-10s", RfDesenseTxTest.mCurrectRatInfo.getRatName() + "(b" + ratband + ")", ratPowerSet, Float.valueOf(f)));
                if (str2.equals("failed\n")) {
                    RfDesenseTxTest.this.showTxStatusUI(String.format("%10s", str2));
                    return;
                } else {
                    RfDesenseTxTest.this.showTxStatusUI(String.format("%10s", str2));
                    return;
                }
            }
            if (i == 10) {
                if (asyncResult.exception != null) {
                    Elog.d(RfDesenseTxTest.TAG, "read tx power failed");
                    return;
                }
                Elog.d(RfDesenseTxTest.TAG, "read tx power succeed");
                String[] strArr = (String[]) asyncResult.result;
                if (strArr != null && strArr.length > 0 && RfDesenseTxTest.mCurrectRatInfo != null) {
                    Elog.d(RfDesenseTxTest.TAG, "value = " + strArr[0]);
                    float f2 = Float.parseFloat(strArr[0].split(",")[1]);
                    int iIntValue2 = Integer.valueOf(RfDesenseTxTest.mCurrectRatInfo.getRatPowerSet()).intValue();
                    String ratband2 = RfDesenseTxTest.mCurrectRatInfo.getRatband();
                    String str3 = Math.abs(((float) iIntValue2) - f2) > ((float) RfDesenseTxTest.mCheckLimit) ? "failed\n" : "succeed\n";
                    RfDesenseTxTest.this.showTxStatusUI(String.format("%-20s %-15s %-10s", RfDesenseTxTest.mCurrectRatInfo.getRatName() + "(b" + ratband2 + ")", Integer.valueOf(iIntValue2), Float.valueOf(f2)));
                    if (str3.equals("failed\n")) {
                        RfDesenseTxTest.this.showTxStatusUI(String.format("%10s", str3));
                    } else {
                        RfDesenseTxTest.this.showTxStatusUI(String.format("%10s", str3));
                    }
                }
                return;
            }
            if (i != 16) {
                if (i != 18) {
                    return;
                }
                if (asyncResult.exception != null) {
                    Elog.e(RfDesenseTxTest.TAG, "switch ant status failed");
                    return;
                }
                Elog.d(RfDesenseTxTest.TAG, "switch ant status succeed");
                RfDesenseTxTest.mCurrectRatInfo.setRatSendState(true);
                RfDesenseTxTest.this.sendAtCommand(RfDesenseTxTest.mCurrectRatInfo.getRatCmdStart(), 1);
                Elog.d(RfDesenseTxTest.TAG, "send: " + RfDesenseTxTest.mCurrectRatInfo.getRatName() + " " + RfDesenseTxTest.mCurrectRatInfo.getRatCmdStart());
                return;
            }
            Elog.d(RfDesenseTxTest.TAG, "start tx test");
            RfDesenseTxTest.mCurrectRatInfo = RfDesenseTxTest.this.getCurrectRatInfo();
            if (RfDesenseTxTest.mCurrectRatInfo == null) {
                Elog.w(RfDesenseTxTest.TAG, "mCurrectRatInfo is null");
                return;
            }
            if (!RfDesenseTxTest.mCurrectRatInfo.getRatCmdAntSwitch().equals("0")) {
                RfDesenseTxTest.this.sendAtCommand(RfDesenseTxTest.mCurrectRatInfo.getRatCmdAntSwitch(), 18);
                Elog.d(RfDesenseTxTest.TAG, "switch ant statrus: " + RfDesenseTxTest.mCurrectRatInfo.getRatCmdAntSwitch());
                return;
            }
            RfDesenseTxTest.mCurrectRatInfo.setRatSendState(true);
            RfDesenseTxTest.this.sendAtCommand(RfDesenseTxTest.mCurrectRatInfo.getRatCmdStart(), 1);
            Elog.d(RfDesenseTxTest.TAG, "send: " + RfDesenseTxTest.mCurrectRatInfo.getRatName() + " " + RfDesenseTxTest.mCurrectRatInfo.getRatCmdStart());
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public RfDesenseRatInfo getCurrectRatInfo() {
        mCurrectRatInfo = null;
        for (int i = 0; i < this.mRatList.size(); i++) {
            if (this.mRatList.get(i).getRatCheckState().booleanValue() && !this.mRatList.get(i).getRatSendState().booleanValue()) {
                mCurrectRatInfo = this.mRatList.get(i);
                break;
            }
        }
        return mCurrectRatInfo;
    }

    private void restoreAtCmdState() {
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE, 0);
        String[] strArr = mRatCmdStart;
        strArr[0] = sharedPreferences.getString(KEY_GSM_ATCMD, strArr[0]);
        String[] strArr2 = mRatCmdStart;
        strArr2[1] = sharedPreferences.getString(KEY_TDSCDMA_ATCMD, strArr2[1]);
        String[] strArr3 = mRatCmdStart;
        strArr3[2] = sharedPreferences.getString(KEY_WCDMA_ATCMD, strArr3[2]);
        String[] strArr4 = mRatCmdStart;
        strArr4[3] = sharedPreferences.getString(KEY_LTE_FDD_ATCMD, strArr4[3]);
        String[] strArr5 = mRatCmdStart;
        strArr5[4] = sharedPreferences.getString(KEY_LTE_TDD_ATCMD, strArr5[4]);
        String[] strArr6 = mRatCmdStart;
        strArr6[5] = sharedPreferences.getString(KEY_CDMA_EVDO_ATCMD, strArr6[5]);
        String[] strArr7 = mRatCmdStart;
        strArr7[6] = sharedPreferences.getString(KEY_CDMA_1X_ATCMD, strArr7[6]);
        String[] strArr8 = mRatCmdStart;
        strArr8[7] = sharedPreferences.getString(KEY_NR_ATCMD, strArr8[7]);
        String[] strArr9 = mRatCmdAntSwitch;
        strArr9[0] = sharedPreferences.getString(KEY_GSM_ATCMD_ANT_SWITCH, strArr9[0]);
        String[] strArr10 = mRatCmdAntSwitch;
        strArr10[1] = sharedPreferences.getString(KEY_TDSCDMA_ATCMD_ANT_SWITCH, strArr10[1]);
        String[] strArr11 = mRatCmdAntSwitch;
        strArr11[2] = sharedPreferences.getString(KEY_WCDMA_ATCMD_ANT_SWITCH, strArr11[2]);
        String[] strArr12 = mRatCmdAntSwitch;
        strArr12[5] = sharedPreferences.getString(KEY_EVDO_ATCMD_ANT_SWITCH, strArr12[5]);
        String[] strArr13 = mRatCmdAntSwitch;
        strArr13[6] = sharedPreferences.getString(KEY_CDMA1X_ATCMD_ANT_SWITCH, strArr13[6]);
        String[] strArr14 = mRatCmdAntSwitch;
        strArr14[7] = sharedPreferences.getString(KEY_NR_ATCMD_ANT_SWITCH, strArr14[7]);
        this.mRatBand[0] = sharedPreferences.getInt(RfDesenseTxTestGsm.KEY_BAND, 0) + "";
        this.mRatBand[1] = getResources().getStringArray(R.array.rf_desense_tx_test_td_band_values)[sharedPreferences.getInt(RfDesenseTxTestTd.KEY_TDD_BAND, 0)];
        this.mRatBand[2] = getResources().getStringArray(R.array.rf_desense_tx_test_fd_band_values)[sharedPreferences.getInt(RfDesenseTxTestTd.KEY_FDD_BAND, 0)];
        this.mRatBand[3] = getResources().getStringArray(R.array.rf_desense_tx_test_lte_fdd_band_values)[sharedPreferences.getInt(RfDesenseTxTestLte.KEY_FDD_BAND, 2)];
        this.mRatBand[4] = getResources().getStringArray(R.array.rf_desense_tx_test_lte_tdd_band_values)[sharedPreferences.getInt(RfDesenseTxTestLte.KEY_TDD_BAND, 5)];
        this.mRatBand[5] = sharedPreferences.getInt(RfDesenseTxTestCdma.KEY_EVDO_BAND, 0) + "";
        this.mRatBand[6] = sharedPreferences.getInt(RfDesenseTxTestCdma.KEY_1X_BAND, 0) + "";
        this.mRatBand[7] = RfDesenseTxTestNR.mBandMapping[sharedPreferences.getInt(RfDesenseTxTestNR.KEY_NR_BAND, 0)] + "";
        this.mRatPowerSet[0] = sharedPreferences.getString(RfDesenseTxTestGsm.KEY_POWER, "5");
        this.mRatPowerSet[1] = sharedPreferences.getString(RfDesenseTxTestTd.KEY_TDD_POWER, "24");
        this.mRatPowerSet[2] = sharedPreferences.getString(RfDesenseTxTestTd.KEY_FDD_POWER, "23");
        this.mRatPowerSet[3] = sharedPreferences.getString(RfDesenseTxTestLte.KEY_FDD_POWER, "23");
        this.mRatPowerSet[4] = sharedPreferences.getString(RfDesenseTxTestLte.KEY_TDD_POWER, "23");
        this.mRatPowerSet[5] = sharedPreferences.getString(RfDesenseTxTestCdma.KEY_EVDO_POWER, "23");
        this.mRatPowerSet[6] = sharedPreferences.getString(RfDesenseTxTestCdma.KEY_1X_POWER, "23");
        this.mRatPowerSet[7] = sharedPreferences.getString(RfDesenseTxTestNR.KEY_NR_POWER, "23");
    }

    private void restoreConfigureState() {
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE, 0);
        mTestDuration = sharedPreferences.getLong(KEY_TEST_DURATION, 10L);
        mTestCount = sharedPreferences.getLong(KEY_TEST_COUNT, 1L);
        this.mEtTestDuration.setText(String.valueOf(mTestDuration));
        this.mEtTestCount.setText(String.valueOf(mTestCount));
        mCheckLimit = sharedPreferences.getLong(KEY_CHECK_LIMIT, 2L);
        mReadbackInterval = sharedPreferences.getLong(KEY_READBACK_INTREVAL, 5L);
        this.mEtCheckLimit.setText(String.valueOf(mCheckLimit));
        this.mEtReadbackInterval.setText(String.valueOf(mReadbackInterval));
    }

    private void saveConfigureState() {
        SharedPreferences.Editor editorEdit = getSharedPreferences(PREF_FILE, 0).edit();
        editorEdit.putLong(KEY_TEST_DURATION, mTestDuration);
        editorEdit.putLong(KEY_TEST_COUNT, mTestCount);
        editorEdit.putLong(KEY_CHECK_LIMIT, mCheckLimit);
        editorEdit.putLong(KEY_READBACK_INTREVAL, mReadbackInterval);
        editorEdit.apply();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendAtCommand(String str, int i) {
        if (!FeatureSupport.is93Modem() && isSendToCdmaCmd(str)) {
            EmUtils.invokeOemRilRequestStringsEm(true, new String[]{str, "", "DESTRILD:C2K"}, this.mHandler.obtainMessage(i));
            return;
        }
        String[] strArr = {str, ""};
        if (str.equals("AT+EGMC=0,\"NrFetchTxPwr\"")) {
            strArr[1] = "+EGMC:";
        }
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mHandler.obtainMessage(i));
    }

    private void setListViewItemsHeight(ListView listView) {
        if (listView == null) {
            return;
        }
        ListAdapter adapter = listView.getAdapter();
        int measuredHeight = 0;
        for (int i = 0; i < adapter.getCount(); i++) {
            View view = adapter.getView(i, null, listView);
            view.measure(0, 0);
            measuredHeight += view.getMeasuredHeight();
        }
        int count = measuredHeight + ((adapter.getCount() - 1) * listView.getDividerHeight());
        ViewGroup.LayoutParams layoutParams = listView.getLayoutParams();
        layoutParams.height = count;
        listView.setLayoutParams(layoutParams);
    }

    private void setTestParameter() {
        String string = this.mEtTestDuration.getText().toString();
        String string2 = this.mEtTestCount.getText().toString();
        String string3 = this.mEtCheckLimit.getText().toString();
        String string4 = this.mEtReadbackInterval.getText().toString();
        if ("".equals(string)) {
            this.mEtTestDuration.setText("10");
            mTestDuration = 10L;
        } else {
            mTestDuration = Integer.valueOf(string).intValue();
        }
        if ("".equals(string2)) {
            this.mEtTestCount.setText("1");
            mTestCount = 1L;
        } else {
            mTestCount = Integer.valueOf(string2).intValue();
        }
        if ("".equals(string3)) {
            this.mEtCheckLimit.setText("2");
            mCheckLimit = 2L;
        } else {
            mCheckLimit = Integer.valueOf(string3).intValue();
        }
        if ("".equals(string4)) {
            this.mEtReadbackInterval.setText(String.valueOf(5));
            mReadbackInterval = 5L;
        } else {
            long jIntValue = Integer.valueOf(string4).intValue();
            mReadbackInterval = jIntValue;
            if (jIntValue < 5) {
                mReadbackInterval = 5L;
                EmUtils.showToast("mReadbackInterval at least 5s");
                this.mEtReadbackInterval.setText(String.valueOf(mReadbackInterval));
            }
        }
        long j = mReadbackInterval;
        long j2 = mTestDuration;
        if (j > j2) {
            mReadbackInterval = j2;
        }
        mTestCountSended = 0L;
        mTestDurationSended = 0L;
        saveConfigureState();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showTxStatusUI(String str) {
        this.mTvTxStatus.append(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void txTestStop(int i) {
        RfDesenseRatInfo rfDesenseRatInfo = mCurrectRatInfo;
        if (rfDesenseRatInfo == null) {
            Elog.d(TAG, "mCurrectRatInfo is null");
            updateUIView();
            return;
        }
        sendAtCommand(rfDesenseRatInfo.getRatCmdStop(), i);
        Elog.d(TAG, "stop: " + mCurrectRatInfo.getRatName() + " " + mCurrectRatInfo.getRatCmdStop());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateButtons() {
        this.mStartButton.setEnabled(mKeyStates == 2);
        this.mStopButton.setEnabled(mKeyStates == 1);
        Button button = this.mExitButton;
        int i = mKeyStates;
        button.setEnabled(i == 0 || i == 2);
    }

    private void updateRatInfo() {
        for (int i = 0; i < mRatName.length; i++) {
            for (RfDesenseRatInfo rfDesenseRatInfo : this.mRatList) {
                if (mRatName[i].equals(rfDesenseRatInfo.getRatName())) {
                    rfDesenseRatInfo.setRatCmdStart(mRatCmdStart[i]);
                    rfDesenseRatInfo.setRatband(this.mRatBand[i]);
                    rfDesenseRatInfo.setRatPowerSet(this.mRatPowerSet[i]);
                    rfDesenseRatInfo.setRatCmdAntSwitch(mRatCmdAntSwitch[i]);
                    break;
                }
            }
        }
        this.mFileListAdapter.notifyDataSetInvalidated();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUIView() {
        mKeyStates = 2;
        Handler handler = this.mHandler;
        handler.sendMessageDelayed(Message.obtain(handler, 5), 500L);
        for (int i = 0; i < this.mRatList.size(); i++) {
            this.mRatList.get(i).setRatSendState(false);
        }
    }

    void exit_test_and_rest_md() {
        mTestExitStatus = 1;
        EmUtils.initPoweroffmdMode(false, true);
        this.mRadioStateManager.rebootModem();
        Elog.d(TAG, "reboot MD");
        EmUtils.setAirplaneModeEnabled(false);
        Elog.d(TAG, "leave AirplaneMode");
    }

    boolean isRatsChecked() {
        for (int i = 0; i < this.mRatList.size(); i++) {
            if (this.mRatList.get(i).getRatCheckState().booleanValue() && this.mRatList.get(i).getRatCheckState().booleanValue()) {
                return true;
            }
        }
        return false;
    }

    boolean isSendToCdmaCmd(String str) {
        if (mCurrectRatInfo == null || str.equals("AT+EFUN=0")) {
            return false;
        }
        if (str.equals("AT+CPOF")) {
            Elog.d(TAG, "send to cdma rat:");
            return true;
        }
        if (str.equals("AT+CFUN=1,1")) {
            return false;
        }
        if (mCurrectRatInfo.getRatName().equals(mRatName[5]) || mCurrectRatInfo.getRatName().equals(mRatName[6])) {
            Elog.d(TAG, "send to cdma rat:");
            return true;
        }
        return false;
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (mKeyStates == 1) {
            showDialog(0);
            return;
        }
        Elog.d(TAG, "exit ui: " + mTestExitStatus);
        int i = mTestExitStatus;
        if (i == 0) {
            showDialog(DIG_EXIT_TEST_RESET_MD);
        } else if (i == 2) {
            finish();
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mExitButton) {
            int i = mKeyStates;
            if (i == 1) {
                showDialog(0);
                return;
            }
            if (i == 2 || i == 0) {
                Elog.d(TAG, "exit ui: " + mTestExitStatus);
                int i2 = mTestExitStatus;
                if (i2 == 0) {
                    showDialog(DIG_EXIT_TEST_RESET_MD);
                    return;
                } else {
                    if (i2 == 2) {
                        finish();
                        return;
                    }
                    return;
                }
            }
            return;
        }
        if (view != this.mStartButton) {
            if (view == this.mStopButton) {
                Elog.d(TAG, "Stop all");
                mKeyStates = 2;
                Handler handler = this.mHandler;
                handler.sendMessageDelayed(Message.obtain(handler, 2), 1000L);
                return;
            }
            return;
        }
        this.mTvTxStatus.setText("");
        if (!isRatsChecked()) {
            Elog.d(TAG, "you must select at least one rat");
            showTxStatusUI("you must select at least one rat\n");
            return;
        }
        setTestParameter();
        mKeyStates = 1;
        Handler handler2 = this.mHandler;
        handler2.sendMessage(Message.obtain(handler2, 5));
        showTxStatusUI("Start TX: \n");
        if (FeatureSupport.is93Modem()) {
            showTxStatusUI("Rat(band)          Power_Set   Power_Get    Result\n");
        }
        Handler handler3 = this.mHandler;
        handler3.sendMessageDelayed(Message.obtain(handler3, 16), 2000L);
    }

    /* JADX WARN: Code duplicated, block: B:19:0x0129  */
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_tx_test);
        this.mStopButton = (Button) findViewById(R.id.button_stop_total);
        this.mExitButton = (Button) findViewById(R.id.button_exit_total);
        this.mStartButton = (Button) findViewById(R.id.button_start_total);
        this.mStopButton.setOnClickListener(this);
        this.mExitButton.setOnClickListener(this);
        this.mStartButton.setOnClickListener(this);
        this.mEtTestDuration = (EditText) findViewById(R.id.test_duration);
        this.mEtTestCount = (EditText) findViewById(R.id.test_count);
        this.mTvTxStatus = (TextView) findViewById(R.id.test_result);
        this.mEtCheckLimit = (EditText) findViewById(R.id.check_limit);
        this.mEtReadbackInterval = (EditText) findViewById(R.id.readback_interval);
        this.mTvCheckLimit = (TextView) findViewById(R.id.check_limit_view);
        this.mTvReadbackInterval = (TextView) findViewById(R.id.readback_interval_view);
        ListView listView = (ListView) findViewById(R.id.list);
        mTestExitStatus = 0;
        if (ModemCategory.isSimReady(-1)) {
            Elog.d(TAG, "some card insert");
            showDialog(1);
        }
        if (!FeatureSupport.is93Modem()) {
            this.mEtCheckLimit.setVisibility(8);
            this.mEtReadbackInterval.setVisibility(8);
            this.mTvCheckLimit.setVisibility(8);
            this.mTvReadbackInterval.setVisibility(8);
            mRatCmdStart[5] = DEFAULT_CDMA_EVDO_ATCMD_93before;
            mRatCmdStop[5] = "AT+ECRFTX=0";
        }
        restoreAtCmdState();
        restoreConfigureState();
        for (int i = 0; i < mRatName.length; i++) {
            RfDesenseRatInfo rfDesenseRatInfo = new RfDesenseRatInfo();
            rfDesenseRatInfo.setRatName(mRatName[i]);
            rfDesenseRatInfo.setRatCmdStart(mRatCmdStart[i]);
            rfDesenseRatInfo.setRatCmdStop(mRatCmdStop[i]);
            rfDesenseRatInfo.setRatPowerRead(mRatCmdPowerRead[i]);
            rfDesenseRatInfo.setRatband(this.mRatBand[i]);
            rfDesenseRatInfo.setRatPowerSet(this.mRatPowerSet[i]);
            rfDesenseRatInfo.setRatCmdAntSwitch(mRatCmdAntSwitch[i]);
            rfDesenseRatInfo.setRatCheckState(false);
            rfDesenseRatInfo.setRatSendState(false);
            int modemType = ModemCategory.getModemType();
            if (modemType == 1) {
                if (i != 1) {
                    if ((ModemCategory.isCdma() || (i != 5 && i != 6)) && (RatConfiguration.isNrSupported() || i != 7)) {
                        this.mRatList.add(rfDesenseRatInfo);
                    }
                }
            } else if (modemType != 2 || i != 2) {
                if (ModemCategory.isCdma()) {
                    this.mRatList.add(rfDesenseRatInfo);
                } else {
                    this.mRatList.add(rfDesenseRatInfo);
                }
            }
        }
        RfDesenseRatAdapter rfDesenseRatAdapter = new RfDesenseRatAdapter(this, this.mRatList);
        this.mFileListAdapter = rfDesenseRatAdapter;
        listView.setAdapter((ListAdapter) rfDesenseRatAdapter);
        listView.setOnItemClickListener(this);
        setListViewItemsHeight(listView);
        RadioStateManager radioStateManager = new RadioStateManager(this);
        this.mRadioStateManager = radioStateManager;
        radioStateManager.registerRadioStateChanged(this);
        if (FeatureSupport.is93Modem()) {
            Elog.d(TAG, "registerForTxPower");
            EmUtils.registerForTxpowerInfo(this.mHandler, 7);
        }
        this.mTvTxStatus.setText("");
        mKeyStates = 0;
        updateButtons();
        EmUtils.initPoweroffmdMode(true, true);
        if (EmUtils.ifAirplaneModeEnabled()) {
            Elog.d(TAG, "it is in Airplane Mode");
            this.mStartButton.setEnabled(true);
        } else {
            Elog.d(TAG, "turn off rf");
            this.mStartButton.setEnabled(false);
            this.mRadioStateManager.setAirplaneModeEnabled(true);
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 0) {
            return new AlertDialog.Builder(this).setTitle("Hint").setMessage("Please stop the test first!").setPositiveButton("Confirm", (DialogInterface.OnClickListener) null).create();
        }
        if (i == 1) {
            return new AlertDialog.Builder(this).setTitle("Notice").setMessage("Please pull out the sim card before test").setPositiveButton("Confirm", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTest.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    RfDesenseTxTest.this.finish();
                }
            }).create();
        }
        if (i == DIG_EXIT_TEST_RESET_MD) {
            return new AlertDialog.Builder(this).setTitle("You are leaving the test ui").setMessage("Please wait until md reset succeed").setPositiveButton("Confirm", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTest.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    RfDesenseTxTest.this.exit_test_and_rest_md();
                }
            }).create();
        }
        return i == 1001 ? this.mRadioStateManager.getRebootModemDialog() : super.onCreateDialog(i);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        this.mRadioStateManager.unregisterRadioStateChanged();
        EmUtils.unregisterForTxpowerInfo();
        Elog.d(TAG, "onDestroy");
        super.onDestroy();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        String ratName = this.mRatList.get(i).getRatName();
        if (ratName.equals(mRatName[0])) {
            intent.setClass(this, RfDesenseTxTestGsm.class);
        } else if (ratName.equals(mRatName[1])) {
            intent.putExtra("mModemType", 2);
            intent.setClass(this, RfDesenseTxTestTd.class);
        } else if (ratName.equals(mRatName[2])) {
            intent.putExtra("mModemType", 1);
            intent.setClass(this, RfDesenseTxTestTd.class);
        } else if (ratName.equals(mRatName[3])) {
            intent.putExtra("mModemType", 1);
            intent.setClass(this, RfDesenseTxTestLte.class);
        } else if (ratName.equals(mRatName[4])) {
            intent.putExtra("mModemType", 2);
            intent.setClass(this, RfDesenseTxTestLte.class);
        } else if (ratName.equals(mRatName[5])) {
            intent.putExtra("mModemType", 2);
            intent.setClass(this, RfDesenseTxTestCdma.class);
        } else if (ratName.equals(mRatName[6])) {
            intent.putExtra("mModemType", 1);
            intent.setClass(this, RfDesenseTxTestCdma.class);
        } else if (ratName.equals(mRatName[7])) {
            intent.setClass(this, RfDesenseTxTestNR.class);
        }
        startActivity(intent);
    }

    @Override // com.mediatek.engineermode.RadioStateManager.RadioListener
    public void onRadioPowerOff() {
        Elog.v(TAG, "RADIO_POWER_OFF");
        this.mStartButton.setEnabled(true);
    }

    @Override // com.mediatek.engineermode.RadioStateManager.RadioListener
    public void onRadioPowerOn() {
        Elog.v(TAG, "RADIO_POWER_ON");
        if (mTestExitStatus == 1) {
            Elog.d(TAG, "modem reset succeed");
            mTestExitStatus = 2;
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d(TAG, "onResume");
        restoreAtCmdState();
        updateRatInfo();
    }
}

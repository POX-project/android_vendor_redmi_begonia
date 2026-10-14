package com.mediatek.engineermode.bandselect;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.TableLayout;
import android.widget.TableRow;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.RadioStateManager;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class BandSelect extends Activity implements View.OnClickListener {
    private static final int INDEX_BAND_MAX = 11;
    private static final int INDEX_CDMA_BAND = 10;
    private static final int INDEX_GSM_BAND = 0;
    private static final int INDEX_LTE_BAND_128 = 5;
    private static final int INDEX_LTE_BAND_160 = 6;
    private static final int INDEX_LTE_BAND_192 = 7;
    private static final int INDEX_LTE_BAND_224 = 8;
    private static final int INDEX_LTE_BAND_256 = 9;
    private static final int INDEX_LTE_BAND_96 = 4;
    private static final int INDEX_LTE_FDD_BAND = 2;
    private static final int INDEX_LTE_TDD_BAND = 3;
    private static final int INDEX_NR_BAND = 12;
    private static final int INDEX_UMTS_BAND = 1;
    private static final int NR_VALUES = 3;
    private static final String PREF_FILE = "band_select_";
    private static final String[] PREF_KEYS = {"gsm", "umts", "lte_fdd", "lte_tdd", "lte_96", "lte_128", "lte_160", "lte_192", "lte_224", "lte_256", "cdma"};
    private static final String TAG = "BandSelect";
    private static final int TDSCDMA = 2;
    private static final int WCDMA = 1;
    private static int mSimType;
    private Button mBtnReset;
    private Button mBtnSet;
    private RadioStateManager mRadioStateManager;
    private final ArrayList<BandModeMap> mGsmModeArray = new ArrayList<>();
    private final ArrayList<BandModeMap> mCdmaModeArray = new ArrayList<>();
    private final ArrayList<BandModeMap> mNRModeArray = new ArrayList<>();
    private long[] mSetGsmValues = new long[11];
    private long mSetCdmaValues = 0;
    private long[] mSetNRValues = new long[3];
    private long[] mCurrentGsmValues = new long[11];
    private long mCurrentCdmaValues = 0;
    private long[] mCurrentNRValues = new long[3];
    private long[] mDefaultNRValues = new long[3];
    private boolean mIsNRValid = true;
    private boolean mIsThisAlive = true;
    private boolean mIsCdmaValid = true;
    private boolean mIsLteValid = true;
    private boolean mIsLteExtend = false;
    private final Handler mResponseHander = new Handler() { // from class: com.mediatek.engineermode.bandselect.BandSelect.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (BandSelect.this.mIsThisAlive) {
                int i = message.what;
                switch (i) {
                    case 100:
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception != null) {
                            EmUtils.showToast("Query GSM Supported Mode Failed.");
                        } else {
                            BandSelect.this.showBandModeGsm(asyncResult, 100);
                        }
                        break;
                    case 101:
                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                        if (asyncResult2.exception != null) {
                            EmUtils.showToast("Query GSM Current Mode Failed.");
                        } else {
                            BandSelect.this.showBandModeGsm(asyncResult2, 101);
                        }
                        break;
                    case 102:
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        if (asyncResult3.exception != null) {
                            EmUtils.showToast("Query CDMA Current Mode Failed.", true);
                        } else {
                            BandSelect.this.showBandModeCdma(asyncResult3, 102);
                        }
                        break;
                    case 103:
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        if (asyncResult4.exception != null) {
                            EmUtils.showToast("Query NR Supported Mode Failed.", true);
                        } else {
                            BandSelect.this.showBandModeNR(asyncResult4, 103);
                        }
                        break;
                    case 104:
                        AsyncResult asyncResult5 = (AsyncResult) message.obj;
                        if (asyncResult5.exception != null) {
                            EmUtils.showToast("Query NR Current Mode Failed.", true);
                        } else {
                            BandSelect.this.showBandModeNR(asyncResult5, 104);
                        }
                        break;
                    default:
                        switch (i) {
                            case 110:
                                if (((AsyncResult) message.obj).exception != null) {
                                    EmUtils.showToast("set Gsm BandMode failed", true);
                                    Elog.v(BandSelect.TAG, "set Gsm BandMode failed");
                                    break;
                                } else {
                                    EmUtils.showToast("set Gsm BandMode succeed", true);
                                    Elog.v(BandSelect.TAG, "set Gsm BandMode succeed");
                                    if (ModemCategory.CheckViceSimNRCapability(BandSelect.mSimType)) {
                                        BandSelect bandSelect = BandSelect.this;
                                        bandSelect.setBandModeNR(bandSelect.mSetNRValues);
                                    }
                                    if (ModemCategory.isCdma() && !FeatureSupport.is90Modem() && ModemCategory.CheckViceSimCdmaCapability(BandSelect.mSimType)) {
                                        BandSelect bandSelect2 = BandSelect.this;
                                        bandSelect2.setBandModeCdma(bandSelect2.mSetCdmaValues);
                                        break;
                                    }
                                }
                                break;
                            case 111:
                                if (((AsyncResult) message.obj).exception == null) {
                                    EmUtils.showToast("set CDMA BandMode succeed", true);
                                    Elog.v(BandSelect.TAG, "set CDMA BandMode succeed");
                                } else {
                                    EmUtils.showToast("set CDMA BandMode failed", true);
                                    Elog.v(BandSelect.TAG, "set CDMA BandMode failed");
                                }
                                if (FeatureSupport.is93Modem()) {
                                    BandSelect.this.mRadioStateManager.rebootModem();
                                }
                                break;
                            case 112:
                                if (((AsyncResult) message.obj).exception != null) {
                                    EmUtils.showToast("set NR BandMode failed", true);
                                    Elog.v(BandSelect.TAG, "set NR BandMode failed");
                                } else {
                                    EmUtils.showToast("set NR BandMode succeed", true);
                                    Elog.v(BandSelect.TAG, "set NR BandMode succeed");
                                }
                                break;
                        }
                        break;
                }
            }
        }
    };

    private static class BandModeMap {
        public int mBit;
        public CheckBox mChkBox;
        public int mIndex;

        BandModeMap(CheckBox checkBox, int i, int i2) {
            this.mChkBox = checkBox;
            this.mIndex = i;
            this.mBit = i2;
        }
    }

    private ArrayList<CheckBox> addCheckboxToTable(String str, int i, int i2) {
        TableLayout tableLayout = (TableLayout) findViewById(i);
        String[] stringArray = getResources().getStringArray(i2);
        ArrayList<CheckBox> arrayList = new ArrayList<>(stringArray.length);
        for (String str2 : stringArray) {
            TableRow tableRow = new TableRow(this);
            TextView textView = new TextView(this);
            textView.setText(str);
            CheckBox checkBox = new CheckBox(this);
            checkBox.setText(str2);
            tableRow.addView(textView);
            tableRow.addView(checkBox);
            tableLayout.addView(tableRow);
            arrayList.add(checkBox);
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long getDefaultValueCdma() {
        long j = getSharedPreferences(PREF_FILE + mSimType, 0).getLong(PREF_KEYS[10], 0L);
        Elog.v(TAG, "getDefaultValueCdma: " + j);
        setCurrentModeCdma(j);
        return j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long[] getDefaultValueGsm() {
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE + mSimType, 0);
        long[] jArr = new long[11];
        long[] jArr2 = new long[11];
        Elog.v(TAG, "getDefaultValueGsm: ");
        for (int i = 0; i < 10; i++) {
            jArr[i] = sharedPreferences.getLong(PREF_KEYS[i], 0L);
            jArr2[i] = sharedPreferences.getLong(PREF_KEYS[i], 0L);
            Elog.v(TAG, "values[" + i + "] = " + jArr[i]);
        }
        for (int i2 = 4; i2 <= 9; i2++) {
            jArr2[2] = jArr2[2] | jArr2[i2];
        }
        if (jArr[0] == 0) {
            jArr[0] = 255;
        }
        if (jArr[1] == 0) {
            jArr[1] = 65535;
        }
        if (jArr2[2] == 0 && jArr2[3] == 0) {
            jArr[2] = 4294967295L;
            jArr[3] = 4294967295L;
            Elog.v(TAG, "getDefaultValue,lte not to null");
        }
        setCurrentModeGsm(jArr);
        return jArr;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void getDefaultValueNR() {
        long[] jArr = this.mCurrentNRValues;
        long[] jArr2 = this.mDefaultNRValues;
        jArr[0] = jArr2[0];
        jArr[1] = jArr2[1];
        jArr[2] = jArr2[2];
        setCurrentModeNR(jArr);
        this.mSetNRValues = getValFromBoxNR();
    }

    private long getValFromBoxCdma() {
        long j = 0;
        for (BandModeMap bandModeMap : this.mCdmaModeArray) {
            if (bandModeMap.mChkBox.isChecked()) {
                j |= 1 << bandModeMap.mBit;
            }
            if (!this.mIsCdmaValid) {
                this.mIsCdmaValid = true;
            }
        }
        if (j == 0 && this.mCurrentCdmaValues != 0) {
            this.mIsCdmaValid = false;
            Elog.v(TAG, "mIsCdmaValid:" + this.mIsCdmaValid);
        }
        return j;
    }

    private long[] getValFromBoxGsm(boolean z) {
        long[] jArr = new long[11];
        long[] jArr2 = new long[11];
        for (BandModeMap bandModeMap : this.mGsmModeArray) {
            if (bandModeMap.mChkBox.isChecked()) {
                int i = bandModeMap.mIndex;
                jArr[i] = jArr[i] | (1 << bandModeMap.mBit);
                int i2 = bandModeMap.mIndex;
                jArr2[i2] = jArr2[i2] | (1 << bandModeMap.mBit);
            }
        }
        if (z) {
            for (int i3 = 4; i3 <= 9; i3++) {
                jArr2[2] = jArr2[2] | jArr2[i3];
            }
            jArr2[2] = jArr2[2] | jArr2[3];
            jArr2[3] = jArr2[2];
            for (int i4 = 0; i4 <= 3; i4++) {
                Elog.v(TAG, "mCurrentGsmValues[" + i4 + "] = " + this.mCurrentGsmValues[i4] + ", to values[" + i4 + "] = " + jArr[i4]);
                if (jArr2[i4] == 0 && this.mCurrentGsmValues[i4] != 0) {
                    this.mIsLteValid = false;
                    break;
                }
                if (!this.mIsLteValid) {
                    this.mIsLteValid = true;
                }
            }
            if (jArr[0] == 0) {
                jArr[0] = 255;
            }
            if (jArr[1] == 0) {
                jArr[1] = 65535;
            }
            if (jArr2[2] == 0 && jArr2[3] == 0) {
                jArr[2] = 4294967295L;
                jArr[3] = 4294967295L;
                Elog.v(TAG, "lte not to null");
            }
        }
        return jArr;
    }

    private long[] getValFromBoxNR() {
        long[] jArr = new long[3];
        for (BandModeMap bandModeMap : this.mNRModeArray) {
            if (bandModeMap.mBit < 32) {
                if (bandModeMap.mChkBox.isChecked()) {
                    jArr[0] = jArr[0] | (1 << bandModeMap.mBit);
                }
            } else if (bandModeMap.mBit < 64) {
                int i = bandModeMap.mBit - 32;
                if (bandModeMap.mChkBox.isChecked()) {
                    jArr[1] = jArr[1] | (1 << i);
                }
            } else {
                int i2 = bandModeMap.mBit - 64;
                if (bandModeMap.mChkBox.isChecked()) {
                    jArr[2] = jArr[2] | (1 << i2);
                }
            }
            if (!this.mIsNRValid) {
                this.mIsNRValid = true;
            }
        }
        if (jArr[0] == 0 && jArr[1] == 0 && jArr[2] == 0) {
            long[] jArr2 = this.mCurrentNRValues;
            if (jArr2[0] != 0 || jArr2[1] != 0 || jArr2[0] != 0) {
                this.mIsNRValid = false;
                Elog.v(TAG, "mIsNRValid:" + this.mIsNRValid);
            }
        }
        return jArr;
    }

    private void initCdmaArray() {
        findViewById(R.id.TableLayout_CDMA).setVisibility(0);
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable("CDMA", R.id.TableLayout_CDMA, R.array.band_mode_cdma);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mCdmaModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), 10, i));
        }
    }

    private void initGsmArray() {
        findViewById(R.id.TableLayout_GSM).setVisibility(0);
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable("GSM", R.id.TableLayout_GSM, R.array.band_mode_gsm);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mGsmModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), 0, BandModeContent.GSM_BAND_BIT[i]));
        }
    }

    private void initLteArray() {
        findViewById(R.id.TableLayout_LTE).setVisibility(0);
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable("LTE_FDD", R.id.TableLayout_LTE, R.array.band_mode_lte_fdd);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mGsmModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), 2, i));
        }
        ArrayList<CheckBox> arrayListAddCheckboxToTable2 = addCheckboxToTable("LTE_TDD", R.id.TableLayout_LTE, R.array.band_mode_lte_tdd);
        for (int i2 = 0; i2 < arrayListAddCheckboxToTable2.size(); i2++) {
            this.mGsmModeArray.add(new BandModeMap(arrayListAddCheckboxToTable2.get(i2), 3, i2));
        }
        ArrayList<CheckBox> arrayListAddCheckboxToTable3 = addCheckboxToTable("LTE_FDD", R.id.TableLayout_LTE, R.array.band_mode_lte_96);
        for (int i3 = 0; i3 < arrayListAddCheckboxToTable3.size(); i3++) {
            this.mGsmModeArray.add(new BandModeMap(arrayListAddCheckboxToTable3.get(i3), 4, i3));
        }
    }

    private void initNRArray() {
        findViewById(R.id.TableLayout_NR).setVisibility(0);
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable("NR", R.id.TableLayout_NR, R.array.band_mode_nr);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mNRModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), 12, i));
        }
    }

    private void initTdscdmaArray() {
        findViewById(R.id.TableLayout_UTMS).setVisibility(0);
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable("TDSCDMA", R.id.TableLayout_UTMS, R.array.band_mode_tdscdma);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mGsmModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), 1, i));
        }
    }

    private void initWcdmaArray() {
        findViewById(R.id.TableLayout_UTMS).setVisibility(0);
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable("WCDMA", R.id.TableLayout_UTMS, R.array.band_mode_wcdma);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mGsmModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), 1, i));
        }
    }

    private void queryCurrentModeCdma() {
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(new String[]{BandModeContent.QUERY_CURRENT_COMMAND_CDMA, BandModeContent.SAME_COMMAND_CDMA, "DESTRILD:C2K"});
        Elog.v(TAG, "queryCurrentModeCdma: ");
        sendATCommandCdma(cdmaCmdArr, 102);
    }

    private void queryCurrentModeGsm() {
        String[] strArr = {BandModeContent.QUERY_CURRENT_COMMAND, BandModeContent.SAME_COMMAND};
        Elog.v(TAG, "queryCurrentGSMMode AT String:" + strArr[0]);
        sendATCommand(strArr, 101);
    }

    private void queryCurrentModeNR() {
        String[] strArr = {BandModeContent.QUERY_CURRENT_NR_COMMAND, BandModeContent.SAME_NR_COMMAND};
        Elog.v(TAG, "queryCurrentNRMode AT String:" + strArr[0]);
        sendATCommand(strArr, 104);
    }

    private void querySupportModeGsm() {
        String[] strArr = {BandModeContent.QUERY_SUPPORT_COMMAND, BandModeContent.SAME_COMMAND};
        Elog.v(TAG, "querySupportGsmMode AT String:" + strArr[0]);
        sendATCommand(strArr, 100);
    }

    private void querySupportModeNR() {
        String[] strArr = {BandModeContent.QUERY_SUPPORT_NR_COMMAND, BandModeContent.SAME_NR_COMMAND};
        Elog.v(TAG, "querySupportNRMode AT String:" + strArr[0]);
        sendATCommand(strArr, 103);
    }

    private void saveDefaultValueIfNeedCdma(long j) {
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE + mSimType, 0);
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        if (!sharedPreferences.contains(PREF_KEYS[10])) {
            editorEdit.putLong(PREF_KEYS[10], j);
            Elog.v(TAG, "save cdam default value: " + j);
        }
        editorEdit.commit();
    }

    private void saveDefaultValueIfNeedGsm(long[] jArr) {
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE + mSimType, 0);
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        for (int i = 0; i < 10; i++) {
            if (!sharedPreferences.contains(PREF_KEYS[i])) {
                editorEdit.putLong(PREF_KEYS[i], jArr[i]);
                Elog.v(TAG, "save gsm default values[" + i + "] = " + jArr[i]);
            }
        }
        editorEdit.commit();
    }

    private void saveDefaultValueNR(long[] jArr) {
        long[] jArr2 = this.mDefaultNRValues;
        jArr2[0] = jArr[0];
        jArr2[1] = jArr[1];
        jArr2[2] = jArr[2];
    }

    private void sendATCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(mSimType, strArr, this.mResponseHander.obtainMessage(i));
    }

    private void sendATCommandCdma(String[] strArr, int i) {
        Elog.v(TAG, "c2k AT String:" + strArr[0] + ",atCommand.size = " + strArr.length);
        EmUtils.invokeOemRilRequestStringsEm(true, strArr, this.mResponseHander.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setBandModeCdma(long j) {
        Elog.v(TAG, "setCdmaBandMode: ");
        if (this.mIsCdmaValid || this.mIsLteValid) {
            sendATCommandCdma(ModemCategory.getCdmaCmdArr(new String[]{BandModeContent.SET_COMMAND_CDMA + j, "", "DESTRILD:C2K"}), 111);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setBandModeGsm(long[] jArr) {
        String[] strArr = {BandModeContent.SET_COMMAND + jArr[0] + "," + jArr[1], ""};
        if (ModemCategory.isLteSupport()) {
            strArr[0] = strArr[0] + "," + jArr[2] + "," + jArr[3];
            if (this.mIsLteExtend) {
                for (int i = 4; i < 10; i++) {
                    strArr[0] = strArr[0] + "," + jArr[i];
                }
            }
        }
        Elog.v(TAG, "setGsmBandMode AT String:" + strArr[0]);
        sendATCommand(strArr, 110);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setBandModeNR(long[] jArr) {
        String[] strArr = new String[2];
        strArr[0] = BandModeContent.SET_NR_COMMAND;
        strArr[0] = strArr[0] + "\"" + String.format("%08x", Long.valueOf(this.mSetGsmValues[0])) + "\",\"" + String.format("%08x", Long.valueOf(this.mSetGsmValues[1])) + "\",\"" + String.format("%08x", Long.valueOf(this.mSetGsmValues[2])) + String.format("%08x", Long.valueOf(this.mSetGsmValues[3])) + String.format("%08x", Long.valueOf(this.mSetGsmValues[4])) + "\",\"";
        StringBuilder sb = new StringBuilder();
        sb.append(strArr[0]);
        sb.append(String.format("%08x", Long.valueOf(this.mSetNRValues[0])));
        sb.append(String.format("%08x", Long.valueOf(this.mSetNRValues[1])));
        sb.append(String.format("%08x", Long.valueOf(this.mSetNRValues[2])));
        sb.append("\"");
        strArr[0] = sb.toString();
        strArr[1] = "";
        Elog.v(TAG, "setNrBandMode AT String:" + strArr[0]);
        sendATCommand(strArr, 112);
    }

    private void setCurrentModeCdma(long j) {
        for (BandModeMap bandModeMap : this.mCdmaModeArray) {
            if (((1 << bandModeMap.mBit) & j) == 0) {
                bandModeMap.mChkBox.setChecked(false);
            } else if (bandModeMap.mChkBox.isEnabled()) {
                bandModeMap.mChkBox.setChecked(true);
            }
        }
    }

    private void setCurrentModeGsm(long[] jArr) {
        for (BandModeMap bandModeMap : this.mGsmModeArray) {
            if ((jArr[bandModeMap.mIndex] & (1 << bandModeMap.mBit)) == 0) {
                bandModeMap.mChkBox.setChecked(false);
            } else if (bandModeMap.mChkBox.isEnabled()) {
                bandModeMap.mChkBox.setChecked(true);
            }
        }
    }

    private void setCurrentModeNR(long[] jArr) {
        int i;
        for (BandModeMap bandModeMap : this.mNRModeArray) {
            if (bandModeMap.mBit < 32) {
                if ((jArr[0] & (1 << bandModeMap.mBit)) == 0) {
                    bandModeMap.mChkBox.setChecked(false);
                } else if (bandModeMap.mChkBox.isEnabled()) {
                    bandModeMap.mChkBox.setChecked(true);
                }
            } else if (bandModeMap.mBit < 64) {
                i = bandModeMap.mBit - 32;
                if (((1 << i) & jArr[1]) == 0) {
                    bandModeMap.mChkBox.setChecked(false);
                } else if (bandModeMap.mChkBox.isEnabled()) {
                    bandModeMap.mChkBox.setChecked(true);
                }
            } else {
                i = bandModeMap.mBit - 64;
                if (((1 << i) & jArr[2]) == 0) {
                    bandModeMap.mChkBox.setChecked(false);
                } else if (bandModeMap.mChkBox.isEnabled()) {
                    bandModeMap.mChkBox.setChecked(true);
                }
            }
        }
    }

    private void setSupportedModeCdma(long j) {
        for (BandModeMap bandModeMap : this.mCdmaModeArray) {
            if (((1 << bandModeMap.mBit) & j) == 0) {
                bandModeMap.mChkBox.setEnabled(false);
            } else {
                bandModeMap.mChkBox.setEnabled(true);
            }
        }
    }

    private void setSupportedModeGsm(long[] jArr) {
        for (BandModeMap bandModeMap : this.mGsmModeArray) {
            if ((jArr[bandModeMap.mIndex] & (1 << bandModeMap.mBit)) == 0) {
                bandModeMap.mChkBox.setEnabled(false);
            } else {
                bandModeMap.mChkBox.setEnabled(true);
            }
        }
    }

    private void setSupportedModeNR(long[] jArr) {
        int i;
        for (BandModeMap bandModeMap : this.mNRModeArray) {
            if (bandModeMap.mBit < 32) {
                if ((jArr[0] & (1 << bandModeMap.mBit)) == 0) {
                    bandModeMap.mChkBox.setEnabled(false);
                } else {
                    bandModeMap.mChkBox.setEnabled(true);
                }
            } else if (bandModeMap.mBit < 64) {
                i = bandModeMap.mBit - 32;
                if (((1 << i) & jArr[1]) == 0) {
                    bandModeMap.mChkBox.setEnabled(false);
                } else {
                    bandModeMap.mChkBox.setEnabled(true);
                }
            } else {
                i = bandModeMap.mBit - 64;
                if (((1 << i) & jArr[2]) == 0) {
                    bandModeMap.mChkBox.setEnabled(false);
                } else {
                    bandModeMap.mChkBox.setEnabled(true);
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:25:0x0085  */
    /* JADX WARN: Code duplicated, block: B:26:0x0089  */
    public void showBandModeCdma(AsyncResult asyncResult, int i) {
        int i2;
        char c;
        long j;
        String[] strArr = (String[]) asyncResult.result;
        int length = strArr.length;
        int i3 = 0;
        while (i3 < length) {
            String str = strArr[i3];
            Elog.v(TAG, "cdma --.>" + str);
            String strSubstring = str.substring(BandModeContent.SAME_COMMAND_CDMA.length());
            if (i == 102) {
                String[] strArrSplit = strSubstring.split(",");
                long[] jArr = new long[2];
                int i4 = 0;
                for (int i5 = 2; i4 < i5; i5 = 2) {
                    try {
                        if (strArrSplit[i4] != null) {
                            i2 = i3;
                            try {
                                jArr[i4] = Integer.parseInt(strArrSplit[i4].substring(i5), 16);
                            } catch (Exception e) {
                                c = 0;
                                jArr[0] = 0;
                                setSupportedModeCdma(jArr[c]);
                                setCurrentModeCdma(jArr[1]);
                                this.mCurrentCdmaValues = jArr[1];
                                if (jArr[1] == 0) {
                                    j = jArr[0];
                                } else {
                                    j = jArr[1];
                                }
                                saveDefaultValueIfNeedCdma(j);
                                i3 = i2 + 1;
                            }
                        } else {
                            i2 = i3;
                        }
                        i4++;
                        i3 = i2;
                    } catch (Exception e2) {
                        i2 = i3;
                    }
                }
                i2 = i3;
                c = 0;
                setSupportedModeCdma(jArr[c]);
                setCurrentModeCdma(jArr[1]);
                this.mCurrentCdmaValues = jArr[1];
                if (jArr[1] == 0) {
                    j = jArr[0];
                } else {
                    j = jArr[1];
                }
                saveDefaultValueIfNeedCdma(j);
            } else {
                i2 = i3;
            }
            i3 = i2 + 1;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showBandModeGsm(AsyncResult asyncResult, int i) {
        for (String str : (String[]) asyncResult.result) {
            if (i == 100) {
                Elog.v(TAG, "gsm support --.>" + str);
            } else {
                Elog.v(TAG, "gsm current --.>" + str);
            }
            String[] strArrSplit = str.substring(BandModeContent.SAME_COMMAND.length()).split(",");
            if (strArrSplit != null && strArrSplit.length > 1) {
                long[] jArr = new long[11];
                for (int i2 = 0; i2 < jArr.length; i2++) {
                    if (strArrSplit.length <= i2 || strArrSplit[i2] == null) {
                        jArr[i2] = 0;
                    } else {
                        try {
                            jArr[i2] = Long.valueOf(strArrSplit[i2].trim()).longValue();
                        } catch (NumberFormatException e) {
                            jArr[i2] = 0;
                        }
                    }
                }
                if (i == 100) {
                    setSupportedModeGsm(jArr);
                    if (strArrSplit.length > 5) {
                        Elog.v(TAG, "The Modem support Lte extend band");
                        this.mIsLteExtend = true;
                    } else {
                        Elog.v(TAG, "The Modem not support Lte extend band");
                        this.mIsLteExtend = false;
                    }
                } else {
                    setCurrentModeGsm(jArr);
                    this.mCurrentGsmValues = getValFromBoxGsm(false);
                    saveDefaultValueIfNeedGsm(jArr);
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showBandModeNR(AsyncResult asyncResult, int i) {
        for (String str : (String[]) asyncResult.result) {
            if (i == 103) {
                Elog.v(TAG, "NR support --.>" + str);
            } else {
                Elog.v(TAG, "NR current --.>" + str);
            }
            long[] jArr = new long[3];
            try {
                String strAddZeroForNum = EmUtils.addZeroForNum(str.substring(BandModeContent.SAME_NR_COMMAND.length()).split(",")[3].replace("\"", ""), 24);
                jArr[0] = Long.parseLong(strAddZeroForNum.substring(0, 8), 16);
                jArr[1] = Long.parseLong(strAddZeroForNum.substring(8, 16), 16);
                jArr[2] = Long.parseLong(strAddZeroForNum.substring(16, 24), 16);
            } catch (Exception e) {
                Elog.e(TAG, "NR parse failed," + e.getMessage());
            }
            if (i == 103) {
                setSupportedModeNR(jArr);
                saveDefaultValueNR(jArr);
            } else {
                setCurrentModeNR(jArr);
                this.mCurrentNRValues = jArr;
            }
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() != this.mBtnSet.getId()) {
            if (view.getId() == this.mBtnReset.getId()) {
                showDialog(2);
                return;
            }
            return;
        }
        this.mSetCdmaValues = getValFromBoxCdma();
        this.mSetNRValues = getValFromBoxNR();
        long[] valFromBoxGsm = getValFromBoxGsm(true);
        this.mSetGsmValues = valFromBoxGsm;
        if (this.mIsLteValid && this.mIsCdmaValid && this.mIsNRValid) {
            setBandModeGsm(valFromBoxGsm);
        } else {
            Elog.d(TAG, "!mIsLteValid || !mIsCdmaValid || !mIsNRValid");
            EmUtils.showToast("the band settings is forbid");
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        mSimType = getIntent().getIntExtra("mSimType", 0);
        int modemType = ModemCategory.getModemType();
        setContentView(R.layout.bandmodeselect);
        this.mBtnSet = (Button) findViewById(R.id.BandSel_Btn_Set);
        this.mBtnReset = (Button) findViewById(R.id.BandSel_Btn_Reset);
        this.mBtnSet.setOnClickListener(this);
        this.mBtnReset.setOnClickListener(this);
        initGsmArray();
        if (!ModemCategory.isCapabilitySim(mSimType)) {
            if (ModemCategory.checkViceSimCapability(mSimType, 4)) {
                initWcdmaArray();
            }
            if (ModemCategory.checkViceSimCapability(mSimType, 4096) && ModemCategory.isLteSupport()) {
                initLteArray();
            }
        } else if (modemType == 2) {
            initTdscdmaArray();
            if (ModemCategory.isLteSupport()) {
                initLteArray();
            }
        } else if (modemType == 1) {
            initWcdmaArray();
            if (ModemCategory.isLteSupport()) {
                initLteArray();
            }
        }
        if (ModemCategory.isCdma() && !FeatureSupport.is90Modem()) {
            initCdmaArray();
            queryCurrentModeCdma();
            if (!ModemCategory.CheckViceSimCdmaCapability(mSimType)) {
                findViewById(R.id.TableLayout_CDMA).setVisibility(8);
            }
        }
        querySupportModeGsm();
        queryCurrentModeGsm();
        if (ModemCategory.CheckViceSimNRCapability(mSimType)) {
            initNRArray();
            querySupportModeNR();
            queryCurrentModeNR();
        }
        RadioStateManager radioStateManager = new RadioStateManager(this);
        this.mRadioStateManager = radioStateManager;
        radioStateManager.registerRadioStateChanged(null);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (2 == i) {
            AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle(R.string.reset_title);
            builder.setMessage(R.string.reset_message);
            builder.setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.bandselect.BandSelect.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    BandSelect bandSelect = BandSelect.this;
                    bandSelect.mSetGsmValues = bandSelect.getDefaultValueGsm();
                    BandSelect bandSelect2 = BandSelect.this;
                    bandSelect2.mSetCdmaValues = bandSelect2.getDefaultValueCdma();
                    BandSelect.this.getDefaultValueNR();
                    BandSelect bandSelect3 = BandSelect.this;
                    bandSelect3.setBandModeGsm(bandSelect3.mSetGsmValues);
                    dialogInterface.dismiss();
                }
            });
            builder.setNegativeButton(android.R.string.cancel, (DialogInterface.OnClickListener) null);
            builder.create().show();
        } else if (1 == i) {
            Elog.d(TAG, "band set failed");
            AlertDialog.Builder builder2 = new AlertDialog.Builder(this);
            builder2.setTitle(R.string.wait_finish);
            builder2.setMessage("please wait for reboot airplane finish and try again");
            builder2.setPositiveButton(R.string.set_fail_text, (DialogInterface.OnClickListener) null);
            builder2.create().show();
        } else {
            if (1001 == i) {
                return this.mRadioStateManager.getRebootModemDialog();
            }
            AlertDialog.Builder builder3 = new AlertDialog.Builder(this);
            builder3.setTitle(R.string.set_fail_title);
            builder3.setMessage(R.string.set_fail_message);
            builder3.setPositiveButton(R.string.set_fail_text, (DialogInterface.OnClickListener) null);
            builder3.create().show();
        }
        return super.onCreateDialog(i);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        Elog.v(TAG, "onDestroy");
        this.mIsThisAlive = false;
        this.mRadioStateManager.unregisterRadioStateChanged();
        super.onDestroy();
    }
}

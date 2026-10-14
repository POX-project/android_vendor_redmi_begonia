package com.mediatek.engineermode.lterxmimoconfigure;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.TableLayout;
import android.widget.TableRow;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.lang.reflect.Array;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class LteSingleBandSetting extends Activity implements View.OnClickListener {
    public static final String CMD_SB_4RX_SET = "\"sb_4rx_set\"";
    public static final String CMD_SB_MIMO_SET = "\"sb_mimo_set\"";
    private static final int LTE_BAND_NUM = 256;
    private static final int LTE_BAND_QUERY_MODE = 0;
    public static final int LTE_BAND_SETTING_MODE_4RX = 1;
    public static final int LTE_BAND_SETTING_MODE_4X4MIMO = 0;
    private static final String TAG = "LteRx/SingleBandSetting";
    private Button mBtnSet;
    public static int LteBandSettingModeHistory = 0;
    public static String[] mSbMimoSetString = new String[2];
    private static int LteBandSettingMode = 0;
    private final ArrayList<BandModeMap> mModeArray = new ArrayList<>();
    private long[][] mSbMimoSet = (long[][]) Array.newInstance((Class<?>) long.class, 2, 8);
    private Handler mResponseHander = new Handler() { // from class: com.mediatek.engineermode.lterxmimoconfigure.LteSingleBandSetting.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                return;
            }
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (asyncResult.exception != null) {
                if (LteSingleBandSetting.LteBandSettingMode == 0) {
                    LteSingleBandSetting.this.updateCurrentMode("0,1,2,3,4,5,6,7,8");
                } else {
                    LteSingleBandSetting.this.updateCurrentMode("0,8,7,6,5,4,3,2,1");
                }
                EmUtils.showToast("Query lte band mode error2");
                Elog.e(LteSingleBandSetting.TAG, "Query lte band mode error2");
                return;
            }
            String[] strArr = (String[]) asyncResult.result;
            if (strArr == null || strArr.length < 0) {
                EmUtils.showToast("Query lte band mode error1");
                Elog.e(LteSingleBandSetting.TAG, "Query lte band mode error1");
            } else {
                Elog.d(LteSingleBandSetting.TAG, "Query lte band mode succeed");
                LteSingleBandSetting.this.updateCurrentMode(strArr[0]);
            }
        }
    };

    private static class BandModeMap {
        public int mBit;
        public CheckBox mChkBox;

        BandModeMap(CheckBox checkBox, int i) {
            this.mChkBox = checkBox;
            this.mBit = i % 32;
        }
    }

    private ArrayList<CheckBox> addCheckboxToTable(int i) {
        TableLayout tableLayout = (TableLayout) findViewById(i);
        ArrayList<CheckBox> arrayList = new ArrayList<>(256);
        for (int i2 = 0; i2 < 256; i2++) {
            TableRow tableRow = new TableRow(this);
            CheckBox checkBox = new CheckBox(this);
            checkBox.setText("band " + (i2 + 1));
            tableRow.addView(checkBox);
            tableLayout.addView(tableRow);
            arrayList.add(checkBox);
        }
        return arrayList;
    }

    private void getValFromBox() {
        int i = 0;
        Elog.d(TAG, "getValFromBox:");
        for (BandModeMap bandModeMap : this.mModeArray) {
            long[][] jArr = this.mSbMimoSet;
            int i2 = LteBandSettingMode;
            jArr[i2][0] = 0;
            mSbMimoSetString[i2] = "";
        }
        for (BandModeMap bandModeMap2 : this.mModeArray) {
            if (bandModeMap2.mChkBox.isChecked()) {
                long[] jArr2 = this.mSbMimoSet[LteBandSettingMode];
                jArr2[i] = jArr2[i] | (1 << bandModeMap2.mBit);
            }
            if (bandModeMap2.mBit == 31) {
                StringBuilder sb = new StringBuilder();
                String[] strArr = mSbMimoSetString;
                int i3 = LteBandSettingMode;
                sb.append(strArr[i3]);
                sb.append(",");
                sb.append(this.mSbMimoSet[LteBandSettingMode][i]);
                strArr[i3] = sb.toString();
                i++;
            }
        }
        Elog.d(TAG, "mSbMimoSetString: " + mSbMimoSetString[LteBandSettingMode]);
    }

    private void initLteArray() {
        ArrayList<CheckBox> arrayListAddCheckboxToTable = addCheckboxToTable(R.id.TableLayout_LTE_Band_Configure);
        for (int i = 0; i < arrayListAddCheckboxToTable.size(); i++) {
            this.mModeArray.add(new BandModeMap(arrayListAddCheckboxToTable.get(i), i));
        }
    }

    private void queryCurrentMode() {
        sendATCommand(new String[]{"AT+EGMC=0," + (LteBandSettingMode == 0 ? CMD_SB_MIMO_SET : CMD_SB_4RX_SET), "+EGMC:"}, 0);
    }

    private void sendATCommand(String[] strArr, int i) {
        Elog.d(TAG, "atCommand = " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mResponseHander.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateCurrentMode(String str) {
        int i = 1;
        try {
            String[] strArrSplit = str.split(",");
            Elog.v(TAG, "LteBandSettingMode = " + LteBandSettingMode);
            mSbMimoSetString[LteBandSettingMode] = "";
            for (int i2 = 0; i2 < strArrSplit.length - 1; i2++) {
                this.mSbMimoSet[LteBandSettingMode][i2] = Long.valueOf(strArrSplit[i2 + 1]).longValue();
                StringBuilder sb = new StringBuilder();
                String[] strArr = mSbMimoSetString;
                int i3 = LteBandSettingMode;
                sb.append(strArr[i3]);
                sb.append(",");
                sb.append(this.mSbMimoSet[LteBandSettingMode][i2]);
                strArr[i3] = sb.toString();
            }
            Elog.v(TAG, "mSbMimoSetString = " + mSbMimoSetString[LteBandSettingMode]);
            for (BandModeMap bandModeMap : this.mModeArray) {
                if ((Long.valueOf(strArrSplit[i]).longValue() & (1 << bandModeMap.mBit)) == 0) {
                    bandModeMap.mChkBox.setChecked(false);
                } else {
                    bandModeMap.mChkBox.setChecked(true);
                }
                if (bandModeMap.mBit == 31) {
                    i++;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        Elog.d(TAG, "Band setting button click");
        getValFromBox();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.lte_rx_single_band_setting);
        this.mBtnSet = (Button) findViewById(R.id.BandSel_Btn_Set);
        int intExtra = getIntent().getIntExtra("band_setting_type", 0);
        LteBandSettingMode = intExtra;
        LteBandSettingModeHistory = (1 << intExtra) | LteBandSettingModeHistory;
        Elog.d(TAG, "LteBandSettingMode = " + LteBandSettingMode);
        Elog.d(TAG, "LteBandSettingModeHistory = " + LteBandSettingModeHistory);
        initLteArray();
        this.mBtnSet.setOnClickListener(this);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        Elog.v(TAG, "onDestroy");
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.v(TAG, "onResume");
        queryCurrentMode();
    }
}

package com.mediatek.engineermode.wifi;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiTxFormat extends WiFiTestActivity implements View.OnClickListener {
    private static final int DEFAULT_AIFS = 50;
    private static final int DEFAULT_PKT_CNT = 0;
    private static final int DEFAULT_PKT_LENGTH = 1024;
    private static final int DEFAULT_POWER = 22;
    private static final int DEFAULT_PRIM_CH = 0;
    private static final int DEFAULT_RU_STA_ID = 0;
    private static final int DUTY_DEFAULT_PKT_CNT = 100;
    private static final int MAX_AIFS = 255;
    private static final int MSG_EVENT_FINISH = 4;
    private static final int MSG_EVENT_GO = 1;
    private static final int MSG_EVENT_STOP = 2;
    private static final int MSG_EVENT_UPDATE_TX_COUNT = 3;
    private static final int MSG_GET_TX_POWER = 5;
    private static final int ONE_SECOND = 1000;
    private static final String RATE_DCM = "DCM";
    private static final String TAG = "WifiTX";
    private static final int TX_CMD_START = 1;
    private static final int TX_CMD_STOP = 0;
    private Button mBtnGo;
    private Button mBtnStop;
    private CheckBox mCbHwTx;
    private CheckBox mCbWf1;
    private CheckBox mCbWf2;
    private ChannelDataFormat[] mChList;
    private EditText mEtInterPktGap;
    private EditText mEtPktCnt;
    private EditText mEtPktLength;
    private EditText mEtPower;
    private EditText mEtRuStaId;
    private RadioGroup mRgAnt;
    private RadioGroup mRgNss;
    private Spinner mSpCbw;
    private Spinner mSpCh;
    private Spinner mSpDbw;
    private Spinner mSpFec;
    private Spinner mSpGi;
    private Spinner mSpMode;
    private Spinner mSpPreamble;
    private Spinner mSpPrimCh;
    private Spinner mSpRate;
    private Spinner mSpRuAllocation;
    private Spinner mSpRuConfig;
    private Spinner mSpRuIndex;
    private TXTestMode mTestMode;
    private TextView mTvAFactor;
    private TextView mTvLSig;
    private TextView mTvLdpcExtraSym;
    private TextView mTvPeDisa;
    private TextView mTvTxPe;
    private TextView mTvTxedCnt;
    private TxHandler mTxHandler;
    private TxParam mTxParam;
    private HandlerThread mTxThread;
    private View mViewRu;
    private ArrayAdapter<String> mChannelAdapter = null;
    private ArrayAdapter<String> mBwAdapter = null;
    private ArrayAdapter<WifiFormatConfig.PreambleConfig> mPreambleAdapter = null;
    private ArrayAdapter<String> mRateAdapter = null;
    private ArrayAdapter<String> mGiAdapter = null;
    private ArrayAdapter<TXTestMode> mTestModeAdapter = null;
    private ArrayAdapter<WifiFormatConfig.RuConfig> mRuConfigAdapter = null;
    private ArrayAdapter<String> mRuAllocationAdapter = null;
    private ArrayAdapter<Integer> mRuIndexAdapter = null;
    private int mBandValue = 0;
    private int mTarPktCnt = 0;
    private boolean mUiInitDone = false;
    private boolean mDbdcMode = false;
    private boolean mCapAntSwap = false;
    private boolean mCap11ax = false;
    private boolean mCap2by2 = false;
    private boolean mCapHwTx = false;
    private TXTestMode mStopMode = null;
    private WifiFormatConfig mParamConfig = new WifiFormatConfig();
    private GetTxInfoType mTxInfoBand = GetTxInfoType.TX_INFO_BAND0;
    private CompoundButton.OnCheckedChangeListener mWfPathListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.1
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER8");
            WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
        }
    };

    /* JADX INFO: renamed from: com.mediatek.engineermode.wifi.WiFiTxFormat$12, reason: invalid class name */
    static /* synthetic */ class AnonymousClass12 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode;

        static {
            int[] iArr = new int[TXTestMode.values().length];
            $SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode = iArr;
            try {
                iArr[TXTestMode.TM_CONTINUES.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode[TXTestMode.TM_100_PERCENT_DUTY.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode[TXTestMode.TM_CW_TONE.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    private enum GetTxInfoType {
        TX_INFO_NONE,
        TX_INFO_BAND0,
        TX_INFO_BAND1
    }

    enum TXTestMode {
        TM_CONTINUES("continuous packet tx"),
        TM_100_PERCENT_DUTY("100% duty cycle"),
        TM_CW_TONE("CW tone");

        private String mName;

        TXTestMode(String str) {
            this.mName = str;
        }

        @Override // java.lang.Enum
        public String toString() {
            return this.mName;
        }
    }

    private class TxHandler extends Handler {
        public TxHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                int i2 = AnonymousClass12.$SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode[WiFiTxFormat.this.mTestMode.ordinal()];
                if (i2 == 1) {
                    WiFiTxFormat.this.startContinuesTx();
                    return;
                } else if (i2 == 2) {
                    WiFiTxFormat.this.startDutyTx();
                    return;
                } else {
                    if (i2 != 3) {
                        return;
                    }
                    WiFiTxFormat.this.startCwToneTx();
                    return;
                }
            }
            if (i == 2) {
                WiFiTxFormat.this.stopTx();
                return;
            }
            if (i != 3) {
                if (i == 5 && WiFiTxFormat.this.mUiInitDone) {
                    WiFiTxFormat.this.getTxPower();
                    return;
                }
                return;
            }
            int[] iArr = {0};
            EMWifi.hqaGetTxInfo(WiFiTxFormat.this.mTxInfoBand.ordinal(), iArr);
            Elog.i(WiFiTxFormat.TAG, "hqaGetTxInfo:" + GetTxInfoType.TX_INFO_BAND0.ordinal() + " " + iArr[0]);
            WiFiTxFormat.this.updateTxCountView(String.valueOf(iArr[0]));
            if (WiFiTxFormat.this.mTarPktCnt == 0 || WiFiTxFormat.this.mTarPktCnt != iArr[0]) {
                WiFiTxFormat.this.mTxHandler.sendEmptyMessageDelayed(3, 1000L);
                return;
            }
            if (WiFiTxFormat.this.mTestMode.equals(TXTestMode.TM_CONTINUES)) {
                WiFiTxFormat.this.runOnUiThread(new Runnable() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.TxHandler.1
                    @Override // java.lang.Runnable
                    public void run() {
                        WiFiTxFormat.this.setUiEnable(true);
                    }
                });
            } else if (WiFiTxFormat.this.mTestMode.equals(TXTestMode.TM_100_PERCENT_DUTY)) {
                WiFiTxFormat wiFiTxFormat = WiFiTxFormat.this;
                wiFiTxFormat.ctrlDutyTx(wiFiTxFormat.mTxParam, 1);
                WiFiTxFormat.this.mStopMode = TXTestMode.TM_100_PERCENT_DUTY;
            }
        }
    }

    private class TxParam {
        int mAntIndex;
        int mCbwIndex;
        int mChID;
        int mChannelType;
        int mDbwIndex;
        int mFecIndex;
        int mGiIndex;
        int mHwTx;
        int mInterPktGap;
        int mNssValue;
        int mPktLength;
        int mPower;
        int mPreambleIndex;
        int mPrimCh;
        int mRateIndex;
        int mWfSelect;

        private TxParam() {
        }

        public String toString() {
            return "mChID:" + this.mChID + " mCbwIndex:" + this.mCbwIndex + " mDbwIndex:" + this.mDbwIndex + " mPrimCh:" + this.mPrimCh + " mWfSelect:" + this.mWfSelect + " mChannelType:" + this.mChannelType + " mPktLength:" + this.mPktLength + " mPower:" + this.mPower + " mRateIndex:" + this.mRateIndex + " mPreambleIndex:" + this.mPreambleIndex + " mFecIndex:" + this.mFecIndex + " mGiIndex:" + this.mGiIndex + " mNssValue:" + this.mNssValue + " mInterPktGap:" + this.mInterPktGap + " mHwTx:" + this.mHwTx;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkIfShowRuUI() {
        this.mViewRu.setVisibility((((WifiFormatConfig.PreambleConfig) this.mSpPreamble.getSelectedItem()).equals(WifiFormatConfig.PreambleConfig.PA_HE_TB) && ((TXTestMode) this.mSpMode.getSelectedItem()).equals(TXTestMode.TM_CONTINUES)) ? 0 : 8);
    }

    private void ctrlCwToneTx(TxParam txParam, int i) {
        EMWifi.hqaDbdcTXTone(this.mBandValue, txParam.mChannelType, i, txParam.mWfSelect);
        Elog.i(TAG, "hqaDbdcTXTone:" + this.mBandValue + " " + txParam.mChannelType + " " + i + " " + txParam.mWfSelect);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void ctrlDutyTx(TxParam txParam, int i) {
        EMWifi.hqaDbdcContinuousTX(this.mBandValue, i, txParam.mWfSelect, txParam.mPreambleIndex, txParam.mDbwIndex, txParam.mPrimCh, txParam.mChID, txParam.mRateIndex);
        Elog.i(TAG, "hqaDbdcContinuousTX:" + this.mBandValue + " " + i + " " + txParam.mWfSelect + " " + txParam.mPreambleIndex + " " + txParam.mDbwIndex + " " + txParam.mPrimCh + " " + txParam.mChID + " " + txParam.mRateIndex);
    }

    private void get11axInfo() {
        int[] iArr = {0};
        int[] iArr2 = {0};
        int[] iArr3 = {0};
        int[] iArr4 = {0};
        int[] iArr5 = {0};
        Elog.i(TAG, "start hqaGetAFactor");
        if (EMWifi.hqaGetAFactor(this.mBandValue, iArr, iArr2, iArr3, iArr4, iArr5) == 0) {
            Elog.i(TAG, "hqaGetAFactor:" + this.mBandValue + " " + iArr[0] + " " + iArr2[0] + " " + iArr3[0] + " " + iArr4[0] + " " + iArr5[0]);
            this.mTvAFactor.setText(String.valueOf(iArr[0]));
            this.mTvLdpcExtraSym.setText(String.valueOf(iArr2[0]));
            this.mTvPeDisa.setText(String.valueOf(iArr3[0]));
            TextView textView = this.mTvTxPe;
            StringBuilder sb = new StringBuilder();
            sb.append(String.valueOf(iArr4[0] * 4));
            sb.append("us");
            textView.setText(sb.toString());
            this.mTvLSig.setText(String.valueOf(iArr5[0]));
        }
    }

    private TxParam getPowerUpdateParam() {
        TxParam txParam = new TxParam();
        ChannelDataFormat channelDataFormat = this.mChList[this.mSpCh.getSelectedItemPosition()];
        txParam.mChID = channelDataFormat.getId();
        txParam.mChannelType = channelDataFormat.is5G() ? 1 : 0;
        if (this.mCbWf1.isChecked()) {
            txParam.mWfSelect = this.mCbWf2.isChecked() ? 3 : 1;
        } else if (this.mCbWf2.isChecked()) {
            txParam.mWfSelect = 2;
        }
        txParam.mCbwIndex = this.mParamConfig.getMapBw().get(this.mSpCbw.getSelectedItem().toString()).intValue();
        txParam.mDbwIndex = this.mParamConfig.getMapBw().get(this.mSpDbw.getSelectedItem().toString()).intValue();
        txParam.mPrimCh = 0;
        try {
            txParam.mPrimCh = Integer.parseInt(this.mSpPrimCh.getSelectedItem().toString());
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }
        txParam.mRateIndex = this.mParamConfig.getMapRate().get(this.mSpRate.getSelectedItem().toString()).intValue();
        WifiFormatConfig.PreambleConfig preambleConfig = (WifiFormatConfig.PreambleConfig) this.mSpPreamble.getSelectedItem();
        Elog.i(TAG, "preambleConfig:" + this.mSpPreamble.getSelectedItem() + preambleConfig.getName() + " " + preambleConfig.getIndex());
        txParam.mPreambleIndex = preambleConfig.getIndex();
        txParam.mGiIndex = preambleConfig.getGiList().indexOf(this.mSpGi.getSelectedItem().toString());
        txParam.mNssValue = this.mRgNss.getCheckedRadioButtonId() != R.id.wifi_format_tx_nss1_rb ? 2 : 1;
        return txParam;
    }

    private TxParam getTxParam() {
        TxParam powerUpdateParam = getPowerUpdateParam();
        powerUpdateParam.mPktLength = 1024;
        try {
            powerUpdateParam.mPktLength = Integer.parseInt(this.mEtPktLength.getText().toString());
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }
        powerUpdateParam.mPower = 22;
        try {
            powerUpdateParam.mPower = (int) (Float.parseFloat(this.mEtPower.getText().toString()) * 2.0f);
        } catch (NumberFormatException e2) {
            e2.printStackTrace();
        }
        powerUpdateParam.mFecIndex = this.mSpFec.getSelectedItemPosition();
        powerUpdateParam.mAntIndex = this.mRgAnt.getCheckedRadioButtonId() == R.id.wifi_format_tx_ant_main_rb ? 0 : 1;
        powerUpdateParam.mInterPktGap = Integer.parseInt(this.mEtInterPktGap.getText().toString());
        powerUpdateParam.mHwTx = this.mCbHwTx.isChecked() ? 1 : 0;
        return powerUpdateParam;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void getTxPower() {
        TxParam powerUpdateParam = getPowerUpdateParam();
        if (!isPowerParamValid()) {
            Elog.i(TAG, "get power param invalid");
            return;
        }
        Elog.i(TAG, powerUpdateParam.toString());
        setChannel(powerUpdateParam);
        if (this.mViewRu.getVisibility() == 0) {
            setRuSettings(powerUpdateParam);
        }
        EMWifi.hqaSetPreamble(powerUpdateParam.mPreambleIndex);
        EMWifi.hqaSetRate(powerUpdateParam.mRateIndex);
        EMWifi.hqaSetNss(powerUpdateParam.mNssValue);
        int iHqaGetTxPower = EMWifi.hqaGetTxPower(powerUpdateParam.mChID, this.mBandValue);
        Elog.i(TAG, "power get:" + iHqaGetTxPower);
        this.mEtPower.setText(String.valueOf(((double) iHqaGetTxPower) * 0.5d));
    }

    private void initComponent() {
        this.mCbWf1 = (CheckBox) findViewById(R.id.wifi_format_tx_wf0);
        this.mCbWf2 = (CheckBox) findViewById(R.id.wifi_format_tx_wf1);
        this.mCbWf1.setChecked(true);
        this.mCbWf1.setOnCheckedChangeListener(this.mWfPathListener);
        this.mCbWf2.setOnCheckedChangeListener(this.mWfPathListener);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.wifi_format_tx_nss_rg);
        this.mRgNss = radioGroup;
        radioGroup.check(R.id.wifi_format_tx_nss1_rb);
        this.mRgNss.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.2
            @Override // android.widget.RadioGroup.OnCheckedChangeListener
            public void onCheckedChanged(RadioGroup radioGroup2, int i) {
                Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER6");
                WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
            }
        });
        if (!this.mCap2by2) {
            findViewById(R.id.wifi_format_tx_wf_ll).setVisibility(8);
            findViewById(R.id.wifi_format_tx_nss_ll).setVisibility(8);
        }
        RadioGroup radioGroup2 = (RadioGroup) findViewById(R.id.wifi_format_tx_ant_swap_rg);
        this.mRgAnt = radioGroup2;
        radioGroup2.check(R.id.wifi_format_tx_ant_main_rb);
        if (!this.mCapAntSwap) {
            findViewById(R.id.wifi_format_tx_ant_swap_ll).setVisibility(8);
        }
        this.mSpCh = (Spinner) findViewById(R.id.wifi_format_tx0_channel_spinner);
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mChannelAdapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        for (ChannelDataFormat channelDataFormat : this.mChList) {
            this.mChannelAdapter.add(channelDataFormat.getName());
        }
        this.mSpCh.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mSpCh.setSelection(0, false);
        this.mSpCh.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER1");
                WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mBwAdapter = arrayAdapter2;
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBwAdapter.addAll(this.mParamConfig.getMapBw().keySet());
        Spinner spinner = (Spinner) findViewById(R.id.wifi_format_tx_cbw_spinner);
        this.mSpCbw = spinner;
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.4
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                WiFiTxFormat.this.updateParamWithCbw(WiFiTxFormat.this.mParamConfig.getMapBw().get((String) WiFiTxFormat.this.mBwAdapter.getItem(i)).intValue());
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mSpCbw.setAdapter((SpinnerAdapter) this.mBwAdapter);
        this.mSpCbw.setSelection(this.mParamConfig.getBW20Index());
        Spinner spinner2 = (Spinner) findViewById(R.id.wifi_format_tx_dbw_spinner);
        this.mSpDbw = spinner2;
        spinner2.setAdapter((SpinnerAdapter) this.mBwAdapter);
        this.mSpDbw.setSelection(this.mParamConfig.getBW20Index());
        this.mViewRu = findViewById(R.id.wifi_11_ax_ll);
        this.mSpPrimCh = (Spinner) findViewById(R.id.wifi_format_tx_prim_ch_spinner);
        this.mSpMode = (Spinner) findViewById(R.id.wifi_format_mode_spinner);
        ArrayAdapter<TXTestMode> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mTestModeAdapter = arrayAdapter3;
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mTestModeAdapter.addAll(TXTestMode.values());
        this.mSpMode.setAdapter((SpinnerAdapter) this.mTestModeAdapter);
        this.mSpMode.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.5
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                WiFiTxFormat.this.checkIfShowRuUI();
                if (((TXTestMode) WiFiTxFormat.this.mSpMode.getSelectedItem()).equals(TXTestMode.TM_100_PERCENT_DUTY)) {
                    WiFiTxFormat.this.mEtPktCnt.setText(String.valueOf(100));
                    WiFiTxFormat.this.mEtPktCnt.setEnabled(false);
                } else {
                    WiFiTxFormat.this.mEtPktCnt.setText(String.valueOf(0));
                    WiFiTxFormat.this.mEtPktCnt.setEnabled(true);
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        Spinner spinner3 = (Spinner) findViewById(R.id.wifi_format_tx_preamble_spinner);
        this.mSpPreamble = spinner3;
        spinner3.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.6
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                WiFiTxFormat.this.updateParamWithPreamble((WifiFormatConfig.PreambleConfig) WiFiTxFormat.this.mPreambleAdapter.getItem(i));
                WiFiTxFormat.this.checkIfShowRuUI();
                Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER2");
                WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<WifiFormatConfig.PreambleConfig> arrayAdapter4 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPreambleAdapter = arrayAdapter4;
        arrayAdapter4.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mPreambleAdapter.addAll(this.mParamConfig.getPreambleConfig(true, this.mCap11ax));
        this.mSpPreamble.setAdapter((SpinnerAdapter) this.mPreambleAdapter);
        Spinner spinner4 = (Spinner) findViewById(R.id.wifi_format_rate_spinner);
        this.mSpRate = spinner4;
        spinner4.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.7
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (WiFiTxFormat.this.mSpRate.getSelectedItem().toString().contains(WiFiTxFormat.RATE_DCM)) {
                    WiFiTxFormat.this.mGiAdapter.remove(WiFiTxFormat.this.mParamConfig.getGiNotForDcm());
                } else {
                    if (WiFiTxFormat.this.mParamConfig.getPreambleWithGiNotForDcm().contains((WifiFormatConfig.PreambleConfig) WiFiTxFormat.this.mSpPreamble.getSelectedItem()) && WiFiTxFormat.this.mGiAdapter.getPosition(WiFiTxFormat.this.mParamConfig.getGiNotForDcm()) < 0) {
                        WiFiTxFormat.this.mGiAdapter.add(WiFiTxFormat.this.mParamConfig.getGiNotForDcm());
                    }
                }
                Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER3");
                WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter5 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mRateAdapter = arrayAdapter5;
        arrayAdapter5.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpRate.setAdapter((SpinnerAdapter) this.mRateAdapter);
        this.mSpGi = (Spinner) findViewById(R.id.wifi_format_guard_interval_spinner);
        ArrayAdapter<String> arrayAdapter6 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mGiAdapter = arrayAdapter6;
        arrayAdapter6.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpGi.setAdapter((SpinnerAdapter) this.mGiAdapter);
        Spinner spinner5 = (Spinner) findViewById(R.id.wifi_ru_category_spinner);
        this.mSpRuConfig = spinner5;
        spinner5.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.8
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                WifiFormatConfig.RuConfig ruConfig = (WifiFormatConfig.RuConfig) WiFiTxFormat.this.mRuConfigAdapter.getItem(i);
                WiFiTxFormat.this.updateParamWithRuConfig(WiFiTxFormat.this.mParamConfig.getMapBw().get((String) WiFiTxFormat.this.mBwAdapter.getItem(WiFiTxFormat.this.mSpCbw.getSelectedItemPosition())).intValue(), ruConfig);
                Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER4");
                WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<WifiFormatConfig.RuConfig> arrayAdapter7 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mRuConfigAdapter = arrayAdapter7;
        arrayAdapter7.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpRuConfig.setAdapter((SpinnerAdapter) this.mRuConfigAdapter);
        this.mSpRuAllocation = (Spinner) findViewById(R.id.wifi_ru_allocation_spinner);
        ArrayAdapter<String> arrayAdapter8 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mRuAllocationAdapter = arrayAdapter8;
        arrayAdapter8.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpRuAllocation.setAdapter((SpinnerAdapter) this.mRuAllocationAdapter);
        this.mSpRuAllocation.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.9
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                Elog.i(WiFiTxFormat.TAG, "MSG_GET_TX_POWER5");
                WiFiTxFormat.this.mTxHandler.sendEmptyMessage(5);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mSpRuIndex = (Spinner) findViewById(R.id.wifi_ru_index_spinner);
        ArrayAdapter<Integer> arrayAdapter9 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mRuIndexAdapter = arrayAdapter9;
        arrayAdapter9.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpRuIndex.setAdapter((SpinnerAdapter) this.mRuIndexAdapter);
        this.mSpFec = (Spinner) findViewById(R.id.wifi_format_fec_spinner);
        EditText editText = (EditText) findViewById(R.id.wif_format_pkt_length_et);
        this.mEtPktLength = editText;
        editText.setText(String.valueOf(1024));
        EditText editText2 = (EditText) findViewById(R.id.wif_format_pkt_cnt_et);
        this.mEtPktCnt = editText2;
        editText2.setText(String.valueOf(0));
        EditText editText3 = (EditText) findViewById(R.id.wifi_format_tx_power_et);
        this.mEtPower = editText3;
        editText3.setText(String.valueOf(22));
        EditText editText4 = (EditText) findViewById(R.id.wifi_tx_ru_sta_id_et);
        this.mEtRuStaId = editText4;
        editText4.setText(String.valueOf(0));
        this.mTvLSig = (TextView) findViewById(R.id.wifi_11ax_tb_l_sig_len_tv);
        this.mTvLdpcExtraSym = (TextView) findViewById(R.id.wifi_11ax_tb_ldpc_extra_sym_tv);
        this.mTvPeDisa = (TextView) findViewById(R.id.wifi_11ax_tb_pe_disambiguity_tv);
        this.mTvAFactor = (TextView) findViewById(R.id.wifi_11ax_tb_a_factor_tv);
        this.mTvTxPe = (TextView) findViewById(R.id.wifi_11ax_tb_tx_pe_tv);
        this.mTvTxedCnt = (TextView) findViewById(R.id.wifi_format_tx_count_tv);
        Button button = (Button) findViewById(R.id.wifi_format_tx_go_btn);
        this.mBtnGo = button;
        button.setOnClickListener(this);
        Button button2 = (Button) findViewById(R.id.wifi_format_tx_stop_btn);
        this.mBtnStop = button2;
        button2.setOnClickListener(this);
        if (this.mDbdcMode || !this.mCap2by2) {
            findViewById(R.id.wifi_format_tx_wf_ll).setVisibility(8);
            findViewById(R.id.wifi_format_tx_nss_ll).setVisibility(8);
        }
        EditText editText5 = (EditText) findViewById(R.id.wifi_format_tx_inter_pkt_gap);
        this.mEtInterPktGap = editText5;
        editText5.setText(String.valueOf(50));
        this.mEtInterPktGap.addTextChangedListener(new TextWatcher() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.10
            @Override // android.text.TextWatcher
            public void afterTextChanged(Editable editable) {
            }

            @Override // android.text.TextWatcher
            public void beforeTextChanged(CharSequence charSequence, int i, int i2, int i3) {
            }

            @Override // android.text.TextWatcher
            public void onTextChanged(CharSequence charSequence, int i, int i2, int i3) {
                if (charSequence == null || charSequence.length() <= 0 || Integer.parseInt(charSequence.toString()) <= 255) {
                    return;
                }
                WiFiTxFormat.this.mEtInterPktGap.setText(String.valueOf(255));
            }
        });
        this.mCbHwTx = (CheckBox) findViewById(R.id.wifi_format_tx_hw_enable_cb);
        if (!this.mCapHwTx) {
            findViewById(R.id.wifi_format_tx_inter_packet_gap_ll).setVisibility(8);
            findViewById(R.id.wifi_format_tx_hw_enable_ll).setVisibility(8);
        }
        setUiEnable(true);
        this.mUiInitDone = true;
        Elog.i(TAG, "init done");
    }

    private boolean isPowerParamValid() {
        if (this.mViewRu.getVisibility() == 0) {
            return this.mSpRuConfig.getSelectedItemPosition() >= 0 && this.mSpRuIndex.getSelectedItemPosition() >= 0;
        }
        return true;
    }

    private void setChannel(TxParam txParam) {
        EMWifi.hqaSetTxPath(txParam.mWfSelect, this.mBandValue);
        EMWifi.hqaSetRxPath(txParam.mWfSelect, this.mBandValue);
        Elog.i(TAG, "hqaSetTxPath:" + txParam.mWfSelect + " " + this.mBandValue);
        Elog.i(TAG, "hqaSetRxPath:" + txParam.mWfSelect + " " + this.mBandValue);
        if (this.mCapAntSwap) {
            EMWifi.hqaSetAntSwap(txParam.mAntIndex);
            Elog.i(TAG, "hqaSetAntSwap:" + txParam.mAntIndex);
        }
        EMWifi.hqaDbdcSetChannel(this.mBandValue, txParam.mChID, 0, txParam.mCbwIndex, txParam.mDbwIndex, txParam.mPrimCh, txParam.mChannelType);
        Elog.i(TAG, "hqaDbdcSetChannel:" + this.mBandValue + " " + txParam.mChID + " 0 " + txParam.mCbwIndex + " " + txParam.mDbwIndex + " " + txParam.mPrimCh + " " + txParam.mChannelType);
    }

    private void setRuSettings(TxParam txParam) {
        WifiFormatConfig.RuConfig ruConfig = (WifiFormatConfig.RuConfig) this.mSpRuConfig.getSelectedItem();
        int i = 0;
        try {
            i = Integer.parseInt(this.mEtRuStaId.getText().toString());
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }
        EMWifi.hqaSetRUSettings(this.mBandValue, ruConfig.getIndex(), ruConfig.getAllocation(), i, this.mRuIndexAdapter.getItem(this.mSpRuIndex.getSelectedItemPosition()).intValue(), txParam.mRateIndex, txParam.mFecIndex, txParam.mNssValue, 1, txParam.mPktLength, txParam.mPower);
        Elog.i(TAG, "hqaSetRUSettings:" + this.mBandValue + " " + ruConfig.getIndex() + " " + ruConfig.getAllocation() + " " + i + " " + this.mRuIndexAdapter.getItem(this.mSpRuIndex.getSelectedItemPosition()) + " " + txParam.mRateIndex + " " + txParam.mFecIndex + " " + txParam.mNssValue + " 1 " + txParam.mPktLength + " " + txParam.mPower);
    }

    private void setTxContent(TxParam txParam) {
        EMWifi.hqaDbdcSetTXContent(this.mBandValue, txParam.mPktLength);
        Elog.i(TAG, "hqaDbdcSetTXContent:" + this.mBandValue + " " + txParam.mPktLength);
    }

    private void setTxPower(TxParam txParam) {
        EMWifi.hqaSetTxPowerExt(txParam.mPower, this.mBandValue, txParam.mChID, txParam.mChannelType, txParam.mWfSelect);
        Elog.i(TAG, "hqaSetTxPowerExt:" + txParam.mPower + " " + this.mBandValue + " " + txParam.mChID + " " + txParam.mChannelType + " " + txParam.mWfSelect);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setUiEnable(boolean z) {
        this.mViewRu.setEnabled(z);
        this.mBtnGo.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
        this.mSpCh.setEnabled(z);
        this.mSpMode.setEnabled(z);
        this.mSpCbw.setEnabled(z);
        this.mSpDbw.setEnabled(z);
        this.mSpPrimCh.setEnabled(z);
        this.mSpPreamble.setEnabled(z);
        this.mSpRate.setEnabled(z);
        this.mSpGi.setEnabled(z);
        this.mSpRuConfig.setEnabled(z);
        this.mSpRuAllocation.setEnabled(z);
        this.mSpRuIndex.setEnabled(z);
        this.mSpFec.setEnabled(z);
        this.mEtPktLength.setEnabled(z);
        if (((TXTestMode) this.mSpMode.getSelectedItem()).equals(TXTestMode.TM_100_PERCENT_DUTY)) {
            this.mEtPktCnt.setEnabled(false);
        } else {
            this.mEtPktCnt.setEnabled(z);
        }
        this.mEtPower.setEnabled(z);
        this.mEtRuStaId.setEnabled(z);
        this.mCbWf1.setEnabled(z);
        this.mCbWf2.setEnabled(z);
        this.mRgNss.setEnabled(z);
        int childCount = this.mRgNss.getChildCount();
        for (int i = 0; i < childCount; i++) {
            this.mRgNss.getChildAt(i).setEnabled(z);
        }
        int childCount2 = this.mRgAnt.getChildCount();
        for (int i2 = 0; i2 < childCount2; i2++) {
            this.mRgAnt.getChildAt(i2).setEnabled(z);
        }
        this.mEtInterPktGap.setEnabled(z);
        this.mCbHwTx.setEnabled(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startContinuesTx() {
        Elog.i(TAG, "startContinuesTx");
        updateTxCountView("");
        setChannel(this.mTxParam);
        setTxContent(this.mTxParam);
        setTxPower(this.mTxParam);
        if (this.mViewRu.getVisibility() == 0) {
            setRuSettings(this.mTxParam);
        }
        int i = 0;
        try {
            i = Integer.parseInt(this.mEtPktCnt.getText().toString());
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }
        startTx(this.mTxParam, i);
        this.mStopMode = TXTestMode.TM_CONTINUES;
        if (this.mViewRu.getVisibility() == 0) {
            get11axInfo();
        }
        this.mTxHandler.sendEmptyMessageDelayed(3, 1000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startCwToneTx() {
        updateTxCountView("NA");
        setChannel(this.mTxParam);
        ctrlCwToneTx(this.mTxParam, 1);
        this.mStopMode = TXTestMode.TM_CW_TONE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startDutyTx() {
        updateTxCountView("");
        setChannel(this.mTxParam);
        setTxContent(this.mTxParam);
        setTxPower(this.mTxParam);
        startTx(this.mTxParam, 100);
        this.mStopMode = TXTestMode.TM_CONTINUES;
        this.mTxHandler.sendEmptyMessageDelayed(3, 1000L);
    }

    private void startTx(TxParam txParam, int i) {
        this.mTarPktCnt = i;
        EMWifi.hqaDbdcStartTX(this.mBandValue, i, txParam.mPreambleIndex, txParam.mRateIndex, txParam.mPower, txParam.mFecIndex, txParam.mInterPktGap, txParam.mGiIndex, txParam.mWfSelect, txParam.mNssValue, txParam.mHwTx);
        Elog.i(TAG, "hqaDbdcStartTX:" + this.mBandValue + " " + i + " " + txParam.mPreambleIndex + " " + txParam.mRateIndex + " " + txParam.mPower + " " + txParam.mFecIndex + " " + txParam.mInterPktGap + " " + txParam.mGiIndex + " " + txParam.mWfSelect + " " + txParam.mNssValue + " " + txParam.mHwTx);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopTx() {
        if (this.mStopMode == null) {
            return;
        }
        int i = AnonymousClass12.$SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode[this.mStopMode.ordinal()];
        if (i == 1) {
            EMWifi.hqaDbdcStopTX(this.mBandValue);
            Elog.i(TAG, "hqaDbdcStopTX:" + this.mBandValue);
            this.mTxHandler.removeMessages(3);
        } else if (i == 2) {
            ctrlDutyTx(this.mTxParam, 0);
        } else if (i != 3) {
            return;
        } else {
            ctrlCwToneTx(this.mTxParam, 0);
        }
        this.mStopMode = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateParamWithCbw(int i) {
        LinkedHashMap<WifiFormatConfig.RuConfig, Integer> ruConfig = this.mParamConfig.getRuConfig(i);
        if (ruConfig != null) {
            int selectedItemPosition = this.mSpRuConfig.getSelectedItemPosition();
            this.mRuConfigAdapter.clear();
            this.mRuConfigAdapter.addAll(ruConfig.keySet());
            this.mRuConfigAdapter.notifyDataSetChanged();
            if (selectedItemPosition < 0 || selectedItemPosition >= this.mRuConfigAdapter.getCount()) {
                this.mSpRuConfig.setSelection(0);
            } else {
                updateParamWithRuConfig(i, this.mRuConfigAdapter.getItem(this.mSpRuConfig.getSelectedItemPosition()));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateParamWithPreamble(WifiFormatConfig.PreambleConfig preambleConfig) {
        String[] rateList = preambleConfig.getRateList();
        List<String> giList = preambleConfig.getGiList();
        this.mGiAdapter.clear();
        this.mGiAdapter.addAll(giList);
        this.mGiAdapter.notifyDataSetChanged();
        this.mSpGi.setSelection(0);
        this.mRateAdapter.clear();
        this.mRateAdapter.addAll(rateList);
        this.mRateAdapter.notifyDataSetChanged();
        this.mSpRate.setSelection(0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateParamWithRuConfig(int i, WifiFormatConfig.RuConfig ruConfig) {
        if (ruConfig != null) {
            this.mRuAllocationAdapter.clear();
            this.mRuAllocationAdapter.add("0x" + Integer.toHexString(ruConfig.getAllocation()));
            this.mRuAllocationAdapter.notifyDataSetChanged();
            this.mSpRuAllocation.setSelection(0);
            this.mRuIndexAdapter.clear();
            LinkedHashMap<WifiFormatConfig.RuConfig, Integer> ruConfig2 = this.mParamConfig.getRuConfig(i);
            if (ruConfig2 != null) {
                int iIntValue = ruConfig2.get(ruConfig).intValue();
                int offset = ruConfig.getOffset();
                this.mRuIndexAdapter.clear();
                for (int i2 = 0; i2 <= iIntValue; i2++) {
                    this.mRuIndexAdapter.add(Integer.valueOf(i2 + offset));
                }
                this.mRuIndexAdapter.notifyDataSetChanged();
                this.mSpRuIndex.setSelection(0);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateTxCountView(final String str) {
        runOnUiThread(new Runnable() { // from class: com.mediatek.engineermode.wifi.WiFiTxFormat.11
            @Override // java.lang.Runnable
            public void run() {
                WiFiTxFormat.this.mTvTxedCnt.setText(str);
            }
        });
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity
    boolean isInTestProcess() {
        return !this.mBtnGo.isEnabled();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (!view.equals(this.mBtnGo)) {
            if (view.equals(this.mBtnStop)) {
                this.mTxHandler.sendEmptyMessage(2);
                setUiEnable(true);
                return;
            }
            return;
        }
        if (!this.mCbWf1.isChecked() && !this.mCbWf2.isChecked()) {
            Toast.makeText(this, R.string.wifi_dialog_no_path_select, 1).show();
            return;
        }
        String string = this.mEtInterPktGap.getText().toString();
        if (string == null || string.length() <= 0) {
            this.mEtInterPktGap.setText(String.valueOf(50));
        }
        this.mTxParam = getTxParam();
        this.mTestMode = (TXTestMode) this.mSpMode.getSelectedItem();
        TxHandler txHandler = this.mTxHandler;
        if (txHandler != null) {
            txHandler.sendEmptyMessage(1);
            setUiEnable(false);
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Intent intent = getIntent();
        String stringExtra = intent.getStringExtra("mode");
        if (stringExtra != null) {
            this.mDbdcMode = true;
            if (stringExtra.equals("TX Band1")) {
                this.mBandValue = 1;
                this.mTxInfoBand = GetTxInfoType.TX_INFO_BAND1;
            }
            Elog.i(TAG, "wifi tx in dbdc mode");
        }
        EMWifi.hqaSetBandMode(this.mDbdcMode ? 2 : 1);
        this.mCapAntSwap = intent.getBooleanExtra("key_ant_swap", false);
        this.mCap11ax = intent.getBooleanExtra("key_11ax", false);
        this.mCap2by2 = intent.getBooleanExtra("key_2by2", false);
        this.mCapHwTx = intent.getBooleanExtra("key_hw_tx", false);
        setContentView(R.layout.wifi_tx_format);
        this.mChList = ChannelInfo.getAllChannels();
        HandlerThread handlerThread = new HandlerThread(TAG);
        this.mTxThread = handlerThread;
        handlerThread.start();
        this.mTxHandler = new TxHandler(this.mTxThread.getLooper());
        initComponent();
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onDestroy() {
        Elog.i(TAG, "ondestory with mTxInfoBand " + this.mTxInfoBand);
        TxHandler txHandler = this.mTxHandler;
        if (txHandler != null) {
            txHandler.removeMessages(3);
        }
        this.mTxThread.quit();
        super.onDestroy();
    }
}

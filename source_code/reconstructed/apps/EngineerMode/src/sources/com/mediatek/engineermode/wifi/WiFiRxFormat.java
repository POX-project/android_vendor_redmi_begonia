package com.mediatek.engineermode.wifi;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.support.v4.view.InputDeviceCompat;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiRxFormat extends WiFiTestActivity implements View.OnClickListener {
    private static final int DEFAULT_PRIM_CH = 0;
    private static final int DEFAULT_STA_ID = 0;
    private static final int HANDLER_EVENT_GO = 1;
    private static final int HANDLER_EVENT_STOP = 2;
    private static final int HANDLER_EVENT_UPDATE = 3;
    private static final int ONE_SECOND = 1000;
    private static final String TAG = "WifiRX";
    private Button mBtnGo;
    private Button mBtnStop;
    private CheckBox mCbWf1;
    private CheckBox mCbWf2;
    private ChannelDataFormat[] mChList;
    private EditText mEtStaId;
    private RadioGroup mRgAnt;
    private RxHandler mRxHandler;
    private RxParam mRxParam;
    private HandlerThread mRxThread;
    private Spinner mSpCbw;
    private Spinner mSpCh;
    private Spinner mSpDbw;
    private Spinner mSpPreamble;
    private Spinner mSpPrimCh;
    private TextView mTvFcsErr;
    private TextView mTvPer;
    private TextView mTvRssi0;
    private TextView mTvRssi1;
    private TextView mTvRxOk;
    private ArrayAdapter<String> mChannelAdapter = null;
    private ArrayAdapter<String> mBwAdapter = null;
    private ArrayAdapter<WifiFormatConfig.PreambleConfig> mPreambleAdapter = null;
    private WifiFormatConfig mParamConfig = new WifiFormatConfig();
    private int mBandValue = 0;
    private boolean mDbdcMode = false;
    private boolean mCapAntSwap = false;
    private boolean mCap11ax = false;
    private boolean mCap2by2 = false;

    private class RxHandler extends Handler {
        public RxHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                WiFiRxFormat.this.startRx();
                WiFiRxFormat.this.mRxHandler.sendEmptyMessageDelayed(3, 1000L);
            } else if (i == 2) {
                WiFiRxFormat.this.stopRx();
                WiFiRxFormat.this.mRxHandler.removeMessages(3);
            } else {
                if (i != 3) {
                    return;
                }
                WiFiRxFormat.this.updateRxResult();
                WiFiRxFormat.this.mRxHandler.sendEmptyMessageDelayed(3, 1000L);
            }
        }
    }

    private class RxParam {
        int mAntIndex;
        int mCbwIndex;
        int mChID;
        int mChannelType;
        int mDbwIndex;
        int mPreambleIndex;
        int mPrimCh;
        int mStaId;
        int mWfSelect;

        private RxParam() {
        }
    }

    private RxParam getRxParam() {
        RxParam rxParam = new RxParam();
        ChannelDataFormat channelDataFormat = this.mChList[this.mSpCh.getSelectedItemPosition()];
        rxParam.mChID = channelDataFormat.getId();
        rxParam.mChannelType = channelDataFormat.is5G() ? 1 : 0;
        if (this.mCbWf1.isChecked()) {
            rxParam.mWfSelect = this.mCbWf2.isChecked() ? 3 : 1;
        } else if (this.mCbWf2.isChecked()) {
            rxParam.mWfSelect = 2;
        }
        rxParam.mCbwIndex = this.mParamConfig.getMapBw().get(this.mSpCbw.getSelectedItem().toString()).intValue();
        rxParam.mDbwIndex = this.mParamConfig.getMapBw().get(this.mSpDbw.getSelectedItem().toString()).intValue();
        rxParam.mPrimCh = 0;
        try {
            rxParam.mPrimCh = Integer.parseInt(this.mSpPrimCh.getSelectedItem().toString());
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }
        rxParam.mStaId = 0;
        try {
            rxParam.mStaId = Integer.parseInt(this.mEtStaId.getText().toString());
        } catch (NumberFormatException e2) {
            e2.printStackTrace();
        }
        WifiFormatConfig.PreambleConfig preambleConfig = (WifiFormatConfig.PreambleConfig) this.mSpPreamble.getSelectedItem();
        Elog.i(TAG, "preambleConfig:" + this.mSpPreamble.getSelectedItem() + preambleConfig.getName() + " " + preambleConfig.getIndex());
        rxParam.mPreambleIndex = preambleConfig.getIndex();
        rxParam.mAntIndex = this.mRgAnt.getCheckedRadioButtonId() == R.id.wifi_format_rx_ant_main_rb ? 0 : 1;
        return rxParam;
    }

    private void initComponent() {
        this.mCbWf1 = (CheckBox) findViewById(R.id.wifi_format_rx_wf0);
        this.mCbWf2 = (CheckBox) findViewById(R.id.wifi_format_rx_wf1);
        if (!this.mCap2by2) {
            findViewById(R.id.wifi_format_rx_wf_ll).setVisibility(8);
        }
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.wifi_format_rx_ant_swap_rg);
        this.mRgAnt = radioGroup;
        radioGroup.check(R.id.wifi_format_rx_ant_main_rb);
        if (!this.mCapAntSwap) {
            findViewById(R.id.wifi_format_rx_ant_swap_ll).setVisibility(8);
        }
        this.mSpCh = (Spinner) findViewById(R.id.wifi_format_rx0_channel_spinner);
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mChannelAdapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        for (ChannelDataFormat channelDataFormat : this.mChList) {
            this.mChannelAdapter.add(channelDataFormat.getName());
        }
        this.mSpCh.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mBwAdapter = arrayAdapter2;
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBwAdapter.addAll(this.mParamConfig.getMapBw().keySet());
        Spinner spinner = (Spinner) findViewById(R.id.wifi_format_rx_cbw_spinner);
        this.mSpCbw = spinner;
        spinner.setAdapter((SpinnerAdapter) this.mBwAdapter);
        this.mSpCbw.setSelection(this.mParamConfig.getBW20Index());
        Spinner spinner2 = (Spinner) findViewById(R.id.wifi_format_rx_dbw_spinner);
        this.mSpDbw = spinner2;
        spinner2.setAdapter((SpinnerAdapter) this.mBwAdapter);
        this.mSpDbw.setSelection(this.mParamConfig.getBW20Index());
        this.mSpPrimCh = (Spinner) findViewById(R.id.wifi_format_rx_prim_ch_spinner);
        this.mSpPreamble = (Spinner) findViewById(R.id.wifi_format_rx_preamble_spinner);
        ArrayAdapter<WifiFormatConfig.PreambleConfig> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPreambleAdapter = arrayAdapter3;
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mPreambleAdapter.addAll(this.mParamConfig.getPreambleConfig(false, this.mCap11ax));
        this.mSpPreamble.setAdapter((SpinnerAdapter) this.mPreambleAdapter);
        EditText editText = (EditText) findViewById(R.id.wifi_rx_ru_sta_id_et);
        this.mEtStaId = editText;
        editText.setText(String.valueOf(0));
        if (!this.mCap11ax) {
            findViewById(R.id.wifi_format_rx_11ax_ll).setVisibility(8);
        }
        this.mTvFcsErr = (TextView) findViewById(R.id.wifi_format_rx_fcs_err_tv);
        this.mTvRxOk = (TextView) findViewById(R.id.wifi_format_rx_ok_tv);
        this.mTvPer = (TextView) findViewById(R.id.wifi_format_rx_per_tv);
        this.mTvRssi0 = (TextView) findViewById(R.id.wifi_format_rx0_rssi_tv);
        this.mTvRssi1 = (TextView) findViewById(R.id.wifi_format_rx1_rssi_tv);
        Button button = (Button) findViewById(R.id.wifi_format_rx_go_btn);
        this.mBtnGo = button;
        button.setOnClickListener(this);
        Button button2 = (Button) findViewById(R.id.wifi_format_rx_stop_btn);
        this.mBtnStop = button2;
        button2.setOnClickListener(this);
        if (this.mDbdcMode) {
            findViewById(R.id.wifi_format_rx_wf_ll).setVisibility(8);
        }
        setUiEnable(true);
    }

    private void setUiEnable(boolean z) {
        this.mBtnGo.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
        this.mSpCh.setEnabled(z);
        this.mSpCbw.setEnabled(z);
        this.mSpDbw.setEnabled(z);
        this.mSpPrimCh.setEnabled(z);
        this.mSpPreamble.setEnabled(z);
        this.mCbWf1.setEnabled(z);
        this.mCbWf2.setEnabled(z);
        this.mEtStaId.setEnabled(z);
        int childCount = this.mRgAnt.getChildCount();
        for (int i = 0; i < childCount; i++) {
            this.mRgAnt.getChildAt(i).setEnabled(z);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startRx() {
        EMWifi.hqaSetTxPath(this.mRxParam.mWfSelect, this.mBandValue);
        EMWifi.hqaSetRxPath(this.mRxParam.mWfSelect, this.mBandValue);
        Elog.i(TAG, "hqaSetTxPath:" + this.mRxParam.mWfSelect + " " + this.mBandValue);
        Elog.i(TAG, "hqaSetRxPath:" + this.mRxParam.mWfSelect + " " + this.mBandValue);
        if (this.mCapAntSwap) {
            EMWifi.hqaSetAntSwap(this.mRxParam.mAntIndex);
            Elog.i(TAG, "hqaSetAntSwap:" + this.mRxParam.mAntIndex);
        }
        EMWifi.hqaDbdcSetChannel(this.mBandValue, this.mRxParam.mChID, 0, this.mRxParam.mCbwIndex, this.mRxParam.mDbwIndex, this.mRxParam.mPrimCh, this.mRxParam.mChannelType);
        Elog.i(TAG, "hqaDbdcSetChannel:" + this.mBandValue + " " + this.mRxParam.mChID + " 0 " + this.mRxParam.mCbwIndex + " " + this.mRxParam.mDbwIndex + " " + this.mRxParam.mPrimCh + " " + this.mRxParam.mChannelType);
        EMWifi.hqaDbdcStartRXExt(this.mBandValue, this.mRxParam.mWfSelect, this.mRxParam.mStaId, this.mRxParam.mPreambleIndex);
        StringBuilder sb = new StringBuilder();
        sb.append("hqaDbdcStartRXExt:");
        sb.append(this.mBandValue);
        sb.append(" ");
        sb.append(this.mRxParam.mWfSelect);
        sb.append(" ");
        sb.append(this.mRxParam.mStaId);
        sb.append(" ");
        sb.append(this.mRxParam.mPreambleIndex);
        Elog.i(TAG, sb.toString());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopRx() {
        EMWifi.hqaDbdcStopRX(this.mBandValue);
        Elog.i(TAG, "hqaDbdcStopRX:" + this.mBandValue);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateRxResult() {
        int[] iArr = {0};
        int[] iArr2 = {0};
        int[] iArr3 = {0};
        int[] iArr4 = {0};
        Elog.i(TAG, "start hqaGetRXStatisticsAllExt");
        if (EMWifi.hqaGetRXStatisticsAllExt(this.mBandValue, iArr, iArr2, iArr3, iArr4) == 0) {
            Elog.i(TAG, "hqaGetRXStatisticsAllExt:" + this.mBandValue + " " + iArr[0] + " " + iArr2[0] + " " + iArr3[0] + " " + iArr4[0]);
            this.mTvFcsErr.setText(String.valueOf(iArr[0]));
            this.mTvRxOk.setText(String.valueOf(iArr2[0]));
            this.mTvRssi0.setText(String.valueOf(iArr3[0] >= 128 ? iArr3[0] + InputDeviceCompat.SOURCE_ANY : iArr3[0]));
            this.mTvRssi1.setText(String.valueOf(iArr4[0] >= 128 ? iArr4[0] + InputDeviceCompat.SOURCE_ANY : iArr4[0]));
            int i = iArr[0] + iArr2[0];
            if (i != 0) {
                this.mTvPer.setText(String.valueOf((iArr[0] * 100) / i));
            } else {
                this.mTvPer.setText("0");
            }
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity
    boolean isInTestProcess() {
        return !this.mBtnGo.isEnabled();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (!view.equals(this.mBtnGo)) {
            if (view.equals(this.mBtnStop)) {
                this.mRxHandler.sendEmptyMessage(2);
                setUiEnable(true);
                return;
            }
            return;
        }
        if (!this.mCbWf1.isChecked() && !this.mCbWf2.isChecked()) {
            Toast.makeText(this, R.string.wifi_dialog_no_path_select, 1).show();
            return;
        }
        this.mRxParam = getRxParam();
        RxHandler rxHandler = this.mRxHandler;
        if (rxHandler != null) {
            rxHandler.sendEmptyMessage(1);
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
            if (stringExtra.equals("RX Band1")) {
                this.mBandValue = 1;
            }
            Elog.i(TAG, "wifi rx in dbdc mode");
        }
        EMWifi.hqaSetBandMode(this.mDbdcMode ? 2 : 1);
        this.mCapAntSwap = intent.getBooleanExtra("key_ant_swap", false);
        this.mCap11ax = intent.getBooleanExtra("key_11ax", false);
        this.mCap2by2 = intent.getBooleanExtra("key_2by2", false);
        setContentView(R.layout.wifi_rx_format);
        this.mChList = ChannelInfo.getAllChannels();
        HandlerThread handlerThread = new HandlerThread(TAG);
        this.mRxThread = handlerThread;
        handlerThread.start();
        this.mRxHandler = new RxHandler(this.mRxThread.getLooper());
        initComponent();
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onDestroy() {
        this.mRxHandler.removeMessages(3);
        this.mRxThread.quit();
        super.onDestroy();
    }
}

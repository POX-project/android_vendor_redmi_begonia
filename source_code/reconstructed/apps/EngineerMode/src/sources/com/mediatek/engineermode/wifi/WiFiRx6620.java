package com.mediatek.engineermode.wifi;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemClock;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiRx6620 extends WiFiTestActivity implements View.OnClickListener {
    private static final int BANDWIDTH_INDEX_40M = 1;
    private static final int BANDWIDTH_INDEX_80M = 2;
    private static final String[] BW_ADVANCED_ITEMS = {"BW20", "BW40", "BW80"};
    private static final int BW_INDX_ADVANCED = 4;
    private static final int HANDLER_EVENT_RX = 2;
    protected static final long HANDLER_RX_DELAY_TIME = 1000;
    private static final long PERCENT = 100;
    private static final String TAG = "WifiRx";
    private static final String TEXT_ZERO = "0";
    private static final int WAIT_COUNT = 10;
    private final String[] mBandwidth = {"20MHz", "40MHz", "U20MHz", "L20MHz", "Advanced"};
    private TextView mTvFcs = null;
    private TextView mTvRx = null;
    private TextView mTvPer = null;
    private Button mBtnGo = null;
    private Button mBtnStop = null;
    private Spinner mChannelSpinner = null;
    private Spinner mBandwidthSpinner = null;
    private ViewGroup mVgAnt = null;
    private RadioButton mRbAntMain = null;
    private int mBandwidthIndex = 0;
    private ArrayAdapter<String> mChannelAdapter = null;
    private ChannelInfo mChannel = null;
    private long[] mInitData = null;
    private Spinner mSpBwAdvCbw = null;
    private Spinner mSpBwAdvDbw = null;
    private Spinner mSpBwAdvPrimCh = null;
    int mChannelBandwidth = 0;
    int mDataBandwidth = 0;
    int mPrimarySetting = 0;
    private ArrayAdapter<String> mDbwAdapter = null;
    private ArrayAdapter<String> mPrimChAdapter = null;
    private boolean mIsAdvancedMode = false;
    private boolean mAntSwapSupport = false;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.wifi.WiFiRx6620.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (2 == message.what) {
                long[] jArr = new long[3];
                long j = -1;
                Elog.i(WiFiRx6620.TAG, "The Handle event is : HANDLER_EVENT_RX");
                try {
                    j = Long.parseLong(WiFiRx6620.this.mTvPer.getText().toString());
                } catch (NumberFormatException e) {
                    Elog.e(WiFiRx6620.TAG, "Long.parseLong NumberFormatException: " + e.getMessage());
                }
                EMWifi.getPacketRxStatus(jArr, 3);
                Elog.i(WiFiRx6620.TAG, "rx ok = " + String.valueOf(jArr[0]) + "fcs error = " + String.valueOf(jArr[1]));
                long j2 = jArr[0];
                long j3 = jArr[1];
                if (j3 + j2 != 0) {
                    j = (WiFiRx6620.PERCENT * j3) / (j3 + j2);
                }
                WiFiRx6620.this.mTvFcs.setText(String.valueOf(j3));
                WiFiRx6620.this.mTvRx.setText(String.valueOf(j2));
                WiFiRx6620.this.mTvPer.setText(String.valueOf(j));
            }
            WiFiRx6620.this.mHandler.sendEmptyMessageDelayed(2, WiFiRx6620.HANDLER_RX_DELAY_TIME);
        }
    };
    private final AdapterView.OnItemSelectedListener mChannelSpinnerListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6620.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            WiFiRx6620.this.mChannel.setSelectedChannel((String) WiFiRx6620.this.mChannelAdapter.getItem(i));
            EMWifi.setChannel(WiFiRx6620.this.mChannel.getSelectedFrequency());
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    };
    private final AdapterView.OnItemSelectedListener mBandwidthSpinnerListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6620.3
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            WiFiRx6620 wiFiRx6620 = WiFiRx6620.this;
            wiFiRx6620.mBandwidthIndex = i < wiFiRx6620.mBandwidth.length ? i : WiFiRx6620.this.mBandwidthIndex;
            if (WiFiRx6620.this.mBandwidth[4].equals(WiFiRx6620.this.mBandwidthSpinner.getSelectedItem().toString())) {
                WiFiRx6620.this.mBandwidthIndex = 4;
            }
            if (WiFiRx6620.this.mBandwidthIndex == 4) {
                WiFiRx6620.this.onAdvancedBandwidthSelected();
            } else {
                WiFiRx6620.this.updateChannels();
                WiFiRx6620.this.findViewById(R.id.wifi_bandwidth_advanced_ll).setVisibility(8);
            }
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    };

    private void initUiComponent() {
        this.mVgAnt = (ViewGroup) findViewById(R.id.wifi_ant_vg);
        this.mRbAntMain = (RadioButton) findViewById(R.id.wifi_rx_ant_main);
        if (!this.mAntSwapSupport) {
            this.mVgAnt.setVisibility(8);
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, BW_ADVANCED_ITEMS);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpBwAdvCbw.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mSpBwAdvCbw.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6620.4
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (WiFiRx6620.this.mChannelBandwidth == i) {
                    return;
                }
                WiFiRx6620.this.mChannelBandwidth = i;
                WiFiRx6620.this.mDbwAdapter.clear();
                for (int i2 = 0; i2 <= i; i2++) {
                    WiFiRx6620.this.mDbwAdapter.add(WiFiRx6620.BW_ADVANCED_ITEMS[i2]);
                }
                WiFiRx6620.this.mSpBwAdvDbw.setAdapter((SpinnerAdapter) WiFiRx6620.this.mDbwAdapter);
                WiFiRx6620.this.mPrimChAdapter.clear();
                int iPow = ((int) Math.pow(2.0d, i)) - 1;
                for (int i3 = 0; i3 <= iPow; i3++) {
                    WiFiRx6620.this.mPrimChAdapter.add(String.valueOf(i3));
                }
                WiFiRx6620.this.mSpBwAdvPrimCh.setAdapter((SpinnerAdapter) WiFiRx6620.this.mPrimChAdapter);
                WiFiRx6620 wiFiRx6620 = WiFiRx6620.this;
                wiFiRx6620.onAdvancedSelectChanged(wiFiRx6620.mChannelBandwidth, WiFiRx6620.this.mDataBandwidth, WiFiRx6620.this.mPrimarySetting);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mDbwAdapter = arrayAdapter2;
        arrayAdapter2.add(BW_ADVANCED_ITEMS[0]);
        this.mDbwAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpBwAdvDbw.setAdapter((SpinnerAdapter) this.mDbwAdapter);
        this.mSpBwAdvDbw.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6620.5
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i == WiFiRx6620.this.mDataBandwidth) {
                    return;
                }
                WiFiRx6620.this.mDataBandwidth = i;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPrimChAdapter = arrayAdapter3;
        arrayAdapter3.add("0");
        this.mPrimChAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpBwAdvPrimCh.setAdapter((SpinnerAdapter) this.mPrimChAdapter);
        this.mSpBwAdvPrimCh.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6620.6
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i == WiFiRx6620.this.mPrimarySetting) {
                    return;
                }
                WiFiRx6620.this.mPrimarySetting = i;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onAdvancedBandwidthSelected() {
        findViewById(R.id.wifi_bandwidth_advanced_ll).setVisibility(0);
        updateChannels();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onAdvancedSelectChanged(int i, int i2, int i3) {
        updateChannels();
    }

    private void onClickBtnRxGo() {
        setViewEnabled(false);
        EMWifi.getPacketRxStatus(this.mInitData, 3);
        Elog.i(TAG, "before rx test: rx ok = " + String.valueOf(this.mInitData[0]) + " fcs error = " + String.valueOf(this.mInitData[1]));
        EMWifi.setATParam(9L, 0L);
        int i = this.mBandwidthIndex;
        if (4 == i) {
            Elog.i(TAG, "mChannelBandwidth:" + this.mChannelBandwidth + " mDataBandwidth:" + this.mDataBandwidth + " mPrimarySetting:" + this.mPrimarySetting);
            EMWifi.setATParam(71L, (long) this.mChannelBandwidth);
            EMWifi.setATParam(72L, (long) this.mDataBandwidth);
            EMWifi.setATParam(73L, (long) this.mPrimarySetting);
        } else {
            EMWifi.setATParam(15L, i);
        }
        if (this.mAntSwapSupport) {
            EMWifi.setATParam(153L, this.mRbAntMain.isChecked() ? WiFiTestActivity.EnumRfAtAntswp.RF_AT_ANTSWP_MAIN.ordinal() : WiFiTestActivity.EnumRfAtAntswp.RF_AT_ANTSWP_AUX.ordinal());
        }
        EMWifi.setATParam(1L, 2L);
        this.mHandler.sendEmptyMessage(2);
        this.mTvFcs.setText("0");
        this.mTvRx.setText("0");
        this.mTvPer.setText("0");
    }

    private void onClickBtnRxStop() {
        long[] jArr = new long[1];
        this.mHandler.removeMessages(2);
        for (int i = 0; i < 10; i++) {
            jArr[0] = EMWifi.setATParam(1L, 0L);
            if (jArr[0] == 0) {
                break;
            }
            SystemClock.sleep(10L);
            Elog.w(TAG, "stop Rx test failed at the " + i + "times try");
        }
        setViewEnabled(true);
    }

    private void setViewEnabled(boolean z) {
        this.mBtnGo.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
        this.mChannelSpinner.setEnabled(z);
        this.mBandwidthSpinner.setEnabled(z);
        this.mSpBwAdvCbw.setEnabled(z);
        this.mSpBwAdvDbw.setEnabled(z);
        this.mSpBwAdvPrimCh.setEnabled(z);
    }

    private void updateChannelByAdvancedSetting(int i, int i2, int i3) {
        Elog.i(TAG, "updateChannelByAdvancedSetting cbw:" + i);
        if (i == 1) {
            this.mChannelAdapter.clear();
            this.mChannel.addSupported2dot4gChannels(this.mChannelAdapter, false);
            this.mChannel.removeBw40mUnsupported2dot4GChannels(this.mChannelAdapter);
            this.mChannel.insertBw40MChannels(this.mChannelAdapter);
            return;
        }
        if (i == 2) {
            this.mChannelAdapter.clear();
            this.mChannel.insertBw80MChannels(this.mChannelAdapter);
        }
    }

    private void updateChannelByBandwidth(int i) {
        if (i == 1) {
            this.mChannel.removeBw40mUnsupported2dot4GChannels(this.mChannelAdapter);
            this.mChannel.remove5GChannels(this.mChannelAdapter);
            this.mChannel.insertBw40MChannels(this.mChannelAdapter);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateChannels() {
        this.mChannel.resetSupportedChannels(this.mChannelAdapter);
        updateChannelByBandwidth(this.mBandwidthIndex);
        if (this.mBandwidthIndex == 4) {
            updateChannelByAdvancedSetting(this.mChannelBandwidth, this.mDataBandwidth, this.mPrimarySetting);
        }
        boolean z = true;
        if (this.mChannelAdapter.getCount() == 0) {
            this.mBtnGo.setEnabled(false);
            z = false;
        } else {
            this.mBtnGo.setEnabled(true);
        }
        if (z) {
            updateWifiChannel(this.mChannel, this.mChannelAdapter, this.mChannelSpinner);
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity
    boolean isInTestProcess() {
        return !this.mBtnGo.isEnabled();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == this.mBtnGo.getId()) {
            onClickBtnRxGo();
        } else if (view.getId() == this.mBtnStop.getId()) {
            onClickBtnRxStop();
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wifi_rx_6620);
        Intent intent = getIntent();
        this.mAntSwapSupport = intent.getBooleanExtra("key_ant_swap", false);
        this.mIsAdvancedMode = intent.getBooleanExtra("key_11ac", false);
        this.mTvFcs = (TextView) findViewById(R.id.WiFi_FCS_Content);
        this.mTvRx = (TextView) findViewById(R.id.WiFi_Rx_Content);
        this.mTvPer = (TextView) findViewById(R.id.WiFi_PER_Content);
        this.mBtnGo = (Button) findViewById(R.id.WiFi_Go_Rx);
        this.mBtnStop = (Button) findViewById(R.id.WiFi_Stop_Rx);
        this.mBtnGo.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        this.mInitData = new long[3];
        this.mChannel = new ChannelInfo();
        this.mChannelSpinner = (Spinner) findViewById(R.id.WiFi_RX_Channel_Spinner);
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mChannelAdapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mChannelAdapter.clear();
        ChannelInfo.getSupportChannels();
        this.mChannel.resetSupportedChannels(this.mChannelAdapter);
        this.mChannelSpinner.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mChannelSpinner.setOnItemSelectedListener(this.mChannelSpinnerListener);
        this.mBandwidthSpinner = (Spinner) findViewById(R.id.WiFi_Bandwidth_Spinner);
        ArrayAdapter arrayAdapter2 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        if (this.mIsAdvancedMode) {
            arrayAdapter2.add(this.mBandwidth[4]);
        } else {
            for (int i = 0; i < 4; i++) {
                arrayAdapter2.add(this.mBandwidth[i]);
            }
        }
        this.mBandwidthSpinner.setAdapter((SpinnerAdapter) arrayAdapter2);
        this.mBandwidthSpinner.setOnItemSelectedListener(this.mBandwidthSpinnerListener);
        this.mSpBwAdvCbw = (Spinner) findViewById(R.id.wifi_bandwidth_cbw_spn);
        this.mSpBwAdvDbw = (Spinner) findViewById(R.id.wifi_bandwidth_dbw_spn);
        this.mSpBwAdvPrimCh = (Spinner) findViewById(R.id.wifi_bandwidth_prim_ch_spn);
        setViewEnabled(true);
        initUiComponent();
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onDestroy() {
        this.mHandler.removeMessages(2);
        super.onDestroy();
    }
}

package com.mediatek.engineermode.wifi;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.SystemClock;
import android.support.v4.media.session.PlaybackStateCompat;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.RadioButton;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiRx6632 extends WiFiTestActivity implements View.OnClickListener, CompoundButton.OnCheckedChangeListener {
    private static final int BAND_WIDTH_160NC_INDEX = 6;
    private static final int BAND_WIDTH_160_INDEX = 5;
    private static final int BAND_WIDTH_20_INDEX = 2;
    private static final int BAND_WIDTH_40_INDEX = 3;
    private static final int BAND_WIDTH_80_INDEX = 4;
    private static final int COMMAND_INDEX_STARTRX = 2;
    private static final int HANDLER_EVENT_RX = 2;
    protected static final long HANDLER_RX_DELAY_TIME = 1000;
    private static final long PERCENT = 100;
    private static final String TAG = "WifiRx";
    private static final String TEXT_ZERO = "0";
    private static final int WAIT_COUNT = 10;
    private static final int WIFI_MODE_DBDC_RX0 = 2;
    private static final int WIFI_MODE_DBDC_RX1 = 3;
    private static final int WIFI_MODE_NORMAL = 1;
    private static final String[] sBandWidth = {"5MHz", "10MHz", "20MHz", "40MHz", "80MHz", "160MHz", "160NC"};
    private static final String[] sBandWidthDBW = {"BW5", "BW10", "BW20", "BW40", "BW80", "BW160"};
    private int mChannelRx0Freq;
    private int mChannelRx1Freq;
    private TextView mTvFcs = null;
    private TextView mTvRx = null;
    private TextView mTvPer = null;
    private TextView mTvWiFi0RssiContext = null;
    private TextView mTvWiFi1RssiContext = null;
    private TextView mTvWiFi0RssiText = null;
    private TextView mTvWiFi1RssiText = null;
    private CheckBox mCkWf0 = null;
    private CheckBox mCkWf1 = null;
    private CheckBox mCkDuplicateMode = null;
    private Spinner mSpChannelRx0 = null;
    private Spinner mSpChannelRx1 = null;
    private TextView mTvDbw = null;
    private TextView mTvPrimCh = null;
    private Spinner mSpDbw = null;
    private Spinner mSpPrimCh = null;
    private Spinner mSpBandwidth = null;
    private Button mBtnGo = null;
    private Button mBtnStop = null;
    private View mViewChannelRx1 = null;
    private HandlerThread mTestThread = null;
    private Handler mEventHandler = null;
    private ChannelInfo mChannel = null;
    private ArrayAdapter<String> mChannelAdapter = null;
    private ArrayAdapter<String> mDbwAdapter = null;
    private ArrayAdapter<String> mPrimChAdapter = null;
    private int mBandwidthIndex = 0;
    private int mDataBandwidthIndex = 0;
    private int mPrimaryIndex = 0;
    private int mWiFiMode = 1;
    private ViewGroup mVgAnt = null;
    private RadioButton mRbAntMain = null;
    private boolean mAntSwapSupport = false;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.wifi.WiFiRx6632.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (2 == message.what) {
                long[] jArr = new long[3];
                long j = -1;
                Elog.i(WiFiRx6632.TAG, "The Handle event is : HANDLER_EVENT_RX");
                try {
                    j = Long.parseLong(WiFiRx6632.this.mTvPer.getText().toString());
                } catch (NumberFormatException e) {
                    Elog.w(WiFiRx6632.TAG, "Long.parseLong NumberFormatException: " + e.getMessage());
                }
                if (WiFiRx6632.this.mWiFiMode == 2) {
                    EMWifi.setATParam(104L, 0L);
                } else if (WiFiRx6632.this.mWiFiMode == 3) {
                    EMWifi.setATParam(104L, 1L);
                }
                EMWifi.getPacketRxStatus(jArr, 3);
                Elog.i(WiFiRx6632.TAG, "rx ok = " + jArr[0] + "fcs error = " + jArr[1] + "RSSI = " + jArr[2]);
                long j2 = jArr[0];
                long j3 = jArr[1];
                long j4 = (jArr[2] & 255) - 255;
                long j5 = ((jArr[2] & 65280) >> 8) - 255;
                if (j3 + j2 != 0) {
                    j = (WiFiRx6632.PERCENT * j3) / (j3 + j2);
                }
                WiFiRx6632.this.mTvFcs.setText(String.valueOf(j3));
                WiFiRx6632.this.mTvRx.setText(String.valueOf(j2));
                WiFiRx6632.this.mTvPer.setText(String.valueOf(j));
                if (WiFiRx6632.this.mCkWf0.isChecked() && WiFiRx6632.this.mCkWf1.isChecked()) {
                    WiFiRx6632.this.mTvWiFi1RssiContext.setVisibility(0);
                    WiFiRx6632.this.mTvWiFi1RssiText.setVisibility(0);
                    WiFiRx6632.this.mTvWiFi0RssiText.setText("RSSI(WiFi0):");
                    WiFiRx6632.this.mTvWiFi0RssiContext.setText(String.valueOf(j4));
                    WiFiRx6632.this.mTvWiFi1RssiContext.setText(String.valueOf(j5));
                } else {
                    WiFiRx6632.this.mTvWiFi1RssiContext.setVisibility(8);
                    WiFiRx6632.this.mTvWiFi1RssiText.setVisibility(8);
                    WiFiRx6632.this.mTvWiFi0RssiText.setText("RSSI: ");
                    if (WiFiRx6632.this.mWiFiMode == 2 || WiFiRx6632.this.mWiFiMode == 3) {
                        WiFiRx6632.this.mTvWiFi0RssiContext.setText(String.valueOf(j4));
                    } else {
                        WiFiRx6632.this.mTvWiFi0RssiContext.setText(WiFiRx6632.this.mCkWf0.isChecked() ? String.valueOf(j4) : String.valueOf(j5));
                    }
                }
            }
            WiFiRx6632.this.mHandler.sendEmptyMessageDelayed(2, WiFiRx6632.HANDLER_RX_DELAY_TIME);
        }
    };

    private boolean checkRxPath() {
        if (this.mCkWf0.isChecked() || this.mCkWf1.isChecked()) {
            return true;
        }
        Toast.makeText(this, R.string.wifi_dialog_no_path_select, 1).show();
        return false;
    }

    private void initUiComponent() {
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mChannelAdapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mChannelAdapter.clear();
        ChannelInfo.getSupportChannels();
        this.mChannel.resetSupportedChannels(this.mChannelAdapter);
        this.mSpChannelRx0.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mSpChannelRx0.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6632.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                int channelId = ChannelInfo.parseChannelId((String) WiFiRx6632.this.mChannelAdapter.getItem(i));
                WiFiRx6632.this.mChannelRx0Freq = ChannelInfo.getChannelFrequency(channelId);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mSpChannelRx1.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mSpChannelRx1.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6632.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                int channelId = ChannelInfo.parseChannelId((String) WiFiRx6632.this.mChannelAdapter.getItem(i));
                WiFiRx6632.this.mChannelRx1Freq = ChannelInfo.getChannelFrequency(channelId);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter arrayAdapter2 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        String[] strArr = sBandWidth;
        int length = strArr.length;
        if (this.mWiFiMode == 2) {
            length = strArr.length - 3;
        }
        for (int i = 0; i < length; i++) {
            arrayAdapter2.add(sBandWidth[i]);
        }
        this.mSpBandwidth.setAdapter((SpinnerAdapter) arrayAdapter2);
        this.mSpBandwidth.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6632.4
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                WiFiRx6632.this.mBandwidthIndex = i2;
                WiFiRx6632.this.mTvPrimCh.setEnabled(true);
                WiFiRx6632.this.mSpPrimCh.setEnabled(true);
                WiFiRx6632.this.mTvDbw.setEnabled(true);
                WiFiRx6632.this.mSpDbw.setEnabled(true);
                WiFiRx6632.this.mTvPrimCh.setVisibility(0);
                WiFiRx6632.this.mSpPrimCh.setVisibility(0);
                if (i2 < 2) {
                    WiFiRx6632.this.mTvPrimCh.setVisibility(8);
                    WiFiRx6632.this.mSpPrimCh.setVisibility(8);
                    WiFiRx6632.this.mDbwAdapter.clear();
                    WiFiRx6632.this.mDbwAdapter.add(WiFiRx6632.sBandWidthDBW[i2]);
                    WiFiRx6632.this.mViewChannelRx1.setVisibility(8);
                    WiFiRx6632.this.mSpDbw.setAdapter((SpinnerAdapter) WiFiRx6632.this.mDbwAdapter);
                } else if (i2 <= 5) {
                    WiFiRx6632.this.mDbwAdapter.clear();
                    for (int i3 = 2; i3 <= i2; i3++) {
                        WiFiRx6632.this.mDbwAdapter.add(WiFiRx6632.sBandWidthDBW[i3]);
                    }
                    WiFiRx6632.this.mSpDbw.setAdapter((SpinnerAdapter) WiFiRx6632.this.mDbwAdapter);
                    WiFiRx6632.this.mPrimChAdapter.clear();
                    int iPow = ((int) Math.pow(2.0d, i2 - 2)) - 1;
                    for (int i4 = 0; i4 <= iPow; i4++) {
                        WiFiRx6632.this.mPrimChAdapter.add(String.valueOf(i4));
                    }
                    WiFiRx6632.this.mSpPrimCh.setAdapter((SpinnerAdapter) WiFiRx6632.this.mPrimChAdapter);
                    WiFiRx6632.this.mViewChannelRx1.setVisibility(8);
                } else {
                    WiFiRx6632.this.mSpPrimCh.setEnabled(false);
                    WiFiRx6632.this.mSpDbw.setEnabled(false);
                    WiFiRx6632.this.mViewChannelRx1.setVisibility(0);
                    WiFiRx6632.this.mDbwAdapter.clear();
                    for (int i5 = 2; i5 < i2; i5++) {
                        WiFiRx6632.this.mDbwAdapter.add(WiFiRx6632.sBandWidthDBW[i5]);
                    }
                    WiFiRx6632.this.mSpDbw.setAdapter((SpinnerAdapter) WiFiRx6632.this.mDbwAdapter);
                    WiFiRx6632.this.mSpDbw.setSelection(3);
                    WiFiRx6632.this.mPrimChAdapter.clear();
                    WiFiRx6632.this.mPrimChAdapter.add("0");
                    WiFiRx6632.this.mSpPrimCh.setAdapter((SpinnerAdapter) WiFiRx6632.this.mPrimChAdapter);
                }
                WiFiRx6632.this.updateChannels();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mDbwAdapter = arrayAdapter3;
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpDbw.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6632.5
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (i2 == WiFiRx6632.this.mDataBandwidthIndex) {
                    return;
                }
                WiFiRx6632.this.mDataBandwidthIndex = i2;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter4 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPrimChAdapter = arrayAdapter4;
        arrayAdapter4.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPrimCh.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiRx6632.6
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (i2 == WiFiRx6632.this.mPrimaryIndex) {
                    return;
                }
                WiFiRx6632.this.mPrimaryIndex = i2;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
    }

    private void initUiLayout() {
        this.mCkWf0 = (CheckBox) findViewById(R.id.wifi_wfx_0);
        this.mCkWf1 = (CheckBox) findViewById(R.id.wifi_wfx_1);
        this.mCkDuplicateMode = (CheckBox) findViewById(R.id.wifi_duplicate_mode_rx);
        this.mCkWf0.setOnCheckedChangeListener(this);
        this.mCkWf1.setOnCheckedChangeListener(this);
        this.mCkDuplicateMode.setOnCheckedChangeListener(this);
        this.mCkWf0.setChecked(true);
        this.mBtnGo = (Button) findViewById(R.id.WiFi_Go_Rx);
        this.mBtnStop = (Button) findViewById(R.id.WiFi_Stop_Rx);
        this.mBtnGo.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        this.mSpBandwidth = (Spinner) findViewById(R.id.wifi_bandwidth_spinner);
        this.mSpChannelRx0 = (Spinner) findViewById(R.id.wifi_rx0_channel_spinner);
        this.mSpChannelRx1 = (Spinner) findViewById(R.id.wifi_rx1_channel_spinner);
        this.mViewChannelRx1 = findViewById(R.id.wifi_rx1_channel_layout);
        this.mTvDbw = (TextView) findViewById(R.id.wifi_bandwidth_dbw_tv);
        this.mSpDbw = (Spinner) findViewById(R.id.wifi_bandwidth_dbw_spn);
        this.mTvPrimCh = (TextView) findViewById(R.id.wifi_bandwidth_prim_ch_tv);
        this.mSpPrimCh = (Spinner) findViewById(R.id.wifi_bandwidth_prim_ch_spn);
        this.mTvFcs = (TextView) findViewById(R.id.WiFi_FCS_Content);
        this.mTvRx = (TextView) findViewById(R.id.WiFi_Rx_Content);
        this.mTvPer = (TextView) findViewById(R.id.WiFi_PER_Content);
        this.mTvWiFi0RssiText = (TextView) findViewById(R.id.WiFi0_RX_RSSI_Text);
        this.mTvWiFi1RssiText = (TextView) findViewById(R.id.WiFi1_RX_RSSI_Text);
        this.mTvWiFi0RssiContext = (TextView) findViewById(R.id.WiFi0_RX_RSSI_Content);
        this.mTvWiFi1RssiContext = (TextView) findViewById(R.id.WiFi1_RX_RSSI_Content);
        this.mChannel = new ChannelInfo();
        this.mVgAnt = (ViewGroup) findViewById(R.id.wifi_ant_vg);
        this.mRbAntMain = (RadioButton) findViewById(R.id.wifi_rx_ant_main);
        setViewEnabled(true);
    }

    private void onClickBtnRxGo() {
        long j;
        if (checkRxPath()) {
            setViewEnabled(false);
            int i = this.mWiFiMode;
            if (i == 1) {
                EMWifi.setATParam(110L, 0L);
                EMWifi.setATParam(104L, 0L);
            } else if (i == 2) {
                EMWifi.setATParam(110L, 1L);
                EMWifi.setATParam(104L, 0L);
            } else if (i == 3) {
                EMWifi.setATParam(110L, 1L);
                EMWifi.setATParam(104L, 1L);
            }
            if (this.mWiFiMode == 3) {
                j = 65537;
                if (this.mCkWf1.isChecked()) {
                    j = !this.mCkWf0.isChecked() ? 131073L : 196609L;
                }
            } else {
                j = PlaybackStateCompat.ACTION_PREPARE_FROM_SEARCH;
                if (this.mCkWf1.isChecked()) {
                    j = !this.mCkWf0.isChecked() ? PlaybackStateCompat.ACTION_PREPARE_FROM_URI : 196608L;
                }
            }
            EMWifi.setATParam(106L, j);
            int i2 = this.mBandwidthIndex;
            EMWifi.setATParam(71L, i2 >= 2 ? i2 - 2 : i2 + 5);
            EMWifi.setATParam(72L, this.mDataBandwidthIndex);
            if (this.mSpPrimCh.getVisibility() == 0) {
                EMWifi.setATParam(73L, this.mPrimaryIndex);
            }
            EMWifi.setATParam(18L, this.mChannelRx0Freq);
            if (this.mViewChannelRx1.getVisibility() == 0) {
                EMWifi.setATParam(65554L, this.mChannelRx1Freq);
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
        this.mCkWf0.setEnabled(z);
        this.mCkWf1.setEnabled(z);
        this.mSpChannelRx0.setEnabled(z);
        this.mSpChannelRx1.setEnabled(z);
        this.mSpBandwidth.setEnabled(z);
        this.mSpDbw.setEnabled(z);
        this.mSpPrimCh.setEnabled(z);
        this.mCkDuplicateMode.setEnabled(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateChannels() {
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        if (this.mBandwidthIndex < 2) {
            this.mChannel.insertBw20MChannels(arrayAdapter);
            this.mChannel.insertBw40MChannels(arrayAdapter);
            this.mChannel.insertBw80MChannels(arrayAdapter);
            this.mChannel.insertBw160MChannels(arrayAdapter);
        }
        if (this.mBandwidthIndex == 2) {
            this.mChannel.insertBw20MChannels(arrayAdapter);
        }
        if (this.mBandwidthIndex == 3) {
            this.mChannel.insertBw40MChannels(arrayAdapter);
        }
        if (this.mBandwidthIndex == 4) {
            this.mChannel.insertBw80MChannels(arrayAdapter);
        }
        if (this.mBandwidthIndex == 5) {
            this.mChannel.insertBw160MChannels(arrayAdapter);
        }
        if (this.mBandwidthIndex == 6) {
            this.mChannel.insertBw80MChannels(arrayAdapter);
        }
        int i = this.mWiFiMode;
        if (i == 2) {
            this.mChannel.remove5GChannels(arrayAdapter);
        } else if (i == 3) {
            this.mChannel.remove2dot4GChannels(arrayAdapter);
        }
        boolean z = false;
        int count = arrayAdapter.getCount();
        if (count == this.mChannelAdapter.getCount()) {
            for (int i2 = 0; i2 < count; i2++) {
                if (!arrayAdapter.getItem(i2).equals(this.mChannelAdapter.getItem(i2))) {
                    z = true;
                    break;
                }
            }
        } else {
            z = true;
        }
        if (!z) {
            Elog.i(TAG, "no update");
            return;
        }
        Elog.i(TAG, "need update");
        this.mChannelAdapter.clear();
        for (int i3 = 0; i3 < count; i3++) {
            this.mChannelAdapter.add(arrayAdapter.getItem(i3));
        }
        if (this.mChannelAdapter.getCount() == 0) {
            this.mBtnGo.setEnabled(false);
            z = false;
        } else {
            this.mBtnGo.setEnabled(true);
        }
        if (z) {
            int i4 = this.mWiFiMode;
            if (i4 == 2) {
                EMWifi.setATParam(104L, 0L);
            } else if (i4 == 3) {
                EMWifi.setATParam(104L, 1L);
            }
            updateWifiChannel(this.mChannel, this.mChannelAdapter, this.mSpChannelRx0);
            if (this.mSpChannelRx1.getVisibility() == 0) {
                updateWifiChannel(this.mChannel, this.mChannelAdapter, this.mSpChannelRx1);
            }
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity
    boolean isInTestProcess() {
        return !this.mBtnGo.isEnabled();
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.getId() == R.id.wifi_duplicate_mode_rx) {
            if (z) {
                this.mCkWf0.setChecked(true);
                this.mCkWf1.setChecked(true);
                return;
            }
            return;
        }
        if (compoundButton.getId() == R.id.wifi_wfx_0) {
            if (z) {
                return;
            }
            this.mCkDuplicateMode.setChecked(false);
        } else {
            if (compoundButton.getId() != R.id.wifi_wfx_1 || z) {
                return;
            }
            this.mCkDuplicateMode.setChecked(false);
        }
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
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wifi_rx_6632);
        Intent intent = getIntent();
        this.mAntSwapSupport = intent.getBooleanExtra("key_ant_swap", false);
        String stringExtra = intent.getStringExtra("mode");
        if (stringExtra == null) {
            this.mWiFiMode = 1;
        } else if (stringExtra.equals("RX Band0")) {
            this.mWiFiMode = 2;
        } else if (stringExtra.equals("RX Band1")) {
            this.mWiFiMode = 3;
        }
        initUiLayout();
        initUiComponent();
        int i = this.mWiFiMode;
        if (i == 2) {
            this.mCkWf0.setChecked(true);
            this.mCkWf1.setChecked(false);
            this.mCkWf0.setVisibility(8);
            this.mCkWf1.setVisibility(8);
            this.mCkDuplicateMode.setVisibility(8);
        } else if (i == 3) {
            this.mCkWf0.setChecked(false);
            this.mCkWf1.setChecked(true);
            this.mCkWf0.setVisibility(8);
            this.mCkWf1.setVisibility(8);
            this.mCkDuplicateMode.setVisibility(8);
        }
        if (this.mAntSwapSupport) {
            return;
        }
        this.mVgAnt.setVisibility(8);
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onDestroy() {
        this.mHandler.removeMessages(2);
        super.onDestroy();
    }
}

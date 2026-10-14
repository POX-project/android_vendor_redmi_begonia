package com.mediatek.engineermode.wifi;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.support.v4.media.session.PlaybackStateCompat;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiTx6632 extends WiFiTestActivity implements View.OnClickListener, RadioGroup.OnCheckedChangeListener {
    private static final int BAND_WIDTH_160NC_INDEX = 6;
    private static final int BAND_WIDTH_160_INDEX = 5;
    private static final int BAND_WIDTH_20_INDEX = 2;
    private static final int BAND_WIDTH_40_INDEX = 3;
    private static final int BAND_WIDTH_80_INDEX = 4;
    private static final int COMMAND_INDEX_LOCALFREQ = 5;
    private static final int COMMAND_INDEX_OUTPUTPOWER = 4;
    private static final int COMMAND_INDEX_STARTTX = 1;
    private static final int COMMAND_INDEX_STOPTEST = 0;
    private static final int DEFAULT_PKT_CNT = 0;
    private static final int DEFAULT_PKT_LEN = 1024;
    private static final int DEFAULT_TX_GAIN = 22;
    private static final int HANDLER_EVENT_FINISH = 4;
    private static final int HANDLER_EVENT_GO = 1;
    private static final int HANDLER_EVENT_STOP = 2;
    private static final int HANDLER_EVENT_TIMER = 3;
    private static final int ONE_SENCOND = 1000;
    private static final int POWER_UNIT_DBM = 0;
    private static final int RATE_MODE_MASK = 31;
    private static final String TAG = "WifiTx";
    private static final int TEST_MODE_CW_TONE = 2;
    private static final int TEST_MODE_DUTY = 1;
    private static final int TEST_MODE_TX = 0;
    private static final int WIFI_MODE_DBDC_TX0 = 2;
    private static final int WIFI_MODE_DBDC_TX1 = 3;
    private static final int WIFI_MODE_NORMAL = 1;
    private int mChannelTx0Freq;
    private int mChannelTx1Freq;
    private static final String[] mMode = {"continuous packet tx", "100% duty cycle", "CW tone"};
    private static final String[] mPreamble = {"Normal", "CCK short", "802.11n mixed mode", "802.11n green field", "802.11ac"};
    private static final String[] mGuardInterval = {"normal GI", "short GI"};
    private static final String[] sBandWidth = {"5MHz", "10MHz", "20MHz", "40MHz", "80MHz", "160MHz", "160NC"};
    private static final String[] sBandWidthDBW = {"BW5", "BW10", "BW20", "BW40", "BW80", "BW160"};
    private static final HashMap<String, Integer> sMapDbwValue = new HashMap<String, Integer>() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.1
        {
            put("BW5", 5);
            put("BW10", 6);
            put("BW20", 0);
            put("BW40", 1);
            put("BW80", 2);
            put("BW160", 3);
        }
    };
    private RadioGroup mRGNss = null;
    private TextView mTvNss = null;
    private CheckBox mCkWf0 = null;
    private CheckBox mCkWf1 = null;
    private CheckBox mCkDuplicateMode = null;
    private Spinner mSpChannelTx0 = null;
    private Spinner mSpChannelTx1 = null;
    private TextView mTvDbw = null;
    private TextView mTvPrimCh = null;
    private Spinner mSpDbw = null;
    private Spinner mSpPrimCh = null;
    private Spinner mSpGuardInterval = null;
    private Spinner mSpBandwidth = null;
    private Spinner mSpPreamble = null;
    private EditText mEtPkt = null;
    private EditText mEtPktCnt = null;
    private EditText mEtTxGain = null;
    private Spinner mSpRate = null;
    private RadioButton mRbNss1 = null;
    private RadioButton mRbNss2 = null;
    private Spinner mSpMode = null;
    private Button mBtnGo = null;
    private Button mBtnStop = null;
    private View mViewChannelTx1 = null;
    private HandlerThread mTestThread = null;
    private Handler mEventHandler = null;
    private ChannelInfo mChannel = null;
    private RateInfo mRate = null;
    private ArrayAdapter<String> mChannelAdapter = null;
    private ArrayAdapter<String> mModeAdapter = null;
    private ArrayAdapter<String> mPreambleAdapter = null;
    private ArrayAdapter<String> mRateAdapter = null;
    private ArrayAdapter<String> mDbwAdapter = null;
    private ArrayAdapter<String> mPrimChAdapter = null;
    private int mBandwidthIndex = 0;
    private int mDataBandwidthValue = 0;
    private int mPrimaryIndex = 0;
    private int mModeIndex = 0;
    private int mPreambleIndex = 0;
    private int mGuardIntervalIndex = 0;
    private int mNssValue = 1;
    private long mPktLenNum = PlaybackStateCompat.ACTION_PLAY_FROM_MEDIA_ID;
    private long mCntNum = 0;
    private long mTxGainVal = 22;
    private boolean mHighRateSelected = false;
    private boolean mTestInProcess = false;
    private boolean mAntSwapSupport = false;
    private int mTargetModeIndex = 0;
    private ViewGroup mVgAnt = null;
    private RadioButton mRbAntMain = null;
    private int mWiFiMode = 1;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (4 == message.what) {
                Elog.v(WiFiTx6632.TAG, "receive HANDLER_EVENT_FINISH");
                WiFiTx6632.this.setViewEnabled(true);
            }
        }
    };
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.12
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            if (compoundButton.getId() == R.id.wifi_duplicate_mode_tx) {
                if (z) {
                    WiFiTx6632.this.mCkWf0.setChecked(true);
                    WiFiTx6632.this.mCkWf1.setChecked(true);
                    return;
                }
                return;
            }
            if (compoundButton.getId() == R.id.wifi_wfx_0) {
                if (!z) {
                    WiFiTx6632.this.mCkDuplicateMode.setChecked(false);
                }
                WiFiTx6632.this.updateTxPower();
            } else if (compoundButton.getId() == R.id.wifi_wfx_1) {
                if (!z) {
                    WiFiTx6632.this.mCkDuplicateMode.setChecked(false);
                }
                WiFiTx6632.this.updateTxPower();
            }
        }
    };

    class EventHandler extends Handler {
        public EventHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                WiFiTx6632 wiFiTx6632 = WiFiTx6632.this;
                wiFiTx6632.startTxTest(wiFiTx6632.mTargetModeIndex);
            } else if (i == 2) {
                WiFiTx6632.this.stopTxTest();
            } else {
                if (i != 3) {
                    return;
                }
                WiFiTx6632.this.handleEventTimer();
            }
        }
    }

    static class RateInfo {
        private static final short EEPROM_RATE_GROUP_CCK = 0;
        private static final short EEPROM_RATE_GROUP_OFDM_12_18M = 2;
        private static final short EEPROM_RATE_GROUP_OFDM_24_36M = 3;
        private static final short EEPROM_RATE_GROUP_OFDM_48_54M = 4;
        private static final short EEPROM_RATE_GROUP_OFDM_6_9M = 1;
        private static final short EEPROM_RATE_GROUP_OFDM_MCS0_32 = 5;
        private static final int MAX_LOWER_RATE_NUMBER = 12;
        static final String[] RATE_ITEM_54M = {"1M", "2M", "5.5M", "11M", "6M", "9M", "12M", "18M", "24M", "36M", "48M", "54M"};
        static final String[] RATE_ITEM_11M = {"1M", "2M", "5.5M", "11M"};
        static final String[] RATE_ITEM_CS7 = {"MCS0", "MCS1", "MCS2", "MCS3", "MCS4", "MCS5", "MCS6", "MCS7"};
        static final String[] RATE_ITEM_CS15 = {"MCS0", "MCS1", "MCS2", "MCS3", "MCS4", "MCS5", "MCS6", "MCS7", "MCS8", "MCS9", "MCS10", "MCS11", "MCS12", "MCS13", "MCS14", "MCS15"};
        int mRateIndex = 0;
        int mOFDMStartIndex = 4;
        private final short[] mUcRateGroupEep = {EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_OFDM_6_9M, EEPROM_RATE_GROUP_OFDM_6_9M, EEPROM_RATE_GROUP_OFDM_12_18M, EEPROM_RATE_GROUP_OFDM_12_18M, EEPROM_RATE_GROUP_OFDM_24_36M, EEPROM_RATE_GROUP_OFDM_24_36M, EEPROM_RATE_GROUP_OFDM_48_54M, EEPROM_RATE_GROUP_OFDM_48_54M, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32};

        RateInfo() {
        }

        int getRateGroup(int i) {
            if (i < 0) {
                return -1;
            }
            short[] sArr = this.mUcRateGroupEep;
            if (i < sArr.length) {
                return sArr[i];
            }
            return -1;
        }
    }

    private boolean checkTxPath() {
        if (this.mCkWf0.isChecked() || this.mCkWf1.isChecked()) {
            return true;
        }
        Toast.makeText(this, R.string.wifi_dialog_no_path_select, 1).show();
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleEventTimer() {
        long[] jArr = {0, 0};
        Elog.i(TAG, "handleEventTimer");
        int i = this.mWiFiMode == 3 ? 288 : 32;
        if (this.mModeIndex == 1) {
            boolean z = false;
            if (EMWifi.getATParam(i, jArr) == 0) {
                Elog.i(TAG, "query Transmitted packet count succeed, count = " + jArr[0] + " target count = 100");
                if (jArr[0] == 100) {
                    z = true;
                }
            } else {
                Elog.w(TAG, "query Transmitted packet count failed");
            }
            if (!z) {
                EMWifi.setATParam(1L, 0L);
            }
            this.mTargetModeIndex = 1;
            this.mEventHandler.sendEmptyMessage(1);
            return;
        }
        try {
            long j = Long.parseLong(this.mEtPktCnt.getText().toString());
            if (EMWifi.getATParam(i, jArr) == 0) {
                Elog.i(TAG, "query Transmitted packet count succeed, count = " + jArr[0] + " target count = " + j);
                if (jArr[0] == j) {
                    this.mEventHandler.removeMessages(3);
                    this.mHandler.sendEmptyMessage(4);
                    return;
                }
            } else {
                Elog.w(TAG, "query Transmitted packet count failed");
            }
            this.mEventHandler.sendEmptyMessageDelayed(3, 1000L);
        } catch (NumberFormatException e) {
            Toast.makeText(this, "invalid input value", 0).show();
        }
    }

    private void initUiComponent() {
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mChannelAdapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        ChannelInfo.getSupportChannels();
        this.mChannel.addSupported2dot4gChannels(this.mChannelAdapter, false);
        this.mSpChannelTx0.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mSpChannelTx0.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                int channelId = ChannelInfo.parseChannelId((String) WiFiTx6632.this.mChannelAdapter.getItem(i));
                WiFiTx6632.this.mChannelTx0Freq = ChannelInfo.getChannelFrequency(channelId);
                WiFiTx6632.this.updateTxPower();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mSpChannelTx1.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mSpChannelTx1.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.4
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                int channelId = ChannelInfo.parseChannelId((String) WiFiTx6632.this.mChannelAdapter.getItem(i));
                WiFiTx6632.this.mChannelTx1Freq = ChannelInfo.getChannelFrequency(channelId);
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
        this.mSpBandwidth.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.5
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                WiFiTx6632.this.mBandwidthIndex = i2;
                WiFiTx6632.this.mTvPrimCh.setEnabled(true);
                WiFiTx6632.this.mSpPrimCh.setEnabled(true);
                WiFiTx6632.this.mTvDbw.setEnabled(true);
                WiFiTx6632.this.mSpDbw.setEnabled(true);
                WiFiTx6632.this.mTvPrimCh.setVisibility(0);
                WiFiTx6632.this.mSpPrimCh.setVisibility(0);
                if (i2 < 2) {
                    WiFiTx6632.this.mTvPrimCh.setVisibility(8);
                    WiFiTx6632.this.mSpPrimCh.setVisibility(8);
                    WiFiTx6632.this.mDbwAdapter.clear();
                    WiFiTx6632.this.mDbwAdapter.add(WiFiTx6632.sBandWidthDBW[i2]);
                    WiFiTx6632.this.mViewChannelTx1.setVisibility(8);
                    WiFiTx6632.this.mSpDbw.setAdapter((SpinnerAdapter) WiFiTx6632.this.mDbwAdapter);
                } else if (i2 <= 5) {
                    WiFiTx6632.this.mDbwAdapter.clear();
                    for (int i3 = 2; i3 <= i2; i3++) {
                        WiFiTx6632.this.mDbwAdapter.add(WiFiTx6632.sBandWidthDBW[i3]);
                    }
                    WiFiTx6632.this.mSpDbw.setAdapter((SpinnerAdapter) WiFiTx6632.this.mDbwAdapter);
                    WiFiTx6632.this.mPrimChAdapter.clear();
                    int iPow = ((int) Math.pow(2.0d, i2 - 2)) - 1;
                    for (int i4 = 0; i4 <= iPow; i4++) {
                        WiFiTx6632.this.mPrimChAdapter.add(String.valueOf(i4));
                    }
                    WiFiTx6632.this.mSpPrimCh.setAdapter((SpinnerAdapter) WiFiTx6632.this.mPrimChAdapter);
                    WiFiTx6632.this.mViewChannelTx1.setVisibility(8);
                } else {
                    WiFiTx6632.this.mSpPrimCh.setEnabled(false);
                    WiFiTx6632.this.mSpDbw.setEnabled(false);
                    WiFiTx6632.this.mViewChannelTx1.setVisibility(0);
                    WiFiTx6632.this.mDbwAdapter.clear();
                    for (int i5 = 2; i5 < i2; i5++) {
                        WiFiTx6632.this.mDbwAdapter.add(WiFiTx6632.sBandWidthDBW[i5]);
                    }
                    WiFiTx6632.this.mSpDbw.setAdapter((SpinnerAdapter) WiFiTx6632.this.mDbwAdapter);
                    WiFiTx6632.this.mSpDbw.setSelection(3);
                    WiFiTx6632.this.mPrimChAdapter.clear();
                    WiFiTx6632.this.mPrimChAdapter.add("0");
                    WiFiTx6632.this.mSpPrimCh.setAdapter((SpinnerAdapter) WiFiTx6632.this.mPrimChAdapter);
                }
                WiFiTx6632.this.updateRate();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mDbwAdapter = arrayAdapter3;
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpDbw.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.6
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                Integer num = (Integer) WiFiTx6632.sMapDbwValue.get(((TextView) view).getText().toString());
                Elog.i(WiFiTx6632.TAG, "dbw value:" + num);
                if (num == null || num.intValue() == WiFiTx6632.this.mDataBandwidthValue) {
                    return;
                }
                WiFiTx6632.this.mDataBandwidthValue = num.intValue();
                WiFiTx6632.this.updateTxPower();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter4 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPrimChAdapter = arrayAdapter4;
        arrayAdapter4.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPrimCh.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.7
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (i2 == WiFiTx6632.this.mPrimaryIndex) {
                    return;
                }
                WiFiTx6632.this.mPrimaryIndex = i2;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mRate = new RateInfo();
        ArrayAdapter<String> arrayAdapter5 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mRateAdapter = arrayAdapter5;
        arrayAdapter5.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpRate.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.8
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                int i3 = WiFiTx6632.this.mRate.mRateIndex;
                WiFiTx6632.this.mRate.mRateIndex = i2;
                if (WiFiTx6632.this.mPreambleIndex == 2 || WiFiTx6632.this.mPreambleIndex == 3 || WiFiTx6632.this.mPreambleIndex == 4) {
                    WiFiTx6632.this.mRate.mRateIndex = i2 + 12;
                }
                WiFiTx6632.this.updateChannels();
                if (i3 != WiFiTx6632.this.mRate.mRateIndex) {
                    WiFiTx6632.this.updateTxPower();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter6 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPreambleAdapter = arrayAdapter6;
        arrayAdapter6.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        int length2 = mPreamble.length;
        for (int i2 = 0; i2 < length2; i2++) {
            this.mPreambleAdapter.add(mPreamble[i2]);
        }
        this.mSpPreamble.setAdapter((SpinnerAdapter) this.mPreambleAdapter);
        this.mSpPreamble.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.9
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                WiFiTx6632.this.mPreambleIndex = i3;
                WiFiTx6632.this.updateRate();
                WiFiTx6632.this.updateTxPower();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter7 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mModeAdapter = arrayAdapter7;
        arrayAdapter7.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        int i3 = 0;
        while (true) {
            String[] strArr2 = mMode;
            if (i3 >= strArr2.length) {
                break;
            }
            this.mModeAdapter.add(strArr2[i3]);
            i3++;
        }
        this.mSpMode.setAdapter((SpinnerAdapter) this.mModeAdapter);
        this.mSpMode.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.10
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i4, long j) {
                WiFiTx6632.this.mModeIndex = i4;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter arrayAdapter8 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter8.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        int i4 = 0;
        while (true) {
            String[] strArr3 = mGuardInterval;
            if (i4 >= strArr3.length) {
                this.mSpGuardInterval.setAdapter((SpinnerAdapter) arrayAdapter8);
                this.mSpGuardInterval.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6632.11
                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onItemSelected(AdapterView<?> adapterView, View view, int i5, long j) {
                        WiFiTx6632.this.mGuardIntervalIndex = i5;
                    }

                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onNothingSelected(AdapterView<?> adapterView) {
                    }
                });
                HandlerThread handlerThread = new HandlerThread("Wifi Tx Test");
                this.mTestThread = handlerThread;
                handlerThread.start();
                this.mEventHandler = new EventHandler(this.mTestThread.getLooper());
                setViewEnabled(true);
                this.mRbNss1.setChecked(true);
                return;
            }
            arrayAdapter8.add(strArr3[i4]);
            i4++;
        }
    }

    private void initUiLayout() {
        this.mBtnGo = (Button) findViewById(R.id.WiFi_Go);
        this.mBtnStop = (Button) findViewById(R.id.WiFi_Stop);
        this.mBtnGo.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.wifi_tx_nss);
        this.mRGNss = radioGroup;
        radioGroup.setOnCheckedChangeListener(this);
        this.mSpBandwidth = (Spinner) findViewById(R.id.wifi_bandwidth_spinner);
        this.mSpRate = (Spinner) findViewById(R.id.WiFi_Rate_Spinner);
        this.mTvNss = (TextView) findViewById(R.id.wifi_nss_text);
        this.mRbNss1 = (RadioButton) findViewById(R.id.wifi_tx_nss_1);
        this.mRbNss2 = (RadioButton) findViewById(R.id.wifi_tx_nss_2);
        this.mTvDbw = (TextView) findViewById(R.id.wifi_bandwidth_dbw_tv);
        this.mSpDbw = (Spinner) findViewById(R.id.wifi_bandwidth_dbw_spn);
        this.mTvPrimCh = (TextView) findViewById(R.id.wifi_bandwidth_prim_ch_tv);
        this.mSpPrimCh = (Spinner) findViewById(R.id.wifi_bandwidth_prim_ch_spn);
        this.mEtPkt = (EditText) findViewById(R.id.WiFi_Pkt_Edit);
        this.mEtPktCnt = (EditText) findViewById(R.id.WiFi_Pktcnt_Edit);
        this.mEtTxGain = (EditText) findViewById(R.id.WiFi_Tx_Gain_Edit);
        this.mSpMode = (Spinner) findViewById(R.id.WiFi_Mode_Spinner);
        this.mSpPreamble = (Spinner) findViewById(R.id.WiFi_Preamble_Spinner);
        this.mSpGuardInterval = (Spinner) findViewById(R.id.WiFi_Guard_Interval_Spinner);
        this.mCkWf0 = (CheckBox) findViewById(R.id.wifi_wfx_0);
        this.mCkWf1 = (CheckBox) findViewById(R.id.wifi_wfx_1);
        CheckBox checkBox = (CheckBox) findViewById(R.id.wifi_duplicate_mode_tx);
        this.mCkDuplicateMode = checkBox;
        checkBox.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCkWf0.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCkWf1.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCkWf0.setChecked(true);
        this.mSpChannelTx0 = (Spinner) findViewById(R.id.wifi_tx0_channel_spinner);
        this.mSpChannelTx1 = (Spinner) findViewById(R.id.wifi_tx1_channel_spinner);
        this.mViewChannelTx1 = findViewById(R.id.wifi_tx1_channel_layout);
        this.mChannel = new ChannelInfo();
        this.mEtPkt.setText("1024");
        this.mEtPktCnt.setText("0");
        this.mEtTxGain.setText("22");
        this.mVgAnt = (ViewGroup) findViewById(R.id.wifi_ant_vg);
        this.mRbAntMain = (RadioButton) findViewById(R.id.wifi_tx_ant_main);
    }

    private void onClickBtnTxGo() {
        if (checkTxPath()) {
            try {
                this.mTxGainVal = (long) (Float.parseFloat(this.mEtTxGain.getText().toString()) * 2.0f);
                int i = this.mModeIndex;
                this.mTargetModeIndex = i;
                if (i == 0) {
                    try {
                        long j = Long.parseLong(this.mEtPkt.getText().toString());
                        long j2 = Long.parseLong(this.mEtPktCnt.getText().toString());
                        this.mPktLenNum = j;
                        this.mCntNum = j2;
                    } catch (NumberFormatException e) {
                        Toast.makeText(this, "invalid input value", 0).show();
                        return;
                    }
                } else if (i == 1) {
                    this.mPktLenNum = 100L;
                    this.mCntNum = 100L;
                    this.mTargetModeIndex = 0;
                }
                Handler handler = this.mEventHandler;
                if (handler != null) {
                    handler.sendEmptyMessage(1);
                    setViewEnabled(false);
                }
            } catch (NumberFormatException e2) {
                Toast.makeText(this, "invalid input value", 0).show();
            }
        }
    }

    private void onClickBtnTxStop() {
        Handler handler = this.mEventHandler;
        if (handler != null) {
            handler.sendEmptyMessage(2);
        }
        if (this.mModeIndex != 0) {
            EMWifi.setStandBy();
        }
    }

    private void setAntSwpIdx() {
        if (this.mAntSwapSupport) {
            EMWifi.setATParam(153L, this.mRbAntMain.isChecked() ? WiFiTestActivity.EnumRfAtAntswp.RF_AT_ANTSWP_MAIN.ordinal() : WiFiTestActivity.EnumRfAtAntswp.RF_AT_ANTSWP_AUX.ordinal());
        }
    }

    private void setRateIndex() {
        int i = this.mRate.mRateIndex;
        this.mHighRateSelected = i >= 12;
        Elog.i(TAG, "rateIndex : " + i);
        if (this.mHighRateSelected) {
            i = (i - 12) | Integer.MIN_VALUE;
        }
        EMWifi.setATParam(3L, i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setViewEnabled(boolean z) {
        this.mSpChannelTx0.setEnabled(z);
        this.mSpChannelTx1.setEnabled(z);
        this.mSpGuardInterval.setEnabled(z);
        this.mSpBandwidth.setEnabled(z);
        this.mRbNss1.setEnabled(z);
        this.mRbNss2.setEnabled(z);
        this.mCkDuplicateMode.setEnabled(z);
        this.mSpPreamble.setEnabled(z);
        this.mEtPkt.setEnabled(z);
        this.mEtPktCnt.setEnabled(z);
        this.mEtTxGain.setEnabled(z);
        this.mSpRate.setEnabled(z);
        this.mSpMode.setEnabled(z);
        this.mBtnGo.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
        this.mSpDbw.setEnabled(z);
        this.mSpPrimCh.setEnabled(z);
        this.mRGNss.setEnabled(z);
        this.mCkWf0.setEnabled(z);
        this.mCkWf1.setEnabled(z);
        this.mSpDbw.setEnabled(z);
        this.mSpPrimCh.setEnabled(z);
    }

    private void startCWToneTx() {
        EMWifi.setATParam(31L, 0L);
        EMWifi.setATParam(2L, this.mTxGainVal);
        EMWifi.setATParam(18L, this.mChannelTx0Freq);
        if (this.mViewChannelTx1.getVisibility() == 0) {
            EMWifi.setATParam(65554L, this.mChannelTx1Freq);
        }
        setAntSwpIdx();
        long j = 1;
        if (this.mWiFiMode == 1 && this.mCkWf1.isChecked()) {
            j = !this.mCkWf0.isChecked() ? 2L : 3L;
        }
        EMWifi.setATParam(113L, j);
        if (EMWifi.setATParam(1L, 5L) == 0) {
            this.mTestInProcess = true;
        }
    }

    private void startContinueTx() {
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
        EMWifi.setATParam(114L, this.mNssValue);
        long j = 1;
        if (this.mWiFiMode == 1 && this.mCkWf1.isChecked()) {
            j = !this.mCkWf0.isChecked() ? 2L : 3L;
        }
        EMWifi.setATParam(113L, j);
        int i2 = this.mBandwidthIndex;
        EMWifi.setATParam(71L, i2 >= 2 ? i2 - 2 : i2 + 5);
        EMWifi.setATParam(72L, this.mDataBandwidthValue);
        if (this.mSpPrimCh.getVisibility() == 0) {
            EMWifi.setATParam(73L, this.mPrimaryIndex);
        }
        EMWifi.setATParam(18L, this.mChannelTx0Freq);
        if (this.mViewChannelTx1.getVisibility() == 0) {
            EMWifi.setATParam(65554L, this.mChannelTx1Freq);
        }
        setRateIndex();
        EMWifi.setATParam(6L, this.mPktLenNum);
        EMWifi.setATParam(7L, this.mCntNum);
        EMWifi.setATParam(31L, 0L);
        EMWifi.setATParam(2L, this.mTxGainVal);
        EMWifi.setATParam(4L, this.mPreambleIndex);
        EMWifi.setATParam(16L, this.mGuardIntervalIndex);
        setAntSwpIdx();
        if (EMWifi.setATParam(1L, 1L) == 0) {
            this.mTestInProcess = true;
        }
        if (this.mCntNum != 0) {
            this.mEventHandler.sendEmptyMessageDelayed(3, 1000L);
        }
    }

    private void startDutyTx() {
        int i = this.mBandwidthIndex;
        EMWifi.setATParam(71L, i >= 2 ? i - 2 : i + 5);
        EMWifi.setATParam(72L, this.mDataBandwidthValue);
        if (this.mSpPrimCh.getVisibility() == 0) {
            EMWifi.setATParam(73L, this.mPrimaryIndex);
        }
        setRateIndex();
        EMWifi.setATParam(31L, 0L);
        EMWifi.setATParam(2L, this.mTxGainVal);
        EMWifi.setATParam(4L, this.mPreambleIndex);
        setAntSwpIdx();
        if (EMWifi.setATParam(1L, 4L) == 0) {
            this.mTestInProcess = true;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startTxTest(int i) {
        int i2 = this.mTargetModeIndex;
        if (i2 == 0) {
            startContinueTx();
        } else if (i2 == 1) {
            startDutyTx();
        } else {
            if (i2 != 2) {
                return;
            }
            startCWToneTx();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopTxTest() {
        Elog.i(TAG, "stopTxTest");
        if (this.mTestInProcess) {
            EMWifi.setATParam(1L, 0L);
            this.mTestInProcess = false;
        }
        Handler handler = this.mEventHandler;
        if (handler != null) {
            handler.removeMessages(3);
        }
        this.mHandler.sendEmptyMessage(4);
    }

    private void updateChannelByRateBandwidth(ArrayAdapter<String> arrayAdapter, int i, int i2) {
        if (this.mRate.getRateGroup(i) == 0) {
            this.mChannel.remove5GChannels(arrayAdapter);
            Elog.i(TAG, "The mode not support 5G channel : " + i);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateChannels() {
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        int i = this.mBandwidthIndex;
        Elog.d(TAG, "updateChannels");
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
        int i2 = this.mWiFiMode;
        if (i2 == 2) {
            this.mChannel.remove5GChannels(arrayAdapter);
        } else if (i2 == 3) {
            this.mChannel.remove2dot4GChannels(arrayAdapter);
        }
        updateChannelByRateBandwidth(arrayAdapter, this.mRate.mRateIndex, i);
        boolean z = false;
        int count = arrayAdapter.getCount();
        if (count == this.mChannelAdapter.getCount()) {
            for (int i3 = 0; i3 < count; i3++) {
                if (!arrayAdapter.getItem(i3).equals(this.mChannelAdapter.getItem(i3))) {
                    Elog.i(TAG, "index" + i3 + "new:" + arrayAdapter.getItem(i3) + " old:" + this.mChannelAdapter.getItem(i3));
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
        for (int i4 = 0; i4 < count; i4++) {
            this.mChannelAdapter.add(arrayAdapter.getItem(i4));
        }
        if (this.mChannelAdapter.getCount() == 0) {
            this.mBtnGo.setEnabled(false);
            z = false;
        } else {
            this.mBtnGo.setEnabled(true);
        }
        if (z) {
            updateWifiChannel(this.mChannel, this.mChannelAdapter, this.mSpChannelTx0);
            if (this.mViewChannelTx1.getVisibility() == 0) {
                updateWifiChannel(this.mChannel, this.mChannelAdapter, this.mSpChannelTx1);
            }
        }
        this.mSpChannelTx0.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mSpChannelTx1.setAdapter((SpinnerAdapter) this.mChannelAdapter);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateRate() {
        this.mRateAdapter.clear();
        Elog.i(TAG, "updateRate, mNssValue = " + this.mNssValue);
        int i = this.mPreambleIndex;
        if (i == 0) {
            int length = RateInfo.RATE_ITEM_54M.length;
            for (int i2 = 0; i2 < length; i2++) {
                this.mRateAdapter.add(RateInfo.RATE_ITEM_54M[i2]);
            }
        } else if (i == 1) {
            int length2 = RateInfo.RATE_ITEM_11M.length;
            for (int i3 = 0; i3 < length2; i3++) {
                this.mRateAdapter.add(RateInfo.RATE_ITEM_11M[i3]);
            }
        } else if (i == 2 || i == 3) {
            int i4 = this.mNssValue;
            if (i4 == 1) {
                int length3 = RateInfo.RATE_ITEM_CS7.length;
                for (int i5 = 0; i5 < length3; i5++) {
                    this.mRateAdapter.add(RateInfo.RATE_ITEM_CS7[i5]);
                }
            } else if (i4 == 2) {
                int length4 = RateInfo.RATE_ITEM_CS15.length;
                for (int i6 = 0; i6 < length4; i6++) {
                    this.mRateAdapter.add(RateInfo.RATE_ITEM_CS15[i6]);
                }
            }
        } else if (i == 4) {
            int length5 = RateInfo.RATE_ITEM_CS7.length;
            for (int i7 = 0; i7 < length5; i7++) {
                this.mRateAdapter.add(RateInfo.RATE_ITEM_CS7[i7]);
            }
            if (this.mBandwidthIndex >= 2) {
                this.mRateAdapter.add("MCS8");
            }
            if (this.mBandwidthIndex >= 3) {
                this.mRateAdapter.add("MCS9");
            }
        }
        this.mSpRate.setAdapter((SpinnerAdapter) this.mRateAdapter);
        if (this.mBandwidthIndex < 4 || this.mPreambleIndex != 0) {
            return;
        }
        this.mSpRate.setSelection(4);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateTxPower() {
        Elog.i(TAG, "updateTxPower");
        if (this.mRate == null) {
            return;
        }
        EMWifi.setATParam(18L, this.mChannelTx0Freq);
        EMWifi.setATParam(4L, this.mPreambleIndex);
        setRateIndex();
        EMWifi.setATParam(72L, this.mDataBandwidthValue);
        long j = 1;
        if (this.mWiFiMode == 1 && this.mCkWf1.isChecked()) {
            j = !this.mCkWf0.isChecked() ? 2L : 3L;
        }
        EMWifi.setATParam(113L, j);
        long[] jArr = {0, 0};
        if (EMWifi.getATParam(136L, jArr) != 0 || jArr[0] == 0) {
            this.mEtTxGain.setText(String.valueOf(22));
        } else {
            this.mEtTxGain.setText(String.valueOf(jArr[0] * 0.5d));
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity
    boolean isInTestProcess() {
        return !this.mBtnGo.isEnabled();
    }

    @Override // android.widget.RadioGroup.OnCheckedChangeListener
    public void onCheckedChanged(RadioGroup radioGroup, int i) {
        if (i == R.id.wifi_tx_nss_1) {
            this.mNssValue = 1;
            this.mCkDuplicateMode.setVisibility(0);
        } else if (i == R.id.wifi_tx_nss_2) {
            this.mNssValue = 2;
            this.mCkDuplicateMode.setVisibility(8);
        }
        Elog.i(TAG, "mNssValue changed = " + this.mNssValue);
        updateRate();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == this.mBtnGo.getId()) {
            onClickBtnTxGo();
        } else if (view.getId() == this.mBtnStop.getId()) {
            onClickBtnTxStop();
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wifi_tx_6632);
        Intent intent = getIntent();
        this.mAntSwapSupport = intent.getBooleanExtra("key_ant_swap", false);
        String stringExtra = intent.getStringExtra("mode");
        if (stringExtra == null) {
            this.mWiFiMode = 1;
        } else if (stringExtra.equals("TX Band0")) {
            this.mWiFiMode = 2;
        } else if (stringExtra.equals("TX Band1")) {
            this.mWiFiMode = 3;
        }
        initUiLayout();
        initUiComponent();
        int i = this.mWiFiMode;
        if (i == 2) {
            this.mCkWf0.setChecked(true);
            this.mRGNss.setVisibility(8);
            this.mCkWf0.setVisibility(8);
            this.mCkWf1.setVisibility(8);
            this.mCkDuplicateMode.setVisibility(8);
            this.mTvNss.setVisibility(8);
        } else if (i == 3) {
            this.mCkWf1.setChecked(true);
            this.mRGNss.setVisibility(8);
            this.mCkWf0.setVisibility(8);
            this.mCkWf1.setVisibility(8);
            this.mCkDuplicateMode.setVisibility(8);
            this.mTvNss.setVisibility(8);
        }
        if (this.mAntSwapSupport) {
            return;
        }
        this.mVgAnt.setVisibility(8);
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity, android.app.Activity
    protected void onDestroy() {
        Handler handler = this.mEventHandler;
        if (handler != null) {
            handler.removeMessages(3);
        }
        HandlerThread handlerThread = this.mTestThread;
        if (handlerThread != null) {
            handlerThread.quit();
        }
        super.onDestroy();
    }
}

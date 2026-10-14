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
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import java.util.Arrays;
import java.util.Locale;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiTx6620 extends WiFiTestActivity implements View.OnClickListener {
    private static final int ANTENNA = 0;
    private static final int BANDWIDTH_40MHZ_MASK = 32768;
    private static final int BANDWIDTH_INDEX_20M = 0;
    private static final int BANDWIDTH_INDEX_40M = 1;
    private static final int BANDWIDTH_INDEX_80M = 2;
    private static final int BIT_8_MASK = 255;
    private static final int BW_INDX_ADVANCED = 4;
    private static final int CCK_RATE_NUMBER = 4;
    private static final int COMMAND_INDEX_CARRIER_NEW = 10;
    private static final int COMMAND_INDEX_LOCALFREQ = 5;
    private static final int COMMAND_INDEX_OUTPUTPOWER = 4;
    private static final int COMMAND_INDEX_STARTTX = 1;
    private static final int COMMAND_INDEX_STOPTEST = 0;
    private static final int CWMODE_CCKPI = 5;
    private static final int CWMODE_OFDMLTF = 2;
    private static final int DEFAULT_PKT_CNT = 3000;
    private static final int DEFAULT_PKT_LEN = 1024;
    private static final int DEFAULT_TX_GAIN = 0;
    private static final int HANDLER_EVENT_FINISH = 4;
    private static final int HANDLER_EVENT_GO = 1;
    private static final int HANDLER_EVENT_STOP = 2;
    private static final int HANDLER_EVENT_TIMER = 3;
    private static final int HIGH_RATE_PREAMBLE_BASE = 2;
    private static final int LENGTH_3 = 3;
    private static final int MAX_LOWER_RATE_NUMBER = 12;
    private static final int ONE_SENCOND = 1000;
    private static final int RATE_MCS_INDEX = 32;
    private static final int RATE_MODE_MASK = 31;
    private static final int RATE_NOT_MCS_INDEX = 9;
    private static final String TAG = "WifiTx";
    private static final int TEST_MODE_CARRIER = 2;
    private static final int TEST_MODE_DUTY = 1;
    private static final int TEST_MODE_LEAKAGE = 3;
    private static final int TEST_MODE_POWEROFF = 4;
    private static final int TEST_MODE_TX = 0;
    private static final int TXOP_LIMIT_VALUE = 131072;
    private static final long[] PACKCONTENT_BUFFER = {-14548988, 860094470, 1432748040, 1431633945, -1431699429, -1145372643};
    private static final String[] BW_ADVANCED_ITEMS = {"BW20", "BW40", "BW80"};
    private boolean mHighRateSelected = false;
    private boolean mCCKRateSelected = true;
    private int mLastBandwidth = 0;
    private Spinner mChannelSpinner = null;
    private Spinner mGuardIntervalSpinner = null;
    private Spinner mBandwidthSpinner = null;
    private Spinner mPreambleSpinner = null;
    private EditText mEtPkt = null;
    private EditText mEtPktCnt = null;
    private EditText mEtTxGain = null;
    private Spinner mRateSpinner = null;
    private Spinner mModeSpinner = null;
    private Button mBtnGo = null;
    private Button mBtnStop = null;
    private ViewGroup mVgAnt = null;
    private RadioButton mRbAntMain = null;
    private ArrayAdapter<String> mChannelAdapter = null;
    private ArrayAdapter<String> mModeAdapter = null;
    private ArrayAdapter<String> mPreambleAdapter = null;
    private int mModeIndex = 0;
    private int mPreambleIndex = 0;
    private int mBandwidthIndex = 0;
    private int mGuardIntervalIndex = 0;
    private RateInfo mRate = null;
    private ChannelInfo mChannel = null;
    private long mPktLenNum = PlaybackStateCompat.ACTION_PLAY_FROM_MEDIA_ID;
    private long mCntNum = 3000;
    private long mTxGainVal = 0;
    private boolean mAntSwapSupport = false;
    private HandlerThread mTestThread = null;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (4 == message.what) {
                Elog.v(WiFiTx6620.TAG, "receive HANDLER_EVENT_FINISH");
                WiFiTx6620.this.setViewEnabled(true);
            }
        }
    };
    private Handler mEventHandler = null;
    String[] mMode = {"continuous packet tx", "100% duty cycle", "carrier suppression", "local leakage", "enter power off"};
    String[] mPreamble = {"Normal", "CCK short", "802.11n mixed mode", "802.11n green field", "802.11ac"};
    String[] mBandwidth = {"20MHz", "40MHz", "U20MHz", "L20MHz", "Advanced"};
    String[] mGuardInterval = {"800ns", "400ns"};
    private Spinner mSpBwAdvCbw = null;
    private Spinner mSpBwAdvDbw = null;
    private Spinner mSpBwAdvPrimCh = null;
    int mChannelBandwidth = 0;
    int mDataBandwidth = 0;
    int mPrimarySetting = 0;
    private ArrayAdapter<String> mDbwAdapter = null;
    private ArrayAdapter<String> mPrimChAdapter = null;
    private boolean mIsAdvancedMode = false;
    private ArrayAdapter<String> mRateAdapter = null;
    private int mRateUpdateCounter = 0;
    private int mTargetModeIndex = 0;

    class EventHandler extends Handler {
        public EventHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(WiFiTx6620.TAG, "receive msg " + message.what);
            long[] jArr = new long[2];
            int i = message.what;
            if (i != 1) {
                if (i == 2) {
                    jArr[0] = EMWifi.setATParam(1L, 0L);
                    if (WiFiTx6620.this.mEventHandler != null) {
                        WiFiTx6620.this.mEventHandler.removeMessages(3);
                    }
                    WiFiTx6620.this.mHandler.sendEmptyMessage(4);
                    return;
                }
                if (i != 3) {
                    return;
                }
                jArr[0] = 0;
                if (WiFiTx6620.this.mModeIndex == 1) {
                    boolean z = false;
                    if (EMWifi.getATParam(32L, jArr) == 0) {
                        Elog.i(WiFiTx6620.TAG, "query Transmitted packet count succeed, count = " + jArr[0] + " target count = 100");
                        if (jArr[0] == 100) {
                            z = true;
                        }
                    } else {
                        Elog.w(WiFiTx6620.TAG, "query Transmitted packet count failed");
                    }
                    if (!z) {
                        jArr[0] = EMWifi.setATParam(1L, 0L);
                    }
                    WiFiTx6620.this.mTargetModeIndex = 1;
                    sendEmptyMessage(1);
                    return;
                }
                try {
                    long j = Long.parseLong(WiFiTx6620.this.mEtPktCnt.getText().toString());
                    if (EMWifi.getATParam(32L, jArr) == 0) {
                        Elog.i(WiFiTx6620.TAG, "query Transmitted packet count succeed, count = " + jArr[0] + " target count = " + j);
                        if (jArr[0] == j) {
                            removeMessages(3);
                            WiFiTx6620.this.mHandler.sendEmptyMessage(4);
                            return;
                        }
                    } else {
                        Elog.w(WiFiTx6620.TAG, "query Transmitted packet count failed");
                    }
                    sendEmptyMessageDelayed(3, 1000L);
                    return;
                } catch (NumberFormatException e) {
                    Toast.makeText(WiFiTx6620.this, "invalid input value", 0).show();
                    return;
                }
            }
            int i2 = WiFiTx6620.this.mTargetModeIndex;
            if (i2 != 0) {
                if (i2 == 1) {
                    if (4 == WiFiTx6620.this.mBandwidthIndex) {
                        EMWifi.setATParam(71L, WiFiTx6620.this.mChannelBandwidth);
                        EMWifi.setATParam(72L, WiFiTx6620.this.mDataBandwidth);
                        EMWifi.setATParam(73L, WiFiTx6620.this.mPrimarySetting);
                    } else {
                        EMWifi.setATParam(15L, WiFiTx6620.this.mBandwidthIndex);
                    }
                    WiFiTx6620.this.setRateIndex();
                    EMWifi.setATParam(2L, WiFiTx6620.this.mTxGainVal);
                    EMWifi.setATParam(4L, WiFiTx6620.this.mPreambleIndex);
                    EMWifi.setATParam(5L, 0L);
                    WiFiTx6620.this.setAntSwpIdx();
                    EMWifi.setATParam(1L, 4L);
                    return;
                }
                if (i2 != 2) {
                    if (i2 != 3) {
                        return;
                    }
                    EMWifi.setATParam(2L, WiFiTx6620.this.mTxGainVal);
                    EMWifi.setATParam(5L, 0L);
                    WiFiTx6620.this.setAntSwpIdx();
                    EMWifi.setATParam(1L, 5L);
                    return;
                }
                EMWifi.setATParam(2L, WiFiTx6620.this.mTxGainVal);
                EMWifi.setATParam(5L, 0L);
                if (WiFiTx6620.this.mCCKRateSelected) {
                    EMWifi.setATParam(65L, 5L);
                } else {
                    EMWifi.setATParam(65L, 2L);
                }
                WiFiTx6620.this.setAntSwpIdx();
                EMWifi.setATParam(1L, 10L);
                return;
            }
            EMWifi.setATParam(2L, WiFiTx6620.this.mTxGainVal);
            EMWifi.setATParam(4L, WiFiTx6620.this.mPreambleIndex);
            EMWifi.setATParam(5L, 0L);
            EMWifi.setATParam(6L, WiFiTx6620.this.mPktLenNum);
            EMWifi.setATParam(7L, WiFiTx6620.this.mCntNum);
            EMWifi.setATParam(8L, 20L);
            EMWifi.setATParam(9L, 0L);
            EMWifi.setATParam(10L, PlaybackStateCompat.ACTION_PREPARE_FROM_URI);
            for (int i3 = 0; i3 < WiFiTx6620.PACKCONTENT_BUFFER.length; i3++) {
                EMWifi.setATParam(12L, WiFiTx6620.PACKCONTENT_BUFFER[i3]);
            }
            EMWifi.setATParam(13L, 1L);
            EMWifi.setATParam(14L, 2L);
            EMWifi.setATParam(16L, WiFiTx6620.this.mGuardIntervalIndex);
            Elog.i(WiFiTx6620.TAG, "The mBandwidthIndex is : " + WiFiTx6620.this.mBandwidthIndex);
            if (4 == WiFiTx6620.this.mBandwidthIndex) {
                EMWifi.setATParam(71L, WiFiTx6620.this.mChannelBandwidth);
                EMWifi.setATParam(72L, WiFiTx6620.this.mDataBandwidth);
                EMWifi.setATParam(73L, WiFiTx6620.this.mPrimarySetting);
            } else {
                EMWifi.setATParam(15L, WiFiTx6620.this.mBandwidthIndex);
            }
            WiFiTx6620.this.setRateIndex();
            EMWifi.setChannel(WiFiTx6620.this.mChannel.getSelectedFrequency());
            WiFiTx6620.this.setAntSwpIdx();
            EMWifi.setATParam(1L, 1L);
            if (WiFiTx6620.this.mCntNum != 0) {
                sendEmptyMessageDelayed(3, 1000L);
            }
        }
    }

    static class RateInfo {
        private static final String[] ADVANCED_RATE_20M = {"1M", "2M", "5.5M", "11M", "6M", "9M", "12M", "18M", "24M", "36M", "48M", "54M", "MCS0", "MCS1", "MCS2", "MCS3", "MCS4", "MCS5", "MCS6", "MCS7", "MCS8"};
        private static final String[] ADVANCED_RATE_40M = {"MCS0", "MCS1", "MCS2", "MCS3", "MCS4", "MCS5", "MCS6", "MCS7", "MCS8", "MCS9", "MCS32"};
        private static final String[] ADVANCED_RATE_80M = {"MCS0", "MCS1", "MCS2", "MCS3", "MCS4", "MCS5", "MCS6", "MCS7", "MCS8", "MCS9"};
        private static final short EEPROM_RATE_GROUP_CCK = 0;
        private static final short EEPROM_RATE_GROUP_OFDM_12_18M = 2;
        private static final short EEPROM_RATE_GROUP_OFDM_24_36M = 3;
        private static final short EEPROM_RATE_GROUP_OFDM_48_54M = 4;
        private static final short EEPROM_RATE_GROUP_OFDM_6_9M = 1;
        private static final short EEPROM_RATE_GROUP_OFDM_MCS0_32 = 5;
        private static final short EEPROM_RATE_GROUP_OFDM_MEDIUM = 6;
        int mRateIndex = 0;
        int mOFDMStartIndex = 4;
        private final short[] mUcRateGroupEep = {EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_CCK, EEPROM_RATE_GROUP_OFDM_6_9M, EEPROM_RATE_GROUP_OFDM_6_9M, EEPROM_RATE_GROUP_OFDM_12_18M, EEPROM_RATE_GROUP_OFDM_12_18M, EEPROM_RATE_GROUP_OFDM_24_36M, EEPROM_RATE_GROUP_OFDM_24_36M, EEPROM_RATE_GROUP_OFDM_48_54M, EEPROM_RATE_GROUP_OFDM_48_54M, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32, EEPROM_RATE_GROUP_OFDM_MCS0_32};
        private final String[] mPszRate = {"1M", "2M", "5.5M", "11M", "6M", "9M", "12M", "18M", "24M", "36M", "48M", "54M", "MCS0", "MCS1", "MCS2", "MCS3", "MCS4", "MCS5", "MCS6", "MCS7", "MCS8", "MCS9", "MCS32"};
        private final int[] mRateCfg = {2, 4, 11, 22, 12, 18, 24, 36, 48, 72, 96, NfcCommand.CommandType.MTK_NFC_EM_ALS_CARD_MODE_RSP, 22, 12, 18, 24, 36, 48, 72, 96, NfcCommand.CommandType.MTK_NFC_EM_ALS_CARD_MODE_RSP};

        RateInfo() {
        }

        private void setRateAdapterTo(ArrayAdapter<String> arrayAdapter, String[] strArr) {
            arrayAdapter.clear();
            for (String str : strArr) {
                arrayAdapter.add(str);
            }
        }

        String getRate() {
            return this.mPszRate[this.mRateIndex];
        }

        int getRateCfg() {
            return this.mRateCfg[this.mRateIndex];
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

        int getRateGroupExt(int i) {
            int rateGroup = getRateGroup(i);
            if (rateGroup <= 0 || rateGroup >= 5) {
                return rateGroup;
            }
            return 6;
        }

        int getRateNumber() {
            return this.mPszRate.length;
        }

        int getUcRateGroupEep() {
            return this.mUcRateGroupEep[this.mRateIndex];
        }
    }

    static /* synthetic */ int access$1608(WiFiTx6620 wiFiTx6620) {
        int i = wiFiTx6620.mRateUpdateCounter;
        wiFiTx6620.mRateUpdateCounter = i + 1;
        return i;
    }

    static /* synthetic */ int access$1808(WiFiTx6620 wiFiTx6620) {
        int i = wiFiTx6620.mModeIndex;
        wiFiTx6620.mModeIndex = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void addPreambleItems(int i) {
        if (i != 5) {
            if (i == 0) {
                for (int i2 = 0; i2 < 2; i2++) {
                    this.mPreambleAdapter.add(this.mPreamble[i2]);
                }
                return;
            }
            if (i == 6) {
                this.mPreambleAdapter.add(this.mPreamble[0]);
                return;
            }
            Elog.d(TAG, "addPreambleItems; INVALID rateGroup:" + i);
            return;
        }
        int i3 = 2;
        while (true) {
            String[] strArr = this.mPreamble;
            if (i3 >= strArr.length) {
                return;
            }
            this.mPreambleAdapter.add(strArr[i3]);
            i3++;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int convertAdvancedRateIndex2Normal(int i, int i2) {
        int i3 = i2;
        if (i == 0) {
            i3 = i2;
        } else if (i == 1 || i == 2) {
            i3 = i2 + 12;
        }
        Elog.i(TAG, "convertAdvancedRateIndex2Normal: cbw: " + i + " targetIndex:" + i3);
        return i3;
    }

    private void initUiComponent() {
        this.mVgAnt = (ViewGroup) findViewById(R.id.wifi_ant_vg);
        this.mRbAntMain = (RadioButton) findViewById(R.id.wifi_tx_ant_main);
        if (!this.mAntSwapSupport) {
            this.mVgAnt.setVisibility(8);
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, BW_ADVANCED_ITEMS);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpBwAdvCbw.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mSpBwAdvCbw.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.8
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                Elog.i(WiFiTx6620.TAG, "mSpBwAdvCbw onItemSelected position:" + i + " mChannelBandwidth:" + WiFiTx6620.this.mChannelBandwidth);
                if (WiFiTx6620.this.mChannelBandwidth == i) {
                    return;
                }
                WiFiTx6620.this.mChannelBandwidth = i;
                WiFiTx6620.this.mDbwAdapter.clear();
                for (int i2 = 0; i2 <= i; i2++) {
                    WiFiTx6620.this.mDbwAdapter.add(WiFiTx6620.BW_ADVANCED_ITEMS[i2]);
                }
                WiFiTx6620.this.mSpBwAdvDbw.setAdapter((SpinnerAdapter) WiFiTx6620.this.mDbwAdapter);
                WiFiTx6620.this.mPrimChAdapter.clear();
                int iPow = ((int) Math.pow(2.0d, i)) - 1;
                for (int i3 = 0; i3 <= iPow; i3++) {
                    WiFiTx6620.this.mPrimChAdapter.add(String.valueOf(i3));
                }
                WiFiTx6620.this.mSpBwAdvPrimCh.setAdapter((SpinnerAdapter) WiFiTx6620.this.mPrimChAdapter);
                WiFiTx6620 wiFiTx6620 = WiFiTx6620.this;
                wiFiTx6620.onAdvancedSelectChanged(wiFiTx6620.mChannelBandwidth, WiFiTx6620.this.mDataBandwidth, WiFiTx6620.this.mPrimarySetting);
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
        this.mSpBwAdvDbw.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.9
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i == WiFiTx6620.this.mDataBandwidth) {
                    return;
                }
                WiFiTx6620.this.mDataBandwidth = i;
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
        this.mSpBwAdvPrimCh.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.10
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i == WiFiTx6620.this.mPrimarySetting) {
                    return;
                }
                WiFiTx6620.this.mPrimarySetting = i;
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

    private void onClickBtnTxGo() {
        try {
            long j = (long) (2.0f * Float.parseFloat(this.mEtTxGain.getText().toString()));
            this.mEtTxGain.setText(String.format(Locale.ENGLISH, getString(R.string.wifi_tx_gain_format), Double.valueOf(j / 2.0d)));
            this.mTxGainVal = j;
            long j2 = j <= 255 ? j : 255L;
            this.mTxGainVal = j2;
            if (j2 < 0) {
                j2 = 0;
            }
            this.mTxGainVal = j2;
            Elog.i(TAG, "Wifi Tx Test : " + this.mMode[this.mModeIndex]);
            int i = this.mModeIndex;
            this.mTargetModeIndex = i;
            if (i == 0) {
                try {
                    long j3 = Long.parseLong(this.mEtPkt.getText().toString());
                    long j4 = Long.parseLong(this.mEtPktCnt.getText().toString());
                    this.mPktLenNum = j3;
                    this.mCntNum = j4;
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

    private void onClickBtnTxStop() {
        Handler handler = this.mEventHandler;
        if (handler != null) {
            handler.sendEmptyMessage(2);
        }
        int i = this.mModeIndex;
        if (i != 0) {
            if (i != 4) {
                EMWifi.setStandBy();
                return;
            }
            EMWifi.setPnpPower(1L);
            EMWifi.setTestMode();
            EMWifi.setChannel(this.mChannel.getSelectedFrequency());
            uiUpdateTxPower();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setAntSwpIdx() {
        if (this.mAntSwapSupport) {
            EMWifi.setATParam(153L, this.mRbAntMain.isChecked() ? WiFiTestActivity.EnumRfAtAntswp.RF_AT_ANTSWP_MAIN.ordinal() : WiFiTestActivity.EnumRfAtAntswp.RF_AT_ANTSWP_AUX.ordinal());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setRateIndex() {
        int i = this.mRate.mRateIndex;
        if (this.mHighRateSelected) {
            int i2 = i - 12;
            if (i2 > 9) {
                i2 = 32;
            }
            i = i2 | Integer.MIN_VALUE;
        }
        Elog.i(TAG, String.format("TX rate index = 0x%08x", Integer.valueOf(i)));
        EMWifi.setATParam(3L, i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setViewEnabled(boolean z) {
        this.mChannelSpinner.setEnabled(z);
        this.mGuardIntervalSpinner.setEnabled(z);
        this.mBandwidthSpinner.setEnabled(z);
        this.mPreambleSpinner.setEnabled(z);
        this.mEtPkt.setEnabled(z);
        this.mEtPktCnt.setEnabled(z);
        this.mEtTxGain.setEnabled(z);
        this.mRateSpinner.setEnabled(z);
        this.mModeSpinner.setEnabled(z);
        this.mBtnGo.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
        this.mSpBwAdvCbw.setEnabled(z);
        this.mSpBwAdvDbw.setEnabled(z);
        this.mSpBwAdvPrimCh.setEnabled(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void uiUpdateTxPower() {
        short s = 0;
        long[] jArr = new long[3];
        int selectedChannelId = this.mChannel.getSelectedChannelId() | (this.mBandwidthIndex == 1 ? 32768 : 0);
        Elog.i(TAG, "channelIdx " + selectedChannelId + " rateIdx " + this.mRate.mRateIndex + " gain " + Arrays.toString(jArr) + " Len 3");
        if (EMWifi.readTxPowerFromEEPromEx(selectedChannelId, this.mRate.mRateIndex, jArr, 3) == 0) {
            long j = jArr[0];
            Elog.i(TAG, "i4TxPwrGain from uiUpdateTxPower is " + j);
            s = (short) ((int) (255 & j));
        }
        this.mEtTxGain.setText(String.format(Locale.ENGLISH, getString(R.string.wifi_tx_gain_format), Double.valueOf(((double) s) / 2.0d)));
    }

    private void updateChannelByAdvancedSetting(int i, int i2, int i3) {
        Elog.i(TAG, "updateChannelByAdvancedSetting: cbw:" + i);
        if (i == 0) {
            this.mChannelAdapter.clear();
            this.mChannel.addSupported2dot4gChannels(this.mChannelAdapter, true);
            this.mChannel.addSupported5gChannelsByBandwidth(this.mChannelAdapter, 1, true);
        } else if (i == 1) {
            this.mChannelAdapter.clear();
            this.mChannel.addSupported2dot4gChannels(this.mChannelAdapter, true);
            this.mChannel.removeBw40mUnsupported2dot4GChannels(this.mChannelAdapter);
            this.mChannel.addSupported5gChannelsByBandwidth(this.mChannelAdapter, 2, true);
        } else if (i == 2) {
            this.mChannelAdapter.clear();
            this.mChannel.addSupported5gChannelsByBandwidth(this.mChannelAdapter, 4, true);
        }
        updateRateByBandwidth(this.mRateAdapter, i);
        if (this.mRateUpdateCounter == 0) {
            this.mRateSpinner.setAdapter((SpinnerAdapter) this.mRateAdapter);
        } else {
            this.mRateUpdateCounter = 0;
        }
    }

    private void updateChannelByRateBandwidth(int i, int i2) {
        Elog.i(TAG, "updateChannelByRateBandwidth: rateIndex:" + i + " bandwidthIndex:" + i2);
        if (this.mRate.getRateGroup(i) == 0) {
            this.mChannel.remove5GChannels(this.mChannelAdapter);
        } else {
            this.mChannel.removeChannels(new int[]{14}, this.mChannelAdapter);
        }
        if (i2 == 1) {
            this.mChannel.removeBw40mUnsupported2dot4GChannels(this.mChannelAdapter);
            this.mChannel.remove5GChannels(this.mChannelAdapter);
            if (this.mRate.getRateGroup(i) != 0) {
                this.mChannel.insertBw40MChannels(this.mChannelAdapter);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateChannels() {
        int i = this.mBandwidthIndex;
        this.mChannel.resetSupportedChannels(this.mChannelAdapter);
        if (this.mBandwidthIndex == 4) {
            updateChannelByAdvancedSetting(this.mChannelBandwidth, this.mDataBandwidth, this.mPrimarySetting);
        }
        updateChannelByRateBandwidth(this.mRate.mRateIndex, i);
        boolean z = true;
        if (this.mChannelAdapter.getCount() == 0) {
            this.mBtnGo.setEnabled(false);
            z = false;
        } else {
            this.mBtnGo.setEnabled(true);
        }
        if (z) {
            updateWifiChannel(this.mChannel, this.mChannelAdapter, this.mChannelSpinner);
            uiUpdateTxPower();
        }
    }

    private void updateRateByBandwidth(ArrayAdapter<String> arrayAdapter, int i) {
        String[] strArr = null;
        if (i == 0) {
            strArr = RateInfo.ADVANCED_RATE_20M;
        } else if (i == 1) {
            strArr = RateInfo.ADVANCED_RATE_40M;
        } else if (i == 2) {
            strArr = RateInfo.ADVANCED_RATE_80M;
        } else {
            Elog.d(TAG, "updateRateByBandwidth:Invalid bandwith " + i);
        }
        if (strArr == null) {
            return;
        }
        arrayAdapter.clear();
        for (String str : strArr) {
            arrayAdapter.add(str);
        }
    }

    @Override // com.mediatek.engineermode.wifi.WiFiTestActivity
    boolean isInTestProcess() {
        return !this.mBtnGo.isEnabled();
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
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wifi_tx_6620);
        Intent intent = getIntent();
        this.mAntSwapSupport = intent.getBooleanExtra("key_ant_swap", false);
        this.mIsAdvancedMode = intent.getBooleanExtra("key_11ac", false);
        this.mChannelSpinner = (Spinner) findViewById(R.id.WiFi_Channel_Spinner);
        this.mPreambleSpinner = (Spinner) findViewById(R.id.WiFi_Preamble_Spinner);
        this.mEtPkt = (EditText) findViewById(R.id.WiFi_Pkt_Edit);
        this.mEtPktCnt = (EditText) findViewById(R.id.WiFi_Pktcnt_Edit);
        this.mEtTxGain = (EditText) findViewById(R.id.WiFi_Tx_Gain_Edit);
        this.mRateSpinner = (Spinner) findViewById(R.id.WiFi_Rate_Spinner);
        this.mModeSpinner = (Spinner) findViewById(R.id.WiFi_Mode_Spinner);
        this.mBtnGo = (Button) findViewById(R.id.WiFi_Go);
        this.mBtnStop = (Button) findViewById(R.id.WiFi_Stop);
        this.mBandwidthSpinner = (Spinner) findViewById(R.id.WiFi_Bandwidth_Spinner);
        this.mGuardIntervalSpinner = (Spinner) findViewById(R.id.WiFi_Guard_Interval_Spinner);
        HandlerThread handlerThread = new HandlerThread("Wifi Tx Test");
        this.mTestThread = handlerThread;
        handlerThread.start();
        this.mEventHandler = new EventHandler(this.mTestThread.getLooper());
        this.mBtnGo.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        this.mChannel = new ChannelInfo();
        this.mRate = new RateInfo();
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mChannelAdapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        ChannelInfo.getSupportChannels();
        this.mChannel.addSupported2dot4gChannels(this.mChannelAdapter, false);
        this.mChannelSpinner.setAdapter((SpinnerAdapter) this.mChannelAdapter);
        this.mChannelSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                String str = (String) WiFiTx6620.this.mChannelAdapter.getItem(i);
                WiFiTx6620.this.mChannel.setSelectedChannel(str);
                EMWifi.setChannel(ChannelInfo.getChannelFrequency(ChannelInfo.parseChannelId(str)));
                WiFiTx6620.this.uiUpdateTxPower();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mRateAdapter = arrayAdapter2;
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        if (!this.mIsAdvancedMode) {
            for (int i = 0; i < this.mRate.getRateNumber(); i++) {
                this.mRateAdapter.add(this.mRate.mPszRate[i]);
            }
        }
        this.mRateSpinner.setAdapter((SpinnerAdapter) this.mRateAdapter);
        this.mRateSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                int rateGroupExt = WiFiTx6620.this.mRate.getRateGroupExt(WiFiTx6620.this.mRate.mRateIndex);
                WiFiTx6620.this.mRate.mRateIndex = i2;
                int iConvertAdvancedRateIndex2Normal = i2;
                if (WiFiTx6620.this.mIsAdvancedMode) {
                    WiFiTx6620 wiFiTx6620 = WiFiTx6620.this;
                    iConvertAdvancedRateIndex2Normal = wiFiTx6620.convertAdvancedRateIndex2Normal(wiFiTx6620.mChannelBandwidth, iConvertAdvancedRateIndex2Normal);
                    WiFiTx6620.this.mRate.mRateIndex = iConvertAdvancedRateIndex2Normal;
                }
                int rateGroupExt2 = WiFiTx6620.this.mRate.getRateGroupExt(WiFiTx6620.this.mRate.mRateIndex);
                Elog.i(WiFiTx6620.TAG, "The mRateIndex is : " + i2 + " targetIndex:" + iConvertAdvancedRateIndex2Normal);
                if (rateGroupExt != rateGroupExt2) {
                    WiFiTx6620.this.mHighRateSelected = iConvertAdvancedRateIndex2Normal >= 12;
                    int i3 = WiFiTx6620.this.mHighRateSelected ? 2 : 0;
                    WiFiTx6620.this.mPreambleAdapter.clear();
                    WiFiTx6620.this.addPreambleItems(rateGroupExt2);
                    WiFiTx6620.this.mPreambleIndex = i3;
                    WiFiTx6620.this.mPreambleSpinner.setAdapter((SpinnerAdapter) WiFiTx6620.this.mPreambleAdapter);
                }
                WiFiTx6620.this.uiUpdateTxPower();
                if (iConvertAdvancedRateIndex2Normal >= 4) {
                    if (WiFiTx6620.this.mCCKRateSelected) {
                        WiFiTx6620.this.mCCKRateSelected = false;
                        WiFiTx6620.this.mModeAdapter.remove(WiFiTx6620.this.mMode[2]);
                        WiFiTx6620.this.mModeSpinner.setSelection(0);
                    }
                } else if (!WiFiTx6620.this.mCCKRateSelected) {
                    WiFiTx6620.this.mCCKRateSelected = true;
                    WiFiTx6620.this.mModeAdapter.insert(WiFiTx6620.this.mMode[2], 2);
                    WiFiTx6620.this.mModeSpinner.setSelection(0);
                }
                WiFiTx6620.access$1608(WiFiTx6620.this);
                WiFiTx6620.this.updateChannels();
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        if (!this.mIsAdvancedMode) {
            this.mRateSpinner.setSelection(this.mRate.mOFDMStartIndex);
        }
        ArrayAdapter<String> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mModeAdapter = arrayAdapter3;
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        int i2 = 0;
        while (true) {
            String[] strArr = this.mMode;
            if (i2 >= strArr.length) {
                break;
            }
            this.mModeAdapter.add(strArr[i2]);
            i2++;
        }
        this.mModeSpinner.setAdapter((SpinnerAdapter) this.mModeAdapter);
        this.mModeSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.4
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                WiFiTx6620.this.mModeIndex = i3;
                Elog.i(WiFiTx6620.TAG, "The mModeIndex is : " + i3);
                if (WiFiTx6620.this.mCCKRateSelected || i3 < 2) {
                    return;
                }
                WiFiTx6620.access$1808(WiFiTx6620.this);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter<String> arrayAdapter4 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mPreambleAdapter = arrayAdapter4;
        arrayAdapter4.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        addPreambleItems(0);
        this.mPreambleSpinner.setAdapter((SpinnerAdapter) this.mPreambleAdapter);
        this.mPreambleSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.5
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                WiFiTx6620 wiFiTx6620 = WiFiTx6620.this;
                wiFiTx6620.mPreambleIndex = (wiFiTx6620.mHighRateSelected ? 2 : 0) + i3;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter arrayAdapter5 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter5.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        if (this.mIsAdvancedMode) {
            arrayAdapter5.add(this.mBandwidth[4]);
        } else {
            for (int i3 = 0; i3 < 4; i3++) {
                arrayAdapter5.add(this.mBandwidth[i3]);
            }
        }
        this.mBandwidthSpinner.setAdapter((SpinnerAdapter) arrayAdapter5);
        this.mBandwidthSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.6
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i4, long j) {
                Elog.i(WiFiTx6620.TAG, "mBandwidthSpinner.onItemSelected:" + i4 + " mBandwidthIndex:" + WiFiTx6620.this.mBandwidthIndex + " mLastBandwidth:" + WiFiTx6620.this.mLastBandwidth);
                WiFiTx6620 wiFiTx6620 = WiFiTx6620.this;
                wiFiTx6620.mBandwidthIndex = i4 < wiFiTx6620.mBandwidth.length ? i4 : WiFiTx6620.this.mBandwidthIndex;
                if (WiFiTx6620.this.mBandwidth[4].equals(WiFiTx6620.this.mBandwidthSpinner.getSelectedItem().toString())) {
                    WiFiTx6620.this.mBandwidthIndex = 4;
                }
                if (WiFiTx6620.this.mBandwidthIndex == 4) {
                    WiFiTx6620.this.onAdvancedBandwidthSelected();
                } else {
                    WiFiTx6620.this.updateChannels();
                    WiFiTx6620.this.findViewById(R.id.wifi_bandwidth_advanced_ll).setVisibility(8);
                }
                WiFiTx6620 wiFiTx6621 = WiFiTx6620.this;
                wiFiTx6621.mLastBandwidth = wiFiTx6621.mBandwidthIndex;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter arrayAdapter6 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter6.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        int i4 = 0;
        while (true) {
            String[] strArr2 = this.mGuardInterval;
            if (i4 >= strArr2.length) {
                this.mGuardIntervalSpinner.setAdapter((SpinnerAdapter) arrayAdapter6);
                this.mGuardIntervalSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.wifi.WiFiTx6620.7
                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onItemSelected(AdapterView<?> adapterView, View view, int i5, long j) {
                        WiFiTx6620 wiFiTx6620 = WiFiTx6620.this;
                        wiFiTx6620.mGuardIntervalIndex = i5 < 2 ? i5 : wiFiTx6620.mGuardIntervalIndex;
                    }

                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onNothingSelected(AdapterView<?> adapterView) {
                    }
                });
                this.mSpBwAdvCbw = (Spinner) findViewById(R.id.wifi_bandwidth_cbw_spn);
                this.mSpBwAdvDbw = (Spinner) findViewById(R.id.wifi_bandwidth_dbw_spn);
                this.mSpBwAdvPrimCh = (Spinner) findViewById(R.id.wifi_bandwidth_prim_ch_spn);
                setViewEnabled(true);
                initUiComponent();
                return;
            }
            arrayAdapter6.add(strArr2[i4]);
            i4++;
        }
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

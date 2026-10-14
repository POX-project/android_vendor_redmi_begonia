package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.net.NetworkInfo;
import android.net.wifi.WifiManager;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.util.Log;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class DynamicSarService_G7 {
    public static final int AUDIO_RECEIVER_STATE_OFF = 0;
    public static final int AUDIO_RECEIVER_STATE_ON = 1;
    private static final String[] CEList;
    public static final int CHARGE_CONNECTED_STATE = 1;
    public static final int CHARGE_DISCONNECTED_STATE = 0;
    public static final int HALL_STATE_CLOSE = 0;
    public static final int HALL_STATE_OPEN = 2;
    public static final int HOTSPOT_STATE_OFF = 0;
    public static final int HOTSPOT_STATE_ON = 1;
    public static final int MCC_CE = 1;
    public static final int MCC_DEFAULT = 3;
    public static final int MCC_FCC = 2;
    public static final int MODEM_STATE_ACTIVE = 1;
    public static final int MODEM_STATE_INACTIVE = 0;
    private static final String PROPERTY_RECEIVER_STATUS = "vendor.audio.voice.receiver.status";
    public static final int SAR_DISTANCE_LONG = 0;
    public static final int SAR_DISTANCE_MID = 1;
    public static final int SAR_DISTANCE_SHORT = 2;
    private static final int SENSOR_TYPE_HALLSENSOR = 0;
    private static final int SENSOR_TYPE_SARSENSOR = 33171028;
    public static final int TYPE_AUDIO_RECEIVER_STATE = 5;
    public static final int TYPE_CHARGE_CONNECTED_STATE = 6;
    public static final int TYPE_CHARGE_DISCONNECTED_STATE = 7;
    public static final int TYPE_HALL_SENSOR_STATE = 4;
    public static final int TYPE_HOTSPOT_STATE = 1;
    public static final int TYPE_MCC_STATE = 8;
    public static final int TYPE_MODEM_STATE = 2;
    public static final int TYPE_SAR_SENSOR_STATE = 3;
    public static final int TYPE_WIFI_STATE = 0;
    private static final String WIFI_COUNTRY_CODE_CHANGED_ACTION = "android.net.wifi.COUNTRY_CODE_CHANGED";
    public static final int WIFI_STATE_CONNECTED = 1;
    public static final int WIFI_STATE_DISCONNECTED = 0;
    private static final List<String> mCEList;
    private static DynamicSarService_G7 mInstance;
    private boolean mCallStateActive;
    private Context mContext;
    private int mCurrentAudioReceiverState;
    private int mCurrentHallSensorState;
    private int mCurrentHotspotState;
    private int mCurrentMccState;
    private int mCurrentModemState;
    private int mCurrentSarSensorState;
    private int mCurrentWifiState;
    private boolean mDataStateActive;
    private Sensor mSensor;
    private SensorManager mSensorManager;
    private TelephonyManager mTelephonyManager;
    private WifiManager mWifiManager;
    private static IntentFilter mfilter = new IntentFilter();
    private static final String[] FCCList = {"co", "uy", "py", "cl", "bo", "pe", "kr", "in"};
    private static final List<String> mFCCList = Arrays.asList(FCCList);
    private final String TAG = "DynamicSarService_G7";
    private ArrayList<SarControllerClient> mWifiListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mHotspotListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mModemListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mSarSensorListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mHallSensorListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mAudioReceiverListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mChargeCONNECTEDListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mChargeDISCONNECTEDListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mMccListeners = new ArrayList<>();
    private BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.DynamicSarService_G7.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            int mccState;
            String action = intent.getAction();
            if ("android.net.wifi.STATE_CHANGE".equals(action)) {
                int i = ((NetworkInfo) intent.getParcelableExtra("networkInfo")).isConnected() ? 1 : 0;
                if (i != DynamicSarService_G7.this.mCurrentWifiState) {
                    DynamicSarService_G7 dynamicSarService_G7 = DynamicSarService_G7.this;
                    dynamicSarService_G7.callChangeListeners(dynamicSarService_G7.mWifiListeners, 0, i);
                    DynamicSarService_G7.this.mCurrentWifiState = i;
                    return;
                }
                return;
            }
            if ("android.net.wifi.WIFI_AP_STATE_CHANGED".equals(action)) {
                int i2 = intent.getIntExtra("wifi_state", 0) == 13 ? 1 : 0;
                if (i2 != DynamicSarService_G7.this.mCurrentHotspotState) {
                    DynamicSarService_G7 dynamicSarService_G8 = DynamicSarService_G7.this;
                    dynamicSarService_G8.callChangeListeners(dynamicSarService_G8.mHotspotListeners, 1, i2);
                    DynamicSarService_G7.this.mCurrentHotspotState = i2;
                    return;
                }
                return;
            }
            if ("android.intent.action.ACTION_POWER_CONNECTED".equals(action)) {
                DynamicSarService_G7 dynamicSarService_G9 = DynamicSarService_G7.this;
                dynamicSarService_G9.callChangeListeners(dynamicSarService_G9.mChargeCONNECTEDListeners, 6, 1);
            } else if ("android.intent.action.ACTION_POWER_DISCONNECTED".equals(action)) {
                DynamicSarService_G7 dynamicSarService_G10 = DynamicSarService_G7.this;
                dynamicSarService_G10.callChangeListeners(dynamicSarService_G10.mChargeDISCONNECTEDListeners, 7, 0);
            } else {
                if (!DynamicSarService_G7.WIFI_COUNTRY_CODE_CHANGED_ACTION.equals(action) || (mccState = DynamicSarService_G7.this.getMccState()) == DynamicSarService_G7.this.mCurrentMccState) {
                    return;
                }
                DynamicSarService_G7 dynamicSarService_G11 = DynamicSarService_G7.this;
                dynamicSarService_G11.callChangeListeners(dynamicSarService_G11.mMccListeners, 8, mccState);
                DynamicSarService_G7.this.mCurrentMccState = mccState;
            }
        }
    };
    private final SensorEventListener mSensorEventListener = new SensorEventListener() { // from class: com.mediatek.internal.telephony.DynamicSarService_G7.2
        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            int type = sensorEvent.sensor.getType();
            if (type != 0) {
                if (type != DynamicSarService_G7.SENSOR_TYPE_SARSENSOR) {
                    Log.d("DynamicSarService_G7", "onSensorChanged unknown event for sensor: " + sensorEvent.sensor.getType());
                    return;
                }
                int i = (int) sensorEvent.values[0];
                Log.d("DynamicSarService_G7", "onSensorChanged distance = " + i);
                if (i != DynamicSarService_G7.this.mCurrentSarSensorState) {
                    DynamicSarService_G7 dynamicSarService_G7 = DynamicSarService_G7.this;
                    dynamicSarService_G7.callChangeListeners(dynamicSarService_G7.mSarSensorListeners, 3, i);
                    DynamicSarService_G7.this.mCurrentSarSensorState = i;
                }
            }
        }
    };
    private final PhoneStateListener mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.internal.telephony.DynamicSarService_G7.4
        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            Log.d("DynamicSarService_G7", "PhoneStateListener.onCallStateChanged: state=" + i);
            DynamicSarService_G7.this.refreshSensorListener(32, i);
        }

        @Override // android.telephony.PhoneStateListener
        public void onDataActivity(int i) {
            Log.d("DynamicSarService_G7", "PhoneStateListener.onDataActivity: direction=" + i);
            DynamicSarService_G7.this.refreshSensorListener(128, i);
        }
    };

    interface SarControllerClient {
        void onStateChanged(int i, int i2);
    }

    static {
        String[] strArr = {"es", "it", "fr", "gb", "nl", "pt", "ch", "be", "lu", "de", "pl", "ua", "cz", "bg", "ro", "sk", "si", "hu", "gr", "dk", "fi", "no", "se", "lt", "ee", "lv", "rs", "at", "hr", "sa", "eg", "ir", "qa", "ma", "tr", "il", "ae", "ng", "th", "ph", "kh", "pk", "my", "au", "sg", "hk", "tw", "bd", "np", "lk", "jp"};
        CEList = strArr;
        mCEList = Arrays.asList(strArr);
    }

    private DynamicSarService_G7(Context context) {
        Log.e("DynamicSarService_G7", "DynamicSarService_G7 init...");
        this.mContext = context;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.wifi.STATE_CHANGE");
        intentFilter.addAction("android.net.wifi.WIFI_AP_STATE_CHANGED");
        intentFilter.addAction(WIFI_COUNTRY_CODE_CHANGED_ACTION);
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
        this.mWifiManager = (WifiManager) this.mContext.getSystemService("wifi");
        Log.e("DynamicSarService_G7", "DynamicSarService_G7 init done");
    }

    private void GetInitialChargeStatus() {
        int intExtra = this.mContext.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED")).getIntExtra("status", -1);
        boolean z = intExtra == 2 || intExtra == 5;
        if (z) {
            callChangeListeners(this.mChargeCONNECTEDListeners, 6, 1);
        } else {
            if (z) {
                return;
            }
            callChangeListeners(this.mChargeDISCONNECTEDListeners, 7, 0);
        }
    }

    public static DynamicSarService_G7 getInstance(Context context) {
        if (mInstance == null) {
            mInstance = new DynamicSarService_G7(context);
        }
        return mInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getMccState() {
        int i;
        String lowerCase = this.mWifiManager.getCountryCode().toLowerCase();
        if (this.mWifiManager.getCountryCode() == null) {
            return 0;
        }
        if (mCEList.contains(lowerCase)) {
            i = 1;
        } else {
            i = mFCCList.contains(lowerCase) ? 2 : 3;
        }
        Log.e("DynamicSarService_G7", "mCountryCode: " + lowerCase + ", mMccState: " + i);
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void pollReceiver() {
        int i = 0;
        while (true) {
            String str = SystemProperties.get(PROPERTY_RECEIVER_STATUS);
            if (str.equals("on")) {
                i = 1;
            } else if (str.equals("off")) {
                i = 0;
            }
            if (i != this.mCurrentAudioReceiverState) {
                Log.d("DynamicSarService_G7", "AudioReceiverState: " + i);
                callChangeListeners(this.mAudioReceiverListeners, 5, i);
                this.mCurrentAudioReceiverState = i;
            }
            SystemClock.sleep(1000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshSensorListener(int i, int i2) {
        Log.d("DynamicSarService_G7", "modem state change, messageType: " + i + " state: " + i2);
        if (i == 128) {
            if (i2 == 1 || i2 == 2 || i2 == 3) {
                this.mDataStateActive = true;
            } else if (i2 == 0 || i2 == 4) {
                this.mDataStateActive = false;
            }
        } else if (i == 32) {
            if (i2 == 1 || i2 == 2) {
                this.mCallStateActive = true;
            } else if (i2 == 0) {
                this.mCallStateActive = false;
            }
        }
        int i3 = (this.mDataStateActive || this.mCallStateActive) ? 1 : 0;
        if (i3 != this.mCurrentModemState) {
            callChangeListeners(this.mModemListeners, 2, i3);
            this.mCurrentModemState = i3;
        }
    }

    private void startPhoneListener() {
        this.mTelephonyManager.listen(this.mPhoneStateListener, 160);
    }

    private final void startPollAudioReceiverStatus() {
        new Thread() { // from class: com.mediatek.internal.telephony.DynamicSarService_G7.3
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                DynamicSarService_G7.this.pollReceiver();
            }
        }.start();
    }

    void callChangeListeners(ArrayList<SarControllerClient> arrayList, int i, int i2) {
        if (arrayList.size() == 0) {
            return;
        }
        for (int i3 = 0; i3 < arrayList.size(); i3++) {
            arrayList.get(i3).onStateChanged(i, i2);
        }
    }

    void registerStateChangeListener(int i, SarControllerClient sarControllerClient) {
        switch (i) {
            case 0:
                mfilter.addAction("android.net.wifi.STATE_CHANGE");
                this.mWifiListeners.add(sarControllerClient);
                break;
            case 1:
                mfilter.addAction("android.net.wifi.WIFI_AP_STATE_CHANGED");
                this.mHotspotListeners.add(sarControllerClient);
                break;
            case 2:
                this.mTelephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
                startPhoneListener();
                this.mModemListeners.add(sarControllerClient);
                break;
            case 3:
                SensorManager sensorManager = (SensorManager) this.mContext.getSystemService("sensor");
                this.mSensorManager = sensorManager;
                Sensor defaultSensor = sensorManager.getDefaultSensor(SENSOR_TYPE_SARSENSOR, true);
                this.mSensor = defaultSensor;
                this.mSensorManager.registerListener(this.mSensorEventListener, defaultSensor, 3);
                this.mSarSensorListeners.add(sarControllerClient);
                break;
            case 4:
                this.mHallSensorListeners.add(sarControllerClient);
                break;
            case 5:
                startPollAudioReceiverStatus();
                this.mAudioReceiverListeners.add(sarControllerClient);
                break;
            case 6:
                mfilter.addAction("android.intent.action.ACTION_POWER_CONNECTED");
                this.mChargeCONNECTEDListeners.add(sarControllerClient);
                GetInitialChargeStatus();
                break;
            case 7:
                mfilter.addAction("android.intent.action.ACTION_POWER_DISCONNECTED");
                this.mChargeDISCONNECTEDListeners.add(sarControllerClient);
                GetInitialChargeStatus();
                break;
            case 8:
                this.mMccListeners.add(sarControllerClient);
                break;
        }
        this.mContext.registerReceiver(this.mReceiver, mfilter);
    }
}

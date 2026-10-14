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
import android.os.RemoteException;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.util.Log;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import vendor.xiaomi.hardware.misys.V2_0.IBufferReadResult;
import vendor.xiaomi.hardware.misys.V2_0.IMiSys;

/* JADX INFO: loaded from: classes.dex */
public class DynamicSarService {
    private static final String ACTION_MODEM_SAR_STATE_CHANGE = "com.android.phone.modemsar.state";
    public static final int AUDIO_RECEIVER_STATE_OFF = 0;
    public static final int AUDIO_RECEIVER_STATE_ON = 1;
    public static final int BLUETOOTH_PAN_STATE_OFF = 0;
    public static final int BLUETOOTH_PAN_STATE_ON = 1;
    public static final int BLUETOOTH_STATE_OFF = 0;
    public static final int BLUETOOTH_STATE_ON = 1;
    private static final String CABLE_DEVICE_PATH = "/sys/devices/platform/odm/odm:testing-mode/";
    private static final String[] CEList;
    public static final int HALL_STATE_CLOSE = 0;
    public static final int HALL_STATE_OPEN = 2;
    public static final int HOTSPOT_STATE_OFF = 0;
    public static final int HOTSPOT_STATE_ON = 1;
    private static final String INTENT_EXTRA_AIRPLANE_STATE = "state";
    public static final int MCC_CE = 1;
    public static final int MCC_DEFAULT = 3;
    public static final int MCC_FCC = 2;
    private static final String MODEM_SAR_STATE = "modem_sar_state";
    public static final int MODEM_STATE_ACTIVE = 1;
    public static final int MODEM_STATE_INACTIVE = 0;
    private static final String PROPERTY_OPERATOR_ISO_COUNTRY = "gsm.operator.iso-country";
    private static final String PROPERTY_RECEIVER_STATUS = "vendor.audio.voice.receiver.status";
    private static final String PROPERTY_USECASE_TEST = "persist.vendor.radio.usecase.test";
    public static final int SAR_DISTANCE_LONG = 0;
    public static final int SAR_DISTANCE_MID = 1;
    public static final int SAR_DISTANCE_SHORT = 2;
    private static final int SENSOR_TYPE_HALLSENSOR = 33171002;
    private static final int SENSOR_TYPE_SARSENSOR = 33171028;
    private static final int SENSOR_TYPE_SARSENSOR2 = 33171059;
    private static final int SENSOR_TYPE_SARSENSOR_SUBSTANCE = 33171015;
    public static final int TYPE_AUDIO_RECEIVER_STATE = 5;
    public static final int TYPE_BLUETOOTH_PAN_STATE = 7;
    public static final int TYPE_BLUETOOTH_STATE = 8;
    public static final int TYPE_CABLE_STATE = 10;
    public static final int TYPE_HALL_SENSOR_STATE = 4;
    public static final int TYPE_HOTSPOT_STATE = 1;
    public static final int TYPE_MCC_STATE = 6;
    public static final int TYPE_MODEM_STATE = 2;
    public static final int TYPE_RADIOPOWER_STATE = 13;
    public static final int TYPE_SAR_SENSOR2_STATE = 9;
    public static final int TYPE_SAR_SENSOR_STATE = 3;
    public static final int TYPE_SIMCARD_STATE = 14;
    public static final int TYPE_USB_STATE = 11;
    public static final int TYPE_USE_CASE_TEST = 12;
    public static final int TYPE_WIFI_STATE = 0;
    private static final String WIFI_COUNTRY_CODE_CHANGED_ACTION = "android.net.wifi.COUNTRY_CODE_CHANGED";
    public static final int WIFI_STATE_CONNECTED = 1;
    public static final int WIFI_STATE_DISCONNECTED = 0;
    private static final List<String> mCEList;
    private static DynamicSarService mInstance;
    private boolean mCallStateActive;
    private Context mContext;
    private int mCurrentAudioReceiverState;
    private int mCurrentHallSensorState;
    private int mCurrentHotspotState;
    private int mCurrentModemState;
    private int mCurrentSarSensor2State;
    private int mCurrentSarSensorState;
    private int mCurrentWifiState;
    private boolean mDataStateActive;
    private Sensor mHallSensor;
    private Sensor mSensor;
    private boolean mSensorEnable;
    private SensorManager mSensorManager;
    private Sensor mSensorSubstance;
    private TelephonyManager mTelephonyManager;
    private WifiManager mWifiManager;
    private static final String[] FCCList = {"co", "uy", "py", "cl", "bo", "pe", "kr", "in", "us", "ar"};
    private static final List<String> mFCCList = Arrays.asList(FCCList);
    private final String TAG = "DynamicSarService";
    private int mCableGpioStatus = 0;
    private int mCurrentMccState = 0;
    private int mCurrentBluetoothPanState = -1;
    private int mCurrentBluetoothState = -1;
    private int mCurrentAirplaneState = -1;
    private int mModemSarEnable = 0;
    private ArrayList<SarControllerClient> mWifiListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mHotspotListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mModemListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mSarSensorListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mSarSensor2Listeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mCableListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mHallSensorListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mAudioReceiverListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mMccListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mBluetoothPanListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mBluetoothListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mCardStateListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mRadioPowerListeners = new ArrayList<>();
    private ArrayList<SarControllerClient> mUseCaseTestListeners = new ArrayList<>();
    private BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.DynamicSarService.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            int mccState;
            String action = intent.getAction();
            if ("android.net.wifi.STATE_CHANGE".equals(action)) {
                int i = ((NetworkInfo) intent.getParcelableExtra("networkInfo")).isConnected() ? 1 : 0;
                if (i != DynamicSarService.this.mCurrentWifiState) {
                    DynamicSarService dynamicSarService = DynamicSarService.this;
                    dynamicSarService.callChangeListeners(dynamicSarService.mWifiListeners, 0, i);
                    DynamicSarService.this.mCurrentWifiState = i;
                    return;
                }
                return;
            }
            if ("android.net.wifi.WIFI_AP_STATE_CHANGED".equals(action)) {
                int i2 = intent.getIntExtra("wifi_state", 0) == 13 ? 1 : 0;
                if (i2 != DynamicSarService.this.mCurrentHotspotState) {
                    Log.d("DynamicSarService", "WIFI HOTSPOT STATE CHANGED");
                    DynamicSarService dynamicSarService2 = DynamicSarService.this;
                    dynamicSarService2.callChangeListeners(dynamicSarService2.mHotspotListeners, 1, i2);
                    DynamicSarService.this.mCurrentHotspotState = i2;
                    return;
                }
                return;
            }
            if ("android.bluetooth.pan.profile.action.STATE_CHANGED".equals(action)) {
                int intExtra = intent.getIntExtra("android.bluetooth.pan.extra.LOCAL_STATE", -1);
                int i3 = -1;
                if (intExtra == 1) {
                    i3 = 1;
                } else if (intExtra == 0) {
                    i3 = 0;
                }
                if (i3 == DynamicSarService.this.mCurrentBluetoothPanState || i3 == -1) {
                    return;
                }
                DynamicSarService dynamicSarService3 = DynamicSarService.this;
                dynamicSarService3.callChangeListeners(dynamicSarService3.mBluetoothPanListeners, 7, i3);
                DynamicSarService.this.mCurrentBluetoothPanState = i3;
                return;
            }
            if ("android.bluetooth.adapter.action.STATE_CHANGED".equals(action)) {
                int intExtra2 = intent.getIntExtra("android.bluetooth.adapter.extra.STATE", -1);
                int i4 = -1;
                if (intExtra2 == 12) {
                    i4 = 1;
                } else if (intExtra2 == 10) {
                    i4 = 0;
                }
                if (i4 == DynamicSarService.this.mCurrentBluetoothState || i4 == -1) {
                    return;
                }
                DynamicSarService dynamicSarService4 = DynamicSarService.this;
                dynamicSarService4.callChangeListeners(dynamicSarService4.mBluetoothListeners, 8, i4);
                DynamicSarService.this.mCurrentBluetoothState = i4;
                return;
            }
            if ("android.intent.action.SIM_STATE_CHANGED".equals(action)) {
                String stringExtra = intent.getStringExtra("ss");
                Log.d("DynamicSarService", "iccState = " + stringExtra);
                if ("LOADED".equals(stringExtra)) {
                    Log.d("DynamicSarService", "iccState is loaded ");
                    DynamicSarService dynamicSarService5 = DynamicSarService.this;
                    dynamicSarService5.callChangeListeners(dynamicSarService5.mCardStateListeners, 14, 0);
                    return;
                }
                return;
            }
            if (DynamicSarService.ACTION_MODEM_SAR_STATE_CHANGE.equals(action)) {
                DynamicSarService.this.mModemSarEnable = Integer.parseInt(intent.getStringExtra(DynamicSarService.MODEM_SAR_STATE));
                Log.d("DynamicSarService", "set sar state " + DynamicSarService.this.mModemSarEnable);
                return;
            }
            if (!DynamicSarService.WIFI_COUNTRY_CODE_CHANGED_ACTION.equals(action) || (mccState = DynamicSarService.this.getMccState()) == DynamicSarService.this.mCurrentMccState) {
                return;
            }
            DynamicSarService dynamicSarService6 = DynamicSarService.this;
            dynamicSarService6.callChangeListeners(dynamicSarService6.mMccListeners, 6, mccState);
            DynamicSarService.this.mCurrentMccState = mccState;
        }
    };
    private final SensorEventListener mSensorEventListener = new SensorEventListener() { // from class: com.mediatek.internal.telephony.DynamicSarService.2
        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            int type = sensorEvent.sensor.getType();
            if (type == DynamicSarService.SENSOR_TYPE_HALLSENSOR) {
                int i = 0;
                if (sensorEvent.values[0] == 0.0f) {
                    i = 0;
                } else if (sensorEvent.values[0] == 1.0f) {
                    i = 1;
                }
                Log.d("DynamicSarService", "onSensorChanged hallstate = " + i);
                if (i != DynamicSarService.this.mCurrentHallSensorState) {
                    DynamicSarService dynamicSarService = DynamicSarService.this;
                    dynamicSarService.callChangeListeners(dynamicSarService.mHallSensorListeners, 4, i);
                    DynamicSarService.this.mCurrentHallSensorState = i;
                    return;
                }
                return;
            }
            if (type == DynamicSarService.SENSOR_TYPE_SARSENSOR) {
                int i2 = (int) sensorEvent.values[0];
                Log.d("DynamicSarService", "onSensorChanged distance = " + i2);
                if (i2 != DynamicSarService.this.mCurrentSarSensorState) {
                    DynamicSarService dynamicSarService2 = DynamicSarService.this;
                    dynamicSarService2.callChangeListeners(dynamicSarService2.mSarSensorListeners, 3, i2);
                    DynamicSarService.this.mCurrentSarSensorState = i2;
                    return;
                }
                return;
            }
            if (type != DynamicSarService.SENSOR_TYPE_SARSENSOR2) {
                Log.d("DynamicSarService", "onSensorChanged unknown event for sensor: " + sensorEvent.sensor.getType());
                return;
            }
            int i3 = (int) sensorEvent.values[0];
            Log.d("DynamicSarService", "onSensorChanged sensor2 distance = " + i3);
            if (i3 != DynamicSarService.this.mCurrentSarSensor2State) {
                DynamicSarService dynamicSarService3 = DynamicSarService.this;
                dynamicSarService3.callChangeListeners(dynamicSarService3.mSarSensor2Listeners, 9, i3);
                DynamicSarService.this.mCurrentSarSensor2State = i3;
            }
        }
    };
    private final PhoneStateListener mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.internal.telephony.DynamicSarService.6
        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            Log.d("DynamicSarService", "PhoneStateListener.onCallStateChanged: state=" + i);
            DynamicSarService.this.refreshSensorListener(32, i);
        }

        @Override // android.telephony.PhoneStateListener
        public void onDataActivity(int i) {
            Log.d("DynamicSarService", "PhoneStateListener.onDataActivity: direction=" + i);
            DynamicSarService.this.refreshSensorListener(128, i);
        }

        public void onRadioPowerStateChanged(int i) {
            Log.d("DynamicSarService", "PhoneStateListener.onRadioPowerStateChanged: direction=" + i);
            DynamicSarService.this.refreshSensorListener(8388608, i);
        }
    };

    interface SarControllerClient {
        void onStateChanged(int i, int i2);
    }

    static {
        String[] strArr = {"es", "it", "fr", "gb", "nl", "pt", "ch", "be", "lu", "de", "pl", "ua", "cz", "bg", "ro", "sk", "si", "hu", "gr", "dk", "fi", "no", "se", "lt", "ee", "lv", "at", "hr", "sa", "eg", "ir", "qa", "ma", "tr", "il", "ae", "ng", "th", "ph", "kh", "pk", "my", "au", "sg", "hk", "tw", "bd", "np", "lk", "jp"};
        CEList = strArr;
        mCEList = Arrays.asList(strArr);
    }

    private DynamicSarService(Context context) {
        this.mSensorEnable = true;
        Log.e("DynamicSarService", "DynamicSarService init...");
        this.mContext = context;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.wifi.STATE_CHANGE");
        intentFilter.addAction("android.net.wifi.WIFI_AP_STATE_CHANGED");
        intentFilter.addAction("android.bluetooth.pan.profile.action.STATE_CHANGED");
        intentFilter.addAction("android.bluetooth.adapter.action.STATE_CHANGED");
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        intentFilter.addAction(ACTION_MODEM_SAR_STATE_CHANGE);
        intentFilter.addAction(WIFI_COUNTRY_CODE_CHANGED_ACTION);
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
        this.mWifiManager = (WifiManager) this.mContext.getSystemService("wifi");
        SensorManager sensorManager = (SensorManager) this.mContext.getSystemService("sensor");
        this.mSensorManager = sensorManager;
        if (sensorManager == null) {
            Log.d("DynamicSarService", "obtain sensor service failed ");
            this.mSensorEnable = false;
        } else {
            Sensor defaultSensor = sensorManager.getDefaultSensor(SENSOR_TYPE_HALLSENSOR, true);
            this.mHallSensor = defaultSensor;
            this.mSensorManager.registerListener(this.mSensorEventListener, defaultSensor, 3);
            Sensor defaultSensor2 = this.mSensorManager.getDefaultSensor(SENSOR_TYPE_SARSENSOR_SUBSTANCE, true);
            this.mSensorSubstance = defaultSensor2;
            boolean zRegisterListener = this.mSensorManager.registerListener(this.mSensorEventListener, defaultSensor2, 3);
            if (this.mSensorSubstance == null || !zRegisterListener) {
                Log.d("DynamicSarService", "mSensorFlag = " + zRegisterListener);
                this.mSensorEnable = false;
            }
        }
        Log.d("DynamicSarService", "mSensorEnable = " + this.mSensorEnable);
        this.mTelephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        startPhoneListener();
        startPollUseCaseTest();
        Log.d("DynamicSarService", "DynamicSarService init done");
    }

    public static DynamicSarService getInstance(Context context) {
        if (mInstance == null) {
            mInstance = new DynamicSarService(context);
        }
        return mInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getMccState() {
        int i = 0;
        String str = SystemProperties.get(PROPERTY_OPERATOR_ISO_COUNTRY, "");
        if (str.length() < 2) {
            Log.d("DynamicSarService", "Can't get network countryCode, use MCC_DEFAULT");
            return 3;
        }
        String[] strArrSplit = str.split(",");
        for (int i2 = 0; i2 < strArrSplit.length; i2++) {
            Log.d("DynamicSarService", "mCountryCode[" + i2 + "] = " + strArrSplit[i2]);
            strArrSplit[i2] = strArrSplit[i2].toLowerCase();
            if (strArrSplit[i2] != null && !strArrSplit[i2].isEmpty()) {
                if (!mFCCList.contains(strArrSplit[i2])) {
                    if (!mCEList.contains(strArrSplit[i2])) {
                        i = 3;
                        break;
                    }
                    if (i2 > 0) {
                        i = (i == 1 || i == 0) ? 1 : 3;
                    } else {
                        i = 1;
                    }
                } else if (i2 > 0) {
                    i = (i == 2 || i == 0) ? 2 : 3;
                } else {
                    i = 2;
                }
            }
        }
        if (i == 0) {
            Log.d("DynamicSarService", "mMccState is 0,can't get network countryCode, use MCC_DEFAULT");
            i = 3;
        }
        Log.d("DynamicSarService", "mNetworkCountryCode: " + str + ", mMccState: " + i);
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:29:0x00d9 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:31:0x00dd  */
    /* JADX WARN: Code duplicated, block: B:41:0x00db A[EDGE_INSN: B:41:0x00db->B:30:0x00db BREAK  A[LOOP:0: B:37:0x0032->B:43:?], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:48:? A[RETURN, SYNTHETIC] */
    public final void pollCableStatus() throws RemoteException {
        Log.d("DynamicSarService", "enter pollCableStatus ...");
        int iByteValue = 0;
        IMiSys service = null;
        try {
            service = IMiSys.getService(true);
        } catch (Exception e) {
            Log.e("DynamicSarService", "erro= " + Log.getStackTraceString(e));
        }
        if (service == null) {
            Log.d("DynamicSarService", "mIMiSysv is null!");
            return;
        }
        boolean zIsExists = false;
        int i = 3;
        int i2 = 5;
        do {
            try {
                zIsExists = service.IsExists(CABLE_DEVICE_PATH, "status");
                Log.d("DynamicSarService", "mIsExist = " + zIsExists);
            } catch (Exception e2) {
                Log.e("DynamicSarService", "erro= " + Log.getStackTraceString(e2));
            }
            if (zIsExists) {
                while (true) {
                    try {
                        IBufferReadResult iBufferReadResultMiSysReadBuffer = service.MiSysReadBuffer(CABLE_DEVICE_PATH, "status");
                        if (iBufferReadResultMiSysReadBuffer.value == 0) {
                            ArrayList arrayList = new ArrayList();
                            arrayList.addAll(iBufferReadResultMiSysReadBuffer.data);
                            iByteValue = ((Byte) arrayList.get(0)).byteValue() - 48;
                        } else {
                            Log.d("DynamicSarService", "err = " + iBufferReadResultMiSysReadBuffer.value);
                        }
                    } catch (Exception e3) {
                        Log.e("DynamicSarService", "erro= " + Log.getStackTraceString(e3));
                        i2 += -1;
                        if (i2 == 0) {
                            Log.d("DynamicSarService", " Try to read file max times, failed.");
                            if (i != 0) {
                                break;
                            }
                            if (i == 0) {
                                Log.d("DynamicSarService", "get failed for max times!");
                            }
                        }
                    }
                    if (iByteValue != this.mCableGpioStatus) {
                        callChangeListeners(this.mCableListeners, 10, iByteValue);
                        this.mCableGpioStatus = iByteValue;
                    }
                    SystemClock.sleep(1000L);
                }
                Log.d("DynamicSarService", " Try to read file max times, failed.");
            } else {
                SystemClock.sleep(5000L);
                i--;
            }
            if (i != 0) {
                break;
                break;
            }
        } while (!zIsExists);
        if (i == 0) {
            Log.d("DynamicSarService", "get failed for max times!");
        }
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
                Log.d("DynamicSarService", "AudioReceiverState: " + i);
                callChangeListeners(this.mAudioReceiverListeners, 5, i);
                this.mCurrentAudioReceiverState = i;
            }
            SystemClock.sleep(1000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void pollTest() {
        int i = 0;
        while (true) {
            int i2 = SystemProperties.getInt(PROPERTY_USECASE_TEST, 0);
            if (i != i2) {
                Log.d("DynamicSarService", "mTestPropValue: " + i2);
                callChangeListeners(this.mUseCaseTestListeners, 12, i2);
                i = i2;
            }
            SystemClock.sleep(1000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshSensorListener(int i, int i2) {
        Log.d("DynamicSarService", "modem or radio power state change,messageType: " + i + " state: " + i2);
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
        } else if (i == 8388608 && i2 == 1) {
            Log.d("DynamicSarService", "RADIO_POWER_ON ");
            callChangeListeners(this.mRadioPowerListeners, 13, i2);
        }
        int i3 = (this.mDataStateActive || this.mCallStateActive) ? 1 : 0;
        if (i3 != this.mCurrentModemState) {
            callChangeListeners(this.mModemListeners, 2, i3);
            this.mCurrentModemState = i3;
        }
    }

    private void startPhoneListener() {
        this.mTelephonyManager.listen(this.mPhoneStateListener, 8388768);
    }

    private final void startPollAudioReceiverStatus() {
        new Thread() { // from class: com.mediatek.internal.telephony.DynamicSarService.3
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                DynamicSarService.this.pollReceiver();
            }
        }.start();
    }

    private final void startPollCableStatus() {
        new Thread() { // from class: com.mediatek.internal.telephony.DynamicSarService.4
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() throws RemoteException {
                DynamicSarService.this.pollCableStatus();
            }
        }.start();
    }

    private final void startPollUseCaseTest() {
        new Thread() { // from class: com.mediatek.internal.telephony.DynamicSarService.5
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                DynamicSarService.this.pollTest();
            }
        }.start();
    }

    void callChangeListeners(ArrayList<SarControllerClient> arrayList, int i, int i2) {
        if (arrayList.size() == 0 || this.mModemSarEnable != 0) {
            Log.d("DynamicSarService", "listeners is null or mModemSarEnable is disable!!!");
            return;
        }
        for (int i3 = 0; i3 < arrayList.size(); i3++) {
            arrayList.get(i3).onStateChanged(i, i2);
        }
    }

    void registerStateChangeListener(int i, SarControllerClient sarControllerClient) {
        switch (i) {
            case 0:
                this.mWifiListeners.add(sarControllerClient);
                break;
            case 1:
                this.mHotspotListeners.add(sarControllerClient);
                break;
            case 2:
                this.mModemListeners.add(sarControllerClient);
                break;
            case 3:
                this.mSarSensorListeners.add(sarControllerClient);
                if (!this.mSensorEnable) {
                    callChangeListeners(this.mSarSensorListeners, 3, 2);
                } else {
                    Sensor defaultSensor = this.mSensorManager.getDefaultSensor(SENSOR_TYPE_SARSENSOR, true);
                    this.mSensor = defaultSensor;
                    if (!this.mSensorManager.registerListener(this.mSensorEventListener, defaultSensor, 3)) {
                        callChangeListeners(this.mSarSensorListeners, 3, 2);
                        Log.d("DynamicSarService", "SAR sensor registration failed , set 2");
                    }
                }
                break;
            case 4:
                this.mHallSensorListeners.add(sarControllerClient);
                break;
            case 5:
                this.mAudioReceiverListeners.add(sarControllerClient);
                startPollAudioReceiverStatus();
                break;
            case 6:
                this.mMccListeners.add(sarControllerClient);
                break;
            case 7:
                this.mBluetoothPanListeners.add(sarControllerClient);
                break;
            case 8:
                this.mBluetoothListeners.add(sarControllerClient);
                break;
            case 9:
                this.mSarSensor2Listeners.add(sarControllerClient);
                if (!this.mSensorEnable) {
                    callChangeListeners(this.mSarSensor2Listeners, 9, 2);
                } else {
                    if (!this.mSensorManager.registerListener(this.mSensorEventListener, this.mSensorManager.getDefaultSensor(SENSOR_TYPE_SARSENSOR2, true), 3)) {
                        callChangeListeners(this.mSarSensor2Listeners, 9, 2);
                        Log.d("DynamicSarService", "SAR sensor2 registration failed , set 2");
                    }
                }
                break;
            case 10:
                this.mCableListeners.add(sarControllerClient);
                startPollCableStatus();
                break;
            case 12:
                this.mUseCaseTestListeners.add(sarControllerClient);
                break;
            case 13:
                this.mRadioPowerListeners.add(sarControllerClient);
                break;
            case 14:
                this.mCardStateListeners.add(sarControllerClient);
                break;
        }
    }
}

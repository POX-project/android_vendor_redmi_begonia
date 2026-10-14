package com.mediatek.internal.telephony;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.util.Log;
import com.android.internal.telephony.CommandsInterface;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;

/* JADX INFO: loaded from: classes.dex */
public class ModemSarController implements DynamicSarService.SarControllerClient {
    private static final String ACTION_MODEM_SAR_DSI_DISPLAY = "com.android.phone.modemsar.dsi.display";
    private static final int BT_PAN_STATE_I = 3;
    private static final int BT_STATE_I = 2;
    private static final int CABLE_STATE_I = 8;
    private static final int DSI_0 = 0;
    private static final int DSI_1 = 1;
    private static final int DSI_10 = 10;
    private static final int DSI_11 = 11;
    private static final int DSI_12 = 12;
    private static final int DSI_13 = 13;
    private static final int DSI_14 = 14;
    private static final int DSI_15 = 15;
    private static final int DSI_16 = 16;
    private static final int DSI_17 = 17;
    private static final int DSI_18 = 18;
    private static final int DSI_19 = 19;
    private static final int DSI_2 = 2;
    private static final int DSI_20 = 20;
    private static final int DSI_3 = 3;
    private static final int DSI_4 = 4;
    private static final int DSI_5 = 5;
    private static final int DSI_6 = 6;
    private static final int DSI_7 = 7;
    private static final int DSI_8 = 8;
    private static final int DSI_9 = 9;
    private static final int EVENT_BT_CHANGE = 4;
    private static final int EVENT_BT_PAN_CHANGE = 5;
    private static final int EVENT_CABLE_CHANGE = 9;
    private static final int EVENT_HALL_CHANGE = 10;
    private static final int EVENT_MCC_CHANGE = 8;
    private static final int EVENT_RADIO_POWER_CHANGE = 12;
    private static final int EVENT_RECEIVER_CHANGE = 1;
    private static final int EVENT_SAR_SENSOR2_CHANGE = 7;
    private static final int EVENT_SAR_SENSOR_CHANGE = 6;
    private static final int EVENT_SIMCARD_CHANGE = 13;
    private static final int EVENT_USB_CHANGE = 11;
    private static final int EVENT_WIFI_CHANGE = 2;
    private static final int EVENT_WIFI_HOSP_CHANGE = 3;
    private static final int HALL_STATE_I = 9;
    public static final String LOG_TAG = "ModemSarController";
    private static final int MCC_STATE_I = 6;
    private static final String MODEM_SAR_DSI_VALUE = "modem_sar_dsi_value";
    private static final String PROPERTY_DEVICE_NAME = "ro.product.device";
    private static final String PROPERTY_DYNAMIC_SAR = "persist.vendor.radio.dynamic_sar";
    private static final String PROPERTY_GLOBAL_HW = "ro.boot.hwc";
    private static final String PROPERTY_GLOBAL_VER = "ro.product.mod_device";
    private static final int RECEIVER_STATE_I = 0;
    private static final int SAR_MODE = 1;
    private static final int SAR_SENSOR2_STATE_I = 5;
    private static final int SAR_SENSOR_STATE_I = 4;
    private static final int SENSOR_DEFAULT_STATE = 2;
    private static final int USB_STATE_I = 10;
    private static final int WIFI_HOSP_STATE_I = 1;
    private static final int WIFI_STATE_I = 7;
    private static Context mContext;
    private static ModemSarController sIntance;
    private DynamicSarService mService;
    private static int HotspotState = 0;
    private static int ReceiverState = 0;
    private static int WIFIState = 0;
    private static int HallState = 0;
    private static int MccState = 3;
    private static int VoltageState = 1;
    private static int BtState = 0;
    private static int BtPanState = 0;
    private static int WifiHotSpotState = 0;
    private static int Sensor1State = 0;
    private static int Sensor2State = 0;
    private static int CableState = 0;
    private static int UsbState = 0;
    private static int RadioPowerState = 0;
    private static int SIMCardState = 0;
    private static int mCurrentDsi = 0;
    private static int mHistoryDsi = 0;
    private static DeviceSarConfig mCurrentSarConfig = null;
    private static ArrayList<Integer> mUsedStateList = new ArrayList<>();
    private static CommandsInterface[] sCi = null;
    private CmdProcThread mCmdProc = null;
    private Handler mCmdHandler = null;
    private int mInitHandleTimes = 3;

    private static class CmdProcThread extends Thread {
        private Handler mHandler;

        private static class CmdHandler extends Handler {
            private CmdHandler() {
            }

            private void DSI_Handle(int i) {
                Log.d(ModemSarController.LOG_TAG, "Sensor1State is = " + ModemSarController.Sensor1State + ", ReceiverState is = " + ModemSarController.ReceiverState + ", WifiHotSpotState is = " + ModemSarController.WifiHotSpotState + ", Bluetooth state is = " + ModemSarController.BtState + ", Bluetooth pan state is = " + ModemSarController.BtPanState + ", MCC state is = " + ModemSarController.MccState + ", WIFIState is = " + ModemSarController.WIFIState + ", hallState is = " + ModemSarController.HallState + ", Sensor2State is = " + ModemSarController.Sensor2State + ", CableState is = " + ModemSarController.CableState + ", RadioPowerState is = " + ModemSarController.RadioPowerState + ", SIMCardState is = " + ModemSarController.SIMCardState);
                if (ModemSarController.BtState == 0) {
                    int unused = ModemSarController.BtPanState = 0;
                }
                if (ModemSarController.WifiHotSpotState == 1 || ModemSarController.BtPanState == 1) {
                    int unused2 = ModemSarController.HotspotState = 1;
                }
                int unused3 = ModemSarController.mCurrentDsi = ModemSarController.getDsiVaule();
                Log.d(ModemSarController.LOG_TAG, "mCurrentDsi is = " + ModemSarController.mCurrentDsi);
                if (ModemSarController.mCurrentDsi >= 0 && ModemSarController.mCurrentDsi != ModemSarController.mHistoryDsi) {
                    CmdProcThread.sendSarToModem(ModemSarController.mCurrentDsi);
                } else if (i == 13 || i == 12) {
                    ModemSarController.log("radio power on or SIM card loaded, send the current DSI");
                    CmdProcThread.sendSarToModem(ModemSarController.mCurrentDsi);
                } else {
                    ModemSarController.log("The current DSI have set, don`t need to set it again.");
                }
                int unused4 = ModemSarController.mHistoryDsi = ModemSarController.mCurrentDsi;
                int unused5 = ModemSarController.HotspotState = 0;
            }

            @Override // android.os.Handler
            public void handleMessage(Message message) {
                Log.d(ModemSarController.LOG_TAG, "handlerMessage, msg = " + message.what);
                switch (message.what) {
                    case 1:
                        int unused = ModemSarController.ReceiverState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_RECEIVER_CHANGE");
                        DSI_Handle(message.what);
                        break;
                    case 2:
                        int unused2 = ModemSarController.WIFIState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_WIFI_CHANGE");
                        DSI_Handle(message.what);
                        break;
                    case 3:
                        int unused3 = ModemSarController.WifiHotSpotState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_WIFI_HOSP_CHANGE");
                        DSI_Handle(message.what);
                        break;
                    case 4:
                        int unused4 = ModemSarController.BtState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_BT_CHANGE, BtState = " + ModemSarController.BtState);
                        DSI_Handle(message.what);
                        break;
                    case 5:
                        int unused5 = ModemSarController.BtPanState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_BT_PAN_CHANGE = " + ModemSarController.BtPanState);
                        DSI_Handle(message.what);
                        break;
                    case 6:
                        int unused6 = ModemSarController.Sensor1State = ModemSarController.sarExceptionHandle(message.arg1, 2);
                        Log.d(ModemSarController.LOG_TAG, "EVENT_SAR_SENSOR_CHANGE, Sensor1State = " + ModemSarController.Sensor1State);
                        DSI_Handle(message.what);
                        break;
                    case 7:
                        int unused7 = ModemSarController.Sensor2State = ModemSarController.sarExceptionHandle(message.arg1, 2);
                        if (ModemSarController.Sensor2State == 1) {
                            int unused8 = ModemSarController.Sensor2State = 0;
                        }
                        Log.d(ModemSarController.LOG_TAG, "EVENT_SAR_SENSOR2_CHANGE, Sensor2State = " + ModemSarController.Sensor2State);
                        DSI_Handle(message.what);
                        break;
                    case 8:
                        int unused9 = ModemSarController.MccState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_MCC_CHANGE");
                        DSI_Handle(message.what);
                        break;
                    case 9:
                        int unused10 = ModemSarController.CableState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_CABLE_CHANGE, CableState = " + ModemSarController.CableState);
                        DSI_Handle(message.what);
                        break;
                    case 10:
                        int unused11 = ModemSarController.HallState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_HALL_CHANGE");
                        DSI_Handle(message.what);
                        break;
                    case 11:
                        int unused12 = ModemSarController.UsbState = message.arg1;
                        Log.d(ModemSarController.LOG_TAG, "EVENT_USB_CHANGE, UsbState = " + ModemSarController.UsbState);
                        DSI_Handle(message.what);
                        break;
                    case 12:
                        Log.d(ModemSarController.LOG_TAG, "EVENT_RADIO_POWER_CHANGE");
                        int unused13 = ModemSarController.RadioPowerState = message.arg1;
                        DSI_Handle(message.what);
                        break;
                    case 13:
                        Log.d(ModemSarController.LOG_TAG, "EVENT_SIMCARD_CHANGE");
                        int unused14 = ModemSarController.SIMCardState = message.arg1;
                        DSI_Handle(message.what);
                        break;
                }
            }
        }

        private CmdProcThread() {
            this.mHandler = null;
        }

        private static void SendDsiBroadcast(Context context, int i) {
            Intent intent = new Intent(ModemSarController.ACTION_MODEM_SAR_DSI_DISPLAY);
            intent.putExtra(ModemSarController.MODEM_SAR_DSI_VALUE, String.valueOf(i));
            context.sendBroadcast(intent);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void sendSarToModem(int i) {
            if (ModemSarController.sCi == null) {
                Log.e(ModemSarController.LOG_TAG, "sCi[0] is NULL!!!");
                return;
            }
            for (int i2 = 0; i2 < ModemSarController.sCi.length; i2++) {
                if (1 == ModemSarController.sCi[i2].getRadioState()) {
                    ModemSarController.sCi[i2].sendSarIndicator(0, "1, " + i, null);
                    SendDsiBroadcast(ModemSarController.mContext, i);
                    return;
                }
                ModemSarController.log("phone[" + i2 + "] radio is unavailable or off");
            }
        }

        public Handler getCmdHandler() {
            if (this.mHandler == null) {
                Log.e(ModemSarController.LOG_TAG, "getCmdHandler, handler is NULL!!!");
            }
            return this.mHandler;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Looper.prepare();
            this.mHandler = new CmdHandler();
            Log.d(ModemSarController.LOG_TAG, "CmdProcThread, thread is running up!!!!");
            Looper.loop();
        }
    }

    private ModemSarController(Context context) {
        Log.d(LOG_TAG, "start in...");
        mContext = context;
        initSarEnable();
    }

    private static int findDsiFromXML(char[] cArr) {
        if (cArr.length < 1) {
            Log.d(LOG_TAG, "sourStateList is null. please check the wifi, bluetooth... states");
            return 18;
        }
        for (Map.Entry<String, String> entry : mCurrentSarConfig.getDsiList().entrySet()) {
            Log.d(LOG_TAG, "DerStateSet = " + entry.getKey() + ", dsi = " + entry.getValue());
            boolean z = false;
            char[] charArray = entry.getKey().toCharArray();
            if (cArr.length != charArray.length) {
                Log.d(LOG_TAG, "sourStateSet size is not same as desStateList,please check again.");
                return 18;
            }
            int i = 0;
            for (int i2 = 0; i2 < cArr.length; i2++) {
                i = i2;
                if ('F' != charArray[i2] && cArr[i2] != charArray[i2]) {
                    z = false;
                    break;
                }
                z = true;
            }
            Log.d(LOG_TAG, "findDsiFromXML: len = " + i + ", sourStrLen = " + cArr.length);
            if (i == cArr.length - 1 && z) {
                int i3 = Integer.parseInt(entry.getValue());
                Log.d(LOG_TAG, "findDsiFromXML success: result = " + i3);
                return i3;
            }
        }
        return 18;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int getDsiVaule() {
        String str = "";
        boolean z = false;
        if (mUsedStateList.size() == 0) {
            return 0;
        }
        for (int i = 0; i < mUsedStateList.size(); i++) {
            switch (mUsedStateList.get(i).intValue()) {
                case 0:
                    str = str + Integer.toString(ReceiverState);
                    break;
                case 1:
                case 2:
                case 3:
                    if (!z) {
                        str = str + Integer.toString(HotspotState);
                        z = true;
                    }
                    break;
                case 4:
                    str = str + Integer.toString(Sensor1State);
                    break;
                case 5:
                    str = str + Integer.toString(Sensor2State);
                    break;
                case 6:
                    str = str + Integer.toString(MccState);
                    break;
                case 7:
                    str = str + Integer.toString(WIFIState);
                    break;
                case 8:
                    str = str + Integer.toString(CableState);
                    break;
                case 9:
                    str = str + Integer.toString(HallState);
                    break;
                case 10:
                    str = str + Integer.toString(UsbState);
                    break;
            }
        }
        Log.d(LOG_TAG, "mStateStr = " + str);
        return findDsiFromXML(str.toCharArray());
    }

    private void initRegStateAction() {
        this.mService.registerStateChangeListener(13, this);
        this.mService.registerStateChangeListener(14, this);
        String listeners = mCurrentSarConfig.getListeners();
        Log.d(LOG_TAG, "listeners: receiver,hotSpot(wifi_spot,(bluetooth,bluetooth_pan)),sarsensor1,sarsensor2,mcc,wifi,cable,hall,usb = " + listeners);
        if (listeners != null) {
            for (int i = 0; i < listeners.length(); i++) {
                if (listeners.charAt(i) == '1') {
                    switch (i) {
                        case 0:
                            this.mService.registerStateChangeListener(5, this);
                            mUsedStateList.add(0);
                            break;
                        case 1:
                            this.mService.registerStateChangeListener(1, this);
                            mUsedStateList.add(1);
                            break;
                        case 2:
                            this.mService.registerStateChangeListener(8, this);
                            mUsedStateList.add(2);
                            break;
                        case 3:
                            this.mService.registerStateChangeListener(7, this);
                            mUsedStateList.add(3);
                            break;
                        case 4:
                            this.mService.registerStateChangeListener(3, this);
                            mUsedStateList.add(4);
                            break;
                        case 5:
                            this.mService.registerStateChangeListener(9, this);
                            mUsedStateList.add(5);
                            break;
                        case 6:
                            this.mService.registerStateChangeListener(6, this);
                            mUsedStateList.add(6);
                            break;
                        case 7:
                            this.mService.registerStateChangeListener(0, this);
                            mUsedStateList.add(7);
                            break;
                        case 8:
                            this.mService.registerStateChangeListener(10, this);
                            mUsedStateList.add(8);
                            break;
                        case 9:
                            this.mService.registerStateChangeListener(4, this);
                            mUsedStateList.add(9);
                            break;
                        case 10:
                            this.mService.registerStateChangeListener(11, this);
                            mUsedStateList.add(10);
                            break;
                    }
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void log(String str) {
        Log.d(LOG_TAG, str);
    }

    public static void make(Context context, CommandsInterface[] commandsInterfaceArr) {
        sCi = commandsInterfaceArr;
        log("enter make function");
        if (sIntance == null) {
            log("new ModemSarController");
            sIntance = new ModemSarController(context);
        }
    }

    private DeviceSarConfig readXmlBySAX(String str, String str2, String str3, String str4) {
        List<DeviceSarConfig> deviceSarConfig = null;
        FileInputStream fileInputStream = null;
        try {
            fileInputStream = new FileInputStream(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (fileInputStream != null) {
            try {
                SAXParser sAXParserNewSAXParser = SAXParserFactory.newInstance().newSAXParser();
                XMLContentHandler xMLContentHandler = new XMLContentHandler();
                sAXParserNewSAXParser.parse(fileInputStream, xMLContentHandler);
                fileInputStream.close();
                deviceSarConfig = xMLContentHandler.getDeviceSarConfig();
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        if (deviceSarConfig == null) {
            Log.d(LOG_TAG, "Parse xml failed, don`t have the deviceSarConfigList!");
            return null;
        }
        for (int i = 0; i < deviceSarConfig.size(); i++) {
            DeviceSarConfig deviceSarConfig2 = deviceSarConfig.get(i);
            String deviceName = deviceSarConfig2.getDeviceName();
            String str5 = deviceSarConfig2.getPropList().get(PROPERTY_GLOBAL_VER);
            String str6 = deviceSarConfig2.getPropList().get(PROPERTY_GLOBAL_HW);
            Log.d(LOG_TAG, "Get from xml file:  deviceName=" + deviceName + " SWname=" + str5 + " Hwname=" + str6);
            if (deviceName.equalsIgnoreCase(str2) && str6.contains(str3) && str5.contains(str4)) {
                Log.d(LOG_TAG, "find the config success!!!");
                return deviceSarConfig2;
            }
            if (deviceName.equalsIgnoreCase(str2) && str6.contains("default") && !str3.equals("CN") && str4.contains("global")) {
                Log.d(LOG_TAG, "find the config success, default!!!");
                return deviceSarConfig2;
            }
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int sarExceptionHandle(int i, int i2) {
        return (3 == i || 4 == i) ? i2 : i;
    }

    private void sendMsgToHandler(int i, int i2, int i3) {
        Log.d(LOG_TAG, "sendMsgToHandler, Message = " + i + ", arg1 = " + i2 + ", arg2 = " + i3);
        Handler handler = this.mCmdHandler;
        if (handler != null) {
            this.mCmdHandler.sendMessage(handler.obtainMessage(i, i2, i3));
        }
    }

    public boolean initSarEnable() {
        String str = SystemProperties.get(PROPERTY_DEVICE_NAME);
        String str2 = SystemProperties.get(PROPERTY_GLOBAL_HW);
        String str3 = SystemProperties.get(PROPERTY_GLOBAL_VER);
        Log.d(LOG_TAG, "Device name = " + str + ", globalHW = " + str2 + ", globalSW = " + str3);
        int i = SystemProperties.getInt(PROPERTY_DYNAMIC_SAR, 0);
        StringBuilder sb = new StringBuilder();
        sb.append("mSarSensorProState = ");
        sb.append(i);
        Log.d(LOG_TAG, sb.toString());
        if (i == 1) {
            mCurrentSarConfig = readXmlBySAX("/vendor/etc/device_sar_config.xml", str, str2, str3);
        } else if (i == 2) {
            Log.d(LOG_TAG, "Sar feature is enable for test. Ignore the global HW and SW.");
            mCurrentSarConfig = readXmlBySAX("/vendor/etc/device_sar_config.xml", "test", "test", "test");
        } else if (i == 3) {
            Log.d(LOG_TAG, "Sar feature is enable for JP,cannong_jp_sb_gloabl.");
            mCurrentSarConfig = readXmlBySAX("/vendor/etc/device_sar_config.xml", str, "JP", "cannong_jp_sb_global");
        } else if (i == 4) {
            Log.d(LOG_TAG, "Sar feature is enable for GL,cannong_eea_global.");
            mCurrentSarConfig = readXmlBySAX("/vendor/etc/device_sar_config.xml", str, "GL", "cannong_eea_global");
        } else if (i == 5) {
            Log.d(LOG_TAG, "Sar feature is enable for GL,cannong_tr_global.");
            mCurrentSarConfig = readXmlBySAX("/vendor/etc/device_sar_config.xml", str, "GL", "cannong_tr_global");
        } else {
            if (i != 6) {
                return false;
            }
            Log.d(LOG_TAG, "Sar feature is enable for GL,cannong_global.");
            mCurrentSarConfig = readXmlBySAX("/vendor/etc/device_sar_config.xml", str, "GL", "cannong_global");
        }
        if (mCurrentSarConfig == null) {
            Log.d(LOG_TAG, "Don`t find the corresponding config.");
            return false;
        }
        this.mService = DynamicSarService.getInstance(mContext);
        CmdProcThread cmdProcThread = new CmdProcThread();
        this.mCmdProc = cmdProcThread;
        cmdProcThread.start();
        do {
            Handler cmdHandler = this.mCmdProc.getCmdHandler();
            this.mCmdHandler = cmdHandler;
            if (cmdHandler != null) {
                initRegStateAction();
            } else {
                SystemClock.sleep(100L);
                this.mInitHandleTimes--;
            }
            if (this.mInitHandleTimes <= 0) {
                break;
            }
        } while (this.mCmdHandler == null);
        if (this.mInitHandleTimes != 0 || this.mCmdHandler != null) {
            return true;
        }
        Log.d(LOG_TAG, "mInitHandleTimes is max, Init cmd handle failed!!!");
        return false;
    }

    @Override // com.mediatek.internal.telephony.DynamicSarService.SarControllerClient
    public void onStateChanged(int i, int i2) {
        Log.d(LOG_TAG, "onStateChanged: type = " + i + ", value = " + i2);
        switch (i) {
            case 0:
                sendMsgToHandler(2, i2, 0);
                break;
            case 1:
                sendMsgToHandler(3, i2, 0);
                break;
            case 3:
                sendMsgToHandler(6, i2, 0);
                break;
            case 4:
                sendMsgToHandler(10, i2, 0);
                break;
            case 5:
                sendMsgToHandler(1, i2, 0);
                break;
            case 6:
                sendMsgToHandler(8, i2, 3);
                break;
            case 7:
                sendMsgToHandler(5, i2, 0);
                break;
            case 8:
                sendMsgToHandler(4, i2, 0);
                break;
            case 9:
                sendMsgToHandler(7, i2, 0);
                break;
            case 10:
                sendMsgToHandler(9, i2, 0);
                break;
            case 11:
                sendMsgToHandler(11, i2, 0);
                break;
            case 13:
                sendMsgToHandler(12, i2, 0);
                break;
            case 14:
                sendMsgToHandler(13, i2, 0);
                break;
        }
    }
}

package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.util.Log;
import com.android.internal.telephony.CommandsInterface;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class ModemSarController_G7 implements DynamicSarService_G7.SarControllerClient {
    private static final String DEVICE_TYPE_BEGONIA = "begonia";
    private static final int DSI_0 = 0;
    private static final int DSI_1 = 1;
    private static final int DSI_2 = 2;
    private static final int DSI_3 = 3;
    private static final int DSI_4 = 4;
    private static final int DSI_5 = 5;
    private static final int DSI_6 = 6;
    private static final int DSI_7 = 7;
    private static final int DSI_8 = 8;
    private static int DSI_Current = 0;
    private static final int EVENT_CHARGE = 5;
    private static final int EVENT_Hotspot = 3;
    private static final int EVENT_Receiver = 2;
    private static final int EVENT_SAR_SENSOR = 1;
    private static final int EVENT_WIFI = 4;
    private static final int HotspotStateNum = 2;
    public static final String LOG_TAG = "ModemSarController_G7";
    private static final String PROPERTY_CHARGE_SAR_CONTROL = "persist.radio.charge_sar_control";
    private static final String PROPERTY_DEVICE_NAME = "ro.product.device";
    private static final String PROPERTY_DYNAMIC_SAR_SAR_SENSOR = "persist.radio.sar_sar_sensor";
    private static final String PROPERTY_GLOBAL_HW = "ro.boot.hwc";
    private static final String PROPERTY_GLOBAL_VER = "ro.product.mod_device";
    private static final String PROPERTY_Modem_DYNAMIC_SAR_STATE = "persist.radio.modem_dynamic_sar_state";
    private static final int ReceiverStateNum = 2;
    private static final int SAR_MODE = 1;
    private static final int WIFIStateNum = 2;
    private static ModemSarController_G7 sIntance;
    CmdProcThread mCmdProc;
    private Context mContext;
    private DynamicSarService_G7 mService;
    private static int SarSensorState = 0;
    private static int ReceiverState = 0;
    private static int HotspotState = 0;
    private static int WIFIState = 0;
    private static int CHARGEState = 0;
    private static HashMap<Integer, Integer> DSI_Hash = new HashMap<>();
    private static int DSI_History = 0;
    private static String mDeviceName = null;
    private static String mGlobalHW = null;
    private static String mGlobalSW = null;
    private static boolean mSarSensorEnabled = false;
    private static boolean mCHARGESAREnabled = false;
    private static CommandsInterface[] sCi = null;

    private static class CmdProcThread extends Thread {
        private Handler mHandler;

        private static class CmdHandler extends Handler {
            private CmdHandler() {
            }

            private void DSI_Handle() {
                ModemSarController_G7.log("SarSensorState is = " + ModemSarController_G7.SarSensorState);
                ModemSarController_G7.log("ReceiverState is = " + ModemSarController_G7.ReceiverState);
                ModemSarController_G7.log("HotspotState is = " + ModemSarController_G7.HotspotState);
                ModemSarController_G7.log("WIFIState is = " + ModemSarController_G7.WIFIState);
                ModemSarController_G7.log("CHARGEState is = " + ModemSarController_G7.CHARGEState);
                if (ModemSarController_G7.CHARGEState == 1 && ModemSarController_G7.mCHARGESAREnabled && ModemSarController_G7.DEVICE_TYPE_BEGONIA.equals(ModemSarController_G7.mDeviceName)) {
                    int unused = ModemSarController_G7.DSI_Current = 8;
                } else {
                    int unused2 = ModemSarController_G7.DSI_Current = ((Integer) ModemSarController_G7.DSI_Hash.get(Integer.valueOf(ModemSarController_G7.DSI_Hash_Key_Convert(ModemSarController_G7.SarSensorState, ModemSarController_G7.ReceiverState, ModemSarController_G7.HotspotState, ModemSarController_G7.WIFIState)))).intValue();
                }
                ModemSarController_G7.log("DSI_Current is = " + ModemSarController_G7.DSI_Current);
                if (ModemSarController_G7.DSI_Current != ModemSarController_G7.DSI_History) {
                    ModemSarController_G7.log("cmdMsgSend: = " + ModemSarController_G7.DSI_Current);
                    if (ModemSarController_G7.sCi != null) {
                        for (int i = 0; i < ModemSarController_G7.sCi.length; i++) {
                            if (1 == ModemSarController_G7.sCi[i].getRadioState()) {
                                ModemSarController_G7.sCi[i].sendSarIndicator(0, "1, " + ModemSarController_G7.DSI_Current, null);
                                break;
                            }
                            ModemSarController_G7.log("phone[" + i + "] radio is unavaliable or off");
                        }
                    } else {
                        Log.e(ModemSarController_G7.LOG_TAG, "sCi[0] is NULL!!!");
                    }
                }
                int unused3 = ModemSarController_G7.DSI_History = ModemSarController_G7.DSI_Current;
            }

            @Override // android.os.Handler
            public void handleMessage(Message message) {
                ModemSarController_G7.log("handlerMessage, msg = " + message.what);
                int i = message.what;
                if (i == 1) {
                    int unused = ModemSarController_G7.SarSensorState = message.arg1;
                    DSI_Handle();
                    return;
                }
                if (i == 2) {
                    int unused2 = ModemSarController_G7.ReceiverState = message.arg1;
                    DSI_Handle();
                    return;
                }
                if (i == 3) {
                    int unused3 = ModemSarController_G7.HotspotState = message.arg1;
                    DSI_Handle();
                } else if (i == 4) {
                    int unused4 = ModemSarController_G7.WIFIState = message.arg1;
                    DSI_Handle();
                } else {
                    if (i != 5) {
                        return;
                    }
                    int unused5 = ModemSarController_G7.CHARGEState = message.arg1;
                    DSI_Handle();
                }
            }
        }

        private CmdProcThread() {
            this.mHandler = null;
        }

        public Handler getCmdHandler() {
            if (this.mHandler == null) {
                Log.e(ModemSarController_G7.LOG_TAG, "getCmdHandler, handler is NULL!!!");
            }
            return this.mHandler;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Looper.prepare();
            this.mHandler = new CmdHandler();
            ModemSarController_G7.log("CmdProcThread, thread is running up!!!!");
            Looper.loop();
        }
    }

    private ModemSarController_G7(Context context) {
        this.mCmdProc = null;
        this.mContext = context;
        mDeviceName = SystemProperties.get(PROPERTY_DEVICE_NAME);
        mGlobalHW = SystemProperties.get(PROPERTY_GLOBAL_HW);
        mGlobalSW = SystemProperties.get(PROPERTY_GLOBAL_VER);
        mSarSensorEnabled = SystemProperties.getBoolean(PROPERTY_DYNAMIC_SAR_SAR_SENSOR, false);
        mCHARGESAREnabled = SystemProperties.getBoolean(PROPERTY_CHARGE_SAR_CONTROL, false);
        log("Device name = " + mDeviceName + ", globalHW = " + mGlobalHW + ", globalSW = " + mGlobalSW + ", mSarSensorEnabled = " + mSarSensorEnabled + ", mCHARGESAREnabled = " + mCHARGESAREnabled);
        SystemProperties.set(PROPERTY_Modem_DYNAMIC_SAR_STATE, "close");
        if (mSarSensorEnabled) {
            CmdProcThread cmdProcThread = new CmdProcThread();
            this.mCmdProc = cmdProcThread;
            cmdProcThread.start();
            DSI_Hash_Init_BEGONIA();
            DynamicSarService_G7 dynamicSarService_G7 = DynamicSarService_G7.getInstance(context);
            this.mService = dynamicSarService_G7;
            if (dynamicSarService_G7 != null) {
                if (!mGlobalHW.equals("CN") && mGlobalSW.contains("global")) {
                    this.mService.registerStateChangeListener(0, this);
                    this.mService.registerStateChangeListener(1, this);
                    if (!mGlobalHW.equals("India")) {
                        this.mService.registerStateChangeListener(3, this);
                    }
                    this.mService.registerStateChangeListener(5, this);
                    SystemProperties.set(PROPERTY_Modem_DYNAMIC_SAR_STATE, "open");
                }
                if (mCHARGESAREnabled) {
                    this.mService.registerStateChangeListener(6, this);
                    this.mService.registerStateChangeListener(7, this);
                }
            }
        }
    }

    private void DSI_Hash_Init_BEGONIA() {
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 0, 0, 0)), 0);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 0, 0, 1)), 0);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 1, 0, 0)), 1);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 1, 0, 0)), 1);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 1, 0, 0)), 1);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 1, 0, 1)), 2);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 1, 0, 1)), 2);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 1, 0, 1)), 2);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 0, 0, 0)), 3);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 0, 0, 1)), 4);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 0, 0, 0)), 5);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 0, 0, 1)), 6);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 0, 1, 0)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 0, 1, 1)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 1, 1, 0)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(2, 1, 1, 1)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 0, 1, 0)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 0, 1, 1)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 1, 1, 0)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(1, 1, 1, 1)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 0, 1, 0)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 0, 1, 1)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 1, 1, 0)), 7);
        DSI_Hash.put(Integer.valueOf(DSI_Hash_Key_Convert(0, 1, 1, 1)), 7);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int DSI_Hash_Key_Convert(int i, int i2, int i3, int i4) {
        return (i * 8) + (i2 * 4) + (i3 * 2) + i4;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void log(String str) {
        Log.i(LOG_TAG, str);
    }

    public static void make(Context context, CommandsInterface[] commandsInterfaceArr) {
        sCi = commandsInterfaceArr;
        if (sIntance == null) {
            sIntance = new ModemSarController_G7(context);
        }
    }

    private void sendMsgToHandler(int i, int i2, int i3) {
        log("sendMsgToHandler, Message = " + i + ", arg1 = " + i2 + ", arg2 = " + i3);
        Handler cmdHandler = this.mCmdProc.getCmdHandler();
        cmdHandler.sendMessage(cmdHandler.obtainMessage(i, i2, i3));
    }

    @Override // com.mediatek.internal.telephony.DynamicSarService_G7.SarControllerClient
    public void onStateChanged(int i, int i2) {
        log("onStateChanged: type = " + i + ", value = " + i2);
        if (i == 0) {
            sendMsgToHandler(4, i2, 0);
            return;
        }
        if (i == 1) {
            sendMsgToHandler(3, i2, 0);
            return;
        }
        if (i == 3) {
            sendMsgToHandler(1, i2, 0);
            return;
        }
        if (i == 5) {
            sendMsgToHandler(2, i2, 0);
        } else if (i == 6) {
            sendMsgToHandler(5, i2, 0);
        } else {
            if (i != 7) {
                return;
            }
            sendMsgToHandler(5, i2, 0);
        }
    }
}

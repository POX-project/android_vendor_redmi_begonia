package com.mediatek.internal.telephony;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.android.internal.telephony.CommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ElevatorModeController {
    private static final int EVENT_QUIT_ELEVATOR_MODE = 1;
    public static final String LOG_TAG = "ElevatorModeController";
    private static final int SENSOR_TYPE = 33171032;
    private static CommandsInterface[] sCi = null;
    private static ElevatorModeController sIntance;
    private Context mContext;
    private Sensor mSensor;
    private SensorManager mSensorManager;
    private final SensorEventListener mSensorEventListener = new SensorEventListener() { // from class: com.mediatek.internal.telephony.ElevatorModeController.1
        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            if (sensorEvent.sensor.getType() != ElevatorModeController.SENSOR_TYPE) {
                return;
            }
            int i = (int) sensorEvent.values[0];
            ElevatorModeController.log("onSensorChanged state = " + i);
            if (i == 4) {
                ElevatorModeController.this.handler.sendEmptyMessage(1);
            }
        }
    };
    private Handler handler = new CmdHandler();

    private class CmdHandler extends Handler {
        private CmdHandler() {
        }

        private void handleQuitElevatorMode() {
            if (ElevatorModeController.sCi == null) {
                Log.e(ElevatorModeController.LOG_TAG, "sCi is NULL!!!");
                return;
            }
            for (int i = 0; i < ElevatorModeController.sCi.length; i++) {
                if (1 == ElevatorModeController.sCi[i].getRadioState()) {
                    ElevatorModeController.sCi[i].invokeOemRilRequestStrings(new String[]{"AT+EGMC=1,\"elevator_mode\",1", ""}, null);
                    return;
                }
                ElevatorModeController.log("phone[" + i + "] radio is unavaliable or off");
            }
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            ElevatorModeController.log("handlerMessage, msg = " + message.what);
            handleQuitElevatorMode();
        }
    }

    private ElevatorModeController(Context context) {
        this.mContext = context;
        SensorManager sensorManager = (SensorManager) this.mContext.getSystemService("sensor");
        this.mSensorManager = sensorManager;
        Sensor defaultSensor = sensorManager.getDefaultSensor(SENSOR_TYPE, true);
        this.mSensor = defaultSensor;
        this.mSensorManager.registerListener(this.mSensorEventListener, defaultSensor, 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void log(String str) {
        Log.i(LOG_TAG, str);
    }

    public static void make(Context context, CommandsInterface[] commandsInterfaceArr) {
        sCi = commandsInterfaceArr;
        if (sIntance == null) {
            sIntance = new ElevatorModeController(context);
        }
    }
}

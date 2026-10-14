package com.mediatek.internal.telephony.dataconnection;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import vendor.mediatek.hardware.netdagent.V1_0.INetdagent;

/* JADX INFO: loaded from: classes.dex */
public class OemDataEnhance {
    private static final int EVENT_INIT_ACTION = 0;
    private static final int EVENT_ON_WECHAT_SCAN_SCENE = 2;
    private static final int EVENT_ON_WECHAT_VOIP_SCENE = 1;
    private static final int INVALID_UID = -1;
    private static final String LATENCY_KEY_SCENE = "scene";
    private static final String TAG = "OemDataEnhance";
    private static final String WECHAT_SCAN_SCENE = "com.android.phone.intent.action.CHANGE_LEVEL";
    private static final String WECHAT_UID = "weChatUid";
    private static final String WECHAT_VOIP_ENABLED = "wechatVoipEnabled";
    private static final String WECHAT_VOIP_SCENE = "com.android.phone.intent.action.WECHAT_VOIP_SCENE";
    private static Context mContext;
    private static OemDataEnhance sInstance = null;
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.dataconnection.OemDataEnhance.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (action == null) {
                return;
            }
            Log.d(OemDataEnhance.TAG, "mIntentReceiver action=" + action);
            if (OemDataEnhance.WECHAT_VOIP_SCENE.equals(action)) {
                OemDataEnhance.this.mHandler.obtainMessage(1, intent).sendToTarget();
            } else if ("com.android.phone.intent.action.CHANGE_LEVEL".equals(action)) {
                OemDataEnhance.this.mHandler.obtainMessage(2, intent).sendToTarget();
            }
        }
    };
    private OemDataEnhanceHandler mHandler;
    private HandlerThread mWorkThread;

    private class OemDataEnhanceHandler extends Handler {
        public OemDataEnhanceHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                Log.d(OemDataEnhance.TAG, "EVENT_INIT_ACTION");
                OemDataEnhance.this.initAction();
            } else if (i == 1) {
                OemDataEnhance.this.processWeChatVoipScene((Intent) message.obj);
            } else {
                if (i != 2) {
                    return;
                }
                OemDataEnhance.this.processWeChatScanScene((Intent) message.obj);
            }
        }
    }

    private OemDataEnhance(Context context) {
        Log.d(TAG, TAG);
        mContext = context;
        HandlerThread handlerThread = new HandlerThread(TAG, 10);
        this.mWorkThread = handlerThread;
        handlerThread.start();
        OemDataEnhanceHandler oemDataEnhanceHandler = new OemDataEnhanceHandler(this.mWorkThread.getLooper());
        this.mHandler = oemDataEnhanceHandler;
        oemDataEnhanceHandler.obtainMessage(0).sendToTarget();
    }

    public static OemDataEnhance getInstance() {
        if (sInstance == null) {
            Log.d(TAG, "getInstance null");
        }
        return sInstance;
    }

    public static OemDataEnhance init(Context context) {
        mContext = context;
        if (sInstance == null) {
            sInstance = new OemDataEnhance(context);
        } else {
            Log.d(TAG, "init() called multiple times! sInstance = " + sInstance);
        }
        return sInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void initAction() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(WECHAT_VOIP_SCENE);
        intentFilter.addAction("com.android.phone.intent.action.CHANGE_LEVEL");
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void processWeChatScanScene(Intent intent) {
        int intExtra = intent.getIntExtra(LATENCY_KEY_SCENE, 0);
        int intExtra2 = intent.getIntExtra(WECHAT_UID, -1);
        Log.d(TAG, "processWeChatScanScene scanScene[" + intExtra + "],uid[" + intExtra2 + "]");
        if (intExtra2 == -1 || intExtra == 0) {
            return;
        }
        setPriorityofModemByUid(intExtra2, intExtra == 1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void processWeChatVoipScene(Intent intent) {
        boolean booleanExtra = intent.getBooleanExtra(WECHAT_VOIP_ENABLED, false);
        int intExtra = intent.getIntExtra(WECHAT_UID, -1);
        Log.d(TAG, "processWeChatVoipScene enable[" + booleanExtra + "],mVoipUid[" + intExtra + "]");
        if (intExtra != -1) {
            setPriorityofModemByUid(intExtra, booleanExtra);
        }
    }

    private synchronized void setPriorityofModemByUid(int i, boolean z) {
        Log.d(TAG, "setPriorityofModemByUid enabled[" + z + "],uid[" + i + "]");
        try {
            INetdagent service = INetdagent.getService();
            if (service == null) {
                Log.e(TAG, "agnet is null!!!");
                return;
            }
            String str = z ? String.format("netdagent firewall priority_set_uid %s", String.valueOf(i)) : String.format("netdagent firewall priority_clear_uid %s", String.valueOf(i));
            Log.d(TAG, "cmd:" + str);
            service.dispatchNetdagentCmd(str);
        } catch (Exception e) {
            Log.d(TAG, "setPriorityofModemByUid:" + e);
        }
    }
}

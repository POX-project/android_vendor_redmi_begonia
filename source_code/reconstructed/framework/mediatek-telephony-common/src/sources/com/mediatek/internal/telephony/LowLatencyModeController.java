package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.SubscriptionController;

/* JADX INFO: loaded from: classes.dex */
public class LowLatencyModeController {
    public static final String ACTION_CHANGE_LEVEL = "com.android.phone.intent.action.CHANGE_LEVEL";
    private static final String CMD_DISABLE_LLM = "AT+EMRO=1,\"lte_game_ho_enhancement\",2";
    private static final String CMD_ENABLE_LLM = "AT+EMRO=1,\"lte_game_ho_enhancement\",3";
    private static final int EVENT_LLM_CHANGED = 2;
    private static final int EVENT_LLM_DDS_CHANGED = 3;
    private static final int EVENT_LLM_INIT = 1;
    private static final String LATENCY_KEY_LEVEL_DL = "Level_DL";
    private static final String LATENCY_KEY_LEVEL_UL = "Level_UL";
    private static final int LATENCY_LEVEL_1 = 1;
    private static final int LATENCY_LEVEL_2 = 2;
    private static final int LATENCY_LEVEL_3 = 3;
    private static final int LATENCY_LEVEL_4 = 4;
    public static final String LOG_TAG = "LowLatencyModeController";
    private static CommandsInterface[] sCi = null;
    private static LowLatencyModeController sIntance;
    private Context mContext;
    private int mDefaultDataPhoneId;
    private boolean mIsLLMEnabled = false;
    private SubscriptionController mSubController = SubscriptionController.getInstance();
    private final BroadcastReceiver mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.LowLatencyModeController.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (action == null) {
                return;
            }
            LowLatencyModeController.log("mIntentReceiver action=" + action);
            if (action.equals(LowLatencyModeController.ACTION_CHANGE_LEVEL)) {
                LowLatencyModeController.this.handler.sendMessage(Message.obtain(LowLatencyModeController.this.handler, 2, intent));
                return;
            }
            if (action.equals("android.intent.action.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED")) {
                int phoneId = LowLatencyModeController.this.mSubController.getPhoneId(LowLatencyModeController.this.mSubController.getDefaultDataSubId());
                LowLatencyModeController.log("DDS_CHANGED id=" + LowLatencyModeController.this.mDefaultDataPhoneId + ",newDds=" + phoneId);
                if (phoneId != LowLatencyModeController.this.mDefaultDataPhoneId) {
                    LowLatencyModeController.this.mDefaultDataPhoneId = phoneId;
                    if (LowLatencyModeController.this.mIsLLMEnabled) {
                        LowLatencyModeController.this.handler.sendEmptyMessage(3);
                    }
                }
            }
        }
    };
    private Handler handler = new CmdHandler();

    private class CmdHandler extends Handler {
        private CmdHandler() {
        }

        private void enableLowLatencyMode(boolean z) {
            if (LowLatencyModeController.sCi == null) {
                Log.e(LowLatencyModeController.LOG_TAG, "sCi is NULL!!!");
                return;
            }
            for (int i = 0; i < LowLatencyModeController.sCi.length; i++) {
                LowLatencyModeController.log("state[" + i + " ] =" + LowLatencyModeController.sCi[i].getRadioState() + ",cmd=" + z + ",dds=" + LowLatencyModeController.this.mDefaultDataPhoneId);
                if (z && i == LowLatencyModeController.this.mDefaultDataPhoneId) {
                    LowLatencyModeController.sCi[LowLatencyModeController.this.mDefaultDataPhoneId].invokeOemRilRequestStrings(new String[]{LowLatencyModeController.CMD_ENABLE_LLM, ""}, null);
                } else if (!z) {
                    LowLatencyModeController.sCi[i].invokeOemRilRequestStrings(new String[]{LowLatencyModeController.CMD_DISABLE_LLM, ""}, null);
                }
            }
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            LowLatencyModeController.log("handlerMessage, msg=" + message.what);
            int i = message.what;
            if (i == 1) {
                LowLatencyModeController.this.mIsLLMEnabled = false;
                enableLowLatencyMode(false);
                return;
            }
            if (i != 2) {
                if (i == 3 && LowLatencyModeController.this.mIsLLMEnabled) {
                    enableLowLatencyMode(false);
                    enableLowLatencyMode(true);
                    return;
                }
                return;
            }
            Intent intent = (Intent) message.obj;
            if (intent == null) {
                return;
            }
            long longExtra = intent.getLongExtra(LowLatencyModeController.LATENCY_KEY_LEVEL_UL, 1L);
            long longExtra2 = intent.getLongExtra(LowLatencyModeController.LATENCY_KEY_LEVEL_DL, 1L);
            if (longExtra != longExtra2 || longExtra2 != 1) {
                LowLatencyModeController.this.mIsLLMEnabled = true;
                enableLowLatencyMode(true);
            } else if (LowLatencyModeController.this.mIsLLMEnabled) {
                LowLatencyModeController.this.mIsLLMEnabled = false;
                enableLowLatencyMode(false);
            }
        }
    }

    private LowLatencyModeController(Context context) {
        this.mContext = context;
        registerReceiver();
        SubscriptionController subscriptionController = this.mSubController;
        this.mDefaultDataPhoneId = subscriptionController.getPhoneId(subscriptionController.getDefaultDataSubId());
        this.handler.sendEmptyMessage(1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void log(String str) {
        Log.i(LOG_TAG, str);
    }

    public static void make(Context context, CommandsInterface[] commandsInterfaceArr) {
        sCi = commandsInterfaceArr;
        if (sIntance == null) {
            sIntance = new LowLatencyModeController(context);
        }
    }

    private void registerReceiver() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_CHANGE_LEVEL);
        intentFilter.addAction("android.intent.action.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED");
        this.mContext.registerReceiver(this.mIntentReceiver, intentFilter);
    }
}

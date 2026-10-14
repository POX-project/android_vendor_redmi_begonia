package com.mediatek.internal.telephony.worldphone;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.mediatek.internal.telephony.MtkRIL;

/* JADX INFO: loaded from: classes.dex */
public class WorldMode extends Handler {
    static final String ACTION_ADB_SWITCH_WORLD_MODE = "android.intent.action.ACTION_ADB_SWITCH_WORLD_MODE";
    public static final String ACTION_WORLD_MODE_CHANGED = "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED";
    static final int EVENT_RADIO_ON_1 = 1;
    static final int EVENT_RADIO_ON_2 = 2;
    static final int EVENT_RADIO_ON_3 = 3;
    static final int EVENT_RADIO_ON_4 = 4;
    static final String EXTRA_WORLDMODE = "worldMode";
    public static final String EXTRA_WORLD_MODE_CHANGE_STATE = "worldModeState";
    private static final String LOG_TAG = "WORLDMODE";
    public static final int MASK_CDMA = 32;
    public static final int MASK_GSM = 1;
    public static final int MASK_LTEFDD = 16;
    public static final int MASK_LTETDD = 8;
    public static final int MASK_TDSCDMA = 2;
    public static final int MASK_WCDMA = 4;
    public static final int MD_WM_CHANGED_END = 1;
    public static final int MD_WM_CHANGED_START = 0;
    public static final int MD_WM_CHANGED_UNKNOWN = -1;
    public static final int MD_WORLD_MODE_LCTG = 16;
    public static final int MD_WORLD_MODE_LFCTG = 21;
    public static final int MD_WORLD_MODE_LFTG = 20;
    public static final int MD_WORLD_MODE_LFWCG = 15;
    public static final int MD_WORLD_MODE_LFWG = 14;
    public static final int MD_WORLD_MODE_LTCTG = 17;
    public static final int MD_WORLD_MODE_LTG = 8;
    public static final int MD_WORLD_MODE_LTTG = 13;
    public static final int MD_WORLD_MODE_LTWCG = 19;
    public static final int MD_WORLD_MODE_LTWG = 18;
    public static final int MD_WORLD_MODE_LWCG = 11;
    public static final int MD_WORLD_MODE_LWCTG = 12;
    public static final int MD_WORLD_MODE_LWG = 9;
    public static final int MD_WORLD_MODE_LWTG = 10;
    public static final int MD_WORLD_MODE_UNKNOWN = 0;
    static final int WORLD_MODE_RESULT_ERROR = 101;
    static final int WORLD_MODE_RESULT_SUCCESS = 100;
    static final int WORLD_MODE_RESULT_WM_ID_NOT_SUPPORT = 102;
    private static Phone[] sActivePhones;
    private static MtkRIL[] sCi;
    private static Context sContext;
    private static WorldMode sInstance;
    private static int sUpdateSwitchingFlag;
    private static CommandsInterface[] smCi;
    private final BroadcastReceiver mWorldModeReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.worldphone.WorldMode.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            WorldMode.logd("[Receiver]+");
            String action = intent.getAction();
            WorldMode.logd("Action: " + action);
            if (WorldMode.ACTION_WORLD_MODE_CHANGED.equals(action)) {
                int intExtra = intent.getIntExtra(WorldMode.EXTRA_WORLD_MODE_CHANGE_STATE, -1);
                WorldMode.logd("wmState: " + intExtra);
                if (intExtra == 1) {
                    int unused = WorldMode.sCurrentWorldMode = WorldMode.updateCurrentWorldMode();
                }
            } else if (WorldMode.ACTION_ADB_SWITCH_WORLD_MODE.equals(action)) {
                int intExtra2 = intent.getIntExtra(WorldMode.EXTRA_WORLDMODE, 0);
                WorldMode.logd("toMode: " + intExtra2);
                if (intExtra2 >= 8 && intExtra2 <= 21) {
                    WorldMode.setWorldMode(intExtra2);
                }
            }
            WorldMode.logd("[Receiver]-");
        }
    };
    private static final int PROJECT_SIM_NUM = WorldPhoneUtil.getProjectSimNum();
    private static int sCurrentWorldMode = updateCurrentWorldMode();
    private static int sActiveWorldMode = 0;
    private static boolean sSwitchingState = false;
    private static Phone[] sProxyPhones = null;

    static {
        int i = PROJECT_SIM_NUM;
        sActivePhones = new Phone[i];
        sContext = null;
        smCi = new CommandsInterface[i];
        sCi = new MtkRIL[i];
        sUpdateSwitchingFlag = 0;
    }

    public WorldMode() {
        logd("Constructor Init world mode: " + sCurrentWorldMode + "sSwitchingState: " + sSwitchingState);
        sProxyPhones = PhoneFactory.getPhones();
        for (int i = 0; i < PROJECT_SIM_NUM; i++) {
            Phone[] phoneArr = sActivePhones;
            phoneArr[i] = sProxyPhones[i];
            smCi[i] = phoneArr[i].mCi;
            MtkRIL[] mtkRILArr = sCi;
            mtkRILArr[i] = (MtkRIL) smCi[i];
            mtkRILArr[i].registerForOn(this, i + 1, null);
        }
        IntentFilter intentFilter = new IntentFilter(ACTION_WORLD_MODE_CHANGED);
        intentFilter.addAction(ACTION_ADB_SWITCH_WORLD_MODE);
        if (PhoneFactory.getDefaultPhone() != null) {
            sContext = PhoneFactory.getDefaultPhone().getContext();
        } else {
            logd("DefaultPhone = null");
        }
        sContext.registerReceiver(this.mWorldModeReceiver, intentFilter);
    }

    public static String WorldModeToString(int i) {
        if (i == 8) {
            return "uTLG";
        }
        if (i == 9) {
            return "uLWG";
        }
        if (i == 10) {
            return "uLWTG";
        }
        if (i == 11) {
            return "uLWCG";
        }
        if (i == 12) {
            return "uLWTCG";
        }
        if (i == 13) {
            return "LtTG";
        }
        if (i == 14) {
            return "LfWG";
        }
        if (i == 15) {
            return "uLfWCG";
        }
        if (i == 16) {
            return "uLCTG";
        }
        if (i == 17) {
            return "uLtCTG";
        }
        if (i == 18) {
            return "uLtWG";
        }
        if (i == 19) {
            return "uLtWCG";
        }
        if (i == 20) {
            return "uLfTG";
        }
        return i == 21 ? "uLfCTG" : "Invalid world mode";
    }

    private static boolean checkWmCapability(int i, int i2) {
        int i3 = 0;
        if (i == 8) {
            i3 = 27;
        } else if (i == 13) {
            i3 = 11;
        } else if (i == 10) {
            i3 = 31;
        } else if (i == 14) {
            i3 = 21;
        } else if (i == 9) {
            i3 = 29;
        } else if (i == 12) {
            i3 = 63;
        } else if (i == 16) {
            i3 = 59;
        } else if (i == 17) {
            i3 = 43;
        } else if (i == 15) {
            i3 = 53;
        } else if (i == 11) {
            i3 = 61;
        } else if (i == 18) {
            i3 = 13;
        } else if (i == 19) {
            i3 = 45;
        } else if (i == 20) {
            i3 = 19;
        } else if (i == 21) {
            i3 = 51;
        }
        if (true == WorldPhoneUtil.isC2kSupport()) {
            i2 |= 32;
        }
        if (true == WorldPhoneUtil.isWorldPhoneSupport() && (4 == (i3 & 4) || 2 == (i3 & 2))) {
            i2 = i2 | 4 | 2;
        }
        logd("checkWmCapability: modem=" + i + " rat=" + i3 + " bnadMode=" + i2);
        return i3 == (i3 & i2) && (i3 & 32) == (i2 & 32);
    }

    public static int getWorldMode() {
        sCurrentWorldMode = Integer.valueOf(SystemProperties.get("vendor.ril.active.md", Integer.toString(0))).intValue();
        logd("getWorldMode=" + WorldModeToString(sCurrentWorldMode));
        return sCurrentWorldMode;
    }

    public static void init() {
        synchronized (WorldMode.class) {
            if (sInstance == null) {
                sInstance = new WorldMode();
            } else {
                logd("init() called multiple times!  sInstance = " + sInstance);
            }
        }
    }

    public static boolean isWorldModeSwitching() {
        return sSwitchingState;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void logd(String str) {
        Rlog.d("WORLDMODE", "[WorldMode]" + str);
    }

    public static boolean resetSwitchingState(int i) {
        logd("reset sUpdateSwitchingFlag = " + sUpdateSwitchingFlag);
        sUpdateSwitchingFlag = 0;
        logd("reset sSwitchingState = " + sSwitchingState);
        sSwitchingState = false;
        return true;
    }

    public static void setWorldMode(int i) {
        int majorSim = WorldPhoneUtil.getMajorSim();
        logd("[setWorldMode]protocolSim: " + majorSim);
        if (majorSim < 0 || majorSim > 3) {
            setWorldMode(sCi[0], i);
        } else {
            setWorldMode(sCi[majorSim], i);
        }
    }

    private static void setWorldMode(MtkRIL mtkRIL, int i) {
        logd("[setWorldMode] worldMode=" + i);
        if (i != sCurrentWorldMode) {
            if (mtkRIL.getRadioState() == 2) {
                logd("Radio unavailable, can not switch world mode");
                return;
            }
            mtkRIL.reloadModemType(i, null);
            mtkRIL.storeModemType(i, null);
            mtkRIL.restartRILD(null);
            return;
        }
        if (i == 8) {
            logd("Already in uTLG mode");
            return;
        }
        if (i == 9) {
            logd("Already in uLWG mode");
            return;
        }
        if (i == 10) {
            logd("Already in uLWTG mode");
            return;
        }
        if (i == 11) {
            logd("Already in uLWCG mode");
            return;
        }
        if (i == 12) {
            logd("Already in uLWTCG mode");
            return;
        }
        if (i == 13) {
            logd("Already in LtTG mode");
            return;
        }
        if (i == 14) {
            logd("Already in LfWG mode");
            return;
        }
        if (i == 15) {
            logd("Already in uLfWCG mode");
            return;
        }
        if (i == 16) {
            logd("Already in uLCTG mode");
            return;
        }
        if (i == 17) {
            logd("Already in uLtCTG mode");
            return;
        }
        if (i == 18) {
            logd("Already in uLtWG mode");
            return;
        }
        if (i == 19) {
            logd("Already in uLtWCG mode");
        } else if (i == 20) {
            logd("Already in uLfTG mode");
        } else if (i == 21) {
            logd("Already in uLfCTG mode");
        }
    }

    public static int setWorldModeWithBand(int i, int i2) {
        if (checkWmCapability(i, i2)) {
            setWorldMode(i);
            return 100;
        }
        logd("setWorldModeWithBand: not match, modem=" + i + " bandMode=" + i2);
        return 102;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int updateCurrentWorldMode() {
        sCurrentWorldMode = Integer.valueOf(SystemProperties.get("vendor.ril.active.md", Integer.toString(0))).intValue();
        logd("updateCurrentWorldMode=" + WorldModeToString(sCurrentWorldMode));
        return sCurrentWorldMode;
    }

    public static boolean updateSwitchingState(boolean z) {
        if (!z && !isWorldModeSwitching()) {
            sUpdateSwitchingFlag++;
            logd("sUpdateSwitchingFlag+ =" + sUpdateSwitchingFlag);
            return false;
        }
        int i = sUpdateSwitchingFlag;
        if (i <= 0 || true != z) {
            sSwitchingState = z;
            logd("updateSwitchingState=" + sSwitchingState);
            return true;
        }
        sUpdateSwitchingFlag = i - 1;
        logd("sUpdateSwitchingFlag- =" + sUpdateSwitchingFlag);
        return false;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        int majorSim = WorldPhoneUtil.getMajorSim();
        int i = message.what;
        if (i == 1) {
            logd("handleMessage : <EVENT_RADIO_ON_1>");
            if (majorSim == 0) {
                sCurrentWorldMode = updateCurrentWorldMode();
                return;
            }
            return;
        }
        if (i == 2) {
            logd("handleMessage : <EVENT_RADIO_ON_2>");
            if (majorSim == 1) {
                sCurrentWorldMode = updateCurrentWorldMode();
                return;
            }
            return;
        }
        if (i == 3) {
            logd("handleMessage : <EVENT_RADIO_ON_3>");
            if (majorSim == 2) {
                sCurrentWorldMode = updateCurrentWorldMode();
                return;
            }
            return;
        }
        if (i != 4) {
            logd("Unknown msg:" + message.what);
            return;
        }
        logd("handleMessage : <EVENT_RADIO_ON_4>");
        if (majorSim == 3) {
            sCurrentWorldMode = updateCurrentWorldMode();
        }
    }
}

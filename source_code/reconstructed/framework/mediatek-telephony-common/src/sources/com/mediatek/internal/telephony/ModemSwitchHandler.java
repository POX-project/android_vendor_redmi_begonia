package com.mediatek.internal.telephony;

import android.content.Context;
import android.content.Intent;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.mediatek.internal.telephony.worldphone.WorldPhoneUtil;

/* JADX INFO: loaded from: classes.dex */
public class ModemSwitchHandler {
    public static final String ACTION_MD_TYPE_CHANGE = "mediatek.intent.action.ACTION_MD_TYPE_CHANGE";
    public static final String ACTION_MODEM_SWITCH_DONE = "mediatek.intent.action.ACTION_MODEM_SWITCH_DONE";
    private static final int EVENT_RADIO_NOT_AVAILABLE = 2;
    private static final int EVENT_RIL_CONNECTED = 1;
    public static final String EXTRA_MD_TYPE = "mdType";
    private static final String LOG_TAG = "WORLDMODE";
    private static final int MD_SWITCH_DEFAULT = 0;
    private static final int MD_SWITCH_RADIO_UNAVAILABLE = 2;
    private static final int MD_SWITCH_RESET_START = 1;
    public static final int MD_TYPE_FDD = 100;
    public static final int MD_TYPE_LTG = 6;
    public static final int MD_TYPE_LWG = 5;
    public static final int MD_TYPE_TDD = 101;
    public static final int MD_TYPE_TG = 4;
    public static final int MD_TYPE_UNKNOWN = 0;
    public static final int MD_TYPE_WG = 3;
    private static Phone[] sActivePhones;
    private static MtkRIL[] sCi;
    private static Context sContext;
    private static int sModemSwitchingFlag;
    private static Handler sWorldPhoneHandler;
    private static CommandsInterface[] smCi;
    private static final int PROJECT_SIM_NUM = WorldPhoneUtil.getProjectSimNum();
    private static int sCurrentModemType = initActiveModemType();
    private static Phone[] sProxyPhones = null;

    static {
        int i = PROJECT_SIM_NUM;
        sActivePhones = new Phone[i];
        sContext = null;
        smCi = new CommandsInterface[i];
        sCi = new MtkRIL[i];
        sModemSwitchingFlag = 0;
        sWorldPhoneHandler = new Handler() { // from class: com.mediatek.internal.telephony.ModemSwitchHandler.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                int majorSim = WorldPhoneUtil.getMajorSim();
                ModemSwitchHandler.logd("handleMessage msg.what=" + message.what + " sModemSwitchingFlag=" + ModemSwitchHandler.sModemSwitchingFlag + " protocolSim: " + majorSim);
                int i2 = message.what;
                if (i2 != 1) {
                    if (i2 != 2) {
                        return;
                    }
                    int unused = ModemSwitchHandler.sModemSwitchingFlag = 2;
                    return;
                }
                ModemSwitchHandler.logd("[EVENT_RIL_CONNECTED] mRilVersion=" + ((AsyncResult) message.obj).result);
                if (ModemSwitchHandler.sModemSwitchingFlag == 2) {
                    int unused2 = ModemSwitchHandler.sModemSwitchingFlag = 0;
                    ModemSwitchHandler.sContext.sendBroadcast(new Intent(ModemSwitchHandler.ACTION_MODEM_SWITCH_DONE));
                    if (majorSim < 0 || majorSim > 3) {
                        return;
                    }
                    ModemSwitchHandler.sCi[majorSim].unregisterForNotAvailable(ModemSwitchHandler.sWorldPhoneHandler);
                    ModemSwitchHandler.sCi[majorSim].unregisterForRilConnected(ModemSwitchHandler.sWorldPhoneHandler);
                }
            }
        };
    }

    public ModemSwitchHandler() {
        logd("Constructor invoked");
        logd("Init modem type: " + sCurrentModemType);
        sProxyPhones = PhoneFactory.getPhones();
        for (int i = 0; i < PROJECT_SIM_NUM; i++) {
            Phone[] phoneArr = sActivePhones;
            phoneArr[i] = sProxyPhones[i];
            smCi[i] = phoneArr[i].mCi;
            sCi[i] = (MtkRIL) smCi[i];
        }
        if (PhoneFactory.getDefaultPhone() != null) {
            sContext = PhoneFactory.getDefaultPhone().getContext();
        } else {
            logd("DefaultPhone = null");
        }
    }

    public static int getActiveModemType() {
        if (!WorldPhoneUtil.isWorldPhoneSupport() || WorldPhoneUtil.isWorldModeSupport()) {
            sCurrentModemType = Integer.valueOf(SystemProperties.get("vendor.ril.active.md", Integer.toString(0))).intValue();
        }
        logd("[getActiveModemType] " + sCurrentModemType);
        return sCurrentModemType;
    }

    public static int initActiveModemType() {
        sCurrentModemType = Integer.valueOf(SystemProperties.get("vendor.ril.active.md", Integer.toString(0))).intValue();
        logd("[initActiveModemType] " + sCurrentModemType);
        return sCurrentModemType;
    }

    public static boolean isModemTypeSwitching() {
        logd("[isModemTypeSwitching]: sModemSwitchingFlag = " + sModemSwitchingFlag);
        return sModemSwitchingFlag != 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void logd(String str) {
        Rlog.d("WORLDMODE", "[MSH]" + str);
    }

    public static String modemToString(int i) {
        if (i == 3) {
            return "WG";
        }
        if (i == 4) {
            return "TG";
        }
        if (i == 5) {
            return "FDD CSFB";
        }
        if (i == 6) {
            return "TDD CSFB";
        }
        return i == 0 ? "UNKNOWN" : "Invalid modem type";
    }

    public static void reloadModem(int i) {
        int majorSim = WorldPhoneUtil.getMajorSim();
        if (majorSim >= 0 && majorSim <= 3) {
            reloadModem(sCi[majorSim], i);
            return;
        }
        logd("Invalid MajorSIM id" + majorSim);
    }

    public static void reloadModem(MtkRIL mtkRIL, int i) {
        logd("[reloadModem]");
        if (mtkRIL.getRadioState() == 2) {
            logd("Radio unavailable, can not reload modem");
        } else {
            mtkRIL.reloadModemType(i, null);
        }
    }

    public static void reloadModemCauseType(MtkRIL mtkRIL, int i) {
        logd("[reloadModemCauseType] " + i);
        mtkRIL.reloadModemType(i, null);
    }

    public static void setActiveModemType(int i) {
        sCurrentModemType = i;
        logd("[setActiveModemType] " + modemToString(sCurrentModemType));
    }

    private static boolean setModemType(int i, MtkRIL mtkRIL, int i2) {
        if (mtkRIL.getRadioState() == 2) {
            logd("Radio unavailable, can not switch world mode");
            return false;
        }
        if (i2 < 3 || i2 > 6) {
            logd("Invalid modemType:" + i2);
            return false;
        }
        logd("silent reboot isStroeModemType=" + i);
        mtkRIL.reloadModemType(i2, null);
        if (1 == i) {
            mtkRIL.storeModemType(i2, null);
        }
        mtkRIL.setVendorSetting(10, Integer.toString(1), null);
        mtkRIL.restartRILD(null);
        return true;
    }

    public static void switchModem(int i) {
        int majorSim = WorldPhoneUtil.getMajorSim();
        logd("protocolSim: " + majorSim);
        if (majorSim < 0 || majorSim > 3) {
            logd("switchModem protocolSim is invalid");
        } else {
            switchModem(sCi[majorSim], i);
        }
    }

    public static void switchModem(int i, int i2) {
        int majorSim = WorldPhoneUtil.getMajorSim();
        logd("protocolSim: " + majorSim);
        if (majorSim < 0 || majorSim > 3) {
            logd("switchModem protocolSim is invalid");
        } else {
            switchModem(i, sCi[majorSim], i2);
        }
    }

    public static void switchModem(int i, MtkRIL mtkRIL, int i2) {
        logd("[switchModem]");
        if (mtkRIL.getRadioState() == 2) {
            logd("Radio unavailable, can not switch modem");
            return;
        }
        int activeModemType = getActiveModemType();
        sCurrentModemType = activeModemType;
        if (i2 != activeModemType) {
            sModemSwitchingFlag = 1;
            mtkRIL.registerForNotAvailable(sWorldPhoneHandler, 2, null);
            mtkRIL.registerForRilConnected(sWorldPhoneHandler, 1, null);
            setModemType(i, mtkRIL, i2);
            setActiveModemType(i2);
            logd("Broadcast intent ACTION_MD_TYPE_CHANGE");
            Intent intent = new Intent(ACTION_MD_TYPE_CHANGE);
            intent.putExtra(EXTRA_MD_TYPE, i2);
            sContext.sendBroadcast(intent);
            return;
        }
        if (i2 == 3) {
            logd("Already in WG modem");
            return;
        }
        if (i2 == 4) {
            logd("Already in TG modem");
        } else if (i2 == 5) {
            logd("Already in FDD CSFB modem");
        } else if (i2 == 6) {
            logd("Already in TDD CSFB modem");
        }
    }

    public static void switchModem(MtkRIL mtkRIL, int i) {
        logd("[switchModem] need store modem type");
        switchModem(1, mtkRIL, i);
    }
}

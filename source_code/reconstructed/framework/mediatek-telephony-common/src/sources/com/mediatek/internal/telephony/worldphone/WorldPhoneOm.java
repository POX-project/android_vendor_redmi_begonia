package com.mediatek.internal.telephony.worldphone;

import android.R;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telecom.ITelecomService;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.IccCardConstants;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.ModemSwitchHandler;
import com.mediatek.internal.telephony.MtkRIL;
import com.mediatek.internal.telephony.RadioCapabilitySwitchUtil;
import com.mediatek.internal.telephony.ppl.PplSmsFilterExtension;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.ArrayList;
import java.util.Iterator;
import mediatek.telephony.MtkServiceState;

/* JADX INFO: loaded from: classes.dex */
public class WorldPhoneOm extends Handler implements IWorldPhone {
    private static final int EMSR_STANDBY_TIMER = 8;
    private static final int[] FDD_STANDBY_TIMER;
    private static final String[] MCC_TABLE_DOMESTIC;
    private static final String[] PLMN_TABLE_TYPE1;
    private static final String[] PLMN_TABLE_TYPE1_EXT;
    private static final String[] PLMN_TABLE_TYPE3;
    private static final int PROJECT_SIM_NUM;
    private static final int[] TDD_STANDBY_TIMER;
    private static Phone[] sActivePhones;
    private static int sBtSapState;
    private static MtkRIL[] sCi;
    private static Context sContext;
    private static int sDataRegState;
    private static int sDefaultBootuUpModem;
    private static Phone sDefultPhone;
    private static int sDenyReason;
    private static int sFddStandByCounter;
    private static boolean[] sFirstSelect;
    private static IccRecords[] sIccRecordsInstance;
    private static String[] sImsi;
    private static boolean[] sIsInvalidSim;
    private static boolean sIsResumeCampingFail1;
    private static boolean sIsResumeCampingFail2;
    private static boolean sIsResumeCampingFail3;
    private static boolean sIsResumeCampingFail4;
    private static int sIsWaintInFddTimeOut;
    private static int sIsWaintInTddTimeOut;
    private static String sLastPlmn;
    private static Object sLock = new Object();
    private static int sMajorSim;
    private static ArrayList<String> sMccDomestic;
    private static ModemSwitchHandler sModemSwitchHandler;
    private static String[] sNwPlmnStrings;
    private static String sPlmnSs;
    private static ArrayList<String> sPlmnType1;
    private static ArrayList<String> sPlmnType1Ext;
    private static ArrayList<String> sPlmnType3;
    private static Phone[] sProxyPhones;
    private static int sRegion;
    private static int sRilDataRadioTechnology;
    private static int sRilDataRegState;
    private static int sRilVoiceRadioTechnology;
    private static int sRilVoiceRegState;
    private static MtkServiceState sServiceState;
    private static int sSimLocked;
    private static int sSimLockedSlotId;
    private static int[] sSuspendId;
    private static boolean[] sSuspendWaitImsi;
    private static int sTddStandByCounter;
    private static UiccController sUiccController;
    private static int sUserType;
    private static boolean sVoiceCapable;
    private static int sVoiceRegState;
    private static boolean sWaitInEmsrResume;
    private static boolean sWaitInFdd;
    private static boolean sWaitInTdd;
    private static CommandsInterface[] smCi;
    private boolean mIsRegisterEccStateReceiver = false;
    private final BroadcastReceiver mWorldPhoneReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.worldphone.WorldPhoneOm.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            WorldPhoneOm.logd("Action: " + action);
            if (action.equals("android.telephony.action.SIM_APPLICATION_STATE_CHANGED")) {
                int intExtra = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
                int intExtra2 = intent.getIntExtra("slot", 0);
                int unused = WorldPhoneOm.sMajorSim = WorldPhoneUtil.getMajorSim();
                WorldPhoneOm.logd("slotId:" + intExtra2 + " state:" + intExtra + " sMajorSim:" + WorldPhoneOm.sMajorSim + "sSimLockedSlotId:" + WorldPhoneOm.sSimLockedSlotId);
                WorldPhoneOm.this.handleSimApplicationStateChanged(intExtra2, intExtra);
                return;
            }
            if (action.equals("android.telephony.action.SIM_CARD_STATE_CHANGED")) {
                int intExtra3 = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
                int intExtra4 = intent.getIntExtra("slot", 0);
                int unused2 = WorldPhoneOm.sMajorSim = WorldPhoneUtil.getMajorSim();
                WorldPhoneOm.logd("slotId: " + intExtra4 + " state: " + intExtra3 + " sMajorSim:" + WorldPhoneOm.sMajorSim);
                WorldPhoneOm.this.handleSimCardStateChanged(intExtra4, intExtra3);
                return;
            }
            if (action.equals(IWorldPhone.ACTION_SHUTDOWN_IPO)) {
                if (WorldPhoneOm.sDefaultBootuUpModem == 100) {
                    if (WorldPhoneUtil.isLteSupport()) {
                        ModemSwitchHandler.reloadModem(WorldPhoneOm.sCi[0], 5);
                        WorldPhoneOm.logd("Reload to FDD CSFB modem");
                        return;
                    } else {
                        ModemSwitchHandler.reloadModem(WorldPhoneOm.sCi[0], 3);
                        WorldPhoneOm.logd("Reload to WG modem");
                        return;
                    }
                }
                if (WorldPhoneOm.sDefaultBootuUpModem == 101) {
                    if (WorldPhoneUtil.isLteSupport()) {
                        ModemSwitchHandler.reloadModem(WorldPhoneOm.sCi[0], 6);
                        WorldPhoneOm.logd("Reload to TDD CSFB modem");
                        return;
                    } else {
                        ModemSwitchHandler.reloadModem(WorldPhoneOm.sCi[0], 4);
                        WorldPhoneOm.logd("Reload to TG modem");
                        return;
                    }
                }
                return;
            }
            if (action.equals(IWorldPhone.ACTION_ADB_SWITCH_MODEM)) {
                int intExtra5 = intent.getIntExtra(ModemSwitchHandler.EXTRA_MD_TYPE, 0);
                WorldPhoneOm.logd("toModem: " + intExtra5);
                if (intExtra5 == 3 || intExtra5 == 4 || intExtra5 == 5 || intExtra5 == 6) {
                    WorldPhoneOm.this.setModemSelectionMode(0, intExtra5);
                    return;
                } else {
                    WorldPhoneOm.this.setModemSelectionMode(1, intExtra5);
                    return;
                }
            }
            if (action.equals("android.intent.action.AIRPLANE_MODE")) {
                if (intent.getBooleanExtra("state", false)) {
                    WorldPhoneOm.logd("Enter flight mode");
                    for (int i = 0; i < WorldPhoneOm.PROJECT_SIM_NUM; i++) {
                        WorldPhoneOm.sFirstSelect[i] = true;
                    }
                    return;
                }
                WorldPhoneOm.logd("Leave flight mode");
                String unused3 = WorldPhoneOm.sLastPlmn = null;
                for (int i2 = 0; i2 < WorldPhoneOm.PROJECT_SIM_NUM; i2++) {
                    WorldPhoneOm.sIsInvalidSim[i2] = false;
                }
                return;
            }
            if (action.equals("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE")) {
                int unused4 = WorldPhoneOm.sMajorSim = WorldPhoneUtil.getMajorSim();
                if (WorldPhoneUtil.isSimSwitching()) {
                    WorldPhoneUtil.setSimSwitchingFlag(false);
                    ModemSwitchHandler.setActiveModemType(WorldPhoneUtil.getToModemType());
                }
                WorldPhoneOm.this.handleSimSwitched();
                return;
            }
            if (action.equals(IWorldPhone.ACTION_TEST_WORLDPHONE)) {
                WorldPhoneOm.this.handleWorldPhoneTest(intent.getIntExtra(IWorldPhone.EXTRA_FAKE_USER_TYPE, 0), intent.getIntExtra(IWorldPhone.EXTRA_FAKE_REGION, 0));
                return;
            }
            if (action.equals(IWorldPhone.ACTION_SAP_CONNECTION_STATE_CHANGED)) {
                int intExtra6 = intent.getIntExtra("android.bluetooth.profile.extra.STATE", 0);
                if (intExtra6 == 2) {
                    WorldPhoneOm.logd("BT_SAP connection state is CONNECTED");
                    int unused5 = WorldPhoneOm.sBtSapState = 1;
                } else if (intExtra6 == 0) {
                    WorldPhoneOm.logd("BT_SAP connection state is DISCONNECTED");
                    int unused6 = WorldPhoneOm.sBtSapState = 0;
                } else {
                    WorldPhoneOm.logd("BT_SAP connection state is " + intExtra6);
                }
            }
        }
    };
    private Runnable mTddStandByTimerRunnable = new Runnable() { // from class: com.mediatek.internal.telephony.worldphone.WorldPhoneOm.2
        @Override // java.lang.Runnable
        public void run() {
            WorldPhoneOm.access$1408();
            if (WorldPhoneOm.sTddStandByCounter >= WorldPhoneOm.TDD_STANDBY_TIMER.length) {
                int unused = WorldPhoneOm.sTddStandByCounter = WorldPhoneOm.TDD_STANDBY_TIMER.length - 1;
            }
            if (WorldPhoneOm.sBtSapState != 0) {
                WorldPhoneOm.logd("TDD time out but BT SAP is connected, switch not executed!");
                return;
            }
            WorldPhoneOm.logd("TDD time out!");
            int unused2 = WorldPhoneOm.sIsWaintInTddTimeOut = 1;
            WorldPhoneOm.this.handleSwitchModem(100);
        }
    };
    private Runnable mFddStandByTimerRunnable = new Runnable() { // from class: com.mediatek.internal.telephony.worldphone.WorldPhoneOm.3
        @Override // java.lang.Runnable
        public void run() {
            WorldPhoneOm.access$1808();
            if (WorldPhoneOm.sFddStandByCounter >= WorldPhoneOm.FDD_STANDBY_TIMER.length) {
                int unused = WorldPhoneOm.sFddStandByCounter = WorldPhoneOm.FDD_STANDBY_TIMER.length - 1;
            }
            if (WorldPhoneOm.sBtSapState != 0) {
                WorldPhoneOm.logd("FDD time out but BT SAP is connected, switch not executed!");
                return;
            }
            WorldPhoneOm.logd("FDD time out!");
            int unused2 = WorldPhoneOm.sIsWaintInFddTimeOut = 1;
            WorldPhoneOm.this.handleSwitchModem(101);
        }
    };
    private Runnable mEmsrResumeByTimerRunnable = new Runnable() { // from class: com.mediatek.internal.telephony.worldphone.WorldPhoneOm.4
        @Override // java.lang.Runnable
        public void run() {
            boolean unused = WorldPhoneOm.sWaitInEmsrResume = false;
            int unused2 = WorldPhoneOm.sMajorSim = WorldPhoneUtil.getMajorSim();
            if (WorldPhoneOm.sMajorSim == -99 || WorldPhoneOm.sMajorSim == -1 || !WorldPhoneOm.sSuspendWaitImsi[WorldPhoneOm.sMajorSim]) {
                return;
            }
            WorldPhoneOm.sCi[WorldPhoneOm.sMajorSim].setResumeRegistration(WorldPhoneOm.sSuspendId[WorldPhoneOm.sMajorSim], WorldPhoneOm.this.obtainMessage(WorldPhoneOm.sMajorSim + 70));
        }
    };
    private BroadcastReceiver mWorldPhoneEccStateReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.worldphone.WorldPhoneOm.5
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            WorldPhoneOm.logd("mWorldPhoneEccStateReceiver, received " + intent.getAction());
            if (WorldPhoneOm.this.isEccInProgress()) {
                return;
            }
            WorldPhoneOm.this.unRegisterEccStateReceiver();
            WorldPhoneOm.this.handleSimSwitched();
        }
    };

    static {
        int projectSimNum = WorldPhoneUtil.getProjectSimNum();
        PROJECT_SIM_NUM = projectSimNum;
        FDD_STANDBY_TIMER = new int[]{60};
        TDD_STANDBY_TIMER = new int[]{40};
        PLMN_TABLE_TYPE1 = new String[]{"46000", "46002", "46004", "46007", "46008"};
        PLMN_TABLE_TYPE1_EXT = new String[]{"45412"};
        PLMN_TABLE_TYPE3 = new String[]{"46001", "46006", "46009", "45407", "46003", "46005", "45502", "46011"};
        MCC_TABLE_DOMESTIC = new String[]{RadioCapabilitySwitchUtil.CN_MCC};
        sContext = null;
        sDefultPhone = null;
        sProxyPhones = null;
        sActivePhones = new Phone[projectSimNum];
        smCi = new CommandsInterface[projectSimNum];
        sCi = new MtkRIL[projectSimNum];
        sImsi = new String[projectSimNum];
        sDefaultBootuUpModem = 0;
        sSuspendId = new int[projectSimNum];
        sIsInvalidSim = new boolean[projectSimNum];
        sSuspendWaitImsi = new boolean[projectSimNum];
        sFirstSelect = new boolean[projectSimNum];
        sUiccController = null;
        sIccRecordsInstance = new IccRecords[projectSimNum];
        sModemSwitchHandler = null;
        sSimLockedSlotId = -1;
    }

    public WorldPhoneOm() {
        logd("Constructor invoked");
        sDefultPhone = PhoneFactory.getDefaultPhone();
        sProxyPhones = PhoneFactory.getPhones();
        for (int i = 0; i < PROJECT_SIM_NUM; i++) {
            Phone[] phoneArr = sActivePhones;
            phoneArr[i] = sProxyPhones[i];
            smCi[i] = phoneArr[i].mCi;
            sCi[i] = (MtkRIL) smCi[i];
            sActivePhones[i].registerForServiceStateChanged(this, i + 80, (Object) null);
        }
        for (int i2 = 0; i2 < PROJECT_SIM_NUM; i2++) {
            sCi[i2].setOnPlmnChangeNotification(this, i2 + 10, null);
            sCi[i2].setOnRegistrationSuspended(this, i2 + 30, null);
            sCi[i2].registerForOn(this, i2 + 0, null);
            sCi[i2].setInvalidSimInfo(this, i2 + 60, null);
            if (WorldPhoneUtil.isC2kSupport()) {
                sCi[i2].registerForGmssRatChanged(this, i2 + IWorldPhone.EVENT_WP_GMSS_RAT_CHANGED_1, null);
            }
        }
        sModemSwitchHandler = new ModemSwitchHandler();
        ModemSwitchHandler.getActiveModemType();
        IntentFilter intentFilter = new IntentFilter("android.telephony.action.SIM_CARD_STATE_CHANGED");
        intentFilter.addAction("android.telephony.action.SIM_APPLICATION_STATE_CHANGED");
        intentFilter.addAction("android.intent.action.AIRPLANE_MODE");
        intentFilter.addAction(IWorldPhone.ACTION_SHUTDOWN_IPO);
        intentFilter.addAction(IWorldPhone.ACTION_ADB_SWITCH_MODEM);
        intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
        intentFilter.addAction(IWorldPhone.ACTION_SAP_CONNECTION_STATE_CHANGED);
        intentFilter.addAction(IWorldPhone.ACTION_TEST_WORLDPHONE);
        Phone phone = sDefultPhone;
        if (phone != null) {
            sContext = phone.getContext();
        } else {
            logd("DefaultPhone = null");
        }
        sVoiceCapable = sContext.getResources().getBoolean(R.bool.config_cecSetMenuLanguageEnabled_default);
        sContext.registerReceiver(this.mWorldPhoneReceiver, intentFilter);
        sTddStandByCounter = 0;
        sFddStandByCounter = 0;
        sWaitInTdd = false;
        sWaitInFdd = false;
        sWaitInEmsrResume = false;
        sRegion = 0;
        sLastPlmn = null;
        sBtSapState = 0;
        sIsWaintInTddTimeOut = 0;
        sIsWaintInFddTimeOut = 0;
        resetAllProperties();
        sPlmnType1 = new ArrayList<>();
        sPlmnType1Ext = new ArrayList<>();
        sPlmnType3 = new ArrayList<>();
        sMccDomestic = new ArrayList<>();
        loadDefaultData();
        if (WorldPhoneUtil.getModemSelectionMode() == 0) {
            logd("Auto select disable");
            SystemProperties.set(IWorldPhone.WORLD_PHONE_AUTO_SELECT_MODE, Integer.toString(0));
        } else {
            logd("Auto select enable");
            SystemProperties.set(IWorldPhone.WORLD_PHONE_AUTO_SELECT_MODE, Integer.toString(1));
        }
        int[] iArr = FDD_STANDBY_TIMER;
        int i3 = sFddStandByCounter;
        iArr[i3] = SystemProperties.getInt(IWorldPhone.WORLD_PHONE_FDD_MODEM_TIMER, iArr[i3]);
        SystemProperties.set(IWorldPhone.WORLD_PHONE_FDD_MODEM_TIMER, Integer.toString(FDD_STANDBY_TIMER[sFddStandByCounter]));
        logd("FDD_STANDBY_TIMER = " + FDD_STANDBY_TIMER[sFddStandByCounter] + "s");
        StringBuilder sb = new StringBuilder();
        sb.append("sDefaultBootuUpModem = ");
        sb.append(sDefaultBootuUpModem);
        logd(sb.toString());
    }

    static /* synthetic */ int access$1408() {
        int i = sTddStandByCounter;
        sTddStandByCounter = i + 1;
        return i;
    }

    static /* synthetic */ int access$1808() {
        int i = sFddStandByCounter;
        sFddStandByCounter = i + 1;
        return i;
    }

    private boolean containsCdma(int i) {
        return (i & 4) > 0 || (i & 8) > 0;
    }

    private int getRegion(String str) {
        if (str == null || str.equals("") || str.length() < 3) {
            logd("[getRegion] Invalid PLMN");
            return 0;
        }
        String strSubstring = str.substring(0, 3);
        Iterator<String> it = sMccDomestic.iterator();
        while (it.hasNext()) {
            if (strSubstring.equals(it.next())) {
                logd("[getRegion] REGION_DOMESTIC");
                return 1;
            }
        }
        logd("[getRegion] REGION_FOREIGN");
        return 2;
    }

    private boolean getSimLockState() {
        int simLockPolicy = MtkTelephonyManagerEx.getDefault().getSimLockPolicy();
        return simLockPolicy >= 1 && simLockPolicy <= 7;
    }

    private int getUserType(String str) {
        if (str == null || str.equals("")) {
            logd("[getUserType] null IMSI");
            return 0;
        }
        String strSubstring = str.substring(0, 5);
        Iterator<String> it = sPlmnType1.iterator();
        while (it.hasNext()) {
            if (strSubstring.equals(it.next())) {
                logd("[getUserType] Type1 user");
                return 1;
            }
        }
        Iterator<String> it2 = sPlmnType1Ext.iterator();
        while (it2.hasNext()) {
            if (strSubstring.equals(it2.next())) {
                logd("[getUserType] Extended Type1 user");
                return 1;
            }
        }
        Iterator<String> it3 = sPlmnType3.iterator();
        while (it3.hasNext()) {
            if (strSubstring.equals(it3.next())) {
                logd("[getUserType] Type3 user");
                return 3;
            }
        }
        logd("[getUserType] Type2 user");
        return 2;
    }

    private void handleGmssRatChange(AsyncResult asyncResult, int i) {
        sMajorSim = WorldPhoneUtil.getMajorSim();
        logd("Slot:" + i + " sMajorSim:" + sMajorSim);
        if (asyncResult.exception != null || asyncResult.result == null) {
            logd("AsyncResult is wrong " + asyncResult.exception);
            return;
        }
        String string = Integer.toString(((int[]) asyncResult.result)[1]);
        logd("[handleGmssRatChange] mccString=" + string);
        if (i == sMajorSim && string.length() >= 3) {
            initNWPlmnString();
            sNwPlmnStrings[0] = string;
        }
        if (WorldPhoneUtil.getModemSelectionMode() == 1) {
            int region = getRegion(string);
            sRegion = region;
            if (sUserType == 3 || region != 2 || sMajorSim == -1) {
                return;
            }
            handleSwitchModem(100);
        }
    }

    private void handleInvalidSimNotify(int i, AsyncResult asyncResult) {
        logd("Slot" + i);
        if (asyncResult.exception != null || asyncResult.result == null) {
            logd("AsyncResult is wrong " + asyncResult.exception);
            return;
        }
        String[] strArr = (String[]) asyncResult.result;
        String str = strArr[0];
        int i2 = Integer.parseInt(strArr[1]);
        int i3 = Integer.parseInt(strArr[2]);
        int i4 = Integer.parseInt(strArr[3]);
        int i5 = SystemProperties.getInt("vendor.gsm.gcf.testmode", 0);
        if (i5 != 0) {
            logd("Invalid SIM notified during test mode: " + i5);
            return;
        }
        logd("testMode:" + i5 + ", cause: " + i4 + ", cs_invalid: " + i2 + ", ps_invalid: " + i3 + ", plmn: " + str);
        if (sVoiceCapable && i2 == 1 && sLastPlmn == null) {
            logd("CS reject, invalid SIM");
            sIsInvalidSim[i] = true;
        } else if (i3 == 1 && sLastPlmn == null) {
            logd("PS reject, invalid SIM");
            sIsInvalidSim[i] = true;
        }
    }

    private void handleNoService() {
        logd("[handleNoService]+ Can not find service");
        logd(PplSmsFilterExtension.INSTRUCTION_KEY_TYPE + sUserType + " user");
        logd(WorldPhoneUtil.regionToString(sRegion));
        int activeModemType = ModemSwitchHandler.getActiveModemType();
        if (sProxyPhones[sMajorSim].getIccCard().getState() == IccCardConstants.State.READY) {
            int i = sUserType;
            if (i == 1) {
                if (activeModemType == 6 || activeModemType == 4) {
                    if (TDD_STANDBY_TIMER[sTddStandByCounter] < 0) {
                        logd("Standby in TDD modem");
                    } else if (sWaitInTdd) {
                        logd("Timer already set:" + TDD_STANDBY_TIMER[sTddStandByCounter] + "s");
                    } else {
                        sWaitInTdd = true;
                        logd("Wait " + TDD_STANDBY_TIMER[sTddStandByCounter] + "s. Timer index = " + sTddStandByCounter);
                        postDelayed(this.mTddStandByTimerRunnable, ((long) TDD_STANDBY_TIMER[sTddStandByCounter]) * 1000);
                    }
                } else if (activeModemType == 5 || activeModemType == 3) {
                    if (FDD_STANDBY_TIMER[sFddStandByCounter] < 0) {
                        logd("Standby in FDD modem");
                    } else if (sWaitInFdd) {
                        logd("Timer already set:" + FDD_STANDBY_TIMER[sFddStandByCounter] + "s");
                    } else {
                        sWaitInFdd = true;
                        logd("Wait " + FDD_STANDBY_TIMER[sFddStandByCounter] + "s. Timer index = " + sFddStandByCounter);
                        postDelayed(this.mFddStandByTimerRunnable, ((long) FDD_STANDBY_TIMER[sFddStandByCounter]) * 1000);
                    }
                }
            } else if (i != 2 && i != 3) {
                logd("Unknow user type");
            } else if (activeModemType == 5 || activeModemType == 3) {
                logd("Standby in FDD modem");
            } else {
                logd("Should not enter this state");
            }
        } else {
            logd("IccState not ready");
        }
        logd("[handleNoService]-");
    }

    private void handlePlmnChange(AsyncResult asyncResult, int i) {
        String str = SystemProperties.get("persist.vendor.radio.simswitch", "");
        if (str == null || str.equals("")) {
            sMajorSim = i;
            logd("[getMajorSim]: fail to get major SIM");
        } else {
            sMajorSim = Integer.parseInt(str) - 1;
            logd("[getMajorSim]: " + sMajorSim);
        }
        logd("Slot:" + i + " sMajorSim:" + sMajorSim);
        if (asyncResult.exception != null || asyncResult.result == null) {
            logd("AsyncResult is wrong " + asyncResult.exception);
            return;
        }
        String[] strArr = (String[]) asyncResult.result;
        if (i == sMajorSim) {
            sNwPlmnStrings = strArr;
        }
        for (int i2 = 0; i2 < strArr.length; i2++) {
            logd("plmnString[" + i2 + "]=" + strArr[i2]);
        }
        if (WorldPhoneUtil.getModemSelectionMode() == 1) {
            sRegion = getRegion(strArr[0]);
            if (sMajorSim == i && sUserType == 1 && sDenyReason != 2) {
                searchForDesignateService(strArr[0]);
            }
            if (sUserType == 3 || sRegion != 2 || sMajorSim == -1) {
                return;
            }
            handleSwitchModem(100);
        }
    }

    private void handleRadioOn(int i) {
        sMajorSim = WorldPhoneUtil.getMajorSim();
        logd("handleRadioOn Slot:" + i + " sMajorSim:" + sMajorSim);
        sIsInvalidSim[i] = false;
        if (i == 0) {
            if (sIsResumeCampingFail1) {
                logd("try to resume camping again");
                sCi[i].setResumeRegistration(sSuspendId[i], null);
                sIsResumeCampingFail1 = false;
                return;
            }
            return;
        }
        if (i == 1) {
            if (sIsResumeCampingFail2) {
                logd("try to resume camping again");
                sCi[i].setResumeRegistration(sSuspendId[i], null);
                sIsResumeCampingFail2 = false;
                return;
            }
            return;
        }
        if (i == 2) {
            if (sIsResumeCampingFail3) {
                logd("try to resume camping again");
                sCi[i].setResumeRegistration(sSuspendId[i], null);
                sIsResumeCampingFail3 = false;
                return;
            }
            return;
        }
        if (i != 3) {
            logd("unknow slotid");
        } else if (sIsResumeCampingFail4) {
            logd("try to resume camping again");
            sCi[i].setResumeRegistration(sSuspendId[i], null);
            sIsResumeCampingFail4 = false;
        }
    }

    private void handleRegistrationSuspend(AsyncResult asyncResult, int i) {
        logd("Registration Suspend Slot" + i);
        if (ModemSwitchHandler.isModemTypeSwitching()) {
            return;
        }
        if (asyncResult.exception != null || asyncResult.result == null) {
            logd("AsyncResult is wrong " + asyncResult.exception);
            return;
        }
        sSuspendId[i] = ((int[]) asyncResult.result)[0];
        logd("Suspending with Id=" + sSuspendId[i]);
        if (WorldPhoneUtil.getModemSelectionMode() != 1 || sMajorSim != i) {
            logd("Not major slot or in maual selection mode, camp on OK");
            sCi[i].setResumeRegistration(sSuspendId[i], null);
        } else {
            if (sUserType != 0) {
                resumeCampingProcedure(i, true);
                return;
            }
            sSuspendWaitImsi[i] = true;
            if (sWaitInEmsrResume) {
                logd("Emsr Resume Timer already set:8s");
            } else {
                sWaitInEmsrResume = true;
                logd("Wait EMSR:8s");
                postDelayed(this.mEmsrResumeByTimerRunnable, 8000L);
            }
            logd("User type unknown, wait for IMSI");
        }
    }

    private void handleServiceStateChange(AsyncResult asyncResult, int i) {
        sMajorSim = WorldPhoneUtil.getMajorSim();
        logd("Slot:" + i + " sMajorSim:" + sMajorSim + "RadioState:" + sCi[i].getRadioState());
        if (asyncResult.exception != null || asyncResult.result == null) {
            logd("AsyncResult is wrong " + asyncResult.exception);
            return;
        }
        MtkServiceState mtkServiceState = (MtkServiceState) asyncResult.result;
        sServiceState = mtkServiceState;
        if (mtkServiceState == null) {
            logd("Null sServiceState");
            return;
        }
        sPlmnSs = mtkServiceState.getOperatorNumeric();
        sVoiceRegState = sServiceState.getVoiceRegState();
        sRilVoiceRegState = sServiceState.getRilVoiceRegState();
        sRilVoiceRadioTechnology = sServiceState.getRilVoiceRadioTechnology();
        sDataRegState = sServiceState.getDataRegState();
        sRilDataRegState = sServiceState.getRilDataRegState();
        sRilDataRadioTechnology = sServiceState.getRilDataRadioTechnology();
        logd("slotId: " + i + ", sMajorSim: " + sMajorSim + ", sPlmnSs: " + sPlmnSs + ", sVoiceRegState: " + sVoiceRegState);
        StringBuilder sb = new StringBuilder();
        sb.append("sRilVoiceRegState: ");
        sb.append(sRilVoiceRegState);
        sb.append(", sRilVoiceRadioTech: ");
        sb.append(MtkServiceState.rilRadioTechnologyToString(sRilVoiceRadioTechnology));
        sb.append(", sDataRegState: ");
        sb.append(sDataRegState);
        logd(sb.toString());
        logd("sRilDataRegState: " + sRilDataRegState + ", sRilDataRadioTech: , " + MtkServiceState.rilRadioTechnologyToString(sRilDataRadioTechnology));
        ModemSwitchHandler.getActiveModemType();
        if (i == sMajorSim) {
            if (WorldPhoneUtil.getModemSelectionMode() != 1) {
                if (isInService()) {
                    logd("reset sIsInvalidSim in manual mode");
                    sLastPlmn = sPlmnSs;
                    sIsInvalidSim[i] = false;
                    return;
                }
                return;
            }
            if (isNoService() && sCi[i].getRadioState() != 2) {
                handleNoService();
            } else if (isInService()) {
                sLastPlmn = sPlmnSs;
                removeModemStandByTimer();
                logd("reset sIsInvalidSim");
                sIsInvalidSim[i] = false;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSimApplicationStateChanged(int i, int i2) {
        if (true == WorldPhoneUtil.getSimLockedState(i2) && WorldPhoneUtil.getModemSelectionMode() == 1 && (i != sMajorSim || i == sSimLockedSlotId)) {
            boolean simLockState = getSimLockState();
            logd("handle sim applicatin state changed," + simLockState + "," + i2);
            if (simLockState && i2 == 4) {
                sSimLocked = 0;
                sSimLockedSlotId = -1;
            } else {
                sSimLocked = 1;
                sSimLockedSlotId = i;
            }
        }
        if (!WorldPhoneUtil.getSimLockedState(i2) && WorldPhoneUtil.getModemSelectionMode() == 1 && ((i != sMajorSim || i == sSimLockedSlotId) && sSimLocked == 1)) {
            logd("retry to world mode change after not major sim pin unlock");
            sSimLocked = 0;
            sSimLockedSlotId = -1;
            handleSimSwitched();
        }
        if (i2 == 10) {
            logd("reset sIsInvalidSim by solt:" + i);
            sIsInvalidSim[i] = false;
            UiccController uiccController = UiccController.getInstance();
            sUiccController = uiccController;
            if (uiccController == null) {
                logd("Null sUiccController");
                return;
            }
            sIccRecordsInstance[i] = sProxyPhones[i].getIccCard().getIccRecords();
            IccRecords[] iccRecordsArr = sIccRecordsInstance;
            if (iccRecordsArr[i] == null) {
                logd("Null sIccRecordsInstance");
                return;
            }
            sImsi[i] = iccRecordsArr[i].getIMSI();
            if (WorldPhoneUtil.getModemSelectionMode() != 1 || i != sMajorSim) {
                logd("Not major SIM or in maual selection mode");
                getUserType(sImsi[i]);
                boolean[] zArr = sSuspendWaitImsi;
                if (zArr[i]) {
                    zArr[i] = false;
                    logd("IMSI for slot" + i + ", resuming with ID:" + sSuspendId[i]);
                    sCi[i].setResumeRegistration(sSuspendId[i], null);
                    return;
                }
                return;
            }
            logd("Major SIM");
            int userType = getUserType(sImsi[i]);
            sUserType = userType;
            boolean[] zArr2 = sFirstSelect;
            if (zArr2[i]) {
                zArr2[i] = false;
                if (userType == 1) {
                    int i3 = sRegion;
                    if (i3 == 1) {
                        handleSwitchModem(101);
                    } else if (i3 == 2) {
                        handleSwitchModem(100);
                    } else {
                        logd("Region unknown");
                    }
                } else if (userType == 2 || userType == 3) {
                    handleSwitchModem(100);
                }
            }
            boolean[] zArr3 = sSuspendWaitImsi;
            if (zArr3[i]) {
                zArr3[i] = false;
                if (sNwPlmnStrings == null) {
                    logd("sNwPlmnStrings is Null");
                    return;
                }
                logd("IMSI fot slot" + i + " now ready, resuming PLMN:" + sNwPlmnStrings[0] + " with ID:" + sSuspendId[i] + " sWaitInEmsrResume:" + sWaitInEmsrResume);
                if (sWaitInEmsrResume) {
                    resumeCampingProcedure(i, true);
                } else {
                    resumeCampingProcedure(i, false);
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSimCardStateChanged(int i, int i2) {
        if (i2 == 1) {
            sLastPlmn = null;
            sImsi[i] = "";
            sFirstSelect[i] = true;
            sSuspendWaitImsi[i] = false;
            if (i != sMajorSim) {
                logd("SIM" + i + " is not major SIM");
                return;
            }
            logd("Major SIM removed, no world phone service");
            removeModemStandByTimer();
            sUserType = 0;
            sDenyReason = 1;
            sMajorSim = -99;
            sRegion = 0;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSimSwitched() {
        if (sMajorSim == -1) {
            logd("Major capability turned off");
            removeModemStandByTimer();
            sUserType = 0;
            return;
        }
        if (WorldPhoneUtil.getModemSelectionMode() == 0) {
            logd("Auto modem selection disabled");
            removeModemStandByTimer();
            return;
        }
        if (sMajorSim == -99) {
            logd("Major SIM unknown");
            return;
        }
        logd("Major capability in slot" + sMajorSim);
        String[] strArr = sImsi;
        int i = sMajorSim;
        if (strArr[i] == null || strArr[i].equals("")) {
            logd("Major slot IMSI not ready");
            sUserType = 0;
            return;
        }
        int userType = getUserType(sImsi[sMajorSim]);
        sUserType = userType;
        if (userType != 1) {
            if (userType != 2 && userType != 3) {
                logd("Unknown user type");
                return;
            } else {
                sFirstSelect[sMajorSim] = false;
                handleSwitchModem(100);
                return;
            }
        }
        String[] strArr2 = sNwPlmnStrings;
        if (strArr2 != null) {
            sRegion = getRegion(strArr2[0]);
        }
        int i2 = sRegion;
        if (i2 == 1) {
            sFirstSelect[sMajorSim] = false;
            handleSwitchModem(101);
        } else if (i2 != 2) {
            logd("Unknown region");
        } else {
            sFirstSelect[sMajorSim] = false;
            handleSwitchModem(100);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean handleSwitchModem(int i) {
        int majorSim = WorldPhoneUtil.getMajorSim();
        if (sIsWaintInFddTimeOut != 0 || sIsWaintInTddTimeOut != 0) {
            sIsWaintInFddTimeOut = 0;
            sIsWaintInTddTimeOut = 0;
        } else if (isEccInProgress()) {
            logd("[handleSwitchModem]In ECC:" + this.mIsRegisterEccStateReceiver);
            if (!this.mIsRegisterEccStateReceiver) {
                registerEccStateReceiver();
            }
            return false;
        }
        if (WorldPhoneUtil.getModemSelectionMode() == 1 && WorldPhoneUtil.isCdmaLteDcSupport() && !isNeedSwitchModem(majorSim)) {
            logd("[handleSwitchModem]No need to handle, switch not executed!");
            return false;
        }
        if (sSimLocked == 1) {
            logd("sim has been locked!");
            return false;
        }
        if (majorSim >= 0 && sIsInvalidSim[majorSim] && WorldPhoneUtil.getModemSelectionMode() == 1) {
            logd("[handleSwitchModem] Invalid SIM, switch not executed!");
            return false;
        }
        if (i == 101) {
            i = WorldPhoneUtil.isLteSupport() ? 6 : 4;
        } else if (i == 100) {
            i = WorldPhoneUtil.isLteSupport() ? 5 : 3;
        }
        if (i == ModemSwitchHandler.getActiveModemType()) {
            if (i == 3) {
                logd("Already in WG modem");
            } else if (i == 4) {
                logd("Already in TG modem");
            } else if (i == 5) {
                logd("Already in FDD CSFB modem");
            } else if (i == 6) {
                logd("Already in TDD CSFB modem");
            }
            return false;
        }
        if (WorldPhoneUtil.getModemSelectionMode() == 0) {
            logd("[handleSwitchModem] Auto select disable, storing modem type: " + i);
            sCi[0].storeModemType(i, null);
        } else {
            int i2 = sDefaultBootuUpModem;
            if (i2 == 0) {
                logd("[handleSwitchModem] Storing modem type: " + i);
                sCi[0].storeModemType(i, null);
            } else if (i2 == 100) {
                if (WorldPhoneUtil.isLteSupport()) {
                    logd("[handleSwitchModem] Storing modem type: 5");
                    sCi[0].storeModemType(5, null);
                } else {
                    logd("[handleSwitchModem] Storing modem type: 3");
                    sCi[0].storeModemType(3, null);
                }
            } else if (i2 == 101) {
                if (WorldPhoneUtil.isLteSupport()) {
                    logd("[handleSwitchModem] Storing modem type: 6");
                    sCi[0].storeModemType(6, null);
                } else {
                    logd("[handleSwitchModem] Storing modem type: 4");
                    sCi[0].storeModemType(4, null);
                }
            }
        }
        for (int i3 = 0; i3 < PROJECT_SIM_NUM; i3++) {
            if (sActivePhones[i3].getState() != PhoneConstants.State.IDLE) {
                logd("Phone" + i3 + " is not idle, modem switch not allowed");
                return false;
            }
        }
        removeModemStandByTimer();
        if (i == 3) {
            logd("Switching to WG modem");
        } else if (i == 4) {
            logd("Switching to TG modem");
        } else if (i == 5) {
            logd("Switching to FDD CSFB modem");
        } else if (i == 6) {
            logd("Switching to TDD CSFB modem");
        }
        if (!WorldPhoneUtil.isSimSwitching() || i != WorldPhoneUtil.getToModemType()) {
            ModemSwitchHandler.switchModem(0, i);
            resetNetworkProperties();
            return true;
        }
        logd("sim switching, already will to set modem:" + i);
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleWorldPhoneTest(int i, int i2) {
        boolean z = false;
        if (i == 0 && i2 == 0) {
            logd("Leave ADB Test mode");
            sPlmnType1.clear();
            sPlmnType1Ext.clear();
            sPlmnType3.clear();
            sMccDomestic.clear();
            loadDefaultData();
            return;
        }
        int majorSim = WorldPhoneUtil.getMajorSim();
        sMajorSim = majorSim;
        if (majorSim == -99 || majorSim == -1) {
            logd("sMajorSim is Unknown or Capability OFF");
        } else {
            String str = sImsi[majorSim];
            if (str == null || str.equals("")) {
                logd("Imsi of sMajorSim is unknown");
            } else {
                String strSubstring = str.substring(0, 5);
                if (i == 1) {
                    sPlmnType1.add(strSubstring);
                    z = true;
                } else if (i != 3) {
                    logd("Unknown fakeUserType:" + i);
                } else {
                    sPlmnType3.add(strSubstring);
                    z = true;
                }
            }
            String str2 = sNwPlmnStrings[0];
            if (str2 == null || str2.equals("") || str2.length() < 5) {
                logd("Invalid sNwPlmnStrings");
            } else {
                String strSubstring2 = str2.substring(0, 3);
                if (i2 == 1) {
                    sMccDomestic.add(strSubstring2);
                    z = true;
                } else if (i2 == 2) {
                    sMccDomestic.remove(strSubstring2);
                    z = true;
                } else {
                    logd("Unknown fakeRegion:" + i2);
                }
            }
        }
        if (z) {
            logd("sPlmnType1:" + sPlmnType1);
            logd("sPlmnType1Ext:" + sPlmnType1Ext);
            logd("sPlmnType3:" + sPlmnType3);
            logd("sMccDomestic:" + sMccDomestic);
            handleRadioTechModeSwitch();
        }
    }

    private static synchronized void initNWPlmnString() {
        if (sNwPlmnStrings == null) {
            sNwPlmnStrings = new String[1];
        }
    }

    private boolean is3GCdmaCard(int i) {
        return (i & 2) == 0 && (i & 1) == 0 && containsCdma(i);
    }

    private boolean is4GCdmaCard(int i) {
        return (i & 2) > 0 && containsCdma(i);
    }

    private boolean isAllowCampOn(String str, int i) {
        int activeModemType;
        logd("[isAllowCampOn] " + str + "User type: " + sUserType);
        sRegion = getRegion(str);
        if (WorldPhoneUtil.isSimSwitching()) {
            activeModemType = WorldPhoneUtil.getToModemType();
            logd("SimSwitching mdType:" + ModemSwitchHandler.modemToString(activeModemType));
        } else {
            activeModemType = ModemSwitchHandler.getActiveModemType();
        }
        int i2 = sUserType;
        if (i2 == 1) {
            int i3 = sRegion;
            if (i3 == 1) {
                if (activeModemType == 6 || activeModemType == 4) {
                    sDenyReason = 0;
                    logd("Camp on OK");
                    return true;
                }
                if (activeModemType == 5 || activeModemType == 3) {
                    sDenyReason = 3;
                    logd("Camp on REJECT");
                    return false;
                }
            } else if (i3 != 2) {
                logd("Unknow region");
            } else {
                if (activeModemType == 6 || activeModemType == 4) {
                    sDenyReason = 2;
                    logd("Camp on REJECT");
                    return false;
                }
                if (activeModemType == 5 || activeModemType == 3) {
                    sDenyReason = 0;
                    logd("Camp on OK");
                    return true;
                }
            }
        } else if (i2 != 2 && i2 != 3) {
            logd("Unknown user type");
        } else {
            if (activeModemType == 6 || activeModemType == 4) {
                sDenyReason = 2;
                logd("Camp on REJECT");
                return false;
            }
            if (activeModemType == 5 || activeModemType == 3) {
                sDenyReason = 0;
                logd("Camp on OK");
                return true;
            }
        }
        sDenyReason = 1;
        logd("Camp on REJECT");
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isEccInProgress() {
        String str = SystemProperties.get("ril.cdma.inecmmode", "");
        boolean zContains = str.contains("true");
        boolean zIsInEmergencyCall = false;
        ITelecomService iTelecomServiceAsInterface = ITelecomService.Stub.asInterface(ServiceManager.getService("telecom"));
        if (iTelecomServiceAsInterface != null) {
            try {
                zIsInEmergencyCall = iTelecomServiceAsInterface.isInEmergencyCall();
            } catch (RemoteException e) {
                logd("Exception of isEccInProgress");
            }
        }
        logd("isEccInProgress, value:" + str + ", inEcm:" + zContains + ", isInEcc:" + zIsInEmergencyCall);
        return zContains || zIsInEmergencyCall;
    }

    private boolean isInService() {
        boolean z = sVoiceRegState == 0 || sDataRegState == 0;
        logd("inService: " + z);
        return z;
    }

    private boolean isNeedSwitchModem(int i) {
        boolean z = true;
        if (WorldPhoneUtil.isC2kSupport()) {
            int activeSvlteModeSlotId = WorldPhoneUtil.getActiveSvlteModeSlotId();
            if (sUserType == 2 && i >= 0 && i == activeSvlteModeSlotId && ModemSwitchHandler.getActiveModemType() == 5) {
                z = false;
            }
        }
        logd("[isNeedSwitchModem] isNeed = " + z);
        return z;
    }

    private boolean isNoService() {
        int i;
        boolean z = sVoiceRegState == 1 && ((i = sRilVoiceRegState) == 0 || i == 10) && sDataRegState == 1 && sRilDataRegState == 0;
        logd("noService: " + z);
        return z;
    }

    private boolean isSpecialCardMode() {
        boolean z = false;
        int[] c2KWPCardType = WorldPhoneUtil.getC2KWPCardType();
        if ((is4GCdmaCard(c2KWPCardType[0]) && is4GCdmaCard(c2KWPCardType[1])) || (is3GCdmaCard(c2KWPCardType[0]) && is3GCdmaCard(c2KWPCardType[1]))) {
            logd("isSpecialCardMode cardType1=" + c2KWPCardType[0] + ", cardType2=" + c2KWPCardType[1]);
            z = true;
        }
        logd("isSpecialCardMode:" + z);
        return z;
    }

    private static void loadDefaultData() {
        for (String str : PLMN_TABLE_TYPE1) {
            sPlmnType1.add(str);
        }
        for (String str2 : PLMN_TABLE_TYPE1_EXT) {
            sPlmnType1Ext.add(str2);
        }
        for (String str3 : PLMN_TABLE_TYPE3) {
            sPlmnType3.add(str3);
        }
        for (String str4 : MCC_TABLE_DOMESTIC) {
            sMccDomestic.add(str4);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void logd(String str) {
        Rlog.d(IWorldPhone.LOG_TAG, "[WPOM]" + str);
    }

    private void registerEccStateReceiver() {
        if (sContext == null) {
            logd("registerEccStateReceiver, context is null => return");
            return;
        }
        IntentFilter intentFilter = new IntentFilter("android.intent.action.PHONE_STATE");
        intentFilter.addAction("android.intent.action.EMERGENCY_CALLBACK_MODE_CHANGED");
        sContext.registerReceiver(this.mWorldPhoneEccStateReceiver, intentFilter);
        this.mIsRegisterEccStateReceiver = true;
    }

    private void removeEmsrResumeByTimer() {
        if (sWaitInEmsrResume) {
            logd("Remove EMSR wait timer. Set sWaitInEmsrResume = false");
            sWaitInEmsrResume = false;
            removeCallbacks(this.mEmsrResumeByTimerRunnable);
        }
    }

    private void removeModemStandByTimer() {
        if (sWaitInTdd) {
            logd("Remove TDD wait timer. Set sWaitInTdd = false");
            sWaitInTdd = false;
            removeCallbacks(this.mTddStandByTimerRunnable);
        }
        if (sWaitInFdd) {
            logd("Remove FDD wait timer. Set sWaitInFdd = false");
            sWaitInFdd = false;
            removeCallbacks(this.mFddStandByTimerRunnable);
        }
    }

    private void resetAllProperties() {
        logd("[resetAllProperties]");
        sNwPlmnStrings = null;
        for (int i = 0; i < PROJECT_SIM_NUM; i++) {
            sFirstSelect[i] = true;
        }
        sDenyReason = 1;
        sIsResumeCampingFail1 = false;
        sIsResumeCampingFail2 = false;
        sIsResumeCampingFail3 = false;
        sIsResumeCampingFail4 = false;
        sBtSapState = 0;
        resetSimProperties();
        resetNetworkProperties();
        sSimLocked = 0;
        sSimLockedSlotId = -1;
    }

    private void resetNetworkProperties() {
        logd("[resetNetworkProperties]");
        synchronized (sLock) {
            for (int i = 0; i < PROJECT_SIM_NUM; i++) {
                sSuspendWaitImsi[i] = false;
            }
            if (sNwPlmnStrings != null) {
                for (int i2 = 0; i2 < sNwPlmnStrings.length; i2++) {
                    sNwPlmnStrings[i2] = "";
                }
            }
            removeEmsrResumeByTimer();
        }
    }

    private void resetSimProperties() {
        logd("[resetSimProperties]");
        synchronized (sLock) {
            for (int i = 0; i < PROJECT_SIM_NUM; i++) {
                sImsi[i] = "";
            }
            sUserType = 0;
            sMajorSim = WorldPhoneUtil.getMajorSim();
        }
    }

    private void resumeCampingProcedure(int i, boolean z) {
        logd("Resume camping slot:" + i + " isResumeModem:" + z + ", sSimLocked:" + sSimLocked);
        boolean zHandleSwitchModem = false;
        String[] strArr = sNwPlmnStrings;
        if (strArr == null || strArr[0] == null) {
            logd("sNwPlmnStrings[0] is null");
            return;
        }
        String str = strArr[0];
        if (sSimLocked == 1 || isAllowCampOn(str, i)) {
            zHandleSwitchModem = false;
        } else {
            logd("Because: " + sDenyReason);
            int i2 = sDenyReason;
            if (i2 == 2) {
                zHandleSwitchModem = handleSwitchModem(100);
            } else if (i2 == 3) {
                zHandleSwitchModem = handleSwitchModem(101);
            }
        }
        if (zHandleSwitchModem) {
            return;
        }
        removeModemStandByTimer();
        removeEmsrResumeByTimer();
        if (z) {
            sCi[i].setResumeRegistration(sSuspendId[i], obtainMessage(i + 70));
        }
    }

    private void searchForDesignateService(String str) {
        if (str == null || str.length() < 5) {
            logd("[searchForDesignateService]- null source");
            return;
        }
        String strSubstring = str.substring(0, 5);
        Iterator<String> it = sPlmnType1.iterator();
        while (it.hasNext()) {
            if (strSubstring.equals(it.next())) {
                logd("Find TD service");
                logd("sUserType: " + sUserType + " sRegion: " + sRegion);
                if (sRegion == 1) {
                    ModemSwitchHandler.getActiveModemType();
                    handleSwitchModem(101);
                    return;
                }
                return;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unRegisterEccStateReceiver() {
        Context context = sContext;
        if (context == null) {
            logd("unRegisterEccStateReceiver, context is null => return");
        } else {
            context.unregisterReceiver(this.mWorldPhoneEccStateReceiver);
            this.mIsRegisterEccStateReceiver = false;
        }
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        AsyncResult asyncResult = (AsyncResult) message.obj;
        int i = message.what;
        if (i == 0) {
            logd("handleMessage : <EVENT_RADIO_ON_1>");
            handleRadioOn(0);
        }
        if (i == 1) {
            logd("handleMessage : <EVENT_RADIO_ON_2>");
            handleRadioOn(1);
            return;
        }
        if (i == 2) {
            logd("handleMessage : <EVENT_RADIO_ON_3>");
            handleRadioOn(2);
            return;
        }
        if (i == 3) {
            logd("handleMessage : <EVENT_RADIO_ON_4>");
            handleRadioOn(3);
            return;
        }
        switch (i) {
            case 10:
                logd("handleMessage : <EVENT_REG_PLMN_CHANGED_1>");
                handlePlmnChange(asyncResult, 0);
                break;
            case 11:
                logd("handleMessage : <EVENT_REG_PLMN_CHANGED_2>");
                handlePlmnChange(asyncResult, 1);
                break;
            case 12:
                logd("handleMessage : <EVENT_REG_PLMN_CHANGED_3>");
                handlePlmnChange(asyncResult, 2);
                break;
            case 13:
                logd("handleMessage : <EVENT_REG_PLMN_CHANGED_4>");
                handlePlmnChange(asyncResult, 3);
                break;
            default:
                switch (i) {
                    case 30:
                        logd("handleMessage : <EVENT_REG_SUSPENDED_1>");
                        handleRegistrationSuspend(asyncResult, 0);
                        break;
                    case 31:
                        logd("handleMessage : <EVENT_REG_SUSPENDED_2>");
                        handleRegistrationSuspend(asyncResult, 1);
                        break;
                    case 32:
                        logd("handleMessage : <EVENT_REG_SUSPENDED_3>");
                        handleRegistrationSuspend(asyncResult, 2);
                        break;
                    case 33:
                        logd("handleMessage : <EVENT_REG_SUSPENDED_4>");
                        handleRegistrationSuspend(asyncResult, 3);
                        break;
                    default:
                        switch (i) {
                            case 60:
                                logd("handleMessage : <EVENT_INVALID_SIM_NOTIFY_1>");
                                handleInvalidSimNotify(0, asyncResult);
                                break;
                            case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_2 /* 61 */:
                                logd("handleMessage : <EVENT_INVALID_SIM_NOTIFY_2>");
                                handleInvalidSimNotify(1, asyncResult);
                                break;
                            case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_3 /* 62 */:
                                logd("handleMessage : <EVENT_INVALID_SIM_NOTIFY_3>");
                                handleInvalidSimNotify(2, asyncResult);
                                break;
                            case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_4 /* 63 */:
                                logd("handleMessage : <EVENT_INVALID_SIM_NOTIFY_4>");
                                handleInvalidSimNotify(3, asyncResult);
                                break;
                            default:
                                switch (i) {
                                    case IWorldPhone.EVENT_RESUME_CAMPING_1 /* 70 */:
                                        if (asyncResult.exception != null) {
                                            logd("handleMessage : <EVENT_RESUME_CAMPING_1> with exception");
                                            sIsResumeCampingFail1 = true;
                                        }
                                        break;
                                    case IWorldPhone.EVENT_RESUME_CAMPING_2 /* 71 */:
                                        if (asyncResult.exception != null) {
                                            logd("handleMessage : <EVENT_RESUME_CAMPING_2> with exception");
                                            sIsResumeCampingFail2 = true;
                                        }
                                        break;
                                    case IWorldPhone.EVENT_RESUME_CAMPING_3 /* 72 */:
                                        if (asyncResult.exception != null) {
                                            logd("handleMessage : <EVENT_RESUME_CAMPING_3> with exception");
                                            sIsResumeCampingFail3 = true;
                                        }
                                        break;
                                    case IWorldPhone.EVENT_RESUME_CAMPING_4 /* 73 */:
                                        if (asyncResult.exception != null) {
                                            logd("handleMessage : <EVENT_RESUME_CAMPING_4> with exception");
                                            sIsResumeCampingFail4 = true;
                                        }
                                        break;
                                    default:
                                        switch (i) {
                                            case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_1 /* 80 */:
                                                logd("handleMessage : <EVENT_SERVICE_STATE_CHANGED_1>");
                                                handleServiceStateChange(asyncResult, 0);
                                                break;
                                            case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_2 /* 81 */:
                                                logd("handleMessage : <EVENT_SERVICE_STATE_CHANGED_2>");
                                                handleServiceStateChange(asyncResult, 1);
                                                break;
                                            case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_3 /* 82 */:
                                                logd("handleMessage : <EVENT_SERVICE_STATE_CHANGED_3>");
                                                handleServiceStateChange(asyncResult, 2);
                                                break;
                                            case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_4 /* 83 */:
                                                logd("handleMessage : <EVENT_SERVICE_STATE_CHANGED_4>");
                                                handleServiceStateChange(asyncResult, 3);
                                                break;
                                            default:
                                                switch (i) {
                                                    case IWorldPhone.EVENT_WP_GMSS_RAT_CHANGED_1 /* 1060 */:
                                                        logd("handleMessage : <EVENT_WP_GMSS_RAT_CHANGED_1>");
                                                        handleGmssRatChange(asyncResult, 0);
                                                        break;
                                                    case IWorldPhone.EVENT_WP_GMSS_RAT_CHANGED_2 /* 1061 */:
                                                        logd("handleMessage : <EVENT_WP_GMSS_RAT_CHANGED_2>");
                                                        handleGmssRatChange(asyncResult, 1);
                                                        break;
                                                    case IWorldPhone.EVENT_WP_GMSS_RAT_CHANGED_3 /* 1062 */:
                                                        logd("handleMessage : <EVENT_WP_GMSS_RAT_CHANGED_3>");
                                                        handleGmssRatChange(asyncResult, 2);
                                                        break;
                                                    case IWorldPhone.EVENT_WP_GMSS_RAT_CHANGED_4 /* 1063 */:
                                                        logd("handleMessage : <EVENT_WP_GMSS_RAT_CHANGED_4>");
                                                        handleGmssRatChange(asyncResult, 3);
                                                        break;
                                                    default:
                                                        logd("Unknown msg:" + message.what);
                                                        break;
                                                }
                                                break;
                                        }
                                        break;
                                }
                                break;
                        }
                        break;
                }
                break;
        }
    }

    public void handleRadioTechModeSwitch() {
        int i;
        logd("[handleRadioTechModeSwitch]");
        if (WorldPhoneUtil.getModemSelectionMode() == 0) {
            logd("Auto modem selection disabled");
            removeModemStandByTimer();
            return;
        }
        logd("Auto modem selection enabled");
        String[] strArr = sImsi;
        int i2 = sMajorSim;
        if (strArr[i2] == null || strArr[i2].equals("")) {
            logd("Capaility slot IMSI not ready");
            sUserType = 0;
            return;
        }
        int userType = getUserType(sImsi[sMajorSim]);
        sUserType = userType;
        if (userType == 1) {
            String[] strArr2 = sNwPlmnStrings;
            if (strArr2 != null) {
                sRegion = getRegion(strArr2[0]);
            }
            int i3 = sRegion;
            if (i3 == 1) {
                sFirstSelect[sMajorSim] = false;
                i = 101;
            } else if (i3 != 2) {
                logd("Unknown region");
                return;
            } else {
                sFirstSelect[sMajorSim] = false;
                i = 100;
            }
        } else if (userType != 2 && userType != 3) {
            logd("Unknown user type");
            return;
        } else {
            sFirstSelect[sMajorSim] = false;
            i = 100;
        }
        if (i == 101) {
            i = WorldPhoneUtil.isLteSupport() ? 6 : 4;
        } else if (i == 100) {
            i = WorldPhoneUtil.isLteSupport() ? 5 : 3;
        }
        logd("[handleRadioTechModeSwitch]: switch type: " + i);
        handleSwitchModem(i);
        resetNetworkProperties();
    }

    @Override // com.mediatek.internal.telephony.worldphone.IWorldPhone
    public void notifyRadioCapabilityChange(int i) {
        int i2;
        int mainCapabilityPhoneId = RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
        int activeSvlteModeSlotId = WorldPhoneUtil.getActiveSvlteModeSlotId();
        logd("[setRadioCapabilityChange] majorSimId:" + mainCapabilityPhoneId + " capailitySimId=" + i);
        removeEmsrResumeByTimer();
        if (WorldPhoneUtil.getModemSelectionMode() == 0) {
            logd("[setRadioCapabilityChange] Auto modem selection disabled");
            removeModemStandByTimer();
            return;
        }
        String[] strArr = sImsi;
        if (strArr[i] == null || strArr[i].equals("")) {
            logd("Capaility slot IMSI not ready");
            sUserType = 0;
            return;
        }
        int userType = getUserType(sImsi[i]);
        sUserType = userType;
        if (userType == 1) {
            String[] strArr2 = sNwPlmnStrings;
            if (strArr2 != null) {
                sRegion = getRegion(strArr2[0]);
            }
            int i3 = sRegion;
            if (i3 == 1) {
                sFirstSelect[i] = false;
                i2 = 101;
            } else if (i3 != 2) {
                logd("Unknown region");
                return;
            } else {
                sFirstSelect[i] = false;
                i2 = 100;
            }
        } else if (userType != 2 && userType != 3) {
            logd("Unknown user type");
            return;
        } else {
            sFirstSelect[i] = false;
            i2 = 100;
        }
        if (i2 == 101) {
            i2 = WorldPhoneUtil.isLteSupport() ? 6 : 4;
        } else if (i2 == 100) {
            i2 = WorldPhoneUtil.isLteSupport() ? 5 : 3;
        }
        logd("notifyRadioCapabilityChange: Storing modem type: " + i2);
        MtkRIL mtkRIL = null;
        if (mainCapabilityPhoneId == -99) {
            logd("notifyRadioCapabilityChange: major sim is unknown");
            return;
        }
        if (!WorldPhoneUtil.isCdmaLteDcSupport()) {
            mtkRIL = sCi[0];
        } else if (isSpecialCardMode()) {
            logd("isSpecialCardMode=true, ignore this change!");
        } else if (i != activeSvlteModeSlotId) {
            logd("new RT mode is CSFB");
            mtkRIL = sCi[mainCapabilityPhoneId];
        } else if (i2 == 5) {
            logd("new RT mode is SVLTE and new type is LWG");
            mtkRIL = sCi[mainCapabilityPhoneId];
        }
        if (mtkRIL != null) {
            mtkRIL.reloadModemType(i2, null);
            resetNetworkProperties();
            WorldPhoneUtil.setSimSwitchingFlag(true);
            WorldPhoneUtil.saveToModemType(i2);
            mtkRIL.storeModemType(i2, null);
        }
    }

    @Override // com.mediatek.internal.telephony.worldphone.IWorldPhone
    public void setModemSelectionMode(int i, int i2) {
        SystemProperties.set(IWorldPhone.WORLD_PHONE_AUTO_SELECT_MODE, Integer.toString(i));
        if (i == 1) {
            logd("Modem Selection <AUTO>");
            sMajorSim = WorldPhoneUtil.getMajorSim();
            handleSimSwitched();
        } else {
            logd("Modem Selection <MANUAL>");
            handleSwitchModem(i2);
            if (i2 == ModemSwitchHandler.getActiveModemType()) {
                removeModemStandByTimer();
            }
        }
    }
}

package com.mediatek.internal.telephony;

import android.R;
import android.app.AlarmManager;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.res.Resources;
import android.database.ContentObserver;
import android.hardware.radio.V1_5.RegStateResult;
import android.internal.telephony.sysprop.TelephonyProperties;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.provider.Settings;
import android.telephony.CarrierConfigManager;
import android.telephony.CellIdentity;
import android.telephony.CellIdentityCdma;
import android.telephony.CellIdentityGsm;
import android.telephony.CellIdentityLte;
import android.telephony.CellIdentityTdscdma;
import android.telephony.CellIdentityWcdma;
import android.telephony.CellInfo;
import android.telephony.CellLocation;
import android.telephony.DataSpecificRegistrationInfo;
import android.telephony.LteVopsSupportInfo;
import android.telephony.NetworkRegistrationInfo;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyDisplayInfo;
import android.telephony.TelephonyManager;
import android.telephony.VoiceSpecificRegistrationInfo;
import android.telephony.cdma.CdmaCellLocation;
import android.telephony.gsm.GsmCellLocation;
import android.text.TextUtils;
import android.util.EventLog;
import android.util.SparseBooleanArray;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.telephony.HbpcdUtils;
import com.android.internal.telephony.MccTable;
import com.android.internal.telephony.NetworkRegistrationManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.ProxyController;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.RegistrantList;
import com.android.internal.telephony.RestrictedState;
import com.android.internal.telephony.ServiceStateTracker;
import com.android.internal.telephony.ServiceStateTrackerInjector;
import com.android.internal.telephony.cdma.CdmaSubscriptionSourceManager;
import com.android.internal.telephony.cdnr.CarrierDisplayNameData;
import com.android.internal.telephony.imsphone.ImsPhoneCallTrackerInjector;
import com.android.internal.telephony.metrics.TelephonyMetrics;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccRefreshResponse;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.RuimRecords;
import com.android.internal.telephony.uicc.SIMRecords;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.util.TelephonyUtils;
import com.android.telephony.Rlog;
import com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils;
import com.mediatek.internal.telephony.cdma.pluscode.PlusCodeProcessor;
import com.mediatek.internal.telephony.dataconnection.MtkDcTracker;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.uicc.MtkSpnOverride;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import mediatek.telephony.MtkServiceState;
import mediatek.telephony.MtkSignalStrength;
import miui.telephony.PhoneDebug;
import miui.telephony.RegInfoMonitor;
import miui.telephony.ServiceProviderUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkServiceStateTracker extends ServiceStateTracker {
    private static final boolean DBG = true;
    private static final int DELAY_SERVICE_STATE_UPDATE_TIMER = 3000;
    protected static final int EVENT_CS_NETWORK_STATE_CHANGED = 100;
    private static final int EVENT_CT_VOLTE_DELAY_UPDATE = 2001;
    protected static final int EVENT_FEMTO_CELL_INFO = 102;
    protected static final int EVENT_ICC_REFRESH = 106;
    protected static final int EVENT_IMEI_LOCK = 107;
    protected static final int EVENT_INVALID_SIM_INFO = 101;
    protected static final int EVENT_MODULATION_INFO = 105;
    private static final int EVENT_MTK_GET_CELL_INFO_LIST = 1;
    protected static final int EVENT_NETWORK_EVENT = 104;
    protected static final int EVENT_PS_NETWORK_STATE_CHANGED = 103;
    protected static final int EVENT_RECHECK_NRM_STATUS = 123;
    protected static final int EVENT_RESTART_TURBO = 122;
    private static final int EVENT_RE_REGISTRATION_NETWORK_DONE = 2002;
    protected static final int EVENT_RIL_READY = 120;
    private static final int EVENT_SERVICE_STATE_DELAY = 2000;
    protected static final int EVENT_SIM_OPL_LOADED = 119;
    protected static final int EVENT_UPDATE_PLMN = 121;
    private static final int FIVEG_SS_DELAY_PERIOD_MILLIS = 17000;
    private static final String LOG_TAG = "MTKSST";
    private static final long MTK_LAST_CELL_INFO_LIST_MAX_AGE_MS = 1000;
    protected static final String PROP_IWLAN_STATE = "persist.vendor.radio.wfc_state";
    protected static final String PROP_MTK_DATA_TYPE = "persist.vendor.radio.mtk_data_type";
    public static final int REJECT_NOTIFICATION = 890;
    private static final boolean VDBG = true;
    private static final long mCheckNrmPeriod = 1000;
    private static String[][] sSpnOverride = {new String[]{"45406", "SmarTone HK"}, new String[]{"46605", "TWN APT"}, new String[]{"52505", "StarHub"}};
    public boolean hasPendingPollState;
    private boolean isCsInvalidCard;
    private String mCsgId;
    private RegistrantList mDataRoamingTypeChangedRegistrants;
    private boolean mEnableERI;
    private boolean mEriTriggeredPollState;
    private boolean mEverIVSR;
    private String mFemtoAct;
    private String mFemtoPlmn;
    private int mFemtocellDomain;
    private boolean mForceBroadcastServiceState;
    private String mHhbName;
    private int mIsFemtocell;
    private boolean mIsImeiLock;
    public boolean mIsModemDataRestoring;
    protected volatile boolean mIsNetworkModeChanging;
    private boolean mIsUserFiveGEnabled;
    private Object mLastCellInfoListLock;
    private String mLastPSRegisteredPLMN;
    private int mLastPhoneGetNitz;
    private String mLastRegisteredPLMN;
    private String mLocatedPlmn;
    private BroadcastReceiver mMtkIntentReceiver;
    private boolean mMtkVoiceCapable;
    private boolean mNetworkExsit;
    private CellIdentity mNewPSCellIdentity;
    private Notification mNotification;
    private Notification.Builder mNotificationBuilder;
    private MtkServiceState mOldSSBeforeOptimization;
    private boolean mPhoneTypeUpdated;
    private IPlusCodeUtils mPlusCodeUtils;
    private int mPsRegState;
    private int mPsRegStateRaw;
    private String mSavedGuessTimeZone;
    private IServiceStateTrackerExt mServiceStateTrackerExt;
    private ContentObserver mSsDisplayOptimization;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory;
    private String[][] mTimeZoneIdOfCapitalCity;
    private Handler mtkHandler;
    private HandlerThread mtkHandlerThread;
    public NrMap nm;
    public boolean once_pollState_done;
    private MtkServiceState turboSS;
    private SignalStrength turboSig;

    private class MtkCellInfoResult {
        List<CellInfo> list;
        Object lockObj = new Object();

        private MtkCellInfoResult() {
        }
    }

    private class MtkHandler extends Handler {
        private boolean pending;
        private boolean polling;
        private boolean stop;

        public MtkHandler(Looper looper) {
            super(looper);
            this.stop = false;
            this.polling = false;
            this.pending = false;
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != 2) {
                if (i == 3) {
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    boolean zBooleanValue = (MtkServiceStateTracker.this.mServiceStateTrackerExt != null ? Boolean.valueOf(MtkServiceStateTracker.this.mServiceStateTrackerExt.getMtkRsrpOnly()) : null).booleanValue();
                    int[] mtkLteRsrpThreshold = MtkServiceStateTracker.this.mServiceStateTrackerExt != null ? MtkServiceStateTracker.this.mServiceStateTrackerExt.getMtkLteRsrpThreshold() : null;
                    int[] mtkLteRssnrThreshold = MtkServiceStateTracker.this.mServiceStateTrackerExt != null ? MtkServiceStateTracker.this.mServiceStateTrackerExt.getMtkLteRssnrThreshold() : null;
                    if (asyncResult.exception != null || asyncResult.result == null) {
                        MtkServiceStateTracker.this.log("onSignalStrengthResult() Exception from RIL : " + asyncResult.exception);
                        return;
                    }
                    MtkServiceStateTracker.this.turboSig = new MtkSignalStrength(MtkServiceStateTracker.this.mPhone.getPhoneId(), (SignalStrength) asyncResult.result);
                    PersistableBundle carrierConfig = MtkServiceStateTracker.this.getCarrierConfig();
                    MtkServiceStateTracker.this.turboSig.updateLevel(carrierConfig, MtkServiceStateTracker.this.mSS);
                    MtkSignalStrength mtkSignalStrength = MtkServiceStateTracker.this.turboSig;
                    mtkSignalStrength.setMtkRsrpOnly(zBooleanValue);
                    mtkSignalStrength.setMtkLteRsrpThreshold(mtkLteRsrpThreshold);
                    mtkSignalStrength.setMtkLteRssnrThreshold(mtkLteRssnrThreshold);
                    mtkSignalStrength.updateMtkLevel(carrierConfig, MtkServiceStateTracker.this.mSS);
                    MtkServiceStateTracker.this.log("notifyMtkSignalStrength level:" + MtkServiceStateTracker.this.turboSig.getLevel() + " raw:" + MtkServiceStateTracker.this.turboSig);
                    ((MtkGsmCdmaPhone) MtkServiceStateTracker.this.mPhone).notifyMtkSignalStrength(MtkServiceStateTracker.this.turboSig);
                    return;
                }
                if (i == 4) {
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    if (asyncResult2.exception != null || asyncResult2.result == null || !(asyncResult2.result instanceof RegStateResult)) {
                        MtkServiceStateTracker.this.log("Turbo stop due to wrong object");
                        return;
                    }
                    RegStateResult regStateResult = (RegStateResult) asyncResult2.result;
                    int iRilRadioTechnologyToNetworkType = ServiceState.rilRadioTechnologyToNetworkType(regStateResult.rat);
                    if (iRilRadioTechnologyToNetworkType == 19) {
                        iRilRadioTechnologyToNetworkType = 13;
                    }
                    NetworkRegistrationInfo networkRegistrationInfo = new NetworkRegistrationInfo(1, 1, regStateResult.regState, iRilRadioTechnologyToNetworkType, regStateResult.reasonForDenial, false, null, null, "", false, 0, 0, 0);
                    MtkServiceStateTracker.this.turboSS.setVoiceRegState(MtkServiceStateTracker.this.regCodeToServiceState(networkRegistrationInfo.getRegistrationState()));
                    MtkServiceStateTracker.this.turboSS.addNetworkRegistrationInfo(networkRegistrationInfo);
                    if ((MtkServiceStateTracker.this.turboSS.getVoiceRegState() == 0 && !MtkServiceStateTracker.this.turboSS.getVoiceRoaming()) || (MtkServiceStateTracker.this.turboSS.getDataRegState() == 0 && !MtkServiceStateTracker.this.turboSS.getDataRoaming())) {
                        int dataNetworkType = MtkServiceStateTracker.this.turboSS.getDataNetworkType();
                        if (dataNetworkType == 0) {
                            dataNetworkType = MtkServiceStateTracker.this.turboSS.getVoiceNetworkType();
                        }
                        TelephonyDisplayInfo telephonyDisplayInfo = new TelephonyDisplayInfo(dataNetworkType, 0);
                        MtkServiceStateTracker.this.log("MtkHandler turboSS=" + MtkServiceStateTracker.this.turboSS + " displayInfo=" + telephonyDisplayInfo);
                        ((MtkGsmCdmaPhone) MtkServiceStateTracker.this.mPhone).notifyMtkServiceStateChanged(MtkServiceStateTracker.this.turboSS);
                        ((MtkGsmCdmaPhone) MtkServiceStateTracker.this.mPhone).notifyDisplayInfoChanged(telephonyDisplayInfo);
                        if (MtkServiceStateTracker.this.turboSS.getDataRegState() == 0) {
                            this.pending = false;
                        }
                    }
                    this.polling = false;
                    if (this.pending) {
                        this.pending = false;
                        MtkServiceStateTracker.this.mtkHandler.sendEmptyMessage(MtkServiceStateTracker.EVENT_RESTART_TURBO);
                        return;
                    }
                    return;
                }
                if (i == 5) {
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    if (asyncResult3.exception != null || asyncResult3.result == null || !(asyncResult3.result instanceof RegStateResult)) {
                        MtkServiceStateTracker.this.log("Turbo stop due to wrong object");
                        return;
                    }
                    RegStateResult regStateResult2 = (RegStateResult) asyncResult3.result;
                    boolean z = false;
                    int iRilRadioTechnologyToNetworkType2 = ServiceState.rilRadioTechnologyToNetworkType(regStateResult2.rat);
                    if (iRilRadioTechnologyToNetworkType2 == 19) {
                        z = true;
                        iRilRadioTechnologyToNetworkType2 = 13;
                    }
                    boolean z2 = false;
                    boolean z3 = false;
                    boolean z4 = false;
                    if (regStateResult2.accessTechnologySpecificInfo.getDiscriminator() == 2) {
                        RegStateResult.AccessTechnologySpecificInfo.EutranRegistrationInfo eutranRegistrationInfoEutranInfo = regStateResult2.accessTechnologySpecificInfo.eutranInfo();
                        z4 = eutranRegistrationInfoEutranInfo.nrIndicators.isDcNrRestricted;
                        z3 = eutranRegistrationInfoEutranInfo.nrIndicators.isNrAvailable;
                        z2 = eutranRegistrationInfoEutranInfo.nrIndicators.isEndcAvailable;
                    }
                    NetworkRegistrationInfo networkRegistrationInfo2 = new NetworkRegistrationInfo(2, 1, regStateResult2.regState, iRilRadioTechnologyToNetworkType2, regStateResult2.reasonForDenial, false, null, null, "", 16, z4, z3, z2, new LteVopsSupportInfo(1, 1), z);
                    MtkServiceStateTracker.this.turboSS.setDataRegState(MtkServiceStateTracker.this.regCodeToServiceState(networkRegistrationInfo2.getRegistrationState()));
                    MtkServiceStateTracker.this.turboSS.addNetworkRegistrationInfo(networkRegistrationInfo2);
                    return;
                }
                if (i == 7) {
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    if (!(asyncResult4.result instanceof String[])) {
                        MtkServiceStateTracker.this.log("Turbo EVENT OPERATOR wrong object");
                        return;
                    }
                    String[] strArr = (String[]) asyncResult4.result;
                    if (strArr == null || strArr.length < 3) {
                        return;
                    }
                    MtkServiceStateTracker.this.turboSS.setOperatorName(strArr[0], strArr[1], strArr[2]);
                    return;
                }
                switch (i) {
                    case MtkServiceStateTracker.EVENT_RIL_READY /* 120 */:
                        MtkServiceStateTracker.this.mCi.registerForNetworkStateChanged(MtkServiceStateTracker.this.mtkHandler, 2, (Object) null);
                        break;
                    case MtkServiceStateTracker.EVENT_UPDATE_PLMN /* 121 */:
                        MtkPlmn mtkPlmn = (MtkPlmn) message.obj;
                        if (((NetworkRegistrationManager) MtkServiceStateTracker.this.mRegStateManagers.get(1)).isServiceConnected()) {
                            if (mtkPlmn == null) {
                                MtkServiceStateTracker.this.log("EVENT_UPDATE_PLMN should not be happened here");
                                return;
                            }
                            if (!mtkPlmn.showPlmn && !mtkPlmn.showSpn) {
                                MtkServiceStateTracker.this.log("updateTurboPLMN comes after connected, skip");
                                return;
                            }
                            MtkServiceStateTracker.this.log("MtkHandler: EVENT_UPDATE_PLMN " + mtkPlmn);
                            if (MtkServiceStateTracker.this.mSubscriptionController.setPlmnSpn(MtkServiceStateTracker.this.mPhone.getPhoneId(), mtkPlmn.showPlmn, mtkPlmn.plmn, mtkPlmn.showSpn, mtkPlmn.spn)) {
                                return;
                            }
                            MtkServiceStateTracker.this.mSpnUpdatePending = true;
                            return;
                        }
                        if (this.stop) {
                            return;
                        }
                        if ((MtkServiceStateTracker.this.turboSS.getVoiceRegState() != 0 || MtkServiceStateTracker.this.turboSS.getVoiceRoaming()) && (MtkServiceStateTracker.this.turboSS.getDataRegState() != 0 || MtkServiceStateTracker.this.turboSS.getDataRoaming())) {
                            if (mtkPlmn.plmn == null && mtkPlmn.spn == null) {
                                MtkServiceStateTracker.this.logv("it's updateTurboPLMN when turboSS is OOS, skip");
                                return;
                            }
                            MtkServiceStateTracker.this.log("update aosp PLMN mtkplmn=" + mtkPlmn);
                            MtkServiceStateTracker.this.mSubscriptionController.setPlmnSpn(MtkServiceStateTracker.this.mPhone.getPhoneId(), mtkPlmn.showPlmn, mtkPlmn.plmn, mtkPlmn.showSpn, mtkPlmn.spn);
                            return;
                        }
                        MtkServiceStateTracker.this.log("updateTurboPLMN turboSS=" + MtkServiceStateTracker.this.turboSS);
                        MtkServiceStateTracker.this.mSubscriptionController.setPlmnSpn(MtkServiceStateTracker.this.mPhone.getPhoneId(), true, MtkServiceStateTracker.this.turboSS.getOperatorAlpha(), false, "");
                        ((MtkGsmCdmaPhone) MtkServiceStateTracker.this.mPhone).notifyMtkServiceStateChanged(MtkServiceStateTracker.this.turboSS);
                        MtkServiceStateTracker.this.log("MtkHandler: stop MTK turbo");
                        this.stop = true;
                        MtkServiceStateTracker.this.mCi.unregisterForNetworkStateChanged(MtkServiceStateTracker.this.mtkHandler);
                        MtkServiceStateTracker.this.turboSS = new MtkServiceState();
                        return;
                    case MtkServiceStateTracker.EVENT_RESTART_TURBO /* 122 */:
                        break;
                    case MtkServiceStateTracker.EVENT_RECHECK_NRM_STATUS /* 123 */:
                        boolean zIsServiceConnected = ((NetworkRegistrationManager) MtkServiceStateTracker.this.mRegStateManagers.get(1)).isServiceConnected();
                        MtkServiceStateTracker.this.log("EVENT_RECHECK_NRM_STATUS connected=" + zIsServiceConnected);
                        if (zIsServiceConnected) {
                            ((MtkGsmCdmaPhone) MtkServiceStateTracker.this.mPhone).getServiceStateTracker().sendEmptyMessage(MtkServiceStateTracker.EVENT_RECHECK_NRM_STATUS);
                            return;
                        } else {
                            MtkServiceStateTracker.this.mtkHandler.sendEmptyMessageDelayed(MtkServiceStateTracker.EVENT_RECHECK_NRM_STATUS, 1000L);
                            return;
                        }
                    default:
                        MtkServiceStateTracker.this.loge("Should not be here msg.what=" + message.what);
                        return;
                }
            }
            if (((NetworkRegistrationManager) MtkServiceStateTracker.this.mRegStateManagers.get(1)).isServiceConnected() || this.stop) {
                MtkServiceStateTracker.this.log("MtkHandler: stop MTK turbo");
                MtkServiceStateTracker.this.mCi.unregisterForNetworkStateChanged(MtkServiceStateTracker.this.mtkHandler);
                return;
            }
            if (message.what == MtkServiceStateTracker.EVENT_RIL_READY) {
                MtkServiceStateTracker.this.log("MtkHandler: EVENT_RIL_READY");
            }
            if (message.what == MtkServiceStateTracker.EVENT_RESTART_TURBO) {
                MtkServiceStateTracker.this.log("MtkHandler: EVENT_RESTART_TURBO");
            } else {
                MtkServiceStateTracker.this.log("MtkHandler: EVENT_NETWORK_STATE_CHANGED");
                if (this.polling) {
                    this.pending = true;
                    return;
                }
            }
            this.polling = true;
            MtkServiceStateTracker.this.mCi.getOperator(MtkServiceStateTracker.this.mtkHandler.obtainMessage(7, MtkServiceStateTracker.this.mPollingContext));
            MtkServiceStateTracker.this.mCi.getDataRegistrationState(MtkServiceStateTracker.this.mtkHandler.obtainMessage(5, MtkServiceStateTracker.this.mPollingContext));
            MtkServiceStateTracker.this.mCi.getVoiceRegistrationState(MtkServiceStateTracker.this.mtkHandler.obtainMessage(4, MtkServiceStateTracker.this.mPollingContext));
            MtkServiceStateTracker.this.mCi.getSignalStrength(MtkServiceStateTracker.this.mtkHandler.obtainMessage(3));
        }
    }

    private class MtkPlmn {
        String plmn;
        boolean showPlmn;
        boolean showSpn;
        String spn;

        public MtkPlmn(boolean z, String str, boolean z2, String str2) {
            this.showPlmn = z;
            this.plmn = str == null ? null : new String(str);
            this.showSpn = z2;
            this.spn = str2 != null ? new String(str2) : null;
        }

        public String toString() {
            return "MtkPlmn showPlmn=" + this.showPlmn + " plmn=" + this.plmn + " showSpn=" + this.showSpn + " spn=" + this.spn;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MtkServiceStateTracker(GsmCdmaPhone gsmCdmaPhone, CommandsInterface commandsInterface) {
        super(gsmCdmaPhone, commandsInterface);
        this.mEriTriggeredPollState = false;
        this.mEnableERI = false;
        this.mTelephonyCustomizationFactory = null;
        this.mServiceStateTrackerExt = null;
        this.mDataRoamingTypeChangedRegistrants = new RegistrantList();
        this.mLastCellInfoListLock = new Object();
        this.mIsImeiLock = false;
        this.mLocatedPlmn = null;
        this.mPsRegState = 1;
        this.mPsRegStateRaw = 0;
        this.mHhbName = null;
        this.mCsgId = null;
        this.mFemtocellDomain = 0;
        this.mIsFemtocell = 0;
        this.mFemtoPlmn = null;
        this.mFemtoAct = null;
        this.hasPendingPollState = false;
        this.mLastRegisteredPLMN = null;
        this.mLastPSRegisteredPLMN = null;
        this.mEverIVSR = false;
        this.isCsInvalidCard = false;
        this.mMtkVoiceCapable = this.mPhone.getContext().getResources().getBoolean(R.bool.config_cecSetMenuLanguageEnabled_default);
        this.mLastPhoneGetNitz = -1;
        this.mTimeZoneIdOfCapitalCity = new String[][]{new String[]{"au", "Australia/Sydney"}, new String[]{"br", "America/Sao_Paulo"}, new String[]{"ca", "America/Toronto"}, new String[]{"cl", "America/Santiago"}, new String[]{"es", "Europe/Madrid"}, new String[]{"fm", "Pacific/Ponape"}, new String[]{"gl", "America/Godthab"}, new String[]{PplMessageManager.PendingMessage.KEY_ID, "Asia/Jakarta"}, new String[]{"kz", "Asia/Almaty"}, new String[]{"mn", "Asia/Ulaanbaatar"}, new String[]{"mx", "America/Mexico_City"}, new String[]{"pf", "Pacific/Tahiti"}, new String[]{"pt", "Europe/Lisbon"}, new String[]{"ru", "Europe/Moscow"}, new String[]{"us", "America/New_York"}, new String[]{"ec", "America/Guayaquil"}, new String[]{"cn", "Asia/Shanghai"}};
        this.mSavedGuessTimeZone = null;
        this.mPlusCodeUtils = PlusCodeProcessor.getPlusCodeUtils();
        this.mNetworkExsit = false;
        this.mForceBroadcastServiceState = false;
        this.turboSS = new MtkServiceState();
        this.turboSig = null;
        this.once_pollState_done = false;
        this.mMtkIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkServiceStateTracker.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                if (intent.getAction().equals("android.telephony.action.CARRIER_CONFIG_CHANGED")) {
                    if (intent.getExtras().getInt("android.telephony.extra.SLOT_INDEX") == MtkServiceStateTracker.this.mPhone.getPhoneId()) {
                        MtkServiceStateTracker.this.sendEmptyMessage(57);
                        return;
                    }
                    return;
                }
                if (intent.getAction().equals("android.intent.action.LOCALE_CHANGED")) {
                    if (MtkServiceStateTracker.this.mCellIdentity != null) {
                        MtkServiceStateTracker mtkServiceStateTracker = MtkServiceStateTracker.this;
                        mtkServiceStateTracker.refreshSpn(mtkServiceStateTracker.mSS, MtkServiceStateTracker.this.mCellIdentity.asCellLocation(), false);
                    } else {
                        MtkServiceStateTracker mtkServiceStateTracker2 = MtkServiceStateTracker.this;
                        mtkServiceStateTracker2.refreshSpn(mtkServiceStateTracker2.mSS, null, false);
                    }
                    MtkServiceStateTracker.this.updateSpnDisplay();
                    if (MtkServiceStateTracker.this.mForceBroadcastServiceState) {
                        MtkServiceStateTracker.this.pollState();
                        return;
                    }
                    return;
                }
                if (intent.getAction().equals("android.intent.action.ACTION_RADIO_OFF")) {
                    MtkServiceStateTracker.this.mAlarmSwitch = false;
                    MtkServiceStateTracker.this.powerOffRadioSafely();
                    return;
                }
                if (intent.getAction().equals("android.telephony.action.SIM_CARD_STATE_CHANGED")) {
                    int intExtra = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
                    int intExtra2 = intent.getIntExtra("phone", -1);
                    if (intExtra2 == MtkServiceStateTracker.this.mPhone.getPhoneId()) {
                        MtkServiceStateTracker.this.log("SIM state change, slotId: " + intExtra2 + " simState[" + intExtra + "]");
                        if (!MtkServiceStateTracker.this.mPhone.isPhoneTypeGsm()) {
                            if (1 == intExtra) {
                                MtkServiceStateTracker.this.mMdn = null;
                                return;
                            }
                            return;
                        } else {
                            if (intExtra == 1) {
                                MtkServiceStateTracker.this.mLastRegisteredPLMN = null;
                                MtkServiceStateTracker.this.mLastPSRegisteredPLMN = null;
                                return;
                            }
                            return;
                        }
                    }
                    return;
                }
                if (!intent.getAction().equals("android.telephony.action.SIM_APPLICATION_STATE_CHANGED")) {
                    if (intent.getAction().equals("miui.intent.action.ACTIVE_RE_REGISTRATION_NETWORK")) {
                        MtkServiceStateTracker.this.log("BroadcastReceiver ACTIVE_RE_REGISTRATION_NETWORK");
                        MtkServiceStateTracker.this.mIsModemDataRestoring = true;
                        if (MtkServiceStateTracker.this.hasMessages(2002)) {
                            MtkServiceStateTracker.this.removeMessages(2002);
                            MtkServiceStateTracker.this.log("removed EVENT_RE_REGISTRATION_NETWORK_DONE msg success");
                        }
                        MtkServiceStateTracker.this.sendEmptyMessageDelayed(2002, 3000L);
                        return;
                    }
                    return;
                }
                int intExtra3 = intent.getIntExtra("phone", -1);
                int intExtra4 = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
                MtkServiceStateTracker.this.log("ACTION_SIM_APPLICATION_STATE_CHANGED, slotId: " + intExtra3 + " simState[" + intExtra4 + "]");
                if (intExtra3 == MtkServiceStateTracker.this.mPhone.getPhoneId() && intExtra4 == 10) {
                    MtkServiceStateTracker mtkServiceStateTracker3 = MtkServiceStateTracker.this;
                    mtkServiceStateTracker3.setDeviceRatMode(mtkServiceStateTracker3.mPhone.getPhoneId());
                }
            }
        };
        this.mIsModemDataRestoring = false;
        this.mOldSSBeforeOptimization = new MtkServiceState();
        this.mIsNetworkModeChanging = false;
        this.mIsUserFiveGEnabled = true;
        this.mPhoneTypeUpdated = false;
        this.mSsDisplayOptimization = new ContentObserver(new Handler()) { // from class: com.mediatek.internal.telephony.MtkServiceStateTracker.4
            @Override // android.database.ContentObserver
            public void onChange(boolean z) {
                MtkServiceStateTracker.this.updateUserFiveGEnabledValue();
                MtkServiceStateTracker.this.optimizateServiceStateDisplay("5G switch changed");
            }
        };
        HandlerThread handlerThread = new HandlerThread("MtkHandlerThread");
        this.mtkHandlerThread = handlerThread;
        handlerThread.start();
        this.mtkHandler = new MtkHandler(this.mtkHandlerThread.getLooper());
        Context context = this.mPhone.getContext();
        context.unregisterReceiver(this.mIntentReceiver);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.LOCALE_CHANGED");
        context.registerReceiver(this.mMtkIntentReceiver, intentFilter);
        IntentFilter intentFilter2 = new IntentFilter();
        intentFilter2.addAction("android.intent.action.ACTION_RADIO_OFF");
        context.registerReceiver(this.mMtkIntentReceiver, intentFilter2);
        IntentFilter intentFilter3 = new IntentFilter();
        intentFilter3.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        context.registerReceiver(this.mMtkIntentReceiver, intentFilter3);
        IntentFilter intentFilter4 = new IntentFilter();
        intentFilter4.addAction("android.telephony.action.SIM_APPLICATION_STATE_CHANGED");
        context.registerReceiver(this.mMtkIntentReceiver, intentFilter4);
        IntentFilter intentFilter5 = new IntentFilter();
        intentFilter5.addAction("android.telephony.action.SIM_CARD_STATE_CHANGED");
        context.registerReceiver(this.mMtkIntentReceiver, intentFilter5);
        IntentFilter intentFilter6 = new IntentFilter();
        intentFilter6.addAction("miui.intent.action.ACTIVE_RE_REGISTRATION_NETWORK");
        context.registerReceiver(this.mMtkIntentReceiver, intentFilter6);
        try {
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(this.mPhone.getContext());
            this.mTelephonyCustomizationFactory = opFactory;
            this.mServiceStateTrackerExt = opFactory.makeServiceStateTrackerExt(this.mPhone.getContext());
        } catch (Exception e) {
            log("mServiceStateTrackerExt init fail");
            e.printStackTrace();
        }
        this.mCi.registerForCsNetworkStateChanged(this, 100, null);
        this.mCi.registerForPsNetworkStateChanged(this, 103, null);
        this.mCi.registerForRilConnected(this.mtkHandler, EVENT_RIL_READY, (Object) null);
        this.nm = new NrMap(gsmCdmaPhone, commandsInterface);
        registerSsDisplayOptimizationEvent();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void broadcastLocatedPlmnChanged(String str, String str2) {
        log("updateLocatedPlmn(),previous plmn= " + str + " ,update to: " + str2);
        Intent intent = new Intent("com.mediatek.intent.action.LOCATED_PLMN_CHANGED");
        if (TelephonyManager.getDefault().getPhoneCount() == 1) {
            intent.addFlags(536870912);
        }
        intent.putExtra("android.telephony.extra.PLMN", str2);
        if (str2 != null) {
            try {
                intent.putExtra("iso", MccTable.countryCodeForMcc(Integer.parseInt(str2.substring(0, 3))));
            } catch (NumberFormatException e) {
                loge("updateLocatedPlmn: countryCodeForMcc error" + e);
                intent.putExtra("iso", "");
            } catch (StringIndexOutOfBoundsException e2) {
                loge("updateLocatedPlmn: countryCodeForMcc error" + e2);
                intent.putExtra("iso", "");
            }
        } else {
            intent.putExtra("iso", "");
        }
        SubscriptionManager.putPhoneIdAndSubIdExtra(intent, this.mPhone.getPhoneId());
        this.mPhone.getContext().sendStickyBroadcastAsUser(intent, UserHandle.ALL);
    }

    private int calculateDeviceRatMode(int i) {
        if (this.mPhone.isPhoneTypeGsm()) {
            try {
                if (this.mServiceStateTrackerExt.isSupportRatBalancing()) {
                    log("networkType is controlled by RAT Blancing, no need to set network type");
                    return -1;
                }
            } catch (RuntimeException e) {
                e.printStackTrace();
            }
        }
        int iCalculatePreferredNetworkType = PhoneFactory.calculatePreferredNetworkType(this.mPhone.getContext(), this.mPhone.getSubId());
        log("calculateDeviceRatMode=" + iCalculatePreferredNetworkType);
        return iCalculatePreferredNetworkType;
    }

    private boolean getImsEccOnly() {
        Phone imsPhone = this.mPhone.getImsPhone();
        if (imsPhone != null) {
            return imsPhone.getServiceState().isEmergencyOnly();
        }
        return false;
    }

    private final int getImsServiceState() {
        Phone imsPhone = this.mPhone.getImsPhone();
        if (imsPhone != null) {
            return imsPhone.getServiceState().getState();
        }
        return 1;
    }

    private boolean hideNrForServiceState(ServiceState serviceState) {
        NetworkRegistrationInfo networkRegistrationInfo;
        if ((this.mIsUserFiveGEnabled && (this.mPhone.getSubId() == SubscriptionManager.getDefaultDataSubscriptionId() || miui.telephony.TelephonyManager.getDefault().isDualNrSupported())) || (networkRegistrationInfo = serviceState.getNetworkRegistrationInfo(2, 1)) == null || networkRegistrationInfo.getNrState() == 0) {
            return false;
        }
        log("SS display optimization, hide nr for ServiceState, NrState is " + networkRegistrationInfo.getNrState());
        networkRegistrationInfo.setNrState(0);
        serviceState.addNetworkRegistrationInfo(networkRegistrationInfo);
        log("SS display optimization, hide nr for ServiceState: " + serviceState);
        return true;
    }

    private boolean isAllowRecoveryOnIvsr(AsyncResult asyncResult) {
        if (!this.mPhone.isInCall()) {
            log("isAllowRecoveryOnIvsr() return true");
            return true;
        }
        log("[isAllowRecoveryOnIvsr] isInCall()=true");
        Message messageObtainMessage = obtainMessage();
        messageObtainMessage.what = 101;
        messageObtainMessage.obj = asyncResult;
        sendMessageDelayed(messageObtainMessage, 10000L);
        return false;
    }

    private static final boolean isChinaTelecomMvno(Context context, int i, String str, String str2) {
        String simOperatorName = TelephonyManager.from(context).getSimOperatorName(i);
        if ("".equals(str2)) {
            return true;
        }
        return ("20404".equals(str) || "45403".equals(str)) && "".equals(simOperatorName);
    }

    private final boolean isConcurrentVoiceAndDataAllowedForIwlan() {
        return this.mSS.getDataRegState() == 0 && this.mSS.getRilDataRadioTechnology() == 18 && getImsServiceState() == 0;
    }

    private final boolean isConcurrentVoiceAndDataAllowedForVolte() {
        return this.mSS.getDataRegState() == 0 && ServiceState.isPsOnlyTech(this.mSS.getRilDataRadioTechnology()) && getImsServiceState() == 0;
    }

    protected static final String lookupOperatorName(Context context, int i, String str, boolean z) {
        if (PhoneFactory.getPhone(SubscriptionManager.getPhoneId(i)) == null) {
            Rlog.e(LOG_TAG, "lookupOperatorName getPhone null subid=" + i);
            return str;
        }
        String spnByPattern = MtkSpnOverride.getInstance().getSpnByPattern(i, str);
        boolean zIsChinaTelecomMvno = isChinaTelecomMvno(context, i, str, spnByPattern);
        if (spnByPattern == null || zIsChinaTelecomMvno) {
            spnByPattern = MtkSpnOverride.getInstance().getSpnByNumeric(str, z, context);
        }
        if (TextUtils.isEmpty(spnByPattern)) {
            for (String[] strArr : sSpnOverride) {
                if (strArr[0].equals(str)) {
                    return strArr[1];
                }
            }
        }
        return spnByPattern == null ? str : spnByPattern;
    }

    private final boolean mergeEmergencyOnlyCdmaIms(boolean z) {
        Phone imsPhone;
        return (!z && this.mNewSS.getVoiceRegState() == 1 && this.mNewSS.getDataRegState() == 1 && (imsPhone = this.mPhone.getImsPhone()) != null) ? imsPhone.getServiceState().isEmergencyOnly() : z;
    }

    private void onFemtoCellInfoResult(AsyncResult asyncResult) {
        String str;
        int i = 0;
        if (asyncResult.exception != null || asyncResult.result == null) {
            loge("onFemtoCellInfo exception");
            return;
        }
        String[] strArr = (String[]) asyncResult.result;
        if (strArr.length > 0) {
            if (strArr[0] != null && strArr[0].length() > 0) {
                this.mFemtocellDomain = Integer.parseInt(strArr[0]);
                log("onFemtoCellInfo: mFemtocellDomain set to " + this.mFemtocellDomain);
            }
            if (strArr[3] != null && strArr[3].length() > 0) {
                this.mFemtoPlmn = strArr[3];
                log("onFemtoCellInfo: mFemtoPlmn set to " + this.mFemtoPlmn);
            }
            if (strArr[4] != null && strArr[4].length() > 0) {
                this.mFemtoAct = strArr[4];
                log("onFemtoCellInfo: mFemtoAct set to " + this.mFemtoAct);
            }
            if (strArr[5] != null && strArr[5].length() > 0) {
                i = Integer.parseInt(strArr[5]);
            }
            this.mIsFemtocell = i;
            log("onFemtoCellInfo: domain= " + this.mFemtocellDomain + ",isCsgCell= " + i);
            if (i == 1) {
                if (strArr[6] != null && strArr[6].length() > 0) {
                    this.mCsgId = strArr[6];
                    log("onFemtoCellInfo: mCsgId set to " + this.mCsgId);
                }
                if (strArr[8] == null || strArr[8].length() <= 0) {
                    this.mHhbName = null;
                    log("onFemtoCellInfo: mHhbName is not available ,set to null");
                } else {
                    this.mHhbName = new String(IccUtils.hexStringToBytes(strArr[8]));
                    log("onFemtoCellInfo: mHhbName set from " + strArr[8] + " to " + this.mHhbName);
                }
            } else {
                this.mCsgId = null;
                this.mHhbName = null;
                log("onFemtoCellInfo: csgId and hnbName are cleared");
            }
            if (i != 2 && strArr[1] != null && strArr[1].length() > 0 && strArr[9] != null && strArr[0].length() > 0) {
                int i2 = Integer.parseInt(strArr[1]);
                int i3 = Integer.parseInt(strArr[9]);
                try {
                    if (this.mServiceStateTrackerExt.needIgnoreFemtocellUpdate(i2, i3)) {
                        log("needIgnoreFemtocellUpdate due to state= " + i2 + ",cause= " + i3);
                        return;
                    }
                } catch (RuntimeException e) {
                    e.printStackTrace();
                }
            }
            Intent intent = new Intent("android.telephony.action.SERVICE_PROVIDERS_UPDATED");
            SubscriptionManager.putPhoneIdAndSubIdExtra(intent, this.mPhone.getPhoneId());
            if (TelephonyManager.getDefault().getPhoneCount() == 1) {
                intent.addFlags(536870912);
            }
            intent.putExtra("android.telephony.extra.SHOW_SPN", this.mCurShowSpn);
            intent.putExtra("android.telephony.extra.SPN", this.mCurSpn);
            intent.putExtra("android.telephony.extra.SHOW_PLMN", this.mCurShowPlmn);
            intent.putExtra("android.telephony.extra.PLMN", this.mCurPlmn);
            intent.putExtra("hnbName", this.mHhbName);
            intent.putExtra("csgId", this.mCsgId);
            intent.putExtra("domain", this.mFemtocellDomain);
            intent.putExtra("femtocell", this.mIsFemtocell);
            this.mPhone.getContext().sendStickyBroadcastAsUser(intent, UserHandle.ALL);
            int phoneId = this.mPhone.getPhoneId();
            String str2 = this.mCurPlmn;
            if (this.mHhbName == null && this.mCsgId != null) {
                try {
                    if (this.mServiceStateTrackerExt.needToShowCsgId()) {
                        str2 = str2 + " - ";
                        str2 = str2 + this.mCsgId;
                    }
                } catch (RuntimeException e2) {
                    e2.printStackTrace();
                }
                str = str2;
            } else if (this.mHhbName != null) {
                str = (str2 + " - ") + this.mHhbName;
            } else {
                str = str2;
            }
            if (this.mSubscriptionController.setPlmnSpn(phoneId, this.mCurShowPlmn, str, this.mCurShowSpn, this.mCurSpn)) {
                return;
            }
            this.mSpnUpdatePending = true;
        }
    }

    private void onInvalidSimInfoReceived(AsyncResult asyncResult) {
        String str;
        String str2;
        String[] strArr = (String[]) asyncResult.result;
        String str3 = strArr[0];
        int i = Integer.parseInt(strArr[1]);
        int i2 = Integer.parseInt(strArr[2]);
        int i3 = Integer.parseInt(strArr[3]);
        int i4 = SystemProperties.getInt("vendor.gsm.gcf.testmode", 0);
        log("onInvalidSimInfoReceived testMode:" + i4 + " cause:" + i3 + " cs_invalid:" + i + " ps_invalid:" + i2 + " plmn:" + str3 + " mEverIVSR:" + this.mEverIVSR);
        if (i4 != 0) {
            log("InvalidSimInfo received during test mode: " + i4);
            return;
        }
        if (this.mServiceStateTrackerExt.isNeedDisableIVSR()) {
            log("Disable IVSR");
            return;
        }
        if (i == 1) {
            this.isCsInvalidCard = true;
        }
        if (this.mMtkVoiceCapable && i == 1 && (str2 = this.mLastRegisteredPLMN) != null && str3.equals(str2)) {
            log("InvalidSimInfo reset SIM due to CS invalid");
            setEverIVSR(true);
            this.mLastRegisteredPLMN = null;
            this.mLastPSRegisteredPLMN = null;
            this.mCi.setSimPower(2, null);
            return;
        }
        if (i2 == 1 && isAllowRecoveryOnIvsr(asyncResult) && (str = this.mLastPSRegisteredPLMN) != null && str3.equals(str)) {
            log("InvalidSimInfo reset SIM due to PS invalid ");
            setEverIVSR(true);
            this.mLastRegisteredPLMN = null;
            this.mLastPSRegisteredPLMN = null;
            this.mCi.setSimPower(2, null);
        }
    }

    private void onModulationInfoReceived(AsyncResult asyncResult) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            loge("onModulationInfoReceived exception");
            return;
        }
        int i = ((int[]) asyncResult.result)[0];
        log("[onModulationInfoReceived] modulation:" + i);
        Intent intent = new Intent("com.mediatek.intent.action.ACTION_NOTIFY_MODULATION_INFO");
        intent.addFlags(536870912);
        intent.putExtra("modulation_info", i);
        this.mPhone.getContext().sendStickyBroadcastAsUser(intent, UserHandle.ALL);
    }

    private void onNetworkEventReceived(AsyncResult asyncResult) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            loge("onNetworkEventReceived exception");
            return;
        }
        int i = ((int[]) asyncResult.result)[1];
        log("[onNetworkEventReceived] event_type:" + i);
        Intent intent = new Intent("com.mediatek.intent.action.ACTION_NETWORK_EVENT");
        intent.addFlags(536870912);
        intent.putExtra("eventType", i + 1);
        this.mPhone.getContext().sendStickyBroadcastAsUser(intent, UserHandle.ALL);
    }

    private void onNetworkStateChangeResult(AsyncResult asyncResult) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            loge("onNetworkStateChangeResult exception");
            return;
        }
        String[] strArr = (String[]) asyncResult.result;
        if (!this.mPhone.isPhoneTypeGsm()) {
            if (strArr.length <= 5) {
                log("onCdmaNetworkExistStateChanged Network existence not reported");
                return;
            } else {
                if (strArr[5] == null || strArr[5].length() <= 0) {
                    return;
                }
                this.mNetworkExsit = 1 == Integer.parseInt(strArr[5]);
                return;
            }
        }
        int i = -1;
        int i2 = -1;
        if (strArr.length <= 0) {
            log("onNetworkStateChangeResult length zero");
            return;
        }
        int i3 = Integer.parseInt(strArr[0]);
        if (strArr[1] != null && strArr[1].length() > 0) {
            Integer.parseInt(strArr[1], 16);
        }
        if (strArr[2] != null && strArr[2].length() > 0) {
            if (strArr[2].equals("FFFFFFFF") || strArr[2].equals("ffffffff")) {
                log("Invalid cid:" + strArr[2]);
                strArr[2] = "0000ffff";
            }
            Long.parseLong(strArr[2], 16);
        }
        if (strArr[3] != null && strArr[3].length() > 0) {
            i = Integer.parseInt(strArr[3]);
        }
        if (strArr[4] != null && strArr[4].length() > 0) {
            i2 = Integer.parseInt(strArr[4]);
        }
        log("onNetworkStateChangeResult state:" + i3 + " Act:" + i + " cause:" + i2);
        try {
            if (this.mServiceStateTrackerExt.needRejectCauseNotification(i2)) {
                setRejectCauseNotification(i2);
            }
        } catch (RuntimeException e) {
            e.printStackTrace();
        }
    }

    private void onPsNetworkStateChangeResult(AsyncResult asyncResult) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            loge("onPsNetworkStateChangeResult exception");
            return;
        }
        int[] iArr = (int[]) asyncResult.result;
        if (iArr.length < 6) {
            this.mPsRegStateRaw = iArr[0];
            String strValueOf = String.valueOf(iArr[1]);
            if (strValueOf == null || strValueOf.length() < 5) {
                updateLocatedPlmn(null);
                return;
            } else {
                updateLocatedPlmn(strValueOf);
                return;
            }
        }
        if (iArr.length != 7) {
            loge("onPsNetworkStateChangeResult wrong size");
            return;
        }
        if (iArr[0] == 4) {
            ((MtkGsmCdmaPhone) this.mPhone).notifyMtkFakeServiceStateChanged(null);
            return;
        }
        if (iArr[0] != 1) {
            ((MtkGsmCdmaPhone) this.mPhone).notifyMtkFakeServiceStateChanged(null);
            this.mPhone.notifyServiceStateChanged(this.mSS);
            return;
        }
        boolean z = false;
        MtkServiceState mtkServiceState = new MtkServiceState();
        int iRilRadioTechnologyToNetworkType = ServiceState.rilRadioTechnologyToNetworkType(iArr[1]);
        boolean z2 = iArr[1] == 3 || iArr[1] == 16;
        if (iRilRadioTechnologyToNetworkType == 19) {
            z = true;
            iRilRadioTechnologyToNetworkType = 13;
        }
        NetworkRegistrationInfo networkRegistrationInfo = new NetworkRegistrationInfo(1, 1, z2 ? iArr[0] : 0, z2 ? iRilRadioTechnologyToNetworkType : 0, 0, false, null, null, "", false, 0, 0, 0);
        mtkServiceState.setVoiceRegState(regCodeToServiceState(networkRegistrationInfo.getRegistrationState()));
        mtkServiceState.addNetworkRegistrationInfo(networkRegistrationInfo);
        NetworkRegistrationInfo networkRegistrationInfo2 = new NetworkRegistrationInfo(2, 1, !z2 ? iArr[0] : 0, !z2 ? iRilRadioTechnologyToNetworkType : 0, 0, false, null, null, "", 0, iArr[4] == 1, iArr[5] == 2, iArr[6] == 1, new LteVopsSupportInfo(1, 1), z);
        mtkServiceState.setDataRegState(regCodeToServiceState(networkRegistrationInfo2.getRegistrationState()));
        mtkServiceState.addNetworkRegistrationInfo(networkRegistrationInfo2);
        log("broadcast fakeSS:" + mtkServiceState);
        ((MtkGsmCdmaPhone) this.mPhone).notifyMtkFakeServiceStateChanged(mtkServiceState);
        int dataNetworkType = mtkServiceState.getDataNetworkType();
        if (dataNetworkType == 0) {
            dataNetworkType = mtkServiceState.getVoiceNetworkType();
        }
        TelephonyDisplayInfo telephonyDisplayInfo = new TelephonyDisplayInfo(dataNetworkType, 0);
        log("broadcast fakeSS: " + telephonyDisplayInfo);
        ((MtkGsmCdmaPhone) this.mPhone).notifyDisplayInfoChanged(telephonyDisplayInfo);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void optimizateServiceStateDisplay(String str) {
        if (hideNrForServiceState(this.mSS)) {
            this.mPhone.notifyServiceStateChanged(this.mPhone.getServiceState());
        }
        this.mOldSSBeforeOptimization = new MtkServiceState(this.mSS);
        this.mIsNetworkModeChanging = true;
        log("SS display optimization, " + str + ", 5G switch: " + this.mIsUserFiveGEnabled + ", data subId: " + SubscriptionManager.getDefaultDataSubscriptionId());
        removeMessages(2000);
        sendEmptyMessageDelayed(2000, 17000L);
    }

    private void registerSsDisplayOptimizationEvent() {
        updateUserFiveGEnabledValue();
        this.mPhone.getContext().getContentResolver().registerContentObserver(Settings.Global.getUriFor("fiveg_user_enable"), false, this.mSsDisplayOptimization);
    }

    private void setEverIVSR(boolean z) {
        log("setEverIVSR:" + z);
        this.mEverIVSR = z;
        if (z) {
            Intent intent = new Intent("com.mediatek.intent.action.IVSR_NOTIFY");
            intent.putExtra("action", "start");
            SubscriptionManager.putPhoneIdAndSubIdExtra(intent, this.mPhone.getPhoneId());
            if (TelephonyManager.getDefault().getPhoneCount() == 1) {
                intent.addFlags(536870912);
            }
            log("broadcast ACTION_IVSR_NOTIFY intent");
            this.mPhone.getContext().sendBroadcastAsUser(intent, UserHandle.ALL);
        }
    }

    private void setNullState() {
        this.isCsInvalidCard = false;
    }

    private void setRejectCauseNotification(int i) {
        log("setRejectCauseNotification: create notification " + i);
        Context context = this.mPhone.getContext();
        Notification.Builder builder = new Notification.Builder(context);
        this.mNotificationBuilder = builder;
        builder.setWhen(System.currentTimeMillis());
        this.mNotificationBuilder.setAutoCancel(true);
        this.mNotificationBuilder.setSmallIcon(R.drawable.stat_sys_warning);
        this.mNotificationBuilder.setChannel("alert");
        this.mNotificationBuilder.setContentIntent(PendingIntent.getActivity(context, 0, new Intent(), 134217728));
        CharSequence text = "";
        CharSequence text2 = context.getText(134545511);
        if (i == 2) {
            text = context.getText(134545512);
        } else if (i == 3) {
            text = context.getText(134545513);
        } else if (i == 5) {
            text = context.getText(134545520);
        } else if (i == 6) {
            text = context.getText(134545521);
        } else if (i == 13) {
            text = context.getText(134545525);
        }
        log("setRejectCauseNotification: put notification " + ((Object) text2) + " / " + ((Object) text));
        this.mNotificationBuilder.setContentTitle(text2);
        this.mNotificationBuilder.setContentText(text);
        NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
        Notification notificationBuild = this.mNotificationBuilder.build();
        this.mNotification = notificationBuild;
        notificationManager.notify(REJECT_NOTIFICATION, notificationBuild);
    }

    private void updateLocatedPlmn(final String str) {
        String str2;
        Thread thread = null;
        if ((this.mLocatedPlmn == null && str != null) || ((this.mLocatedPlmn != null && str == null) || ((str2 = this.mLocatedPlmn) != null && str != null && !str2.equals(str)))) {
            final String str3 = this.mLocatedPlmn;
            thread = new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.MtkServiceStateTracker.3
                @Override // java.lang.Runnable
                public void run() {
                    MtkServiceStateTracker.this.broadcastLocatedPlmnChanged(str3, str);
                }
            });
        }
        this.mLocatedPlmn = str;
        if (thread != null) {
            thread.start();
        }
    }

    private void updatePLMN(boolean z, String str, boolean z2, String str2) {
        this.mtkHandler.sendMessage(obtainMessage(EVENT_UPDATE_PLMN, new MtkPlmn(z, str, z2, str2)));
    }

    private void updateSsOperatorName(ServiceState serviceState, String str, String str2, String str3) {
        serviceState.setOperatorName(str, str2, serviceState.getOperatorNumeric());
        NetworkRegistrationInfo networkRegistrationInfo = serviceState.getNetworkRegistrationInfo(2, 1);
        if (networkRegistrationInfo != null && networkRegistrationInfo.getCellIdentity() != null) {
            CellIdentity cellIdentity = networkRegistrationInfo.getCellIdentity();
            cellIdentity.setOperatorAlphaLong(str);
            cellIdentity.setOperatorAlphaShort(str2);
            NetworkRegistrationInfo networkRegistrationInfo2 = new NetworkRegistrationInfo(2, 1, networkRegistrationInfo.getRegistrationState(), networkRegistrationInfo.getAccessNetworkTechnology(), networkRegistrationInfo.getRejectCause(), networkRegistrationInfo.isEmergencyEnabled(), networkRegistrationInfo.getAvailableServices(), cellIdentity, networkRegistrationInfo.getRegisteredPlmn(), networkRegistrationInfo.getDataSpecificInfo().maxDataCalls, networkRegistrationInfo.getDataSpecificInfo().isDcNrRestricted, networkRegistrationInfo.getDataSpecificInfo().isNrAvailable, networkRegistrationInfo.getDataSpecificInfo().isEnDcAvailable, networkRegistrationInfo.getDataSpecificInfo().getLteVopsSupportInfo(), networkRegistrationInfo.getDataSpecificInfo().isUsingCarrierAggregation());
            networkRegistrationInfo2.setNrState(networkRegistrationInfo.getNrState());
            networkRegistrationInfo2.setRoamingType(networkRegistrationInfo.getRoamingType());
            serviceState.addNetworkRegistrationInfo(networkRegistrationInfo2);
        }
        NetworkRegistrationInfo networkRegistrationInfo3 = serviceState.getNetworkRegistrationInfo(1, 1);
        if (networkRegistrationInfo3 == null || networkRegistrationInfo3.getCellIdentity() == null) {
            return;
        }
        CellIdentity cellIdentity2 = networkRegistrationInfo3.getCellIdentity();
        cellIdentity2.setOperatorAlphaLong(str);
        cellIdentity2.setOperatorAlphaShort(str2);
        NetworkRegistrationInfo networkRegistrationInfo4 = new NetworkRegistrationInfo(1, 1, networkRegistrationInfo3.getRegistrationState(), networkRegistrationInfo3.getAccessNetworkTechnology(), networkRegistrationInfo3.getRejectCause(), networkRegistrationInfo3.isEmergencyEnabled(), networkRegistrationInfo3.getAvailableServices(), cellIdentity2, networkRegistrationInfo3.getRegisteredPlmn(), networkRegistrationInfo3.getVoiceSpecificInfo().cssSupported, networkRegistrationInfo3.getVoiceSpecificInfo().roamingIndicator, networkRegistrationInfo3.getVoiceSpecificInfo().systemIsInPrl, networkRegistrationInfo3.getVoiceSpecificInfo().defaultRoamingIndicator);
        networkRegistrationInfo4.setRoamingType(networkRegistrationInfo3.getRoamingType());
        serviceState.addNetworkRegistrationInfo(networkRegistrationInfo4);
    }

    private void updateTurboPLMN() {
        updatePLMN(false, null, false, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUserFiveGEnabledValue() {
        this.mIsUserFiveGEnabled = Settings.Global.getInt(this.mPhone.getContext().getContentResolver(), "fiveg_user_enable", 1) == 1;
    }

    protected final boolean IsInternationalRoamingException(String str) {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config");
        if (carrierConfigManager == null) {
            Rlog.e(LOG_TAG, "Carrier config service is not available");
            return false;
        }
        PersistableBundle configForSubId = carrierConfigManager.getConfigForSubId(this.mPhone.getSubId());
        if (configForSubId == null) {
            Rlog.e(LOG_TAG, "Can't get the config. subId = " + this.mPhone.getSubId());
            return false;
        }
        String[] stringArray = configForSubId.getStringArray("carrier_international_roaming_exception_list_strings");
        if (stringArray == null) {
            Rlog.e(LOG_TAG, "carrier_international_roaming_exception_list_strings is not available. subId = " + this.mPhone.getSubId());
            return false;
        }
        HashSet hashSet = new HashSet(Arrays.asList(stringArray));
        Rlog.d(LOG_TAG, "For subId = " + this.mPhone.getSubId() + ", international roaming exceptions are " + Arrays.toString(hashSet.toArray()) + ", operatorNumeric = " + str);
        if (hashSet.contains(str)) {
            Rlog.d(LOG_TAG, str + " in list.");
            return true;
        }
        Rlog.d(LOG_TAG, str + " is not in list.");
        return false;
    }

    protected boolean currentMccEqualsSimMcc(ServiceState serviceState) {
        try {
            return ((TelephonyManager) this.mPhone.getContext().getSystemService("phone")).getSimOperatorNumericForPhone(getPhoneId()).substring(0, 3).equals(serviceState.getOperatorNumeric().substring(0, 3));
        } catch (Exception e) {
            return false;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void dispose() {
        super.dispose();
        this.mCi.unregisterForCsNetworkStateChanged(this);
        this.mCi.unregisterForPsNetworkStateChanged(this);
        this.mtkHandlerThread.quit();
        if (this.mPhone.isPhoneTypeGsm()) {
            this.mCi.unregisterForIccRefresh(this);
            this.mCi.unSetInvalidSimInfo(this);
            this.mCi.unregisterForNetworkEvent(this);
            this.mCi.unregisterForModulation(this);
            try {
                if (this.mServiceStateTrackerExt.isImeiLocked()) {
                    this.mCi.unregisterForIMEILock(this);
                }
            } catch (RuntimeException e) {
                loge("No isImeiLocked");
            }
        }
    }

    public String getFemtoAct() {
        return this.mFemtoAct;
    }

    public String getFemtoCsgId() {
        return this.mCsgId;
    }

    public String getFemtoPlmn() {
        return this.mFemtoPlmn;
    }

    public int getLac() {
        return getLacFromCellIdentity(this.mCellIdentity);
    }

    public int getLacFromCellIdentity(CellIdentity cellIdentity) {
        if (cellIdentity == null) {
            return -1;
        }
        int lac = -1;
        int type = cellIdentity.getType();
        if (type == 1) {
            lac = ((CellIdentityGsm) cellIdentity).getLac();
        } else if (type == 3) {
            lac = ((CellIdentityLte) cellIdentity).getTac();
        } else if (type == 4) {
            lac = ((CellIdentityWcdma) cellIdentity).getLac();
        } else if (type == 5) {
            lac = ((CellIdentityTdscdma) cellIdentity).getLac();
        }
        if (lac == Integer.MAX_VALUE) {
            return -1;
        }
        return lac;
    }

    public String getLocatedPlmn() {
        return this.mLocatedPlmn;
    }

    protected String getOperatorNameFromEri() {
        String operatorAlpha = null;
        if (this.mPhone.isPhoneTypeCdma()) {
            if (this.mCi.getRadioState() != 1 || this.mIsSubscriptionFromRuim) {
                return null;
            }
            return this.mSS.getState() == 0 ? this.mPhone.getCdmaEriText() : this.mPhone.getContext().getText(R.string.permdesc_readCalendar).toString();
        }
        if (!this.mPhone.isPhoneTypeCdmaLte()) {
            return null;
        }
        String simOperatorNumericForPhone = TelephonyManager.from(this.mPhone.getContext()).getSimOperatorNumericForPhone(getPhoneId());
        boolean z = false;
        if (simOperatorNumericForPhone == null || !(simOperatorNumericForPhone.equals("310120") || simOperatorNumericForPhone.equals("310009") || simOperatorNumericForPhone.equals("311490") || simOperatorNumericForPhone.equals("311870"))) {
            this.mEnableERI = false;
        } else {
            this.mEnableERI = true;
        }
        if (!((this.mUiccController.getUiccCard(getPhoneId()) == null || this.mUiccController.getUiccCard(getPhoneId()).getOperatorBrandOverride() == null) ? false : true) && this.mCi.getRadioState() == 1 && this.mEriManager.isEriFileLoaded() && ((!ServiceState.isPsOnlyTech(this.mSS.getRilVoiceRadioTechnology()) || this.mPhone.getContext().getResources().getBoolean(R.bool.config_safetyProtectionEnabled)) && !this.mIsSubscriptionFromRuim && this.mEnableERI)) {
            operatorAlpha = this.mSS.getOperatorAlpha();
            if (this.mSS.getState() == 0) {
                if (TextUtils.isEmpty(operatorAlpha)) {
                    operatorAlpha = this.mPhone.getCdmaEriText();
                } else if (!TextUtils.isEmpty(this.mPhone.getCdmaEriText()) && this.mSS.getCdmaRoamingIndicator() != 1 && this.mSS.getCdmaRoamingIndicator() != 160) {
                    log("Append ERI text to PLMN String");
                    operatorAlpha = this.mSS.getOperatorAlphaLong() + "- " + this.mPhone.getCdmaEriText();
                }
            } else if (this.mSS.getState() == 3) {
                operatorAlpha = getServiceProviderName();
                if (TextUtils.isEmpty(operatorAlpha)) {
                    operatorAlpha = SystemProperties.get("ro.cdma.home.operator.alpha");
                }
            } else if (this.mSS.getDataRegistrationState() != 0) {
                operatorAlpha = this.mPhone.getContext().getText(R.string.permdesc_readCalendar).toString();
            }
        }
        if (this.mUiccApplcation == null || this.mUiccApplcation.getState() != IccCardApplicationStatus.AppState.APPSTATE_READY || this.mIccRecords == null || getCombinedRegState(this.mSS) != 0 || ServiceState.isPsOnlyTech(this.mSS.getRilVoiceRadioTechnology())) {
            return operatorAlpha;
        }
        boolean csimSpnDisplayCondition = this.mIccRecords.getCsimSpnDisplayCondition();
        if (csimSpnDisplayCondition) {
            try {
                if (this.mServiceStateTrackerExt.allowSpnDisplayed()) {
                    z = true;
                }
            } catch (RuntimeException e) {
                e.printStackTrace();
            }
        }
        csimSpnDisplayCondition = z;
        return (csimSpnDisplayCondition && this.mSS.getCdmaEriIconIndex() == 1 && isInHomeSidNid(this.mSS.getCdmaSystemId(), this.mSS.getCdmaNetworkId()) && this.mIccRecords != null) ? getServiceProviderName() : operatorAlpha;
    }

    public String getServiceProviderName() {
        String operatorBrandOverride = getOperatorBrandOverride();
        if (!TextUtils.isEmpty(operatorBrandOverride)) {
            log("getServiceProviderName operatorBrandOverride=" + operatorBrandOverride);
            return operatorBrandOverride;
        }
        String serviceProviderName = this.mIccRecords != null ? this.mIccRecords.getServiceProviderName() : "";
        PersistableBundle carrierConfig = getCarrierConfig();
        if (!carrierConfig.getBoolean("carrier_name_override_bool")) {
            return serviceProviderName;
        }
        String string = carrierConfig.getString("carrier_name_string");
        StringBuilder sb = new StringBuilder();
        sb.append("getServiceProviderName carrierName = ");
        sb.append(TextUtils.isEmpty(serviceProviderName) ? "n/a" : serviceProviderName);
        sb.append(" override_name = ");
        sb.append(TextUtils.isEmpty(string) ? "n/a" : string);
        log(sb.toString());
        return TextUtils.isEmpty(string) ? serviceProviderName : string;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void handleMessage(Message message) {
        int[] subId;
        logv("received event " + message.what);
        int i = message.what;
        if (i != 1) {
            if (i == 11) {
                this.mLastPhoneGetNitz = this.mPhone.getPhoneId();
                AsyncResult asyncResult = (AsyncResult) message.obj;
                final String str = (String) ((Object[]) asyncResult.result)[0];
                final long jLongValue = ((Long) ((Object[]) asyncResult.result)[1]).longValue();
                new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.MtkServiceStateTracker.2
                    @Override // java.lang.Runnable
                    public void run() {
                        MtkServiceStateTracker.this.setTimeFromNITZString(str, jLongValue);
                    }
                }).start();
                return;
            }
            if (i == 16) {
                if (this.mPhone.isPhoneTypeGsm()) {
                    if (this.mCellIdentity != null) {
                        refreshSpn(this.mSS, this.mCellIdentity.asCellLocation(), false);
                    } else {
                        refreshSpn(this.mSS, null, false);
                    }
                }
                super.handleMessage(message);
                if (this.mForceBroadcastServiceState) {
                    pollState();
                    return;
                }
                return;
            }
            if (i == 26) {
                if (this.mPhone.isPhoneTypeCdmaLte()) {
                    log("Receive EVENT_RUIM_READY");
                    pollStateInternal(false);
                } else {
                    log("Receive EVENT_RUIM_READY and Send Request getCDMASubscription.");
                    getSubscriptionInfoAndStartPollingThreads();
                }
                this.mCi.getNetworkSelectionMode(obtainMessage(14));
                return;
            }
            if (i == 53) {
                log("EVENT_IMS_SERVICE_STATE_CHANGED");
                if (this.mSS.getState() == 0 || this.mSS.getDataRegState() != 0) {
                    return;
                }
                this.mPhone.notifyServiceStateChanged(this.mPhone.getServiceState());
                return;
            }
            if (i == 55) {
                AsyncResult asyncResult2 = (AsyncResult) message.obj;
                boolean zIsServiceConnected = ((NetworkRegistrationManager) this.mRegStateManagers.get(1)).isServiceConnected();
                boolean z = this.mSS.getCellularRegState() == 0;
                if (zIsServiceConnected && z) {
                    super.handleMessage(message);
                    return;
                }
                if (zIsServiceConnected) {
                    log("Skip PHYSICAL_CHANNEL_CONFIG because md is not in service");
                } else {
                    log("Skip PHYSICAL_CHANNEL_CONFIG because service is not ready");
                }
                if (asyncResult2.exception == null) {
                    this.mLastPhysicalChannelConfigList = (List) asyncResult2.result;
                    return;
                }
                return;
            }
            if (i == EVENT_SIM_OPL_LOADED) {
                AsyncResult asyncResult3 = (AsyncResult) message.obj;
                if (asyncResult3 == null || asyncResult3.result == null) {
                    loge("EVENT_SIM_OPL_LOADED obj is null");
                    return;
                }
                if (((Integer) asyncResult3.result).intValue() == 101) {
                    if (!this.mPhone.isPhoneTypeGsm()) {
                        loge("EVENT_SIM_OPL_LOADED should not be here");
                        return;
                    }
                    log("EVENT_SIM_OPL_LOADED: EVENT_OPL");
                    if (this.mCellIdentity != null) {
                        refreshSpn(this.mSS, this.mCellIdentity.asCellLocation(), false);
                    } else {
                        refreshSpn(this.mSS, null, false);
                    }
                    if (this.mForceBroadcastServiceState) {
                        pollState();
                        return;
                    }
                    return;
                }
                return;
            }
            if (i == EVENT_RECHECK_NRM_STATUS) {
                log("EVENT_RECHECK_NRM_STATUS trigger pollState");
                pollStateInternal(true);
                return;
            }
            if (i == 43 || i == 44) {
                if (message.obj != null) {
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    if (asyncResult4.exception != null || asyncResult4.result == null) {
                        this.mLastCellInfoList = null;
                    }
                }
                super.handleMessage(message);
                return;
            }
            if (i == 49) {
                if (SubscriptionManager.getDefaultDataSubscriptionId() == -1 && (subId = SubscriptionManager.getSubId(RadioCapabilitySwitchUtil.getMainCapabilityPhoneId())) != null && subId.length > 0) {
                    ProxyController.getInstance().unregisterForAllDataDisconnected(subId[0], this);
                }
                super.handleMessage(message);
                return;
            }
            if (i != 50) {
                switch (i) {
                    case 100:
                        onNetworkStateChangeResult((AsyncResult) message.obj);
                        break;
                    case 101:
                        if (this.mPhone.isPhoneTypeGsm()) {
                            onInvalidSimInfoReceived((AsyncResult) message.obj);
                        }
                        break;
                    case 102:
                        onFemtoCellInfoResult((AsyncResult) message.obj);
                        break;
                    case 103:
                        onPsNetworkStateChangeResult((AsyncResult) message.obj);
                        break;
                    case EVENT_NETWORK_EVENT /* 104 */:
                        if (this.mPhone.isPhoneTypeGsm()) {
                            onNetworkEventReceived((AsyncResult) message.obj);
                        }
                        break;
                    case EVENT_MODULATION_INFO /* 105 */:
                        if (this.mPhone.isPhoneTypeGsm()) {
                            onModulationInfoReceived((AsyncResult) message.obj);
                        }
                        break;
                    case EVENT_ICC_REFRESH /* 106 */:
                        if (this.mPhone.isPhoneTypeGsm()) {
                            AsyncResult asyncResult5 = (AsyncResult) message.obj;
                            if (asyncResult5.exception == null) {
                                IccRefreshResponse iccRefreshResponse = (IccRefreshResponse) asyncResult5.result;
                                if (iccRefreshResponse != null) {
                                    int i2 = iccRefreshResponse.refreshResult;
                                    if (i2 != 0) {
                                        if (i2 != 4) {
                                            if (i2 != 5) {
                                                if (i2 != 6) {
                                                    log("GSST EVENT_ICC_REFRESH IccRefreshResponse =" + iccRefreshResponse);
                                                }
                                            }
                                        }
                                        this.mLastRegisteredPLMN = null;
                                        this.mLastPSRegisteredPLMN = null;
                                        log("Reset mLastRegisteredPLMN/mLastPSRegisteredPLMNfor ICC refresh");
                                    }
                                    if (iccRefreshResponse.efId == 28423) {
                                        this.mLastRegisteredPLMN = null;
                                        this.mLastPSRegisteredPLMN = null;
                                        log("Reset flag of IVSR for IMSI update");
                                    }
                                } else {
                                    log("IccRefreshResponse is null");
                                }
                            }
                        }
                        break;
                    case EVENT_IMEI_LOCK /* 107 */:
                        if (this.mPhone.isPhoneTypeGsm()) {
                            log("handle EVENT_IMEI_LOCK GSM");
                            this.mIsImeiLock = true;
                        }
                        break;
                    default:
                        switch (i) {
                            case 2000:
                                this.mIsNetworkModeChanging = false;
                                log("SS display optimization, timeout to pause to notify ServiceState, trigger to pollState");
                                this.mSS = new MtkServiceState(this.mOldSSBeforeOptimization);
                                pollState();
                                break;
                            case 2001:
                                if (!shouldPauseNotifyServiceState()) {
                                    ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(this.mPhone.isVolteEnabled(), this.mPhone);
                                }
                                break;
                            case 2002:
                                this.mIsModemDataRestoring = false;
                                break;
                            default:
                                super.handleMessage(message);
                                break;
                        }
                        break;
                }
            }
        }
        log("handle EVENT_RADIO_STATE_CHANGED");
        if (!this.mPhone.isPhoneTypeGsm() && this.mCi.getRadioState() == 1) {
            handleCdmaSubscriptionSource(this.mCdmaSSM.getCdmaSubscriptionSource());
            queueNextSignalStrengthPoll();
        }
        RadioManager.getInstance().setRadioPower(this.mDesiredPowerState, this.mPhone.getPhoneId());
        pollStateInternal(true);
    }

    protected void handlePollStateResult(int i, AsyncResult asyncResult) {
        boolean zIsRoamingBetweenOperators;
        if (asyncResult.userObj != this.mPollingContext) {
            return;
        }
        if (asyncResult.exception != null) {
            if (asyncResult.exception instanceof IllegalStateException) {
                log("handlePollStateResult exception " + asyncResult.exception);
            }
            CommandException.Error commandError = asyncResult.exception instanceof CommandException ? asyncResult.exception.getCommandError() : null;
            if (commandError == CommandException.Error.RADIO_NOT_AVAILABLE) {
                cancelPollState();
                if (this.hasPendingPollState) {
                    this.hasPendingPollState = false;
                    pollState();
                    loge("handlePollStateResult trigger pending pollState()");
                    return;
                } else {
                    if (this.mCi.getRadioState() != 1) {
                        if (this.mCi.getRadioState() == 2) {
                            this.mNewSS.setStateOutOfService();
                        } else {
                            this.mNewSS.setStateOff();
                        }
                        this.mNewPSCellIdentity = null;
                        setSignalStrengthDefaultValues();
                        this.mPsRegStateRaw = 0;
                        pollStateDone();
                        loge("Mlog: pollStateDone to notify RADIO_NOT_AVAILABLE");
                        return;
                    }
                    return;
                }
            }
            if (commandError != CommandException.Error.OP_NOT_ALLOWED_BEFORE_REG_NW) {
                loge("RIL implementation has returned an error where it must succeed" + asyncResult.exception);
            }
        } else {
            try {
                handlePollStateResultMessage(i, asyncResult);
            } catch (RuntimeException e) {
                loge("Exception while polling service state. Probably malformed RIL response." + e);
            }
        }
        int[] iArr = this.mPollingContext;
        iArr[0] = iArr[0] - 1;
        if (this.mPollingContext[0] == 0) {
            this.mNewSS.keepCellularDataServiceState();
            if (this.mTransportManager.isInLegacyMode()) {
                NetworkRegistrationInfo networkRegistrationInfo = this.mNewSS.getNetworkRegistrationInfo(2, 1);
                try {
                    if (Integer.valueOf(TelephonyManager.getTelephonyProperty(this.mPhone.getPhoneId(), PROP_IWLAN_STATE, "0")).intValue() > 0 && networkRegistrationInfo != null) {
                        log("isInLegacyMode and IWLAN is actived, overwrite (PS, WWAN)");
                        this.mNewSS.addNetworkRegistrationInfo(new NetworkRegistrationInfo(2, 1, 1, 18, networkRegistrationInfo.getRejectCause(), networkRegistrationInfo.isEmergencyEnabled(), networkRegistrationInfo.getAvailableServices(), networkRegistrationInfo.getCellIdentity(), networkRegistrationInfo.getRegisteredPlmn(), networkRegistrationInfo.getDataSpecificInfo().maxDataCalls, networkRegistrationInfo.getDataSpecificInfo().isDcNrRestricted, networkRegistrationInfo.getDataSpecificInfo().isNrAvailable, networkRegistrationInfo.getDataSpecificInfo().isEnDcAvailable, networkRegistrationInfo.getDataSpecificInfo().getLteVopsSupportInfo(), networkRegistrationInfo.getDataSpecificInfo().isUsingCarrierAggregation()));
                        this.mNewSS.addNetworkRegistrationInfo(new NetworkRegistrationInfo(2, 2, 1, 18, networkRegistrationInfo.getRejectCause(), networkRegistrationInfo.isEmergencyEnabled(), networkRegistrationInfo.getAvailableServices(), networkRegistrationInfo.getCellIdentity(), networkRegistrationInfo.getRegisteredPlmn(), networkRegistrationInfo.getDataSpecificInfo().maxDataCalls, networkRegistrationInfo.getDataSpecificInfo().isDcNrRestricted, networkRegistrationInfo.getDataSpecificInfo().isNrAvailable, networkRegistrationInfo.getDataSpecificInfo().isEnDcAvailable, networkRegistrationInfo.getDataSpecificInfo().getLteVopsSupportInfo(), networkRegistrationInfo.getDataSpecificInfo().isUsingCarrierAggregation()));
                    }
                } catch (Exception e2) {
                }
            }
            combinePsRegistrationStates(this.mNewSS);
            updateOperatorNameForServiceState(this.mNewSS);
            if (this.mPhone.isPhoneTypeGsm()) {
                boolean z = this.mNewSS.getVoiceRegState() == 0 || this.mNewSS.getDataRegState() == 0;
                boolean z2 = this.mCi.getRadioState() == 0 && (this.mNewSS.getRilDataRadioTechnology() == 18 || this.mNewSS.getIwlanRegState() == 0);
                String operatorNumeric = this.mNewSS.getOperatorNumeric();
                if (((!z && !TextUtils.isEmpty(operatorNumeric)) || (z && TextUtils.isEmpty(operatorNumeric))) && !z2 && this.hasPendingPollState) {
                    loge("Temporary service state, need restart PollState");
                    this.hasPendingPollState = false;
                    cancelPollState();
                    pollState();
                    return;
                }
                updateRoamingState();
                if (this.mCi.getHalVersion().lessOrEqual(RIL.RADIO_HAL_VERSION_1_2)) {
                    boolean imsEccOnly = getImsEccOnly();
                    if (!z && imsEccOnly) {
                        this.mEmergencyOnly = true;
                    }
                }
                this.mNewSS.setEmergencyOnly(this.mEmergencyOnly);
            } else {
                boolean z3 = false;
                if (!isSidsAllZeros() && isHomeSid(this.mNewSS.getCdmaSystemId())) {
                    z3 = true;
                }
                if (this.mIsSubscriptionFromRuim && (zIsRoamingBetweenOperators = isRoamingBetweenOperators(this.mNewSS.getVoiceRoaming(), this.mNewSS)) != this.mNewSS.getVoiceRoaming()) {
                    log("isRoamingBetweenOperators=" + zIsRoamingBetweenOperators + ". Override CDMA voice roaming to " + zIsRoamingBetweenOperators);
                    this.mNewSS.setVoiceRoaming(zIsRoamingBetweenOperators);
                }
                if (ServiceState.isCdma(getRilDataRadioTechnologyForWwan(this.mNewSS))) {
                    if (this.mNewSS.getState() == 0) {
                        boolean voiceRoaming = this.mNewSS.getVoiceRoaming();
                        if (this.mNewSS.getDataRoaming() != voiceRoaming) {
                            log("Data roaming != Voice roaming. Override data roaming to " + voiceRoaming);
                            this.mNewSS.setDataRoaming(voiceRoaming);
                        }
                    } else {
                        boolean zIsRoamIndForHomeSystem = isRoamIndForHomeSystem(this.mRoamingIndicator);
                        boolean dataRoaming = this.mNewSS.getDataRoaming();
                        if (this.mNewSS.getDataRoaming() == zIsRoamIndForHomeSystem) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("isRoamIndForHomeSystem=");
                            sb.append(zIsRoamIndForHomeSystem);
                            sb.append(", override data roaming to ");
                            sb.append(!zIsRoamIndForHomeSystem);
                            log(sb.toString());
                            this.mNewSS.setDataRoaming(!zIsRoamIndForHomeSystem);
                        }
                        int[] intArray = getCarrierConfig().getIntArray("cdma_enhanced_roaming_indicator_for_home_network_int_array");
                        if (!dataRoaming && !zIsRoamIndForHomeSystem && intArray != null && intArray.length == 0) {
                            log("isRoamIndForHomeSystem=" + zIsRoamIndForHomeSystem + ", override data roaming to false");
                            this.mNewSS.setDataRoaming(false);
                        }
                    }
                }
                if (!this.mEmergencyOnly && this.mCi.getRadioState() == 1) {
                    if (this.mNewSS.getVoiceRegState() == 1 && this.mNewSS.getDataRegState() == 1 && this.mNetworkExsit) {
                        this.mEmergencyOnly = true;
                    }
                    this.mEmergencyOnly = mergeEmergencyOnlyCdmaIms(this.mEmergencyOnly);
                }
                this.mNewSS.setEmergencyOnly(this.mEmergencyOnly);
                this.mNewSS.setCdmaDefaultRoamingIndicator(this.mDefaultRoamingIndicator);
                this.mNewSS.setCdmaRoamingIndicator(this.mRoamingIndicator);
                boolean z4 = TextUtils.isEmpty(this.mPrlVersion) ? false : true;
                if (!z4 || this.mNewSS.getRilVoiceRadioTechnology() == 0) {
                    logv("Turn off roaming indicator if !isPrlLoaded or voice RAT is unknown");
                    this.mNewSS.setCdmaRoamingIndicator(1);
                } else if (!isSidsAllZeros()) {
                    if (!z3 && !this.mIsInPrl) {
                        this.mNewSS.setCdmaRoamingIndicator(this.mDefaultRoamingIndicator);
                    } else if (!z3 || this.mIsInPrl) {
                        if ((z3 || !this.mIsInPrl) && this.mRoamingIndicator <= 2) {
                            this.mNewSS.setCdmaRoamingIndicator(1);
                        } else {
                            this.mNewSS.setCdmaRoamingIndicator(this.mRoamingIndicator);
                        }
                    } else if (ServiceState.isPsOnlyTech(this.mNewSS.getRilVoiceRadioTechnology())) {
                        log("Turn off roaming indicator as voice is LTE or NR");
                        this.mNewSS.setCdmaRoamingIndicator(1);
                    } else {
                        this.mNewSS.setCdmaRoamingIndicator(2);
                    }
                }
                int cdmaRoamingIndicator = this.mNewSS.getCdmaRoamingIndicator();
                this.mNewSS.setCdmaEriIconIndex(this.mEriManager.getCdmaEriIconIndex(cdmaRoamingIndicator, this.mDefaultRoamingIndicator));
                this.mNewSS.setCdmaEriIconMode(this.mEriManager.getCdmaEriIconMode(cdmaRoamingIndicator, this.mDefaultRoamingIndicator));
                log("Set CDMA Roaming Indicator to: " + this.mNewSS.getCdmaRoamingIndicator() + ". voiceRoaming = " + this.mNewSS.getVoiceRoaming() + ". dataRoaming = " + this.mNewSS.getDataRoaming() + ", isPrlLoaded = " + z4 + ". namMatch = " + z3 + " , mIsInPrl = " + this.mIsInPrl + ", mRoamingIndicator = " + this.mRoamingIndicator + ", mDefaultRoamingIndicator= " + this.mDefaultRoamingIndicator + ", set mEmergencyOnly=" + this.mEmergencyOnly + ", mNetworkExsit=" + this.mNetworkExsit);
            }
            pollStateDone();
        }
    }

    protected void handlePollStateResultMessage(int i, AsyncResult asyncResult) {
        if (i == 4) {
            NetworkRegistrationInfo networkRegistrationInfo = (NetworkRegistrationInfo) asyncResult.result;
            VoiceSpecificRegistrationInfo voiceSpecificInfo = networkRegistrationInfo.getVoiceSpecificInfo();
            int registrationState = networkRegistrationInfo.getRegistrationState();
            boolean z = voiceSpecificInfo.cssSupported;
            ServiceState.networkTypeToRilRadioTechnology(networkRegistrationInfo.getAccessNetworkTechnology());
            this.mNewSS.setVoiceRegState(regCodeToServiceState(registrationState));
            this.mNewSS.setCssIndicator(z ? 1 : 0);
            this.mNewSS.addNetworkRegistrationInfo(networkRegistrationInfo);
            setPhyCellInfoFromCellIdentity(this.mNewSS, networkRegistrationInfo.getCellIdentity());
            this.mNewSS.setRilVoiceRegState(registrationState);
            int rejectCause = networkRegistrationInfo.getRejectCause();
            this.mEmergencyOnly = networkRegistrationInfo.isEmergencyEnabled();
            if (this.mPhone.isPhoneTypeGsm()) {
                this.mGsmVoiceRoaming = regCodeIsRoaming(registrationState);
                this.mNewRejectCode = rejectCause;
                RegInfoMonitor.notifyRegInfoUpdate(this.mPhone, networkRegistrationInfo);
                return;
            }
            int i2 = voiceSpecificInfo.roamingIndicator;
            int i3 = voiceSpecificInfo.systemIsInPrl;
            int i4 = voiceSpecificInfo.defaultRoamingIndicator;
            this.mRegistrationState = registrationState;
            boolean z2 = regCodeIsRoaming(registrationState) && !isRoamIndForHomeSystem(i2);
            this.mNewSS.setVoiceRoaming(z2);
            if (z2) {
                this.mNewSS.setRilVoiceRegState(5);
            }
            this.mRoamingIndicator = i2;
            this.mIsInPrl = i3 != 0;
            this.mDefaultRoamingIndicator = i4;
            int systemId = 0;
            int networkId = 0;
            CellIdentity cellIdentity = networkRegistrationInfo.getCellIdentity();
            if (cellIdentity != null && cellIdentity.getType() == 2) {
                systemId = ((CellIdentityCdma) cellIdentity).getSystemId();
                networkId = ((CellIdentityCdma) cellIdentity).getNetworkId();
            }
            this.mNewSS.setCdmaSystemAndNetworkId(systemId, networkId);
            if (rejectCause == 0) {
                this.mRegistrationDeniedReason = "General";
            } else if (rejectCause == 1) {
                this.mRegistrationDeniedReason = "Authentication Failure";
            } else {
                this.mRegistrationDeniedReason = "";
            }
            if (this.mRegistrationState == 3) {
                log("Registration denied, " + this.mRegistrationDeniedReason);
                return;
            }
            return;
        }
        if (i == 5) {
            NetworkRegistrationInfo networkRegistrationInfo2 = (NetworkRegistrationInfo) asyncResult.result;
            this.mNewSS.addNetworkRegistrationInfo(networkRegistrationInfo2);
            DataSpecificRegistrationInfo dataSpecificInfo = networkRegistrationInfo2.getDataSpecificInfo();
            int registrationState2 = networkRegistrationInfo2.getRegistrationState();
            int iRegCodeToServiceState = regCodeToServiceState(registrationState2);
            int iNetworkTypeToRilRadioTechnology = ServiceState.networkTypeToRilRadioTechnology(networkRegistrationInfo2.getAccessNetworkTechnology());
            boolean zUpdateNrFrequencyRangeFromPhysicalChannelConfigs = false;
            log("handlePollStateResultMessage: PS cellular. " + networkRegistrationInfo2);
            if (iRegCodeToServiceState == 1) {
                this.mLastPhysicalChannelConfigList = null;
                zUpdateNrFrequencyRangeFromPhysicalChannelConfigs = false | updateNrFrequencyRangeFromPhysicalChannelConfigs(null, this.mNewSS);
            }
            boolean zUpdateNrStateFromPhysicalChannelConfigs = updateNrStateFromPhysicalChannelConfigs(this.mLastPhysicalChannelConfigList, this.mNewSS) | zUpdateNrFrequencyRangeFromPhysicalChannelConfigs;
            setPhyCellInfoFromCellIdentity(this.mNewSS, networkRegistrationInfo2.getCellIdentity());
            if (zUpdateNrStateFromPhysicalChannelConfigs) {
                TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
            }
            this.mNewSS.setRilDataRegState(registrationState2);
            int iIntValue = 0;
            try {
                iIntValue = Integer.valueOf(TelephonyManager.getTelephonyProperty(this.mPhone.getPhoneId(), PROP_MTK_DATA_TYPE, "0")).intValue();
            } catch (Exception e) {
                loge("INVALID PROP_MTK_DATA_TYPE");
            }
            this.mNewSS.setProprietaryDataRadioTechnology(iIntValue);
            if (this.mPhone.isPhoneTypeGsm()) {
                this.mNewReasonDataDenied = networkRegistrationInfo2.getRejectCause();
                this.mNewMaxDataCalls = dataSpecificInfo.maxDataCalls;
                this.mGsmDataRoaming = regCodeIsRoaming(registrationState2);
                this.mNewSS.setDataRoamingFromRegistration(this.mGsmDataRoaming);
            } else if (this.mPhone.isPhoneTypeCdma()) {
                boolean zRegCodeIsRoaming = regCodeIsRoaming(registrationState2);
                this.mNewSS.setDataRoaming(zRegCodeIsRoaming);
                log("handlPollStateResultMessage: cdma dataServiceState=" + iRegCodeToServiceState + " regState=" + registrationState2 + " dataRadioTechnology=" + iNetworkTypeToRilRadioTechnology);
                this.mNewSS.setDataRoamingFromRegistration(zRegCodeIsRoaming);
            } else {
                int rilDataRadioTechnologyForWwan = getRilDataRadioTechnologyForWwan(this.mSS);
                if ((rilDataRadioTechnologyForWwan == 0 && iNetworkTypeToRilRadioTechnology != 0) || ((ServiceState.isCdma(rilDataRadioTechnologyForWwan) && ServiceState.isPsOnlyTech(iNetworkTypeToRilRadioTechnology)) || (ServiceState.isPsOnlyTech(rilDataRadioTechnologyForWwan) && ServiceState.isCdma(iNetworkTypeToRilRadioTechnology)))) {
                    this.mCi.getSignalStrength(obtainMessage(3));
                }
                if (regCodeIsRoaming(registrationState2)) {
                    this.mNewSS.setRilDataRegState(5);
                }
                boolean zRegCodeIsRoaming2 = regCodeIsRoaming(registrationState2);
                this.mNewSS.setDataRoaming(zRegCodeIsRoaming2);
                this.mNewSS.setDataRoamingFromRegistration(zRegCodeIsRoaming2);
                log("handlPollStateResultMessage: CdmaLteSST dataServiceState=" + iRegCodeToServiceState + " registrationState=" + registrationState2 + " dataRadioTechnology=" + iNetworkTypeToRilRadioTechnology);
            }
            this.mNewPSCellIdentity = networkRegistrationInfo2.getCellIdentity();
            updateServiceStateLteEarfcnBoost(this.mNewSS, getLteEarfcn(networkRegistrationInfo2.getCellIdentity()));
            return;
        }
        if (i == 6) {
            NetworkRegistrationInfo networkRegistrationInfo3 = (NetworkRegistrationInfo) asyncResult.result;
            this.mNewSS.addNetworkRegistrationInfo(networkRegistrationInfo3);
            log("handlePollStateResultMessage: PS IWLAN. " + networkRegistrationInfo3);
            return;
        }
        if (i != 7) {
            if (i != 14) {
                loge("handlePollStateResultMessage: Unexpected RIL response received: " + i);
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            this.mNewSS.setIsManualSelection(iArr[0] == 1);
            if (iArr[0] == 1 && this.mPhone.shouldForceAutoNetworkSelect()) {
                this.mPhone.setNetworkSelectionModeAutomatic((Message) null);
                log(" Forcing Automatic Network Selection, manual selection is not allowed");
                return;
            }
            return;
        }
        if (this.mPhone.isPhoneTypeGsm()) {
            String[] strArr = (String[]) asyncResult.result;
            if (strArr == null || strArr.length < 3) {
                return;
            }
            this.mNewSS.setOperatorAlphaLongRaw(strArr[0]);
            this.mNewSS.setOperatorAlphaShortRaw(strArr[1]);
            String operatorBrandOverride = getOperatorBrandOverride();
            this.mCdnr.updateEfForBrandOverride(operatorBrandOverride);
            if (operatorBrandOverride == null) {
                this.mNewSS.setOperatorName(strArr[0], strArr[1], strArr[2]);
                return;
            }
            log("EVENT_POLL_STATE_OPERATOR: use brandOverride=" + operatorBrandOverride);
            this.mNewSS.setOperatorName(operatorBrandOverride, operatorBrandOverride, strArr[2]);
            return;
        }
        String[] strArr2 = (String[]) asyncResult.result;
        if (strArr2 == null || strArr2.length < 3) {
            log("EVENT_POLL_STATE_OPERATOR_CDMA: error parsing opNames");
            return;
        }
        if (strArr2[2] == null || strArr2[2].length() < 5 || "00000".equals(strArr2[2]) || "N/AN/A".equals(strArr2[2])) {
            strArr2[2] = SystemProperties.get("ro.cdma.home.operator.numeric", "");
            log("RIL_REQUEST_OPERATOR.response[2], the numeric,  is bad. Using SystemProperties 'ro.cdma.home.operator.numeric'= " + strArr2[2]);
        }
        String str = strArr2[2];
        boolean z3 = false;
        if (str != null && str.startsWith("2134") && str.length() == 7) {
            String strCheckMccBySidLtmOff = this.mPlusCodeUtils.checkMccBySidLtmOff(str);
            if (!strCheckMccBySidLtmOff.equals("0")) {
                strArr2[2] = strCheckMccBySidLtmOff + str.substring(4);
                log("EVENT_POLL_STATE_OPERATOR_CDMA: checkMccBySidLtmOff: numeric =" + strCheckMccBySidLtmOff + ", plmn =" + strArr2[2]);
            }
            z3 = true;
        }
        if (!this.mIsSubscriptionFromRuim) {
            if (z3) {
                strArr2[1] = lookupOperatorName(this.mPhone.getContext(), this.mPhone.getSubId(), strArr2[2], false);
            }
            this.mNewSS.setOperatorName(null, strArr2[1], strArr2[2]);
            return;
        }
        String operatorBrandOverride2 = getOperatorBrandOverride();
        this.mCdnr.updateEfForBrandOverride(operatorBrandOverride2);
        if (operatorBrandOverride2 == null) {
            this.mNewSS.setOperatorName(strArr2[0], strArr2[1], strArr2[2]);
            return;
        }
        log("EVENT_POLL_STATE_OPERATOR_CDMA: use brand=" + operatorBrandOverride2);
        this.mNewSS.setOperatorName(operatorBrandOverride2, operatorBrandOverride2, strArr2[2]);
    }

    protected void hangupAllImsCall() {
        Phone imsPhone = this.mPhone.getImsPhone();
        if (imsPhone != null) {
            if (!imsPhone.isWifiCallingEnabled() || this.mDeviceShuttingDown) {
                imsPhone.getForegroundCall().hangupIfAlive();
                imsPhone.getBackgroundCall().hangupIfAlive();
                imsPhone.getRingingCall().hangupIfAlive();
                log("hangupAndPowerOff: hangup VoLTE call.");
            }
        }
    }

    protected void hangupAndPowerOff() {
        if (!this.mPhone.isPhoneTypeGsm() || this.mPhone.isInCall()) {
            this.mPhone.mCT.mRingingCall.hangupIfAlive();
            this.mPhone.mCT.mBackgroundCall.hangupIfAlive();
            this.mPhone.mCT.mForegroundCall.hangupIfAlive();
        }
        hangupAllImsCall();
        RadioManager.getInstance();
        RadioManager.sendRequestBeforeSetRadioPower(false, this.mPhone.getPhoneId());
        this.mCi.setRadioPower(false, obtainMessage(54));
    }

    public boolean isConcurrentVoiceAndDataAllowed() {
        if (this.mSS.getCssIndicator() == 1) {
            return true;
        }
        if (!this.mPhone.isPhoneTypeGsm()) {
            if (this.mPhone.isPhoneTypeCdma()) {
                return false;
            }
            return (SystemProperties.getInt("ro.vendor.mtk_c2k_lte_mode", 0) == 1 && this.mSS.getRilDataRadioTechnology() == 14) || isConcurrentVoiceAndDataAllowedForVolte() || this.mSS.getCssIndicator() == 1;
        }
        if (isConcurrentVoiceAndDataAllowedForVolte() || isConcurrentVoiceAndDataAllowedForIwlan()) {
            return true;
        }
        return super.isConcurrentVoiceAndDataAllowed();
    }

    protected boolean isOperatorConsideredNonRoaming(ServiceState serviceState) {
        boolean zIsOperatorConsideredNonRoaming = super.isOperatorConsideredNonRoaming(serviceState);
        if (zIsOperatorConsideredNonRoaming) {
            log("isOperatorConsideredNonRoaming true");
        }
        return zIsOperatorConsideredNonRoaming;
    }

    protected boolean isOperatorConsideredRoaming(ServiceState serviceState) {
        String simOperatorNumericForPhone = ((TelephonyManager) this.mPhone.getContext().getSystemService("phone")).getSimOperatorNumericForPhone(getPhoneId());
        String operatorNumeric = serviceState.getOperatorNumeric();
        if (ServiceStateTrackerInjector.isOperatorConsideredNonRoaming(this, operatorNumeric)) {
            return false;
        }
        boolean zIsOperatorConsideredRoaming = (TextUtils.isEmpty(simOperatorNumericForPhone) || !((simOperatorNumericForPhone.substring(0, 3).equals("404") || simOperatorNumericForPhone.substring(0, 3).equals("405")) && !TextUtils.isEmpty(operatorNumeric) && (operatorNumeric.substring(0, 3).equals("404") || operatorNumeric.substring(0, 3).equals("405")))) ? super.isOperatorConsideredRoaming(serviceState) : true;
        if (zIsOperatorConsideredRoaming) {
            log("isOperatorConsideredRoaming true");
        }
        return zIsOperatorConsideredRoaming;
    }

    protected void log(String str) {
        if (this.mPhone.isPhoneTypeGsm()) {
            Rlog.d(LOG_TAG, "[GsmSST" + this.mPhone.getPhoneId() + "] " + str);
            return;
        }
        if (this.mPhone.isPhoneTypeCdma()) {
            Rlog.d(LOG_TAG, "[CdmaSST" + this.mPhone.getPhoneId() + "] " + str);
            return;
        }
        Rlog.d(LOG_TAG, "[CdmaLteSST" + this.mPhone.getPhoneId() + "] " + str);
    }

    protected void loge(String str) {
        if (this.mPhone.isPhoneTypeGsm()) {
            Rlog.e(LOG_TAG, "[GsmSST" + this.mPhone.getPhoneId() + "] " + str);
            return;
        }
        if (this.mPhone.isPhoneTypeCdma()) {
            Rlog.e(LOG_TAG, "[CdmaSST" + this.mPhone.getPhoneId() + "] " + str);
            return;
        }
        Rlog.e(LOG_TAG, "[CdmaLteSST" + this.mPhone.getPhoneId() + "] " + str);
    }

    protected void logv(String str) {
        if (this.mPhone.isPhoneTypeGsm()) {
            Rlog.v(LOG_TAG, "[GsmSST" + this.mPhone.getPhoneId() + "] " + str);
            return;
        }
        if (this.mPhone.isPhoneTypeCdma()) {
            Rlog.v(LOG_TAG, "[CdmaSST" + this.mPhone.getPhoneId() + "] " + str);
            return;
        }
        Rlog.v(LOG_TAG, "[CdmaLteSST" + this.mPhone.getPhoneId() + "] " + str);
    }

    protected boolean mtkPowerOffNonDdsPhone() {
        boolean zEquals = TextUtils.equals(SystemProperties.get("persist.radio.airplane_mode_on", ""), "1");
        boolean zAreAllDataDisconnected = this.mPhone.areAllDataDisconnected();
        log("powerOffRadioSafely: apm:" + zEquals + ", allDataDisconnected:" + zAreAllDataDisconnected + ", mSubId:" + this.mPhone.getSubId() + ", shutdown:" + isDeviceShuttingDown());
        if (!zAreAllDataDisconnected || zEquals || isDeviceShuttingDown()) {
            return false;
        }
        log("Non-dds data disconnected, turn off radio right away.");
        hangupAndPowerOff();
        this.mPendingRadioPowerOffAfterDataOff = false;
        return true;
    }

    protected int mtkReplaceDdsIfUnset(int i) {
        int[] subId;
        if (i != -1 || (subId = SubscriptionManager.getSubId(RadioCapabilitySwitchUtil.getMainCapabilityPhoneId())) == null || subId.length <= 0) {
            return i;
        }
        log("powerOffRadioSafely: replace dds with main protocol sub ");
        return subId[0];
    }

    protected int mtkReplaceDisconnectTimer() {
        if (!isDeviceShuttingDown()) {
            return 30000;
        }
        log("Shutting down, reduce 30s->5s for data to disconnect, then turn off radio.");
        return 5000;
    }

    protected boolean notifySignalStrength() {
        if (!shouldPauseNotifyServiceState()) {
            return super.notifySignalStrength();
        }
        log("SS display optimization, pause to notify ServiceState: stop notifySignalStrength");
        return false;
    }

    protected void notifySpnDisplayUpdate(CarrierDisplayNameData carrierDisplayNameData) {
        int subId = this.mPhone.getSubId();
        if (this.mSubId != subId || carrierDisplayNameData.shouldShowPlmn() != this.mCurShowPlmn || carrierDisplayNameData.shouldShowSpn() != this.mCurShowSpn || !TextUtils.equals(carrierDisplayNameData.getSpn(), this.mCurSpn) || !TextUtils.equals(carrierDisplayNameData.getDataSpn(), this.mCurDataSpn) || !TextUtils.equals(carrierDisplayNameData.getPlmn(), this.mCurPlmn)) {
            log("updateSpnDisplay: " + String.format("updateSpnDisplay: changed sending intent, rule=%d, showPlmn='%b', plmn='%s', showSpn='%b', spn='%s', dataSpn='%s', subId='%d'", Integer.valueOf(getCarrierNameDisplayBitmask(this.mSS)), Boolean.valueOf(carrierDisplayNameData.shouldShowPlmn()), carrierDisplayNameData.getPlmn(), Boolean.valueOf(carrierDisplayNameData.shouldShowSpn()), carrierDisplayNameData.getSpn(), carrierDisplayNameData.getDataSpn(), Integer.valueOf(subId)));
            Intent intent = new Intent(ServiceStateTrackerInjector.getSpnUpdateActionName(this));
            intent.putExtra("android.telephony.extra.SHOW_SPN", carrierDisplayNameData.shouldShowSpn());
            intent.putExtra("android.telephony.extra.SPN", carrierDisplayNameData.getSpn());
            intent.putExtra("android.telephony.extra.DATA_SPN", carrierDisplayNameData.getDataSpn());
            intent.putExtra("android.telephony.extra.SHOW_PLMN", carrierDisplayNameData.shouldShowPlmn());
            intent.putExtra("android.telephony.extra.PLMN", carrierDisplayNameData.getPlmn());
            intent.putExtra("hnbName", this.mHhbName);
            intent.putExtra("csgId", this.mCsgId);
            intent.putExtra("domain", this.mFemtocellDomain);
            intent.putExtra("femtocell", this.mIsFemtocell);
            if (TelephonyManager.getDefault().getPhoneCount() == 1) {
                intent.addFlags(536870912);
            }
            SubscriptionManager.putPhoneIdAndSubIdExtra(intent, this.mPhone.getPhoneId());
            this.mPhone.getContext().sendStickyBroadcastAsUser(intent, UserHandle.ALL);
            updatePLMN(carrierDisplayNameData.shouldShowPlmn(), carrierDisplayNameData.getPlmn(), carrierDisplayNameData.shouldShowSpn(), carrierDisplayNameData.getSpn());
        }
        this.mSubId = subId;
        this.mCurShowSpn = carrierDisplayNameData.shouldShowSpn();
        this.mCurShowPlmn = carrierDisplayNameData.shouldShowPlmn();
        this.mCurSpn = carrierDisplayNameData.getSpn();
        this.mCurDataSpn = carrierDisplayNameData.getDataSpn();
        this.mCurPlmn = carrierDisplayNameData.getPlmn();
    }

    protected void onCarrierConfigChanged() {
        PersistableBundle carrierConfig = getCarrierConfig();
        log("CarrierConfigChange " + carrierConfig);
        this.mEriManager.loadEriFile();
        this.mCdnr.updateEfForEri(getOperatorNameFromEri());
        this.mEriTriggeredPollState = true;
        updateLteEarfcnLists(carrierConfig);
        updateReportingCriteria(carrierConfig);
        updateOperatorNamePattern(carrierConfig);
        this.mCdnr.updateEfFromCarrierConfig(carrierConfig);
        updateSpnDisplay();
        pollState();
    }

    protected boolean onSignalStrengthResult(AsyncResult asyncResult) {
        return super.onSignalStrengthResult(asyncResult);
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void onUpdateIccAvailability() {
        if (this.mUiccController == null) {
            return;
        }
        resetCdmaSubscriptionInfos();
        UiccCardApplication uiccCardApplication = getUiccCardApplication();
        if ((this.mPhone.isPhoneTypeCdma() || this.mPhone.isPhoneTypeCdmaLte()) && uiccCardApplication != null) {
            IccCardApplicationStatus.AppState state = uiccCardApplication.getState();
            if ((state == IccCardApplicationStatus.AppState.APPSTATE_PIN || state == IccCardApplicationStatus.AppState.APPSTATE_PUK) && this.mNetworkExsit) {
                this.mEmergencyOnly = true;
            } else {
                this.mEmergencyOnly = false;
            }
            this.mEmergencyOnly = mergeEmergencyOnlyCdmaIms(this.mEmergencyOnly);
            log("[CDMA]onUpdateIccAvailability, appstate=" + state + ", mNetworkExsit=" + this.mNetworkExsit + ", mEmergencyOnly=" + this.mEmergencyOnly);
        }
        if (this.mUiccApplcation != uiccCardApplication) {
            if (this.mIccRecords instanceof SIMRecords) {
                this.mCdnr.updateEfFromUsim((SIMRecords) null);
            } else if (this.mIccRecords instanceof RuimRecords) {
                this.mCdnr.updateEfFromRuim((RuimRecords) null);
            }
            if (this.mUiccApplcation != null) {
                log("Removing stale icc objects.");
                this.mUiccApplcation.unregisterForReady(this);
                if (this.mIccRecords != null) {
                    this.mIccRecords.unregisterForRecordsLoaded(this);
                    if (this.mPhone.isPhoneTypeGsm()) {
                        this.mIccRecords.unregisterForRecordsEvents(this);
                    }
                }
                this.mIccRecords = null;
                this.mUiccApplcation = null;
            }
            if (uiccCardApplication != null) {
                logv("New card found");
                this.mUiccApplcation = uiccCardApplication;
                this.mIccRecords = this.mUiccApplcation.getIccRecords();
                if (this.mPhone.isPhoneTypeGsm()) {
                    this.mUiccApplcation.registerForReady(this, 17, (Object) null);
                    if (this.mIccRecords != null) {
                        this.mIccRecords.registerForRecordsLoaded(this, 16, (Object) null);
                        this.mIccRecords.registerForRecordsEvents(this, EVENT_SIM_OPL_LOADED, (Object) null);
                        return;
                    }
                    return;
                }
                if (this.mIsSubscriptionFromRuim) {
                    this.mUiccApplcation.registerForReady(this, 26, (Object) null);
                    if (this.mIccRecords != null) {
                        this.mIccRecords.registerForRecordsLoaded(this, 27, (Object) null);
                    }
                }
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:100:0x0233  */
    /* JADX WARN: Code duplicated, block: B:103:0x023f  */
    /* JADX WARN: Code duplicated, block: B:104:0x0241  */
    /* JADX WARN: Code duplicated, block: B:107:0x0247  */
    /* JADX WARN: Code duplicated, block: B:108:0x024a  */
    /* JADX WARN: Code duplicated, block: B:243:0x0465  */
    /* JADX WARN: Code duplicated, block: B:247:0x0473  */
    /* JADX WARN: Code duplicated, block: B:249:0x0479  */
    /* JADX WARN: Code duplicated, block: B:263:0x0597 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:266:0x059f  */
    /* JADX WARN: Code duplicated, block: B:268:0x05a7  */
    /* JADX WARN: Code duplicated, block: B:269:0x05ab  */
    /* JADX WARN: Code duplicated, block: B:273:0x05f8 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:274:0x05fa  */
    /* JADX WARN: Code duplicated, block: B:276:0x0607  */
    /* JADX WARN: Code duplicated, block: B:277:0x060a  */
    /* JADX WARN: Code duplicated, block: B:280:0x0668  */
    /* JADX WARN: Code duplicated, block: B:281:0x066a  */
    /* JADX WARN: Code duplicated, block: B:284:0x0678  */
    /* JADX WARN: Code duplicated, block: B:288:0x06b6  */
    /* JADX WARN: Code duplicated, block: B:291:0x06cd  */
    /* JADX WARN: Code duplicated, block: B:293:0x06e6  */
    /* JADX WARN: Code duplicated, block: B:298:0x0701  */
    /* JADX WARN: Code duplicated, block: B:300:0x0705  */
    /* JADX WARN: Code duplicated, block: B:302:0x0719  */
    /* JADX WARN: Code duplicated, block: B:305:0x0727  */
    /* JADX WARN: Code duplicated, block: B:308:0x0732  */
    /* JADX WARN: Code duplicated, block: B:311:0x073b  */
    /* JADX WARN: Code duplicated, block: B:314:0x0743  */
    /* JADX WARN: Code duplicated, block: B:316:0x0771 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:322:0x0784  */
    /* JADX WARN: Code duplicated, block: B:326:0x0791  */
    /* JADX WARN: Code duplicated, block: B:328:0x079d  */
    /* JADX WARN: Code duplicated, block: B:335:0x07cb A[ADDED_TO_REGION, REMOVE] */
    /* JADX WARN: Code duplicated, block: B:338:0x07d3  */
    /* JADX WARN: Code duplicated, block: B:339:0x07df  */
    /* JADX WARN: Code duplicated, block: B:342:0x07e9  */
    /* JADX WARN: Code duplicated, block: B:345:0x07f4  */
    /* JADX WARN: Code duplicated, block: B:349:0x080a  */
    /* JADX WARN: Code duplicated, block: B:352:0x0814  */
    /* JADX WARN: Code duplicated, block: B:354:0x0819  */
    /* JADX WARN: Code duplicated, block: B:356:0x083b  */
    /* JADX WARN: Code duplicated, block: B:361:0x085b  */
    /* JADX WARN: Code duplicated, block: B:364:0x0865  */
    /* JADX WARN: Code duplicated, block: B:370:0x0881  */
    /* JADX WARN: Code duplicated, block: B:371:0x08a6  */
    /* JADX WARN: Code duplicated, block: B:373:0x08b2  */
    /* JADX WARN: Code duplicated, block: B:375:0x08b7  */
    /* JADX WARN: Code duplicated, block: B:378:0x08ca  */
    /* JADX WARN: Code duplicated, block: B:379:0x08d1  */
    /* JADX WARN: Code duplicated, block: B:381:0x08d9  */
    /* JADX WARN: Code duplicated, block: B:385:0x08e4  */
    /* JADX WARN: Code duplicated, block: B:388:0x090f  */
    /* JADX WARN: Code duplicated, block: B:390:0x0944  */
    /* JADX WARN: Code duplicated, block: B:392:0x094e A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:395:0x0954  */
    /* JADX WARN: Code duplicated, block: B:398:0x0969 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:399:0x096b  */
    /* JADX WARN: Code duplicated, block: B:401:0x096e  */
    /* JADX WARN: Code duplicated, block: B:402:0x0986  */
    /* JADX WARN: Code duplicated, block: B:404:0x098a  */
    /* JADX WARN: Code duplicated, block: B:407:0x099e  */
    /* JADX WARN: Code duplicated, block: B:409:0x09ac  */
    /* JADX WARN: Code duplicated, block: B:412:0x09b6  */
    /* JADX WARN: Code duplicated, block: B:417:0x09c2  */
    /* JADX WARN: Code duplicated, block: B:420:0x09d4  */
    /* JADX WARN: Code duplicated, block: B:422:0x09e0  */
    /* JADX WARN: Code duplicated, block: B:423:0x09ec  */
    /* JADX WARN: Code duplicated, block: B:426:0x09f6  */
    /* JADX WARN: Code duplicated, block: B:428:0x0a02  */
    /* JADX WARN: Code duplicated, block: B:430:0x0a10  */
    /* JADX WARN: Code duplicated, block: B:434:0x0a2a  */
    /* JADX WARN: Code duplicated, block: B:436:0x0a2f  */
    /* JADX WARN: Code duplicated, block: B:438:0x0a34 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:439:0x0a36  */
    /* JADX WARN: Code duplicated, block: B:442:0x0a43 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:445:0x0a49  */
    /* JADX WARN: Code duplicated, block: B:447:0x0a4e  */
    /* JADX WARN: Code duplicated, block: B:449:0x0a55  */
    /* JADX WARN: Code duplicated, block: B:451:0x0a5c  */
    /* JADX WARN: Code duplicated, block: B:453:0x0a63  */
    /* JADX WARN: Code duplicated, block: B:455:0x0a6a  */
    /* JADX WARN: Code duplicated, block: B:458:0x0a7a  */
    /* JADX WARN: Code duplicated, block: B:465:0x0a95 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:468:0x0aa6  */
    /* JADX WARN: Code duplicated, block: B:470:0x0ab3  */
    /* JADX WARN: Code duplicated, block: B:472:0x0abe  */
    /* JADX WARN: Code duplicated, block: B:474:0x0ac5  */
    /* JADX WARN: Code duplicated, block: B:477:0x0ad2  */
    /* JADX WARN: Code duplicated, block: B:479:0x0ae4  */
    /* JADX WARN: Code duplicated, block: B:481:0x0ae8  */
    /* JADX WARN: Code duplicated, block: B:484:0x0b13  */
    /* JADX WARN: Code duplicated, block: B:485:0x0b1a  */
    /* JADX WARN: Code duplicated, block: B:486:0x0b23  */
    /* JADX WARN: Code duplicated, block: B:489:0x0b2d  */
    /* JADX WARN: Code duplicated, block: B:492:0x0b3d  */
    /* JADX WARN: Code duplicated, block: B:499:0x0875 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:500:? A[LOOP:1: B:362:0x085f->B:500:?, LOOP_END, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:93:0x0220  */
    /* JADX WARN: Code duplicated, block: B:95:0x0225  */
    /* JADX WARN: Code duplicated, block: B:96:0x022a  */
    /* JADX WARN: Code duplicated, block: B:99:0x022e  */
    /* JADX WARN: Instruction removed from duplicated block: B:370:0x0881, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:492:0x0b3d, please report this as an issue */
    protected void pollStateDone() {
        boolean z;
        boolean z2;
        boolean z3;
        boolean z4;
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z9;
        boolean z10;
        boolean z11;
        boolean z12;
        boolean z13;
        boolean z14;
        int i;
        ServiceState serviceState;
        MtkServiceState mtkServiceState;
        boolean z15;
        TelephonyManager telephonyManager;
        SparseBooleanArray sparseBooleanArray;
        boolean z16;
        boolean z17;
        boolean z18;
        boolean z19;
        ServiceState serviceState2;
        boolean z20;
        boolean z21;
        int[] availableTransports;
        boolean z22;
        int length;
        int i2;
        boolean z23;
        String str;
        int i3;
        SparseBooleanArray sparseBooleanArray2;
        SparseBooleanArray sparseBooleanArray3;
        SparseBooleanArray sparseBooleanArray4;
        String operatorNumeric;
        String plmn;
        boolean voiceRoaming;
        int cidFromCellIdentity;
        int i4;
        int i5;
        boolean z24;
        boolean z25;
        SparseBooleanArray sparseBooleanArray5;
        boolean z26;
        int registrationState;
        int registrationState2;
        int i6;
        boolean z27;
        this.once_pollState_done = true;
        MtkServiceState mtkServiceState2 = this.mSS;
        MtkServiceState mtkServiceState3 = this.mNewSS;
        NetworkRegistrationInfo networkRegistrationInfo = this.mNewSS.getNetworkRegistrationInfo(1, 1);
        NetworkRegistrationInfo networkRegistrationInfo2 = this.mNewSS.getNetworkRegistrationInfo(2, 1);
        if (networkRegistrationInfo.getCellIdentity() != null) {
            refreshSpn(this.mNewSS, networkRegistrationInfo.getCellIdentity().asCellLocation(), true);
        } else if (networkRegistrationInfo2.getCellIdentity() != null) {
            refreshSpn(this.mNewSS, networkRegistrationInfo2.getCellIdentity().asCellLocation(), true);
        } else {
            refreshSpn(this.mNewSS, null, true);
        }
        if (!this.mPhone.isPhoneTypeGsm()) {
            updateRoamingState();
        }
        if (TelephonyUtils.IS_DEBUGGABLE && SystemProperties.getBoolean("telephony.test.forceRoaming", false)) {
            this.mNewSS.setRoaming(true);
        }
        useDataRegStateForDataOnlyDevices();
        processIwlanRegistrationInfo();
        ServiceState mtkServiceState4 = new MtkServiceState(this.mNewSS);
        setRoamingType(mtkServiceState4);
        log("Poll ServiceState done: oldSS=[" + this.mSS + "]");
        log("Poll ServiceState done: newSS=[" + mtkServiceState4 + "] oldMaxDataCalls=" + this.mMaxDataCalls + " mNewMaxDataCalls=" + this.mNewMaxDataCalls + " oldReasonDataDenied=" + this.mReasonDataDenied + " mNewReasonDataDenied=" + this.mNewReasonDataDenied + " isImsEccOnly= " + getImsEccOnly());
        boolean z28 = this.mSS.getState() != 0 && this.mNewSS.getState() == 0;
        boolean z29 = this.mSS.getDataRegState() != 0 && this.mNewSS.getDataRegState() == 0;
        boolean z30 = this.mSS.getState() == 0 && this.mNewSS.getState() != 0;
        boolean z31 = this.mSS.getState() != 3 && this.mNewSS.getState() == 3;
        SparseBooleanArray sparseBooleanArray6 = new SparseBooleanArray(this.mTransportManager.getAvailableTransports().length);
        SparseBooleanArray sparseBooleanArray7 = new SparseBooleanArray(this.mTransportManager.getAvailableTransports().length);
        SparseBooleanArray sparseBooleanArray8 = new SparseBooleanArray(this.mTransportManager.getAvailableTransports().length);
        SparseBooleanArray sparseBooleanArray9 = new SparseBooleanArray(this.mTransportManager.getAvailableTransports().length);
        boolean z32 = false;
        int[] availableTransports2 = this.mTransportManager.getAvailableTransports();
        int length2 = availableTransports2.length;
        boolean z33 = false;
        int i7 = 0;
        while (true) {
            NetworkRegistrationInfo networkRegistrationInfo3 = networkRegistrationInfo2;
            if (i7 >= length2) {
                break;
            }
            int i8 = availableTransports2[i7];
            int i9 = length2;
            int[] iArr = availableTransports2;
            NetworkRegistrationInfo networkRegistrationInfo4 = this.mSS.getNetworkRegistrationInfo(2, i8);
            boolean z34 = z29;
            NetworkRegistrationInfo networkRegistrationInfo5 = this.mNewSS.getNetworkRegistrationInfo(2, i8);
            sparseBooleanArray6.put(i8, (networkRegistrationInfo4 == null || !networkRegistrationInfo4.isInService() || z31) && networkRegistrationInfo5 != null && networkRegistrationInfo5.isInService());
            sparseBooleanArray7.put(i8, networkRegistrationInfo4 != null && networkRegistrationInfo4.isInService() && (networkRegistrationInfo5 == null || !networkRegistrationInfo5.isInService()));
            int accessNetworkTechnology = networkRegistrationInfo4 != null ? networkRegistrationInfo4.getAccessNetworkTechnology() : 0;
            int accessNetworkTechnology2 = networkRegistrationInfo5 != null ? networkRegistrationInfo5.getAccessNetworkTechnology() : 0;
            boolean zIsUsingCarrierAggregation = (networkRegistrationInfo4 == null || networkRegistrationInfo4.getDataSpecificInfo() == null) ? false : networkRegistrationInfo4.getDataSpecificInfo().isUsingCarrierAggregation();
            boolean zIsUsingCarrierAggregation2 = (networkRegistrationInfo5 == null || networkRegistrationInfo5.getDataSpecificInfo() == null) ? false : networkRegistrationInfo5.getDataSpecificInfo().isUsingCarrierAggregation();
            boolean z35 = z32;
            if (accessNetworkTechnology == accessNetworkTechnology2) {
                z24 = z31;
                z25 = zIsUsingCarrierAggregation;
                sparseBooleanArray5 = sparseBooleanArray7;
                if (z25 == zIsUsingCarrierAggregation2) {
                    z26 = false;
                }
                sparseBooleanArray8.put(i8, z26);
                if (accessNetworkTechnology != accessNetworkTechnology2) {
                    z33 = true;
                }
                if (networkRegistrationInfo4 != null) {
                    registrationState = networkRegistrationInfo4.getRegistrationState();
                } else {
                    registrationState = 4;
                }
                if (networkRegistrationInfo5 != null) {
                    registrationState2 = networkRegistrationInfo5.getRegistrationState();
                } else {
                    registrationState2 = 4;
                }
                i6 = registrationState2;
                if (registrationState != i6) {
                    z27 = true;
                } else {
                    z27 = false;
                }
                sparseBooleanArray9.put(i8, z27);
                if (registrationState != i6) {
                    z32 = true;
                } else {
                    z32 = z35;
                }
                i7++;
                networkRegistrationInfo2 = networkRegistrationInfo3;
                length2 = i9;
                availableTransports2 = iArr;
                z29 = z34;
                z31 = z24;
                sparseBooleanArray7 = sparseBooleanArray5;
            } else {
                z24 = z31;
                z25 = zIsUsingCarrierAggregation;
                sparseBooleanArray5 = sparseBooleanArray7;
            }
            z26 = true;
            sparseBooleanArray8.put(i8, z26);
            if (accessNetworkTechnology != accessNetworkTechnology2) {
                z33 = true;
            }
            if (networkRegistrationInfo4 != null) {
                registrationState = networkRegistrationInfo4.getRegistrationState();
            } else {
                registrationState = 4;
            }
            if (networkRegistrationInfo5 != null) {
                registrationState2 = networkRegistrationInfo5.getRegistrationState();
            } else {
                registrationState2 = 4;
            }
            i6 = registrationState2;
            if (registrationState != i6) {
                z27 = true;
            } else {
                z27 = false;
            }
            sparseBooleanArray9.put(i8, z27);
            if (registrationState != i6) {
                z32 = true;
            } else {
                z32 = z35;
            }
            i7++;
            networkRegistrationInfo2 = networkRegistrationInfo3;
            length2 = i9;
            availableTransports2 = iArr;
            z29 = z34;
            z31 = z24;
            sparseBooleanArray7 = sparseBooleanArray5;
        }
        boolean z36 = z29;
        boolean z37 = z31;
        SparseBooleanArray sparseBooleanArray10 = sparseBooleanArray7;
        boolean z38 = z32;
        boolean z39 = (z33 || this.mSS.getRilDataRadioTechnology() == this.mNewSS.getRilDataRadioTechnology()) ? false : true;
        boolean z40 = this.mSS.getState() != this.mNewSS.getState();
        boolean z41 = this.mSS.getNrFrequencyRange() != this.mNewSS.getNrFrequencyRange();
        boolean z42 = this.mSS.getNrState() != this.mNewSS.getNrState();
        List<CellIdentity> prioritizedCellIdentities = getPrioritizedCellIdentities(this.mNewSS);
        CellIdentity cellIdentity = prioritizedCellIdentities.isEmpty() ? null : (CellIdentity) prioritizedCellIdentities.get(0);
        boolean z43 = this.mCellIdentity != null ? !this.mCellIdentity.isSameCell(cellIdentity) : cellIdentity != null;
        if ((this.mNewSS.getDataRegistrationState() == 0) && mtkServiceState3.getIwlanRegState() != 0) {
            this.mRatRatcheter.ratchet(this.mSS, this.mNewSS, z43);
        }
        boolean z44 = this.mSS.getRilVoiceRadioTechnology() != this.mNewSS.getRilVoiceRadioTechnology();
        boolean z45 = !mtkServiceState4.equals(this.mSS) || this.mForceBroadcastServiceState;
        boolean z46 = !this.mSS.getVoiceRoaming() && this.mNewSS.getVoiceRoaming();
        boolean z47 = z40;
        boolean z48 = this.mSS.getVoiceRoaming() && !this.mNewSS.getVoiceRoaming();
        if (mtkServiceState3.getIwlanRegState() == 0) {
            z = z42;
            z2 = false;
        } else {
            z = z42;
            z2 = !this.mSS.getDataRoaming() && this.mNewSS.getDataRoaming();
        }
        boolean dataRoaming = mtkServiceState3.getIwlanRegState() == 0 ? this.mSS.getDataRoaming() : this.mSS.getDataRoaming() && !this.mNewSS.getDataRoaming();
        boolean z49 = z41;
        boolean z50 = z43;
        boolean z51 = this.mRejectCode != this.mNewRejectCode;
        boolean z52 = this.mSS.getCssIndicator() != this.mNewSS.getCssIndicator();
        if (this.mPhone.isPhoneTypeCdmaLte()) {
            int rilDataRadioTechnologyForWwan = getRilDataRadioTechnologyForWwan(this.mSS);
            int rilDataRadioTechnologyForWwan2 = getRilDataRadioTechnologyForWwan(this.mNewSS);
            boolean z53 = this.mNewSS.getDataRegistrationState() == 0 && ((ServiceState.isPsOnlyTech(rilDataRadioTechnologyForWwan) && rilDataRadioTechnologyForWwan2 == 13) || (rilDataRadioTechnologyForWwan == 13 && ServiceState.isPsOnlyTech(rilDataRadioTechnologyForWwan2)));
            boolean z54 = ((!ServiceState.isPsOnlyTech(rilDataRadioTechnologyForWwan2) && rilDataRadioTechnologyForWwan2 != 13) || ServiceState.isPsOnlyTech(rilDataRadioTechnologyForWwan) || rilDataRadioTechnologyForWwan == 13) ? false : true;
            z5 = z53;
            z3 = z54;
            z4 = rilDataRadioTechnologyForWwan2 >= 4 && rilDataRadioTechnologyForWwan2 <= 8;
        } else {
            z3 = false;
            z4 = false;
            z5 = false;
        }
        if (this.mSS.getVoiceRoaming() && mtkServiceState4.getVoiceRoaming()) {
            z6 = z4;
            z7 = this.mSS.getVoiceRoamingType() != mtkServiceState4.getVoiceRoamingType();
            if (!this.mSS.getDataRoaming() && mtkServiceState4.getDataRoaming()) {
                z8 = z7;
                z9 = this.mSS.getDataRoamingType() != mtkServiceState4.getDataRoamingType();
                z10 = (this.mSS.getOperatorNumeric() == null || mtkServiceState4.getOperatorNumeric() != null) && ((this.mSS.getOperatorNumeric() != null && mtkServiceState4.getOperatorNumeric() == null) || ((this.mSS.getOperatorNumeric() == null && mtkServiceState4.getOperatorNumeric() != null) || !this.mSS.getOperatorNumeric().equals(mtkServiceState4.getOperatorNumeric())));
                StringBuilder sb = new StringBuilder();
                sb.append("pollStateDone: hasRegistered = ");
                sb.append(z28);
                sb.append(" hasDeregistered = ");
                sb.append(z30);
                sb.append(" hasDataAttached = ");
                sb.append(sparseBooleanArray6);
                sb.append(" hasDataDetached = ");
                sb.append(sparseBooleanArray10);
                sb.append(" hasDataRegStateChanged = ");
                sb.append(sparseBooleanArray9);
                sb.append(" hasRilVoiceRadioTechnologyChanged = ");
                sb.append(z44);
                sb.append(" hasRilDataRadioTechnologyChanged = ");
                sb.append(sparseBooleanArray8);
                sb.append(" hasDataTransportPreferenceChanged = ");
                sb.append(z39);
                sb.append(" hasChanged = ");
                sb.append(z45);
                sb.append(" hasVoiceRoamingOn = ");
                sb.append(z46);
                sb.append(" hasVoiceRoamingOff = ");
                sb.append(z48);
                sb.append(" hasDataRoamingOn =");
                z11 = z2;
                sb.append(z11);
                z12 = z45;
                sb.append(" hasDataRoamingOff = ");
                sb.append(dataRoaming);
                sb.append(" hasLocationChanged = ");
                sb.append(z50);
                sb.append(" has4gHandoff = ");
                sb.append(z5);
                sb.append(" hasMultiApnSupport = ");
                sb.append(z3);
                sb.append(" hasLostMultiApnSupport = ");
                sb.append(z6);
                sb.append(" hasCssIndicatorChanged = ");
                z13 = z52;
                sb.append(z13);
                sb.append(" hasNrFrequencyRangeChanged = ");
                sb.append(z49);
                sb.append(" hasNrStateChanged = ");
                z14 = z;
                sb.append(z14);
                sb.append(" hasVoiceRoamingTypeChange = ");
                sb.append(z8);
                sb.append(" hasDataRoamingTypeChange = ");
                sb.append(z9);
                sb.append(" hasAirplaneModeOnlChanged = ");
                sb.append(z37);
                sb.append(" hasPlmnChange = ");
                sb.append(z10);
                log(sb.toString());
                if (z47 || z38) {
                    if (this.mPhone.isPhoneTypeGsm()) {
                        i = 50114;
                    } else {
                        i = 50116;
                    }
                    EventLog.writeEvent(i, Integer.valueOf(this.mSS.getState()), Integer.valueOf(this.mSS.getDataRegistrationState()), Integer.valueOf(this.mNewSS.getState()), Integer.valueOf(this.mNewSS.getDataRegistrationState()));
                }
                if (this.mPhone.isPhoneTypeGsm()) {
                    if (z44) {
                        cidFromCellIdentity = getCidFromCellIdentity(cellIdentity);
                        Object[] objArr = new Object[3];
                        if (PhoneDebug.VDBG) {
                            i4 = cidFromCellIdentity;
                        } else {
                            i4 = -1;
                        }
                        objArr[0] = Integer.valueOf(i4);
                        objArr[1] = Integer.valueOf(this.mSS.getRilVoiceRadioTechnology());
                        objArr[2] = Integer.valueOf(this.mNewSS.getRilVoiceRadioTechnology());
                        EventLog.writeEvent(50123, objArr);
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append("RAT switched ");
                        sb2.append(ServiceState.rilRadioTechnologyToString(this.mSS.getRilVoiceRadioTechnology()));
                        sb2.append(" -> ");
                        sb2.append(ServiceState.rilRadioTechnologyToString(this.mNewSS.getRilVoiceRadioTechnology()));
                        sb2.append(" at cell ");
                        if (PhoneDebug.VDBG) {
                            i5 = cidFromCellIdentity;
                        } else {
                            i5 = -1;
                        }
                        sb2.append(i5);
                        log(sb2.toString());
                    }
                    if (z13) {
                        this.mPhone.notifyAllActiveDataConnections();
                    }
                    this.mReasonDataDenied = this.mNewReasonDataDenied;
                    this.mMaxDataCalls = this.mNewMaxDataCalls;
                    this.mRejectCode = this.mNewRejectCode;
                }
                serviceState = new ServiceState(this.mPhone.getServiceState());
                int rilDataRadioTechnology = this.mSS.getRilDataRadioTechnology();
                ServiceState serviceState3 = this.mSS;
                this.mSS = this.mNewSS;
                this.mNewSS = serviceState3;
                mtkServiceState = this.mSS;
                MtkServiceState mtkServiceState5 = this.mNewSS;
                this.mCellIdentity = cellIdentity;
                if (z44) {
                    updatePhoneObject();
                }
                z15 = z46;
                telephonyManager = (TelephonyManager) this.mPhone.getContext().getSystemService("phone");
                if (z33) {
                    sparseBooleanArray = sparseBooleanArray6;
                    telephonyManager.setDataNetworkTypeForPhone(this.mPhone.getPhoneId(), this.mSS.getRilDataRadioTechnology());
                    if (this.mPhone.isPhoneTypeCdmaLte() && (rilDataRadioTechnology == 14 || this.mSS.getRilDataRadioTechnology() == 14)) {
                        log("[CDMALTE]pollStateDone: update signal for RAT switch between diff group");
                        sendMessage(obtainMessage(10));
                    }
                } else {
                    sparseBooleanArray = sparseBooleanArray6;
                }
                if (z28) {
                    this.mNetworkAttachedRegistrants.notifyRegistrants();
                    this.mNitzState.handleNetworkAvailable();
                    this.mLastRegisteredPLMN = this.mSS.getOperatorNumeric();
                }
                if (z30) {
                    this.mNetworkDetachedRegistrants.notifyRegistrants();
                    this.mNitzState.handleNetworkUnavailable();
                }
                if (z51) {
                    setNotification(2001);
                }
                if (this.mPhone.isPhoneTypeCdmaLte() || !this.mEriTriggeredPollState) {
                    z16 = z12;
                } else {
                    z16 = true;
                    this.mEriTriggeredPollState = false;
                }
                if (shouldPauseNotifyServiceState()) {
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append("SS display optimization, pause to notify ServiceState, pollStateDone, hasRegistered: ");
                    sb3.append(z28);
                    sb3.append(", hasDataRegistered: ");
                    z17 = z36;
                    sb3.append(z17);
                    sb3.append(", phoneTypeUpdated: ");
                    sb3.append(this.mPhoneTypeUpdated);
                    log(sb3.toString());
                    if (!z28 || (z17 && !this.mPhoneTypeUpdated)) {
                        z18 = false;
                        this.mIsNetworkModeChanging = false;
                        removeMessages(2000);
                    } else {
                        z19 = false;
                        z18 = false;
                    }
                    this.mPhoneTypeUpdated = z18;
                    if (!z33) {
                        sparseBooleanArray8 = sparseBooleanArray8;
                        z39 = z39;
                    } else if (!ServiceProviderUtils.isChinaTelecom(this.mPhone.getOperatorNumeric()) && this.mNewSS.getRilDataRadioTechnology() == 0 && this.mNewSS.getRilVoiceRadioTechnology() == 0) {
                        log("CT Card delay update volte state");
                        removeMessages(2001);
                        sparseBooleanArray8 = sparseBooleanArray8;
                        z39 = z39;
                        sendEmptyMessageDelayed(2001, 1000L);
                    } else if (!this.mIsNetworkModeChanging) {
                        ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(this.mPhone.isVolteEnabled(), this.mPhone);
                    }
                    if (miui.telephony.TelephonyManager.isCustSingleSimDevice() && this.mPhone.getPhoneId() == 1) {
                        if (z28) {
                            ServiceStateTrackerInjector.processForCustSingleSimDevice();
                        }
                        z19 = false;
                    }
                    String cdmaEriText = this.mPhone.getCdmaEriText();
                    boolean z55 = !TextUtils.equals(this.mEriText, cdmaEriText);
                    this.mEriText = cdmaEriText;
                    if (z19 || (!this.mPhone.isPhoneTypeGsm() && z55)) {
                        updateSpnDisplay();
                    }
                    if (z19) {
                        this.mForceBroadcastServiceState = false;
                        telephonyManager.setNetworkOperatorNameForPhone(this.mPhone.getPhoneId(), this.mSS.getOperatorAlpha());
                        operatorNumeric = this.mSS.getOperatorNumeric();
                        if (!this.mPhone.isPhoneTypeGsm() && isInvalidOperatorNumeric(operatorNumeric)) {
                            operatorNumeric = fixUnknownMcc(operatorNumeric, this.mSS.getCdmaSystemId());
                        }
                        telephonyManager.setNetworkOperatorNumericForPhone(this.mPhone.getPhoneId(), operatorNumeric);
                        plmn = operatorNumeric;
                        if (isInvalidOperatorNumeric(operatorNumeric)) {
                            for (CellIdentity cellIdentity2 : prioritizedCellIdentities) {
                                if (!TextUtils.isEmpty(cellIdentity2.getPlmn())) {
                                    plmn = cellIdentity2.getPlmn();
                                    break;
                                }
                            }
                        }
                        if (isInvalidOperatorNumeric(plmn)) {
                            log("localeOperator " + plmn + " is invalid");
                            this.mLocaleTracker.updateOperatorNumeric("");
                        } else {
                            if (!this.mPhone.isPhoneTypeGsm()) {
                                setOperatorIdd(plmn);
                            }
                            if (z10) {
                                this.mLocaleTracker.updateOperatorNumeric(plmn);
                            }
                        }
                        int phoneId = this.mPhone.getPhoneId();
                        if (this.mPhone.isPhoneTypeGsm()) {
                            voiceRoaming = this.mSS.getVoiceRoaming();
                        } else if (!this.mSS.getVoiceRoaming() || this.mSS.getDataRoaming()) {
                            voiceRoaming = true;
                        } else {
                            voiceRoaming = false;
                        }
                        telephonyManager.setNetworkRoamingForPhone(phoneId, voiceRoaming);
                        setRoamingType(this.mSS);
                        log("Broadcasting ServiceState : " + this.mSS);
                        if (!serviceState.equals(this.mPhone.getServiceState())) {
                            this.mPhone.notifyServiceStateChanged(this.mPhone.getServiceState());
                        }
                        this.mCi.setServiceStateToModem(this.mSS.getVoiceRegState(), mtkServiceState.getCellularDataRegState(), this.mSS.getVoiceRoamingType(), mtkServiceState.getCellularDataRoamingType(), mtkServiceState.getRilVoiceRegState(), mtkServiceState.getRilCellularDataRegState(), null);
                        serviceState2 = mtkServiceState4;
                    } else {
                        serviceState2 = mtkServiceState4;
                        this.mSS = serviceState2;
                    }
                    if (z19 || z14) {
                        TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
                    }
                    z20 = false;
                    z21 = !z28 || z30;
                    if (z5) {
                        ((RegistrantList) this.mAttachedRegistrants.get(1)).notifyRegistrants();
                        z21 = true;
                        this.mLastPSRegisteredPLMN = this.mSS.getOperatorNumeric();
                    }
                    if (z44) {
                        logRatChange();
                        notifySignalStrength();
                    }
                    availableTransports = this.mTransportManager.getAvailableTransports();
                    z22 = z21;
                    length = availableTransports.length;
                    i2 = 0;
                    while (i2 < length) {
                        int i10 = length;
                        i3 = availableTransports[i2];
                        boolean z56 = z17;
                        sparseBooleanArray2 = sparseBooleanArray8;
                        if (sparseBooleanArray2.get(i3)) {
                            z20 = true;
                            notifySignalStrength();
                        }
                        if (sparseBooleanArray9.get(i3) || sparseBooleanArray2.get(i3) || z39) {
                            notifyDataRegStateRilRadioTechnologyChanged(i3);
                            this.mPhone.notifyAllActiveDataConnections();
                        }
                        sparseBooleanArray3 = sparseBooleanArray;
                        if (sparseBooleanArray3.get(i3)) {
                            z22 = true;
                            sparseBooleanArray = sparseBooleanArray3;
                            if (this.mAttachedRegistrants.get(i3) != null) {
                                ((RegistrantList) this.mAttachedRegistrants.get(i3)).notifyRegistrants();
                            }
                        } else {
                            sparseBooleanArray = sparseBooleanArray3;
                        }
                        sparseBooleanArray4 = sparseBooleanArray10;
                        if (!sparseBooleanArray4.get(i3)) {
                            if (this.mDetachedRegistrants.get(i3) != null) {
                                ((RegistrantList) this.mDetachedRegistrants.get(i3)).notifyRegistrants();
                            }
                            z22 = true;
                        }
                        i2++;
                        z20 = z20;
                        length = i10;
                        sparseBooleanArray10 = sparseBooleanArray4;
                        sparseBooleanArray8 = sparseBooleanArray2;
                        z17 = z56;
                    }
                    if (z22) {
                        logAttachChange();
                    }
                    if (z20) {
                        logRatChange();
                    }
                    if (z47 || z44) {
                        notifyVoiceRegStateRilRadioTechnologyChanged();
                    }
                    this.mPsRegState = this.mSS.getDataRegState();
                    if (z15 || z48 || z11 || dataRoaming) {
                        logRoamingChange();
                    }
                    if (z15) {
                        this.mVoiceRoamingOnRegistrants.notifyRegistrants();
                    }
                    if (z48 != 0) {
                        this.mVoiceRoamingOffRegistrants.notifyRegistrants();
                    }
                    if (z11) {
                        this.mDataRoamingOnRegistrants.notifyRegistrants();
                    }
                    if (dataRoaming != 0) {
                        this.mDataRoamingOffRegistrants.notifyRegistrants();
                    }
                    if (z9) {
                        log("notify roaming type change.");
                        this.mDataRoamingTypeChangedRegistrants.notifyRegistrants();
                    }
                    if (mtkServiceState.getCellularRegState() == 0 && ((str = this.mLocatedPlmn) == null || !str.equals(mtkServiceState.getOperatorNumeric()))) {
                        updateLocatedPlmn(mtkServiceState.getOperatorNumeric());
                    }
                    if (((MtkDcTracker) this.mPhone.getDcTracker(1)).getPendingDataCallFlag()) {
                        ((MtkDcTracker) this.mPhone.getDcTracker(1)).processPendingSetupData(this);
                    }
                    if (z50) {
                        this.mPhone.notifyLocationChanged(getCellIdentity());
                    }
                    if (z14) {
                        this.mNrStateChangedRegistrants.notifyRegistrants();
                    }
                    if (z49) {
                        this.mNrFrequencyChangedRegistrants.notifyRegistrants();
                    }
                    if (this.mPhone.isPhoneTypeGsm()) {
                        z23 = false;
                    } else if (!isGprsConsistent(this.mSS.getDataRegistrationState(), this.mSS.getState())) {
                        z23 = false;
                        this.mReportedGprsNoReg = false;
                    } else if (!this.mStartedGprsRegCheck || this.mReportedGprsNoReg) {
                        z23 = false;
                    } else {
                        this.mStartedGprsRegCheck = true;
                        sendMessageDelayed(obtainMessage(22), Settings.Global.getInt(this.mPhone.getContext().getContentResolver(), "gprs_register_check_period_ms", 60000));
                        z23 = false;
                    }
                    if (this.hasPendingPollState) {
                        this.hasPendingPollState = z23;
                        pollState();
                    }
                    this.mNewSS.setStateOutOfService();
                    if (notifySignalStrength()) {
                        log("PollStateDone with signal notification, level =" + this.mSignalStrength.getLevel());
                    }
                    ServiceStateTrackerInjector.handleMccMncChange(this.mPhone.getContext(), this.mSS, this.mNewSS);
                }
                z17 = z36;
                z18 = false;
                z19 = z16;
                this.mPhoneTypeUpdated = z18;
                if (!z33) {
                    if (!ServiceProviderUtils.isChinaTelecom(this.mPhone.getOperatorNumeric())) {
                    }
                    if (!this.mIsNetworkModeChanging) {
                        ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(this.mPhone.isVolteEnabled(), this.mPhone);
                    }
                } else {
                    sparseBooleanArray8 = sparseBooleanArray8;
                    z39 = z39;
                }
                if (miui.telephony.TelephonyManager.isCustSingleSimDevice()) {
                    if (z28) {
                        ServiceStateTrackerInjector.processForCustSingleSimDevice();
                    }
                    z19 = false;
                }
                String cdmaEriText2 = this.mPhone.getCdmaEriText();
                boolean z57 = !TextUtils.equals(this.mEriText, cdmaEriText2);
                this.mEriText = cdmaEriText2;
                if (z19) {
                    updateSpnDisplay();
                } else {
                    updateSpnDisplay();
                }
                if (z19) {
                    this.mForceBroadcastServiceState = false;
                    telephonyManager.setNetworkOperatorNameForPhone(this.mPhone.getPhoneId(), this.mSS.getOperatorAlpha());
                    operatorNumeric = this.mSS.getOperatorNumeric();
                    if (!this.mPhone.isPhoneTypeGsm()) {
                        operatorNumeric = fixUnknownMcc(operatorNumeric, this.mSS.getCdmaSystemId());
                    }
                    telephonyManager.setNetworkOperatorNumericForPhone(this.mPhone.getPhoneId(), operatorNumeric);
                    plmn = operatorNumeric;
                    if (isInvalidOperatorNumeric(operatorNumeric)) {
                        while (r48.hasNext()) {
                            if (!TextUtils.isEmpty(cellIdentity2.getPlmn())) {
                                plmn = cellIdentity2.getPlmn();
                                break;
                            }
                        }
                    }
                    if (isInvalidOperatorNumeric(plmn)) {
                        log("localeOperator " + plmn + " is invalid");
                        this.mLocaleTracker.updateOperatorNumeric("");
                    } else {
                        if (!this.mPhone.isPhoneTypeGsm()) {
                            setOperatorIdd(plmn);
                        }
                        if (z10) {
                            this.mLocaleTracker.updateOperatorNumeric(plmn);
                        }
                    }
                    int phoneId2 = this.mPhone.getPhoneId();
                    if (this.mPhone.isPhoneTypeGsm()) {
                        voiceRoaming = this.mSS.getVoiceRoaming();
                    } else if (this.mSS.getVoiceRoaming()) {
                        voiceRoaming = true;
                    } else {
                        voiceRoaming = true;
                    }
                    telephonyManager.setNetworkRoamingForPhone(phoneId2, voiceRoaming);
                    setRoamingType(this.mSS);
                    log("Broadcasting ServiceState : " + this.mSS);
                    if (!serviceState.equals(this.mPhone.getServiceState())) {
                        this.mPhone.notifyServiceStateChanged(this.mPhone.getServiceState());
                    }
                    this.mCi.setServiceStateToModem(this.mSS.getVoiceRegState(), mtkServiceState.getCellularDataRegState(), this.mSS.getVoiceRoamingType(), mtkServiceState.getCellularDataRoamingType(), mtkServiceState.getRilVoiceRegState(), mtkServiceState.getRilCellularDataRegState(), null);
                    serviceState2 = mtkServiceState4;
                } else {
                    serviceState2 = mtkServiceState4;
                    this.mSS = serviceState2;
                }
                if (z19) {
                    TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
                } else {
                    TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
                }
                z20 = false;
                if (z28) {
                }
                if (z5) {
                    ((RegistrantList) this.mAttachedRegistrants.get(1)).notifyRegistrants();
                    z21 = true;
                    this.mLastPSRegisteredPLMN = this.mSS.getOperatorNumeric();
                }
                if (z44) {
                    logRatChange();
                    notifySignalStrength();
                }
                availableTransports = this.mTransportManager.getAvailableTransports();
                z22 = z21;
                length = availableTransports.length;
                i2 = 0;
                while (i2 < length) {
                    int i11 = length;
                    i3 = availableTransports[i2];
                    boolean z58 = z17;
                    sparseBooleanArray2 = sparseBooleanArray8;
                    if (sparseBooleanArray2.get(i3)) {
                        z20 = true;
                        notifySignalStrength();
                    }
                    if (sparseBooleanArray9.get(i3)) {
                        notifyDataRegStateRilRadioTechnologyChanged(i3);
                        this.mPhone.notifyAllActiveDataConnections();
                    } else {
                        notifyDataRegStateRilRadioTechnologyChanged(i3);
                        this.mPhone.notifyAllActiveDataConnections();
                    }
                    sparseBooleanArray3 = sparseBooleanArray;
                    if (sparseBooleanArray3.get(i3)) {
                        z22 = true;
                        sparseBooleanArray = sparseBooleanArray3;
                        if (this.mAttachedRegistrants.get(i3) != null) {
                            ((RegistrantList) this.mAttachedRegistrants.get(i3)).notifyRegistrants();
                        }
                    } else {
                        sparseBooleanArray = sparseBooleanArray3;
                    }
                    sparseBooleanArray4 = sparseBooleanArray10;
                    if (!sparseBooleanArray4.get(i3)) {
                        if (this.mDetachedRegistrants.get(i3) != null) {
                            ((RegistrantList) this.mDetachedRegistrants.get(i3)).notifyRegistrants();
                        }
                        z22 = true;
                    }
                    i2++;
                    z20 = z20;
                    length = i11;
                    sparseBooleanArray10 = sparseBooleanArray4;
                    sparseBooleanArray8 = sparseBooleanArray2;
                    z17 = z58;
                }
                if (z22) {
                    logAttachChange();
                }
                if (z20) {
                    logRatChange();
                }
                if (z47) {
                    notifyVoiceRegStateRilRadioTechnologyChanged();
                } else {
                    notifyVoiceRegStateRilRadioTechnologyChanged();
                }
                this.mPsRegState = this.mSS.getDataRegState();
                if (z15) {
                    logRoamingChange();
                } else {
                    logRoamingChange();
                }
                if (z15) {
                    this.mVoiceRoamingOnRegistrants.notifyRegistrants();
                }
                if (z48 != 0) {
                    this.mVoiceRoamingOffRegistrants.notifyRegistrants();
                }
                if (z11) {
                    this.mDataRoamingOnRegistrants.notifyRegistrants();
                }
                if (dataRoaming != 0) {
                    this.mDataRoamingOffRegistrants.notifyRegistrants();
                }
                if (z9) {
                    log("notify roaming type change.");
                    this.mDataRoamingTypeChangedRegistrants.notifyRegistrants();
                }
                if (mtkServiceState.getCellularRegState() == 0) {
                    updateLocatedPlmn(mtkServiceState.getOperatorNumeric());
                }
                if (((MtkDcTracker) this.mPhone.getDcTracker(1)).getPendingDataCallFlag()) {
                    ((MtkDcTracker) this.mPhone.getDcTracker(1)).processPendingSetupData(this);
                }
                if (z50) {
                    this.mPhone.notifyLocationChanged(getCellIdentity());
                }
                if (z14) {
                    this.mNrStateChangedRegistrants.notifyRegistrants();
                }
                if (z49) {
                    this.mNrFrequencyChangedRegistrants.notifyRegistrants();
                }
                if (this.mPhone.isPhoneTypeGsm()) {
                    z23 = false;
                } else if (!isGprsConsistent(this.mSS.getDataRegistrationState(), this.mSS.getState())) {
                    z23 = false;
                    this.mReportedGprsNoReg = false;
                } else if (this.mStartedGprsRegCheck) {
                    z23 = false;
                } else {
                    z23 = false;
                }
                if (this.hasPendingPollState) {
                    this.hasPendingPollState = z23;
                    pollState();
                }
                this.mNewSS.setStateOutOfService();
                if (notifySignalStrength()) {
                    log("PollStateDone with signal notification, level =" + this.mSignalStrength.getLevel());
                }
                ServiceStateTrackerInjector.handleMccMncChange(this.mPhone.getContext(), this.mSS, this.mNewSS);
            }
            z8 = z7;
            if (this.mSS.getOperatorNumeric() == null) {
            }
            StringBuilder sb4 = new StringBuilder();
            sb4.append("pollStateDone: hasRegistered = ");
            sb4.append(z28);
            sb4.append(" hasDeregistered = ");
            sb4.append(z30);
            sb4.append(" hasDataAttached = ");
            sb4.append(sparseBooleanArray6);
            sb4.append(" hasDataDetached = ");
            sb4.append(sparseBooleanArray10);
            sb4.append(" hasDataRegStateChanged = ");
            sb4.append(sparseBooleanArray9);
            sb4.append(" hasRilVoiceRadioTechnologyChanged = ");
            sb4.append(z44);
            sb4.append(" hasRilDataRadioTechnologyChanged = ");
            sb4.append(sparseBooleanArray8);
            sb4.append(" hasDataTransportPreferenceChanged = ");
            sb4.append(z39);
            sb4.append(" hasChanged = ");
            sb4.append(z45);
            sb4.append(" hasVoiceRoamingOn = ");
            sb4.append(z46);
            sb4.append(" hasVoiceRoamingOff = ");
            sb4.append(z48);
            sb4.append(" hasDataRoamingOn =");
            z11 = z2;
            sb4.append(z11);
            z12 = z45;
            sb4.append(" hasDataRoamingOff = ");
            sb4.append(dataRoaming);
            sb4.append(" hasLocationChanged = ");
            sb4.append(z50);
            sb4.append(" has4gHandoff = ");
            sb4.append(z5);
            sb4.append(" hasMultiApnSupport = ");
            sb4.append(z3);
            sb4.append(" hasLostMultiApnSupport = ");
            sb4.append(z6);
            sb4.append(" hasCssIndicatorChanged = ");
            z13 = z52;
            sb4.append(z13);
            sb4.append(" hasNrFrequencyRangeChanged = ");
            sb4.append(z49);
            sb4.append(" hasNrStateChanged = ");
            z14 = z;
            sb4.append(z14);
            sb4.append(" hasVoiceRoamingTypeChange = ");
            sb4.append(z8);
            sb4.append(" hasDataRoamingTypeChange = ");
            sb4.append(z9);
            sb4.append(" hasAirplaneModeOnlChanged = ");
            sb4.append(z37);
            sb4.append(" hasPlmnChange = ");
            sb4.append(z10);
            log(sb4.toString());
            if (z47) {
                if (this.mPhone.isPhoneTypeGsm()) {
                    i = 50114;
                } else {
                    i = 50116;
                }
                EventLog.writeEvent(i, Integer.valueOf(this.mSS.getState()), Integer.valueOf(this.mSS.getDataRegistrationState()), Integer.valueOf(this.mNewSS.getState()), Integer.valueOf(this.mNewSS.getDataRegistrationState()));
            } else {
                if (this.mPhone.isPhoneTypeGsm()) {
                    i = 50114;
                } else {
                    i = 50116;
                }
                EventLog.writeEvent(i, Integer.valueOf(this.mSS.getState()), Integer.valueOf(this.mSS.getDataRegistrationState()), Integer.valueOf(this.mNewSS.getState()), Integer.valueOf(this.mNewSS.getDataRegistrationState()));
            }
            if (this.mPhone.isPhoneTypeGsm()) {
                if (z44) {
                    cidFromCellIdentity = getCidFromCellIdentity(cellIdentity);
                    Object[] objArr2 = new Object[3];
                    if (PhoneDebug.VDBG) {
                        i4 = cidFromCellIdentity;
                    } else {
                        i4 = -1;
                    }
                    objArr2[0] = Integer.valueOf(i4);
                    objArr2[1] = Integer.valueOf(this.mSS.getRilVoiceRadioTechnology());
                    objArr2[2] = Integer.valueOf(this.mNewSS.getRilVoiceRadioTechnology());
                    EventLog.writeEvent(50123, objArr2);
                    StringBuilder sb5 = new StringBuilder();
                    sb5.append("RAT switched ");
                    sb5.append(ServiceState.rilRadioTechnologyToString(this.mSS.getRilVoiceRadioTechnology()));
                    sb5.append(" -> ");
                    sb5.append(ServiceState.rilRadioTechnologyToString(this.mNewSS.getRilVoiceRadioTechnology()));
                    sb5.append(" at cell ");
                    if (PhoneDebug.VDBG) {
                        i5 = cidFromCellIdentity;
                    } else {
                        i5 = -1;
                    }
                    sb5.append(i5);
                    log(sb5.toString());
                }
                if (z13) {
                    this.mPhone.notifyAllActiveDataConnections();
                }
                this.mReasonDataDenied = this.mNewReasonDataDenied;
                this.mMaxDataCalls = this.mNewMaxDataCalls;
                this.mRejectCode = this.mNewRejectCode;
            }
            serviceState = new ServiceState(this.mPhone.getServiceState());
            int rilDataRadioTechnology2 = this.mSS.getRilDataRadioTechnology();
            ServiceState serviceState4 = this.mSS;
            this.mSS = this.mNewSS;
            this.mNewSS = serviceState4;
            mtkServiceState = this.mSS;
            MtkServiceState mtkServiceState6 = this.mNewSS;
            this.mCellIdentity = cellIdentity;
            if (z44) {
                updatePhoneObject();
            }
            z15 = z46;
            telephonyManager = (TelephonyManager) this.mPhone.getContext().getSystemService("phone");
            if (z33) {
                sparseBooleanArray = sparseBooleanArray6;
                telephonyManager.setDataNetworkTypeForPhone(this.mPhone.getPhoneId(), this.mSS.getRilDataRadioTechnology());
                if (this.mPhone.isPhoneTypeCdmaLte()) {
                    log("[CDMALTE]pollStateDone: update signal for RAT switch between diff group");
                    sendMessage(obtainMessage(10));
                }
            } else {
                sparseBooleanArray = sparseBooleanArray6;
            }
            if (z28) {
                this.mNetworkAttachedRegistrants.notifyRegistrants();
                this.mNitzState.handleNetworkAvailable();
                this.mLastRegisteredPLMN = this.mSS.getOperatorNumeric();
            }
            if (z30) {
                this.mNetworkDetachedRegistrants.notifyRegistrants();
                this.mNitzState.handleNetworkUnavailable();
            }
            if (z51) {
                setNotification(2001);
            }
            if (this.mPhone.isPhoneTypeCdmaLte()) {
                z16 = z12;
            } else {
                z16 = z12;
            }
            if (shouldPauseNotifyServiceState()) {
                StringBuilder sb6 = new StringBuilder();
                sb6.append("SS display optimization, pause to notify ServiceState, pollStateDone, hasRegistered: ");
                sb6.append(z28);
                sb6.append(", hasDataRegistered: ");
                z17 = z36;
                sb6.append(z17);
                sb6.append(", phoneTypeUpdated: ");
                sb6.append(this.mPhoneTypeUpdated);
                log(sb6.toString());
                if (z28) {
                }
                z18 = false;
                this.mIsNetworkModeChanging = false;
                removeMessages(2000);
            } else {
                z17 = z36;
                z18 = false;
            }
            z19 = z16;
            this.mPhoneTypeUpdated = z18;
            if (!z33) {
                if (!ServiceProviderUtils.isChinaTelecom(this.mPhone.getOperatorNumeric())) {
                }
                if (!this.mIsNetworkModeChanging) {
                    ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(this.mPhone.isVolteEnabled(), this.mPhone);
                }
            } else {
                sparseBooleanArray8 = sparseBooleanArray8;
                z39 = z39;
            }
            if (miui.telephony.TelephonyManager.isCustSingleSimDevice()) {
                if (z28) {
                    ServiceStateTrackerInjector.processForCustSingleSimDevice();
                }
                z19 = false;
            }
            String cdmaEriText3 = this.mPhone.getCdmaEriText();
            boolean z59 = !TextUtils.equals(this.mEriText, cdmaEriText3);
            this.mEriText = cdmaEriText3;
            if (z19) {
                updateSpnDisplay();
            } else {
                updateSpnDisplay();
            }
            if (z19) {
                this.mForceBroadcastServiceState = false;
                telephonyManager.setNetworkOperatorNameForPhone(this.mPhone.getPhoneId(), this.mSS.getOperatorAlpha());
                operatorNumeric = this.mSS.getOperatorNumeric();
                if (!this.mPhone.isPhoneTypeGsm()) {
                    operatorNumeric = fixUnknownMcc(operatorNumeric, this.mSS.getCdmaSystemId());
                }
                telephonyManager.setNetworkOperatorNumericForPhone(this.mPhone.getPhoneId(), operatorNumeric);
                plmn = operatorNumeric;
                if (isInvalidOperatorNumeric(operatorNumeric)) {
                    while (r48.hasNext()) {
                        if (!TextUtils.isEmpty(cellIdentity2.getPlmn())) {
                            plmn = cellIdentity2.getPlmn();
                            break;
                        }
                    }
                }
                if (isInvalidOperatorNumeric(plmn)) {
                    log("localeOperator " + plmn + " is invalid");
                    this.mLocaleTracker.updateOperatorNumeric("");
                } else {
                    if (!this.mPhone.isPhoneTypeGsm()) {
                        setOperatorIdd(plmn);
                    }
                    if (z10) {
                        this.mLocaleTracker.updateOperatorNumeric(plmn);
                    }
                }
                int phoneId3 = this.mPhone.getPhoneId();
                if (this.mPhone.isPhoneTypeGsm()) {
                    voiceRoaming = this.mSS.getVoiceRoaming();
                } else if (this.mSS.getVoiceRoaming()) {
                    voiceRoaming = true;
                } else {
                    voiceRoaming = true;
                }
                telephonyManager.setNetworkRoamingForPhone(phoneId3, voiceRoaming);
                setRoamingType(this.mSS);
                log("Broadcasting ServiceState : " + this.mSS);
                if (!serviceState.equals(this.mPhone.getServiceState())) {
                    this.mPhone.notifyServiceStateChanged(this.mPhone.getServiceState());
                }
                this.mCi.setServiceStateToModem(this.mSS.getVoiceRegState(), mtkServiceState.getCellularDataRegState(), this.mSS.getVoiceRoamingType(), mtkServiceState.getCellularDataRoamingType(), mtkServiceState.getRilVoiceRegState(), mtkServiceState.getRilCellularDataRegState(), null);
                serviceState2 = mtkServiceState4;
            } else {
                serviceState2 = mtkServiceState4;
                this.mSS = serviceState2;
            }
            if (z19) {
                TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
            } else {
                TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
            }
            z20 = false;
            if (z28) {
            }
            if (z5) {
                ((RegistrantList) this.mAttachedRegistrants.get(1)).notifyRegistrants();
                z21 = true;
                this.mLastPSRegisteredPLMN = this.mSS.getOperatorNumeric();
            }
            if (z44) {
                logRatChange();
                notifySignalStrength();
            }
            availableTransports = this.mTransportManager.getAvailableTransports();
            z22 = z21;
            length = availableTransports.length;
            i2 = 0;
            while (i2 < length) {
                int i12 = length;
                i3 = availableTransports[i2];
                boolean z510 = z17;
                sparseBooleanArray2 = sparseBooleanArray8;
                if (sparseBooleanArray2.get(i3)) {
                    z20 = true;
                    notifySignalStrength();
                }
                if (sparseBooleanArray9.get(i3)) {
                    notifyDataRegStateRilRadioTechnologyChanged(i3);
                    this.mPhone.notifyAllActiveDataConnections();
                } else {
                    notifyDataRegStateRilRadioTechnologyChanged(i3);
                    this.mPhone.notifyAllActiveDataConnections();
                }
                sparseBooleanArray3 = sparseBooleanArray;
                if (sparseBooleanArray3.get(i3)) {
                    z22 = true;
                    sparseBooleanArray = sparseBooleanArray3;
                    if (this.mAttachedRegistrants.get(i3) != null) {
                        ((RegistrantList) this.mAttachedRegistrants.get(i3)).notifyRegistrants();
                    }
                } else {
                    sparseBooleanArray = sparseBooleanArray3;
                }
                sparseBooleanArray4 = sparseBooleanArray10;
                if (!sparseBooleanArray4.get(i3)) {
                    if (this.mDetachedRegistrants.get(i3) != null) {
                        ((RegistrantList) this.mDetachedRegistrants.get(i3)).notifyRegistrants();
                    }
                    z22 = true;
                }
                i2++;
                z20 = z20;
                length = i12;
                sparseBooleanArray10 = sparseBooleanArray4;
                sparseBooleanArray8 = sparseBooleanArray2;
                z17 = z510;
            }
            if (z22) {
                logAttachChange();
            }
            if (z20) {
                logRatChange();
            }
            if (z47) {
                notifyVoiceRegStateRilRadioTechnologyChanged();
            } else {
                notifyVoiceRegStateRilRadioTechnologyChanged();
            }
            this.mPsRegState = this.mSS.getDataRegState();
            if (z15) {
                logRoamingChange();
            } else {
                logRoamingChange();
            }
            if (z15) {
                this.mVoiceRoamingOnRegistrants.notifyRegistrants();
            }
            if (z48 != 0) {
                this.mVoiceRoamingOffRegistrants.notifyRegistrants();
            }
            if (z11) {
                this.mDataRoamingOnRegistrants.notifyRegistrants();
            }
            if (dataRoaming != 0) {
                this.mDataRoamingOffRegistrants.notifyRegistrants();
            }
            if (z9) {
                log("notify roaming type change.");
                this.mDataRoamingTypeChangedRegistrants.notifyRegistrants();
            }
            if (mtkServiceState.getCellularRegState() == 0) {
                updateLocatedPlmn(mtkServiceState.getOperatorNumeric());
            }
            if (((MtkDcTracker) this.mPhone.getDcTracker(1)).getPendingDataCallFlag()) {
                ((MtkDcTracker) this.mPhone.getDcTracker(1)).processPendingSetupData(this);
            }
            if (z50) {
                this.mPhone.notifyLocationChanged(getCellIdentity());
            }
            if (z14) {
                this.mNrStateChangedRegistrants.notifyRegistrants();
            }
            if (z49) {
                this.mNrFrequencyChangedRegistrants.notifyRegistrants();
            }
            if (this.mPhone.isPhoneTypeGsm()) {
                z23 = false;
            } else if (!isGprsConsistent(this.mSS.getDataRegistrationState(), this.mSS.getState())) {
                z23 = false;
                this.mReportedGprsNoReg = false;
            } else if (this.mStartedGprsRegCheck) {
                z23 = false;
            } else {
                z23 = false;
            }
            if (this.hasPendingPollState) {
                this.hasPendingPollState = z23;
                pollState();
            }
            this.mNewSS.setStateOutOfService();
            if (notifySignalStrength()) {
                log("PollStateDone with signal notification, level =" + this.mSignalStrength.getLevel());
            }
            ServiceStateTrackerInjector.handleMccMncChange(this.mPhone.getContext(), this.mSS, this.mNewSS);
        }
        z6 = z4;
        if (!this.mSS.getDataRoaming()) {
            z8 = z7;
        } else {
            z8 = z7;
        }
        if (this.mSS.getOperatorNumeric() == null) {
        }
        StringBuilder sb7 = new StringBuilder();
        sb7.append("pollStateDone: hasRegistered = ");
        sb7.append(z28);
        sb7.append(" hasDeregistered = ");
        sb7.append(z30);
        sb7.append(" hasDataAttached = ");
        sb7.append(sparseBooleanArray6);
        sb7.append(" hasDataDetached = ");
        sb7.append(sparseBooleanArray10);
        sb7.append(" hasDataRegStateChanged = ");
        sb7.append(sparseBooleanArray9);
        sb7.append(" hasRilVoiceRadioTechnologyChanged = ");
        sb7.append(z44);
        sb7.append(" hasRilDataRadioTechnologyChanged = ");
        sb7.append(sparseBooleanArray8);
        sb7.append(" hasDataTransportPreferenceChanged = ");
        sb7.append(z39);
        sb7.append(" hasChanged = ");
        sb7.append(z45);
        sb7.append(" hasVoiceRoamingOn = ");
        sb7.append(z46);
        sb7.append(" hasVoiceRoamingOff = ");
        sb7.append(z48);
        sb7.append(" hasDataRoamingOn =");
        z11 = z2;
        sb7.append(z11);
        z12 = z45;
        sb7.append(" hasDataRoamingOff = ");
        sb7.append(dataRoaming);
        sb7.append(" hasLocationChanged = ");
        sb7.append(z50);
        sb7.append(" has4gHandoff = ");
        sb7.append(z5);
        sb7.append(" hasMultiApnSupport = ");
        sb7.append(z3);
        sb7.append(" hasLostMultiApnSupport = ");
        sb7.append(z6);
        sb7.append(" hasCssIndicatorChanged = ");
        z13 = z52;
        sb7.append(z13);
        sb7.append(" hasNrFrequencyRangeChanged = ");
        sb7.append(z49);
        sb7.append(" hasNrStateChanged = ");
        z14 = z;
        sb7.append(z14);
        sb7.append(" hasVoiceRoamingTypeChange = ");
        sb7.append(z8);
        sb7.append(" hasDataRoamingTypeChange = ");
        sb7.append(z9);
        sb7.append(" hasAirplaneModeOnlChanged = ");
        sb7.append(z37);
        sb7.append(" hasPlmnChange = ");
        sb7.append(z10);
        log(sb7.toString());
        if (z47) {
            if (this.mPhone.isPhoneTypeGsm()) {
                i = 50114;
            } else {
                i = 50116;
            }
            EventLog.writeEvent(i, Integer.valueOf(this.mSS.getState()), Integer.valueOf(this.mSS.getDataRegistrationState()), Integer.valueOf(this.mNewSS.getState()), Integer.valueOf(this.mNewSS.getDataRegistrationState()));
        } else {
            if (this.mPhone.isPhoneTypeGsm()) {
                i = 50114;
            } else {
                i = 50116;
            }
            EventLog.writeEvent(i, Integer.valueOf(this.mSS.getState()), Integer.valueOf(this.mSS.getDataRegistrationState()), Integer.valueOf(this.mNewSS.getState()), Integer.valueOf(this.mNewSS.getDataRegistrationState()));
        }
        if (this.mPhone.isPhoneTypeGsm()) {
            if (z44) {
                cidFromCellIdentity = getCidFromCellIdentity(cellIdentity);
                Object[] objArr3 = new Object[3];
                if (PhoneDebug.VDBG) {
                    i4 = cidFromCellIdentity;
                } else {
                    i4 = -1;
                }
                objArr3[0] = Integer.valueOf(i4);
                objArr3[1] = Integer.valueOf(this.mSS.getRilVoiceRadioTechnology());
                objArr3[2] = Integer.valueOf(this.mNewSS.getRilVoiceRadioTechnology());
                EventLog.writeEvent(50123, objArr3);
                StringBuilder sb8 = new StringBuilder();
                sb8.append("RAT switched ");
                sb8.append(ServiceState.rilRadioTechnologyToString(this.mSS.getRilVoiceRadioTechnology()));
                sb8.append(" -> ");
                sb8.append(ServiceState.rilRadioTechnologyToString(this.mNewSS.getRilVoiceRadioTechnology()));
                sb8.append(" at cell ");
                if (PhoneDebug.VDBG) {
                    i5 = cidFromCellIdentity;
                } else {
                    i5 = -1;
                }
                sb8.append(i5);
                log(sb8.toString());
            }
            if (z13) {
                this.mPhone.notifyAllActiveDataConnections();
            }
            this.mReasonDataDenied = this.mNewReasonDataDenied;
            this.mMaxDataCalls = this.mNewMaxDataCalls;
            this.mRejectCode = this.mNewRejectCode;
        }
        serviceState = new ServiceState(this.mPhone.getServiceState());
        int rilDataRadioTechnology3 = this.mSS.getRilDataRadioTechnology();
        ServiceState serviceState5 = this.mSS;
        this.mSS = this.mNewSS;
        this.mNewSS = serviceState5;
        mtkServiceState = this.mSS;
        MtkServiceState mtkServiceState7 = this.mNewSS;
        this.mCellIdentity = cellIdentity;
        if (z44) {
            updatePhoneObject();
        }
        z15 = z46;
        telephonyManager = (TelephonyManager) this.mPhone.getContext().getSystemService("phone");
        if (z33) {
            sparseBooleanArray = sparseBooleanArray6;
            telephonyManager.setDataNetworkTypeForPhone(this.mPhone.getPhoneId(), this.mSS.getRilDataRadioTechnology());
            if (this.mPhone.isPhoneTypeCdmaLte()) {
                log("[CDMALTE]pollStateDone: update signal for RAT switch between diff group");
                sendMessage(obtainMessage(10));
            }
        } else {
            sparseBooleanArray = sparseBooleanArray6;
        }
        if (z28) {
            this.mNetworkAttachedRegistrants.notifyRegistrants();
            this.mNitzState.handleNetworkAvailable();
            this.mLastRegisteredPLMN = this.mSS.getOperatorNumeric();
        }
        if (z30) {
            this.mNetworkDetachedRegistrants.notifyRegistrants();
            this.mNitzState.handleNetworkUnavailable();
        }
        if (z51) {
            setNotification(2001);
        }
        if (this.mPhone.isPhoneTypeCdmaLte()) {
            z16 = z12;
        } else {
            z16 = z12;
        }
        if (shouldPauseNotifyServiceState()) {
            StringBuilder sb9 = new StringBuilder();
            sb9.append("SS display optimization, pause to notify ServiceState, pollStateDone, hasRegistered: ");
            sb9.append(z28);
            sb9.append(", hasDataRegistered: ");
            z17 = z36;
            sb9.append(z17);
            sb9.append(", phoneTypeUpdated: ");
            sb9.append(this.mPhoneTypeUpdated);
            log(sb9.toString());
            if (z28) {
            }
            z18 = false;
            this.mIsNetworkModeChanging = false;
            removeMessages(2000);
        } else {
            z17 = z36;
            z18 = false;
        }
        z19 = z16;
        this.mPhoneTypeUpdated = z18;
        if (!z33) {
            if (!ServiceProviderUtils.isChinaTelecom(this.mPhone.getOperatorNumeric())) {
            }
            if (!this.mIsNetworkModeChanging) {
                ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(this.mPhone.isVolteEnabled(), this.mPhone);
            }
        } else {
            sparseBooleanArray8 = sparseBooleanArray8;
            z39 = z39;
        }
        if (miui.telephony.TelephonyManager.isCustSingleSimDevice()) {
            if (z28) {
                ServiceStateTrackerInjector.processForCustSingleSimDevice();
            }
            z19 = false;
        }
        String cdmaEriText4 = this.mPhone.getCdmaEriText();
        boolean z511 = !TextUtils.equals(this.mEriText, cdmaEriText4);
        this.mEriText = cdmaEriText4;
        if (z19) {
            updateSpnDisplay();
        } else {
            updateSpnDisplay();
        }
        if (z19) {
            this.mForceBroadcastServiceState = false;
            telephonyManager.setNetworkOperatorNameForPhone(this.mPhone.getPhoneId(), this.mSS.getOperatorAlpha());
            operatorNumeric = this.mSS.getOperatorNumeric();
            if (!this.mPhone.isPhoneTypeGsm()) {
                operatorNumeric = fixUnknownMcc(operatorNumeric, this.mSS.getCdmaSystemId());
            }
            telephonyManager.setNetworkOperatorNumericForPhone(this.mPhone.getPhoneId(), operatorNumeric);
            plmn = operatorNumeric;
            if (isInvalidOperatorNumeric(operatorNumeric)) {
                while (r48.hasNext()) {
                    if (!TextUtils.isEmpty(cellIdentity2.getPlmn())) {
                        plmn = cellIdentity2.getPlmn();
                        break;
                    }
                }
            }
            if (isInvalidOperatorNumeric(plmn)) {
                log("localeOperator " + plmn + " is invalid");
                this.mLocaleTracker.updateOperatorNumeric("");
            } else {
                if (!this.mPhone.isPhoneTypeGsm()) {
                    setOperatorIdd(plmn);
                }
                if (z10) {
                    this.mLocaleTracker.updateOperatorNumeric(plmn);
                }
            }
            int phoneId4 = this.mPhone.getPhoneId();
            if (this.mPhone.isPhoneTypeGsm()) {
                voiceRoaming = this.mSS.getVoiceRoaming();
            } else if (this.mSS.getVoiceRoaming()) {
                voiceRoaming = true;
            } else {
                voiceRoaming = true;
            }
            telephonyManager.setNetworkRoamingForPhone(phoneId4, voiceRoaming);
            setRoamingType(this.mSS);
            log("Broadcasting ServiceState : " + this.mSS);
            if (!serviceState.equals(this.mPhone.getServiceState())) {
                this.mPhone.notifyServiceStateChanged(this.mPhone.getServiceState());
            }
            this.mCi.setServiceStateToModem(this.mSS.getVoiceRegState(), mtkServiceState.getCellularDataRegState(), this.mSS.getVoiceRoamingType(), mtkServiceState.getCellularDataRoamingType(), mtkServiceState.getRilVoiceRegState(), mtkServiceState.getRilCellularDataRegState(), null);
            serviceState2 = mtkServiceState4;
        } else {
            serviceState2 = mtkServiceState4;
            this.mSS = serviceState2;
        }
        if (z19) {
            TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
        } else {
            TelephonyMetrics.getInstance().writeServiceStateChanged(this.mPhone.getPhoneId(), this.mSS);
        }
        z20 = false;
        if (z28) {
        }
        if (z5) {
            ((RegistrantList) this.mAttachedRegistrants.get(1)).notifyRegistrants();
            z21 = true;
            this.mLastPSRegisteredPLMN = this.mSS.getOperatorNumeric();
        }
        if (z44) {
            logRatChange();
            notifySignalStrength();
        }
        availableTransports = this.mTransportManager.getAvailableTransports();
        z22 = z21;
        length = availableTransports.length;
        i2 = 0;
        while (i2 < length) {
            int i13 = length;
            i3 = availableTransports[i2];
            boolean z512 = z17;
            sparseBooleanArray2 = sparseBooleanArray8;
            if (sparseBooleanArray2.get(i3)) {
                z20 = true;
                notifySignalStrength();
            }
            if (sparseBooleanArray9.get(i3)) {
                notifyDataRegStateRilRadioTechnologyChanged(i3);
                this.mPhone.notifyAllActiveDataConnections();
            } else {
                notifyDataRegStateRilRadioTechnologyChanged(i3);
                this.mPhone.notifyAllActiveDataConnections();
            }
            sparseBooleanArray3 = sparseBooleanArray;
            if (sparseBooleanArray3.get(i3)) {
                z22 = true;
                sparseBooleanArray = sparseBooleanArray3;
                if (this.mAttachedRegistrants.get(i3) != null) {
                    ((RegistrantList) this.mAttachedRegistrants.get(i3)).notifyRegistrants();
                }
            } else {
                sparseBooleanArray = sparseBooleanArray3;
            }
            sparseBooleanArray4 = sparseBooleanArray10;
            if (!sparseBooleanArray4.get(i3)) {
                if (this.mDetachedRegistrants.get(i3) != null) {
                    ((RegistrantList) this.mDetachedRegistrants.get(i3)).notifyRegistrants();
                }
                z22 = true;
            }
            i2++;
            z20 = z20;
            length = i13;
            sparseBooleanArray10 = sparseBooleanArray4;
            sparseBooleanArray8 = sparseBooleanArray2;
            z17 = z512;
        }
        if (z22) {
            logAttachChange();
        }
        if (z20) {
            logRatChange();
        }
        if (z47) {
            notifyVoiceRegStateRilRadioTechnologyChanged();
        } else {
            notifyVoiceRegStateRilRadioTechnologyChanged();
        }
        this.mPsRegState = this.mSS.getDataRegState();
        if (z15) {
            logRoamingChange();
        } else {
            logRoamingChange();
        }
        if (z15) {
            this.mVoiceRoamingOnRegistrants.notifyRegistrants();
        }
        if (z48 != 0) {
            this.mVoiceRoamingOffRegistrants.notifyRegistrants();
        }
        if (z11) {
            this.mDataRoamingOnRegistrants.notifyRegistrants();
        }
        if (dataRoaming != 0) {
            this.mDataRoamingOffRegistrants.notifyRegistrants();
        }
        if (z9) {
            log("notify roaming type change.");
            this.mDataRoamingTypeChangedRegistrants.notifyRegistrants();
        }
        if (mtkServiceState.getCellularRegState() == 0) {
            updateLocatedPlmn(mtkServiceState.getOperatorNumeric());
        }
        if (((MtkDcTracker) this.mPhone.getDcTracker(1)).getPendingDataCallFlag()) {
            ((MtkDcTracker) this.mPhone.getDcTracker(1)).processPendingSetupData(this);
        }
        if (z50) {
            this.mPhone.notifyLocationChanged(getCellIdentity());
        }
        if (z14) {
            this.mNrStateChangedRegistrants.notifyRegistrants();
        }
        if (z49) {
            this.mNrFrequencyChangedRegistrants.notifyRegistrants();
        }
        if (this.mPhone.isPhoneTypeGsm()) {
            z23 = false;
        } else if (!isGprsConsistent(this.mSS.getDataRegistrationState(), this.mSS.getState())) {
            z23 = false;
            this.mReportedGprsNoReg = false;
        } else if (this.mStartedGprsRegCheck) {
            z23 = false;
        } else {
            z23 = false;
        }
        if (this.hasPendingPollState) {
            this.hasPendingPollState = z23;
            pollState();
        }
        this.mNewSS.setStateOutOfService();
        if (notifySignalStrength()) {
            log("PollStateDone with signal notification, level =" + this.mSignalStrength.getLevel());
        }
        ServiceStateTrackerInjector.handleMccMncChange(this.mPhone.getContext(), this.mSS, this.mNewSS);
    }

    protected void pollStateInternal(boolean z) {
        boolean zIsServiceConnected = ((NetworkRegistrationManager) this.mRegStateManagers.get(1)).isServiceConnected();
        int i = this.mRegStateManagers.get(2) != null ? 1 : 0;
        StringBuilder sb = new StringBuilder();
        sb.append("pollState: modemTriggered=");
        sb.append(z);
        sb.append(", mPollingContext=");
        sb.append(this.mPollingContext != null ? this.mPollingContext[0] : -1);
        sb.append(", RadioState=");
        sb.append(this.mCi.getRadioState());
        sb.append(", connected=");
        sb.append(zIsServiceConnected);
        sb.append(", support_ap_iwlan=");
        sb.append(i);
        log(sb.toString());
        if (this.mPollingContext != null && this.mCi.getRadioState() != 2 && ((this.mPhone.isPhoneTypeGsm() && this.mPollingContext[0] == i + 4) || (!this.mPhone.isPhoneTypeGsm() && this.mPollingContext[0] == i + 3))) {
            this.hasPendingPollState = true;
            return;
        }
        this.mPollingContext = new int[1];
        this.mPollingContext[0] = 0;
        int radioState = this.mCi.getRadioState();
        if (radioState == 0) {
            this.mNewSS.setStateOff();
            this.mNewPSCellIdentity = null;
            setSignalStrengthDefaultValues();
            this.mLastNitzData = null;
            this.mNitzState.handleNetworkUnavailable();
            if (!z && 18 != this.mSS.getRilDataRadioTechnology()) {
                if (this.mPhone.isPhoneTypeGsm()) {
                    this.mPsRegStateRaw = 0;
                }
                pollStateDone();
                return;
            }
        } else if (radioState == 2) {
            this.mNewSS.setStateOutOfService();
            this.mNewPSCellIdentity = null;
            setSignalStrengthDefaultValues();
            this.mLastNitzData = null;
            this.mNitzState.handleNetworkUnavailable();
            if (this.mPhone.isPhoneTypeGsm()) {
                this.mPsRegStateRaw = 0;
            }
            pollStateDone();
            return;
        }
        this.mtkHandler.removeMessages(EVENT_RECHECK_NRM_STATUS);
        if (!zIsServiceConnected) {
            log("Skip pollState due to disconnection of service");
            updateTurboPLMN();
            this.mtkHandler.sendEmptyMessageDelayed(EVENT_RECHECK_NRM_STATUS, 1000L);
            return;
        }
        int[] iArr = this.mPollingContext;
        iArr[0] = iArr[0] + 1;
        this.mCi.getOperator(obtainMessage(7, this.mPollingContext));
        int[] iArr2 = this.mPollingContext;
        iArr2[0] = iArr2[0] + 1;
        ((NetworkRegistrationManager) this.mRegStateManagers.get(1)).requestNetworkRegistrationInfo(2, obtainMessage(5, this.mPollingContext));
        int[] iArr3 = this.mPollingContext;
        iArr3[0] = iArr3[0] + 1;
        ((NetworkRegistrationManager) this.mRegStateManagers.get(1)).requestNetworkRegistrationInfo(1, obtainMessage(4, this.mPollingContext));
        if (this.mRegStateManagers.get(2) != null) {
            int[] iArr4 = this.mPollingContext;
            iArr4[0] = iArr4[0] + 1;
            ((NetworkRegistrationManager) this.mRegStateManagers.get(2)).requestNetworkRegistrationInfo(2, obtainMessage(6, this.mPollingContext));
        }
        if (this.mPhone.isPhoneTypeGsm()) {
            int[] iArr5 = this.mPollingContext;
            iArr5[0] = iArr5[0] + 1;
            this.mCi.getNetworkSelectionMode(obtainMessage(14, this.mPollingContext));
        }
    }

    protected void refreshSpn(ServiceState serviceState, CellLocation cellLocation, boolean z) {
        String strLookupOperatorName;
        String strLookupOperatorName2;
        String operatorBrandOverride = this.mUiccController.getUiccCard(getPhoneId()) != null ? this.mUiccController.getUiccCard(getPhoneId()).getOperatorBrandOverride() : null;
        if (operatorBrandOverride != null) {
            log("refreshSpn: use brandOverride" + operatorBrandOverride);
            strLookupOperatorName = operatorBrandOverride;
            strLookupOperatorName2 = operatorBrandOverride;
        } else {
            int lac = -1;
            if (cellLocation instanceof GsmCellLocation) {
                lac = ((GsmCellLocation) cellLocation).getLac();
            } else {
                boolean z2 = cellLocation instanceof CdmaCellLocation;
            }
            strLookupOperatorName = this.mCi.lookupOperatorName(this.mPhone.getSubId(), serviceState.getOperatorNumeric(), true, lac);
            strLookupOperatorName2 = this.mCi.lookupOperatorName(this.mPhone.getSubId(), serviceState.getOperatorNumeric(), false, lac);
        }
        if (!TextUtils.equals(strLookupOperatorName, serviceState.getOperatorAlphaLong()) || !TextUtils.equals(strLookupOperatorName2, serviceState.getOperatorAlphaShort())) {
            this.mForceBroadcastServiceState = true;
            if (z) {
                updateSsOperatorName(serviceState, strLookupOperatorName, strLookupOperatorName2, serviceState.getOperatorNumeric());
            }
        }
        log("refreshSpn: " + strLookupOperatorName + ", " + strLookupOperatorName2 + ", fromPollState=" + z + ", mForceBroadcastServiceState=" + this.mForceBroadcastServiceState);
    }

    public void registerForDataRoamingTypeChange(Handler handler, int i, Object obj) {
        this.mDataRoamingTypeChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void setDeviceRatMode(int i) {
        if (!SubscriptionManager.isValidSubscriptionId(this.mPhone.getSubId())) {
            log("Invalid subId, skip setDeviceRatMode!");
            return;
        }
        int iCalculateDeviceRatMode = calculateDeviceRatMode(i);
        if (iCalculateDeviceRatMode >= 0) {
            this.mPhone.setPreferredNetworkType(iCalculateDeviceRatMode, (Message) null);
        }
    }

    protected void setOperatorIdd(String str) {
        String iddByMcc = "";
        try {
            iddByMcc = this.mHbpcdUtils.getIddByMcc(Integer.parseInt(str.substring(0, 3)));
        } catch (NumberFormatException e) {
            loge("setOperatorIdd: idd error" + e);
        } catch (StringIndexOutOfBoundsException e2) {
            loge("setOperatorIdd: idd error" + e2);
        }
        if (iddByMcc == null || iddByMcc.isEmpty()) {
            TelephonyProperties.operator_idp_string("+");
        } else {
            TelephonyProperties.operator_idp_string(iddByMcc);
        }
    }

    protected void setPowerStateToDesired(boolean z, boolean z2, boolean z3) {
        String str = "mDeviceShuttingDown=" + this.mDeviceShuttingDown + ", mDesiredPowerState=" + this.mDesiredPowerState + ", getRadioState=" + this.mCi.getRadioState() + ", mPowerOffDelayNeed=" + this.mPowerOffDelayNeed + ", mAlarmSwitch=" + this.mAlarmSwitch + ", mRadioDisabledByCarrier=" + this.mRadioDisabledByCarrier;
        log(str);
        this.mRadioPowerLog.log(str);
        if (this.mPhone.isPhoneTypeGsm() && this.mAlarmSwitch) {
            log("mAlarmSwitch == true");
            ((AlarmManager) this.mPhone.getContext().getSystemService("alarm")).cancel(this.mRadioOffIntent);
            this.mAlarmSwitch = false;
        }
        if (!this.mDesiredPowerState || this.mRadioDisabledByCarrier || (!z3 && this.mCi.getRadioState() != 0)) {
            if ((this.mDesiredPowerState && !this.mRadioDisabledByCarrier) || this.mCi.getRadioState() != 1) {
                if (!this.mDeviceShuttingDown || this.mCi.getRadioState() == 2) {
                    return;
                }
                this.mCi.requestShutdown((Message) null);
                return;
            }
            if (!this.mPhone.isPhoneTypeGsm() || !this.mPowerOffDelayNeed) {
                powerOffRadioSafely();
                return;
            }
            if (!this.mImsRegistrationOnOff || this.mAlarmSwitch) {
                powerOffRadioSafely();
                return;
            }
            log("mImsRegistrationOnOff == true");
            Context context = this.mPhone.getContext();
            AlarmManager alarmManager = (AlarmManager) context.getSystemService("alarm");
            this.mRadioOffIntent = PendingIntent.getBroadcast(context, 0, new Intent("android.intent.action.ACTION_RADIO_OFF"), 0);
            this.mAlarmSwitch = true;
            log("Alarm setting");
            alarmManager.set(2, SystemClock.elapsedRealtime() + 3000, this.mRadioOffIntent);
            return;
        }
        if (this.mPhone.isPhoneTypeGsm()) {
            setDeviceRatMode(this.mPhone.getPhoneId());
        }
        RadioManager.getInstance();
        RadioManager.sendRequestBeforeSetRadioPower(true, this.mPhone.getPhoneId());
        if (this.mPhone instanceof MtkGsmCdmaPhone) {
            boolean eccRadioOnStatus = ((MtkGsmCdmaPhone) this.mPhone).getEccRadioOnStatus();
            boolean zIsEccSelectedPhone = ((MtkGsmCdmaPhone) this.mPhone).isEccSelectedPhone();
            if (!eccRadioOnStatus && z) {
                ((MtkGsmCdmaPhone) this.mPhone).setEccRadioOnStatus(z, z2);
            } else if (eccRadioOnStatus && !z && z3) {
                log("reset all phone radio ecc adjusts to false");
                for (MtkGsmCdmaPhone mtkGsmCdmaPhone : PhoneFactory.getPhones()) {
                    if (mtkGsmCdmaPhone != null && (mtkGsmCdmaPhone instanceof MtkGsmCdmaPhone)) {
                        mtkGsmCdmaPhone.setEccRadioOnStatus(false, false);
                    }
                }
            } else if (eccRadioOnStatus != z) {
                StringBuilder sb = new StringBuilder();
                sb.append("adjust forEcc, preEcc (");
                sb.append(eccRadioOnStatus ? "t" : "f");
                sb.append(",");
                sb.append(eccRadioOnStatus ? "t" : "f");
                sb.append(")");
                log(sb.toString());
                z = eccRadioOnStatus;
                z2 = zIsEccSelectedPhone;
            }
        }
        this.mCi.setRadioPower(true, z, z2, (Message) null);
    }

    public void setRadioPower(boolean z, boolean z2, boolean z3, boolean z4) {
        int radioState = this.mCi.getRadioState();
        log("setRadioPower power:" + z + ", mDesiredPowerState:" + this.mDesiredPowerState + ", forEmergencyCall:" + z2 + ", isSelectedPhoneForEmergencyCall:" + z3 + ", forceApply:" + z4 + ", radioState:" + radioState);
        if (z != this.mDesiredPowerState || ((!(this.mDesiredPowerState && radioState == 1) && (this.mDesiredPowerState || radioState != 0)) || z4)) {
            this.mDesiredPowerState = z;
            setPowerStateToDesired(z2, z3, z4);
            if (z2) {
                RadioManager.getInstance().forceRefreshSimState(z, this.mPhone.getPhoneId());
                return;
            }
            return;
        }
        log("setRadioPower mDesiredPowerState is already " + z + " Do nothing.");
    }

    public void setRadioPowerFromCarrier(boolean z) {
        this.mRadioDisabledByCarrier = !z;
        RadioManager.getInstance().setRadioPower(z, this.mPhone.getPhoneId());
    }

    protected void setRoamingType(ServiceState serviceState) {
        boolean z = serviceState.getState() == 0;
        if (z) {
            if (!serviceState.getVoiceRoaming()) {
                serviceState.setVoiceRoamingType(0);
            } else if (this.mPhone.isPhoneTypeGsm()) {
                if (inSameCountry(serviceState.getOperatorNumeric())) {
                    serviceState.setVoiceRoamingType(2);
                } else {
                    serviceState.setVoiceRoamingType(3);
                }
                if (IsInternationalRoamingException(serviceState.getVoiceOperatorNumeric())) {
                    log(serviceState.getVoiceOperatorNumeric() + " is in operator defined international roaming list");
                    serviceState.setVoiceRoamingType(3);
                }
            } else {
                int[] intArray = this.mPhone.getContext().getResources().getIntArray(R.array.config_batteryPackageTypeSystem);
                if (intArray != null && intArray.length > 0) {
                    serviceState.setVoiceRoamingType(2);
                    int cdmaRoamingIndicator = serviceState.getCdmaRoamingIndicator();
                    for (int i : intArray) {
                        if (cdmaRoamingIndicator == i) {
                            serviceState.setVoiceRoamingType(3);
                            break;
                        }
                    }
                } else if (inSameCountry(serviceState.getOperatorNumeric())) {
                    serviceState.setVoiceRoamingType(2);
                } else {
                    serviceState.setVoiceRoamingType(3);
                }
            }
        }
        boolean z2 = serviceState.getDataRegistrationState() == 0;
        int rilDataRadioTechnologyForWwan = getRilDataRadioTechnologyForWwan(serviceState);
        if (z2) {
            if (!serviceState.getDataRoaming()) {
                serviceState.setDataRoamingType(0);
                return;
            }
            if (!this.mPhone.isPhoneTypeGsm()) {
                if (ServiceState.isCdma(rilDataRadioTechnologyForWwan)) {
                    if (z) {
                        serviceState.setDataRoamingType(serviceState.getVoiceRoamingType());
                        return;
                    } else {
                        serviceState.setDataRoamingType(1);
                        return;
                    }
                }
                if (inSameCountry(serviceState.getOperatorNumeric())) {
                    serviceState.setDataRoamingType(2);
                    return;
                } else {
                    serviceState.setDataRoamingType(3);
                    return;
                }
            }
            if (!ServiceState.isGsm(rilDataRadioTechnologyForWwan)) {
                serviceState.setDataRoamingType(1);
                return;
            }
            if (z) {
                serviceState.setDataRoamingType(serviceState.getVoiceRoamingType());
                return;
            }
            if (inSameCountry(serviceState.getVoiceOperatorNumeric())) {
                serviceState.setDataRoamingType(2);
            } else {
                serviceState.setDataRoamingType(3);
            }
            if (IsInternationalRoamingException(serviceState.getVoiceOperatorNumeric())) {
                log(serviceState.getVoiceOperatorNumeric() + " is in operator defined international roaming list");
                serviceState.setDataRoamingType(3);
            }
        }
    }

    protected void setSignalStrengthDefaultValues() {
        this.mSignalStrength = new MtkSignalStrength(this.mPhone.getPhoneId());
        this.mSignalStrengthUpdatedTime = System.currentTimeMillis();
    }

    protected boolean shouldPauseNotifyServiceState() {
        return this.mIsNetworkModeChanging || this.mIsModemDataRestoring;
    }

    public void unregisterForDataRoamingTypeChange(Handler handler) {
        this.mDataRoamingTypeChangedRegistrants.remove(handler);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void updatePhoneType() {
        NetworkRegistrationInfo networkRegistrationInfo;
        this.mPhoneTypeUpdated = true;
        if (this.mSS != null && this.mSS.getVoiceRoaming()) {
            this.mVoiceRoamingOffRegistrants.notifyRegistrants();
        }
        if (this.mSS != null && this.mSS.getDataRoaming()) {
            this.mDataRoamingOffRegistrants.notifyRegistrants();
        }
        if (this.mSS != null && this.mSS.getState() == 0) {
            this.mNetworkDetachedRegistrants.notifyRegistrants();
        }
        boolean z = SystemProperties.getInt("persist.vendor.mtk_hvolte_indicator", 0) == 1;
        if (z) {
            log("hvolte register, skip notify detach registrants");
        } else {
            for (int i : this.mTransportManager.getAvailableTransports()) {
                if (this.mSS != null && (networkRegistrationInfo = this.mSS.getNetworkRegistrationInfo(2, i)) != null && networkRegistrationInfo.isInService() && this.mDetachedRegistrants.get(i) != null) {
                    ((RegistrantList) this.mDetachedRegistrants.get(i)).notifyRegistrants();
                }
            }
        }
        this.once_pollState_done = false;
        if (this.mSS == null || this.mNewSS == null || !z) {
            this.mSS = new MtkServiceState();
            this.mSS.setStateOutOfService();
            this.mNewSS = new MtkServiceState();
        } else {
            log("updatePhoneType, not reset mSS");
        }
        this.mLastCellInfoReqTime = 0L;
        this.mLastCellInfoList = null;
        this.mSignalStrength = new MtkSignalStrength(this.mPhone.getPhoneId());
        this.mRestrictedState = new RestrictedState();
        this.mStartedGprsRegCheck = false;
        this.mReportedGprsNoReg = false;
        this.mMdn = null;
        this.mMin = null;
        this.mPrlVersion = null;
        this.mIsMinInfoReady = false;
        this.mLastNitzData = null;
        this.mNitzState.handleNetworkUnavailable();
        this.mCellIdentity = null;
        this.mNewPSCellIdentity = null;
        this.mSignalStrengthUpdatedTime = System.currentTimeMillis();
        cancelPollState();
        if (this.mPhone.isPhoneTypeGsm()) {
            if (this.mCdmaSSM != null) {
                this.mCdmaSSM.dispose(this);
            }
            this.mCi.unregisterForCdmaPrlChanged(this);
            this.mCi.unregisterForCdmaOtaProvision(this);
            this.mPhone.unregisterForSimRecordsLoaded(this);
            this.mCi.setInvalidSimInfo(this, 101, null);
            this.mCi.registerForIccRefresh(this, EVENT_ICC_REFRESH, null);
            this.mCi.registerForNetworkEvent(this, EVENT_NETWORK_EVENT, null);
            this.mCi.registerForModulation(this, EVENT_MODULATION_INFO, null);
            if (SystemProperties.get("ro.vendor.mtk_femto_cell_support").equals("1")) {
                this.mCi.registerForFemtoCellInfo(this, 102, null);
            }
            try {
                if (this.mServiceStateTrackerExt != null && this.mServiceStateTrackerExt.isImeiLocked()) {
                    this.mCi.registerForIMEILock(this, EVENT_IMEI_LOCK, null);
                }
            } catch (RuntimeException e) {
                loge("No isImeiLocked");
            }
        } else {
            this.mCi.unregisterForAvailable(this);
            this.mCi.unSetOnRestrictedStateChanged(this);
            this.mPsRestrictDisabledRegistrants.notifyRegistrants();
            this.mCi.unregisterForCdmaPrlChanged(this);
            this.mCi.unregisterForCdmaOtaProvision(this);
            this.mPhone.unregisterForSimRecordsLoaded(this);
            this.mCi.unregisterForIccRefresh(this);
            this.mCi.unSetInvalidSimInfo(this);
            this.mCi.unregisterForNetworkEvent(this);
            this.mCi.unregisterForModulation(this);
            try {
                if (this.mServiceStateTrackerExt != null && this.mServiceStateTrackerExt.isImeiLocked()) {
                    this.mCi.unregisterForIMEILock(this);
                }
            } catch (RuntimeException e2) {
                loge("No isImeiLocked");
            }
            if (this.mPhone.isPhoneTypeCdmaLte()) {
                this.mPhone.registerForSimRecordsLoaded(this, 16, (Object) null);
            }
            this.mCdmaSSM = CdmaSubscriptionSourceManager.getInstance(this.mPhone.getContext(), this.mCi, this, 39, (Object) null);
            this.mIsSubscriptionFromRuim = this.mCdmaSSM.getCdmaSubscriptionSource() == 0;
            this.mCi.registerForCdmaPrlChanged(this, 40, (Object) null);
            this.mCi.registerForCdmaOtaProvision(this, 37, (Object) null);
            this.mHbpcdUtils = new HbpcdUtils(this.mPhone.getContext());
            updateOtaspState();
        }
        onUpdateIccAvailability();
        setDataNetworkTypeForPhone(0);
        this.mCi.getSignalStrength(obtainMessage(3));
        sendMessage(obtainMessage(50));
        logPhoneTypeChange();
        notifyVoiceRegStateRilRadioTechnologyChanged();
        if (z) {
            return;
        }
        for (int i2 : this.mTransportManager.getAvailableTransports()) {
            notifyDataRegStateRilRadioTechnologyChanged(i2);
        }
    }

    protected void updateRoamingState() {
        PersistableBundle carrierConfig = getCarrierConfig();
        if (!this.mPhone.isPhoneTypeGsm()) {
            String string = Integer.toString(this.mNewSS.getCdmaSystemId());
            if (alwaysOnHomeNetwork(carrierConfig)) {
                log("updateRoamingState: carrier config override always on home network");
                setRoamingOff();
            } else if (isNonRoamingInGsmNetwork(carrierConfig, this.mNewSS.getOperatorNumeric()) || isNonRoamingInCdmaNetwork(carrierConfig, string)) {
                log("updateRoamingState: carrier config override set non-roaming:" + this.mNewSS.getOperatorNumeric() + ", " + string);
                setRoamingOff();
            } else if (isRoamingInGsmNetwork(carrierConfig, this.mNewSS.getOperatorNumeric()) || isRoamingInCdmaNetwork(carrierConfig, string)) {
                log("updateRoamingState: carrier config override set roaming:" + this.mNewSS.getOperatorNumeric() + ", " + string);
                setRoamingOn();
            }
            if (TelephonyUtils.IS_DEBUGGABLE && SystemProperties.getBoolean("telephony.test.forceRoaming", false)) {
                this.mNewSS.setRoaming(true);
                return;
            }
            return;
        }
        boolean z = this.mGsmVoiceRoaming || this.mGsmDataRoaming;
        if (z && !isOperatorConsideredRoaming(this.mNewSS) && (isSameNamedOperators(this.mNewSS) || isOperatorConsideredNonRoaming(this.mNewSS))) {
            log("updateRoamingState: resource override set non roaming.isSameNamedOperators=" + isSameNamedOperators(this.mNewSS) + ",isOperatorConsideredNonRoaming=" + isOperatorConsideredNonRoaming(this.mNewSS));
            z = false;
        }
        if (z && this.mPhone.getOperatorNumeric() != null && (this.mPhone.getOperatorNumeric().equals(this.mNewSS.getOperatorNumeric()) || ("21404".equals(this.mPhone.getOperatorNumeric()) && TextUtils.isEmpty(this.mNewSS.getOperatorNumeric())))) {
            z = false;
        }
        if (alwaysOnHomeNetwork(carrierConfig)) {
            log("updateRoamingState: carrier config override always on home network");
            z = false;
        } else if (isNonRoamingInGsmNetwork(carrierConfig, this.mNewSS.getOperatorNumeric())) {
            log("updateRoamingState: carrier config override set non roaming:" + this.mNewSS.getOperatorNumeric());
            z = false;
        } else if (isRoamingInGsmNetwork(carrierConfig, this.mNewSS.getOperatorNumeric())) {
            log("updateRoamingState: carrier config override set roaming:" + this.mNewSS.getOperatorNumeric());
            z = true;
        }
        this.mNewSS.setRoaming(z);
    }

    protected void updateSpnDisplayLegacy() {
        boolean z;
        boolean z2;
        String string;
        boolean z3;
        String str;
        String str2;
        boolean z4;
        boolean z5;
        String str3 = null;
        String str4 = null;
        String str5 = null;
        int combinedRegState = getCombinedRegState(this.mSS);
        if (this.mPhone.getImsPhone() != null && this.mPhone.getImsPhone().isWifiCallingEnabled() && combinedRegState == 0) {
            PersistableBundle carrierConfig = getCarrierConfig();
            int i = carrierConfig.getInt("wfc_spn_format_idx_int");
            int i2 = carrierConfig.getInt("wfc_data_spn_format_idx_int");
            int i3 = carrierConfig.getInt("wfc_flight_mode_spn_format_idx_int");
            String[] stringArray = SubscriptionManager.getResourcesForSubId(this.mPhone.getContext(), this.mPhone.getSubId(), carrierConfig.getBoolean("wfc_spn_use_root_locale")).getStringArray(R.array.config_roundedCornerBottomRadiusArray);
            if (i < 0 || i >= stringArray.length) {
                loge("updateSpnDisplay: KEY_WFC_SPN_FORMAT_IDX_INT out of bounds: " + i);
                i = 0;
            }
            if (i2 < 0 || i2 >= stringArray.length) {
                loge("updateSpnDisplay: KEY_WFC_DATA_SPN_FORMAT_IDX_INT out of bounds: " + i2);
                i2 = 0;
            }
            if (i3 < 0 || i3 >= stringArray.length) {
                i3 = i;
            }
            str3 = stringArray[i];
            str4 = stringArray[i2];
            str5 = stringArray[i3];
        }
        if (this.mPhone.isPhoneTypeGsm()) {
            IccRecords iccRecords = this.mIccRecords;
            int carrierNameDisplayBitmask = getCarrierNameDisplayBitmask(this.mSS);
            boolean z6 = false;
            if (combinedRegState == 1 || combinedRegState == 2) {
                z = true;
                if ((shouldForceDisplayNoService() && !this.mIsSimReady) || !Phone.isEmergencyCallOnly()) {
                    string = Resources.getSystem().getText(R.string.global_action_screenshot).toString();
                    z6 = true;
                } else {
                    string = Resources.getSystem().getText(R.string.console_running_notification_title).toString();
                }
                log("updateSpnDisplay: radio is on but out of service, set plmn='" + string + "'");
                z5 = z6;
            } else if (combinedRegState == 0) {
                this.mSS.getOperatorAlpha();
                String plmn = ServiceStateTrackerInjector.getPlmn(this);
                z = !TextUtils.isEmpty(plmn) && (carrierNameDisplayBitmask & 2) == 2;
                log("updateSpnDisplay: rawPlmn = " + plmn);
                string = plmn;
                z5 = false;
            } else {
                z = true;
                String string2 = Resources.getSystem().getText(R.string.global_action_screenshot).toString();
                log("updateSpnDisplay: radio is off w/ showPlmn=true plmn=" + string2);
                string = string2;
                z5 = false;
            }
            try {
                string = this.mServiceStateTrackerExt.onUpdateSpnDisplay(string, (MtkServiceState) this.mSS, this.mPhone.getPhoneId());
            } catch (RuntimeException e) {
                e.printStackTrace();
            }
            if (this.mSS.getState() != 0 && this.mSS.getDataRegState() == 0) {
                if (string != null) {
                    boolean zShowEccForIms = this.mServiceStateTrackerExt.showEccForIms();
                    boolean imsEccOnly = getImsEccOnly();
                    log("CS OOS/PS In service, check eccForIms=" + zShowEccForIms + " imsEccOnly=" + imsEccOnly);
                    if (zShowEccForIms && imsEccOnly) {
                        string = string + "(" + Resources.getSystem().getText(R.string.console_running_notification_title).toString() + ")";
                    }
                } else {
                    log("PLMN name is null when CS not registered and PS registered");
                }
            }
            if (this.mIsImeiLock) {
                string = "";
            }
            getServiceProviderName();
            String spn = ServiceStateTrackerInjector.getSpn(this);
            str2 = spn;
            boolean z7 = (z5 || TextUtils.isEmpty(spn) || (carrierNameDisplayBitmask & 1) != 1) ? false : true;
            log("updateSpnDisplay: rawSpn = " + spn);
            if (!TextUtils.isEmpty(spn) && !TextUtils.isEmpty(str3) && !TextUtils.isEmpty(str4)) {
                if (this.mSS.getState() == 3) {
                    str3 = str5;
                }
                String strTrim = spn.trim();
                spn = ServiceStateTrackerInjector.getDisplaySpn(this, str3, strTrim);
                str2 = String.format(str4, strTrim);
                z7 = true;
                z = false;
            } else if (!TextUtils.isEmpty(string) && !TextUtils.isEmpty(str3)) {
                string = String.format(str3, string.trim());
            } else if (this.mSS.getState() == 3 || (z && TextUtils.equals(spn, string))) {
                spn = null;
                z7 = false;
            }
            if (this.mSS.getVoiceRegState() != 0 && this.mSS.getDataRegState() != 0) {
                z3 = false;
                str = null;
            } else if (this.mSS.getVoiceRegState() == 0 || this.mSS.getRilDataRadioTechnology() != 18 || this.mPhone.isWifiCallingEnabled()) {
                z3 = z7;
                str = spn;
            } else {
                z3 = false;
                str = null;
            }
            try {
                if (this.mServiceStateTrackerExt.needSpnRuleShowPlmnOnly() && !TextUtils.isEmpty(string)) {
                    log("origin showSpn:" + z3 + " showPlmn:" + z + " rule:" + carrierNameDisplayBitmask);
                    z = true;
                    carrierNameDisplayBitmask = 2;
                    z3 = false;
                }
            } catch (RuntimeException e2) {
                e2.printStackTrace();
            }
            try {
                if (!this.mServiceStateTrackerExt.allowSpnDisplayed() && carrierNameDisplayBitmask == 3) {
                    str = null;
                    z3 = false;
                }
            } catch (RuntimeException e3) {
                e3.printStackTrace();
            }
            if (!z && !z3 && !TextUtils.isEmpty(string)) {
                z = true;
            }
        } else {
            String operatorNameFromEri = getOperatorNameFromEri();
            if (operatorNameFromEri != null) {
                this.mSS.setOperatorAlphaLong(operatorNameFromEri);
            }
            updateOperatorNameFromCarrierConfig();
            this.mSS.getOperatorAlpha();
            String plmn2 = ServiceStateTrackerInjector.getPlmn(this);
            log("updateSpnDisplay: cdma rawPlmn = " + plmn2);
            z = plmn2 != null;
            if (plmn2 != null && plmn2.equals("")) {
                plmn2 = null;
            }
            if (TextUtils.isEmpty(plmn2) || TextUtils.isEmpty(str3)) {
                z2 = false;
                if (this.mCi.getRadioState() == 0) {
                    logv("updateSpnDisplay: overwriting plmn from " + plmn2 + " to null as radio state is off");
                    plmn2 = null;
                }
            } else {
                z2 = false;
                plmn2 = String.format(str3, plmn2.trim());
            }
            if (combinedRegState == 1 || combinedRegState == 3) {
                z = true;
                plmn2 = Resources.getSystem().getText(R.string.global_action_screenshot).toString();
                logv("updateSpnDisplay: radio is on but out of svc, set plmn='" + plmn2 + "'");
            }
            if (this.mEmergencyOnly && this.mCi.getRadioState() == 1) {
                logv("updateSpnDisplay:phone show emergency call only, mEmergencyOnly = true");
                z = true;
                string = Resources.getSystem().getText(R.string.console_running_notification_title).toString();
            } else {
                string = plmn2;
            }
            String spn2 = "";
            boolean z8 = false;
            try {
                if (this.mServiceStateTrackerExt.allowSpnDisplayed()) {
                    int carrierNameDisplayBitmask2 = getCarrierNameDisplayBitmask(this.mSS);
                    getServiceProviderName();
                    spn2 = ServiceStateTrackerInjector.getSpn(this);
                    z8 = (TextUtils.isEmpty(spn2) || (carrierNameDisplayBitmask2 & 1) != 1 || this.mSS.getVoiceRegState() == 3 || this.mSS.getRoaming()) ? z2 : true;
                    logv("[CDMA]updateSpnDisplay: rule=" + carrierNameDisplayBitmask2 + ", spn=" + spn2 + ", showSpn=" + z8);
                    str = spn2;
                    z4 = z8;
                } else {
                    str = "";
                    z4 = false;
                }
                z = string != null ? true : z2;
                try {
                    if (!this.mServiceStateTrackerExt.allowSpnDisplayed()) {
                        z3 = z4;
                    } else if (this.mSS.getVoiceRegState() == 3 || this.mSS.getVoiceRegState() == 1 || this.mSS.getRoaming() || TextUtils.isEmpty(str)) {
                        z3 = false;
                        z = true;
                    } else {
                        z3 = true;
                        z = false;
                    }
                    str2 = null;
                } catch (RuntimeException e4) {
                    e = e4;
                    z3 = z4;
                    e.printStackTrace();
                    str2 = null;
                }
            } catch (RuntimeException e5) {
                e = e5;
                z3 = z8;
                str = spn2;
            }
        }
        if (ServiceStateTrackerInjector.isOnlyShowSpn(this) && !TextUtils.isEmpty(str)) {
            z = false;
            z3 = true;
        }
        notifySpnDisplayUpdate(new CarrierDisplayNameData.Builder().setSpn(str).setDataSpn(str2).setShowSpn(z3).setPlmn(string).setShowPlmn(z).build());
        logv("updateSpnDisplayLegacy-");
    }

    public boolean willLocatedPlmnChange() {
        MtkServiceState mtkServiceState = this.mSS;
        return (mtkServiceState == null || this.mLocatedPlmn == null || mtkServiceState.getCellularRegState() != 0 || TextUtils.equals(mtkServiceState.getOperatorNumeric(), this.mLocatedPlmn)) ? false : true;
    }
}

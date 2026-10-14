package com.mediatek.internal.telephony.dataconnection;

import android.R;
import android.app.usage.NetworkStatsManager;
import android.content.BroadcastReceiver;
import android.content.ContentResolver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.database.Cursor;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.NetworkStats;
import android.net.Uri;
import android.net.netstats.provider.NetworkStatsProvider;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.provider.Settings;
import android.provider.Telephony;
import android.telephony.CarrierConfigManager;
import android.telephony.DataFailCause;
import android.telephony.PcoData;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.data.ApnSetting;
import android.telephony.data.DataProfile;
import android.text.TextUtils;
import com.android.internal.telephony.DctConstants;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.PhoneSwitcher;
import com.android.internal.telephony.TelephonyDevController;
import com.android.internal.telephony.dataconnection.ApnConfigType;
import com.android.internal.telephony.dataconnection.ApnContext;
import com.android.internal.telephony.dataconnection.ApnSettingUtils;
import com.android.internal.telephony.dataconnection.DataConnection;
import com.android.internal.telephony.dataconnection.DataConnectionReasons;
import com.android.internal.telephony.dataconnection.DcTracker;
import com.android.internal.telephony.dataconnection.DcTrackerInjector;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.util.ArrayUtils;
import com.mediatek.internal.telephony.IMtkTelephonyEx;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkHardwareConfig;
import com.mediatek.internal.telephony.MtkIccCardConstants;
import com.mediatek.internal.telephony.MtkServiceStateTracker;
import com.mediatek.internal.telephony.OpTelephonyCustomizationFactoryBase;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.ims.MtkDedicateDataCallResponse;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.uicc.MtkIccUtilsEx;
import com.mediatek.internal.telephony.uicc.MtkUiccController;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimConstants;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimManager;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import mediatek.telephony.MtkServiceState;
import mediatek.telephony.data.MtkApnSetting;
import vendor.mediatek.hardware.mtkradioex.V2_0.MtkApnTypes;

/* JADX INFO: loaded from: classes.dex */
public class MtkDcTracker extends DcTracker {
    private static final boolean DBG = true;
    private static final String FDN_CONTENT_URI = "content://icc/fdn";
    private static final String FDN_CONTENT_URI_WITH_SUB_ID = "content://icc/fdn/subId/";
    private static final String FDN_FOR_ALLOW_DATA = "*99#";
    private static final String GID1_DEFAULT = "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
    private static final String LOG_TAG = "MtkDct";
    private static final String SKIP_DATA_STALL_ALARM = "persist.vendor.skip.data.stall.alarm";
    private static final int THROTTLING_MAX_PDP_SIZE = 8;
    private String[] MCCMNC_EE;
    private String[] MCCMNC_OP18;
    private String[] MCCMNC_TELCEL;
    private String[] MCCMNC_TELSTRA;
    private boolean mAllowConfig;
    private boolean mCcDomesticRoamingEnabled;
    private String[] mCcDomesticRoamingSpecifiedNw;
    private boolean mCcIntlRoamingEnabled;
    private boolean mCcOneSettingForRoaming;
    private boolean mCcUniqueSettingsForRoaming;
    CpaDcTracker mCpaDcTracker;
    Handler mCpaDctCallback;
    private IDataConnectionExt mDataConnectionExt;
    private DataRetryOperator mDataRetryOperator;
    private int mDedicatedBearerCount;
    MtkDataConnection mDetachedDc;
    private int mHandoverApnType;
    private boolean mHasFetchMdAutoSetupImsCapability;
    private boolean mHasFetchModemDeactPdnCapabilityForMultiPS;
    private IccRecords mIccRecords;
    private final BroadcastReceiver mIntentReceiverEx;
    private boolean mIsAddMnoApnsIntoAllApnList;
    private boolean mIsFdnChecked;
    private boolean mIsMatchFdnForAllowData;
    private boolean mIsNotifyDataAttached;
    private boolean mIsOperatorNumericEmpty;
    private boolean mIsPhbStateChangedIntentRegistered;
    private boolean mIsRecordsOverride;
    private boolean mIsSimNotReady;
    private boolean mIsSupportConcurrent;
    private boolean mMdAutoSetupImsCapability;
    private volatile NetworkStats mMobileDataUsage;
    private final MobileDataUsageProvider mMobileDataUsageProvider;
    private boolean mModemDeactPdnCapabilityForMultiPS;
    private int mMtuFromResource;
    private final DctOnSubscriptionsChangedListener mOnSubscriptionsChangedListener;
    private boolean mPendingDataCall;
    private BroadcastReceiver mPhbStateChangedIntentReceiver;
    private int mPhoneType;
    private PlmnMvnoData mPlmnMvnoData;
    private int mRealPhoneType;
    private int mRilRat;
    private SubscriptionManager mSubscriptionManager;
    private TelephonyDevController mTelDevController;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory;
    private MtkServiceState mTurboSS;
    private AtomicReference<UiccCardApplication> mUiccCardApplication;
    private Handler mWorkerHandler;
    private static final boolean VDBG = Build.IS_ENG;
    private static final String[] mImpiList = {"405840", "405854", "405855", "405856", "405857", "405858", "405859", "405860", "405861", "405862", "405863", "405864", "405865", "405866", "405867", "405868", "405869", "405870", "405871", "405872", "405873", "405874"};
    private static final String[] KDDI_OPERATOR = {"44007", "44008", "44050", "44051", "44052", "44053", "44054", "44055", "44056", "44070", "44071", "44072", "44073", "44074", "44075", "44076", "44077", "44078", "44079", "44088", "44089", "44170"};
    static final Uri PREFERAPN_NO_UPDATE_URI_USING_SUBID = Uri.parse("content://telephony/carriers/preferapn_no_update/subId/");

    private enum DataRetryOperator {
        UNKNOWN,
        TELCEL,
        TELSTRA,
        EE,
        KDDI
    }

    private class DctOnSubscriptionsChangedListener extends SubscriptionManager.OnSubscriptionsChangedListener {
        public final AtomicInteger mPreviousSubId;

        private DctOnSubscriptionsChangedListener() {
            this.mPreviousSubId = new AtomicInteger(-1);
        }

        @Override // android.telephony.SubscriptionManager.OnSubscriptionsChangedListener
        public void onSubscriptionsChanged() {
            int subId = MtkDcTracker.this.mPhone.getSubId();
            MtkDcTracker.this.log("onSubscriptionsChanged: subId = " + subId + ", mPreviousSubId = " + this.mPreviousSubId);
            if (SubscriptionManager.isValidSubscriptionId(subId)) {
                if (this.mPreviousSubId.getAndSet(subId) != subId) {
                    MtkDcTracker.this.onSubIdReady();
                }
            } else if (SubscriptionManager.isValidSubscriptionId(this.mPreviousSubId.get())) {
                this.mPreviousSubId.set(-1);
            }
        }
    }

    public class MobileDataUsageProvider extends NetworkStatsProvider {
        private int mToken = 0;
        private NetworkStats mIfaceSnapshot = new NetworkStats(0, 0);

        public MobileDataUsageProvider() {
        }

        public void onRequestStatsUpdate(int i) {
            this.mToken = i;
        }

        public void onSetAlert(long j) {
        }

        public void onSetLimit(String str, long j) {
        }

        public void pushMobileDataUsageStats(int i) {
            if (MtkDcTracker.this.mMobileDataUsage == null) {
                MtkDcTracker.this.loge("mMobileDataUsage == null");
                return;
            }
            NetworkStats networkStatsSubtract = MtkDcTracker.this.mMobileDataUsage.subtract(this.mIfaceSnapshot);
            try {
                notifyStatsUpdated(i, networkStatsSubtract, null);
                this.mIfaceSnapshot = this.mIfaceSnapshot.add(networkStatsSubtract);
            } catch (RuntimeException e) {
                MtkDcTracker.this.loge("Cannot report network stats " + e);
            }
        }
    }

    private class WorkerHandler extends Handler {
        private WorkerHandler() {
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 270858) {
                return;
            }
            MtkDcTracker.this.cleanOrSetupDataConnByCheckFdn();
        }
    }

    public MtkDcTracker(Phone phone, int i) {
        super(phone, i);
        this.mTelephonyCustomizationFactory = null;
        this.mDataConnectionExt = null;
        this.mDedicatedBearerCount = 0;
        this.mAllowConfig = false;
        this.mHasFetchModemDeactPdnCapabilityForMultiPS = false;
        this.mModemDeactPdnCapabilityForMultiPS = false;
        this.mHasFetchMdAutoSetupImsCapability = false;
        this.mMdAutoSetupImsCapability = false;
        this.mIsSupportConcurrent = false;
        this.mTelDevController = TelephonyDevController.getInstance();
        this.mCcDomesticRoamingEnabled = false;
        this.mCcDomesticRoamingSpecifiedNw = null;
        this.mCcIntlRoamingEnabled = false;
        this.mCcUniqueSettingsForRoaming = false;
        this.mCcOneSettingForRoaming = false;
        this.mIsAddMnoApnsIntoAllApnList = false;
        this.mPhoneType = 0;
        this.mRealPhoneType = 0;
        this.mPlmnMvnoData = null;
        this.mIsOperatorNumericEmpty = false;
        this.mIsSimNotReady = false;
        this.mIsNotifyDataAttached = false;
        this.mTurboSS = null;
        this.mMtuFromResource = 0;
        this.mIccRecords = null;
        this.mIsRecordsOverride = false;
        this.mOnSubscriptionsChangedListener = new DctOnSubscriptionsChangedListener();
        this.MCCMNC_OP18 = new String[]{"405840", "405854", "405855", "405856", "405857", "405858", "405859", "405860", "405861", "405862", "405863", "405864", "405865", "405866", "405867", "405868", "405869", "405870", "405871", "405872", "405873", "405874"};
        this.MCCMNC_TELCEL = new String[]{"33402", "334020"};
        this.MCCMNC_TELSTRA = new String[]{"50501"};
        this.MCCMNC_EE = new String[]{"23430"};
        this.mDataRetryOperator = DataRetryOperator.UNKNOWN;
        this.mRilRat = 0;
        this.mHandoverApnType = 0;
        this.mMobileDataUsage = null;
        this.mMobileDataUsageProvider = new MobileDataUsageProvider();
        this.mCpaDctCallback = null;
        this.mCpaDcTracker = null;
        this.mDetachedDc = null;
        this.mIntentReceiverEx = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDcTracker.1
            /* JADX WARN: Multi-variable type inference failed */
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                String action = intent.getAction();
                MtkDcTracker.this.log("mIntentReceiverEx onReceive: action=" + action);
                if (action.equals("android.net.wifi.WIFI_STATE_CHANGED")) {
                    MtkDcTracker.this.log("Wifi state changed");
                    MtkDcTracker.this.onWifiStateChanged(intent.getIntExtra("wifi_state", 4) != 3 ? 0 : 1);
                    return;
                }
                if (action.equals("com.mediatek.common.carrierexpress.operator_config_changed")) {
                    MtkDcTracker.this.reloadOpCustomizationFactory();
                    return;
                }
                if (!action.equals("android.intent.action.RADIO_TECHNOLOGY")) {
                    MtkDcTracker.this.log("onReceive: Unknown action=" + action);
                    return;
                }
                int intExtra = intent.getIntExtra("phone", -1);
                String stringExtra = intent.getStringExtra("phoneName");
                MtkDcTracker.this.logd("ACTION_RADIO_TECHNOLOGY_CHANGED: phoneId = " + intExtra + ", activePhoneName = " + stringExtra + ", mRealPhoneType = " + MtkDcTracker.this.mRealPhoneType);
                if (intExtra != MtkDcTracker.this.mPhone.getPhoneId()) {
                    return;
                }
                if ((MtkDcTracker.this.mRealPhoneType == 1 || !"GSM".equals(stringExtra)) && (MtkDcTracker.this.mRealPhoneType == 2 || !"CDMA".equals(stringExtra))) {
                    return;
                }
                MtkDcTracker.this.mRealPhoneType = "GSM".equals(stringExtra) ? 1 : 2;
                MtkDcTracker.this.onSubIdReady();
            }
        };
        this.mIsFdnChecked = false;
        this.mIsMatchFdnForAllowData = false;
        this.mIsPhbStateChangedIntentRegistered = false;
        this.mPhbStateChangedIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDcTracker.2
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                String action = intent.getAction();
                MtkDcTracker.this.log("onReceive: action=" + action);
                if (action.equals("mediatek.intent.action.PHB_STATE_CHANGED")) {
                    boolean booleanExtra = intent.getBooleanExtra("ready", false);
                    MtkDcTracker.this.log("bPhbReady: " + booleanExtra);
                    if (booleanExtra) {
                        MtkDcTracker.this.onFdnChanged();
                    }
                }
            }
        };
        this.mPendingDataCall = false;
        this.mDataServiceManager.setIwlanDataServiceClassName("com.mediatek.internal.telephony.dataconnection.IwlanDataService");
        reloadOpCustomizationFactory();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
        intentFilter.addAction("android.intent.action.RADIO_TECHNOLOGY");
        this.mPhone.getContext().registerReceiver(this.mIntentReceiverEx, intentFilter, null, this.mPhone);
        if (TelephonyManager.getDefault().getPhoneCount() == 1) {
            this.mAllowConfig = true;
        }
        this.mMobileDataUsage = new NetworkStats(SystemClock.elapsedRealtime(), 1);
        ((NetworkStatsManager) this.mPhone.getContext().getSystemService("netstats")).registerNetworkStatsProvider(this.mLogTag, this.mMobileDataUsageProvider);
        createWorkerHandler();
        setSscMode();
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mPhone.getContext());
        this.mSubscriptionManager = subscriptionManagerFrom;
        subscriptionManagerFrom.addOnSubscriptionsChangedListener(this.mOnSubscriptionsChangedListener);
    }

    private void addVsimApnTypeToDefaultApnSetting() {
        int i;
        if (!ExternalSimManager.isNonDsdaRemoteSimSupport() || this.mAllApnSettings == null) {
            return;
        }
        int i2 = 0;
        while (i2 < this.mAllApnSettings.size()) {
            MtkApnSetting mtkApnSetting = (ApnSetting) this.mAllApnSettings.get(i2);
            if (mtkApnSetting.canHandleType(17)) {
                i = i2;
                this.mAllApnSettings.set(i, new MtkApnSetting(mtkApnSetting.getId(), mtkApnSetting.getOperatorNumeric(), mtkApnSetting.getEntryName(), mtkApnSetting.getApnName(), mtkApnSetting.getProxyAddressAsString(), mtkApnSetting.getProxyPort(), mtkApnSetting.getMmsc(), mtkApnSetting.getMmsProxyAddressAsString(), mtkApnSetting.getMmsProxyPort(), mtkApnSetting.getUser(), mtkApnSetting.getPassword(), mtkApnSetting.getAuthType(), mtkApnSetting.getApnTypeBitmask() | MtkApnTypes.VSIM, mtkApnSetting.getProtocol(), mtkApnSetting.getRoamingProtocol(), mtkApnSetting.isEnabled(), mtkApnSetting.getNetworkTypeBitmask(), mtkApnSetting.getProfileId(), mtkApnSetting.isPersistent(), mtkApnSetting.getMaxConns(), mtkApnSetting.getWaitTime(), mtkApnSetting.getMaxConnsTime(), mtkApnSetting.getMtu(), mtkApnSetting.getMvnoType(), mtkApnSetting.getMvnoMatchData(), mtkApnSetting.getApnSetId(), mtkApnSetting.getCarrierId(), mtkApnSetting.getSkip464Xlat(), mtkApnSetting.inactiveTimer));
            } else {
                i = i2;
            }
            i2 = i + 1;
        }
    }

    private ApnSetting checkAndSetPreferredApn(ApnContext apnContext, ApnSetting apnSetting, boolean z, ArrayList<ApnSetting> arrayList) {
        if (apnSetting == null && z && apnContext.getState() == DctConstants.State.CONNECTED && apnContext.getApnSetting() != null) {
            ApnSetting apnSetting2 = apnContext.getApnSetting();
            apnSetting = apnSetting2;
            int id = apnSetting2.getId();
            for (ApnSetting apnSetting3 : arrayList) {
                if (apnSetting2.equals(apnSetting3, this.mPhone.getServiceState().getDataRoamingFromRegistration())) {
                    apnSetting = apnSetting3;
                    id = apnSetting3.getId();
                    break;
                }
            }
            setPreferredApn(id);
            this.mPhone.notifyDataConnection("default");
        }
        return apnSetting;
    }

    private boolean checkDomesticDataRoamingEnabled() {
        log("checkDomesticDataRoamingEnabled: getDomesticDataRoamingFromSettings=" + getDomesticDataRoamingEnabledFromSettings() + ", isDomesticRoaming=" + isDomesticRoaming());
        return getDomesticDataRoamingEnabledFromSettings() && isDomesticRoaming();
    }

    private boolean checkInternationalDataRoamingEnabled() {
        log("checkInternationalDataRoamingEnabled: getInternationalDataRoamingFromSettings=" + getInternationalDataRoamingEnabledFromSettings() + ", isIntlRoaming=" + isIntlRoaming());
        return getInternationalDataRoamingEnabledFromSettings() && isIntlRoaming();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void cleanOrSetupDataConnByCheckFdn() {
        Uri uri;
        log("cleanOrSetupDataConnByCheckFdn()");
        if (SubscriptionManager.isValidSubscriptionId(this.mPhone.getSubId())) {
            uri = Uri.parse(FDN_CONTENT_URI_WITH_SUB_ID + this.mPhone.getSubId());
        } else {
            uri = Uri.parse(FDN_CONTENT_URI);
        }
        Cursor cursorQuery = this.mPhone.getContext().getContentResolver().query(uri, new String[]{PplMessageManager.PendingMessage.KEY_NUMBER}, null, null, null);
        this.mIsMatchFdnForAllowData = false;
        if (cursorQuery != null) {
            this.mIsFdnChecked = true;
            if (cursorQuery.getCount() > 0 && cursorQuery.moveToFirst()) {
                do {
                    String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(PplMessageManager.PendingMessage.KEY_NUMBER));
                    log("strFdnNumber = " + string);
                    if (string.equals(FDN_FOR_ALLOW_DATA)) {
                        this.mIsMatchFdnForAllowData = true;
                        break;
                    }
                } while (cursorQuery.moveToNext());
            }
            cursorQuery.close();
        }
        if (this.mIsMatchFdnForAllowData) {
            log("match FDN for allow data, call setupDataOnAllConnectableApns()");
            setupDataOnAllConnectableApns(MtkGsmCdmaPhone.REASON_FDN_DISABLED, DcTracker.RetryFailures.ALWAYS);
        } else {
            log("not match FDN for allow data, call cleanUpAllConnections(REASON_FDN_ENABLED)");
            cleanUpAllConnectionsInternal(true, MtkGsmCdmaPhone.REASON_FDN_ENABLED);
        }
    }

    private ArrayList<ApnSetting> createApnList(Cursor cursor) {
        ArrayList<ApnSetting> arrayList;
        ArrayList<ApnSetting> arrayList2 = new ArrayList<>();
        ArrayList<ApnSetting> arrayList3 = new ArrayList<>();
        IccRecords iccRecords = UiccController.getInstance().getIccRecords(this.mPhone.getPhoneId(), 1);
        if (cursor.moveToFirst()) {
            do {
                ApnSetting apnSettingMakeApnSetting = makeApnSetting(cursor);
                if (apnSettingMakeApnSetting != null) {
                    if (!apnSettingMakeApnSetting.hasMvnoParams()) {
                        arrayList2.add(apnSettingMakeApnSetting);
                    } else if (isMvnoMatches(apnSettingMakeApnSetting.getMvnoType(), apnSettingMakeApnSetting.getMvnoMatchData()) || (iccRecords != null && ApnSettingUtils.mvnoMatches(iccRecords, apnSettingMakeApnSetting.getMvnoType(), apnSettingMakeApnSetting.getMvnoMatchData()))) {
                        arrayList3.add(apnSettingMakeApnSetting);
                    }
                }
            } while (cursor.moveToNext());
        }
        if (arrayList3.isEmpty()) {
            arrayList = arrayList2;
        } else {
            arrayList = arrayList3;
            if (this.mIsAddMnoApnsIntoAllApnList) {
                log("mnoApns=" + arrayList2);
                arrayList.addAll(arrayList2);
            }
        }
        log("createApnList: X result=" + arrayList);
        return arrayList;
    }

    private void createWorkerHandler() {
        if (this.mWorkerHandler == null) {
            new Thread() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDcTracker.3
                @Override // java.lang.Thread, java.lang.Runnable
                public void run() {
                    Looper.prepare();
                    MtkDcTracker.this.mWorkerHandler = new WorkerHandler();
                    Looper.loop();
                }
            }.start();
        }
    }

    private ApnSetting encodeInactiveTimer(ApnSetting apnSetting) {
        if (apnSetting == null) {
            loge("encodeInactiveTimer apn is null");
            return null;
        }
        if (apnSetting.getAuthType() > 7 || apnSetting.getAuthType() < -1) {
            loge("encodeInactiveTimer invalid authType: " + apnSetting.getAuthType());
        } else if (apnSetting instanceof MtkApnSetting) {
            int authType = 0;
            int i = 536870911;
            if (((MtkApnSetting) apnSetting).inactiveTimer < 0) {
                i = 0;
            } else if (((MtkApnSetting) apnSetting).inactiveTimer <= 536870911) {
                i = ((MtkApnSetting) apnSetting).inactiveTimer;
            }
            int i2 = i;
            if (apnSetting.getAuthType() != -1) {
                authType = apnSetting.getAuthType();
            } else if (!TextUtils.isEmpty(apnSetting.getUser())) {
                authType = 3;
            }
            return ApnSetting.makeApnSetting(apnSetting.getId(), apnSetting.getOperatorNumeric(), apnSetting.getEntryName(), apnSetting.getApnName(), apnSetting.getProxyAddressAsString(), apnSetting.getProxyPort(), apnSetting.getMmsc(), apnSetting.getMmsProxyAddressAsString(), apnSetting.getMmsProxyPort(), apnSetting.getUser(), apnSetting.getPassword(), authType + (i2 << 3), apnSetting.getApnTypeBitmask(), apnSetting.getProtocol(), apnSetting.getRoamingProtocol(), apnSetting.isEnabled(), apnSetting.getNetworkTypeBitmask(), apnSetting.getProfileId(), apnSetting.isPersistent(), apnSetting.getMaxConns(), apnSetting.getWaitTime(), apnSetting.getMaxConnsTime(), apnSetting.getMtu(), apnSetting.getMvnoType(), apnSetting.getMvnoMatchData(), apnSetting.getApnSetId(), apnSetting.getCarrierId(), apnSetting.getSkip464Xlat());
        }
        return apnSetting;
    }

    private DataRetryOperator getDataRetryOperator() {
        String strMtkGetOperatorNumeric = mtkGetOperatorNumeric();
        if (TextUtils.isEmpty(strMtkGetOperatorNumeric)) {
            strMtkGetOperatorNumeric = TelephonyManager.getDefault().getSimOperatorNumeric(this.mPhone.getSubId());
        }
        if (strMtkGetOperatorNumeric != null) {
            int i = 0;
            while (true) {
                String[] strArr = this.MCCMNC_TELCEL;
                if (i >= strArr.length) {
                    int i2 = 0;
                    while (true) {
                        String[] strArr2 = this.MCCMNC_TELSTRA;
                        if (i2 >= strArr2.length) {
                            int i3 = 0;
                            while (true) {
                                String[] strArr3 = this.MCCMNC_EE;
                                if (i3 >= strArr3.length) {
                                    int i4 = 0;
                                    while (true) {
                                        String[] strArr4 = KDDI_OPERATOR;
                                        if (i4 >= strArr4.length) {
                                            break;
                                        }
                                        if (strMtkGetOperatorNumeric.startsWith(strArr4[i4])) {
                                            return DataRetryOperator.KDDI;
                                        }
                                        i4++;
                                    }
                                } else {
                                    if (strMtkGetOperatorNumeric.startsWith(strArr3[i3])) {
                                        return DataRetryOperator.EE;
                                    }
                                    i3++;
                                }
                            }
                        } else {
                            if (strMtkGetOperatorNumeric.startsWith(strArr2[i2])) {
                                return DataRetryOperator.TELSTRA;
                            }
                            i2++;
                        }
                    }
                } else {
                    if (strMtkGetOperatorNumeric.startsWith(strArr[i])) {
                        return DataRetryOperator.TELCEL;
                    }
                    i++;
                }
            }
        }
        return DataRetryOperator.UNKNOWN;
    }

    private long getDisconnectDoneRetryTimer(String str, long j) {
        if ("apnChanged".equals(str)) {
            return 3000L;
        }
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt == null) {
            return j;
        }
        try {
            return iDataConnectionExt.getDisconnectDoneRetryTimer(str, j);
        } catch (Exception e) {
            loge("DataConnectionExt.getDisconnectDoneRetryTimer fail!");
            e.printStackTrace();
            return j;
        }
    }

    private boolean getDomesticDataRoamingEnabledFromSettings() {
        int phoneId = this.mPhone.getPhoneId();
        boolean z = false;
        try {
            ContentResolver contentResolver = this.mResolver;
            StringBuilder sb = new StringBuilder();
            sb.append("domestic_data_roaming");
            sb.append(this.mPhone.getSubId());
            z = Settings.Global.getInt(contentResolver, sb.toString()) != 0;
        } catch (Settings.SettingNotFoundException e) {
            log("getDomesticDataRoamingEnabled: SettingNofFoundException snfe=" + e);
        }
        if (VDBG) {
            log("getDomesticDataRoamingEnabled: phoneId=" + phoneId + " isDomDataRoamingEnabled=" + z);
        }
        return z;
    }

    private boolean getDomesticRoamingEnabled() {
        log("getDomesticRoamingEnabled: isDomesticRoaming=" + isDomesticRoaming() + ", bDomesticRoamingEnabled=" + getDomesticRoamingEnabledBySim());
        return isDomesticRoaming() && getDomesticRoamingEnabledBySim();
    }

    private boolean getDomesticRoamingEnabledBySim() {
        if (!this.mCcDomesticRoamingEnabled) {
            return false;
        }
        String[] strArr = this.mCcDomesticRoamingSpecifiedNw;
        if (strArr != null) {
            return ArrayUtils.contains(strArr, TelephonyManager.getDefault().getNetworkOperatorForPhone(this.mPhone.getPhoneId()));
        }
        return true;
    }

    private boolean getInternationalDataRoamingEnabledFromSettings() {
        int phoneId = this.mPhone.getPhoneId();
        boolean z = true;
        try {
            ContentResolver contentResolver = this.mResolver;
            StringBuilder sb = new StringBuilder();
            sb.append("international_data_roaming");
            sb.append(this.mPhone.getSubId());
            z = Settings.Global.getInt(contentResolver, sb.toString()) != 0;
        } catch (Settings.SettingNotFoundException e) {
            log("getInternationalDataRoamingEnabled: SettingNofFoundException snfe=" + e);
        }
        if (VDBG) {
            log("getInternationalDataRoamingEnabled: phoneId=" + phoneId + " isIntDataRoamingEnabled=" + z);
        }
        return z;
    }

    private boolean getIntlRoamingEnabled() {
        log("getIntlRoamingEnabled: isIntlRoaming=" + isIntlRoaming() + ", bIntlRoamingEnabled=" + this.mCcIntlRoamingEnabled);
        return isIntlRoaming() && this.mCcIntlRoamingEnabled;
    }

    private boolean getIsPcoAllowedDefault() {
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            return iDataConnectionExt.getIsPcoAllowedDefault();
        }
        return true;
    }

    private void getMtuFromResource() {
        Resources resources = null;
        String strMtkGetOperatorNumeric = mtkGetOperatorNumeric();
        int i = 0;
        int i2 = 0;
        if (strMtkGetOperatorNumeric != null && strMtkGetOperatorNumeric.length() > 3) {
            try {
                i = Integer.parseInt(strMtkGetOperatorNumeric.substring(0, 3));
                i2 = Integer.parseInt(strMtkGetOperatorNumeric.substring(3, strMtkGetOperatorNumeric.length()));
            } catch (NumberFormatException e) {
                e.printStackTrace();
                loge("operator numeric is invalid");
            }
        }
        try {
            new Configuration();
            Configuration configuration = this.mPhone.getContext().getResources().getConfiguration();
            configuration.mcc = i;
            configuration.mnc = i2;
            resources = this.mPhone.getContext().createConfigurationContext(configuration).getResources();
        } catch (Exception e2) {
            e2.printStackTrace();
            loge("getMtuFromResource fail");
        }
        if (resources != null) {
            this.mMtuFromResource = resources.getInteger(R.integer.config_displayWhiteBalanceTransitionTimeIncrease);
            logd("getMtuFromResource: mcc = " + i + ", mnc = " + i2 + ", mtu = " + this.mMtuFromResource);
        }
    }

    private String getOperatorNumericFromImpi(String str) {
        PlmnMvnoData plmnMvnoData = this.mPlmnMvnoData;
        String impi = plmnMvnoData != null ? plmnMvnoData.getImpi() : "";
        if (impi.length() == 0) {
            log("getOperatorNumericFromImpi: no impi");
            return str;
        }
        String impiToString = MtkIccUtilsEx.parseImpiToString(IccUtils.hexStringToBytes(impi));
        StringBuilder sb = new StringBuilder();
        sb.append("getOperatorNumericFromImpi: impi=");
        sb.append(Build.IS_USER ? "xxx" : impiToString);
        log(sb.toString());
        if (TextUtils.isEmpty(impiToString)) {
            log("getOperatorNumericFromImpi: no impi");
            return str;
        }
        int iIndexOf = impiToString.indexOf("mcc");
        int iIndexOf2 = impiToString.indexOf("mnc");
        if (iIndexOf == -1 || iIndexOf2 == -1) {
            log("getOperatorNumericFromImpi: no impi");
            return str;
        }
        String str2 = impiToString.substring("mcc".length() + iIndexOf, "mcc".length() + iIndexOf + 3) + impiToString.substring("mnc".length() + iIndexOf2, "mnc".length() + iIndexOf2 + 3);
        log("getOperatorNumericFromImpi: masterMccMnc: " + str2);
        if (TextUtils.isEmpty(str2)) {
            log("getOperatorNumericFromImpi: no impi");
            return str;
        }
        for (String str3 : mImpiList) {
            if (str2.equals(str3)) {
                log("getOperatorNumericFromImpi: get operator from impi");
                return str2;
            }
        }
        return str;
    }

    private void handlePcoDataAfterAttached(AsyncResult asyncResult) {
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            iDataConnectionExt.handlePcoDataAfterAttached(asyncResult, this.mPhone, this.mAllApnSettings);
        }
    }

    private boolean hasMdAutoSetupImsCapability() {
        if (!this.mHasFetchMdAutoSetupImsCapability) {
            TelephonyDevController telephonyDevController = this.mTelDevController;
            if (telephonyDevController != null && telephonyDevController.getModem(0) != null && ((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasMdAutoSetupImsCapability()) {
                this.mMdAutoSetupImsCapability = true;
            }
            this.mHasFetchMdAutoSetupImsCapability = true;
            logd("hasMdAutoSetupImsCapability: " + this.mMdAutoSetupImsCapability);
        }
        return this.mMdAutoSetupImsCapability;
    }

    private boolean hasModemDeactPdnCapabilityForMultiPS() {
        if (!this.mHasFetchModemDeactPdnCapabilityForMultiPS) {
            TelephonyDevController telephonyDevController = this.mTelDevController;
            if (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasModemDeactPdnCapabilityForMultiPS()) {
                this.mModemDeactPdnCapabilityForMultiPS = false;
            } else {
                this.mModemDeactPdnCapabilityForMultiPS = true;
            }
            this.mHasFetchModemDeactPdnCapabilityForMultiPS = true;
            log("hasModemDeactPdnCapabilityForMultiPS: " + this.mModemDeactPdnCapabilityForMultiPS);
        }
        return this.mModemDeactPdnCapabilityForMultiPS;
    }

    private boolean hasOperatorIaCapability() {
        TelephonyDevController telephonyDevController = this.mTelDevController;
        if (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasOperatorIaCapability()) {
            return false;
        }
        log("hasOpIaCapability: true");
        return true;
    }

    private boolean ignoreDataAllow(String str) {
        boolean z = "ims".equals(str);
        if (z || !TextUtils.equals(str, "vsim")) {
            return z;
        }
        log("Vsim is enabled, set ignoreDataAllow as true");
        return true;
    }

    private boolean ignoreDataRoaming(String str) {
        boolean zIgnoreDataRoaming = false;
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        try {
            zIgnoreDataRoaming = this.mDataConnectionExt.ignoreDataRoaming(str);
        } catch (Exception e) {
            loge("get ignoreDataRoaming fail!");
            e.printStackTrace();
        }
        if (mtkDcHelper.isOperatorMccMnc(MtkDcHelper.Operator.OP156, this.mPhone.getPhoneId())) {
            boolean z = this.mPhone.getServiceState().getIwlanRegState() == 0;
            log("ignoreDataRoaming: OP156 check apnType = " + str + ", Epdg=" + z);
            if (z && (str.equals("mms") || str.equals("xcap"))) {
                zIgnoreDataRoaming = true;
            }
        }
        if (zIgnoreDataRoaming) {
            logd("ignoreDataRoaming: " + zIgnoreDataRoaming + ", apnType = " + str);
            return zIgnoreDataRoaming;
        }
        MtkIccCardConstants.VsimType vsimCardType = MtkUiccController.getVsimCardType(this.mPhone.getPhoneId());
        if (vsimCardType == MtkIccCardConstants.VsimType.REMOTE_SIM) {
            log("RSim, set ignoreDataRoaming as true for any apn type");
            return true;
        }
        if (!TextUtils.equals(str, "vsim") || vsimCardType != MtkIccCardConstants.VsimType.SOFT_AKA_SIM) {
            return zIgnoreDataRoaming;
        }
        log("Aka sim and soft sim, set ignoreDataRoaming as true for vsim type");
        return true;
    }

    private boolean ignoreDefaultDataUnselected(String str) {
        boolean zIgnoreDefaultDataUnselected = false;
        try {
            zIgnoreDefaultDataUnselected = this.mDataConnectionExt.ignoreDefaultDataUnselected(str);
        } catch (Exception e) {
            loge("get ignoreDefaultDataUnselected fail!");
            e.printStackTrace();
        }
        if (zIgnoreDefaultDataUnselected) {
            logd("ignoreDefaultDataUnselected: " + zIgnoreDefaultDataUnselected + ", apnType = " + str);
        }
        if (zIgnoreDefaultDataUnselected || !TextUtils.equals(str, "vsim")) {
            return zIgnoreDefaultDataUnselected;
        }
        log("Vsim is enabled, set ignoreDefaultDataUnselected as true");
        return true;
    }

    private boolean isDataAllowedAsOff(String str) {
        MtkDcHelper.getInstance();
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        boolean zIsDataAllowedAsOff = iDataConnectionExt != null ? iDataConnectionExt.isDataAllowedAsOff(str) : false;
        if (this.mCcIntlRoamingEnabled) {
            log("isDataAllowedAsOff: getDataRoamingEnabled=" + getDataRoamingEnabled() + ", bIsInternationalRoaming=" + isIntlRoaming());
            if (getDataRoamingEnabled() && isIntlRoaming()) {
                zIsDataAllowedAsOff = true;
            }
        }
        if (zIsDataAllowedAsOff || !TextUtils.equals(str, "vsim") || !MtkUiccController.getVsimCardType(this.mPhone.getPhoneId()).isUserDataAllowed()) {
            return zIsDataAllowedAsOff;
        }
        log("Vsim is enabled, set isDataAllowedAsOff true");
        return true;
    }

    private boolean isDataAllowedExt(DataConnectionReasons dataConnectionReasons, ApnContext apnContext) {
        if (apnContext == null) {
            log("isDataAllowedExt: apnContext is null, return false");
            return false;
        }
        String apnType = apnContext.getApnType();
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.MTK_LOCATED_PLMN_CHANGED)) {
            log("isDataAllowedExt: located plmn changed, setSetupDataPendingFlag");
            this.mPendingDataCall = true;
            return false;
        }
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.DEFAULT_DATA_UNSELECTED)) {
            if (!ignoreDefaultDataUnselected(apnType)) {
                return false;
            }
            dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.DEFAULT_DATA_UNSELECTED);
        }
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.ROAMING_DISABLED)) {
            if (!ignoreDataRoaming(apnType) && !DcTrackerInjector.onRoamingOnIfDomestic(this)) {
                return false;
            }
            dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.ROAMING_DISABLED);
        }
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.MTK_NOT_ALLOWED)) {
            if (!ignoreDataAllow(apnType)) {
                return false;
            }
            dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.MTK_NOT_ALLOWED);
        }
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.MTK_NON_VSIM_PDN_NOT_ALLOWED)) {
            if (!TextUtils.equals(apnType, "vsim")) {
                return false;
            }
            dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.MTK_NON_VSIM_PDN_NOT_ALLOWED);
        }
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.MTK_FDN_ENABLED)) {
            if (!"emergency".equals(apnType) && !"ims".equals(apnType)) {
                return false;
            }
            log("isDataAllowedExt allow IMS/EIMS for reason FDN_ENABLED");
            dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.MTK_FDN_ENABLED);
        }
        if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.APN_NOT_CONNECTABLE)) {
            if (apnContext.getState() != DctConstants.State.CONNECTED || !MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3.equals(apnContext.getReason())) {
                return false;
            }
            log("isDataAllowedExt allow SSC mode3 for reason APN_NOT_CONNECTABLE");
            dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.APN_NOT_CONNECTABLE);
        }
        if (VDBG) {
            log("isDataAllowedExt: " + dataConnectionReasons.allowed());
        }
        return dataConnectionReasons.allowed();
    }

    private void isDataAllowedForRoamingFeature(DataConnectionReasons dataConnectionReasons) {
        if (isUniqueRoamingFeatureEnabled()) {
            if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.ROAMING_DISABLED)) {
                dataConnectionReasons.mDataDisallowedReasonSet.remove(DataConnectionReasons.DataDisallowedReasonType.ROAMING_DISABLED);
            }
            if (isDataRoamingTypeAllowed()) {
                return;
            }
            dataConnectionReasons.add(DataConnectionReasons.DataDisallowedReasonType.ROAMING_DISABLED);
        }
    }

    private boolean isDataRetryRestrictEnabled() {
        return this.mDataRetryOperator == DataRetryOperator.TELCEL || this.mDataRetryOperator == DataRetryOperator.TELSTRA || this.mDataRetryOperator == DataRetryOperator.EE || this.mDataRetryOperator == DataRetryOperator.KDDI;
    }

    private boolean isDataRoamingTypeAllowed() {
        boolean z = false;
        if (isUniqueRoamingFeatureEnabled()) {
            boolean domesticDataRoamingEnabledFromSettings = getDomesticDataRoamingEnabledFromSettings();
            boolean internationalDataRoamingEnabledFromSettings = getInternationalDataRoamingEnabledFromSettings();
            log("isDataRoamingTypeAllowed bDomDataOnRoamingEnabled=" + domesticDataRoamingEnabledFromSettings + ", bIntDataOnRoamingEnabled=" + internationalDataRoamingEnabledFromSettings + ", getDataRoaming=" + this.mPhone.getServiceState().getDataRoaming() + ", currentRoamingType=" + this.mPhone.getServiceState().getDataRoamingType() + ", mUserDataEnabled=" + this.mDataEnabledSettings.isUserDataEnabled());
            z = !this.mPhone.getServiceState().getDataRoaming() || (domesticDataRoamingEnabledFromSettings && isDomesticRoaming()) || (internationalDataRoamingEnabledFromSettings && isIntlRoaming());
        }
        log("isDataRoamingTypeAllowed : " + z);
        return z;
    }

    private boolean isDomesticRoaming() {
        return this.mPhone.getServiceState().getDataRoamingType() == 2;
    }

    private boolean isFdnEnableSupport() {
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            return iDataConnectionExt.isFdnEnableSupport();
        }
        return false;
    }

    private boolean isFdnEnabled() {
        boolean zIsFdnEnabled = false;
        if (isFdnEnableSupport()) {
            IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
            if (iMtkTelephonyExAsInterface != null) {
                try {
                    zIsFdnEnabled = iMtkTelephonyExAsInterface.isFdnEnabled(this.mPhone.getSubId());
                    log("isFdnEnabled(), bFdnEnabled = " + zIsFdnEnabled);
                    if (zIsFdnEnabled) {
                        if (this.mIsFdnChecked) {
                            log("isFdnEnabled(), match FDN for allow data = " + this.mIsMatchFdnForAllowData);
                            return !this.mIsMatchFdnForAllowData;
                        }
                        boolean zIsPhbReady = iMtkTelephonyExAsInterface.isPhbReady(this.mPhone.getSubId());
                        log("isFdnEnabled(), bPhbReady = " + zIsPhbReady);
                        if (zIsPhbReady) {
                            this.mWorkerHandler.sendEmptyMessage(270858);
                        } else if (!this.mIsPhbStateChangedIntentRegistered) {
                            IntentFilter intentFilter = new IntentFilter();
                            intentFilter.addAction("mediatek.intent.action.PHB_STATE_CHANGED");
                            this.mPhone.getContext().registerReceiver(this.mPhbStateChangedIntentReceiver, intentFilter);
                            this.mIsPhbStateChangedIntentRegistered = true;
                        }
                    } else if (this.mIsPhbStateChangedIntentRegistered) {
                        this.mIsPhbStateChangedIntentRegistered = false;
                        this.mPhone.getContext().unregisterReceiver(this.mPhbStateChangedIntentReceiver);
                    }
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
            } else {
                loge("isFdnEnabled(), get telephonyEx failed!!");
            }
        }
        return zIsFdnEnabled;
    }

    private boolean isIntlRoaming() {
        return this.mPhone.getServiceState().getDataRoamingType() == 3;
    }

    private boolean isLocatedPlmnChanged() {
        if (this.mPhone.getPhoneType() == 2) {
            return false;
        }
        return ((MtkServiceStateTracker) this.mPhone.getServiceStateTracker()).willLocatedPlmnChange();
    }

    private boolean isMvnoMatches(int i, String str) {
        String cdmaImsi;
        log("mvnoMatchData=" + str);
        String cdmaSpn = "";
        if (i == 0) {
            if (this.mPhoneType == 1) {
                PlmnMvnoData plmnMvnoData = this.mPlmnMvnoData;
                if (plmnMvnoData != null) {
                    cdmaSpn = plmnMvnoData.getGsmSpn();
                }
            } else {
                PlmnMvnoData plmnMvnoData2 = this.mPlmnMvnoData;
                if (plmnMvnoData2 != null) {
                    cdmaSpn = plmnMvnoData2.getCdmaSpn();
                }
            }
            if (cdmaSpn.length() == 0) {
                return false;
            }
            String spnToString = this.mPhoneType == 1 ? MtkIccUtilsEx.parseSpnToString(1, IccUtils.hexStringToBytes(cdmaSpn)) : MtkIccUtilsEx.parseSpnToString(2, IccUtils.hexStringToBytes(cdmaSpn));
            log("strSpn=" + spnToString);
            if (spnToString != null && spnToString.equalsIgnoreCase(str)) {
                return true;
            }
        } else if (i == 1) {
            if (this.mPhoneType == 1) {
                PlmnMvnoData plmnMvnoData3 = this.mPlmnMvnoData;
                cdmaImsi = plmnMvnoData3 != null ? plmnMvnoData3.getGsmImsi() : "";
            } else {
                PlmnMvnoData plmnMvnoData4 = this.mPlmnMvnoData;
                cdmaImsi = plmnMvnoData4 != null ? plmnMvnoData4.getCdmaImsi() : "";
            }
            if (cdmaImsi != null && ApnSettingUtils.imsiMatches(str, cdmaImsi)) {
                return true;
            }
        } else if (i == 2) {
            PlmnMvnoData plmnMvnoData5 = this.mPlmnMvnoData;
            String gid1 = plmnMvnoData5 != null ? plmnMvnoData5.getGid1() : "";
            log("gid1=" + gid1);
            int length = str.length();
            if (gid1 != null && gid1.length() >= length && gid1.substring(0, length).equalsIgnoreCase(str)) {
                return true;
            }
        } else if (i == 3) {
            if (ApnSettingUtils.iccidMatches(str, getIccid())) {
                return true;
            }
        } else if (i == 4) {
            PlmnMvnoData plmnMvnoData6 = this.mPlmnMvnoData;
            String pnn = plmnMvnoData6 != null ? plmnMvnoData6.getPnn() : "";
            if (pnn.length() == 0) {
                return false;
            }
            String pnnToString = MtkIccUtilsEx.parsePnnToString(IccUtils.hexStringToBytes(pnn));
            log("strPnn=" + pnnToString);
            if (pnnToString != null && pnnToString.equalsIgnoreCase(str)) {
                return true;
            }
        }
        return false;
    }

    private boolean isOp18Sim() {
        String strMtkGetOperatorNumeric = mtkGetOperatorNumeric();
        if (strMtkGetOperatorNumeric == null) {
            return false;
        }
        int i = 0;
        while (true) {
            String[] strArr = this.MCCMNC_OP18;
            if (i >= strArr.length) {
                return false;
            }
            if (strMtkGetOperatorNumeric.startsWith(strArr[i])) {
                return true;
            }
            i++;
        }
    }

    private boolean isRestorePreferredApn() {
        Cursor cursorQuery = this.mPhone.getContext().getContentResolver().query(Uri.withAppendedPath(PREFERAPN_NO_UPDATE_URI_USING_SUBID, Long.toString(this.mPhone.getSubId())), new String[]{"_id", "name", "apn"}, null, null, "name ASC");
        if (cursorQuery == null) {
            return false;
        }
        boolean z = cursorQuery.getCount() == 0;
        cursorQuery.close();
        return z;
    }

    private boolean isSimActivated() {
        PlmnMvnoData plmnMvnoData = this.mPlmnMvnoData;
        String gid1 = plmnMvnoData != null ? plmnMvnoData.getGid1() : "";
        log("gid1: " + gid1);
        return GID1_DEFAULT.compareToIgnoreCase(gid1) != 0;
    }

    private boolean isUniqueRoamingFeatureEnabled() {
        return this.mCcUniqueSettingsForRoaming && "OP20".equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, ""));
    }

    static /* synthetic */ int lambda$initApnContexts$0(ApnContext apnContext, ApnContext apnContext2) {
        return apnContext2.getPriority() - apnContext.getPriority();
    }

    static /* synthetic */ int lambda$sortApnContextByPriority$1(ApnContext apnContext, ApnContext apnContext2) {
        return apnContext2.getPriority() - apnContext.getPriority();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logd(String str) {
        Rlog.d(LOG_TAG, "[" + this.mLogTag + "] " + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loge(String str) {
        Rlog.e(LOG_TAG, "[" + this.mLogTag + "] " + str);
    }

    private void logi(String str) {
        Rlog.i(LOG_TAG, "[" + this.mLogTag + "] " + str);
    }

    private void logv(String str) {
        Rlog.v(LOG_TAG, "[" + this.mLogTag + "] " + str);
    }

    private void logw(String str) {
        Rlog.w(LOG_TAG, "[" + this.mLogTag + "] " + str);
    }

    private ApnSetting makeApnSetting(Cursor cursor) {
        int i = 0;
        try {
            i = cursor.getInt(cursor.getColumnIndexOrThrow("inactive_timer"));
            if (i != 0) {
                logd("makeApnSetting: inactive_timer=" + i);
            }
        } catch (IllegalArgumentException e) {
        }
        return MtkApnSetting.makeApnSetting(cursor, i);
    }

    private void notifyDedicateDataConnection(int i, DctConstants.State state, MtkDedicateDataCallResponse mtkDedicateDataCallResponse, int i2, String str) {
        log("notifyDedicateDataConnection ddcId=" + i + ", state=" + state + ", failCause=" + i2 + ", reason=" + str + ", dataInfo=" + mtkDedicateDataCallResponse);
        Intent intent = new Intent("com.mediatek.intent.action.ACTION_ANY_DEDICATE_DATA_CONNECTION_STATE_CHANGED");
        intent.putExtra("DdcId", i);
        intent.putExtra("state", (Serializable) state);
        intent.putExtra("cause", i2);
        intent.putExtra("phone", this.mPhone.getPhoneId());
        this.mPhone.getContext().sendBroadcastAsUser(intent, UserHandle.ALL, "android.permission.READ_PRECISE_PHONE_STATE");
    }

    private void notifyVoiceCallEventToDataConnection(boolean z, boolean z2) {
        logd("notifyVoiceCallEventToDataConnection: bInVoiceCall = " + z + ", bSupportConcurrent = " + z2);
        Iterator it = this.mDataConnections.values().iterator();
        while (it.hasNext()) {
            ((MtkDataConnection) ((DataConnection) it.next())).notifyVoiceCallEvent(z, z2);
        }
    }

    private void onAllowChanged(boolean z) {
        log("onAllowChanged: Allow = " + z);
        this.mAllowConfig = z;
        if (z) {
            setupDataOnAllConnectableApns(MtkGsmCdmaPhone.REASON_DATA_ALLOWED, DcTracker.RetryFailures.ALWAYS);
        }
    }

    private void onApnChangedDone() {
        logd("onApnChangedDone: subId = " + this.mPhone.getSubId() + ", default data subId = " + SubscriptionManager.getDefaultDataSubscriptionId());
        if (this.mPhone.getSubId() == SubscriptionManager.getDefaultDataSubscriptionId()) {
            setupDataOnAllConnectableApns("apnChanged", DcTracker.RetryFailures.ALWAYS);
            return;
        }
        ApnContext apnContext = (ApnContext) this.mApnContexts.get("default");
        if (apnContext == null || !apnContext.isConnectable()) {
            return;
        }
        log("Temp data switch is active , call setupDataOnAllConnectableApns()");
        setupDataOnAllConnectableApns("apnChanged", DcTracker.RetryFailures.ALWAYS);
    }

    private void onDataSetupSscMode3(int i, int i2) {
        ApnContext apnContext = null;
        for (ApnContext apnContext2 : this.mApnContexts.values()) {
            if (apnContext2.getDataConnection() != null) {
                if (apnContext2.getDataConnection().getCid() == i) {
                    apnContext = apnContext2;
                    log("onDataSetupSscMode3: found apnContext=" + apnContext);
                    break;
                }
                loge("onDataSetupSscMode3: cid does not match! (APN type=" + apnContext2.getApnType() + ", cid=" + apnContext2.getDataConnection().getCid() + ")");
            }
        }
        if (apnContext == null) {
            loge("onDataSetupSscMode3: couldn't find corresponding apnContext");
            return;
        }
        DataConnection dataConnection = apnContext.getDataConnection();
        ((MtkDataConnection) dataConnection).updateNetworkAgentSscMode3(i2, 49);
        apnContext.setReason(MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3);
        ((MtkApnContext) apnContext).setDataConnectionSscMode3(dataConnection);
        setupDataOnAllConnectableApns(MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3, DcTracker.RetryFailures.ALWAYS);
    }

    private void onDedecatedBearerActivated(MtkDedicateDataCallResponse mtkDedicateDataCallResponse) {
        log("onDedecatedBearerActivated, dataInfo: " + mtkDedicateDataCallResponse);
        notifyDedicateDataConnection(mtkDedicateDataCallResponse.mCid, DctConstants.State.CONNECTED, mtkDedicateDataCallResponse, 0, MtkDedicateDataCallResponse.REASON_BEARER_ACTIVATION);
    }

    private void onDedecatedBearerDeactivated(int i) {
        log("onDedecatedBearerDeactivated, Cid: " + i);
        notifyDedicateDataConnection(i, DctConstants.State.IDLE, null, 0, MtkDedicateDataCallResponse.REASON_BEARER_DEACTIVATION);
    }

    private void onDedecatedBearerModified(MtkDedicateDataCallResponse mtkDedicateDataCallResponse) {
        log("onDedecatedBearerModified, dataInfo: " + mtkDedicateDataCallResponse);
        notifyDedicateDataConnection(mtkDedicateDataCallResponse.mCid, DctConstants.State.CONNECTED, mtkDedicateDataCallResponse, 0, MtkDedicateDataCallResponse.REASON_BEARER_MODIFICATION);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onFdnChanged() {
        if (!isFdnEnableSupport()) {
            log("not support fdn enabled, skip onFdnChanged");
            return;
        }
        log("onFdnChanged()");
        boolean zIsFdnEnabled = false;
        boolean zIsPhbReady = false;
        IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
        if (iMtkTelephonyExAsInterface != null) {
            try {
                zIsFdnEnabled = iMtkTelephonyExAsInterface.isFdnEnabled(this.mPhone.getSubId());
                zIsPhbReady = iMtkTelephonyExAsInterface.isPhbReady(this.mPhone.getSubId());
                log("onFdnChanged(), bFdnEnabled = " + zIsFdnEnabled + ", bPhbReady = " + zIsPhbReady);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        } else {
            loge("onFdnChanged(), get telephonyEx failed!!");
        }
        if (zIsPhbReady) {
            if (zIsFdnEnabled) {
                log("fdn enabled, check fdn list");
                this.mWorkerHandler.sendEmptyMessage(270858);
                return;
            } else {
                log("fdn disabled, call setupDataOnAllConnectableApns()");
                setupDataOnAllConnectableApns(MtkGsmCdmaPhone.REASON_FDN_DISABLED, DcTracker.RetryFailures.ALWAYS);
                return;
            }
        }
        if (this.mIsPhbStateChangedIntentRegistered) {
            return;
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("mediatek.intent.action.PHB_STATE_CHANGED");
        this.mPhone.getContext().registerReceiver(this.mPhbStateChangedIntentReceiver, intentFilter);
        this.mIsPhbStateChangedIntentRegistered = true;
    }

    private void onNetworkRejectReceived(AsyncResult asyncResult) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            loge("onNetworkRejectReceived exception");
            return;
        }
        int[] iArr = (int[]) asyncResult.result;
        if (iArr.length < 3) {
            loge("onNetworkRejectReceived urc format error");
            return;
        }
        int i = iArr[0];
        int i2 = iArr[1];
        int i3 = iArr[2];
        log("onNetworkRejectReceived emm_cause:" + i + ", esm_cause:" + i2 + ", event_type:" + i3);
        Intent intent = new Intent("com.mediatek.intent.action.ACTION_NETWORK_REJECT_CAUSE");
        SubscriptionManager.putPhoneIdAndSubIdExtra(intent, this.mPhone.getPhoneId());
        intent.addFlags(536870912);
        intent.putExtra("emmCause", i);
        intent.putExtra("esmCause", i2);
        intent.putExtra("rejectEventType", i3);
        this.mPhone.getContext().sendStickyBroadcastAsUser(intent, UserHandle.ALL);
    }

    private void onProcessPendingSetupData() {
        setupDataOnAllConnectableApns(MtkGsmCdmaPhone.REASON_RESUME_PENDING_DATA, DcTracker.RetryFailures.ALWAYS);
    }

    private void onRoamingTypeChanged() {
        boolean dataRoamingEnabled = getDataRoamingEnabled();
        boolean zIsUserDataEnabled = this.mDataEnabledSettings.isUserDataEnabled();
        boolean domesticRoamingEnabledBySim = getDomesticRoamingEnabledBySim();
        boolean z = this.mCcIntlRoamingEnabled;
        boolean zIsUniqueRoamingFeatureEnabled = isUniqueRoamingFeatureEnabled();
        boolean z2 = false;
        log("onRoamingTypeChanged: bDataOnRoamingEnabled = " + dataRoamingEnabled + ", bUserDataEnabled = " + zIsUserDataEnabled + ", bDomesticSpecialSim = " + domesticRoamingEnabledBySim + ", bIntlSpecialSim = " + z + ", bDomAndIntRoamingFeatureEnabled = " + zIsUniqueRoamingFeatureEnabled + ", bOneSettingForRoamingFeatureEnabled = " + this.mCcOneSettingForRoaming + ", roamingType = " + this.mPhone.getServiceState().getDataRoamingType());
        if (!this.mPhone.getServiceState().getDataRoaming()) {
            log("onRoamingTypeChanged: device is not roaming. ignored the request.");
            return;
        }
        if (this.mCcOneSettingForRoaming && TelephonyManager.getDefault().getSimCount() == 1) {
            onDataRoamingOnOrSettingsChanged(270848);
            return;
        }
        if (!domesticRoamingEnabledBySim && !z && !zIsUniqueRoamingFeatureEnabled) {
            log("onRoamingTypeChanged: is not specific SIM. ignored the request.");
            return;
        }
        if (zIsUniqueRoamingFeatureEnabled) {
            z2 = checkDomesticDataRoamingEnabled() || checkInternationalDataRoamingEnabled();
        } else {
            boolean z3 = false;
            if (isDomesticRoaming()) {
                if (domesticRoamingEnabledBySim) {
                    z2 = zIsUserDataEnabled;
                } else {
                    if (zIsUserDataEnabled && dataRoamingEnabled) {
                        z3 = true;
                    }
                    z2 = z3;
                }
            } else if (!isIntlRoaming()) {
                loge("onRoamingTypeChanged error: unexpected roaming type");
            } else if (z) {
                z2 = dataRoamingEnabled;
            } else {
                if (zIsUserDataEnabled && dataRoamingEnabled) {
                    z3 = true;
                }
                z2 = z3;
            }
        }
        if (!z2) {
            log("onRoamingTypeChanged: Tear down data connection on roaming.");
            cleanUpAllConnectionsInternal(true, "roamingOn");
        } else {
            log("onRoamingTypeChanged: setup data on roaming");
            setupDataOnAllConnectableApns("roamingOn", DcTracker.RetryFailures.ALWAYS);
            this.mPhone.notifyAllActiveDataConnections();
        }
    }

    private boolean onSkipDisconnectDone(ApnContext apnContext) {
        if (apnContext == null) {
            return false;
        }
        DataConnection dataConnection = apnContext.getDataConnection();
        DataConnection dataConnectionSscMode3 = ((MtkApnContext) apnContext).getDataConnectionSscMode3();
        boolean z = true;
        if (dataConnection == null || dataConnectionSscMode3 == null) {
            z = false;
        } else if (dataConnection.isInactive() && !dataConnectionSscMode3.isInactive()) {
            apnContext.setDataConnection(dataConnectionSscMode3);
            ((MtkDataConnection) dataConnectionSscMode3).updateNetworkAgentSscMode3(0, 50);
            ((MtkApnContext) apnContext).setDataConnectionSscMode3(null);
        } else if (dataConnection.isInactive() || !dataConnectionSscMode3.isInactive()) {
            z = false;
        } else {
            ((MtkApnContext) apnContext).setDataConnectionSscMode3(null);
        }
        if (MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3.equals(apnContext.getReason())) {
            apnContext.setReason("connected");
        }
        if (z) {
            log("onDisconnectDone: skip due to SSC mode3, dc=(" + dataConnection + "), dc3=(" + dataConnectionSscMode3 + ")");
        }
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onSubIdReady() {
        updatePhoneType();
        log("onSubIdReady mPhoneType = " + this.mPhoneType + " [1:GSM,2:CDMA]");
        String strMtkGetOperatorNumeric = mtkGetOperatorNumeric();
        if (TextUtils.isEmpty(strMtkGetOperatorNumeric)) {
            logd("onSubIdReady: empty operator numeric, return");
            this.mIsOperatorNumericEmpty = true;
            return;
        }
        if (MtkDcHelper.isCdma3GDualModeCard(this.mPhone.getPhoneId())) {
            DctConstants.State overallState = getOverallState();
            if (!(overallState == DctConstants.State.IDLE || overallState == DctConstants.State.FAILED) && this.mAllApnSettings != null && !this.mAllApnSettings.isEmpty()) {
                String operatorNumeric = ((ApnSetting) this.mAllApnSettings.get(0)).getOperatorNumeric();
                if (operatorNumeric.length() > 0 && !operatorNumeric.equals(strMtkGetOperatorNumeric)) {
                    logd("CDMA 3G dual mode card numeric change, clean up.");
                    cleanUpAllConnectionsInternal(true, "apnChanged");
                }
            }
        }
        this.mIsFdnChecked = false;
        this.mIsSimNotReady = false;
        this.mDataRetryOperator = getDataRetryOperator();
        if (isDataRetryRestrictEnabled()) {
            this.mPhone.mCi.setRemoveRestrictEutranMode(true, null);
        }
        getMtuFromResource();
        createAllApnList();
        setDataProfilesAsNeeded();
        setInitialAttachApn();
        sortApnContextByPriority();
        setupDataOnAllConnectableApns("simLoaded", DcTracker.RetryFailures.ALWAYS);
    }

    private void onTearDownPdnByApnId(int i) {
        cleanUpConnectionInternal(true, 2, (ApnContext) this.mApnContextsByType.get(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onWifiStateChanged(boolean z) {
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        this.mIsSupportConcurrent = mtkDcHelper == null ? false : mtkDcHelper.isDataAllowedForConcurrent(this.mPhone.getPhoneId());
        log("onWifiStateChanged, wifi enabled = " + z + ", mInVoiceCall = " + this.mInVoiceCall + ", mIsSupportConcurrent = " + this.mIsSupportConcurrent);
        if (this.mInVoiceCall && isConnected()) {
            if (!z && !this.mIsSupportConcurrent) {
                log("onWifiStateChanged: wifi disabled and not support concurrent");
                stopNetStatPoll();
                stopDataStallAlarm();
                this.mPhone.notifyAllActiveDataConnections();
                notifyVoiceCallEventToDataConnection(this.mInVoiceCall, this.mIsSupportConcurrent);
                return;
            }
            if (z && this.mIsSupportConcurrent) {
                log("onWifiStateChanged: wifi enabled and support concurrent");
                startNetStatPoll();
                startDataStallAlarm(false);
                this.mPhone.notifyAllActiveDataConnections();
                notifyVoiceCallEventToDataConnection(this.mInVoiceCall, this.mIsSupportConcurrent);
            }
        }
    }

    private boolean preCheckCpaDcTrackerInstance() {
        if (!MtkDcHelper.getInstance().isOperatorMccMnc(MtkDcHelper.Operator.OP129, this.mPhone.getPhoneId())) {
            loge("[CpaDct]not support CPA mode!");
            return false;
        }
        if (this.mCpaDcTracker != null) {
            return true;
        }
        CpaDcTracker cpaDcTrackerInstance = CpaDcTracker.getCpaDcTrackerInstance();
        this.mCpaDcTracker = cpaDcTrackerInstance;
        if (cpaDcTrackerInstance == null) {
            loge("[CpaDct]can't mCpaDcTracker!");
            return false;
        }
        if (cpaDcTrackerInstance.getCpaDctPhoneId() == this.mPhone.getPhoneId()) {
            return true;
        }
        loge("[CpaDct]mCpaDcTracker's phone id not match!");
        return false;
    }

    private void readAddOnConfiguration() {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(this.mPhone.getSubId()) : null;
        if (configForSubId != null) {
            this.mCcDomesticRoamingEnabled = configForSubId.getBoolean("mtk_domestic_roaming_enabled_only_by_mobile_data_setting");
            this.mCcDomesticRoamingSpecifiedNw = configForSubId.getStringArray("mtk_domestic_roaming_enabled_only_by_mobile_data_setting_check_nw_plmn");
            this.mCcIntlRoamingEnabled = configForSubId.getBoolean("mtk_intl_roaming_enabled_only_by_roaming_data_setting");
            this.mCcUniqueSettingsForRoaming = configForSubId.getBoolean("mtk_unique_settings_for_domestic_and_intl_roaming");
            this.mCcOneSettingForRoaming = configForSubId.getBoolean("mtk_one_setting_for_domestic_and_intl_roaming_data");
            this.mIsAddMnoApnsIntoAllApnList = configForSubId.getBoolean("mtk_key_add_mnoapns_into_allapnlist");
            StringBuilder sb = new StringBuilder();
            sb.append("readAddOnConfiguration: DomesticRoamingEnabled ");
            sb.append(this.mCcDomesticRoamingEnabled);
            sb.append(", SpecifiedNw ");
            sb.append(this.mCcDomesticRoamingSpecifiedNw != null);
            sb.append(", IntlRoamingEnabled ");
            sb.append(this.mCcIntlRoamingEnabled);
            sb.append(", UniqueSettingsForRoaming ");
            sb.append(this.mCcUniqueSettingsForRoaming);
            sb.append(", OneSettingForRoaming ");
            sb.append(this.mCcOneSettingForRoaming);
            sb.append(", IsAddMnoApnsIntoAllApnList ");
            sb.append(this.mIsAddMnoApnsIntoAllApnList);
            log(sb.toString());
        }
    }

    private void registerFdnContentObserver() {
        Uri uri;
        if (isFdnEnableSupport()) {
            if (SubscriptionManager.isValidSubscriptionId(this.mPhone.getSubId())) {
                uri = Uri.parse(FDN_CONTENT_URI_WITH_SUB_ID + this.mPhone.getSubId());
            } else {
                uri = Uri.parse(FDN_CONTENT_URI);
            }
            this.mSettingsObserver.observe(uri, 270840);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void reloadOpCustomizationFactory() {
        try {
            if (this.mDataConnectionExt != null) {
                this.mDataConnectionExt.stopDataRoamingStrategy();
            }
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(this.mPhone.getContext());
            this.mTelephonyCustomizationFactory = opFactory;
            this.mDataConnectionExt = opFactory.makeDataConnectionExt(this.mPhone.getContext());
            if (this.mTransportType == 1) {
                this.mDataConnectionExt.startDataRoamingStrategy(this.mPhone);
            }
        } catch (Exception e) {
            log("mDataConnectionExt init fail");
            e.printStackTrace();
        }
    }

    private void resetSimStatus() {
        logd("resetSimStatus");
        this.mPhoneType = 0;
        this.mOnSubscriptionsChangedListener.mPreviousSubId.set(-1);
        this.mMtuFromResource = 0;
        this.mIsSimNotReady = true;
    }

    private void sendOnApnChangedDone(boolean z) {
        Message messageObtainMessage = obtainMessage(270839);
        messageObtainMessage.arg1 = z ? 1 : 0;
        sendMessage(messageObtainMessage);
    }

    private boolean setDataRoamingEnabledByDefault(boolean z) {
        if (TelephonyManager.getDefault().getSimCount() != 1 || !this.mCcOneSettingForRoaming || isDataRoamingFromUserAction()) {
            return false;
        }
        boolean dataRoamingEnabled = getDataRoamingEnabled();
        log("setDataRoamingEnabledByDefault: oldEnabled = " + dataRoamingEnabled + " enabled = " + z);
        if (dataRoamingEnabled == z) {
            return false;
        }
        this.mDataEnabledSettings.setDataRoamingEnabled(z);
        return true;
    }

    private void setIsPcoAllowedDefault(boolean z) {
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            iDataConnectionExt.setIsPcoAllowedDefault(z);
        }
    }

    private boolean setRoamingDataWithRoamingType(int i) {
        if (i == 2) {
            return setDataRoamingEnabledByDefault(true);
        }
        if (i == 3 || i == 0 || i == 1) {
            return setDataRoamingEnabledByDefault(false);
        }
        return false;
    }

    private void setSscMode() {
        String string = Integer.toString(3);
        log("setSscMode: " + string);
        this.mPhone.mCi.setVendorSetting(15, string, null);
    }

    private void teardownDataByEmergencyPolicy() {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(this.mPhone.getSubId()) : null;
        if (configForSubId == null) {
            loge("Couldn't find CarrierConfigService.");
            return;
        }
        for (String str : configForSubId.getStringArray("emergency_bearer_management_policy")) {
            for (ApnContext apnContext : this.mApnContexts.values()) {
                if (!apnContext.isDisconnected()) {
                    ApnSetting apnSetting = apnContext.getApnSetting();
                    log("compare apn: " + apnSetting.getApnName() + " by filter: " + str);
                    if (apnSetting.getApnName().equalsIgnoreCase(str)) {
                        apnContext.setReason("pdnOccupied");
                        cleanUpConnection(apnContext);
                        break;
                    }
                }
            }
        }
    }

    private void updateMobileDataUsage(AsyncResult asyncResult) {
        int[] iArr = (int[]) asyncResult.result;
        if (this.mTransportType != 1) {
            return;
        }
        int i = iArr.length > 0 ? iArr[0] : 0;
        int i2 = iArr.length > 1 ? iArr[1] : 0;
        int i3 = iArr.length > 2 ? iArr[2] : 0;
        int i4 = iArr.length > 3 ? iArr[3] : 0;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        boolean dataRoaming = this.mPhone.getServiceState().getDataRoaming();
        LinkProperties linkProperties = getLinkProperties("default");
        String interfaceName = linkProperties == null ? "" : linkProperties.getInterfaceName();
        if (interfaceName == null) {
            loge("updateMobileDataUsage ifacename = null");
            return;
        }
        NetworkStats networkStats = new NetworkStats(jElapsedRealtime, 1);
        networkStats.combineAllValues(this.mMobileDataUsage);
        networkStats.combineValues(new NetworkStats.Entry(interfaceName, -10, 0, 0, 1, dataRoaming ? 1 : 0, 1, i3, i4, i, i2, 0L));
        log("updateMobileDataUsage ifacename:" + interfaceName + ", txBytes:" + i + ", txPkts:" + i2 + ", rxBytes:" + i3 + ", rxPkts:" + i4);
        this.mMobileDataUsage = networkStats;
        Handler handler = this.mWorkerHandler;
        if (handler == null || this.mMobileDataUsageProvider == null) {
            return;
        }
        handler.post(new Runnable() { // from class: com.mediatek.internal.telephony.dataconnection.-$$Lambda$MtkDcTracker$Hk0TQOfqUHckGLou6VLxVZagfp8
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.lambda$updateMobileDataUsage$2$MtkDcTracker();
            }
        });
    }

    private boolean updatePhoneType() {
        int i = this.mPhoneType;
        this.mPhoneType = 1;
        if (MtkDcHelper.isCdma3GCard(this.mPhone.getPhoneId())) {
            this.mPhoneType = 2;
        }
        if (MtkDcHelper.isCdma3GDualModeCard(this.mPhone.getPhoneId())) {
            this.mPhoneType = this.mPhone.getPhoneType();
        }
        return i != this.mPhoneType;
    }

    protected String apnListToString(ArrayList<ApnSetting> arrayList) {
        try {
            return super.apnListToString(arrayList);
        } catch (NullPointerException e) {
            e.printStackTrace();
            return null;
        }
    }

    protected boolean cleanUpAllConnectionsInternal(boolean z, String str) {
        log("cleanUpAllConnectionsInternal: detach=" + z + " reason=" + str);
        boolean z2 = false;
        boolean z3 = false;
        boolean z4 = false;
        if (!TextUtils.isEmpty(str)) {
            z3 = str.equals("specificDisabled") || str.equals("roamingOn") || str.equals("carrierActionDisableMeteredApn");
            if (str.equals("simNotReady")) {
                log("cleanUpAllConnectionsInternal: not cleanup connections for sim not ready");
                return false;
            }
        }
        for (ApnContext apnContext : this.mApnContexts.values()) {
            if (str.equals("roamingOn") && ignoreDataRoaming(apnContext.getApnType())) {
                log("cleanUpAllConnectionsInternal: Ignore Data Roaming for apnType = " + apnContext.getApnType());
            } else if (!str.equals("SinglePdnArbitration") || !apnContext.getApnType().equals("ims")) {
                if (str.equals("radioTurnedOff") && apnContext.getApnType().equals("ims")) {
                    log("cleanUpAllConnectionsInternal: Ignore ims for apnType = " + apnContext.getApnType() + " reason = " + str);
                    z4 = true;
                } else if (shouldCleanUpConnection(apnContext, z3, str.equals("SinglePdnArbitration"))) {
                    if (!apnContext.isDisconnected()) {
                        z2 = true;
                    }
                    apnContext.setReason(str);
                    cleanUpConnectionInternal(z, 2, apnContext);
                } else {
                    log("cleanUpAllConnectionsInternal: APN type " + apnContext.getApnType() + " shouldn't be cleaned up.");
                }
            }
        }
        stopNetStatPoll();
        stopDataStallAlarm();
        this.mRequestedApnType = 17;
        if (z4 && this.mDisconnectPendingCount == 0) {
            log("cleanUpAllConnectionsInternal: legacy ims only connect, power off radio immediately");
            this.mPhone.getServiceStateTracker().processPendingRadioPowerOffAfterDataOff();
        }
        log("cleanUpAllConnectionsInternal: mDisconnectPendingCount = " + this.mDisconnectPendingCount);
        if (z && this.mDisconnectPendingCount == 0) {
            notifyAllDataDisconnected();
        }
        return z2;
    }

    public void cleanUpConnectionsOnCpaChanged(int i, Handler handler) {
        this.mCpaDctCallback = handler;
        DctConstants.State overallState = getOverallState();
        boolean z = overallState == DctConstants.State.IDLE || overallState == DctConstants.State.FAILED;
        logd("[CpaDct]cleanUpConnectionsOnCpaChanged() mode:" + i);
        cleanUpConnectionsOnUpdatedApns(z ? false : true, "apnChanged");
    }

    protected void cleanUpConnectionsOnUpdatedApns(boolean z, String str) {
        log("cleanUpConnectionsOnUpdatedApns: detach=" + z);
        if (this.mAllApnSettings.isEmpty()) {
            cleanUpAllConnectionsInternal(z, "apnChanged");
        } else {
            if (getDataRat() == 0) {
                return;
            }
            for (ApnContext apnContext : this.mApnContexts.values()) {
                if (hasMdAutoSetupImsCapability() && "nwTypeChanged".equals(str) && "emergency".equals(apnContext.getApnType())) {
                    log("cleanUpConnectionsOnUpdatedApns(): skip emergency due to " + str);
                } else if (MtkDcHelper.getInstance().isOperatorMccMnc(MtkDcHelper.Operator.OP129, this.mPhone.getPhoneId()) && hasMdAutoSetupImsCapability() && "apnChanged".equals(str) && ("emergency".equals(apnContext.getApnType()) || "ims".equals(apnContext.getApnType()))) {
                    log("mtkSkipCleanUpConnectionsOnUpdatedApns: skip IMS/EIMS due to " + str);
                } else {
                    boolean z2 = true;
                    ArrayList waitingApns = apnContext.getWaitingApns();
                    ArrayList arrayListBuildWaitingApns = buildWaitingApns(apnContext.getApnType(), getDataRat());
                    if (!apnContext.isDisconnected()) {
                        apnContext.setWaitingApns(arrayListBuildWaitingApns);
                        Iterator it = arrayListBuildWaitingApns.iterator();
                        while (it.hasNext()) {
                            if (((ApnSetting) it.next()).equals(apnContext.getApnSetting(), this.mPhone.getServiceState().getDataRoamingFromRegistration())) {
                                z2 = false;
                                break;
                            }
                        }
                        if (z2 || !(!isRestorePreferredApn() || waitingApns == null || arrayListBuildWaitingApns.size() == waitingApns.size())) {
                            log("cleanUpConnectionsOnUpdatedApns: APN type " + apnContext.getApnType() + " clean up is required. The new waiting APN list " + arrayListBuildWaitingApns + " does not cover " + apnContext.getApnSetting());
                            apnContext.setReason(str);
                            cleanUpConnectionInternal(true, 2, apnContext);
                        } else if (waitingApns != null && "apnChanged".equals(str) && "default".equals(apnContext.getApnType())) {
                            this.mPreferredApn = checkAndSetPreferredApn(apnContext, this.mPreferredApn, this.mCanSetPreferApn, arrayListBuildWaitingApns);
                            log("mPreferredApn: " + this.mPreferredApn);
                        }
                    }
                }
            }
        }
        if (!isConnected()) {
            stopNetStatPoll();
            stopDataStallAlarm();
        }
        this.mRequestedApnType = 17;
        log("mDisconnectPendingCount = " + this.mDisconnectPendingCount);
        if (z && this.mDisconnectPendingCount == 0) {
            notifyAllDataDisconnected();
        }
    }

    protected void createAllApnList() {
        String strMtkGetOperatorNumeric = mtkGetOperatorNumeric();
        if (this.mIsSimNotReady && (strMtkGetOperatorNumeric == null || strMtkGetOperatorNumeric.length() == 0)) {
            log("createAllApnList: ignore, sim not ready and no operator numeric");
            return;
        }
        synchronized (this.mRefCountLock) {
            this.mAllApnSettings.clear();
            if (strMtkGetOperatorNumeric != null) {
                String str = "numeric = '" + strMtkGetOperatorNumeric + "'";
                log("createAllApnList: selection=" + str);
                Cursor cursorQuery = this.mPhone.getContext().getContentResolver().query(Uri.withAppendedPath(Telephony.Carriers.CONTENT_URI, "filtered"), null, str, null, "_id");
                if (cursorQuery != null) {
                    if (cursorQuery.getCount() > 0) {
                        this.mAllApnSettings = createApnList(cursorQuery);
                    }
                    cursorQuery.close();
                } else {
                    log("createAllApnList: cursor is null");
                    this.mApnSettingsInitializationLog.log("cursor is null for carrier, operator: " + strMtkGetOperatorNumeric);
                }
            }
            addVsimApnTypeToDefaultApnSetting();
        }
        addEmergencyApnSetting();
        dedupeApnSettings();
        if (this.mAllApnSettings.isEmpty()) {
            log("createAllApnList: No APN found for carrier, operator: " + strMtkGetOperatorNumeric);
            this.mApnSettingsInitializationLog.log("no APN found for carrier, operator: " + strMtkGetOperatorNumeric);
            this.mPreferredApn = null;
            this.mPhone.notifyDataConnectionFailed((String) null, (String) null, 27);
        } else {
            this.mPreferredApn = getPreferredApn();
            if (this.mPreferredApn != null && !this.mPreferredApn.getOperatorNumeric().equals(strMtkGetOperatorNumeric)) {
                this.mPreferredApn = null;
                setPreferredApn(-1);
            }
            log("createAllApnList: mPreferredApn=" + this.mPreferredApn);
        }
        log("createAllApnList: X mAllApnSettings=" + this.mAllApnSettings);
    }

    public void dispose() {
        super.dispose();
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            iDataConnectionExt.stopDataRoamingStrategy();
        }
        this.mPhone.getContext().unregisterReceiver(this.mIntentReceiverEx);
        if (this.mHandlerThread != null) {
            this.mHandlerThread.quitSafely();
            this.mHandlerThread = null;
        }
        this.mIsFdnChecked = false;
        this.mIsMatchFdnForAllowData = false;
        this.mIsPhbStateChangedIntentRegistered = false;
        this.mPhone.getContext().unregisterReceiver(this.mPhbStateChangedIntentReceiver);
        Handler handler = this.mWorkerHandler;
        if (handler != null) {
            handler.getLooper().quit();
        }
        this.mSubscriptionManager.removeOnSubscriptionsChangedListener(this.mOnSubscriptionsChangedListener);
        ((NetworkStatsManager) this.mPhone.getContext().getSystemService("netstats")).unregisterNetworkStatsProvider(this.mMobileDataUsageProvider);
    }

    public void enableApn(int i, int i2, Message message) {
        ApnContext apnContext;
        if (i != 17 || i2 != 1 || (apnContext = (ApnContext) this.mApnContextsByType.get(i)) == null || !apnContext.isDependencyMet() || apnContext.isReady() || apnContext.getState() != DctConstants.State.IDLE) {
            super.enableApn(i, i2, message);
            return;
        }
        log("Enable 'default' apn type in advance");
        apnContext.setReason("dataEnabled");
        apnContext.setEnabled(true);
        apnContext.resetErrorCodeRetries();
        if (trySetupData(apnContext, i2)) {
            addRequestNetworkCompleteMsg(message, i);
        } else {
            sendRequestNetworkCompleteMsg(message, false, this.mTransportType, i2, 0);
        }
    }

    protected boolean getAllowConfig() {
        if (MtkDcHelper.getInstance().isMultiPsAttachSupport() && !hasModemDeactPdnCapabilityForMultiPS()) {
            return this.mAllowConfig;
        }
        return true;
    }

    protected int getApnProfileID(String str) {
        if (TextUtils.equals(str, "ims")) {
            return 2;
        }
        if (TextUtils.equals(str, "fota")) {
            return 3;
        }
        if (TextUtils.equals(str, "cbs")) {
            return 4;
        }
        if (TextUtils.equals(str, "ia")) {
            return 0;
        }
        if (TextUtils.equals(str, "dun")) {
            return 1;
        }
        if (TextUtils.equals(str, "mms")) {
            return ExternalSimConstants.MSG_ID_INITIALIZATION_RESPONSE;
        }
        if (TextUtils.equals(str, "supl")) {
            return ExternalSimConstants.MSG_ID_GET_PLATFORM_CAPABILITY_RESPONSE;
        }
        if (TextUtils.equals(str, "hipri")) {
            return ExternalSimConstants.MSG_ID_EVENT_RESPONSE;
        }
        if (TextUtils.equals(str, "emergency")) {
            return ExternalSimConstants.MSG_ID_UICC_RESET_REQUEST;
        }
        if (TextUtils.equals(str, "xcap")) {
            return ExternalSimConstants.MSG_ID_UICC_APDU_REQUEST;
        }
        if (TextUtils.equals(str, "rcs")) {
            return ExternalSimConstants.MSG_ID_UICC_POWER_DOWN_REQUEST;
        }
        if (TextUtils.equals(str, "default")) {
            return 0;
        }
        if (TextUtils.equals(str, "bip")) {
            return ExternalSimConstants.MSG_ID_GET_SERVICE_STATE_RESPONSE;
        }
        if (TextUtils.equals(str, "*")) {
            return ExternalSimConstants.MSG_ID_UICC_AUTHENTICATION_ABORT_IND;
        }
        if (TextUtils.equals(str, "vsim")) {
            return ExternalSimConstants.MSG_ID_FINALIZATION_RESPONSE;
        }
        if (TextUtils.equals(str, "mcx")) {
            return ExternalSimConstants.MSG_ID_UICC_AUTHENTICATION_DONE_IND;
        }
        return 0;
    }

    public String getIccid() {
        MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
        return mtkUiccController != null ? mtkUiccController.getIccid(this.mPhone.getPhoneId()) : "";
    }

    public String getImsi() {
        PlmnMvnoData plmnMvnoData;
        if (this.mIsRecordsOverride || (plmnMvnoData = this.mPlmnMvnoData) == null) {
            return null;
        }
        return this.mPhoneType == 1 ? plmnMvnoData.getGsmImsi() : plmnMvnoData.getCdmaImsi();
    }

    public NetworkStats getMobileDataUsage() {
        return this.mMobileDataUsage;
    }

    public int getMtu() {
        return this.mMtuFromResource;
    }

    public String[] getPcscfAddress(String str) {
        super.getPcscfAddress(str);
        log("getPcscfAddress() for RCS, apnType=" + str);
        ApnContext apnContext = TextUtils.equals(str, "default") ? (ApnContext) this.mApnContextsByType.get(17) : null;
        if (apnContext == null) {
            log("apnContext is null for RCS, return null");
            return null;
        }
        DataConnection dataConnection = apnContext.getDataConnection();
        if (dataConnection == null) {
            return null;
        }
        String[] pcscfAddresses = dataConnection.getPcscfAddresses();
        if (pcscfAddresses != null) {
            for (int i = 0; i < pcscfAddresses.length; i++) {
                log("Pcscf[" + i + "]: " + pcscfAddresses[i]);
            }
        }
        return pcscfAddresses;
    }

    public boolean getPendingDataCallFlag() {
        return this.mPendingDataCall;
    }

    public MtkServiceState getTurboSS() {
        return this.mTurboSS;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void handleMessage(Message message) {
        ApnSetting apnSetting;
        if (VDBG) {
            log("handleMessage msg=" + message);
        }
        int i = message.what;
        if (i == 270339) {
            if (isDataRetryRestrictEnabled() && (apnSetting = ((ApnContext) message.obj).getApnSetting()) != null && apnSetting.getPermanentFailed()) {
                apnSetting.setPermanentFailed(false);
                log("set permanentFailed as false for cc33 operators");
            }
            trySetupData((ApnContext) message.obj, 1);
            return;
        }
        if (i == 270359) {
            ConnectivityManager connectivityManager = (ConnectivityManager) this.mPhone.getContext().getSystemService("connectivity");
            log("EVENT_PS_RESTRICT_DISABLED " + this.mIsPsRestricted);
            this.mIsPsRestricted = false;
            if (isConnected()) {
                startNetStatPoll();
                startDataStallAlarm(false);
                return;
            }
            if (this.mState == DctConstants.State.FAILED) {
                cleanUpAllConnectionsInternal(false, "psRestrictEnabled");
                this.mReregisterOnReconnectFailure = false;
            }
            ApnContext apnContext = (ApnContext) this.mApnContextsByType.get(17);
            if (apnContext == null) {
                loge("**** Default ApnContext not found ****");
                if (Build.IS_DEBUGGABLE && connectivityManager.isNetworkSupported(0)) {
                    throw new RuntimeException("Default ApnContext not found");
                }
            } else if (this.mPhone.getServiceStateTracker().getCurrentDataConnectionState() == 0) {
                apnContext.setReason("psRestrictEnabled");
                trySetupData(apnContext, 1);
            } else {
                log("EVENT_PS_RESTRICT_DISABLED, data not attached, skip.");
            }
            ApnContext apnContext2 = (ApnContext) this.mApnContextsByType.get(2);
            if (apnContext2 == null || !apnContext2.isConnectable()) {
                loge("**** MMS ApnContext not found ****");
                return;
            } else {
                apnContext2.setReason("psRestrictEnabled");
                trySetupData(apnContext2, 1);
                return;
            }
        }
        if (i == 270377) {
            if (this.mRilRat != getDataRat()) {
                this.mTurboSS = null;
                this.mRilRat = getDataRat();
                super.handleMessage(message);
            }
            int rilDataRadioTechnology = this.mPhone.getServiceState().getRilDataRadioTechnology();
            log("EVENT_DATA_RAT_CHANGED: rat = " + rilDataRadioTechnology);
            if (rilDataRadioTechnology == 0 || MtkDcHelper.isPreferredDataPhone(this.mPhone)) {
                return;
            }
            this.mPhone.notifyDataConnection("default");
            return;
        }
        switch (i) {
            case 270839:
                logd("EVENT_APN_CHANGED_DONE");
                onApnChangedDone();
                return;
            case 270840:
                onFdnChanged();
                return;
            case 270841:
                logd("EVENT_RESET_PDP_DONE cid=" + message.arg1);
                this.mPhone.notifyDataConnection("default");
                return;
            case 270842:
                onProcessPendingSetupData();
                return;
            default:
                switch (i) {
                    case 270847:
                        if (this.mAllApnSettings == null || this.mAllApnSettings.isEmpty()) {
                            log("EVENT_RESET_ATTACH_APN: Ignore due to null APN list");
                            return;
                        } else if (this.mAllApnSettings.size() == 1 && ((ApnSetting) this.mAllApnSettings.get(0)).getOperatorNumeric().length() == 0) {
                            logw("Only common Emergency APN, skip set initial attach apn.");
                            return;
                        } else {
                            setInitialAttachApn();
                            return;
                        }
                    case 270848:
                        onRoamingTypeChanged();
                        return;
                    case 270849:
                        logd("EVENT_MD_DATA_RETRY_COUNT_RESET");
                        setupDataOnAllConnectableApns(MtkGsmCdmaPhone.REASON_MD_DATA_RETRY_COUNT_RESET, DcTracker.RetryFailures.ALWAYS);
                        return;
                    case 270850:
                        if (isDataRetryRestrictEnabled()) {
                            logd("EVENT_REMOVE_RESTRICT_EUTRAN");
                            this.mReregisterOnReconnectFailure = false;
                            setupDataOnAllConnectableApns("psRestrictDisabled", DcTracker.RetryFailures.ALWAYS);
                            return;
                        }
                        return;
                    case 270851:
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult == null || asyncResult.result == null) {
                            loge("Parameter error: ret should not be NULL");
                            return;
                        } else {
                            onAllowChanged(((int[]) asyncResult.result)[0] == 1);
                            return;
                        }
                    default:
                        switch (i) {
                            case 270854:
                                handlePcoDataAfterAttached((AsyncResult) message.obj);
                                return;
                            case 270855:
                                this.mDedicatedBearerCount++;
                                AsyncResult asyncResult2 = (AsyncResult) message.obj;
                                if (asyncResult2.result instanceof MtkDedicateDataCallResponse) {
                                    onDedecatedBearerActivated((MtkDedicateDataCallResponse) asyncResult2.result);
                                    return;
                                }
                                return;
                            case 270856:
                                AsyncResult asyncResult3 = (AsyncResult) message.obj;
                                if (asyncResult3.result instanceof MtkDedicateDataCallResponse) {
                                    onDedecatedBearerModified((MtkDedicateDataCallResponse) asyncResult3.result);
                                    return;
                                }
                                return;
                            case 270857:
                                int i2 = this.mDedicatedBearerCount;
                                if (i2 > 0) {
                                    this.mDedicatedBearerCount = i2 - 1;
                                }
                                onDedecatedBearerDeactivated(((Integer) ((AsyncResult) message.obj).result).intValue());
                                return;
                            default:
                                switch (i) {
                                    case 270860:
                                        onNetworkRejectReceived((AsyncResult) message.obj);
                                        return;
                                    case 270861:
                                        onTearDownPdnByApnId(message.arg1);
                                        return;
                                    case 270862:
                                        onDataSetupSscMode3(message.arg1, message.arg2);
                                        return;
                                    case 270863:
                                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                                        if (asyncResult4.exception == null && asyncResult4.result != null) {
                                            updateMobileDataUsage(asyncResult4);
                                            return;
                                        }
                                        loge("EVENT_MOBILE_DATA_USAGE, exception: " + asyncResult4.exception);
                                        return;
                                    case 270864:
                                        AsyncResult asyncResult5 = (AsyncResult) message.obj;
                                        if (asyncResult5.exception != null) {
                                            loge("EVENT_NW_LIMIT_STATE, exception: " + asyncResult5.exception);
                                            return;
                                        }
                                        int[] iArr = (int[]) asyncResult5.result;
                                        logd("nwLimitState = " + (iArr.length > 0 ? iArr[0] : -1));
                                        return;
                                    case 270865:
                                        logd("EVENT_PLMN_DATA");
                                        AsyncResult asyncResult6 = (AsyncResult) message.obj;
                                        if (asyncResult6 == null || asyncResult6.result == null) {
                                            return;
                                        }
                                        this.mPlmnMvnoData = (PlmnMvnoData) asyncResult6.result;
                                        logd("mPlmnMvnoData = " + this.mPlmnMvnoData);
                                        if (this.mIsOperatorNumericEmpty) {
                                            this.mIsOperatorNumericEmpty = false;
                                            if (SubscriptionManager.isValidSubscriptionId(this.mPhone.getSubId())) {
                                                onSubIdReady();
                                                return;
                                            }
                                            return;
                                        }
                                        return;
                                    case 270866:
                                        logd("EVENT_ICC_CHANGED");
                                        IccRecords iccRecords = UiccController.getInstance().getIccRecords(this.mPhone.getPhoneId(), 1);
                                        IccRecords iccRecords2 = this.mIccRecords;
                                        if (iccRecords2 != iccRecords) {
                                            if (iccRecords2 != null) {
                                                logd("Removing stale icc objects.");
                                                this.mIccRecords.unregisterForRecordsOverride(this);
                                                this.mIccRecords = null;
                                            }
                                            if (iccRecords != null) {
                                                logd("new Icc object");
                                                this.mIsRecordsOverride = false;
                                                iccRecords.registerForRecordsOverride(this, 270867, (Object) null);
                                                this.mIccRecords = iccRecords;
                                                return;
                                            }
                                            return;
                                        }
                                        return;
                                    case 270867:
                                        logd("EVENT_RECORDS_OVERRIDE");
                                        this.mIsRecordsOverride = true;
                                        return;
                                    case 270868:
                                        logd("EVENT_MODEM_RESET");
                                        this.mPlmnMvnoData = null;
                                        resetSimStatus();
                                        return;
                                    default:
                                        super.handleMessage(message);
                                        return;
                                }
                        }
                }
        }
    }

    protected void initApnContexts(PersistableBundle persistableBundle) {
        if (!this.mTelephonyManager.isDataCapable()) {
            log("initApnContexts: isDataCapable == false.  No Apn Contexts loaded");
            return;
        }
        log("initApnContexts: E");
        for (ApnConfigType apnConfigType : new MtkApnConfigTypeRepository(persistableBundle).getTypes()) {
            MtkApnContext mtkApnContext = new MtkApnContext(this.mPhone, apnConfigType.getType(), this.mLogTag, this, apnConfigType.getPriority());
            this.mPrioritySortedApnContexts.add(mtkApnContext);
            this.mApnContexts.put(mtkApnContext.getApnType(), mtkApnContext);
            this.mApnContextsByType.put(ApnSetting.getApnTypesBitmaskFromString(mtkApnContext.getApnType()), mtkApnContext);
            log("initApnContexts: apnContext=" + ApnSetting.getApnTypeString(apnConfigType.getType()));
        }
        this.mPrioritySortedApnContexts.sort(new Comparator() { // from class: com.mediatek.internal.telephony.dataconnection.-$$Lambda$MtkDcTracker$0S9m22ZRQ_vXqEkSPUZfGVdl63g
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return MtkDcTracker.lambda$initApnContexts$0((ApnContext) obj, (ApnContext) obj2);
            }
        });
        logSortedApnContexts();
    }

    public boolean isDataAllowed(ApnContext apnContext, int i, DataConnectionReasons dataConnectionReasons) {
        ApnContext apnContext2;
        ApnSetting apnSetting;
        DataConnectionReasons dataConnectionReasons2 = new DataConnectionReasons();
        int apnTypeBitmask = apnContext != null ? apnContext.getApnTypeBitmask() : 0;
        boolean zIsInternalDataEnabled = this.mDataEnabledSettings.isInternalDataEnabled();
        boolean z = this.mAttached.get();
        boolean desiredPowerState = this.mPhone.getServiceStateTracker().getDesiredPowerState();
        boolean powerStateFromCarrier = this.mPhone.getServiceStateTracker().getPowerStateFromCarrier();
        int dataRat = getDataRat();
        if (dataRat == 18) {
            desiredPowerState = true;
            powerStateFromCarrier = true;
        }
        boolean zIsValidSubscriptionId = SubscriptionManager.isValidSubscriptionId(SubscriptionManager.getDefaultDataSubscriptionId());
        boolean z2 = apnContext == null || ApnSettingUtils.isMeteredApnType(apnTypeBitmask, this.mPhone);
        PhoneConstants.State state = PhoneConstants.State.IDLE;
        if (this.mPhone.getCallTracker() != null) {
            this.mPhone.getCallTracker().getState();
        }
        if (apnContext != null && apnTypeBitmask == 512 && apnContext.isConnectable()) {
            if (dataConnectionReasons != null) {
                dataConnectionReasons.add(DataConnectionReasons.DataAllowedReasonType.EMERGENCY_APN);
            }
            return true;
        }
        if (apnContext != null && !apnContext.isConnectable()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.APN_NOT_CONNECTABLE);
        }
        if (((apnContext != null && apnTypeBitmask == 17) || apnTypeBitmask == 256) && this.mPhone.getTransportManager().isInLegacyMode() && dataRat == 18) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.ON_IWLAN);
        }
        if (shouldRestrictDataForEcbm() || this.mPhone.isInEmergencyCall()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.IN_ECBM);
        }
        if (!z && !shouldAutoAttach() && i != 2) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.NOT_ATTACHED);
        }
        if (this.mPhone.getSubId() == -1) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.SIM_NOT_READY);
        }
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        if (mtkDcHelper != null && !mtkDcHelper.isDataAllowedForConcurrent(this.mPhone.getPhoneId())) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.INVALID_PHONE_STATE);
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.CONCURRENT_VOICE_DATA_NOT_ALLOWED);
        }
        if (!zIsInternalDataEnabled) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.INTERNAL_DATA_DISABLED);
        }
        if (!zIsValidSubscriptionId) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.DEFAULT_DATA_UNSELECTED);
        }
        if (this.mPhone.getServiceState().getDataRoaming() && !DcTrackerInjector.onRoamingOnIfDomestic(this) && !DcTrackerInjector.mmsAllowedOnRoaming(this, apnContext)) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.ROAMING_DISABLED);
        }
        if (this.mIsPsRestricted) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.PS_RESTRICTED);
        }
        if (!desiredPowerState) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.UNDESIRED_POWER_STATE);
        }
        if (!powerStateFromCarrier) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.RADIO_DISABLED_BY_CARRIER);
        }
        if (apnContext != null && this.mTransportType != this.mPhone.getTransportManager().getCurrentTransport(apnContext.getApnTypeBitmask()) && i != 2) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.ON_OTHER_TRANSPORT);
        }
        if (!(apnContext == null ? this.mDataEnabledSettings.isDataEnabled() : this.mDataEnabledSettings.isDataEnabled(apnTypeBitmask)) && (apnContext == null || !isDataAllowedAsOff(apnContext.getApnType()) || !this.mDataEnabledSettings.isPolicyDataEnabled())) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.DATA_DISABLED);
        }
        isDataAllowedForRoamingFeature(dataConnectionReasons2);
        if (mtkDcHelper != null && !mtkDcHelper.isSimMeLockAllowed(this.mPhone.getPhoneId())) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_SIM_ME_LOCK_NOT_ALLOWED);
        }
        if (isFdnEnabled()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_FDN_ENABLED);
        }
        if (!getAllowConfig()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_NOT_ALLOWED);
        }
        if (MtkUiccController.getVsimCardType(this.mPhone.getPhoneId()).isAllowOnlyVsimNetwork()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_NON_VSIM_PDN_NOT_ALLOWED);
        }
        if (isDataRetryRestrictEnabled() && (apnContext2 = (ApnContext) this.mApnContexts.get("default")) != null && apnContext != null && (apnSetting = apnContext2.getApnSetting()) != null && apnSetting.getPermanentFailed()) {
            if (apnSetting.canHandleType(apnContext.getApnTypeBitmask())) {
                dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_DATA_RETRY_NOT_ALLOWED);
            }
        }
        if (apnContext != null && apnContext.getApnType().equals("default") && TextUtils.equals("2GVoiceCallEnded", apnContext.getReason()) && this.mPhone.getSubId() != SubscriptionManager.getDefaultDataSubscriptionId()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_TEMP_DATA_SWITCH_NOT_ALLOWED);
        }
        if (apnContext != null && apnContext.getApnType().equals("default") && !getIsPcoAllowedDefault()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_PCO_NOT_ALLOWED);
        }
        if (apnContext != null && dataConnectionReasons2.allowed() && isLocatedPlmnChanged()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataDisallowedReasonType.MTK_LOCATED_PLMN_CHANGED);
        }
        if (dataConnectionReasons2.containsHardDisallowedReasons()) {
            if (dataConnectionReasons == null) {
                return false;
            }
            dataConnectionReasons.copyFrom(dataConnectionReasons2);
            return false;
        }
        if (dataConnectionReasons2.allowed()) {
            dataConnectionReasons2.add(DataConnectionReasons.DataAllowedReasonType.NORMAL);
        } else {
            if (this.mTransportType == 2) {
                dataConnectionReasons2.add(DataConnectionReasons.DataAllowedReasonType.UNMETERED_APN);
            } else if (this.mTransportType == 1 && !z2 && apnTypeBitmask != 17) {
                dataConnectionReasons2.add(DataConnectionReasons.DataAllowedReasonType.UNMETERED_APN);
            }
            if (apnContext != null && apnContext.hasRestrictedRequests(true) && !dataConnectionReasons2.allowed()) {
                dataConnectionReasons2.add(DataConnectionReasons.DataAllowedReasonType.RESTRICTED_REQUEST);
            }
        }
        if (dataConnectionReasons != null) {
            dataConnectionReasons.copyFrom(dataConnectionReasons2);
        }
        return dataConnectionReasons2.allowed();
    }

    public boolean isDataServiceBound() {
        return this.mDataServiceBound;
    }

    protected boolean isOnlySingleDcAllowed(int i) {
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            try {
                boolean zIsOnlySingleDcAllowed = iDataConnectionExt.isOnlySingleDcAllowed();
                if (zIsOnlySingleDcAllowed) {
                    log("isOnlySingleDcAllowed: " + zIsOnlySingleDcAllowed);
                    return true;
                }
            } catch (Exception e) {
                loge("Fail to create or use plug-in");
                e.printStackTrace();
            }
        }
        return super.isOnlySingleDcAllowed(i);
    }

    public boolean isOp129DunChange() {
        if (!MtkDcHelper.getInstance().isOperatorMccMnc(MtkDcHelper.Operator.OP129, this.mPhone.getPhoneId())) {
            return false;
        }
        if (!isOp129GsmUmts(getDataRat()) && !this.mPhone.getServiceState().getDataRoamingFromRegistration()) {
            return false;
        }
        log("isOp129DunChange");
        return true;
    }

    protected boolean isOp129GsmUmts(int i) {
        return i == 1 || i == 2 || i == 3 || i == 9 || i == 10 || i == 11 || i == 15 || i == 16;
    }

    public /* synthetic */ void lambda$updateMobileDataUsage$2$MtkDcTracker() {
        this.mMobileDataUsageProvider.pushMobileDataUsageStats(0);
    }

    protected void log(String str) {
        logd(str);
    }

    protected ApnSetting mergeApns(ApnSetting apnSetting, ApnSetting apnSetting2) {
        int id = apnSetting.getId();
        if ((apnSetting2.getApnTypeBitmask() & 17) == 17) {
            id = apnSetting2.getId();
        }
        int apnTypeBitmask = apnSetting2.getApnTypeBitmask() | apnSetting.getApnTypeBitmask();
        Uri mmsc = apnSetting.getMmsc() == null ? apnSetting2.getMmsc() : apnSetting.getMmsc();
        String mmsProxyAddressAsString = TextUtils.isEmpty(apnSetting.getMmsProxyAddressAsString()) ? apnSetting2.getMmsProxyAddressAsString() : apnSetting.getMmsProxyAddressAsString();
        int mmsProxyPort = apnSetting.getMmsProxyPort() == -1 ? apnSetting2.getMmsProxyPort() : apnSetting.getMmsProxyPort();
        return new MtkApnSetting(id, apnSetting.getOperatorNumeric(), apnSetting.getEntryName(), apnSetting.getApnName(), TextUtils.isEmpty(apnSetting.getProxyAddressAsString()) ? apnSetting2.getProxyAddressAsString() : apnSetting.getProxyAddressAsString(), apnSetting.getProxyPort() == -1 ? apnSetting2.getProxyPort() : apnSetting.getProxyPort(), mmsc, mmsProxyAddressAsString, mmsProxyPort, apnSetting.getUser(), apnSetting.getPassword(), apnSetting.getAuthType(), apnTypeBitmask, apnSetting2.getProtocol() == 2 ? apnSetting2.getProtocol() : apnSetting.getProtocol(), apnSetting2.getRoamingProtocol() == 2 ? apnSetting2.getRoamingProtocol() : apnSetting.getRoamingProtocol(), apnSetting.isEnabled(), (apnSetting.getNetworkTypeBitmask() == 0 || apnSetting2.getNetworkTypeBitmask() == 0) ? 0 : apnSetting.getNetworkTypeBitmask() | apnSetting2.getNetworkTypeBitmask(), apnSetting.getProfileId(), apnSetting.isPersistent() || apnSetting2.isPersistent(), apnSetting.getMaxConns(), apnSetting.getWaitTime(), apnSetting.getMaxConnsTime(), apnSetting.getMtu(), apnSetting.getMvnoType(), apnSetting.getMvnoMatchData(), apnSetting.getApnSetId(), apnSetting.getCarrierId(), apnSetting.getSkip464Xlat(), ((MtkApnSetting) apnSetting).inactiveTimer);
    }

    protected boolean mtkCanHandleOnDataSetupComplete(ApnContext apnContext, boolean z, int i, int i2) {
        if (z || !MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3.equals(apnContext.getReason())) {
            return false;
        }
        log("onDataSetupComplete: SSC mode3 PDU, error apn=" + apnContext.getApnSetting().getApnName() + ", cause=" + i + ", requestType=" + requestTypeToString(i2));
        DataConnection dataConnectionSscMode3 = ((MtkApnContext) apnContext).getDataConnectionSscMode3();
        apnContext.setDataConnection(dataConnectionSscMode3);
        ((MtkApnContext) apnContext).setDataConnectionSscMode3(null);
        if (dataConnectionSscMode3 == null) {
            log("onDataSetupComplete: SSC mode3 PDU, no connection to original DC, it's wired");
            return true;
        }
        ((MtkDataConnection) dataConnectionSscMode3).updateNetworkAgentSscMode3(0, 50);
        return true;
    }

    protected boolean mtkCpaModeOnApnChanged(String str) {
        if (!preCheckCpaDcTrackerInstance()) {
            return false;
        }
        if (!this.mCpaDcTracker.getRequestCpaMode().equals(CpaDcTracker.NAVI_MODE) && !this.mCpaDcTracker.getCurrentCpaMode().equals(CpaDcTracker.NAVI_MODE)) {
            return false;
        }
        logd("[CpaDct]mtkCpaModeOnApnChanged skip user apn changed");
        return true;
    }

    protected boolean mtkCpaModeOnDataDisconnect(ApnContext apnContext) {
        if (apnContext == null) {
            loge("[CpaDct]mtkCpaModeOnDataDisconnect, apnContext is null!");
            return false;
        }
        log("[CpaDct]onDataDisconnectDone apnContext=" + apnContext);
        if (!preCheckCpaDcTrackerInstance()) {
            loge("[CpaDct]mCpaDcTracker is null!");
            return false;
        }
        if (!this.mCpaDcTracker.getCurrentCpaMode().equals(CpaDcTracker.NAVI_MODE)) {
            logd("[CpaDct]not handle, currentCpaMode != CAP");
            return false;
        }
        if (!this.mCpaDcTracker.isCapApn(apnContext.getApnTypeBitmask())) {
            logd("[CpaDct]mtkCpaModeOnDataDisconnect is not CPA APN!");
            return false;
        }
        Handler handler = this.mCpaDctCallback;
        if (handler == null) {
            loge("[CpaDct]mCpaDctCallback is null!");
            return false;
        }
        this.mCpaDctCallback.sendMessage(handler.obtainMessage(5));
        return true;
    }

    protected boolean mtkCpaModeOnDataSetupComplete(ApnContext apnContext, boolean z, int i, int i2) {
        if (!z || apnContext == null) {
            loge("[CpaDct]not success or apnContext is null!");
            return false;
        }
        if (!preCheckCpaDcTrackerInstance()) {
            loge("[CpaDct]mCpaDcTracker is null!");
            return false;
        }
        logd("[CpaDct]mtkCpaModeOnDataSetupComplete() apnContext=" + apnContext);
        if (!this.mCpaDcTracker.getRequestCpaMode().equals(CpaDcTracker.NAVI_MODE)) {
            logd("[CpaDct]mtkCpaModeOnDataSetupComplete() not in NAVI mode");
            return false;
        }
        if (!this.mCpaDcTracker.isCapApn(apnContext.getApnTypeBitmask())) {
            logd("[CpaDct]mtkCpaModeOnDataSetupComplete is not CPA APN!");
            return false;
        }
        Handler handler = this.mCpaDctCallback;
        if (handler == null) {
            loge("[CpaDct]mCpaDctCallback is null!");
            return false;
        }
        this.mCpaDctCallback.sendMessage(handler.obtainMessage(4));
        return true;
    }

    protected boolean mtkCpaModeOnRetryAfterDisconnected(String str, ApnContext apnContext) {
        if (!preCheckCpaDcTrackerInstance()) {
            return true;
        }
        if (!"apnChanged".equals(str)) {
            logd("[CpaDct]not skip retry, reason is not APN_CHANGED");
            return true;
        }
        if (!this.mCpaDcTracker.getRequestCpaMode().equals(CpaDcTracker.NAVI_MODE) && !this.mCpaDcTracker.getCurrentCpaMode().equals(CpaDcTracker.NAVI_MODE)) {
            logd("[CpaDct]not skip retry, not CPA mode or switching from default to CPA");
            return true;
        }
        if (this.mCpaDcTracker.getCpaDctState() != 2) {
            logd("[CpaDct]not skip retry, getCpaDctState()!= DISCONNECTING");
            return true;
        }
        if (this.mCpaDcTracker.isCapApnCanHandleType(apnContext.getApnTypeBitmask())) {
            logd("[CpaDct]mtkCpaModeOnRetryAfterDisconnected skip retry");
            return false;
        }
        logd("[CpaDct]not skip retry, isCapApnCanHandleType()==false");
        return true;
    }

    protected boolean mtkCpaModeOnTrySetupData(ApnContext apnContext, String str) {
        if (apnContext == null) {
            loge("[CpaDct]apnContext is null!");
            return false;
        }
        if (!preCheckCpaDcTrackerInstance()) {
            loge("[CpaDct]mCpaDcTracker is null!");
            return false;
        }
        logd("[CpaDct]mtkCpaModeOnTrySetupData() apnContext=" + apnContext + " tryReson=" + str);
        if (this.mCpaDcTracker.getCpaDctState() != 6) {
            logd("[CpaDct]not handle, CpaDctState != CPA_DCT_STATE_LOST_NW");
            return false;
        }
        if (!this.mCpaDcTracker.isCapApn(apnContext.getApnTypeBitmask())) {
            logd("[CpaDct]mtkCpaModeOnTrySetupData is not CPA APN!");
            return false;
        }
        Handler handler = this.mCpaDctCallback;
        if (handler == null) {
            loge("[CpaDct]mCpaDctCallback is null!");
            return false;
        }
        this.mCpaDctCallback.sendMessage(handler.obtainMessage(6));
        return true;
    }

    protected boolean mtkCpaModeOnTrySetupDataError(ApnContext apnContext, DataConnectionReasons dataConnectionReasons, String str) {
        if (apnContext == null) {
            loge("[CpaDct]apnContext is null!");
            return false;
        }
        if (!preCheckCpaDcTrackerInstance()) {
            loge("[CpaDct]mCpaDcTracker is null!");
            return false;
        }
        logd("[CpaDct]mtkCpaModeOnTrySetupDataError() apnContext=" + apnContext + " errStr=" + str);
        if (!this.mCpaDcTracker.getRequestCpaMode().equals(CpaDcTracker.NAVI_MODE) && !this.mCpaDcTracker.getCurrentCpaMode().equals(CpaDcTracker.NAVI_MODE)) {
            logd("[CpaDct]not handle,requestMode != CAP or currentMode!=CPA");
            return false;
        }
        if (!this.mCpaDcTracker.isCapApn(apnContext.getApnTypeBitmask())) {
            return false;
        }
        if (apnContext.getState() == DctConstants.State.CONNECTED) {
            logd("[CpaDct]not handle, apnContext.getState()=CONNECTED");
            return false;
        }
        if (dataConnectionReasons.containsOnly(DataConnectionReasons.DataDisallowedReasonType.NOT_ATTACHED)) {
            logd("[CpaDct]not handle for NOT_ATTACHED");
            return false;
        }
        Handler handler = this.mCpaDctCallback;
        if (handler == null) {
            loge("[CpaDct]mCpaDctCallback is null!");
            return false;
        }
        this.mCpaDctCallback.sendMessage(handler.obtainMessage(7));
        return true;
    }

    public void mtkDeactivateDataCall(ApnContext apnContext) {
        if (apnContext != null) {
            log("mtkDeactivateDataCall: sync apn disable state for multi-purpose apn setting");
            this.mDataServiceManager.deactivateDataCall(getApnProfileID(apnContext.getApnType()) * (-1), 1, (Message) null);
        }
    }

    protected void mtkFakeDataConnection(ApnContext apnContext) {
        log("mtkFakeDataConnection: apn type = " + apnContext.getApnType());
        if (TextUtils.equals(apnContext.getApnType(), "mms")) {
            MtkDataConnection mtkDataConnection = (MtkDataConnection) findFreeDataConnection();
            if (mtkDataConnection == null) {
                int andIncrement = this.mUniqueIdGenerator.getAndIncrement();
                mtkDataConnection = (MtkDataConnection) DataConnection.makeDataConnection(this.mPhone, andIncrement, this, this.mDataServiceManager, this.mDcTesterFailBringUpAll, this.mDcc);
                this.mDataConnections.put(Integer.valueOf(andIncrement), mtkDataConnection);
            }
            mtkDataConnection.fakeNetworkAgent(apnContext);
        }
    }

    protected ApnSetting mtkFetchCpaApn() {
        if (!preCheckCpaDcTrackerInstance()) {
            loge("[CpaDct]mCpaDcTracker is null!");
            return null;
        }
        if ((this.mCpaDcTracker.getRequestCpaMode().equals(CpaDcTracker.NAVI_MODE) || this.mCpaDcTracker.getCurrentCpaMode().equals(CpaDcTracker.NAVI_MODE)) && this.mCpaDcTracker.getCpaConnectionInfo() != null) {
            return this.mCpaDcTracker.getCpaConnectionInfo().getCpaApn();
        }
        return null;
    }

    protected String mtkGetEmergencyApnSelection(String str) {
        return str + " and numeric=''";
    }

    protected String mtkGetOperatorNumeric() {
        String gsmNumeric;
        if (this.mPhoneType == 2) {
            PlmnMvnoData plmnMvnoData = this.mPlmnMvnoData;
            gsmNumeric = plmnMvnoData != null ? plmnMvnoData.getCdmaNumeric() : "";
        } else {
            PlmnMvnoData plmnMvnoData2 = this.mPlmnMvnoData;
            gsmNumeric = plmnMvnoData2 != null ? plmnMvnoData2.getGsmNumeric() : "";
        }
        log("mtkGetOperatorNumeric: phone type = " + this.mPhoneType + " [1:GSM,2:CDMA], operator from mPhone = " + this.mPhone.getOperatorNumeric() + ", operator from RIL = " + gsmNumeric);
        if (TextUtils.isEmpty(gsmNumeric)) {
            gsmNumeric = this.mPhone.getOperatorNumeric();
            if (!TextUtils.isEmpty(gsmNumeric) && hasOperatorIaCapability()) {
                log("mtkGetOperatorNumeric: wrong phone type, update it");
                gsmNumeric = "";
                if (updatePhoneType()) {
                    if (this.mPhoneType == 2) {
                        PlmnMvnoData plmnMvnoData3 = this.mPlmnMvnoData;
                        gsmNumeric = plmnMvnoData3 != null ? plmnMvnoData3.getCdmaNumeric() : "";
                    } else {
                        PlmnMvnoData plmnMvnoData4 = this.mPlmnMvnoData;
                        gsmNumeric = plmnMvnoData4 != null ? plmnMvnoData4.getGsmNumeric() : "";
                    }
                }
            }
        }
        return getOperatorNumericFromImpi(gsmNumeric);
    }

    protected void mtkHandlePcoByOp(ApnContext apnContext, PcoData pcoData) {
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt == null || iDataConnectionExt.getPcoActionByApnType(apnContext, pcoData) != 1) {
            return;
        }
        log("mtkHandlePcoByOp action1: teardown default apn");
        cleanUpConnectionInternal(true, 2, apnContext);
    }

    protected boolean mtkIsAddRequestNetworkCompleteMsg(int i, int i2) {
        if (i2 != 2 || getDataRat() != 0) {
            return false;
        }
        log("Remember the handover apn type when data rat is unknown");
        this.mHandoverApnType = i;
        return true;
    }

    protected boolean mtkIsApnCanSupportNetworkType(ApnSetting apnSetting, int i) {
        boolean zCanSupportNetworkType = false;
        int iRilRadioTechnologyToNetworkType = ServiceState.rilRadioTechnologyToNetworkType(i);
        if (apnSetting.getApnTypeBitmask() == 512 && iRilRadioTechnologyToNetworkType == 0) {
            if (this.mTransportType == 1) {
                zCanSupportNetworkType = apnSetting.canSupportNetworkType(13);
            } else if (this.mTransportType == 2) {
                zCanSupportNetworkType = apnSetting.canSupportNetworkType(18);
            }
            logi("[mtkIsApnCanSupportNetworkType] return:" + zCanSupportNetworkType);
        }
        return zCanSupportNetworkType;
    }

    protected boolean mtkIsInUse(ApnContext apnContext, DataConnection dataConnection) {
        if (((MtkApnContext) apnContext).getDataConnectionSscMode3() != dataConnection) {
            return false;
        }
        log("findFreeDataConnection: APN type " + apnContext.getApnType() + ", dc=(" + dataConnection + ") is inuse for SSC mode3 PDU");
        return true;
    }

    protected boolean mtkIsNeedNotify(ApnContext apnContext, boolean z) {
        if (z || !TextUtils.equals(apnContext.getApnType(), "default") || apnContext.getState() != DctConstants.State.CONNECTED) {
            return ((MtkApnContext) apnContext).isNeedNotify();
        }
        logd("mtkIsNeedNotify: do not notify state for default apn");
        return false;
    }

    protected boolean mtkIsNeedRegisterSettingsObserver(int i, int i2) {
        log("mtkIsNeedRegisterSettingsObserver: pSubId=" + i + ", subId=" + i2);
        return i != i2;
    }

    protected boolean mtkIsPermanentFailure(int i) {
        String strMtkGetOperatorNumeric;
        boolean zIsPermanentCause = false;
        IDataConnectionExt iDataConnectionExt = this.mDataConnectionExt;
        if (iDataConnectionExt != null) {
            try {
                zIsPermanentCause = iDataConnectionExt.isPermanentCause(i);
            } catch (Exception e) {
                logd("mDataConnectionExt.isPermanentCause exception");
                e.printStackTrace();
            }
        }
        if (i != 3910 || (strMtkGetOperatorNumeric = mtkGetOperatorNumeric()) == null) {
            return zIsPermanentCause;
        }
        int i2 = 0;
        while (true) {
            String[] strArr = KDDI_OPERATOR;
            if (i2 >= strArr.length) {
                return zIsPermanentCause;
            }
            if (strMtkGetOperatorNumeric.startsWith(strArr[i2])) {
                return true;
            }
            i2++;
        }
    }

    protected boolean mtkIsSetFalseForUserAction() {
        return this.mCcOneSettingForRoaming;
    }

    protected boolean mtkIsUseCarrierRoamingData() {
        return !getDataRoamingEnabled();
    }

    protected long mtkModifyInterApnDelay(long j, ApnContext apnContext) {
        if ("vsim".equals(apnContext.getApnType()) || ("default".equals(apnContext.getApnType()) && "apnChanged".equals(apnContext.getReason()))) {
            return 1000L;
        }
        if ("default".equals(apnContext.getApnType()) && TextUtils.equals(apnContext.getReason(), DataFailCause.toString(3982))) {
            return 100L;
        }
        if ("ims".equals(apnContext.getApnType()) || "emergency".equals(apnContext.getApnType())) {
            return -1L;
        }
        return j;
    }

    protected boolean mtkSkipCheckForCompatibleConnectedApnContext(ApnContext apnContext) {
        if (apnContext == null || !MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3.equals(apnContext.getReason()) || apnContext.getState() != DctConstants.State.CONNECTED) {
            return false;
        }
        log("checkForCompatibleConnectedApnContext: skip check for SSC mode3 PDU, apnContext=" + apnContext);
        return true;
    }

    protected boolean mtkSkipDataStallAlarm() {
        boolean z = false;
        int phoneId = this.mPhone.getPhoneId();
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        if (SubscriptionManager.isValidPhoneId(phoneId) && mtkDcHelper != null && mtkDcHelper.isTestIccCard(phoneId)) {
            z = true;
        }
        if (z) {
            return !SystemProperties.get(SKIP_DATA_STALL_ALARM).equals("0");
        }
        return SystemProperties.get(SKIP_DATA_STALL_ALARM).equals("1");
    }

    protected void mtkSyncApnContextDisableState(ApnContext apnContext, int i) {
        ApnSetting apnSetting;
        ApnContext apnContext2;
        ApnSetting apnSetting2;
        if (isDataRetryRestrictEnabled() && (apnContext2 = (ApnContext) this.mApnContexts.get("default")) != null && apnContext != null && (apnSetting2 = apnContext2.getApnSetting()) != null && apnSetting2.getPermanentFailed() && apnSetting2.canHandleType(apnContext.getApnTypeBitmask())) {
            logw("mtkSyncApnContextDisableState: do not sync disable info.");
            return;
        }
        if (apnContext == null || !apnContext.isReady()) {
            return;
        }
        if (apnContext.getState() != DctConstants.State.CONNECTED) {
            log("Apn type '" + apnContext.getApnType() + "' is not connected, we need to sync the disable state with RIL");
            this.mDataServiceManager.deactivateDataCall(getApnProfileID(apnContext.getApnType()) * (-1), 1, (Message) null);
            return;
        }
        if ("dun".equals(apnContext.getApnType()) || i != 1 || (apnSetting = apnContext.getApnSetting()) == null || !apnSetting.canHandleType(17)) {
            return;
        }
        log("This apn context has INTERNET capability and CS will not tear it down");
        apnContext.setEnabled(false);
        cleanUpConnectionInternal(true, i, apnContext);
    }

    protected void mtkTearDown(ApnContext apnContext, Message message) {
        if (((MtkApnContext) apnContext).getDataConnectionSscMode3() != null) {
            log("cleanUpConnectionInternal: tearing down SSC mode3 PDU, apnContext=" + apnContext);
            ((MtkApnContext) apnContext).getDataConnectionSscMode3().tearDown(apnContext, MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3, message);
        }
    }

    public void notifyMtkServiceStateChanged(MtkServiceState mtkServiceState) {
        if (this.mIsNotifyDataAttached || mtkServiceState.getDataRegState() != 0 || mtkServiceState.getDataRoaming()) {
            return;
        }
        log("notifyMtkServiceStateChanged: send EVENT_DATA_CONNECTION_ATTACHED");
        this.mIsNotifyDataAttached = true;
        this.mTurboSS = mtkServiceState;
        sendMessage(obtainMessage(270352));
    }

    protected void onApnChanged() {
        DctConstants.State overallState = getOverallState();
        boolean z = overallState == DctConstants.State.IDLE || overallState == DctConstants.State.FAILED;
        if (this.mPhone instanceof GsmCdmaPhone) {
            this.mPhone.updateCurrentCarrierInProvider();
        }
        if (mtkCpaModeOnApnChanged("apn changed!")) {
            return;
        }
        log("onApnChanged: createAllApnList and cleanUpAllConnections");
        createAllApnList();
        setDataProfilesAsNeeded();
        setInitialAttachApn();
        cleanUpConnectionsOnUpdatedApns(z ? false : true, "apnChanged");
        sendOnApnChangedDone(false);
    }

    protected void onDataConnectionAttached() {
        super.onDataConnectionAttached();
        if (this.mDetachedDc != null) {
            log("Add mms capability back when ps is attached");
            this.mDetachedDc.addMmsCapability();
            this.mDetachedDc = null;
        }
    }

    protected void onDataConnectionDetached() {
        ApnContext apnContext;
        ApnSetting apnSetting;
        MtkDataConnection mtkDataConnection;
        super.onDataConnectionDetached();
        this.mPhone.notifyDataConnection("default");
        boolean z = Settings.Global.getInt(this.mResolver, "mobile_data_always_on", 0) != 0;
        log("isMobileDataAlwaysOn = " + z);
        if (this.mTransportType != 1 || !z || (apnContext = (ApnContext) this.mApnContextsByType.get(17)) == null || apnContext.getState() != DctConstants.State.CONNECTED || (apnSetting = apnContext.getApnSetting()) == null || !apnSetting.canHandleType(2) || ((ApnContext) this.mApnContextsByType.get(2)).isEnabled() || (mtkDataConnection = (MtkDataConnection) apnContext.getDataConnection()) == null) {
            return;
        }
        log("Remove mms capability temporarily when ps is detached");
        this.mDetachedDc = mtkDataConnection;
        mtkDataConnection.removeMmsCapability();
    }

    protected void onDataEnabledChanged(boolean z, int i) {
        log("onDataEnabledChanged: enable=" + z + ", enabledChangedReason=" + i);
        if (z) {
            reevaluateDataConnections();
            setupDataOnAllConnectableApns("dataEnabled", DcTracker.RetryFailures.ALWAYS);
            return;
        }
        String str = i != 1 ? i != 4 ? "specificDisabled" : "carrierActionDisableMeteredApn" : "dataDisabledInternal";
        for (ApnContext apnContext : this.mApnContexts.values()) {
            if (!isDataAllowedAsOff(apnContext.getApnType())) {
                apnContext.setReason(str);
                cleanUpConnectionInternal(true, 2, apnContext);
            }
        }
    }

    protected void onDataRoamingOff() {
        log("onDataRoamingOff getDataRoamingEnabled=" + getDataRoamingEnabled() + ", mUserDataEnabled=" + this.mDataEnabledSettings.isUserDataEnabled());
        setRoamingDataWithRoamingType(0);
        reevaluateDataConnections();
        if (isUniqueRoamingFeatureEnabled()) {
            boolean domesticDataRoamingEnabledFromSettings = getDomesticDataRoamingEnabledFromSettings();
            boolean internationalDataRoamingEnabledFromSettings = getInternationalDataRoamingEnabledFromSettings();
            log("onDomOrIntRoamingOn bDomDataOnRoamingEnabled=" + domesticDataRoamingEnabledFromSettings + ", bIntDataOnRoamingEnabled=" + internationalDataRoamingEnabledFromSettings + ", currentRoamingType=" + this.mPhone.getServiceState().getDataRoamingType());
            if (domesticDataRoamingEnabledFromSettings && internationalDataRoamingEnabledFromSettings) {
                this.mPhone.notifyAllActiveDataConnections();
            } else {
                log("onDomOrIntRoamingOn: setup data for HOME.");
                setDataProfilesAsNeeded();
                setInitialAttachApn();
                setupDataOnAllConnectableApns("roamingOff", DcTracker.RetryFailures.ALWAYS);
            }
        } else if (!getDataRoamingEnabled() || DcTrackerInjector.isDomesticRoamingDisable(this.mPhone)) {
            if (!hasOperatorIaCapability()) {
                setDataProfilesAsNeeded();
                setInitialAttachApn();
            }
            setupDataOnAllConnectableApns("roamingOff", DcTracker.RetryFailures.ALWAYS);
        } else {
            this.mPhone.notifyAllActiveDataConnections();
        }
        if (hasOperatorIaCapability() || !isOp18Sim()) {
            return;
        }
        setInitialAttachApn();
    }

    protected void onDataRoamingOnOrSettingsChanged(int i) {
        int dataRoamingType = this.mPhone.getServiceState().getDataRoamingType();
        boolean z = i == 270384;
        log("onDataRoamingOnOrSettingsChanged getDataRoamingEnabled = " + getDataRoamingEnabled() + ", mUserDataEnabled = " + this.mDataEnabledSettings.isUserDataEnabled() + ", settingChanged = " + z + ", currentRoamingType = " + dataRoamingType);
        if (!this.mPhone.getServiceState().getDataRoaming()) {
            log("Device is not roaming, ignore the request.");
            return;
        }
        if (z || !setRoamingDataWithRoamingType(dataRoamingType)) {
            checkDataRoamingStatus(z);
            if (!hasOperatorIaCapability() && isOp18Sim()) {
                setInitialAttachApn();
            }
            if (isUniqueRoamingFeatureEnabled()) {
                if (!checkDomesticDataRoamingEnabled() && !checkInternationalDataRoamingEnabled()) {
                    log("onDataRoamingOnOrSettingsChanged: Tear down data connection on roaming.");
                    cleanUpAllConnectionsInternal(true, "roamingOn");
                    return;
                } else {
                    log("onDataRoamingOnOrSettingsChanged: setup data on roaming");
                    setupDataOnAllConnectableApns("roamingOn", DcTracker.RetryFailures.ALWAYS);
                    this.mPhone.notifyAllActiveDataConnections();
                    return;
                }
            }
            if (DcTrackerInjector.onRoamingOnIfDomestic(this)) {
                if (z) {
                    reevaluateDataConnections();
                }
                log("onDataRoamingOnOrSettingsChanged: setup data on roaming");
                setupDataOnAllConnectableApns("roamingOn", DcTracker.RetryFailures.ALWAYS);
                this.mPhone.notifyAllActiveDataConnections();
                return;
            }
            log("onDataRoamingOnOrSettingsChanged: Tear down data connection on roaming.");
            if (MtkUiccController.getVsimCardType(this.mPhone.getPhoneId()) == MtkIccCardConstants.VsimType.REMOTE_SIM) {
                log("RSim, not tear down any data connection since ignore data roaming");
            } else {
                cleanUpAllConnectionsInternal(true, "roamingOn");
            }
        }
    }

    protected void onDisconnectDone(ApnContext apnContext) {
        if (onSkipDisconnectDone(apnContext)) {
            return;
        }
        if (MtkDcHelper.getInstance().isOperatorMccMnc(MtkDcHelper.Operator.OP129, this.mPhone.getPhoneId())) {
            mtkCpaModeOnDataDisconnect(apnContext);
        }
        super.onDisconnectDone(apnContext);
        if (this.mDisconnectPendingCount == 0) {
            for (ApnContext apnContext2 : this.mApnContexts.values()) {
                if (apnContext2.getApnType().equals("ims") && apnContext2.getState() == DctConstants.State.CONNECTED) {
                    log("all data disconnect except ims, power off radio immediately");
                    this.mPhone.getServiceStateTracker().processPendingRadioPowerOffAfterDataOff();
                    break;
                }
            }
        }
        if (apnContext == null || hasMdAutoSetupImsCapability() || !"pdnOccupied".equals(apnContext.getReason())) {
            return;
        }
        log("try setup emergency PDN");
        trySetupData((ApnContext) this.mApnContextsByType.get(512), 1);
    }

    public void onDsdaStateChanged() {
        log("onDsdaStateChanged");
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        this.mIsSupportConcurrent = mtkDcHelper == null ? false : mtkDcHelper.isDataAllowedForConcurrent(this.mPhone.getPhoneId());
        if (isConnected()) {
            if (this.mIsSupportConcurrent) {
                startNetStatPoll();
                startDataStallAlarm(false);
            } else {
                stopNetStatPoll();
                stopDataStallAlarm();
            }
            this.mPhone.notifyAllActiveDataConnections();
            notifyVoiceCallEventToDataConnection(this.mInVoiceCall, this.mIsSupportConcurrent);
        }
    }

    protected void onSimAbsent() {
        setIsPcoAllowedDefault(true);
        resetSimStatus();
        super.onSimAbsent();
    }

    public void onVoiceCallEndedEx() {
        log("onVoiceCallEndedEx");
        this.mInVoiceCall = false;
        boolean z = this.mIsSupportConcurrent;
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        this.mIsSupportConcurrent = mtkDcHelper == null ? false : mtkDcHelper.isDataAllowedForConcurrent(this.mPhone.getPhoneId());
        if (isConnected()) {
            if (!z || this.mIsSupportConcurrent) {
                startNetStatPoll();
                startDataStallAlarm(false);
                this.mPhone.notifyAllActiveDataConnections();
            } else {
                resetPollStats();
            }
        }
        setupDataOnAllConnectableApns("2GVoiceCallEnded", DcTracker.RetryFailures.ALWAYS);
        notifyVoiceCallEventToDataConnection(this.mInVoiceCall, this.mIsSupportConcurrent);
        DcTrackerInjector.onVoiceCallChangeForOtherDcTracker(this, false);
    }

    public void onVoiceCallStartedEx() {
        log("onVoiceCallStartedEx");
        this.mInVoiceCall = true;
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        this.mIsSupportConcurrent = mtkDcHelper == null ? false : mtkDcHelper.isDataAllowedForConcurrent(this.mPhone.getPhoneId());
        if (isConnected() && !this.mIsSupportConcurrent) {
            log("onVoiceCallStarted stop polling");
            stopNetStatPoll();
            stopDataStallAlarm();
            this.mPhone.notifyAllActiveDataConnections();
        }
        notifyVoiceCallEventToDataConnection(this.mInVoiceCall, this.mIsSupportConcurrent);
        DcTrackerInjector.onVoiceCallChangeForOtherDcTracker(this, true);
    }

    public void processPendingSetupData(MtkServiceStateTracker mtkServiceStateTracker) {
        this.mPendingDataCall = false;
        sendMessage(obtainMessage(270842));
    }

    protected void readConfiguration() {
        super.readConfiguration();
        readAddOnConfiguration();
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void registerForAllEvents() {
        super.registerForAllEvents();
        this.mPhone.getCallTracker().unregisterForVoiceCallEnded(this);
        this.mPhone.getCallTracker().unregisterForVoiceCallStarted(this);
        logd("registerForAllEvents: mPhone = " + this.mPhone);
        this.mPhone.mCi.registerForRemoveRestrictEutran(this, 270850, null);
        this.mPhone.mCi.registerForMdDataRetryCountReset(this, 270849, null);
        this.mPhone.mCi.registerForPlmnData(this, 270865, null);
        if (!hasOperatorIaCapability()) {
            this.mPhone.mCi.registerForResetAttachApn(this, 270847, null);
        }
        this.mPhone.mCi.registerForDataAllowed(this, 270851, null);
        this.mPhone.mCi.registerForPcoDataAfterAttached(this, 270854, null);
        this.mPhone.mCi.registerForDedicatedBearerActivated(this, 270855, null);
        this.mPhone.mCi.registerForDedicatedBearerModified(this, 270856, null);
        this.mPhone.mCi.registerForDedicatedBearerDeactivationed(this, 270857, null);
        this.mPhone.mCi.registerForMobileDataUsage(this, 270863, null);
        this.mPhone.mCi.registerForNwLimitState(this, 270864, null);
        if (this.mTransportType == 1) {
            this.mPhone.mCi.registerForNetworkReject(this, 270860, null);
            UiccController.getInstance().registerForIccChanged(this, 270866, (Object) null);
        }
        this.mPhone.mCi.registerForModemReset(this, 270868, null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void registerServiceStateTrackerEvents() {
        super.registerServiceStateTrackerEvents();
        ((MtkServiceStateTracker) this.mPhone.getServiceStateTracker()).registerForDataRoamingTypeChange(this, 270848, null);
    }

    protected void registerSettingsObserver() {
        this.mSettingsObserver.unobserve();
        this.mSettingsObserver.observe(Settings.Global.getUriFor("device_provisioned"), 270386);
        registerFdnContentObserver();
    }

    protected boolean retryAfterDisconnected(ApnContext apnContext) {
        boolean z = true;
        String reason = apnContext.getReason();
        if ("radioTurnedOff".equals(reason) || MtkGsmCdmaPhone.REASON_FDN_ENABLED.equals(reason) || (isOnlySingleDcAllowed(getDataRat()) && isHigherPriorityApnContextActive(apnContext))) {
            z = false;
        }
        return z ? mtkCpaModeOnRetryAfterDisconnected(reason, apnContext) : z;
    }

    protected void setDataProfilesAsNeeded() {
        log("setDataProfilesAsNeeded");
        String strMtkGetOperatorNumeric = mtkGetOperatorNumeric();
        if (this.mIsSimNotReady && (strMtkGetOperatorNumeric == null || strMtkGetOperatorNumeric.length() == 0)) {
            log("setDataProfilesAsNeeded: ignore, sim not ready and no operator numeric");
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (ApnSetting apnSetting : this.mAllApnSettings) {
            DataProfile dataProfileCreateDataProfile = createDataProfile(encodeInactiveTimer(apnSetting), apnSetting.equals(getPreferredApn()));
            if (!arrayList.contains(dataProfileCreateDataProfile)) {
                arrayList.add(dataProfileCreateDataProfile);
            }
        }
        ArrayList<ApnSetting> arrayListFetchDunApns = fetchDunApns();
        if (arrayListFetchDunApns != null && arrayListFetchDunApns.size() > 0) {
            for (ApnSetting apnSetting2 : arrayListFetchDunApns) {
                DataProfile dataProfileCreateDataProfile2 = createDataProfile(apnSetting2, apnSetting2.equals(getPreferredApn()));
                if (!arrayList.contains(dataProfileCreateDataProfile2)) {
                    arrayList.add(dataProfileCreateDataProfile2);
                    log("setDataProfilesAsNeeded: add DUN apn setting: " + apnSetting2);
                }
            }
        }
        if (arrayList.isEmpty()) {
            log("setDataProfilesAsNeeded: ignore the empty data profile list");
        } else {
            this.mPhone.mCi.setDataProfile((DataProfile[]) arrayList.toArray(new DataProfile[arrayList.size()]), this.mPhone.getServiceState().getDataRoamingFromRegistration(), null);
        }
    }

    protected void setInitialAttachApn() {
        if (hasOperatorIaCapability()) {
            super.setInitialAttachApn();
            return;
        }
        ApnSetting apnSetting = null;
        ApnSetting apnSetting2 = null;
        ApnSetting apnSetting3 = null;
        log("setInitialApn: E mPreferredApn=" + this.mPreferredApn);
        if (this.mPreferredApn != null && this.mPreferredApn.canHandleType(256)) {
            apnSetting = this.mPreferredApn;
        } else if (!this.mAllApnSettings.isEmpty()) {
            for (ApnSetting apnSetting4 : this.mAllApnSettings) {
                if (apnSetting3 == null && !apnSetting4.isEmergencyApn()) {
                    apnSetting3 = apnSetting4;
                    log("setInitialApn: firstNonEmergencyApnSetting=" + apnSetting3);
                }
                if (apnSetting4.canHandleType(256)) {
                    log("setInitialApn: iaApnSetting=" + apnSetting4);
                    apnSetting = apnSetting4;
                    break;
                }
                if (apnSetting2 == null && apnSetting4.canHandleType(17)) {
                    log("setInitialApn: defaultApnSetting=" + apnSetting4);
                    apnSetting2 = apnSetting4;
                }
            }
        }
        if (apnSetting == null && apnSetting2 == null && !allowInitialAttachForOperator()) {
            log("Abort Initial attach");
            return;
        }
        ApnSetting apnSetting5 = null;
        if (apnSetting != null) {
            log("setInitialAttachApn: using iaApnSetting");
            apnSetting5 = apnSetting;
        } else if (this.mPreferredApn != null) {
            log("setInitialAttachApn: using mPreferredApn");
            apnSetting5 = this.mPreferredApn;
        } else if (apnSetting2 != null) {
            log("setInitialAttachApn: using defaultApnSetting");
            apnSetting5 = apnSetting2;
        } else if (apnSetting3 != null) {
            log("setInitialAttachApn: using firstNonEmergencyApnSetting");
            apnSetting5 = apnSetting3;
        }
        if (apnSetting5 == null) {
            log("setInitialAttachApn: X There in no available apn");
            if (hasOperatorIaCapability()) {
                return;
            }
            ApnSetting apnSettingMakeApnSetting = ApnSetting.makeApnSetting(0, "", "", "", "", 0, null, "", 0, "", "", 0, 256, 2, 2, true, 0, 0, false, 0, 0, 0, 0, 0, "");
            this.mPhone.mCi.setInitialAttachApn(createDataProfile(apnSettingMakeApnSetting, apnSettingMakeApnSetting.equals(getPreferredApn())), this.mPhone.getServiceState().getDataRoamingFromRegistration(), null);
            return;
        }
        log("setInitialAttachApn: X selected Apn=" + apnSetting5);
        this.mPhone.mCi.setInitialAttachApn(createDataProfile(apnSetting5, apnSetting5.equals(getPreferredApn())), this.mPhone.getServiceState().getDataRoamingFromRegistration(), null);
    }

    public void setMobileDataUsageSum(long j, long j2, long j3, long j4) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        boolean dataRoaming = this.mPhone.getServiceState().getDataRoaming();
        LinkProperties linkProperties = getLinkProperties("default");
        String interfaceName = linkProperties == null ? "" : linkProperties.getInterfaceName();
        NetworkStats networkStats = new NetworkStats(jElapsedRealtime, 1);
        networkStats.combineAllValues(this.mMobileDataUsage);
        networkStats.combineValues(new NetworkStats.Entry(interfaceName, -10, 0, 0, 1, dataRoaming ? 1 : 0, 1, j3, j4, j, j2, 0L));
        this.mMobileDataUsage = networkStats;
    }

    protected void setPreferredApn(int i) {
        if (this.mCanSetPreferApn) {
            log("setPreferredApn: insert pos=" + i + ", subId=" + this.mPhone.getSubId());
        }
        super.setPreferredApn(i);
    }

    public void setupDataForCpaChange(String str) {
        logd("[CpaDct]setupDataForCpaChange() reason:" + str);
        setupDataOnAllConnectableApns(str, DcTracker.RetryFailures.ALWAYS);
    }

    protected void setupDataOnAllConnectableApns(String str, DcTracker.RetryFailures retryFailures) {
        ApnSetting apnSetting;
        if (VDBG) {
            log("setupDataOnAllConnectableApns: " + str);
        }
        if (!VDBG) {
            StringBuilder sb = new StringBuilder(120);
            for (ApnContext apnContext : this.mPrioritySortedApnContexts) {
                sb.append(apnContext.getApnType());
                sb.append(":[state=");
                sb.append(apnContext.getState());
                sb.append(",enabled=");
                sb.append(apnContext.isEnabled());
                sb.append("] ");
            }
            log("setupDataOnAllConnectableApns: " + str + " " + ((Object) sb));
        }
        for (ApnContext apnContext2 : this.mPrioritySortedApnContexts) {
            if (hasMdAutoSetupImsCapability() || !apnContext2.getApnType().equals("ims")) {
                if (isDataRetryRestrictEnabled() && ((apnContext2.getApnType().equals("default") || apnContext2.getApnType().equals("dun")) && (apnSetting = apnContext2.getApnSetting()) != null && apnSetting.getPermanentFailed() && !TextUtils.equals(str, MtkGsmCdmaPhone.REASON_CARRIER_CONFIG_LOADED) && !TextUtils.equals(str, "2GVoiceCallEnded") && !TextUtils.equals(str, "nwTypeChanged"))) {
                    apnSetting.setPermanentFailed(false);
                    log("set permanentFailed as false for default/dun apn");
                    cancelReconnect(apnContext2);
                }
                setupDataOnConnectableApn(apnContext2, str, retryFailures);
            } else {
                log("setupDataOnAllConnectableApns: Ignore ims request for apntype: " + apnContext2.getApnType() + " reason: " + str);
            }
        }
    }

    protected void setupDataOnConnectableApn(ApnContext apnContext, String str, DcTracker.RetryFailures retryFailures) {
        if (VDBG) {
            log("setupDataOnConnectableApn: apnContext " + apnContext);
        }
        if (apnContext.getState() == DctConstants.State.FAILED || apnContext.getState() == DctConstants.State.RETRYING) {
            if (retryFailures == DcTracker.RetryFailures.ALWAYS) {
                apnContext.releaseDataConnection(str);
            } else if (!apnContext.isConcurrentVoiceAndDataAllowed() && this.mPhone.getServiceStateTracker().isConcurrentVoiceAndDataAllowed()) {
                apnContext.releaseDataConnection(str);
            }
        }
        if (apnContext.isConnectable()) {
            if (isOnlySingleDcAllowed(this.mPhone.getServiceState().getRilDataRadioTechnology()) && isHigherPriorityApnContextActive(apnContext)) {
                log("No need to trysetupdata as higher priority apncontext exists");
            } else {
                log("isConnectable() call trySetupData");
                apnContext.setReason(str);
                if (this.mHandoverApnType == apnContext.getApnTypeBitmask()) {
                    this.mHandoverApnType = 0;
                    trySetupData(apnContext, 2);
                } else {
                    trySetupData(apnContext, 1);
                }
            }
        }
        if (apnContext.getState() == DctConstants.State.CONNECTED && TextUtils.equals(str, MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3) && TextUtils.equals(str, apnContext.getReason())) {
            log("SSC mode3 call trySetupData for APN type" + apnContext.getApnType());
            trySetupData(apnContext, 1);
        }
        if (TextUtils.equals(apnContext.getApnType(), "default") && apnContext.getState() == DctConstants.State.CONNECTED && TextUtils.equals(str, "apnChanged") && this.mCanSetPreferApn && this.mPreferredApn == null) {
            log("setupDataOnConnectableApns: PREFERRED APN is null");
            this.mPreferredApn = apnContext.getApnSetting();
            if (this.mPreferredApn != null) {
                setPreferredApn(this.mPreferredApn.getId());
                this.mPhone.notifyDataConnection(apnContext.getApnType());
            }
        }
    }

    public boolean setupPdnByType(String str) {
        log("setupPdnByType: sendMessage: type=" + str);
        sendMessage(obtainMessage(270339, this.mApnContexts.get(str)));
        return true;
    }

    public boolean shouldAutoAttach() {
        PhoneSwitcher phoneSwitcher = PhoneSwitcher.getInstance();
        if (phoneSwitcher == null || this.mPhone.getPhoneId() != phoneSwitcher.getPreferredDataPhoneId()) {
            return super.shouldAutoAttach();
        }
        log("shouldAutoAttach: prefer data sim should not auto attach");
        return false;
    }

    protected boolean shouldCleanUpConnection(ApnContext apnContext, boolean z, boolean z2) {
        if (apnContext == null) {
            return false;
        }
        ApnSetting apnSetting = apnContext.getApnSetting();
        if ((apnSetting != null && z2) || !z) {
            return true;
        }
        if (apnSetting == null || !ApnSettingUtils.isMetered(apnSetting, this.mPhone)) {
            return false;
        }
        return (this.mDataEnabledSettings.isDataEnabled(apnSetting.getApnTypeBitmask()) ^ true) || (!isUniqueRoamingFeatureEnabled() && this.mPhone.getServiceState().getDataRoaming() && (getDataRoamingEnabled() ^ true)) || (isUniqueRoamingFeatureEnabled() && !isDataRoamingTypeAllowed());
    }

    protected void sortApnContextByPriority() {
        if (!this.mTelephonyManager.isDataCapable()) {
            log("sortApnContextByPriority: isDataCapable == false.  No Apn Contexts loaded");
            return;
        }
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(this.mPhone.getSubId()) : null;
        log("sortApnContextByPriority: E");
        for (ApnConfigType apnConfigType : new MtkApnConfigTypeRepository(configForSubId).getTypes()) {
            if (this.mApnContextsByType.contains(apnConfigType.getType())) {
                ((ApnContext) this.mApnContextsByType.get(apnConfigType.getType())).setPriority(apnConfigType.getPriority());
            }
        }
        ArrayList arrayList = new ArrayList(this.mPrioritySortedApnContexts);
        arrayList.sort(new Comparator() { // from class: com.mediatek.internal.telephony.dataconnection.-$$Lambda$MtkDcTracker$vEACQiuR1_Bcjgwl5Nh8pWxRj0I
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return MtkDcTracker.lambda$sortApnContextByPriority$1((ApnContext) obj, (ApnContext) obj2);
            }
        });
        this.mPrioritySortedApnContexts = arrayList;
        logSortedApnContexts();
    }

    protected void startDataStallAlarm(boolean z) {
        if (mtkSkipDataStallAlarm()) {
            log("onDataStallAlarm: switch data-stall off, skip it!");
        } else {
            super.startDataStallAlarm(z);
        }
    }

    public boolean tearDownPdnByType(String str) {
        Message messageObtainMessage = obtainMessage(270861);
        messageObtainMessage.arg1 = ApnSetting.getApnTypesBitmaskFromString(str);
        log("tearDownPdnByType: sendMessage: type=" + messageObtainMessage.arg1);
        sendMessage(messageObtainMessage);
        return true;
    }

    protected boolean trySetupData(ApnContext apnContext, int i) {
        boolean z = true;
        if (this.mPhone.getSimulatedRadioControl() != null) {
            apnContext.setState(DctConstants.State.CONNECTED);
            this.mPhone.notifyDataConnection(apnContext.getApnType());
            log("trySetupData: X We're on the simulator; assuming connected retValue=true");
            return true;
        }
        DataConnectionReasons dataConnectionReasons = new DataConnectionReasons();
        if (!isDataAllowed(apnContext, i, dataConnectionReasons) && !isDataAllowedExt(dataConnectionReasons, apnContext)) {
            z = false;
        }
        boolean zEquals = apnContext.getApnType().equals("emergency");
        if (!hasMdAutoSetupImsCapability() && zEquals) {
            int activeDcCount = ((MtkDcController) this.mDcc).getActiveDcCount();
            log("defaultBearerCount: " + activeDcCount + ", mDedicatedBearerCount: " + this.mDedicatedBearerCount);
            if (this.mDedicatedBearerCount + activeDcCount >= 7) {
                teardownDataByEmergencyPolicy();
                return false;
            }
        }
        String str = "trySetupData for APN type " + apnContext.getApnType() + ", reason: " + apnContext.getReason() + ", requestType=" + requestTypeToString(i) + ". " + dataConnectionReasons.toString();
        log(str);
        apnContext.requestLog(str);
        if (!z) {
            StringBuilder sb = new StringBuilder();
            sb.append("trySetupData failed. apnContext = [type=" + apnContext.getApnType() + ", mState=" + apnContext.getState() + ", apnEnabled=" + apnContext.isEnabled() + ", mDependencyMet=" + apnContext.isDependencyMet() + "] ");
            if (!this.mDataEnabledSettings.isDataEnabled()) {
                sb.append("isDataEnabled() = false. " + this.mDataEnabledSettings);
            }
            if (apnContext.getState() == DctConstants.State.RETRYING) {
                if (dataConnectionReasons.contains(DataConnectionReasons.DataDisallowedReasonType.MTK_DATA_RETRY_NOT_ALLOWED)) {
                    sb.append(" Keep retrying.");
                } else {
                    apnContext.setState(DctConstants.State.FAILED);
                    sb.append(" Stop retrying.");
                }
            }
            log(sb.toString());
            apnContext.requestLog(sb.toString());
            mtkCpaModeOnTrySetupDataError(apnContext, dataConnectionReasons, " stop retry");
            return false;
        }
        if (apnContext.getState() == DctConstants.State.FAILED) {
            log("trySetupData: make a FAILED ApnContext IDLE so its reusable");
            apnContext.requestLog("trySetupData: make a FAILED ApnContext IDLE so its reusable");
            apnContext.setState(DctConstants.State.IDLE);
        }
        int dataRat = getDataRat();
        if (dataRat == 0 && this.mPhone.getServiceState().getState() == 0) {
            dataRat = getVoiceRat();
        }
        log("service state=" + this.mPhone.getServiceState());
        apnContext.setConcurrentVoiceAndDataAllowed(this.mPhone.getServiceStateTracker().isConcurrentVoiceAndDataAllowed());
        if (apnContext.getState() == DctConstants.State.IDLE) {
            if (TextUtils.equals(apnContext.getApnType(), "emergency") && this.mAllApnSettings.isEmpty()) {
                log("add mEmergencyApn: " + this.mEmergencyApn + " to mAllApnSettings");
                addEmergencyApnSetting();
            }
            ArrayList arrayListBuildWaitingApns = buildWaitingApns(apnContext.getApnType(), dataRat);
            if (arrayListBuildWaitingApns.isEmpty()) {
                ApnSetting apnSetting = apnContext != null ? apnContext.getApnSetting() : null;
                this.mPhone.notifyDataConnectionFailed(apnContext.getApnType(), apnSetting != null ? apnSetting.getApnName() : null, 27);
                log("trySetupData: X No APN found retValue=false");
                apnContext.requestLog("trySetupData: X No APN found retValue=false");
                mtkFakeDataConnection(apnContext);
                mtkCpaModeOnTrySetupDataError(apnContext, dataConnectionReasons, "waitingApns is empty");
                return false;
            }
            apnContext.setWaitingApns(arrayListBuildWaitingApns);
            log("trySetupData: Create from mAllApnSettings : " + apnListToString(this.mAllApnSettings));
        }
        boolean z2 = setupData(apnContext, dataRat, i);
        mtkCpaModeOnTrySetupData(apnContext, " call setupData");
        log("trySetupData: X retValue=" + z2);
        return z2;
    }

    public void trySetupDataOnEvent(int i, int i2, int i3) {
        Message messageObtainMessage = obtainMessage(i);
        messageObtainMessage.arg1 = i2;
        messageObtainMessage.arg2 = i3;
        sendMessage(messageObtainMessage);
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void unregisterForAllEvents() {
        super.unregisterForAllEvents();
        logd("unregisterForAllEvents: mPhone = " + this.mPhone);
        this.mPhone.mCi.unregisterForRemoveRestrictEutran(this);
        this.mPhone.mCi.unregisterForMdDataRetryCountReset(this);
        this.mPhone.mCi.unregisterForPlmnData(this);
        if (!hasOperatorIaCapability()) {
            this.mPhone.mCi.unregisterForResetAttachApn(this);
        }
        this.mPhone.mCi.unregisterForDataAllowed(this);
        this.mPhone.mCi.unregisterForPcoDataAfterAttached(this);
        this.mPhone.mCi.unregisterForDedicatedBearerActivated(this);
        this.mPhone.mCi.unregisterForDedicatedBearerModified(this);
        this.mPhone.mCi.unregisterForDedicatedBearerDeactivationed(this);
        this.mPhone.mCi.unregisterForMobileDataUsage(this);
        this.mPhone.mCi.unregisterForNwLimitState(this);
        if (this.mTransportType == 1) {
            this.mPhone.mCi.unregisterForNetworkReject(this);
            UiccController.getInstance().unregisterForIccChanged(this);
        }
        this.mPhone.mCi.unregisterForModemReset(this);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void unregisterServiceStateTrackerEvents() {
        super.unregisterServiceStateTrackerEvents();
        ((MtkServiceStateTracker) this.mPhone.getServiceStateTracker()).unregisterForDataRoamingTypeChange(this);
    }

    public int updateApnListForCpaConnection(String str, MtkApnSetting mtkApnSetting) {
        logd("[CpaDct]updateApnListForCpa: E mAllApnSettings=" + this.mAllApnSettings);
        if (!str.equals(CpaDcTracker.NAVI_MODE) || mtkApnSetting == null) {
            if (!str.equals(CpaDcTracker.DEFAULT_MODE)) {
                loge("[CpaDct]paramter error:" + str);
                return 0;
            }
            createAllApnList();
            logd("[CpaDct]updateApnListForCpa: X mAllApnSettings=" + this.mAllApnSettings);
            setDataProfilesAsNeeded();
            return 1;
        }
        this.mAllApnSettings.add(mtkApnSetting);
        setDataProfilesAsNeeded();
        logd("[CpaDct]updateApnListForCpa: to MD mAllApnSettings=" + this.mAllApnSettings);
        int apnTypeBitmask = mtkApnSetting.getApnTypeBitmask();
        Iterator it = this.mAllApnSettings.iterator();
        while (it.hasNext()) {
            int apnTypeBitmask2 = ((ApnSetting) it.next()).getApnTypeBitmask();
            logd("[CpaDct]tempTypeBitmask()=" + apnTypeBitmask2);
            if ((apnTypeBitmask & apnTypeBitmask2) > 0) {
                it.remove();
            }
        }
        this.mAllApnSettings.add(mtkApnSetting);
        logd("[CpaDct]updateApnListForCpa: X mAllApnSettings=" + this.mAllApnSettings);
        return 1;
    }
}

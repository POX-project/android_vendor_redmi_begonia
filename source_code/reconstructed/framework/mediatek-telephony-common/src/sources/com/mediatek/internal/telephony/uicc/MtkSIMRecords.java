package com.mediatek.internal.telephony.uicc;

import android.app.ActivityManagerNative;
import android.app.AlertDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Message;
import android.os.PowerManager;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.os.UserManager;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.MccTable;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.gsm.SimTlv;
import com.android.internal.telephony.uicc.AdnRecord;
import com.android.internal.telephony.uicc.AdnRecordLoader;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccRefreshResponse;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.SIMRecords;
import com.android.internal.telephony.uicc.UiccCard;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.telephony.uicc.UsimServiceTable;
import com.mediatek.internal.telephony.MtkIccUtils;
import com.mediatek.internal.telephony.MtkSubscriptionManager;
import com.mediatek.internal.telephony.OpTelephonyCustomizationFactoryBase;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.phb.MtkAdnRecordCache;
import com.mediatek.internal.telephony.ppl.PplControlData;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public class MtkSIMRecords extends SIMRecords {
    public static final String ATT_OPID = "7";
    public static final String CRICKET_OPID = "145";
    public static final int EF_RAT_FOR_OTHER_CASE = 512;
    public static final int EF_RAT_NOT_EXIST_IN_USIM = 256;
    public static final int EF_RAT_UNDEFINED = -256;
    private static final int EVENT_CFU_IND = 1021;
    private static final int EVENT_DELAYED_SEND_PHB_CHANGE = 1026;
    private static final int EVENT_DUAL_IMSI_READY = 1004;
    private static final int EVENT_EF_CSP_PLMN_MODE_BIT_CHANGED = 1013;
    private static final int EVENT_GET_ALL_OPL5G_DONE = 1030;
    private static final int EVENT_GET_ALL_OPL_DONE = 1008;
    private static final int EVENT_GET_ALL_PNN_DONE = 1028;
    private static final int EVENT_GET_CPHSONS_DONE = 1009;
    private static final int EVENT_GET_EF_ICCID_DONE = 1024;
    private static final int EVENT_GET_GBABP_DONE = 1019;
    private static final int EVENT_GET_GBANL_DONE = 1020;
    private static final int EVENT_GET_NEW_MSISDN_DONE = 1016;
    private static final int EVENT_GET_PSISMSC_DONE = 1017;
    private static final int EVENT_GET_RAT_DONE = 1014;
    private static final int EVENT_GET_SHORT_CPHSONS_DONE = 1010;
    private static final int EVENT_GET_SMSP_DONE = 1018;
    private static final int EVENT_IMSI_REFRESH_QUERY = 1022;
    private static final int EVENT_IMSI_REFRESH_QUERY_DONE = 1023;
    public static final int EVENT_MSISDN = 100;
    public static final int EVENT_OPL = 101;
    public static final int EVENT_OPL5G = 103;
    private static final int EVENT_PHB_READY = 1027;
    public static final int EVENT_PNN = 102;
    private static final int EVENT_QUERY_ICCID_DONE = 1011;
    private static final int EVENT_QUERY_ICCID_DONE_FOR_HOT_SWAP = 1015;
    private static final int EVENT_QUERY_MENU_TITLE_DONE = 1005;
    private static final int EVENT_RADIO_AVAILABLE = 1001;
    private static final int EVENT_RADIO_STATE_CHANGED = 1012;
    private static final int EVENT_RSU_SIM_LOCK_CHANGED = 1029;
    private static final int GSM_PHB_NOT_READY = 0;
    private static final int GSM_PHB_READY = 1;
    private static final String KEY_SIM_ID = "SIM_ID";
    protected static final String LOG_TAG_EX = "MtkSIMRecords";
    private static final int MTK_SIM_RECORD_EVENT_BASE = 1000;
    private static final String SIMRECORD_PROPERTY_RIL_PHB_READY = "vendor.gsm.sim.ril.phbready";
    private String[] SIM_RECORDS_PROPERTY_MCC_MNC;
    String cphsOnsl;
    String cphsOnss;
    private int efLanguageToLoad;
    private boolean hasQueryIccId;
    private int iccIdQueryState;
    private boolean isDispose;
    private boolean isValidMBI;
    private ArrayList<Record5gopl> m5gsOperatorList;
    private byte[] mEfELP;
    private ArrayList<byte[]> mEfGbanlList;
    private byte[] mEfPsismsc;
    private byte[] mEfRat;
    private boolean mEfRatLoaded;
    private byte[] mEfSST;
    private byte[] mEfSmsp;
    private String mGbabp;
    private String[] mGbanl;
    private boolean mIsPhbEfResetDone;
    private String mMenuTitleFromEf;
    private IMtkSimHandler mMtkSimHandler;
    protected String mOldMccMnc;
    private String mOldOperatorDefaultName;
    private ArrayList<OplRecord> mOperatorList;
    private boolean mPendingPhbNotify;
    private boolean mPhbReady;
    private PhbBroadCastReceiver mPhbReceiver;
    private boolean mPhbWaitSub;
    private Phone mPhone;
    private ArrayList<OperatorName> mPnnNetworkNames;
    private boolean mReadingOpl;
    private String mSimImsi;
    private BroadcastReceiver mSimReceiver;
    protected int mSlotId;
    private String mSpNameInEfSpn;
    private MtkSpnOverride mSpnOverride;
    private int mSubId;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory;
    private UiccCard mUiccCard;
    private UiccController mUiccController;
    protected static final boolean ENGDEBUG = TextUtils.equals(Build.TYPE, "eng");
    protected static final boolean USERDEBUG = TextUtils.equals(Build.TYPE, DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    private static final String[] LANGUAGE_CODE_FOR_LP = {"de", "en", "it", "fr", "es", "nl", "sv", "da", "pt", "fi", "no", "el", "tr", "hu", "pl", "", "cs", "he", "ar", "ru", "is", "", "", "", "", "", "", "", "", "", "", ""};
    static final String[] SIMRECORD_PROPERTY_RIL_PUK1 = {"vendor.gsm.sim.retry.puk1", "vendor.gsm.sim.retry.puk1.2", "vendor.gsm.sim.retry.puk1.3", "vendor.gsm.sim.retry.puk1.4"};
    private static final int[] simServiceNumber = {1, 17, 51, 52, 54, 55, 56, 0, 12, 3, 7, 0, 0};
    private static final int[] usimServiceNumber = {0, 19, 45, 46, 48, 49, 51, 71, 12, 2, 0, 42, 0};

    public static class OperatorName {
        public String sFullName;
        public String sShortName;
    }

    public static class OplRecord {
        public int nMaxLAC;
        public int nMinLAC;
        public int nPnnIndex;
        public String sPlmn;
    }

    private class PhbBroadCastReceiver extends BroadcastReceiver {
        private PhbBroadCastReceiver() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (MtkSIMRecords.this.mPhbWaitSub && action.equals("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED")) {
                MtkSIMRecords.this.mtkLog("SubBroadCastReceiver receive ACTION_SUBINFO_RECORD_UPDATED");
                MtkSIMRecords.this.mPhbWaitSub = false;
                MtkSIMRecords mtkSIMRecords = MtkSIMRecords.this;
                mtkSIMRecords.broadcastPhbStateChangedIntent(mtkSIMRecords.mPhbReady, false);
                return;
            }
            if (!action.equals("android.intent.action.RADIO_TECHNOLOGY")) {
                if (intent.getAction().equals("android.intent.action.BOOT_COMPLETED")) {
                    MtkSIMRecords.this.mtkLog("[onReceive] ACTION_BOOT_COMPLETED mPendingPhbNotify : " + MtkSIMRecords.this.mPendingPhbNotify);
                    if (MtkSIMRecords.this.mPendingPhbNotify) {
                        MtkSIMRecords mtkSIMRecords2 = MtkSIMRecords.this;
                        mtkSIMRecords2.broadcastPhbStateChangedIntent(mtkSIMRecords2.isPhbReady(), false);
                        MtkSIMRecords.this.mPendingPhbNotify = false;
                        return;
                    }
                    return;
                }
                return;
            }
            int intExtra = intent.getIntExtra("phone", -1);
            MtkSIMRecords.this.mtkLog("[ACTION_RADIO_TECHNOLOGY_CHANGED] phoneid : " + intExtra);
            if (MtkSIMRecords.this.mParentApp == null || MtkSIMRecords.this.mParentApp.getPhoneId() != intExtra) {
                return;
            }
            String stringExtra = intent.getStringExtra("phoneName");
            int intExtra2 = intent.getIntExtra("subscription", -1);
            MtkSIMRecords.this.mtkLog("[ACTION_RADIO_TECHNOLOGY_CHANGED] activePhoneName : " + stringExtra + " | subid : " + intExtra2);
            if ("CDMA".equals(stringExtra)) {
                return;
            }
            MtkSIMRecords.this.broadcastPhbStateChangedIntent(false, true);
            MtkSIMRecords mtkSIMRecords3 = MtkSIMRecords.this;
            mtkSIMRecords3.sendMessageDelayed(mtkSIMRecords3.obtainMessage(MtkSIMRecords.EVENT_DELAYED_SEND_PHB_CHANGE), MtkRuimRecords.PHB_DELAY_SEND_TIME);
            MtkSIMRecords.this.mAdnCache.reset();
        }
    }

    private class RebootClickListener implements DialogInterface.OnClickListener {
        private RebootClickListener() {
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            MtkSIMRecords.this.mtkLog("[RSU-SIMLOCK] Unlock Phone onClick");
            ((PowerManager) MtkSIMRecords.this.mContext.getSystemService("power")).reboot("Unlock state changed");
        }
    }

    public static class Record5gopl {
        public int nMaxLAC;
        public int nMinLAC;
        public int nPnnIndex;
        public String sPlmn;
    }

    private class SIMBroadCastReceiver extends BroadcastReceiver {
        private SIMBroadCastReceiver() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("android.intent.action.SIM_STATE_CHANGED")) {
                String stringExtra = intent.getStringExtra(DataSubConstants.EXTRA_MOBILE_DATA_ENABLE_REASON);
                int intExtra = intent.getIntExtra("phone", 0);
                String stringExtra2 = intent.getStringExtra("ss");
                MtkSIMRecords.this.mtkLog("SIM_STATE_CHANGED: phone id = " + intExtra + ",reason = " + stringExtra + ", simState = " + stringExtra2);
                if ("PUK".equals(stringExtra) && intExtra == MtkSIMRecords.this.mSlotId) {
                    String str = SystemProperties.get(MtkSIMRecords.SIMRECORD_PROPERTY_RIL_PUK1[MtkSIMRecords.this.mSlotId], "0");
                    MtkSIMRecords.this.mtkLog("SIM_STATE_CHANGED: strPuk1Count = " + str);
                    MtkSIMRecords.this.mMsisdn = "";
                    MtkSIMRecords.this.mRecordsEventsRegistrants.notifyResult(100);
                }
                if (intExtra == MtkSIMRecords.this.mSlotId) {
                    String telephonyProperty = TelephonyManager.getTelephonyProperty(MtkSIMRecords.this.mSlotId, MtkSIMRecords.SIMRECORD_PROPERTY_RIL_PHB_READY, "false");
                    MtkSIMRecords.this.mtkLog("sim state: " + stringExtra2 + ", mPhbReady: " + MtkSIMRecords.this.mPhbReady + ",strPhbReady: " + telephonyProperty);
                    if ("READY".equals(stringExtra2)) {
                        if (!MtkSIMRecords.this.mPhbReady && telephonyProperty.equals("true")) {
                            MtkSIMRecords.this.mPhbReady = true;
                            MtkSIMRecords mtkSIMRecords = MtkSIMRecords.this;
                            mtkSIMRecords.broadcastPhbStateChangedIntent(mtkSIMRecords.mPhbReady, false);
                        } else if (true == MtkSIMRecords.this.mPhbWaitSub && telephonyProperty.equals("true")) {
                            MtkSIMRecords.this.mtkLog("mPhbWaitSub is " + MtkSIMRecords.this.mPhbWaitSub + ", broadcast if need");
                            MtkSIMRecords.this.mPhbWaitSub = false;
                            MtkSIMRecords mtkSIMRecords2 = MtkSIMRecords.this;
                            mtkSIMRecords2.broadcastPhbStateChangedIntent(mtkSIMRecords2.mPhbReady, false);
                        }
                    }
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MtkSIMRecords(MtkUiccCardApplication mtkUiccCardApplication, Context context, CommandsInterface commandsInterface) {
        super(mtkUiccCardApplication, context, commandsInterface);
        this.mSubId = -1;
        this.mPhbReady = false;
        this.mPhbWaitSub = false;
        this.mIsPhbEfResetDone = false;
        this.mPendingPhbNotify = false;
        this.isValidMBI = false;
        this.mEfRatLoaded = false;
        this.mEfRat = null;
        this.iccIdQueryState = -1;
        this.efLanguageToLoad = 0;
        this.mSimImsi = null;
        this.mEfSST = null;
        this.mEfELP = null;
        this.mEfPsismsc = null;
        this.mEfSmsp = null;
        this.SIM_RECORDS_PROPERTY_MCC_MNC = new String[]{"vendor.gsm.ril.uicc.mccmnc", "vendor.gsm.ril.uicc.mccmnc.1", "vendor.gsm.ril.uicc.mccmnc.2", "vendor.gsm.ril.uicc.mccmnc.3"};
        this.mPnnNetworkNames = null;
        this.mOperatorList = null;
        this.m5gsOperatorList = null;
        this.mSpNameInEfSpn = null;
        this.mMenuTitleFromEf = null;
        this.isDispose = false;
        this.mSpnOverride = null;
        this.mTelephonyCustomizationFactory = null;
        this.mMtkSimHandler = null;
        this.mOldMccMnc = "";
        this.mOldOperatorDefaultName = null;
        this.mReadingOpl = false;
        mtkLog("MtkSIMRecords constructor");
        this.mSlotId = mtkUiccCardApplication.getPhoneId();
        UiccController uiccController = UiccController.getInstance();
        this.mUiccController = uiccController;
        this.mUiccCard = uiccController.getUiccCard(this.mSlotId);
        mtkLog("mUiccCard Instance = " + this.mUiccCard);
        this.mPhone = PhoneFactory.getPhone(mtkUiccCardApplication.getPhoneId());
        this.mSpnOverride = MtkSpnOverride.getInstance();
        this.cphsOnsl = null;
        this.cphsOnss = null;
        this.hasQueryIccId = false;
        this.mCi.registerForCallForwardingInfo(this, EVENT_CFU_IND, null);
        this.mCi.registerForRadioStateChanged(this, EVENT_RADIO_STATE_CHANGED, (Object) null);
        this.mCi.registerForAvailable(this, 1001, (Object) null);
        this.mCi.registerForImsiRefreshDone(this, EVENT_IMSI_REFRESH_QUERY, null);
        OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(context);
        this.mTelephonyCustomizationFactory = opFactory;
        if (opFactory != null) {
            IMtkSimHandler iMtkSimHandlerMakeMtkSimHandler = opFactory.makeMtkSimHandler(context, commandsInterface);
            this.mMtkSimHandler = iMtkSimHandlerMakeMtkSimHandler;
            iMtkSimHandlerMakeMtkSimHandler.setPhoneId(this.mSlotId);
        }
        this.mSimReceiver = new SIMBroadCastReceiver();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        this.mContext.registerReceiver(this.mSimReceiver, intentFilter);
        this.mAdnCache = new MtkAdnRecordCache(this.mFh, commandsInterface, mtkUiccCardApplication);
        this.mCi.registerForPhbReady(this, EVENT_PHB_READY, null);
        this.mPhbReceiver = new PhbBroadCastReceiver();
        IntentFilter intentFilter2 = new IntentFilter();
        intentFilter2.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        intentFilter2.addAction("android.intent.action.RADIO_TECHNOLOGY");
        intentFilter2.addAction("android.intent.action.BOOT_COMPLETED");
        this.mContext.registerReceiver(this.mPhbReceiver, intentFilter2);
        mtkLog("SIMRecords updateIccRecords");
        Phone phone = this.mPhone;
        if (phone != null && phone.getIccPhoneBookInterfaceManager() != null) {
            this.mPhone.getIccPhoneBookInterfaceManager().updateIccRecords(this);
        }
        if (isPhbReady()) {
            mtkLog("Phonebook is ready.");
            this.mPhbReady = true;
            broadcastPhbStateChangedIntent(true, false);
        }
        this.mCi.registerForRsuSimLockChanged(this, EVENT_RSU_SIM_LOCK_CHANGED, null);
    }

    private void boradcastEfRatContentNotify(int i) {
        Intent intent = new Intent("com.mediatek.phone.ACTION_EF_RAT_CONTENT_NOTIFY");
        intent.putExtra("ef_rat_status", i);
        intent.putExtra("slot", this.mSlotId);
        mtkLog("broadCast intent ACTION_EF_RAT_CONTENT_NOTIFY: item: " + i + ", simId: " + this.mSlotId);
        ActivityManagerNative.broadcastStickyIntent(intent, "android.permission.READ_PHONE_STATE", -1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void broadcastPhbStateChangedIntent(boolean z, boolean z2) {
        Phone phone = this.mPhone;
        if (phone != null && phone.getPhoneType() != 1 && (!this.isDispose || z)) {
            this.mPendingPhbNotify = true;
            mtkLog("broadcastPhbStateChangedIntent, No active Phone, will notfiy when dispose");
            return;
        }
        mtkLog("broadcastPhbStateChangedIntent, mPhbReady " + this.mPhbReady + ", " + this.mSubId);
        if (z) {
            this.mSubId = MtkSubscriptionManager.getSubIdUsingPhoneId(this.mSlotId);
            int simStateForSlotIndex = SubscriptionController.getInstance().getSimStateForSlotIndex(this.mSlotId);
            if (this.mSubId <= 0 || simStateForSlotIndex == 0) {
                mtkLog("broadcastPhbStateChangedIntent, mSubId " + this.mSubId + ", sim state " + simStateForSlotIndex);
                this.mPhbWaitSub = true;
                return;
            }
        } else {
            if (z2 && this.mPhbReady) {
                this.mSubId = MtkSubscriptionManager.getSubIdUsingPhoneId(this.mSlotId);
            }
            if (this.mSubId <= 0) {
                mtkLog("broadcastPhbStateChangedIntent, isReady == false and mSubId <= 0");
                return;
            }
        }
        boolean zIsUserUnlocked = ((UserManager) this.mContext.getSystemService(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)).isUserUnlocked();
        if (!SystemProperties.get("sys.boot_completed").equals("1") || !zIsUserUnlocked) {
            mtkLog("broadcastPhbStateChangedIntent, boot not completed, isUnlock:" + zIsUserUnlocked);
            this.mPendingPhbNotify = true;
            return;
        }
        Intent intent = new Intent("mediatek.intent.action.PHB_STATE_CHANGED");
        intent.putExtra("ready", z);
        intent.putExtra("subscription", this.mSubId);
        mtkLog("Broadcasting intent ACTION_PHB_STATE_CHANGED " + z + " sub id " + this.mSubId + " phoneId " + this.mParentApp.getPhoneId());
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
        Intent intent2 = new Intent("mediatek.intent.action.PHB_STATE_CHANGED");
        intent2.putExtra("ready", z);
        intent2.putExtra("subscription", this.mSubId);
        intent2.setPackage("com.mediatek.simprocessor");
        mtkLog("Broadcasting ACTION_PHB_STATE_CHANGED to package: simprocessor");
        this.mContext.sendBroadcastAsUser(intent2, UserHandle.ALL);
        if (z) {
            return;
        }
        this.mSubId = -1;
    }

    public static String convertMccmncAsAospConfig(String str) {
        String strSubstring = null;
        if (str == null || !(str == null || str.length() == 6)) {
            strSubstring = str;
        } else {
            for (String str2 : MCCMNC_CODES_HAVING_3DIGITS_MNC) {
                if (str2.equals(str)) {
                    strSubstring = str;
                    break;
                }
            }
            if (strSubstring == null) {
                strSubstring = str.substring(0, 5);
            }
        }
        Rlog.d(LOG_TAG_EX, "convertMccmncAsAospConfig: mccmnc:" + str + " result:" + strSubstring);
        return strSubstring;
    }

    private String convertNumberIfContainsPrefix(String str) {
        if (str == null) {
            return str;
        }
        if (!str.startsWith("tel:") && !str.startsWith("sip:") && !str.startsWith("sips:")) {
            return str;
        }
        String strSubstring = str.substring(str.indexOf(":") + 1);
        Rlog.d(LOG_TAG, "convertNumberIfContainsPrefix: dialNumber = " + str);
        return strSubstring;
    }

    private void fetchCPHSOns() {
        mtkLog("fetchCPHSOns()");
        this.cphsOnsl = null;
        this.cphsOnss = null;
        this.mFh.loadEFTransparent(28436, obtainMessage(1009));
        this.mFh.loadEFTransparent(28440, obtainMessage(1010));
    }

    private void fetchGbaRecords() {
        mtkLog("fetchGbaRecords");
        if (this.mUsimServiceTable == null || this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_SIM || !this.mUsimServiceTable.isAvailable(UsimServiceTable.UsimService.GBA)) {
            return;
        }
        mtkLog("GBA support.");
        this.mFh.loadEFTransparent(MtkIccConstants.EF_ISIM_GBABP, obtainMessage(EVENT_GET_GBABP_DONE));
        this.mFh.loadEFLinearFixedAll(MtkIccConstants.EF_ISIM_GBANL, obtainMessage(EVENT_GET_GBANL_DONE));
    }

    private void fetchMbiRecords() {
        mtkLog("fetchMbiRecords");
        if (this.mUsimServiceTable == null || this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_SIM || !this.mUsimServiceTable.isAvailable(UsimServiceTable.UsimService.MBDN)) {
            return;
        }
        mtkLog("MBI/MBDN support.");
        this.mFh.loadEFLinearFixed(28617, 1, obtainMessage(5));
        this.mRecordsToLoad++;
    }

    private void fetchMwisRecords() {
        mtkLog("fetchMwisRecords");
        if (this.mUsimServiceTable == null || this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_SIM || !this.mUsimServiceTable.isAvailable(UsimServiceTable.UsimService.MWI_STATUS)) {
            return;
        }
        mtkLog("MWIS support.");
        this.mFh.loadEFLinearFixed(28618, 1, obtainMessage(7));
        this.mRecordsToLoad++;
    }

    private void fetchOpl5g() {
        this.mFh.loadEFLinearFixedAll(MtkIccConstants.EF_OPL5G, obtainMessage(EVENT_GET_ALL_OPL5G_DONE));
    }

    private void fetchPnnAndOpl() {
        mtkLog("fetchPnnAndOpl()");
        boolean z = false;
        this.mReadingOpl = false;
        if (this.mEfSST != null) {
            if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM) {
                byte[] bArr = this.mEfSST;
                if (bArr.length >= 6) {
                    z = (bArr[5] & PplControlData.STATUS_WIPE_REQUESTED) == 16;
                    if (z) {
                        this.mReadingOpl = (this.mEfSST[5] & 32) == 32;
                    }
                }
            } else {
                byte[] bArr2 = this.mEfSST;
                if (bArr2.length >= 13) {
                    z = (bArr2[12] & 48) == 48;
                    if (z) {
                        this.mReadingOpl = (this.mEfSST[12] & 192) == 192;
                    }
                }
            }
        }
        mtkLog("bPnnActive = " + z + ", bOplActive = " + this.mReadingOpl);
        if (z) {
            this.mFh.loadEFLinearFixedAll(28613, obtainMessage(EVENT_GET_ALL_PNN_DONE));
            if (this.mReadingOpl) {
                this.mFh.loadEFLinearFixedAll(28614, obtainMessage(1008));
            }
        }
    }

    private void fetchRatBalancing() {
        if (!isFetchRatBalancingAndEnsFile(this.mSlotId)) {
            mtkLog("Not support MTK_RAT_BALANCING");
            return;
        }
        if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM) {
            mtkLog("start loading EF_RAT");
            this.mFh.loadEFTransparent(MtkIccConstants.EF_RAT, obtainMessage(EVENT_GET_RAT_DONE));
        } else {
            if (this.mParentApp.getType() != IccCardApplicationStatus.AppType.APPTYPE_SIM) {
                mtkLog("loading EF_RAT fail, because of +EUSIM");
                return;
            }
            mtkLog("loading EF_RAT fail, because of SIM");
            this.mEfRatLoaded = false;
            this.mEfRat = null;
            boradcastEfRatContentNotify(512);
        }
    }

    private void fetchSmsp() {
        mtkLog("fetchSmsp()");
        if (this.mUsimServiceTable == null || this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_SIM || !this.mUsimServiceTable.isAvailable(UsimServiceTable.UsimService.SM_SERVICE_PARAMS)) {
            return;
        }
        mtkLog("SMSP support.");
        this.mFh.loadEFLinearFixed(MtkIccConstants.EF_SMSP, 1, obtainMessage(EVENT_GET_SMSP_DONE));
        if (this.mUsimServiceTable.isAvailable(UsimServiceTable.UsimService.SM_OVER_IP)) {
            mtkLog("PSISMSP support.");
            this.mFh.loadEFLinearFixed(MtkIccConstants.EF_PSISMSC, 1, obtainMessage(EVENT_GET_PSISMSC_DONE));
        }
    }

    private void fetchSpn() {
        mtkLog("fetchSpn()");
        if (getSIMServiceStatus(IccServiceInfo.IccService.SPN) != IccServiceInfo.IccServiceStatus.ACTIVATED) {
            mtkLog("[SIMRecords] SPN service is not activated  ");
            return;
        }
        setServiceProviderName(null);
        this.mFh.loadEFTransparent(28486, obtainMessage(12));
        this.mRecordsToLoad++;
    }

    private String findBestLanguage(byte[] bArr) {
        String[] locales = this.mContext.getAssets().getLocales();
        if (bArr == null || locales == null) {
            return null;
        }
        for (int i = 0; i + 1 < bArr.length; i += 2) {
            try {
                String str = new String(bArr, i, 2, "ISO-8859-1");
                mtkLog("languages from sim = " + str);
                for (int i2 = 0; i2 < locales.length; i2++) {
                    if (locales[i2] != null && locales[i2].length() >= 2 && locales[i2].substring(0, 2).equalsIgnoreCase(str)) {
                        return str;
                    }
                }
                if (0 != 0) {
                    break;
                }
            } catch (UnsupportedEncodingException e) {
                mtkLog("Failed to parse USIM language records" + e);
            }
        }
        return null;
    }

    private boolean isMatchingPlmnForEfOpl(String str, String str2) {
        if (str == null || str.equals("") || str2 == null || str2.equals("")) {
            return false;
        }
        mtkLog("isMatchingPlmnForEfOpl(): simPlmn = " + str + ", bcchPlmn = " + str2);
        int length = str.length();
        int length2 = str2.length();
        if (length < 5 || length2 < 5) {
            return false;
        }
        for (int i = 0; i < 5; i++) {
            if (str.charAt(i) != 'd' && str.charAt(i) != str2.charAt(i)) {
                return false;
            }
        }
        if (length == 6 && length2 == 6) {
            return str.charAt(5) == 'd' || str.charAt(5) == str2.charAt(5);
        }
        if (length2 != 6 || str2.charAt(5) == '0' || str2.charAt(5) == 'd') {
            return length != 6 || str.charAt(5) == '0' || str.charAt(5) == 'd';
        }
        return false;
    }

    private boolean isPlmnEqualsSimNumeric(String str) {
        String operatorNumeric = getOperatorNumeric();
        if (str == null) {
            return false;
        }
        if (operatorNumeric != null && !operatorNumeric.equals("")) {
            if (str.equals(operatorNumeric)) {
                return true;
            }
            return str.length() == 5 && operatorNumeric.length() == 6 && str.equals(operatorNumeric.substring(0, 5));
        }
        mtkLog("isPlmnEqualsSimNumeric: getOperatorNumeric error: " + operatorNumeric);
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void mtkLog(String str) {
        Rlog.d(LOG_TAG_EX, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")");
    }

    private void mtkLoge(String str) {
        Rlog.e(LOG_TAG_EX, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")");
    }

    private void mtkLogv(String str) {
        Rlog.v(LOG_TAG_EX, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")");
    }

    private void mtkLogw(String str, Throwable th) {
        Rlog.w(LOG_TAG_EX, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")", th);
    }

    private void parseEFopl(ArrayList arrayList) {
        int size = arrayList.size();
        mtkLog("parseEFopl(): opl has " + size + " records");
        this.mOperatorList = new ArrayList<>(size);
        for (int i = 0; i < size; i++) {
            byte[] bArr = (byte[]) arrayList.get(i);
            OplRecord oplRecord = new OplRecord();
            oplRecord.sPlmn = MtkIccUtils.parsePlmnToStringForEfOpl(bArr, 0, 3);
            oplRecord.nMinLAC = Integer.parseInt(IccUtils.bytesToHexString(new byte[]{bArr[3], bArr[4]}), 16);
            oplRecord.nMaxLAC = Integer.parseInt(IccUtils.bytesToHexString(new byte[]{bArr[5], bArr[6]}), 16);
            oplRecord.nPnnIndex = Integer.parseInt(IccUtils.bytesToHexString(new byte[]{bArr[7]}), 16);
            mtkLog("parseEFopl(): record=" + i + " content=" + IccUtils.bytesToHexString(bArr) + " sPlmn=" + oplRecord.sPlmn + " nMinLAC=" + oplRecord.nMinLAC + " nMaxLAC=" + oplRecord.nMaxLAC + " nPnnIndex=" + oplRecord.nPnnIndex);
            this.mOperatorList.add(oplRecord);
        }
    }

    private void parseEFopl5g(ArrayList arrayList) {
        int size = arrayList.size();
        mtkLog("parseEFopl5g(): opl has " + size + " records");
        this.m5gsOperatorList = new ArrayList<>(size);
        for (int i = 0; i < size; i++) {
            byte[] bArr = (byte[]) arrayList.get(i);
            Record5gopl record5gopl = new Record5gopl();
            record5gopl.sPlmn = MtkIccUtils.parsePlmnToStringForEfOpl(bArr, 0, 3);
            record5gopl.nMinLAC = Integer.parseInt(IccUtils.bytesToHexString(new byte[]{bArr[3], bArr[4], bArr[5]}), 16);
            record5gopl.nMaxLAC = Integer.parseInt(IccUtils.bytesToHexString(new byte[]{bArr[6], bArr[7], bArr[8]}), 16);
            record5gopl.nPnnIndex = Integer.parseInt(IccUtils.bytesToHexString(new byte[]{bArr[9]}), 16);
            mtkLog("parseEFopl5g(): record=" + i + " content=" + IccUtils.bytesToHexString(bArr) + " sPlmn=" + record5gopl.sPlmn + " nMinLAC=" + record5gopl.nMinLAC + " nMaxLAC=" + record5gopl.nMaxLAC + " nPnnIndex=" + record5gopl.nPnnIndex);
            this.m5gsOperatorList.add(record5gopl);
        }
    }

    private void parseEFpnn(ArrayList arrayList) {
        int size = arrayList.size();
        mtkLog("parseEFpnn(): pnn has " + size + " records");
        this.mPnnNetworkNames = new ArrayList<>(size);
        for (int i = 0; i < size; i++) {
            byte[] bArr = (byte[]) arrayList.get(i);
            mtkLog("parseEFpnn(): pnn record " + i + " content is " + IccUtils.bytesToHexString(bArr));
            SimTlv simTlv = new SimTlv(bArr, 0, bArr.length);
            OperatorName operatorName = new OperatorName();
            while (simTlv.isValidObject()) {
                if (simTlv.getTag() == 67) {
                    operatorName.sFullName = IccUtils.networkNameToString(simTlv.getData(), 0, simTlv.getData().length);
                    mtkLog("parseEFpnn(): pnn sFullName is " + operatorName.sFullName);
                } else if (simTlv.getTag() == 69) {
                    operatorName.sShortName = IccUtils.networkNameToString(simTlv.getData(), 0, simTlv.getData().length);
                    mtkLog("parseEFpnn(): pnn sShortName is " + operatorName.sShortName);
                }
                simTlv.nextObject();
            }
            this.mPnnNetworkNames.add(operatorName);
        }
    }

    private void processEfCspPlmnModeBitUrc(int i) {
        mtkLog("processEfCspPlmnModeBitUrc: bit = " + i);
        if (i == 0) {
            this.mCspPlmnEnabled = false;
        } else {
            this.mCspPlmnEnabled = true;
        }
        Intent intent = new Intent("com.mediatek.phone.ACTION_EF_CSP_CONTENT_NOTIFY");
        intent.putExtra("plmn_mode_bit", i);
        intent.putExtra("slot", this.mSlotId);
        mtkLog("broadCast intent ACTION_EF_CSP_CONTENT_NOTIFY, EXTRA_PLMN_MODE_BIT: " + i);
        ActivityManagerNative.broadcastStickyIntent(intent, "android.permission.READ_PHONE_STATE", -1);
    }

    private void setSystemProperty(String str, String str2) {
        String str3;
        if ("vendor.gsm.sim.operator.default-name".equals(str)) {
            if ((this.mOldOperatorDefaultName == null && str2 == null) || ((str3 = this.mOldOperatorDefaultName) != null && str3.equals(str2))) {
                mtkLog("set PROPERTY_ICC_OPERATOR_DEFAULT_NAME same value. val:" + str2);
                return;
            }
            this.mOldOperatorDefaultName = str2;
        }
        setTelephonyProperty(this.mParentApp.getPhoneId(), str, str2);
    }

    private void setTelephonyProperty(int i, String str, String str2) {
        String str3 = "";
        String str4 = SystemProperties.get(str);
        if (str2 == null) {
            str2 = "";
        }
        str2.replace(',', ' ');
        String[] strArrSplit = str4 != null ? str4.split(",") : null;
        if (!SubscriptionManager.isValidPhoneId(i)) {
            mtkLog("setTelephonyProperty: invalid phoneId=" + i + " property=" + str + " value: " + str2 + " prop=" + str4);
            return;
        }
        for (int i2 = 0; i2 < i; i2++) {
            String str5 = "";
            if (strArrSplit != null && i2 < strArrSplit.length) {
                str5 = strArrSplit[i2];
            }
            str3 = str3 + str5 + ",";
        }
        String str6 = str3 + str2;
        if (strArrSplit != null) {
            for (int i3 = i + 1; i3 < strArrSplit.length; i3++) {
                str6 = str6 + "," + strArrSplit[i3];
            }
        }
        int length = str6.length();
        try {
            length = str6.getBytes("utf-8").length;
        } catch (UnsupportedEncodingException e) {
            mtkLog("setTelephonyProperty: utf-8 not supported");
        }
        if (length <= 91) {
            SystemProperties.set(str, str6);
            return;
        }
        mtkLog("setTelephonyProperty: property too long phoneId=" + i + " property=" + str + " value: " + str2 + " propVal=" + str6);
    }

    private void updateConfiguration(String str) {
        if (TextUtils.isEmpty(str) || this.mOldMccMnc.equals(str)) {
            mtkLog("Do not update configuration if mcc mnc no change.");
        } else {
            this.mOldMccMnc = str;
            MccTable.updateMccMncConfiguration(this.mContext, this.mOldMccMnc);
        }
    }

    private void updatePHBStatus(int i, boolean z) {
        mtkLog("[PHBStatus] status : " + i + " | isSimLocked : " + z + " | mPhbReady : " + this.mPhbReady);
        boolean z2 = SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild") ? false : z;
        if (i != 1) {
            if (i == 0 && this.mPhbReady) {
                this.mAdnCache.reset();
                this.mPhbReady = false;
                broadcastPhbStateChangedIntent(false, false);
                return;
            }
            return;
        }
        if (z2) {
            mtkLog("phb ready but sim is not ready.");
        } else {
            if (this.mPhbReady) {
                return;
            }
            this.mPhbReady = true;
            broadcastPhbStateChangedIntent(true, false);
        }
    }

    protected boolean checkCdma3gCard() {
        boolean z = MtkIccUtilsEx.checkCdma3gCard(this.mSlotId) <= 0;
        mtkLog("checkCdma3gCard result: " + z);
        return z;
    }

    public boolean checkEfCfis() {
        boolean z = this.mEfCfis != null && this.mEfCfis.length == 16;
        StringBuilder sb = new StringBuilder();
        sb.append("mEfCfis is null? = ");
        sb.append(this.mEfCfis == null);
        mtkLog(sb.toString());
        return z;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void dispose() {
        mtkLog("Disposing MtkSIMRecords this=" + this);
        this.isDispose = true;
        IMtkSimHandler iMtkSimHandler = this.mMtkSimHandler;
        if (iMtkSimHandler != null) {
            iMtkSimHandler.dispose();
        }
        this.mCi.unregisterForCallForwardingInfo(this);
        this.mCi.unregisterForRadioStateChanged(this);
        this.mContext.unregisterReceiver(this.mSimReceiver);
        this.mIccId = null;
        this.mImsi = null;
        this.mCi.unregisterForPhbReady(this);
        this.mContext.unregisterReceiver(this.mPhbReceiver);
        this.mPhbWaitSub = false;
        if (this.mPhbReady || this.mPendingPhbNotify) {
            mtkLog("MtkSIMRecords Disposing  set PHB unready mPendingPhbNotify=" + this.mPendingPhbNotify + ", mPhbReady=" + this.mPhbReady);
            this.mPhbReady = false;
            this.mPendingPhbNotify = false;
            broadcastPhbStateChangedIntent(false, false);
        }
        this.mCallForwardingStatus = 0;
        new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.uicc.MtkSIMRecords.1
            @Override // java.lang.Runnable
            public void run() {
                MtkSIMRecords.this.mPhone.notifyCallForwardingIndicatorWithoutCheckSimState();
            }
        }).start();
        this.mCi.unregisterForRsuSimLockChanged(this);
        super.dispose();
    }

    protected void fetchSimRecords() {
        super.fetchSimRecords();
    }

    public String get5GEonsIfExist(String str, int i, boolean z) {
        ArrayList<OperatorName> arrayList;
        StringBuilder sb = new StringBuilder(Integer.toHexString(i));
        if (sb.length() == 1 || sb.length() == 2) {
            sb.setCharAt(0, '*');
        } else {
            for (int i2 = 0; i2 < sb.length() / 2; i2++) {
                sb.setCharAt(i2, '*');
            }
        }
        mtkLog("EONS get5GEonsIfExist: plmn is " + str + " nLac is " + sb.toString() + " bLongNameRequired: " + z);
        if (str == null || (arrayList = this.mPnnNetworkNames) == null || arrayList.size() == 0) {
            return null;
        }
        int i3 = -1;
        boolean zIsPlmnEqualsSimNumeric = isPlmnEqualsSimNumeric(str);
        if (this.m5gsOperatorList != null) {
            int i4 = 0;
            while (true) {
                if (i4 < this.m5gsOperatorList.size()) {
                    Record5gopl record5gopl = this.m5gsOperatorList.get(i4);
                    if (!isMatchingPlmnForEfOpl(record5gopl.sPlmn, str) || (!(record5gopl.nMinLAC == 0 && record5gopl.nMaxLAC == 16777214) && (record5gopl.nMinLAC > i || record5gopl.nMaxLAC < i))) {
                        i4++;
                    } else {
                        mtkLog("get5GEonsIfExist: find it in EF_5GOPL");
                        if (record5gopl.nPnnIndex == 0) {
                            mtkLog("get5GEonsIfExist: oplRec.nPnnIndex is 0, from other sources");
                            return null;
                        }
                        i3 = record5gopl.nPnnIndex;
                    }
                }
            }
        } else {
            if (!zIsPlmnEqualsSimNumeric) {
                mtkLog("get5GEonsIfExist: Plmn is not HPLMN and no mOperatorList, return null");
                return null;
            }
            mtkLog("get5GEonsIfExist: Plmn is HPLMN, return PNN's first record");
            i3 = 1;
        }
        if (i3 == -1 && zIsPlmnEqualsSimNumeric && this.m5gsOperatorList.size() == 1) {
            mtkLog("get5GEonsIfExist: not find it in EF_5GOPL, but Plmn is HPLMN, return PNN's first record");
            i3 = 1;
        } else if (i3 > 1 && i3 > this.mPnnNetworkNames.size() && zIsPlmnEqualsSimNumeric) {
            mtkLog("get5GEonsIfExist: find it in EF_5GOPL, but index in EF_5GOPL > EF_PNN list length & Plmn is HPLMN, return PNN's first record");
            i3 = 1;
        } else if (i3 > 1 && i3 > this.mPnnNetworkNames.size() && !zIsPlmnEqualsSimNumeric) {
            mtkLog("get5GEonsIfExist: find it in EF_5GOPL, but index in EF_5GOPL > EF_PNN list length & Plmn is not HPLMN, return PNN's first record");
            i3 = -1;
        }
        String str2 = null;
        if (i3 >= 1) {
            OperatorName operatorName = this.mPnnNetworkNames.get(i3 - 1);
            if (z) {
                if (operatorName.sFullName != null) {
                    str2 = new String(operatorName.sFullName);
                } else if (operatorName.sShortName != null) {
                    str2 = new String(operatorName.sShortName);
                }
            } else if (!z) {
                if (operatorName.sShortName != null) {
                    str2 = new String(operatorName.sShortName);
                } else if (operatorName.sFullName != null) {
                    str2 = new String(operatorName.sFullName);
                }
            }
        }
        mtkLog("get5GEonsIfExist: sEons is " + str2);
        return str2;
    }

    public String getEfGbabp() {
        mtkLog("GBABP = " + this.mGbabp);
        return this.mGbabp;
    }

    public byte[] getEfPsismsc() {
        return this.mEfPsismsc;
    }

    public int getEfRatBalancing() {
        StringBuilder sb = new StringBuilder();
        sb.append("getEfRatBalancing: iccCardType = ");
        sb.append(this.mParentApp.getType());
        sb.append(", mEfRatLoaded = ");
        sb.append(this.mEfRatLoaded);
        sb.append(", mEfRat is null = ");
        sb.append(this.mEfRat == null);
        mtkLog(sb.toString());
        return (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM && this.mEfRatLoaded && this.mEfRat == null) ? 256 : 512;
    }

    public byte[] getEfSmsp() {
        return this.mEfSmsp;
    }

    public String getEonsIfExist(String str, int i, boolean z) {
        ArrayList<OperatorName> arrayList;
        StringBuilder sb = new StringBuilder(Integer.toHexString(i));
        if (sb.length() == 1 || sb.length() == 2) {
            sb.setCharAt(0, '*');
        } else {
            for (int i2 = 0; i2 < sb.length() / 2; i2++) {
                sb.setCharAt(i2, '*');
            }
        }
        mtkLog("EONS getEonsIfExist: plmn is " + str + " nLac is " + sb.toString() + " bLongNameRequired: " + z);
        if (str == null || (arrayList = this.mPnnNetworkNames) == null || arrayList.size() == 0) {
            return null;
        }
        int i3 = -1;
        boolean zIsPlmnEqualsSimNumeric = isPlmnEqualsSimNumeric(str);
        if (this.mOperatorList != null) {
            int i4 = 0;
            while (true) {
                if (i4 < this.mOperatorList.size()) {
                    OplRecord oplRecord = this.mOperatorList.get(i4);
                    if (!isMatchingPlmnForEfOpl(oplRecord.sPlmn, str) || (!(oplRecord.nMinLAC == 0 && oplRecord.nMaxLAC == 65534) && (oplRecord.nMinLAC > i || oplRecord.nMaxLAC < i))) {
                        i4++;
                    } else {
                        mtkLog("getEonsIfExist: find it in EF_OPL");
                        if (oplRecord.nPnnIndex == 0) {
                            mtkLog("getEonsIfExist: oplRec.nPnnIndex is 0, from other sources");
                            return null;
                        }
                        i3 = oplRecord.nPnnIndex;
                    }
                }
            }
        } else {
            if (!zIsPlmnEqualsSimNumeric) {
                mtkLog("getEonsIfExist: Plmn is not HPLMN and no mOperatorList, return null");
                return null;
            }
            mtkLog("getEonsIfExist: Plmn is HPLMN, return PNN's first record");
            i3 = 1;
        }
        if (i3 == -1 && zIsPlmnEqualsSimNumeric && this.mOperatorList.size() == 1) {
            mtkLog("getEonsIfExist: not find it in EF_OPL, but Plmn is HPLMN, return PNN's first record");
            i3 = 1;
        } else if (i3 > 1 && i3 > this.mPnnNetworkNames.size() && zIsPlmnEqualsSimNumeric) {
            mtkLog("getEonsIfExist: find it in EF_OPL, but index in EF_OPL > EF_PNN list length & Plmn is HPLMN, return PNN's first record");
            i3 = 1;
        } else if (i3 > 1 && i3 > this.mPnnNetworkNames.size() && !zIsPlmnEqualsSimNumeric) {
            mtkLog("getEonsIfExist: find it in EF_OPL, but index in EF_OPL > EF_PNN list length & Plmn is not HPLMN, return PNN's first record");
            i3 = -1;
        }
        String str2 = null;
        if (i3 >= 1) {
            OperatorName operatorName = this.mPnnNetworkNames.get(i3 - 1);
            if (z) {
                if (operatorName.sFullName != null) {
                    str2 = new String(operatorName.sFullName);
                } else if (operatorName.sShortName != null) {
                    str2 = new String(operatorName.sShortName);
                }
            } else if (!z) {
                if (operatorName.sShortName != null) {
                    str2 = new String(operatorName.sShortName);
                } else if (operatorName.sFullName != null) {
                    str2 = new String(operatorName.sFullName);
                }
            }
        }
        mtkLog("getEonsIfExist: sEons is " + str2);
        return str2;
    }

    public String getFirstFullNameInEfPnn() {
        ArrayList<OperatorName> arrayList = this.mPnnNetworkNames;
        if (arrayList == null || arrayList.size() == 0) {
            mtkLog("getFirstFullNameInEfPnn(): empty");
            return null;
        }
        OperatorName operatorName = this.mPnnNetworkNames.get(0);
        mtkLog("getFirstFullNameInEfPnn(): first fullname: " + operatorName.sFullName);
        if (operatorName.sFullName != null) {
            return new String(operatorName.sFullName);
        }
        return null;
    }

    public String getMenuTitleFromEf() {
        return this.mMenuTitleFromEf;
    }

    public int getMncLength() {
        mtkLog("mncLength = " + this.mMncLength);
        return this.mMncLength;
    }

    public String getMvnoMatchType() {
        String imsi = getIMSI();
        String spNameInEfSpn = getSpNameInEfSpn();
        String firstFullNameInEfPnn = getFirstFullNameInEfPnn();
        String gid1 = getGid1();
        String operatorNumeric = getOperatorNumeric();
        if (USERDEBUG) {
            mtkLog("getMvnoMatchType(): imsi = ***, mccmnc = " + operatorNumeric + ", spn = " + spNameInEfSpn);
        } else {
            mtkLog("getMvnoMatchType(): imsi = " + imsi + ", mccmnc = " + operatorNumeric + ", spn = " + spNameInEfSpn);
        }
        if (MtkSpnOverride.getInstance().getSpnByEfSpn(operatorNumeric, spNameInEfSpn) != null) {
            return "spn";
        }
        if (MtkSpnOverride.getInstance().getSpnByImsi(operatorNumeric, imsi) != null) {
            return "imsi";
        }
        if (MtkSpnOverride.getInstance().getSpnByEfPnn(operatorNumeric, firstFullNameInEfPnn) != null) {
            return "pnn";
        }
        return MtkSpnOverride.getInstance().getSpnByEfGid1(operatorNumeric, gid1) != null ? "gid" : "";
    }

    public String getSIMCPHSOns() {
        String str = this.cphsOnsl;
        return str != null ? str : this.cphsOnss;
    }

    public IccServiceInfo.IccServiceStatus getSIMServiceStatus(IccServiceInfo.IccService iccService) {
        int i;
        int i2;
        int index = iccService.getIndex();
        IccServiceInfo.IccServiceStatus iccServiceStatus = IccServiceInfo.IccServiceStatus.UNKNOWN;
        mtkLog("getSIMServiceStatus enService is " + iccService + " Service Index is " + index);
        if (index >= 0 && index < IccServiceInfo.IccService.UNSUPPORTED_SERVICE.getIndex() && this.mEfSST != null) {
            if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM) {
                int i3 = usimServiceNumber[index];
                if (i3 <= 0) {
                    iccServiceStatus = IccServiceInfo.IccServiceStatus.NOT_EXIST_IN_USIM;
                } else {
                    int i4 = i3 / 8;
                    int i5 = i3 % 8;
                    if (i5 == 0) {
                        i2 = 7;
                        i4--;
                    } else {
                        i2 = i5 - 1;
                    }
                    mtkLog("getSIMServiceStatus USIM nbyte: " + i4 + " nbit: " + i2);
                    byte[] bArr = this.mEfSST;
                    iccServiceStatus = (bArr.length <= i4 || (bArr[i4] & (1 << i2)) <= 0) ? IccServiceInfo.IccServiceStatus.INACTIVATED : IccServiceInfo.IccServiceStatus.ACTIVATED;
                }
            } else {
                int i6 = simServiceNumber[index];
                if (i6 <= 0) {
                    iccServiceStatus = IccServiceInfo.IccServiceStatus.NOT_EXIST_IN_SIM;
                } else {
                    int i7 = i6 / 4;
                    int i8 = i6 % 4;
                    if (i8 == 0) {
                        i = 3;
                        i7--;
                    } else {
                        i = i8 - 1;
                    }
                    int i9 = 2 << (i * 2);
                    mtkLog("getSIMServiceStatus SIM nbyte: " + i7 + " nbit: " + i + " nMask: " + i9);
                    byte[] bArr2 = this.mEfSST;
                    iccServiceStatus = (bArr2.length <= i7 || (bArr2[i7] & i9) != i9) ? IccServiceInfo.IccServiceStatus.INACTIVATED : IccServiceInfo.IccServiceStatus.ACTIVATED;
                }
            }
        }
        mtkLog("getSIMServiceStatus simServiceStatus: " + iccServiceStatus);
        return iccServiceStatus;
    }

    public String getSpNameInEfSpn() {
        mtkLog("getSpNameInEfSpn(): " + this.mSpNameInEfSpn);
        return this.mSpNameInEfSpn;
    }

    public String getVoiceMailNumber() {
        mtkLog("getVoiceMailNumber " + MtkIccUtilsEx.getPrintableString(this.mVoiceMailNum, 8));
        return super.getVoiceMailNumber();
    }

    protected void handleFileUpdate(int i) {
        if (i != 20272) {
            if (i == 28435) {
                this.mRecordsToLoad++;
                mtkLog("SIM Refresh called for EF_CFF_CPHS");
                this.mFh.loadEFTransparent(28435, obtainMessage(24));
                return;
            }
            if (i == 28437) {
                this.mRecordsToLoad++;
                mtkLog("[CSP] SIM Refresh for EF_CSP_CPHS");
                this.mFh.loadEFTransparent(28437, obtainMessage(33));
                return;
            }
            if (i == 28439) {
                this.mRecordsToLoad++;
                new AdnRecordLoader(this.mFh).loadFromEF(28439, 28490, 1, obtainMessage(11));
                return;
            }
            if (i == 28480) {
                this.mRecordsToLoad++;
                mtkLog("SIM Refresh called for EF_MSISDN");
                new AdnRecordLoader(this.mFh).loadFromEF(28480, getExtFromEf(28480), 1, obtainMessage(10));
                return;
            }
            if (i != 28489) {
                if (i == 28615) {
                    this.mRecordsToLoad++;
                    new AdnRecordLoader(this.mFh).loadFromEF(28615, 28616, this.mMailboxIndex, obtainMessage(6));
                    return;
                }
                if (i == 28619) {
                    this.mRecordsToLoad++;
                    mtkLog("SIM Refresh called for EF_CFIS");
                    this.mFh.loadEFLinearFixed(28619, 1, obtainMessage(32));
                    return;
                } else if (i != 28474) {
                    if (i != 28475) {
                        mtkLog("handleFileUpdate default");
                        if (((MtkAdnRecordCache) this.mAdnCache).isUsimPhbEfAndNeedReset(i) && !this.mIsPhbEfResetDone) {
                            this.mIsPhbEfResetDone = true;
                            this.mAdnCache.reset();
                            setPhbReady(false);
                        }
                        this.mLoaded.set(false);
                        fetchSimRecords();
                        return;
                    }
                    mtkLog("SIM Refresh called for EF_FDN");
                    this.mParentApp.queryFdn();
                }
            }
        }
        if (this.mIsPhbEfResetDone) {
            return;
        }
        this.mIsPhbEfResetDone = true;
        this.mAdnCache.reset();
        mtkLog("handleFileUpdate ADN like");
        setPhbReady(false);
    }

    public void handleMessage(Message message) {
        boolean z = false;
        if (this.mDestroyed.get() && shallIgnoreMessage(message)) {
            return;
        }
        try {
            try {
                int i = message.what;
                boolean z2 = true;
                if (i == 5) {
                    z = true;
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    byte[] bArr = (byte[]) asyncResult.result;
                    boolean z3 = false;
                    if (asyncResult.exception == null) {
                        mtkLog("EF_MBI: " + IccUtils.bytesToHexString(bArr));
                        this.mMailboxIndex = bArr[0] & PplMessageManager.Type.INVALID;
                        if (this.mMailboxIndex != 0 && this.mMailboxIndex != 255) {
                            mtkLog("Got valid mailbox number for MBDN");
                            z3 = true;
                            this.isValidMBI = true;
                        }
                    }
                    this.mRecordsToLoad++;
                    if (z3) {
                        mtkLog("EVENT_GET_MBI_DONE, to load EF_MBDN");
                        new AdnRecordLoader(this.mFh).loadFromEF(28615, 28616, this.mMailboxIndex, obtainMessage(6));
                    } else if (isCphsMailboxEnabled()) {
                        mtkLog("EVENT_GET_MBI_DONE, to load EF_MAILBOX_CPHS");
                        new AdnRecordLoader(this.mFh).loadFromEF(28439, 28490, 1, obtainMessage(11));
                    } else {
                        mtkLog("EVENT_GET_MBI_DONE, do nothing");
                        this.mRecordsToLoad--;
                    }
                } else if (i != 10) {
                    if (i == 12) {
                        z = true;
                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                        this.mSpnState = SIMRecords.GetSpnFsmState.IDLE;
                        if (asyncResult2 == null || asyncResult2.exception != null) {
                            mtkLoge("Read EF_SPN fail!");
                            this.mCarrierNameDisplayCondition = 0;
                        } else {
                            byte[] bArr2 = (byte[]) asyncResult2.result;
                            int i2 = bArr2[0] & PplMessageManager.Type.INVALID;
                            this.mCarrierNameDisplayCondition = 0;
                            if ((i2 & 1) == 1) {
                                this.mCarrierNameDisplayCondition |= 1;
                            }
                            if ((i2 & 2) == 0) {
                                this.mCarrierNameDisplayCondition |= 2;
                            }
                            setServiceProviderName(IccUtils.adnStringFieldToString(bArr2, 1, bArr2.length - 1));
                            String serviceProviderName = getServiceProviderName();
                            this.mSpNameInEfSpn = serviceProviderName;
                            if (serviceProviderName != null && serviceProviderName.equals("")) {
                                mtkLog("set mSpNameInEfSpn to null as parsing result is empty");
                                this.mSpNameInEfSpn = null;
                            }
                            mtkLog("Load EF_SPN: " + getServiceProviderName() + " carrierNameDisplayCondition: " + this.mCarrierNameDisplayCondition);
                            this.mTelephonyManager.setSimOperatorNameForPhone(this.mParentApp.getPhoneId(), getServiceProviderName());
                        }
                    } else if (i == 17) {
                        z = true;
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        byte[] bArr3 = (byte[]) asyncResult3.result;
                        if (asyncResult3.exception == null) {
                            this.mUsimServiceTable = new UsimServiceTable(bArr3);
                            mtkLog("SST: " + this.mUsimServiceTable);
                            this.mEfSST = bArr3;
                        }
                    } else if (i == 26) {
                        z = true;
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        if (asyncResult4.exception == null) {
                            this.mCphsInfo = (byte[]) asyncResult4.result;
                            mtkLog("iCPHS: " + IccUtils.bytesToHexString(this.mCphsInfo));
                            if (!this.isValidMBI && isCphsMailboxEnabled()) {
                                this.mRecordsToLoad++;
                                new AdnRecordLoader(this.mFh).loadFromEF(28439, 28490, 1, obtainMessage(11));
                            }
                        }
                    } else if (i == 30) {
                        z = false;
                        AsyncResult asyncResult5 = (AsyncResult) message.obj;
                        if (asyncResult5.exception == null) {
                            this.mMsisdn = this.mNewMsisdn;
                            this.mMsisdnTag = this.mNewMsisdnTag;
                            this.mRecordsEventsRegistrants.notifyResult(100);
                            mtkLog("Success to update EF[MSISDN]");
                        }
                        if (asyncResult5.userObj != null) {
                            AsyncResult.forMessage((Message) asyncResult5.userObj).exception = asyncResult5.exception;
                            ((Message) asyncResult5.userObj).sendToTarget();
                        }
                    } else if (i == 1001) {
                        this.mMsisdn = "";
                        this.mRecordsEventsRegistrants.notifyResult(100);
                    } else if (i == 1005) {
                        mtkLog("[sume receive response message");
                        z = true;
                        AsyncResult asyncResult6 = (AsyncResult) message.obj;
                        if (asyncResult6 == null || asyncResult6.exception != null) {
                            mtkLog("[sume null AsyncResult or exception.");
                            this.mMenuTitleFromEf = null;
                        } else {
                            byte[] bArr4 = (byte[]) asyncResult6.result;
                            if (bArr4 != null && bArr4.length >= 2) {
                                int i3 = bArr4[0] & PplMessageManager.Type.INVALID;
                                int i4 = bArr4[1] & PplMessageManager.Type.INVALID;
                                mtkLog("[sume tag = " + i3 + ", len = " + i4);
                                this.mMenuTitleFromEf = IccUtils.adnStringFieldToString(bArr4, 2, i4);
                                StringBuilder sb = new StringBuilder();
                                sb.append("[sume menu title is ");
                                sb.append(this.mMenuTitleFromEf);
                                mtkLog(sb.toString());
                            }
                        }
                    } else if (i == 257 || i == 258) {
                        super.handleMessage(message);
                    } else if (i == EVENT_EF_CSP_PLMN_MODE_BIT_CHANGED) {
                        AsyncResult asyncResult7 = (AsyncResult) message.obj;
                        if (asyncResult7 != null && asyncResult7.exception == null) {
                            processEfCspPlmnModeBitUrc(((int[]) asyncResult7.result)[0]);
                        }
                    } else if (i != EVENT_GET_RAT_DONE) {
                        switch (i) {
                            case 1008:
                                z = false;
                                AsyncResult asyncResult8 = (AsyncResult) message.obj;
                                if (asyncResult8.exception == null) {
                                    parseEFopl((ArrayList) asyncResult8.result);
                                    this.mRecordsEventsRegistrants.notifyResult(101);
                                }
                                break;
                            case 1009:
                                mtkLog("handleMessage (EVENT_GET_CPHSONS_DONE)");
                                z = false;
                                AsyncResult asyncResult9 = (AsyncResult) message.obj;
                                if (asyncResult9 != null && asyncResult9.exception == null) {
                                    byte[] bArr5 = (byte[]) asyncResult9.result;
                                    this.cphsOnsl = IccUtils.adnStringFieldToString(bArr5, 0, bArr5.length);
                                    mtkLog("Load EF_SPN_CPHS: " + this.cphsOnsl);
                                }
                                break;
                            case 1010:
                                mtkLog("handleMessage (EVENT_GET_SHORT_CPHSONS_DONE)");
                                z = false;
                                AsyncResult asyncResult10 = (AsyncResult) message.obj;
                                if (asyncResult10 != null && asyncResult10.exception == null) {
                                    byte[] bArr6 = (byte[]) asyncResult10.result;
                                    this.cphsOnss = IccUtils.adnStringFieldToString(bArr6, 0, bArr6.length);
                                    mtkLog("Load EF_SPN_SHORT_CPHS: " + this.cphsOnss);
                                }
                                break;
                            default:
                                switch (i) {
                                    case EVENT_GET_PSISMSC_DONE /* 1017 */:
                                        AsyncResult asyncResult11 = (AsyncResult) message.obj;
                                        byte[] bArr7 = (byte[]) asyncResult11.result;
                                        if (asyncResult11.exception == null) {
                                            mtkLog("EF_PSISMSC: " + IccUtils.bytesToHexString(bArr7));
                                            if (bArr7 != null) {
                                                this.mEfPsismsc = bArr7;
                                            }
                                        }
                                        break;
                                    case EVENT_GET_SMSP_DONE /* 1018 */:
                                        AsyncResult asyncResult12 = (AsyncResult) message.obj;
                                        byte[] bArr8 = (byte[]) asyncResult12.result;
                                        if (asyncResult12.exception == null) {
                                            mtkLog("EF_SMSP: " + IccUtils.bytesToHexString(bArr8));
                                            if (bArr8 != null) {
                                                this.mEfSmsp = bArr8;
                                            }
                                        }
                                        break;
                                    case EVENT_GET_GBABP_DONE /* 1019 */:
                                        AsyncResult asyncResult13 = (AsyncResult) message.obj;
                                        if (asyncResult13.exception != null) {
                                            mtkLoge("Error on GET_GBABP with exp " + asyncResult13.exception);
                                        } else {
                                            this.mGbabp = IccUtils.bytesToHexString((byte[]) asyncResult13.result);
                                            mtkLog("EF_GBABP=" + this.mGbabp);
                                        }
                                        break;
                                    case EVENT_GET_GBANL_DONE /* 1020 */:
                                        AsyncResult asyncResult14 = (AsyncResult) message.obj;
                                        if (asyncResult14.exception != null) {
                                            mtkLoge("Error on GET_GBANL with exp " + asyncResult14.exception);
                                        } else {
                                            this.mEfGbanlList = (ArrayList) asyncResult14.result;
                                            mtkLog("GET_GBANL record count: " + this.mEfGbanlList.size());
                                        }
                                        break;
                                    case EVENT_CFU_IND /* 1021 */:
                                        AsyncResult asyncResult15 = (AsyncResult) message.obj;
                                        if (asyncResult15 != null && asyncResult15.exception == null && asyncResult15.result != null) {
                                            mtkLog("handle EVENT_CFU_IND: " + ((int[]) asyncResult15.result)[0]);
                                        }
                                        break;
                                    case EVENT_IMSI_REFRESH_QUERY /* 1022 */:
                                        if (USERDEBUG) {
                                            mtkLog("handleMessage (EVENT_IMSI_REFRESH_QUERY)");
                                        } else {
                                            mtkLog("handleMessage (EVENT_IMSI_REFRESH_QUERY) mImsi= " + getIMSI());
                                        }
                                        this.mCi.getIMSIForApp(this.mParentApp.getAid(), obtainMessage(1023));
                                        break;
                                    case 1023:
                                        mtkLog("handleMessage (EVENT_IMSI_REFRESH_QUERY_DONE)");
                                        AsyncResult asyncResult16 = (AsyncResult) message.obj;
                                        if (asyncResult16.exception == null) {
                                            this.mImsi = IccUtils.stripTrailingFs((String) asyncResult16.result);
                                            if (!Objects.equals(this.mImsi, (String) asyncResult16.result)) {
                                                mtkLoge("Invalid IMSI padding digits received.");
                                            }
                                            if (TextUtils.isEmpty(this.mImsi)) {
                                                this.mImsi = null;
                                            }
                                            if (this.mImsi != null && !this.mImsi.matches("[0-9]+")) {
                                                mtkLoge("Invalid non-numeric IMSI digits received.");
                                                this.mImsi = null;
                                            }
                                            if (this.mImsi != null && (this.mImsi.length() < 6 || this.mImsi.length() > 15)) {
                                                mtkLoge("invalid IMSI " + this.mImsi);
                                                this.mImsi = null;
                                            }
                                            mtkLog("IMSI: mMncLength=" + this.mMncLength);
                                            if (this.mImsi != null && this.mImsi.length() >= 6) {
                                                mtkLog("IMSI: " + this.mImsi.substring(0, 6) + Rlog.pii(false, this.mImsi.substring(6)));
                                            }
                                            updateOperatorPlmn();
                                            if (!this.mImsi.equals(this.mSimImsi)) {
                                                this.mSimImsi = this.mImsi;
                                                this.mImsiReadyRegistrants.notifyRegistrants();
                                                mtkLog("SimRecords: mImsiReadyRegistrants.notifyRegistrants");
                                            }
                                            if (this.mRecordsToLoad == 0 && this.mRecordsRequested) {
                                                onAllRecordsLoaded();
                                            }
                                        } else {
                                            mtkLoge("Exception querying IMSI, Exception:" + asyncResult16.exception);
                                        }
                                        break;
                                    default:
                                        switch (i) {
                                            case EVENT_DELAYED_SEND_PHB_CHANGE /* 1026 */:
                                                this.mPhbReady = isPhbReady();
                                                mtkLog("[EVENT_DELAYED_SEND_PHB_CHANGE] isReady : " + this.mPhbReady);
                                                broadcastPhbStateChangedIntent(this.mPhbReady, false);
                                                break;
                                            case EVENT_PHB_READY /* 1027 */:
                                                AsyncResult asyncResult17 = (AsyncResult) message.obj;
                                                if (asyncResult17 != null && asyncResult17.exception == null && asyncResult17.result != null) {
                                                    int[] iArr = (int[]) asyncResult17.result;
                                                    int simStateForSlotIndex = SubscriptionController.getInstance().getSimStateForSlotIndex(this.mSlotId);
                                                    if (simStateForSlotIndex != 4 && simStateForSlotIndex != 2) {
                                                        z2 = false;
                                                    }
                                                    boolean z4 = z2;
                                                    mtkLog("phbReadyState=" + iArr[0] + ",curSimState = " + simStateForSlotIndex + ", isSimLocked = " + z4);
                                                    updatePHBStatus(iArr[0], z4);
                                                    updateIccFdnStatus();
                                                }
                                                break;
                                            case EVENT_GET_ALL_PNN_DONE /* 1028 */:
                                                z = false;
                                                AsyncResult asyncResult18 = (AsyncResult) message.obj;
                                                if (asyncResult18.exception == null) {
                                                    parseEFpnn((ArrayList) asyncResult18.result);
                                                    this.mRecordsEventsRegistrants.notifyResult(102);
                                                    if (!this.mReadingOpl) {
                                                        this.mRecordsEventsRegistrants.notifyResult(101);
                                                    }
                                                }
                                                break;
                                            case EVENT_RSU_SIM_LOCK_CHANGED /* 1029 */:
                                                mtkLog("[RSU-SIMLOCK] handleMessage (EVENT_RSU_SIM_LOCK_CHANGED)");
                                                AsyncResult asyncResult19 = (AsyncResult) message.obj;
                                                if (asyncResult19 != null && asyncResult19.exception == null && asyncResult19.result != null) {
                                                    int[] iArr2 = (int[]) asyncResult19.result;
                                                    mtkLog("[RSU-SIMLOCK] sim melock event = " + iArr2[0]);
                                                    RebootClickListener rebootClickListener = new RebootClickListener();
                                                    if (iArr2[0] == 0) {
                                                        AlertDialog alertDialogCreate = new AlertDialog.Builder(this.mContext).setTitle("Unlock Phone").setMessage("Please restart the phone now since unlock setting has changed.").setPositiveButton("OK", rebootClickListener).create();
                                                        alertDialogCreate.setCancelable(false);
                                                        alertDialogCreate.setCanceledOnTouchOutside(false);
                                                        alertDialogCreate.getWindow().setType(2003);
                                                        alertDialogCreate.show();
                                                    }
                                                }
                                                break;
                                            case EVENT_GET_ALL_OPL5G_DONE /* 1030 */:
                                                z = false;
                                                AsyncResult asyncResult20 = (AsyncResult) message.obj;
                                                if (asyncResult20.exception == null) {
                                                    parseEFopl5g((ArrayList) asyncResult20.result);
                                                    this.mRecordsEventsRegistrants.notifyResult(Integer.valueOf(EVENT_OPL5G));
                                                }
                                                break;
                                            default:
                                                super.handleMessage(message);
                                                break;
                                        }
                                        break;
                                }
                                break;
                        }
                    } else {
                        mtkLog("handleMessage (EVENT_GET_RAT_DONE)");
                        AsyncResult asyncResult21 = (AsyncResult) message.obj;
                        this.mEfRatLoaded = true;
                        if (asyncResult21 == null || asyncResult21.exception != null) {
                            mtkLog("load EF_RAT fail");
                            this.mEfRat = null;
                            if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM) {
                                boradcastEfRatContentNotify(256);
                            } else {
                                boradcastEfRatContentNotify(512);
                            }
                        } else {
                            this.mEfRat = (byte[]) asyncResult21.result;
                            mtkLog("load EF_RAT complete: " + ((int) this.mEfRat[0]));
                            boradcastEfRatContentNotify(512);
                        }
                    }
                } else {
                    z = true;
                    AsyncResult asyncResult22 = (AsyncResult) message.obj;
                    if (asyncResult22.exception != null) {
                        mtkLoge("Invalid or missing EF[MSISDN]");
                    } else {
                        AdnRecord adnRecord = (AdnRecord) asyncResult22.result;
                        this.mMsisdn = adnRecord.getNumber();
                        this.mMsisdnTag = adnRecord.getAlphaTag();
                        this.mRecordsEventsRegistrants.notifyResult(100);
                        mtkLog("MSISDN: " + MtkIccUtilsEx.getPrintableString(this.mMsisdn, 8));
                    }
                }
            } catch (RuntimeException e) {
                mtkLogw("Exception parsing SIM record", e);
            }
        } finally {
            if (0 != 0) {
                onRecordLoaded();
            }
        }
    }

    protected void handleRefresh(IccRefreshResponse iccRefreshResponse) {
        if (iccRefreshResponse == null) {
            mtkLog("handleSimRefresh received without input");
            return;
        }
        if (iccRefreshResponse.aid != null && !TextUtils.isEmpty(iccRefreshResponse.aid) && !iccRefreshResponse.aid.equals(this.mParentApp.getAid()) && iccRefreshResponse.refreshResult != 4) {
            mtkLog("handleRefresh, refreshResponse.aid = " + iccRefreshResponse.aid + ", mParentApp.getAid() = " + this.mParentApp.getAid());
            return;
        }
        int i = iccRefreshResponse.refreshResult;
        if (i == 0) {
            mtkLog("handleRefresh with SIM_REFRESH_FILE_UPDATED");
            handleFileUpdate(iccRefreshResponse.efId);
            this.mIsPhbEfResetDone = false;
            return;
        }
        if (i == 1) {
            mtkLog("handleRefresh with SIM_REFRESH_INIT");
            handleFileUpdate(-1);
            return;
        }
        if (i == 2) {
            mtkLog("handleRefresh with SIM_REFRESH_RESET");
            if (SystemProperties.get("ro.vendor.sim_refresh_reset_by_modem").equals("1")) {
                mtkLog("Sim reset by modem!");
            } else {
                mtkLog("sim_refresh_reset_by_modem false");
                if (this.mCi != null) {
                    this.mCi.restartRILD(null);
                }
            }
            setPhbReady(false);
            handleFileUpdate(-1);
            return;
        }
        if (i == 4) {
            mtkLog("handleRefresh with REFRESH_INIT_FULL_FILE_UPDATED");
            setPhbReady(false);
            handleFileUpdate(-1);
            return;
        }
        if (i != 5) {
            if (i != 6) {
                mtkLog("handleSimRefresh callback to parent");
                super.handleRefresh(iccRefreshResponse);
                return;
            } else {
                mtkLog("handleSimRefresh with REFRESH_SESSION_RESET");
                handleFileUpdate(-1);
                return;
            }
        }
        mtkLog("handleRefresh with REFRESH_INIT_FILE_UPDATED, EFID = " + iccRefreshResponse.efId);
        handleFileUpdate(iccRefreshResponse.efId);
        this.mIsPhbEfResetDone = false;
        if (this.mParentApp.getState() == IccCardApplicationStatus.AppState.APPSTATE_READY) {
            sendMessage(obtainMessage(257));
        }
    }

    public boolean isFetchRatBalancingAndEnsFile(int i) {
        String str = "persist.vendor.radio.sim.opid";
        if (i > 0) {
            str = "persist.vendor.radio.sim.opid_" + i;
        }
        boolean z = TextUtils.equals(SystemProperties.get(str), "7") || TextUtils.equals(SystemProperties.get(str), CRICKET_OPID);
        mtkLog("isFetchRatBalancingAndEnsFile is " + z);
        return z;
    }

    public String isOperatorMvnoForEfPnn() {
        String operatorNumeric = getOperatorNumeric();
        String firstFullNameInEfPnn = getFirstFullNameInEfPnn();
        mtkLog("isOperatorMvnoForEfPnn(): mccmnc = " + operatorNumeric + ", pnn = " + firstFullNameInEfPnn);
        if (MtkSpnOverride.getInstance().getSpnByEfPnn(operatorNumeric, firstFullNameInEfPnn) != null) {
            return firstFullNameInEfPnn;
        }
        return null;
    }

    public String isOperatorMvnoForImsi() {
        String strIsOperatorMvnoForImsi = MtkSpnOverride.getInstance().isOperatorMvnoForImsi(getOperatorNumeric(), getIMSI());
        String operatorNumeric = getOperatorNumeric();
        mtkLog("isOperatorMvnoForImsi(), imsiPattern: " + strIsOperatorMvnoForImsi + ", mccmnc: " + operatorNumeric);
        if (strIsOperatorMvnoForImsi == null || operatorNumeric == null) {
            return null;
        }
        String strSubstring = strIsOperatorMvnoForImsi.substring(operatorNumeric.length(), strIsOperatorMvnoForImsi.length());
        mtkLog("isOperatorMvnoForImsi(): " + strSubstring);
        return strSubstring;
    }

    public boolean isPhbReady() {
        String str = "";
        StringBuilder sb = new StringBuilder();
        sb.append("phbReady(): cached mPhbReady = ");
        sb.append(this.mPhbReady ? "true" : "false");
        mtkLog(sb.toString());
        if (this.mParentApp == null || this.mPhone == null) {
            return false;
        }
        String telephonyProperty = TelephonyManager.getTelephonyProperty(this.mSlotId, SIMRECORD_PROPERTY_RIL_PHB_READY, "false");
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild")) {
            mtkLog("phbReady(): strPhbReady = " + telephonyProperty);
            return telephonyProperty.equals("true");
        }
        String str2 = SystemProperties.get("gsm.sim.state");
        if (str2 != null && str2.length() > 0) {
            String[] strArrSplit = str2.split(",");
            int i = this.mSlotId;
            if (i >= 0 && i < strArrSplit.length && strArrSplit[i] != null) {
                str = strArrSplit[i];
            }
        }
        boolean z = str.equals("NETWORK_LOCKED") || str.equals("PIN_REQUIRED");
        mtkLog("phbReady(): strPhbReady = " + telephonyProperty + ", strAllSimState = " + str2);
        return telephonyProperty.equals("true") && !z;
    }

    public boolean isRadioAvailable() {
        return (this.mCi == null || this.mCi.getRadioState() == 2) ? false : true;
    }

    protected boolean isSpnActive() {
        getServiceProviderName();
        if (this.mEfSST == null || this.mParentApp == null) {
            return false;
        }
        if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM) {
            byte[] bArr = this.mEfSST;
            if (bArr.length < 3 || (bArr[2] & 4) != 4) {
                return false;
            }
            mtkLog("isSpnActive USIM mEfSST is " + IccUtils.bytesToHexString(this.mEfSST) + " set bSpnActive to true");
            return true;
        }
        byte[] bArr2 = this.mEfSST;
        if (bArr2.length < 5 || (bArr2[4] & 2) != 2) {
            return false;
        }
        mtkLog("isSpnActive SIM mEfSST is " + IccUtils.bytesToHexString(this.mEfSST) + " set bSpnActive to true");
        return true;
    }

    protected void log(String str) {
        Rlog.d(LOG_TAG, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")");
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")");
    }

    protected void logv(String str) {
        Rlog.v(LOG_TAG, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")");
    }

    protected void logw(String str, Throwable th) {
        Rlog.w(LOG_TAG, "[SIMRecords] " + str + " (slot " + this.mSlotId + ")", th);
    }

    protected void onAllRecordsLoaded() {
        if (this.mParentApp.getState() == IccCardApplicationStatus.AppState.APPSTATE_SUBSCRIPTION_PERSO) {
            this.mRecordsRequested = false;
            return;
        }
        super.onAllRecordsLoaded();
        if (this.mParentApp.getState() == IccCardApplicationStatus.AppState.APPSTATE_PIN || this.mParentApp.getState() == IccCardApplicationStatus.AppState.APPSTATE_PUK) {
            this.mRecordsRequested = false;
            return;
        }
        setSpnFromConfig(getOperatorNumeric());
        String operatorNumeric = getOperatorNumeric();
        mtkLog("onAllRecordsLoaded operator = " + operatorNumeric + ", imsi = " + MtkIccUtilsEx.getPrintableString(getIMSI(), 10));
        if (operatorNumeric != null) {
            if (operatorNumeric.equals("46002") || operatorNumeric.equals("46007")) {
                operatorNumeric = "46000";
            }
            setSystemProperty("vendor.gsm.sim.operator.default-name", MtkSpnOverride.getInstance().lookupOperatorName(MtkSubscriptionManager.getSubIdUsingPhoneId(this.mParentApp.getPhoneId()), operatorNumeric, true, this.mContext));
        }
        fetchPnnAndOpl();
        fetchCPHSOns();
        fetchRatBalancing();
        fetchSmsp();
        fetchGbaRecords();
        fetchOpl5g();
    }

    protected void onLocked() {
        this.mRecordsRequested = false;
        this.mLoaded.set(false);
        if (this.mLockedRecordsReqReason == 0) {
            super.onLocked();
        } else {
            this.mRecordsToLoad++;
            onRecordLoaded();
        }
    }

    protected void resetRecords() {
        super.resetRecords();
        setSystemProperty("vendor.gsm.sim.operator.default-name", null);
    }

    public void setEfGbabp(String str, Message message) {
        this.mFh.updateEFTransparent(MtkIccConstants.EF_GBABP, IccUtils.hexStringToBytes(str), message);
    }

    public void setPhbReady(boolean z) {
        StringBuilder sb = new StringBuilder();
        sb.append("setPhbReady(): isReady = ");
        sb.append(z ? "true" : "false");
        mtkLog(sb.toString());
        if (this.mPhbReady == z || this.mCi == null) {
            return;
        }
        this.mPhbReady = z;
        if (z) {
            this.mCi.setPhonebookReady(1, null);
        } else if (!z) {
            this.mCi.setPhonebookReady(0, null);
        }
        broadcastPhbStateChangedIntent(this.mPhbReady, false);
    }

    protected void setSpnFromConfig(String str) {
        if (TextUtils.isEmpty(getServiceProviderName()) && this.mSpnOverride.containsCarrier(str)) {
            this.mTelephonyManager.setSimOperatorNameForPhone(this.mParentApp.getPhoneId(), this.mSpnOverride.getSpn(str));
        }
    }

    public void setVoiceCallForwardingFlag(int i, boolean z, String str) {
        Rlog.d(LOG_TAG, "setVoiceCallForwardingFlag: " + z);
        if (i != 1) {
            return;
        }
        this.mCallForwardingStatus = z ? 1 : 0;
        mtkLog(" mRecordsEventsRegistrants: size=" + this.mRecordsEventsRegistrants.size());
        this.mRecordsEventsRegistrants.notifyResult(1);
        try {
            if (checkEfCfis()) {
                if (z) {
                    byte[] bArr = this.mEfCfis;
                    bArr[1] = (byte) (bArr[1] | 1);
                } else {
                    byte[] bArr2 = this.mEfCfis;
                    bArr2[1] = (byte) (bArr2[1] & 254);
                }
                mtkLog("setVoiceCallForwardingFlag: enable=" + z + " mEfCfis=" + IccUtils.bytesToHexString(this.mEfCfis));
                if (z && !TextUtils.isEmpty(str)) {
                    mtkLogv("EF_CFIS: updating cf number, " + Rlog.pii(LOG_TAG, str));
                    byte[] bArrNumberToCalledPartyBCD = PhoneNumberUtils.numberToCalledPartyBCD(convertNumberIfContainsPrefix(str));
                    System.arraycopy(bArrNumberToCalledPartyBCD, 0, this.mEfCfis, 3, bArrNumberToCalledPartyBCD.length);
                    this.mEfCfis[2] = (byte) bArrNumberToCalledPartyBCD.length;
                    this.mEfCfis[14] = -1;
                    this.mEfCfis[15] = -1;
                }
                if (this.mFh != null) {
                    this.mFh.updateEFLinearFixed(28619, 1, this.mEfCfis, (String) null, obtainMessage(14, 28619));
                } else {
                    mtkLog("setVoiceCallForwardingFlag: mFh is null, skip update EF_CFIS");
                }
            } else {
                mtkLog("setVoiceCallForwardingFlag: ignoring enable=" + z + " invalid mEfCfis=" + IccUtils.bytesToHexString(this.mEfCfis));
            }
            if (this.mEfCff != null) {
                if (z) {
                    this.mEfCff[0] = (byte) ((this.mEfCff[0] & 240) | 10);
                } else {
                    this.mEfCff[0] = (byte) ((this.mEfCff[0] & 240) | 5);
                }
                if (this.mFh != null) {
                    this.mFh.updateEFTransparent(28435, this.mEfCff, obtainMessage(14, 28435));
                } else {
                    mtkLog("setVoiceCallForwardingFlag: mFh is null, skip update EF_CFF_CPHS");
                }
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            mtkLogw("Error saving call forwarding flag to SIM. Probably malformed SIM record", e);
        }
    }

    protected void setVoiceCallForwardingFlagFromSimRecords() {
        if (checkEfCfis()) {
            this.mCallForwardingStatus = this.mEfCfis[1] & 1;
            mtkLog("EF_CFIS2: callForwardingEnabled=" + this.mCallForwardingStatus);
            this.mRecordsEventsRegistrants.notifyResult(1);
            return;
        }
        if (this.mEfCff != null) {
            this.mCallForwardingStatus = (this.mEfCff[0] & 15) != 10 ? 0 : 1;
            mtkLog("EF_CFF2: callForwardingEnabled=" + this.mCallForwardingStatus);
            this.mRecordsEventsRegistrants.notifyResult(1);
            return;
        }
        this.mCallForwardingStatus = -1;
        mtkLog("EF_CFIS and EF_CFF not valid. callForwardingEnabled=" + this.mCallForwardingStatus);
        this.mRecordsEventsRegistrants.notifyResult(1);
    }

    protected void setVoiceMailByCountry(String str) {
        super.setVoiceMailByCountry(str);
        if (this.mVmConfig.containsCarrier(str)) {
            mtkLog("setVoiceMailByCountry");
        }
    }

    public void setVoiceMailNumber(String str, String str2, Message message) {
        mtkLog("setVoiceMailNumber, mIsVoiceMailFixed:" + this.mIsVoiceMailFixed + ", mMailboxIndex:" + this.mMailboxIndex + ", isCphsMailboxEnabled:" + isCphsMailboxEnabled() + ", alphaTag:" + str + ", voiceNumber:" + MtkIccUtilsEx.getPrintableString(str2, 8));
        super.setVoiceMailNumber(str, str2, message);
    }

    protected boolean shallIgnoreMessage(Message message) {
        if (message.what == 90 || message.what == 41) {
            mtkLoge("Received message " + message + "[" + message.what + "]  while being destroyed. Keep going!");
            return false;
        }
        mtkLoge("Received message " + message + "[" + message.what + "]  while being destroyed. Ignoring.");
        return true;
    }

    protected void updateIccFdnStatus() {
    }

    protected void updateOperatorPlmn() {
        String imsi = getIMSI();
        if (imsi != null) {
            if ((this.mMncLength == -1 || this.mMncLength == 0 || this.mMncLength == 2) && imsi.length() >= 6) {
                String strSubstring = imsi.substring(0, 6);
                for (String str : MCCMNC_CODES_HAVING_3DIGITS_MNC) {
                    if (str.equals(strSubstring)) {
                        this.mMncLength = 3;
                        mtkLog("IMSI: setting1 mMncLength=" + this.mMncLength);
                        break;
                    }
                }
            }
            if (this.mMncLength == -1 || this.mMncLength == 0) {
                try {
                    this.mMncLength = MccTable.smallestDigitsMccForMnc(Integer.parseInt(imsi.substring(0, 3)));
                    mtkLog("setting2 mMncLength=" + this.mMncLength);
                } catch (NumberFormatException e) {
                    mtkLoge("Corrupt IMSI! setting3 mMncLength=" + this.mMncLength);
                }
            }
            if (this.mMncLength == 0 || this.mMncLength == -1 || imsi.length() < this.mMncLength + 3) {
                return;
            }
            mtkLog("update mccmnc=" + imsi.substring(0, this.mMncLength + 3));
            updateConfiguration(imsi.substring(0, this.mMncLength + 3));
        }
    }
}

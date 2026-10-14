package com.mediatek.internal.telephony.uicc;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Message;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.os.UserManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.MccTable;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccRefreshResponse;
import com.android.internal.telephony.uicc.RuimRecords;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.phb.CsimPhbUtil;
import com.mediatek.internal.telephony.phb.MtkAdnRecordCache;
import com.mediatek.internal.telephony.ppl.PplControlData;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkRuimRecords extends RuimRecords implements MtkIccConstants {
    public static final int C2K_PHB_NOT_READY = 2;
    public static final int C2K_PHB_READY = 3;
    private static final int CSIM_FDN_SERVICE_MASK_ACTIVE = 1;
    private static final int CSIM_FDN_SERVICE_MASK_EXIST = 2;
    private static final int EVENT_DELAYED_SEND_PHB_CHANGE = 503;
    private static final int EVENT_GET_EST_DONE = 501;
    private static final int EVENT_PHB_READY = 504;
    private static final int EVENT_RADIO_STATE_CHANGED = 502;
    public static final int GSM_PHB_NOT_READY = 0;
    public static final int GSM_PHB_READY = 1;
    static final String LOG_TAG = "RuimRecords";
    private static final int MCC_LEN = 3;
    static final String MTK_LOG_TAG = "MtkRuimRecords";
    public static final int PHB_DELAY_SEND_TIME = 500;
    static final String PROPERTY_RIL_C2K_PHB_READY = "vendor.cdma.sim.ril.phbready";
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    static final String PROPERTY_RIL_GSM_PHB_READY = "vendor.gsm.sim.ril.phbready";
    private static final int RUIM_FDN_SERVICE_MASK_EXIST_ACTIVE = 48;
    private static final int RUIM_FDN_SERVICE_MASK_EXIST_INACTIVE = 16;
    private boolean mDispose;
    private byte[] mEnableService;
    private final BroadcastReceiver mIntentReceiver;
    private boolean mPendingPhbNotify;
    private boolean mPhbReady;
    private boolean mPhbWaitSub;
    private Phone mPhone;
    private int mPhoneId;
    private String mRuimImsi;
    private byte[] mSimService;
    private int mSubId;

    /* JADX WARN: Multi-variable type inference failed */
    public MtkRuimRecords(MtkUiccCardApplication mtkUiccCardApplication, Context context, CommandsInterface commandsInterface) {
        super(mtkUiccCardApplication, context, commandsInterface);
        this.mRuimImsi = null;
        this.mPhoneId = -1;
        this.mPendingPhbNotify = false;
        this.mSubId = -1;
        this.mPhbReady = false;
        this.mPhbWaitSub = false;
        this.mDispose = false;
        this.mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.uicc.MtkRuimRecords.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                String action = intent.getAction();
                if (action.equals("android.intent.action.RADIO_TECHNOLOGY")) {
                    int intExtra = intent.getIntExtra("phone", -1);
                    MtkRuimRecords.this.mtkLogd("[onReceive] ACTION_RADIO_TECHNOLOGY_CHANGED phoneId : " + intExtra);
                    if (MtkRuimRecords.this.mParentApp == null || MtkRuimRecords.this.mParentApp.getPhoneId() != intExtra) {
                        return;
                    }
                    String stringExtra = intent.getStringExtra("phoneName");
                    int intExtra2 = intent.getIntExtra("subscription", -1);
                    MtkRuimRecords.this.mtkLogd("[onReceive] ACTION_RADIO_TECHNOLOGY_CHANGED activePhoneName: " + stringExtra + ", subId : " + intExtra2 + ", phoneId: " + intExtra);
                    if ("CDMA".equals(stringExtra)) {
                        MtkRuimRecords.this.broadcastPhbStateChangedIntent(false, true);
                        MtkRuimRecords mtkRuimRecords = MtkRuimRecords.this;
                        mtkRuimRecords.sendMessageDelayed(mtkRuimRecords.obtainMessage(MtkRuimRecords.EVENT_DELAYED_SEND_PHB_CHANGE), 500L);
                        MtkRuimRecords.this.mAdnCache.reset();
                        return;
                    }
                    return;
                }
                if (action.equals("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED") && MtkRuimRecords.this.mParentApp != null) {
                    MtkRuimRecords.this.mtkLogd("[onReceive] onReceive ACTION_SUBINFO_RECORD_UPDATED mPhbWaitSub: " + MtkRuimRecords.this.mPhbWaitSub);
                    if (MtkRuimRecords.this.mPhbWaitSub) {
                        MtkRuimRecords.this.mPhbWaitSub = false;
                        MtkRuimRecords mtkRuimRecords2 = MtkRuimRecords.this;
                        mtkRuimRecords2.broadcastPhbStateChangedIntent(mtkRuimRecords2.mPhbReady, false);
                        return;
                    }
                    return;
                }
                if (!action.equals("android.intent.action.SIM_STATE_CHANGED") || MtkRuimRecords.this.mParentApp == null) {
                    if (intent.getAction().equals("android.intent.action.BOOT_COMPLETED")) {
                        MtkRuimRecords.this.mtkLogd("[onReceive] ACTION_BOOT_COMPLETED mPendingPhbNotify : " + MtkRuimRecords.this.mPendingPhbNotify);
                        if (MtkRuimRecords.this.mPendingPhbNotify) {
                            MtkRuimRecords mtkRuimRecords3 = MtkRuimRecords.this;
                            mtkRuimRecords3.broadcastPhbStateChangedIntent(mtkRuimRecords3.isPhbReady(), false);
                            MtkRuimRecords.this.mPendingPhbNotify = false;
                            return;
                        }
                        return;
                    }
                    return;
                }
                int intExtra3 = intent.getIntExtra("phone", 0);
                String stringExtra2 = intent.getStringExtra("ss");
                if (intExtra3 == MtkRuimRecords.this.mPhoneId) {
                    String telephonyProperty = CsimPhbUtil.isUsingGsmPhbReady(MtkRuimRecords.this.mFh) ? TelephonyManager.getTelephonyProperty(MtkRuimRecords.this.mPhoneId, MtkRuimRecords.PROPERTY_RIL_GSM_PHB_READY, "false") : TelephonyManager.getTelephonyProperty(MtkRuimRecords.this.mPhoneId, MtkRuimRecords.PROPERTY_RIL_C2K_PHB_READY, "false");
                    MtkRuimRecords.this.mtkLogd("sim state: " + stringExtra2 + ", mPhbReady: " + MtkRuimRecords.this.mPhbReady + ",strPhbReady: " + telephonyProperty.equals("true"));
                    if ("READY".equals(stringExtra2)) {
                        if (!MtkRuimRecords.this.mPhbReady && telephonyProperty.equals("true")) {
                            MtkRuimRecords.this.mPhbReady = true;
                            MtkRuimRecords mtkRuimRecords4 = MtkRuimRecords.this;
                            mtkRuimRecords4.broadcastPhbStateChangedIntent(mtkRuimRecords4.mPhbReady, false);
                        } else if (true == MtkRuimRecords.this.mPhbWaitSub && telephonyProperty.equals("true")) {
                            MtkRuimRecords.this.mtkLogd("mPhbWaitSub is " + MtkRuimRecords.this.mPhbWaitSub + ", broadcast if need");
                            MtkRuimRecords.this.mPhbWaitSub = false;
                            MtkRuimRecords mtkRuimRecords5 = MtkRuimRecords.this;
                            mtkRuimRecords5.broadcastPhbStateChangedIntent(mtkRuimRecords5.mPhbReady, false);
                        }
                    }
                }
            }
        };
        this.mPhoneId = mtkUiccCardApplication.getPhoneId();
        this.mPhone = PhoneFactory.getPhone(mtkUiccCardApplication.getPhoneId());
        mtkLogd("MtkRuimRecords X ctor this=" + this);
        this.mAdnCache = new MtkAdnRecordCache(this.mFh, commandsInterface, mtkUiccCardApplication);
        this.mCi.registerForPhbReady(this, EVENT_PHB_READY, null);
        this.mCi.registerForRadioStateChanged(this, EVENT_RADIO_STATE_CHANGED, (Object) null);
        this.mAdnCache.reset();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        intentFilter.addAction("android.intent.action.RADIO_TECHNOLOGY");
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        intentFilter.addAction("android.intent.action.BOOT_COMPLETED");
        this.mContext.registerReceiver(this.mIntentReceiver, intentFilter);
        mtkLogd("updateIccRecords in IccPhoneBookeInterfaceManager");
        Phone phone = this.mPhone;
        if (phone != null && phone.getIccPhoneBookInterfaceManager() != null) {
            this.mPhone.getIccPhoneBookInterfaceManager().updateIccRecords(this);
        }
        if (isPhbReady()) {
            this.mPhbReady = true;
            broadcastPhbStateChangedIntent(true, false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void broadcastPhbStateChangedIntent(boolean z, boolean z2) {
        int[] subId;
        Phone phone = this.mPhone;
        if (phone != null && phone.getPhoneType() != 2 && (!this.mDispose || z)) {
            this.mPendingPhbNotify = true;
            mtkLogd("broadcastPhbStateChangedIntent, No active Phone will notfiy when dispose");
            return;
        }
        mtkLogd("broadcastPhbStateChangedIntent, mPhbReady " + this.mPhbReady + ", " + this.mSubId);
        if (z) {
            int[] subId2 = SubscriptionManager.getSubId(this.mPhoneId);
            if (subId2 != null && subId2.length > 0) {
                this.mSubId = subId2[0];
            }
            if (this.mSubId <= 0) {
                mtkLogd("broadcastPhbStateChangedIntent, mSubId <= 0");
                this.mPhbWaitSub = true;
                return;
            }
        } else {
            if (z2 && this.mPhbReady && (subId = SubscriptionManager.getSubId(this.mPhoneId)) != null && subId.length > 0) {
                this.mSubId = subId[0];
            }
            if (this.mSubId <= 0) {
                mtkLogd("broadcastPhbStateChangedIntent, isReady == false and mSubId <= 0");
                return;
            }
        }
        boolean zIsUserUnlocked = ((UserManager) this.mContext.getSystemService(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)).isUserUnlocked();
        if (!SystemProperties.get("sys.boot_completed").equals("1") || !zIsUserUnlocked) {
            mtkLogd("broadcastPhbStateChangedIntent, boot not completed, isUnlock:" + zIsUserUnlocked);
            this.mPendingPhbNotify = true;
            return;
        }
        Intent intent = new Intent("mediatek.intent.action.PHB_STATE_CHANGED");
        intent.putExtra("ready", z);
        intent.putExtra("subscription", this.mSubId);
        mtkLogd("Broadcasting intent ACTION_PHB_STATE_CHANGED " + z + " sub id " + this.mSubId + " phoneId " + this.mParentApp.getPhoneId());
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
        Intent intent2 = new Intent("mediatek.intent.action.PHB_STATE_CHANGED");
        intent2.putExtra("ready", z);
        intent2.putExtra("subscription", this.mSubId);
        intent2.setPackage("com.mediatek.simprocessor");
        mtkLogd("Broadcasting intent ACTION_PHB_STATE_CHANGED to package: simprocessor");
        this.mContext.sendBroadcastAsUser(intent2, UserHandle.ALL);
        if (z) {
            return;
        }
        this.mSubId = -1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void mtkLogd(String str) {
        Rlog.d(MTK_LOG_TAG, "[MtkRuimRecords] " + str + " (phoneId " + this.mPhoneId + ")");
    }

    private void mtkLoge(String str) {
        Rlog.e(MTK_LOG_TAG, "[MtkRuimRecords] " + str + " (phoneId " + this.mPhoneId + ")");
    }

    private void mtkLogi(String str) {
        Rlog.i(MTK_LOG_TAG, "[MtkRuimRecords] " + str + " (phoneId " + this.mPhoneId + ")");
    }

    private void updatePhbStatus(int i, boolean z) {
        boolean z2;
        mtkLogd("[PhbStatus] status: " + i + ", isSimLocked: " + z + ", mPhbReady: " + this.mPhbReady);
        boolean z3 = SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild") ? false : z;
        if (CsimPhbUtil.isUsingGsmPhbReady(this.mFh)) {
            if (i == 1) {
                z2 = true;
            } else {
                if (i != 0) {
                    mtkLogd("[PhbStatus] not GSM PHB status");
                    return;
                }
                z2 = false;
            }
        } else if (i == 3) {
            z2 = true;
        } else {
            if (i != 2) {
                mtkLogd("[PhbStatus] not C2K PHB status");
                return;
            }
            z2 = false;
        }
        if (!z2) {
            boolean z4 = this.mPhbReady;
            if (!z4) {
                broadcastPhbStateChangedIntent(z4, false);
                return;
            }
            this.mAdnCache.reset();
            this.mPhbReady = false;
            broadcastPhbStateChangedIntent(false, false);
            return;
        }
        if (z3) {
            mtkLogd("[PhbStatus] phb ready but sim is not ready.");
            this.mPhbReady = false;
            broadcastPhbStateChangedIntent(false, false);
        } else {
            boolean z5 = this.mPhbReady;
            if (z5) {
                broadcastPhbStateChangedIntent(z5, false);
            } else {
                this.mPhbReady = true;
                broadcastPhbStateChangedIntent(true, false);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void dispose() {
        mtkLogd("Disposing MtkRuimRecords " + this);
        this.mDispose = true;
        if (!isCdma4GDualModeCard()) {
            mtkLogd("dispose, reset operator numeric, name and country iso");
            this.mTelephonyManager.setSimOperatorNumericForPhone(this.mParentApp.getPhoneId(), "");
            this.mTelephonyManager.setSimOperatorNameForPhone(this.mParentApp.getPhoneId(), "");
            this.mTelephonyManager.setSimCountryIsoForPhone(this.mParentApp.getPhoneId(), "");
        }
        if (this.mPhbReady || this.mPendingPhbNotify) {
            mtkLogd("MtkRuimRecords Disposing set PHB unready mPendingPhbNotify=" + this.mPendingPhbNotify + "mPhbReady=" + this.mPhbReady);
            this.mPhbReady = false;
            this.mPendingPhbNotify = false;
            broadcastPhbStateChangedIntent(false, false);
        }
        this.mParentApp.unregisterForReady(this);
        this.mPhbWaitSub = false;
        this.mCi.unregisterForRadioStateChanged(this);
        this.mCi.unregisterForPhbReady(this);
        this.mContext.unregisterReceiver(this.mIntentReceiver);
        super.dispose();
    }

    public int getCarrierNameDisplayCondition() {
        String serviceProviderName = getServiceProviderName();
        String uiccProfileForPhone = UiccController.getInstance().getUiccProfileForPhone(this.mPhoneId);
        StringBuilder sb = new StringBuilder();
        sb.append("getCarrierNameDisplayCondition uiccProfile is ");
        sb.append((Object) (uiccProfileForPhone != null ? uiccProfileForPhone : "null"));
        mtkLogd(sb.toString());
        if (uiccProfileForPhone != null && uiccProfileForPhone.getOperatorBrandOverride() != null) {
            mtkLogd("getCarrierNameDisplayCondition, getOperatorBrandOverride is not null");
            return 1;
        }
        if (!this.mCsimSpnDisplayCondition) {
            mtkLogd("getCarrierNameDisplayCondition, no EF_SPN");
            return 1;
        }
        if (TextUtils.isEmpty(serviceProviderName) || serviceProviderName.equals("")) {
            mtkLogd("getCarrierNameDisplayCondition, show plmn");
            return 1;
        }
        mtkLogd("getCarrierNameDisplayCondition, show spn");
        return 2;
    }

    public String getOperatorNumeric() {
        String imsi = getIMSI();
        if (imsi == null) {
            return null;
        }
        return (this.mMncLength == -1 || this.mMncLength == 0) ? imsi.substring(0, MccTable.smallestDigitsMccForMnc(Integer.parseInt(imsi.substring(0, 3))) + 3) : imsi.substring(0, this.mMncLength + 3);
    }

    public IccServiceInfo.IccServiceStatus getSIMServiceStatus(IccServiceInfo.IccService iccService) {
        IccServiceInfo.IccServiceStatus iccServiceStatus = IccServiceInfo.IccServiceStatus.UNKNOWN;
        if (this.mParentApp == null) {
            mtkLogd("getSIMServiceStatus enService: " + iccService + ", mParentApp = null.");
            return iccServiceStatus;
        }
        mtkLogd("getSIMServiceStatus enService: " + iccService + ", mParentApp.getType(): " + this.mParentApp.getType());
        if (iccService == IccServiceInfo.IccService.FDN && this.mSimService != null && this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_RUIM) {
            mtkLogd("getSIMServiceStatus mSimService[0]: " + ((int) this.mSimService[0]));
            byte[] bArr = this.mSimService;
            if ((bArr[0] & RUIM_FDN_SERVICE_MASK_EXIST_ACTIVE) == RUIM_FDN_SERVICE_MASK_EXIST_ACTIVE) {
                return IccServiceInfo.IccServiceStatus.ACTIVATED;
            }
            return (bArr[0] & PplControlData.STATUS_WIPE_REQUESTED) == 16 ? IccServiceInfo.IccServiceStatus.INACTIVATED : IccServiceInfo.IccServiceStatus.NOT_EXIST_IN_SIM;
        }
        if (iccService != IccServiceInfo.IccService.FDN || this.mSimService == null || this.mEnableService == null || this.mParentApp.getType() != IccCardApplicationStatus.AppType.APPTYPE_CSIM) {
            return iccServiceStatus;
        }
        mtkLogd("getSIMServiceStatus mSimService[0]: " + ((int) this.mSimService[0]) + ", mEnableService[0]: " + ((int) this.mEnableService[0]));
        if ((this.mSimService[0] & 2) == 2 && (this.mEnableService[0] & 1) == 1) {
            return IccServiceInfo.IccServiceStatus.ACTIVATED;
        }
        return (this.mSimService[0] & 2) == 2 ? IccServiceInfo.IccServiceStatus.INACTIVATED : IccServiceInfo.IccServiceStatus.NOT_EXIST_IN_USIM;
    }

    protected void handleFileUpdate(int i) {
        this.mLoaded.set(false);
        super.handleFileUpdate(i);
    }

    public void handleMessage(Message message) {
        try {
            if (this.mDestroyed.get()) {
                mtkLoge("Received message " + message + "[" + message.what + "] while being destroyed. Ignoring.");
                return;
            }
            try {
                int i = message.what;
                if (i == 10) {
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    String[] strArr = (String[]) asyncResult.result;
                    if (asyncResult.exception == null) {
                        this.mMyMobileNumber = strArr[0];
                        this.mMin2Min1 = strArr[3];
                        this.mPrlVersion = strArr[4];
                        mtkLogd("MDN: " + MtkIccUtilsEx.getPrintableString(this.mMyMobileNumber, 8) + " MIN: " + MtkIccUtilsEx.getPrintableString(this.mMin2Min1, 8));
                    }
                } else if (i == 17) {
                    mtkLogd("Event EVENT_GET_SST_DONE Received");
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    if (asyncResult2.exception != null) {
                        mtkLogi("EVENT_GET_SST_DONE failed");
                    } else {
                        this.mSimService = (byte[]) asyncResult2.result;
                        mtkLogd("mSimService[0]: " + ((int) this.mSimService[0]) + ", data.length: " + this.mSimService.length);
                        updateIccFdnStatus();
                    }
                } else if (i == EVENT_GET_EST_DONE) {
                    mtkLogd("Event EVENT_GET_EST_DONE Received");
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    if (asyncResult3.exception != null) {
                        mtkLogi("EVENT_GET_EST_DONE failed");
                    } else {
                        this.mEnableService = (byte[]) asyncResult3.result;
                        mtkLogd("mEnableService[0]: " + ((int) this.mEnableService[0]) + ", mEnableService.length: " + this.mEnableService.length);
                        updateIccFdnStatus();
                    }
                } else if (i == EVENT_DELAYED_SEND_PHB_CHANGE) {
                    this.mPhbReady = isPhbReady();
                    mtkLogd("[EVENT_DELAYED_SEND_PHB_CHANGE] isReady : " + this.mPhbReady);
                    broadcastPhbStateChangedIntent(this.mPhbReady, false);
                } else if (i != EVENT_PHB_READY) {
                    super.handleMessage(message);
                } else {
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    mtkLogd("[DBG]EVENT_PHB_READY ar:" + asyncResult4);
                    if (asyncResult4 != null && asyncResult4.exception == null && asyncResult4.result != null) {
                        int[] iArr = (int[]) asyncResult4.result;
                        this.mParentApp.getPhoneId();
                        int simStateForSlotIndex = SubscriptionController.getInstance().getSimStateForSlotIndex(this.mPhoneId);
                        updatePhbStatus(iArr[0], simStateForSlotIndex == 4 || simStateForSlotIndex == 2);
                        updateIccFdnStatus();
                    }
                }
            } catch (RuntimeException e) {
                Rlog.w(LOG_TAG, "Exception parsing RUIM record", e);
            }
        } finally {
            if (0 != 0) {
                onRecordLoaded();
            }
        }
    }

    protected void handleRefresh(IccRefreshResponse iccRefreshResponse) {
        if (iccRefreshResponse == null) {
            mtkLogd("handleRefresh received without input");
            return;
        }
        if (iccRefreshResponse.aid == null || TextUtils.isEmpty(iccRefreshResponse.aid) || iccRefreshResponse.aid.equals(this.mParentApp.getAid()) || iccRefreshResponse.refreshResult == 4) {
            int i = iccRefreshResponse.refreshResult;
            if (i == 1) {
                mtkLogd("handleRefresh with SIM_REFRESH_INIT");
                handleFileUpdate(-1);
            } else if (i == 2) {
                mtkLogd("handleRefresh with SIM_REFRESH_RESET");
            } else if (i != 4) {
                mtkLogd("handleRefresh,callback to super");
                super.handleRefresh(iccRefreshResponse);
            } else {
                mtkLogd("handleRefresh with REFRESH_INIT_FULL_FILE_UPDATED");
                handleFileUpdate(-1);
            }
        }
    }

    public boolean isCdma4GDualModeCard() {
        String[] strArrSplit = null;
        int i = this.mPhoneId;
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_FULL_UICC_TYPE;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i]);
                if (str != null && str.length() > 0) {
                    strArrSplit = str.split(",");
                }
                StringBuilder sb = new StringBuilder();
                sb.append("isCdma4GDualModeCard PhoneId ");
                sb.append(this.mPhoneId);
                sb.append(", prop value= ");
                sb.append(str);
                sb.append(", size= ");
                sb.append(strArrSplit != null ? strArrSplit.length : 0);
                mtkLogd(sb.toString());
                return strArrSplit != null && Arrays.asList(strArrSplit).contains("USIM") && Arrays.asList(strArrSplit).contains("CSIM");
            }
        }
        mtkLogd("isCdma4GDualModeCard: invalid PhoneId " + this.mPhoneId);
        return false;
    }

    public boolean isCdmaOnly() {
        String[] strArrSplit = null;
        int i = this.mPhoneId;
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_FULL_UICC_TYPE;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i]);
                if (str != null && str.length() > 0) {
                    strArrSplit = str.split(",");
                }
                StringBuilder sb = new StringBuilder();
                sb.append("isCdmaOnly PhoneId ");
                sb.append(this.mPhoneId);
                sb.append(", prop value= ");
                sb.append(str);
                sb.append(", size= ");
                sb.append(strArrSplit != null ? strArrSplit.length : 0);
                mtkLogd(sb.toString());
                return (strArrSplit == null || Arrays.asList(strArrSplit).contains("USIM") || Arrays.asList(strArrSplit).contains("SIM")) ? false : true;
            }
        }
        mtkLogd("isCdmaOnly: invalid PhoneId " + this.mPhoneId);
        return false;
    }

    public boolean isPhbReady() {
        String str = "";
        StringBuilder sb = new StringBuilder();
        sb.append("[phbReady] Start mPhbReady: ");
        sb.append(this.mPhbReady ? "true" : "false");
        mtkLogd(sb.toString());
        if (this.mParentApp == null) {
            return false;
        }
        String telephonyProperty = CsimPhbUtil.isUsingGsmPhbReady(this.mFh) ? TelephonyManager.getTelephonyProperty(this.mPhoneId, PROPERTY_RIL_GSM_PHB_READY, "false") : TelephonyManager.getTelephonyProperty(this.mPhoneId, PROPERTY_RIL_C2K_PHB_READY, "false");
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild")) {
            return telephonyProperty.equals("true");
        }
        String str2 = SystemProperties.get("gsm.sim.state");
        if (str2 != null && str2.length() > 0) {
            String[] strArrSplit = str2.split(",");
            int i = this.mPhoneId;
            if (i >= 0 && i < strArrSplit.length && strArrSplit[i] != null) {
                str = strArrSplit[i];
            }
        }
        boolean z = str.equals("NETWORK_LOCKED") || str.equals("PIN_REQUIRED");
        mtkLogd("[phbReady] End strPhbReady: " + telephonyProperty + ", strAllSimState: " + str2);
        return telephonyProperty.equals("true") && !z;
    }

    protected void log(String str) {
        Rlog.d(LOG_TAG, "[RuimRecords] " + str + " (phoneId " + this.mPhoneId + ")");
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, "[RuimRecords] " + str + " (phoneId " + this.mPhoneId + ")");
    }

    protected void onAllRecordsLoaded() {
        super.onAllRecordsLoaded();
        mtkLogd("onAllRecordsLoaded, mParentApp.getType() = " + this.mParentApp.getType());
        if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_RUIM) {
            this.mFh.loadEFTransparent(28466, obtainMessage(17));
        } else if (this.mParentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_CSIM) {
            this.mFh.loadEFTransparent(28466, obtainMessage(17));
            this.mFh.loadEFTransparent(MtkIccConstants.EF_EST, obtainMessage(EVENT_GET_EST_DONE));
        }
    }

    protected void onGetImsiDone(String str) {
        if (this.mImsi != null && !this.mImsi.equals("") && this.mImsi.length() >= 3) {
            SystemProperties.set("vendor.cdma.icc.operator.mcc", this.mImsi.substring(0, 3));
        }
        if (this.mImsi == null || this.mImsi.equals(this.mRuimImsi)) {
            return;
        }
        this.mRuimImsi = this.mImsi;
        this.mImsiReadyRegistrants.notifyRegistrants();
        mtkLogd("MtkRuimRecords: mImsiReadyRegistrants.notifyRegistrants");
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
    }

    protected void updateIccFdnStatus() {
        mtkLogd("updateIccFdnStatus mParentAPP=" + this.mParentApp + "  getSIMServiceStatus(Phone.IccService.FDN)=" + getSIMServiceStatus(IccServiceInfo.IccService.FDN) + "  IccServiceStatus.ACTIVATE=" + IccServiceInfo.IccServiceStatus.ACTIVATED);
        if (this.mParentApp == null || getSIMServiceStatus(IccServiceInfo.IccService.FDN) != IccServiceInfo.IccServiceStatus.ACTIVATED) {
            return;
        }
        this.mParentApp.queryFdn();
    }
}

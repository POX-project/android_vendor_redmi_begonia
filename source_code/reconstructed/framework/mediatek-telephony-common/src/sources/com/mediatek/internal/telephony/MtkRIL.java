package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.radio.V1_0.HardwareConfigModem;
import android.hardware.radio.V1_0.HardwareConfigSim;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_4.IRadio;
import android.hardware.radio.V1_5.RadioAccessSpecifier;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.Message;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.MtkRadioAccessFamily;
import android.telephony.NetworkScanRequest;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.Log;
import android.util.SparseArray;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.HardwareConfig;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.RILRequest;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.RegistrantList;
import com.android.internal.telephony.ServiceStateTracker;
import com.android.internal.telephony.TelephonyDevController;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.dataconnection.PlmnMvnoData;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.ims.MtkDedicateDataCallResponse;
import com.mediatek.internal.telephony.ims.MtkPacketFilterInfo;
import com.mediatek.internal.telephony.ims.MtkQosStatus;
import com.mediatek.internal.telephony.ims.MtkTftParameter;
import com.mediatek.internal.telephony.ims.MtkTftStatus;
import com.mediatek.internal.telephony.phb.PBEntry;
import com.mediatek.internal.telephony.phb.PhbEntry;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimConstants;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.Constructor;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.Iterator;
import java.util.Objects;
import java.util.TimeZone;
import java.util.Vector;
import java.util.concurrent.atomic.AtomicLong;
import mediatek.telephony.MtkSmsParameters;
import vendor.mediatek.hardware.mtkradioex.V2_0.CallForwardInfoEx;
import vendor.mediatek.hardware.mtkradioex.V2_0.DedicateDataCall;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx;
import vendor.mediatek.hardware.mtkradioex.V2_0.MtkApnTypes;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbEntryExt;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbEntryStructure;
import vendor.mediatek.hardware.mtkradioex.V2_0.PktFilter;
import vendor.mediatek.hardware.mtkradioex.V2_0.RsuRequestInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.SimAuthStructure;
import vendor.mediatek.hardware.mtkradioex.V2_0.SmsParams;

/* JADX INFO: loaded from: classes.dex */
public class MtkRIL extends RIL {
    public static final String CB_FACILITY_BA_ACR = "ACR";
    public static final int CF_REASON_NOT_REGISTERED = 6;
    public static final int DISPLAY_EONS = 1;
    public static final int DISPLAY_NITZ = 2;
    public static final int DISPLAY_SPN = 8;
    public static final int DISPLAY_TS25 = 4;
    protected static final int EVENT_MTKRADIOEX_PROXY_DEAD = 1006;
    static final String[] HIDL_SERVICE_NAME_MTK = {"mtkSlot1", "mtkSlot2", "mtkSlot3"};
    protected static final int IMTKRADIOEX_GET_SERVICE_DELAY_MILLIS = 1000;
    static final boolean MTK_RILJ_LOGD = true;
    static final boolean MTK_RILJ_LOGV = true;
    static final String RILJ_LOG_TAG = "MtkRILJ";
    public static final int SERVICE_CLASS_LINE2 = 256;
    public static final int SERVICE_CLASS_MTK_MAX = 512;
    public static final int SERVICE_CLASS_VIDEO = 512;
    private static final int WORLD_PHONE_RELOAD_TYPE = 1;
    private static final int WORLD_PHONE_STORE_TYPE = 2;
    public static final boolean showRat = true;
    private ArrayList<String> hide_plmns;
    protected RegistrantList mAttachApnChangedRegistrants;
    protected RegistrantList mBipProCmdRegistrant;
    protected Registrant mCDMACardEsnMeidRegistrant;
    protected RegistrantList mCallAdditionalInfoRegistrants;
    protected RegistrantList mCallForwardingInfoRegistrants;
    protected Registrant mCallRelatedSuppSvcRegistrant;
    protected RegistrantList mCardDetectedIndRegistrant;
    Object mCfuReturnValue;
    protected RegistrantList mCipherIndicationRegistrants;
    protected RegistrantList mCsNetworkStateRegistrants;
    protected RegistrantList mDataAllowedRegistrants;
    protected RegistrantList mDedicatedBearerActivedRegistrants;
    protected RegistrantList mDedicatedBearerDeactivatedRegistrants;
    protected RegistrantList mDedicatedBearerModifiedRegistrants;
    protected RegistrantList mDsbpStateRegistrant;
    protected RegistrantList mDsdaStateRegistrant;
    DtmfQueueHandler mDtmfReqQueue;
    protected RegistrantList mEconfSrvccRegistrants;
    protected Object mEcopsReturnValue;
    protected RegistrantList mEmbmsAtInfoNotificationRegistrant;
    protected RegistrantList mEmbmsSessionStatusNotificationRegistrant;
    protected Object mEmsrReturnValue;
    protected Object mEspOrMeid;
    protected Registrant mEtwsNotificationRegistrant;
    protected RegistrantList mFemtoCellInfoRegistrants;
    protected RegistrantList mGmssRatChangedRegistrant;
    private String mIccid;
    protected RegistrantList mIccidRegistrants;
    protected RegistrantList mImeiLockRegistrant;
    protected RegistrantList mImsiRefreshDoneRegistrant;
    protected Registrant mIncomingCallIndicationRegistrant;
    public Integer mInstanceId;
    BroadcastReceiver mIntentReceiver;
    protected RegistrantList mInvalidSimInfoRegistrant;
    public boolean mIsCardDetected;
    public boolean mIsSmsReady;
    protected RegistrantList mMccMncRegistrants;
    protected RegistrantList mMdDataRetryCountResetRegistrants;
    protected Registrant mMeSmsFullRegistrant;
    protected RegistrantList mMobileDataUsageRegistrants;
    protected RegistrantList mModulationRegistrants;
    protected Context mMtkContext;
    MtkRadioExIndication mMtkRadioExIndication;
    protected final AtomicLong mMtkRadioExProxyCookie;
    protected final MtkRadioExProxyDeathRecipient mMtkRadioExProxyDeathRecipient;
    MtkRadioExResponse mMtkRadioExResponse;
    MtkRadioIndication mMtkRadioIndication;
    MtkRadioResponse mMtkRadioResponse;
    private boolean mMtkRilJIntiDone;
    private IMtkRilOp mMtkRilOp;
    protected RegistrantList mNetworkEventRegistrants;
    protected RegistrantList mNetworkInfoRegistrant;
    protected RegistrantList mNetworkRejectRegistrants;
    protected RegistrantList mNwLimitRegistrants;
    protected RegistrantList mPcoDataAfterAttachedRegistrants;
    public RegistrantList mPhbReadyRegistrants;
    protected RegistrantList mPlmnChangeNotificationRegistrant;
    protected RegistrantList mPlmnDataRegistrants;
    private PlmnMvnoData mPlmnMvnoData;
    protected RegistrantList mPsNetworkStateRegistrants;
    protected RegistrantList mPseudoCellInfoRegistrants;
    protected RegistrantList mQualifiedNetworkTypesRegistrant;
    volatile IMtkRadioEx mRadioProxyMtk;
    protected Registrant mRegistrationSuspendedRegistrant;
    protected RegistrantList mRemoveRestrictEutranRegistrants;
    protected RegistrantList mResetAttachApnRegistrants;
    protected RegistrantList mRsuSimlockRegistrants;
    protected RegistrantList mSignalStrengthWithWcdmaEcioRegistrants;
    protected RegistrantList mSimCommonSlotNoChanged;
    protected RegistrantList mSimMissing;
    protected RegistrantList mSimPlugIn;
    protected RegistrantList mSimPlugOut;
    protected RegistrantList mSimPowerChanged;
    Object mSimPowerInfo;
    protected RegistrantList mSimRecovery;
    protected RegistrantList mSimTrayPlugIn;
    Object mSmlSlotLockInfo;
    protected RegistrantList mSmlSlotLockInfoChanged;
    protected RegistrantList mSmsInfoExtRegistrants;
    protected RegistrantList mSmsReadyRegistrants;
    protected Registrant mSsnExRegistrant;
    protected RegistrantList mStkSetupMenuResetRegistrant;
    protected RegistrantList mTxPowerRegistrant;
    protected RegistrantList mTxPowerStatusRegistrant;
    protected Registrant mUnsolOemHookRegistrant;
    protected RegistrantList mVirtualSimOff;
    protected RegistrantList mVirtualSimOn;
    protected RegistrantList mVsimIndicationRegistrants;
    protected Object mWPMonitor;

    class DtmfQueueHandler {
        private boolean mDtmfStatus;
        public final int MAXIMUM_DTMF_REQUEST = 32;
        private final boolean DTMF_STATUS_START = true;
        private final boolean DTMF_STATUS_STOP = false;
        private Vector mDtmfQueue = new Vector(32);
        private DtmfQueueRR mPendingCHLDRequest = null;
        private boolean mIsSendChldRequest = false;

        public class DtmfQueueRR {
            public Object[] params;
            public RILRequest rr;

            public DtmfQueueRR(RILRequest rILRequest, Object[] objArr) {
                this.rr = rILRequest;
                this.params = objArr;
            }
        }

        public DtmfQueueHandler() {
            this.mDtmfStatus = false;
            this.mDtmfStatus = false;
        }

        public void add(DtmfQueueRR dtmfQueueRR) {
            this.mDtmfQueue.addElement(dtmfQueueRR);
        }

        public DtmfQueueRR buildDtmfQueueRR(RILRequest rILRequest, Object[] objArr) {
            if (rILRequest == null) {
                return null;
            }
            MtkRIL.this.mtkRiljLog("DtmfQueueHandler.buildDtmfQueueRR build ([" + rILRequest.mSerial + "] reqId=" + rILRequest.mRequest + ")");
            return new DtmfQueueRR(rILRequest, objArr);
        }

        public DtmfQueueRR get() {
            return (DtmfQueueRR) this.mDtmfQueue.get(0);
        }

        public DtmfQueueRR getPendingRequest() {
            return this.mPendingCHLDRequest;
        }

        public boolean hasSendChldRequest() {
            MtkRIL.this.mtkRiljLog("mIsSendChldRequest = " + this.mIsSendChldRequest);
            return this.mIsSendChldRequest;
        }

        public boolean isStart() {
            return this.mDtmfStatus;
        }

        public void remove(int i) {
            this.mDtmfQueue.removeElementAt(i);
        }

        public void remove(DtmfQueueRR dtmfQueueRR) {
            this.mDtmfQueue.remove(dtmfQueueRR);
        }

        public void resetSendChldRequest() {
            this.mIsSendChldRequest = false;
        }

        public void setPendingRequest(DtmfQueueRR dtmfQueueRR) {
            this.mPendingCHLDRequest = dtmfQueueRR;
        }

        public void setSendChldRequest() {
            this.mIsSendChldRequest = true;
        }

        public int size() {
            return this.mDtmfQueue.size();
        }

        public void start() {
            this.mDtmfStatus = true;
        }

        public void stop() {
            this.mDtmfStatus = false;
        }
    }

    final class MtkRadioExProxyDeathRecipient implements IHwBinder.DeathRecipient {
        MtkRadioExProxyDeathRecipient() {
        }

        public void serviceDied(long j) {
            MtkRIL.this.riljLog("IMtkRadioEx serviceDied");
            MtkRIL.this.mRilHandler.removeMessages(1006);
            MtkRIL.this.mRilHandler.sendMessageDelayed(MtkRIL.this.mRilHandler.obtainMessage(1006, Long.valueOf(MtkRIL.this.mMtkRadioExProxyCookie.get())), 1000L);
        }
    }

    public class MtkRilHandler extends RIL.RilHandler {
        public MtkRilHandler() {
            super(MtkRIL.this);
        }

        public void handleMessage(Message message) {
            if (message.what != 1006) {
                super.handleMessage(message);
                return;
            }
            MtkRIL.this.riljLog("handleMessage: EVENT_MTKRADIOEX_PROXY_DEAD cookie = " + message.obj + " mMtkRadioExProxyCookie = " + MtkRIL.this.mMtkRadioExProxyCookie.get());
            if (((Long) message.obj).longValue() == MtkRIL.this.mMtkRadioExProxyCookie.get()) {
                if (MtkRIL.this.mRadioProxy != null) {
                    MtkRIL.this.resetMtkProxyAndRequestList();
                    return;
                }
                MtkRIL.this.riljLoge("handleMessage: wait for getting mRadioProxy");
                MtkRIL.this.mRilHandler.removeMessages(1006);
                MtkRIL.this.mRilHandler.sendMessageDelayed(MtkRIL.this.mRilHandler.obtainMessage(1006, Long.valueOf(MtkRIL.this.mMtkRadioExProxyCookie.get())), 1000L);
            }
        }
    }

    public MtkRIL() {
        this.mRadioProxyMtk = null;
        this.mMtkRilJIntiDone = false;
        this.mCallAdditionalInfoRegistrants = new RegistrantList();
        this.mCipherIndicationRegistrants = new RegistrantList();
        this.mFemtoCellInfoRegistrants = new RegistrantList();
        this.mEmbmsSessionStatusNotificationRegistrant = new RegistrantList();
        this.mEmbmsAtInfoNotificationRegistrant = new RegistrantList();
        this.mPhbReadyRegistrants = new RegistrantList();
        this.mCallForwardingInfoRegistrants = new RegistrantList();
        this.mTxPowerRegistrant = new RegistrantList();
        this.mTxPowerStatusRegistrant = new RegistrantList();
        this.mCfuReturnValue = null;
        this.mIccidRegistrants = new RegistrantList();
        this.mMtkRilOp = null;
        this.mMtkRadioExProxyCookie = new AtomicLong(0L);
        this.mIccid = null;
        this.mDtmfReqQueue = new DtmfQueueHandler();
        this.mPlmnChangeNotificationRegistrant = new RegistrantList();
        this.mEmsrReturnValue = null;
        this.mEcopsReturnValue = null;
        this.mWPMonitor = new Object();
        this.mGmssRatChangedRegistrant = new RegistrantList();
        this.mResetAttachApnRegistrants = new RegistrantList();
        this.mAttachApnChangedRegistrants = new RegistrantList();
        this.mPcoDataAfterAttachedRegistrants = new RegistrantList();
        this.mRemoveRestrictEutranRegistrants = new RegistrantList();
        this.mMdDataRetryCountResetRegistrants = new RegistrantList();
        this.mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkRIL.1
            private static final int MODE_CDMA_ASSERT = 31;
            private static final int MODE_CDMA_RESET = 32;
            private static final int MODE_CDMA_RILD_NE = 103;
            private static final int MODE_GSM_RILD_NE = 101;
            private static final int MODE_PHONE_PROCESS_JE = 100;

            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                if (!intent.getAction().equals("com.mtk.TEST_TRM")) {
                    Rlog.w(MtkRIL.RILJ_LOG_TAG, "RIL received unexpected Intent: " + intent.getAction());
                    return;
                }
                int intExtra = intent.getIntExtra("mode", 2);
                Rlog.d(MtkRIL.RILJ_LOG_TAG, "RIL received com.mtk.TEST_TRM, mode = " + intExtra + ", mInstanceIds = " + MtkRIL.this.mInstanceId);
                if (intExtra == 100) {
                    throw new RuntimeException("UserTriggerPhoneJE");
                }
                MtkRIL.this.setTrm(intExtra, null);
            }
        };
        this.hide_plmns = new ArrayList<>();
        this.mCsNetworkStateRegistrants = new RegistrantList();
        this.mSignalStrengthWithWcdmaEcioRegistrants = new RegistrantList();
        this.mVirtualSimOn = new RegistrantList();
        this.mVirtualSimOff = new RegistrantList();
        this.mImeiLockRegistrant = new RegistrantList();
        this.mImsiRefreshDoneRegistrant = new RegistrantList();
        this.mCardDetectedIndRegistrant = new RegistrantList();
        this.mRsuSimlockRegistrants = new RegistrantList();
        this.mInvalidSimInfoRegistrant = new RegistrantList();
        this.mNetworkEventRegistrants = new RegistrantList();
        this.mNetworkRejectRegistrants = new RegistrantList();
        this.mModulationRegistrants = new RegistrantList();
        this.mIsSmsReady = false;
        this.mSmsReadyRegistrants = new RegistrantList();
        this.mSmsInfoExtRegistrants = new RegistrantList();
        this.mEspOrMeid = null;
        this.mIsCardDetected = false;
        this.mPsNetworkStateRegistrants = new RegistrantList();
        this.mNetworkInfoRegistrant = new RegistrantList();
        this.mDataAllowedRegistrants = new RegistrantList();
        this.mPseudoCellInfoRegistrants = new RegistrantList();
        this.mSimTrayPlugIn = new RegistrantList();
        this.mSimCommonSlotNoChanged = new RegistrantList();
        this.mBipProCmdRegistrant = new RegistrantList();
        this.mStkSetupMenuResetRegistrant = new RegistrantList();
        this.mSimPlugIn = new RegistrantList();
        this.mSimPlugOut = new RegistrantList();
        this.mSimMissing = new RegistrantList();
        this.mSimRecovery = new RegistrantList();
        this.mSimPowerChanged = new RegistrantList();
        this.mSimPowerInfo = null;
        this.mSmlSlotLockInfoChanged = new RegistrantList();
        this.mSmlSlotLockInfo = null;
        this.mEconfSrvccRegistrants = new RegistrantList();
        this.mMccMncRegistrants = new RegistrantList();
        this.mVsimIndicationRegistrants = new RegistrantList();
        this.mDedicatedBearerActivedRegistrants = new RegistrantList();
        this.mDedicatedBearerModifiedRegistrants = new RegistrantList();
        this.mDedicatedBearerDeactivatedRegistrants = new RegistrantList();
        this.mDsbpStateRegistrant = new RegistrantList();
        this.mDsdaStateRegistrant = new RegistrantList();
        this.mQualifiedNetworkTypesRegistrant = new RegistrantList();
        this.mMobileDataUsageRegistrants = new RegistrantList();
        this.mNwLimitRegistrants = new RegistrantList();
        this.mPlmnDataRegistrants = new RegistrantList();
        this.mPlmnMvnoData = null;
        this.mMtkRadioExProxyDeathRecipient = null;
    }

    public MtkRIL(Context context, int i, int i2, Integer num) {
        super(context, i, i2, num);
        this.mRadioProxyMtk = null;
        this.mMtkRilJIntiDone = false;
        this.mCallAdditionalInfoRegistrants = new RegistrantList();
        this.mCipherIndicationRegistrants = new RegistrantList();
        this.mFemtoCellInfoRegistrants = new RegistrantList();
        this.mEmbmsSessionStatusNotificationRegistrant = new RegistrantList();
        this.mEmbmsAtInfoNotificationRegistrant = new RegistrantList();
        this.mPhbReadyRegistrants = new RegistrantList();
        this.mCallForwardingInfoRegistrants = new RegistrantList();
        this.mTxPowerRegistrant = new RegistrantList();
        this.mTxPowerStatusRegistrant = new RegistrantList();
        this.mCfuReturnValue = null;
        this.mIccidRegistrants = new RegistrantList();
        this.mMtkRilOp = null;
        this.mMtkRadioExProxyCookie = new AtomicLong(0L);
        this.mIccid = null;
        this.mDtmfReqQueue = new DtmfQueueHandler();
        this.mPlmnChangeNotificationRegistrant = new RegistrantList();
        this.mEmsrReturnValue = null;
        this.mEcopsReturnValue = null;
        this.mWPMonitor = new Object();
        this.mGmssRatChangedRegistrant = new RegistrantList();
        this.mResetAttachApnRegistrants = new RegistrantList();
        this.mAttachApnChangedRegistrants = new RegistrantList();
        this.mPcoDataAfterAttachedRegistrants = new RegistrantList();
        this.mRemoveRestrictEutranRegistrants = new RegistrantList();
        this.mMdDataRetryCountResetRegistrants = new RegistrantList();
        this.mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkRIL.1
            private static final int MODE_CDMA_ASSERT = 31;
            private static final int MODE_CDMA_RESET = 32;
            private static final int MODE_CDMA_RILD_NE = 103;
            private static final int MODE_GSM_RILD_NE = 101;
            private static final int MODE_PHONE_PROCESS_JE = 100;

            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                if (!intent.getAction().equals("com.mtk.TEST_TRM")) {
                    Rlog.w(MtkRIL.RILJ_LOG_TAG, "RIL received unexpected Intent: " + intent.getAction());
                    return;
                }
                int intExtra = intent.getIntExtra("mode", 2);
                Rlog.d(MtkRIL.RILJ_LOG_TAG, "RIL received com.mtk.TEST_TRM, mode = " + intExtra + ", mInstanceIds = " + MtkRIL.this.mInstanceId);
                if (intExtra == 100) {
                    throw new RuntimeException("UserTriggerPhoneJE");
                }
                MtkRIL.this.setTrm(intExtra, null);
            }
        };
        this.hide_plmns = new ArrayList<>();
        this.mCsNetworkStateRegistrants = new RegistrantList();
        this.mSignalStrengthWithWcdmaEcioRegistrants = new RegistrantList();
        this.mVirtualSimOn = new RegistrantList();
        this.mVirtualSimOff = new RegistrantList();
        this.mImeiLockRegistrant = new RegistrantList();
        this.mImsiRefreshDoneRegistrant = new RegistrantList();
        this.mCardDetectedIndRegistrant = new RegistrantList();
        this.mRsuSimlockRegistrants = new RegistrantList();
        this.mInvalidSimInfoRegistrant = new RegistrantList();
        this.mNetworkEventRegistrants = new RegistrantList();
        this.mNetworkRejectRegistrants = new RegistrantList();
        this.mModulationRegistrants = new RegistrantList();
        this.mIsSmsReady = false;
        this.mSmsReadyRegistrants = new RegistrantList();
        this.mSmsInfoExtRegistrants = new RegistrantList();
        this.mEspOrMeid = null;
        this.mIsCardDetected = false;
        this.mPsNetworkStateRegistrants = new RegistrantList();
        this.mNetworkInfoRegistrant = new RegistrantList();
        this.mDataAllowedRegistrants = new RegistrantList();
        this.mPseudoCellInfoRegistrants = new RegistrantList();
        this.mSimTrayPlugIn = new RegistrantList();
        this.mSimCommonSlotNoChanged = new RegistrantList();
        this.mBipProCmdRegistrant = new RegistrantList();
        this.mStkSetupMenuResetRegistrant = new RegistrantList();
        this.mSimPlugIn = new RegistrantList();
        this.mSimPlugOut = new RegistrantList();
        this.mSimMissing = new RegistrantList();
        this.mSimRecovery = new RegistrantList();
        this.mSimPowerChanged = new RegistrantList();
        this.mSimPowerInfo = null;
        this.mSmlSlotLockInfoChanged = new RegistrantList();
        this.mSmlSlotLockInfo = null;
        this.mEconfSrvccRegistrants = new RegistrantList();
        this.mMccMncRegistrants = new RegistrantList();
        this.mVsimIndicationRegistrants = new RegistrantList();
        this.mDedicatedBearerActivedRegistrants = new RegistrantList();
        this.mDedicatedBearerModifiedRegistrants = new RegistrantList();
        this.mDedicatedBearerDeactivatedRegistrants = new RegistrantList();
        this.mDsbpStateRegistrant = new RegistrantList();
        this.mDsdaStateRegistrant = new RegistrantList();
        this.mQualifiedNetworkTypesRegistrant = new RegistrantList();
        this.mMobileDataUsageRegistrants = new RegistrantList();
        this.mNwLimitRegistrants = new RegistrantList();
        this.mPlmnDataRegistrants = new RegistrantList();
        this.mPlmnMvnoData = null;
        Rlog.d(RILJ_LOG_TAG, "constructor: sub = " + num);
        this.mRilHandler = new MtkRilHandler();
        this.mMtkRadioExProxyDeathRecipient = new MtkRadioExProxyDeathRecipient();
        this.mMtkContext = context;
        this.mInstanceId = num;
        TelephonyDevController.getInstance().registerRIL(this);
        this.mMtkRadioExResponse = new MtkRadioExResponse(this);
        this.mMtkRadioExIndication = new MtkRadioExIndication(this);
        if (num.intValue() == 0) {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.mtk.TEST_TRM");
            context.registerReceiver(this.mIntentReceiver, intentFilter);
        }
        this.mMtkRilJIntiDone = true;
        getMtkRadioExProxy(null);
        getRilOp();
    }

    private void clearRequestWithError(RILRequest rILRequest, int i) {
        RadioResponseInfo radioResponseInfo = new RadioResponseInfo();
        SparseArray rilRequestList = getRilRequestList();
        Rlog.e(RILJ_LOG_TAG, "clearRequestWithError target=" + rILRequest.mRequest);
        synchronized (rilRequestList) {
            rilRequestList.remove(rILRequest.mSerial);
        }
        radioResponseInfo.type = 0;
        radioResponseInfo.serial = rILRequest.mSerial;
        radioResponseInfo.error = i;
        processResponseDone(rILRequest, radioResponseInfo, null);
    }

    private static PhbEntryExt convertToHalPhbEntryExt(PBEntry pBEntry) {
        PhbEntryExt phbEntryExt = new PhbEntryExt();
        phbEntryExt.index = pBEntry.getIndex1();
        phbEntryExt.number = pBEntry.getNumber();
        phbEntryExt.type = pBEntry.getType();
        phbEntryExt.text = pBEntry.getText();
        phbEntryExt.hidden = pBEntry.getHidden();
        phbEntryExt.group = pBEntry.getGroup();
        phbEntryExt.adnumber = pBEntry.getAdnumber();
        phbEntryExt.adtype = pBEntry.getAdtype();
        phbEntryExt.secondtext = pBEntry.getSecondtext();
        phbEntryExt.email = pBEntry.getEmail();
        return phbEntryExt;
    }

    private PhbEntryStructure convertToHalPhbEntryStructure(PhbEntry phbEntry) {
        PhbEntryStructure phbEntryStructure = new PhbEntryStructure();
        phbEntryStructure.type = phbEntry.type;
        phbEntryStructure.index = phbEntry.index;
        phbEntryStructure.number = convertNullToEmptyString(phbEntry.number);
        phbEntryStructure.ton = phbEntry.ton;
        phbEntryStructure.alphaId = convertNullToEmptyString(phbEntry.alphaId);
        return phbEntryStructure;
    }

    private SimAuthStructure convertToHalSimAuthStructure(int i, int i2, int i3, String str, String str2) {
        String str3;
        String str4;
        SimAuthStructure simAuthStructure = new SimAuthStructure();
        simAuthStructure.sessionId = i;
        simAuthStructure.mode = i2;
        if (str == null || str.length() <= 0) {
            simAuthStructure.param1 = convertNullToEmptyString(str);
        } else {
            String hexString = Integer.toHexString(str.length() / 2);
            StringBuilder sb = new StringBuilder();
            sb.append(hexString.length() % 2 == 1 ? "0" : "");
            sb.append(hexString);
            String string = sb.toString();
            if (i == 0) {
                str4 = str;
            } else {
                str4 = string + str;
            }
            simAuthStructure.param1 = convertNullToEmptyString(str4);
        }
        if (str2 == null || str2.length() <= 0) {
            simAuthStructure.param2 = convertNullToEmptyString(str2);
        } else {
            String hexString2 = Integer.toHexString(str2.length() / 2);
            StringBuilder sb2 = new StringBuilder();
            sb2.append(hexString2.length() % 2 != 1 ? "" : "0");
            sb2.append(hexString2);
            String string2 = sb2.toString();
            if (i == 0) {
                str3 = str2;
            } else {
                str3 = string2 + str2;
            }
            simAuthStructure.param2 = convertNullToEmptyString(str3);
        }
        if (i2 == 1) {
            simAuthStructure.tag = i3;
        }
        return simAuthStructure;
    }

    private int getPlmnListDisplayRule(String str, String str2) {
        String str3 = SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR);
        return ((TextUtils.isEmpty(str3) || !str3.equals("OP07")) && !TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2) && str.equals(str2)) ? 7 : 7;
    }

    private void handleChldRelatedRequest(RILRequest rILRequest, Object[] objArr) {
        synchronized (this.mDtmfReqQueue) {
            int size = this.mDtmfReqQueue.size();
            if (size > 0) {
                if (this.mDtmfReqQueue.get().rr.mRequest == 49) {
                    Rlog.d(RILJ_LOG_TAG, "DTMF queue isn't 0, first request is START, send stop dtmf and pending switch");
                    int i = size > 1 ? 2 : 1;
                    Rlog.d(RILJ_LOG_TAG, "queue size  " + this.mDtmfReqQueue.size());
                    for (int i2 = size + (-1); i2 >= i; i2--) {
                        this.mDtmfReqQueue.remove(i2);
                    }
                    if (this.mDtmfReqQueue.size() == 1) {
                        Rlog.d(RILJ_LOG_TAG, "add dummy stop dtmf request");
                        RILRequest rILRequestObtainRequest = obtainRequest(50, null, this.mRILDefaultWorkSource, new Object[0]);
                        new Class[1][0] = Integer.TYPE;
                        DtmfQueueHandler.DtmfQueueRR dtmfQueueRRBuildDtmfQueueRR = this.mDtmfReqQueue.buildDtmfQueueRR(rILRequestObtainRequest, new Object[]{Integer.valueOf(rILRequestObtainRequest.mSerial)});
                        this.mDtmfReqQueue.stop();
                        this.mDtmfReqQueue.add(dtmfQueueRRBuildDtmfQueueRR);
                    }
                } else {
                    Rlog.d(RILJ_LOG_TAG, "DTMF queue isn't 0, first is STOP, penging switch");
                    for (int i3 = size - 1; i3 >= 1; i3--) {
                        this.mDtmfReqQueue.remove(i3);
                    }
                }
                if (this.mDtmfReqQueue.getPendingRequest() != null) {
                    RILRequest rILRequest2 = this.mDtmfReqQueue.getPendingRequest().rr;
                    if (rILRequest2.mResult != null) {
                        AsyncResult.forMessage(rILRequest2.mResult, (Object) null, (Throwable) null);
                        rILRequest2.mResult.sendToTarget();
                    }
                }
                this.mDtmfReqQueue.setPendingRequest(this.mDtmfReqQueue.buildDtmfQueueRR(rILRequest, objArr));
            } else {
                Rlog.d(RILJ_LOG_TAG, "DTMF queue is 0, send switch Immediately");
                this.mDtmfReqQueue.setSendChldRequest();
                sendDtmfQueueRR(this.mDtmfReqQueue.buildDtmfQueueRR(rILRequest, objArr));
            }
        }
    }

    private void handleProxyNotExist(Message message) {
        if (message != null) {
            AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
            message.sendToTarget();
        }
    }

    private RadioAccessSpecifier mtkConvertRadioAccessSpecifierToRadioHAL_1_5(android.telephony.RadioAccessSpecifier radioAccessSpecifier) {
        RadioAccessSpecifier radioAccessSpecifier2 = new RadioAccessSpecifier();
        radioAccessSpecifier2.radioAccessNetwork = radioAccessSpecifier.getRadioAccessNetwork();
        ArrayList arrayList = new ArrayList();
        if (radioAccessSpecifier.getBands() != null) {
            for (int i : radioAccessSpecifier.getBands()) {
                arrayList.add(Integer.valueOf(i));
            }
        }
        int radioAccessNetwork = radioAccessSpecifier.getRadioAccessNetwork();
        if (radioAccessNetwork == 1) {
            radioAccessSpecifier2.radioAccessNetwork = 1;
            radioAccessSpecifier2.bands.geranBands(arrayList);
        } else if (radioAccessNetwork == 2) {
            radioAccessSpecifier2.radioAccessNetwork = 2;
            radioAccessSpecifier2.bands.utranBands(arrayList);
        } else if (radioAccessNetwork == 3) {
            radioAccessSpecifier2.radioAccessNetwork = 3;
            radioAccessSpecifier2.bands.eutranBands(arrayList);
        } else {
            if (radioAccessNetwork != 6) {
                Log.wtf(RILJ_LOG_TAG, "radioAccessNetwork " + radioAccessSpecifier.getRadioAccessNetwork() + " not supported!");
                return null;
            }
            radioAccessSpecifier2.radioAccessNetwork = 4;
            radioAccessSpecifier2.bands.ngranBands(arrayList);
        }
        if (radioAccessSpecifier.getChannels() != null) {
            for (int i2 : radioAccessSpecifier.getChannels()) {
                radioAccessSpecifier2.channels.add(Integer.valueOf(i2));
            }
        }
        return radioAccessSpecifier2;
    }

    public static String requestToStringEx(Integer num) {
        String str;
        int iIntValue = num.intValue();
        if (iIntValue == 59) {
            str = "OEM_HOOK_RAW";
        } else if (iIntValue == 60) {
            str = "OEM_HOOK_STRINGS";
        } else if (iIntValue == 2062) {
            str = "RIL_REQUEST_SYNC_DATA_SETTINGS_TO_MD";
        } else if (iIntValue == 2063) {
            str = "RIL_REQUEST_RESET_MD_DATA_RETRY_COUNT";
        } else if (iIntValue == 2067) {
            str = "RIL_REQUEST_QUERY_SIM_NETWORK_LOCK";
        } else if (iIntValue != 2068) {
            switch (iIntValue) {
                case MtkGsmCdmaPhone.EVENT_IMS_UT_DONE /* 2000 */:
                    str = "RIL_REQUEST_RESUME_REGISTRATION";
                    break;
                case 2019:
                    str = "HANGUP_ALL";
                    break;
                case 2028:
                    str = "RIL_REQUEST_SET_TRM";
                    break;
                case 2030:
                    str = "RIL_REQUEST_SET_ECC_LIST";
                    break;
                case 2035:
                    str = "SET_ECC_MODE";
                    break;
                case 2036:
                    str = "RIL_REQUEST_QUERY_PHB_STORAGE_INFO";
                    break;
                case 2037:
                    str = "RIL_REQUEST_WRITE_PHB_ENTRY";
                    break;
                case 2038:
                    str = "RIL_REQUEST_READ_PHB_ENTRY";
                    break;
                case 2039:
                    str = "RIL_REQUEST_QUERY_UPB_CAPABILITY";
                    break;
                case 2040:
                    str = "RIL_REQUEST_EDIT_UPB_ENTRY";
                    break;
                case 2041:
                    str = "RIL_REQUEST_DELETE_UPB_ENTRY";
                    break;
                case 2042:
                    str = "RIL_REQUEST_READ_UPB_GAS_LIST";
                    break;
                case 2043:
                    str = "RIL_REQUEST_READ_UPB_GRP";
                    break;
                case 2044:
                    str = "RIL_REQUEST_WRITE_UPB_GRP";
                    break;
                case 2045:
                    str = "RIL_REQUEST_GET_PHB_STRING_LENGTH";
                    break;
                case 2046:
                    str = "RIL_REQUEST_GET_PHB_MEM_STORAGE";
                    break;
                case 2047:
                    str = "RIL_REQUEST_SET_PHB_MEM_STORAGE";
                    break;
                case MtkApnTypes.XCAP /* 2048 */:
                    str = "RIL_REQUEST_READ_PHB_ENTRY_EXT";
                    break;
                case 2049:
                    str = "RIL_REQUEST_WRITE_PHB_ENTRY_EXT";
                    break;
                case 2050:
                    str = "RIL_REQUEST_QUERY_UPB_AVAILABLE";
                    break;
                case 2051:
                    str = "RIL_REQUEST_READ_EMAIL_ENTRY";
                    break;
                case 2052:
                    str = "RIL_REQUEST_READ_SNE_ENTRY";
                    break;
                case 2053:
                    str = "RIL_REQUEST_READ_ANR_ENTRY";
                    break;
                case 2054:
                    str = "RIL_REQUEST_READ_UPB_AAS_LIST";
                    break;
                case 2055:
                    str = "REQUEST_GET_FEMTOCELL_LIST";
                    break;
                case 2056:
                    str = "REQUEST_ABORT_FEMTOCELL_LIST";
                    break;
                case 2057:
                    str = "REQUEST_SELECT_FEMTOCELL";
                    break;
                case 2058:
                    str = "REQUEST_QUERY_FEMTOCELL_SYSTEM_SELECTION_MODE";
                    break;
                case 2059:
                    str = "REQUEST_SET_FEMTOCELL_SYSTEM_SELECTION_MODE";
                    break;
                case 2060:
                    str = "RIL_REQUEST_EMBMS_AT_CMD";
                    break;
                case 2130:
                    str = "RIL_REQUEST_SET_SERVICE_STATE";
                    break;
                case 2133:
                    str = "RIL_REQUEST_IMS_SEND_SMS_EX";
                    break;
                case 2157:
                    str = "RIL_REQUEST_SET_PHONEBOOK_READY";
                    break;
                case 2158:
                    str = "RIL_REQUEST_SET_TX_POWER_STATUS";
                    break;
                case 2159:
                    str = "RIL_REQUEST_SETPROP_IMS_HANDOVER";
                    break;
                case 2168:
                    str = "RIL_REQUEST_SET_SS_PROPERTY";
                    break;
                case 2171:
                    str = "RIL_REQUEST_ENTER_DEVICE_NETWORK_DEPERSONALIZATION";
                    break;
                case 2173:
                    str = "RIL_REQUEST_SET_VENDOR_SETTING";
                    break;
                case 2180:
                    str = "RIL_REQUEST_SET_GWSD_MODE";
                    break;
                case 2181:
                    str = "RIL_REQUEST_SET_GWSD_CALL_VALID";
                    break;
                case 2182:
                    str = "RIL_REQUEST_SET_GWSD_IGNORE_CALL_INTERVAL";
                    break;
                case 2183:
                    str = "HANGUP_WITH_REASON";
                    break;
                case 2184:
                    str = "RIL_REQUEST_MODIFY_MODEM_TYPE";
                    break;
                case 2185:
                    str = "RIL_REQUEST_ENABLE_DSDA_INDICATION";
                    break;
                case 2186:
                    str = "RIL_REQUEST_GET_DSDA_STATUS";
                    break;
                case 2188:
                    str = "RIL_REQUEST_IWLAN_REGISTER_CELLULAR_QUALITY_REPORT";
                    break;
                case 2189:
                    str = "RIL_REQUEST_GET_SUGGESTED_PLMN_LIST";
                    break;
                case 2190:
                    str = "RIL_REQUEST_CONFIG_A2_OFFSET";
                    break;
                case 2191:
                    str = "RIL_REQUEST_CONFIG_B1_OFFSET";
                    break;
                case 2192:
                    str = "RIL_REQUEST_ENABLE_SCG_FAILURE";
                    break;
                case 2193:
                    str = "RIL_REQUEST_DISABLE_NR";
                    break;
                case 2194:
                    str = "RIL_REQUEST_SET_TX_POWER";
                    break;
                case 2195:
                    str = "RIL_REQUEST_SEARCH_STORED_FREQUENCY_INFO";
                    break;
                case 2196:
                    str = "RIL_REQUEST_SEARCH_RAT";
                    break;
                case 2197:
                    str = "RIL_REQUEST_SET_BACKGROUND_SEARCH_TIMER";
                    break;
                case 2199:
                    str = "RIL_REQUEST_SET_GWSD_KEEP_ALIVE_PDCP";
                    break;
                case 2200:
                    str = "RIL_REQUEST_SET_GWSD_KEEP_ALIVE_IPDATA";
                    break;
                case 2201:
                    str = "RIL_REQUEST_SEND_SAR_INDICATOR";
                    break;
                case 2202:
                    str = "RIL_REQUEST_DEACTIVATE_NR_SCG_COMMUNICATION";
                    break;
                case 2203:
                    str = "RIL_REQUEST_GET_DEACTIVATE_NR_SCG_COMMUNICATION";
                    break;
                case 2204:
                    str = "RIL_REQUEST_SML_RSU_REQUEST";
                    break;
                case 2205:
                    str = "RIL_REQUEST_SEND_WIFI_ENABLED";
                    break;
                case 2206:
                    str = "RIL_REQUEST_SEND_WIFI_ASSOCIATED";
                    break;
                case 2207:
                    str = "RIL_REQUEST_SEND_WIFI_IP_ADDRESS";
                    break;
                case 2208:
                    str = "RIL_REQUEST_SET_CALL_SUB_ADDRESS";
                    break;
                case 2209:
                    str = "RIL_REQUEST_GET_CALL_SUB_ADDRESS";
                    break;
                default:
                    switch (iIntValue) {
                        case ExternalSimConstants.MSG_ID_CAPABILITY_SWITCH_DONE /* 2002 */:
                            str = "RIL_REQUEST_SET_SIM_POWER";
                            break;
                        case 2003:
                            str = "RIL_REQUEST_MODEM_POWERON";
                            break;
                        case MtkGsmCdmaPhone.EVENT_GET_CLIR_COMPLETE /* 2004 */:
                            str = "RIL_REQUEST_MODEM_POWEROFF";
                            break;
                        case MtkGsmCdmaPhone.EVENT_SET_CALL_BARRING_COMPLETE /* 2005 */:
                            str = "SET_NETWORK_SELECTION_MANUAL_WITH_ACT";
                            break;
                        case MtkGsmCdmaPhone.EVENT_GET_CALL_BARRING_COMPLETE /* 2006 */:
                            str = "QUERY_AVAILABLE_NETWORKS_WITH_ACT";
                            break;
                        case 2007:
                            str = "ABORT_QUERY_AVAILABLE_NETWORKS";
                            break;
                        default:
                            switch (iIntValue) {
                                case 2009:
                                    str = "RIL_REQUEST_GSM_SET_BROADCAST_LANGUAGE";
                                    break;
                                case 2010:
                                    str = "RIL_REQUEST_GSM_GET_BROADCAST_LANGUAGE";
                                    break;
                                case 2011:
                                    str = "RIL_REQUEST_GET_SMS_SIM_MEM_STATUS";
                                    break;
                                case 2012:
                                    str = "RIL_REQUEST_GET_SMS_PARAMS";
                                    break;
                                case 2013:
                                    str = "RIL_REQUEST_SET_SMS_PARAMS";
                                    break;
                                case 2014:
                                    str = "RIL_REQUEST_SET_ETWS";
                                    break;
                                case 2015:
                                    str = "RIL_REQUEST_REMOVE_CB_MESSAGE";
                                    break;
                                case 2016:
                                    str = "SET_CALL_INDICATION";
                                    break;
                                default:
                                    switch (iIntValue) {
                                        case 2021:
                                            str = "RIL_REQUEST_SET_PSEUDO_CELL_MODE";
                                            break;
                                        case 2022:
                                            str = "RIL_REQUEST_GET_PSEUDO_CELL_INFO";
                                            break;
                                        case 2023:
                                            str = "RIL_REQUEST_SWITCH_MODE_FOR_ECC";
                                            break;
                                        case 2024:
                                            str = "RIL_REQUEST_GET_SMS_RUIM_MEM_STATUS";
                                            break;
                                        case 2025:
                                            str = "RIL_REQUEST_SET_FD_MODE";
                                            break;
                                        default:
                                            switch (iIntValue) {
                                                case 2100:
                                                    str = "RIL_REQUEST_SET_REMOVE_RESTRICT_EUTRAN_MODE";
                                                    break;
                                                case 2101:
                                                    str = "RIL_REQUEST_VSS_ANTENNA_CONF";
                                                    break;
                                                case 2102:
                                                    str = "RIL_REQUEST_VSS_ANTENNA_INFO";
                                                    break;
                                                case 2103:
                                                    str = "RIL_REQUEST_SET_CLIP";
                                                    break;
                                                case 2104:
                                                    str = "RIL_REQUEST_GET_COLP";
                                                    break;
                                                case 2105:
                                                    str = "RIL_REQUEST_GET_COLR";
                                                    break;
                                                case 2106:
                                                    str = "RIL_REQUEST_SEND_CNAP";
                                                    break;
                                                case 2107:
                                                    str = "RIL_REQUEST_GET_POL_CAPABILITY";
                                                    break;
                                                case 2108:
                                                    str = "RIL_REQUEST_GET_POL_LIST";
                                                    break;
                                                case 2109:
                                                    str = "RIL_REQUEST_SET_POL_ENTRY";
                                                    break;
                                                case 2110:
                                                    str = "ECC_PREFERRED_RAT";
                                                    break;
                                                case 2111:
                                                    str = "SET_ROAMING_ENABLE";
                                                    break;
                                                case 2112:
                                                    str = "GET_ROAMING_ENABLE";
                                                    break;
                                                case 2113:
                                                    str = "RIL_REQUEST_VSIM_NOTIFICATION";
                                                    break;
                                                case 2114:
                                                    str = "RIL_REQUEST_VSIM_OPERATION";
                                                    break;
                                                case 2115:
                                                    str = "RIL_REQUEST_GET_GSM_SMS_BROADCAST_ACTIVATION";
                                                    break;
                                                case 2116:
                                                    str = "RIL_REQUEST_SET_WIFI_ENABLED";
                                                    break;
                                                case 2117:
                                                    str = "RIL_REQUEST_SET_WIFI_ASSOCIATED";
                                                    break;
                                                case 2118:
                                                    str = "RIL_REQUEST_SET_WIFI_SIGNAL_LEVEL";
                                                    break;
                                                case 2119:
                                                    str = "RIL_REQUEST_SET_WIFI_IP_ADDRESS";
                                                    break;
                                                case 2120:
                                                    str = "RIL_REQUEST_SET_GEO_LOCATION";
                                                    break;
                                                case 2121:
                                                    str = "RIL_REQUEST_SET_EMERGENCY_ADDRESS_ID";
                                                    break;
                                                default:
                                                    switch (iIntValue) {
                                                        case 2123:
                                                            str = "RIL_REQUEST_SET_COLP";
                                                            break;
                                                        case 2124:
                                                            str = "RIL_REQUEST_SET_COLR";
                                                            break;
                                                        case 2125:
                                                            str = "RIL_REQUEST_QUERY_CALL_FORWARD_IN_TIME_SLOT";
                                                            break;
                                                        case 2126:
                                                            str = "RIL_REQUEST_SET_CALL_FORWARD_IN_TIME_SLOT";
                                                            break;
                                                        default:
                                                            switch (iIntValue) {
                                                                case 2144:
                                                                    str = "RIL_REQUEST_DATA_CONNECTION_ATTACH";
                                                                    break;
                                                                case 2145:
                                                                    str = "RIL_REQUEST_DATA_CONNECTION_DETACH";
                                                                    break;
                                                                case 2146:
                                                                    str = "RIL_REQUEST_RESET_ALL_CONNECTIONS";
                                                                    break;
                                                                case 2147:
                                                                    str = "RIL_REQUEST_SET_VOICE_PREFER_STATUS";
                                                                    break;
                                                                case 2148:
                                                                    str = "RIL_REQUEST_SET_ECC_NUM";
                                                                    break;
                                                                case 2149:
                                                                    str = "RIL_REQUEST_GET_ECC_NUM";
                                                                    break;
                                                                case 2150:
                                                                    str = "RIL_REQUEST_RESTART_RILD";
                                                                    break;
                                                                case 2151:
                                                                    str = "RIL_REQUEST_SET_LTE_RELEASE_VERSION";
                                                                    break;
                                                                case 2152:
                                                                    str = "RIL_REQUEST_GET_LTE_RELEASE_VERSION";
                                                                    break;
                                                                case 2153:
                                                                    str = "RIL_REQUEST_SIGNAL_STRENGTH_WITH_WCDMA_ECIO";
                                                                    break;
                                                                default:
                                                                    str = "<unknown request> " + num;
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
                    break;
            }
        } else {
            str = "RIL_REQUEST_SET_SIM_NETWORK_LOCK";
        }
        return "MTK: " + str;
    }

    public static String responseToStringEx(Integer num) {
        String str;
        int iIntValue = num.intValue();
        if (iIntValue == 3000) {
            str = "RIL_UNSOL_RESPONSE_PLMN_CHANGED";
        } else if (iIntValue == 3001) {
            str = "RIL_UNSOL_RESPONSE_REGISTRATION_SUSPENDED";
        } else if (iIntValue == 3059) {
            str = "RIL_UNSOL_MD_DATA_RETRY_COUNT_RESET";
        } else if (iIntValue == 3060) {
            str = "RIL_UNSOL_REMOVE_RESTRICT_EUTRAN";
        } else if (iIntValue == 3114) {
            str = "RIL_UNSOL_DSBP_STATE_CHANGED";
        } else if (iIntValue != 3115) {
            switch (iIntValue) {
                case 1028:
                    str = "UNSOL_OEM_HOOK_RAW";
                    break;
                case 3003:
                    str = "RIL_UNSOL_GMSS_RAT_CHANGED";
                    break;
                case 3014:
                    str = "RIL_UNSOL_DATA_ALLOWED";
                    break;
                case 3015:
                    str = "UNSOL_INCOMING_CALL_INDICATION";
                    break;
                case 3016:
                    str = "RIL_UNSOL_INVALID_SIM";
                    break;
                case 3017:
                    str = "RIL_UNSOL_PSEUDO_CELL_INFO";
                    break;
                case 3018:
                    str = "RIL_UNSOL_NETWORK_EVENT";
                    break;
                case 3019:
                    str = "RIL_UNSOL_MODULATION_INFO";
                    break;
                case 3020:
                    str = "RIL_UNSOL_RESET_ATTACH_APN";
                    break;
                case 3021:
                    str = "RIL_UNSOL_DATA_ATTACH_APN_CHANGED";
                    break;
                case 3022:
                    str = "RIL_UNSOL_WORLD_MODE_CHANGED";
                    break;
                case 3023:
                    str = "RIL_UNSOL_CDMA_CARD_INITIAL_ESN_OR_MEID";
                    break;
                case 3024:
                    str = "UNSOL_CIPHER_INDICATION";
                    break;
                case 3025:
                    str = "UNSOL_CRSS_NOTIFICATION";
                    break;
                case 3026:
                    str = "UNSOL_SUPP_SVC_NOTIFICATION_EX";
                    break;
                case 3070:
                    str = "UNSOL_CALL_FORWARDING";
                    break;
                case 3072:
                    str = "RIL_UNSOL_ECONF_SRVCC_INDICATION";
                    break;
                case 3086:
                    str = "RIL_UNSOL_NATT_KEEP_ALIVE_CHANGED";
                    break;
                case 3088:
                    str = "RIL_UNSOL_WIFI_PDN_OOS";
                    break;
                case 3109:
                    str = "RIL_UNSOL_NETWORK_REJECT_CAUSE";
                    break;
                default:
                    switch (iIntValue) {
                        case 3028:
                            str = "UNSOL_PHB_READY_NOTIFICATION";
                            break;
                        case 3029:
                            str = "UNSOL_FEMTOCELL_INFO";
                            break;
                        case 3030:
                            str = "UNSOL_NETWORK_INFO";
                            break;
                        default:
                            switch (iIntValue) {
                                case 3053:
                                    str = "RIL_UNSOL_PCO_DATA_AFTER_ATTACHED";
                                    break;
                                case 3054:
                                    str = "RIL_UNSOL_EMBMS_SESSION_STATUS";
                                    break;
                                case 3055:
                                    str = "RIL_UNSOL_EMBMS_AT_INFO";
                                    break;
                                default:
                                    switch (iIntValue) {
                                        case 3074:
                                            str = "RIL_UNSOL_VSIM_OPERATION_INDICATION";
                                            break;
                                        case 3075:
                                            str = "RIL_UNSOL_MOBILE_WIFI_ROVEOUT";
                                            break;
                                        case 3076:
                                            str = "RIL_UNSOL_MOBILE_WIFI_HANDOVER";
                                            break;
                                        case 3077:
                                            str = "RIL_UNSOL_ACTIVE_WIFI_PDN_COUNT";
                                            break;
                                        case 3078:
                                            str = "RIL_UNSOL_WIFI_RSSI_MONITORING_CONFIG";
                                            break;
                                        case 3079:
                                            str = "RIL_UNSOL_WIFI_PDN_ERROR";
                                            break;
                                        case 3080:
                                            str = "RIL_UNSOL_REQUEST_GEO_LOCATION";
                                            break;
                                        case 3081:
                                            str = "RIL_UNSOL_WFC_PDN_STATE";
                                            break;
                                        case 3082:
                                            return "RIL_UNSOL_DEDICATE_BEARER_ACTIVATED";
                                        case 3083:
                                            return "RIL_UNSOL_DEDICATE_BEARER_MODIFIED";
                                        case 3084:
                                            return "RIL_UNSOL_DEDICATE_BEARER_DEACTIVATED";
                                        default:
                                            switch (iIntValue) {
                                                case 3095:
                                                    str = "RIL_UNSOL_ECC_NUM";
                                                    break;
                                                case 3096:
                                                    str = "RIL_UNSOL_MCCMNC_CHANGED";
                                                    break;
                                                case 3097:
                                                    str = "UNSOL_SIGNAL_STRENGTH_WITH_WCDMA_ECIO";
                                                    break;
                                                default:
                                                    switch (iIntValue) {
                                                        case 3124:
                                                            str = "RIL_UNSOL_SIM_POWER_CHANGED";
                                                            break;
                                                        case 3125:
                                                            str = "RIL_UNSOL_CARD_DETECTED_IND";
                                                            break;
                                                        case 3126:
                                                            str = "UNSOL_CALL_ADDITIONAL_INFO";
                                                            break;
                                                        default:
                                                            switch (iIntValue) {
                                                                case 3130:
                                                                    str = "RIL_UNSOL_QUALIFIED_NETWORK_TYPES_CHANGED";
                                                                    break;
                                                                case 3131:
                                                                    str = "RIL_UNSOL_ON_DSDA_CHANGED";
                                                                    break;
                                                                case 3132:
                                                                    str = "RIL_UNSOL_IWLAN_CELLULAR_QUALITY_CHANGED_IND";
                                                                    break;
                                                                case 3133:
                                                                    str = "RIL_UNSOL_MOBILE_DATA_USAGE";
                                                                    break;
                                                                case 3134:
                                                                    str = "RIL_UNSOL_NW_LIMIT";
                                                                    break;
                                                                case 3135:
                                                                    str = "RIL_UNSOL_ICCID_CHANGED";
                                                                    break;
                                                                case 3136:
                                                                    str = "RIL_UNSOL_PLMN_DATA";
                                                                    break;
                                                                case 3137:
                                                                    str = "RIL_UNSOL_RESPONSE_SMS_EINFO_EXTENSIONS";
                                                                    break;
                                                                default:
                                                                    str = "<unknown response>";
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
                    break;
            }
        } else {
            str = "RIL_UNSOL_SIM_SLOT_LOCK_POLICY_NOTIFY";
        }
        return "MTK: " + str;
    }

    protected static String retToString(int i, Object obj) {
        return RIL.retToString(i, obj);
    }

    public void abortFemtoCellList(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2056, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.abortFemtocellList(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "abortFemtoCellList", e);
            }
        }
    }

    public void cacheIccid(String str) {
        this.mIccid = str;
    }

    public void cancelAvailableNetworks(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2007, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.cancelAvailableNetworks(rILRequestObtainRequest.mSerial);
            } catch (RemoteException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getAvailableNetworks", e);
            }
        }
    }

    public void changeBarringPassword(String str, String str2, String str3, String str4, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(44, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + "facility = " + str);
            try {
                mtkRadioExProxy.setBarringPasswordCheckedByNW(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), convertNullToEmptyString(str2), convertNullToEmptyString(str3), convertNullToEmptyString(str4));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "changeBarringPasswordCheckedByNW", e);
            }
        }
    }

    public void conference(Message message) {
        if (getMtkRadioExProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(16, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            handleChldRelatedRequest(rILRequestObtainRequest, null);
        }
    }

    public void configA2Offset(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2190, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " offset=" + i + " threshBound=" + i2);
            try {
                mtkRadioExProxy.cfgA2offset(rILRequestObtainRequest.mSerial, i, i2);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "configA2Offset", e);
            }
        }
    }

    public void configB1Offset(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2191, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " offset=" + i + " threshBound=" + i2);
            try {
                mtkRadioExProxy.cfgB1offset(rILRequestObtainRequest.mSerial, i, i2);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "configB1Offset", e);
            }
        }
    }

    public MtkDedicateDataCallResponse convertDedicatedDataCallResult(DedicateDataCall dedicateDataCall) {
        MtkTftStatus mtkTftStatus;
        int i = dedicateDataCall.ddcId;
        int i2 = dedicateDataCall.interfaceId;
        int i3 = dedicateDataCall.primaryCid;
        int i4 = dedicateDataCall.cid;
        int i5 = dedicateDataCall.active;
        int i6 = dedicateDataCall.signalingFlag;
        int i7 = dedicateDataCall.bearerId;
        int i8 = dedicateDataCall.failCause;
        mtkRiljLog("ddcResult.hasQos: " + dedicateDataCall.hasQos);
        MtkQosStatus mtkQosStatus = dedicateDataCall.hasQos != 0 ? new MtkQosStatus(dedicateDataCall.qos.qci, dedicateDataCall.qos.dlGbr, dedicateDataCall.qos.ulGbr, dedicateDataCall.qos.dlMbr, dedicateDataCall.qos.ulMbr) : null;
        mtkRiljLog("ddcResult.hasTft: " + dedicateDataCall.hasTft);
        if (dedicateDataCall.hasTft != 0) {
            int i9 = dedicateDataCall.tft.operation;
            ArrayList arrayList = new ArrayList();
            for (PktFilter pktFilter : dedicateDataCall.tft.pfList) {
                arrayList.add(new MtkPacketFilterInfo(pktFilter.id, pktFilter.precedence, pktFilter.direction, pktFilter.networkPfIdentifier, pktFilter.bitmap, pktFilter.address, pktFilter.mask, pktFilter.protocolNextHeader, pktFilter.localPortLow, pktFilter.localPortHigh, pktFilter.remotePortLow, pktFilter.remotePortHigh, pktFilter.spi, pktFilter.tos, pktFilter.tosMask, pktFilter.flowLabel));
            }
            mtkTftStatus = new MtkTftStatus(i9, arrayList, new MtkTftParameter(dedicateDataCall.tft.tftParameter.linkedPfList));
        } else {
            mtkTftStatus = null;
        }
        return new MtkDedicateDataCallResponse(i2, i3, i4, i5, i6, i7, i8, mtkQosStatus, mtkTftStatus, dedicateDataCall.pcscf);
    }

    protected ArrayList<HardwareConfig> convertHalHwConfigList(ArrayList<android.hardware.radio.V1_0.HardwareConfig> arrayList, RIL ril) {
        MtkHardwareConfig mtkHardwareConfig;
        int size = arrayList.size();
        ArrayList<HardwareConfig> arrayList2 = new ArrayList<>(size);
        mtkRiljLog("convertHalHwConfigList: num=" + size);
        for (android.hardware.radio.V1_0.HardwareConfig hardwareConfig : arrayList) {
            int i = hardwareConfig.type;
            if (i == 0) {
                mtkHardwareConfig = new MtkHardwareConfig(i);
                HardwareConfigModem hardwareConfigModem = (HardwareConfigModem) hardwareConfig.modem.get(0);
                mtkHardwareConfig.assignModem(hardwareConfig.uuid, hardwareConfig.state, hardwareConfigModem.rilModel, hardwareConfigModem.rat, hardwareConfigModem.maxVoice, hardwareConfigModem.maxData, hardwareConfigModem.maxStandby);
            } else {
                if (i != 1) {
                    throw new RuntimeException("RIL_REQUEST_GET_HARDWARE_CONFIG invalid hardward type:" + i);
                }
                mtkHardwareConfig = new MtkHardwareConfig(i);
                mtkHardwareConfig.assignSim(hardwareConfig.uuid, hardwareConfig.state, ((HardwareConfigSim) hardwareConfig.sim.get(0)).modemUuid);
            }
            arrayList2.add(mtkHardwareConfig);
        }
        return arrayList2;
    }

    public void dataConnectionAttach(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2144, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.dataConnectionAttach(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "dataConnectionAttach", e);
            }
        }
    }

    public void dataConnectionDetach(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2145, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.dataConnectionDetach(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "dataConnectionDetach", e);
            }
        }
    }

    public void deactivateNrScgCommunication(boolean z, boolean z2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2202, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " deactivate=" + z + " allowSCGAdd=" + z2);
            try {
                mtkRadioExProxy.deactivateNrScgCommunication(rILRequestObtainRequest.mSerial, z, z2);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "deactivateNrScgCommunication", e);
            }
        }
    }

    public void deleteUPBEntry(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2041, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ": " + i + " adnIndex: " + i2 + " entryIndex: " + i3);
            try {
                mtkRadioExProxy.deleteUPBEntry(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "deleteUPBEntry", e);
            }
        }
    }

    public void disableNR(boolean z, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2193, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " enable=" + z);
            try {
                mtkRadioExProxy.disableNR(rILRequestObtainRequest.mSerial, z);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "disableNR", e);
            }
        }
    }

    public void doGeneralSimAuthentication(int i, int i2, int i3, String str, String str2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2064, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.doGeneralSimAuthentication(rILRequestObtainRequest.mSerial, convertToHalSimAuthStructure(i, i2, i3, str, str2));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "doGeneralSimAuthentication", e);
            }
        }
    }

    public void editUPBEntry(int i, int i2, int i3, String str, String str2, Message message) {
        editUPBEntry(i, i2, i3, str, str2, null, message);
    }

    public void editUPBEntry(int i, int i2, int i3, String str, String str2, String str3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2040, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            ArrayList<String> arrayList = new ArrayList<>();
            arrayList.add(Integer.toString(i));
            arrayList.add(Integer.toString(i2));
            arrayList.add(Integer.toString(i3));
            arrayList.add(str);
            if (i == 0) {
                arrayList.add(str2);
                arrayList.add(str3);
            }
            try {
                mtkRadioExProxy.editUPBEntry(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "editUPBEntry", e);
            }
        }
    }

    public void enableDsdaIndication(boolean z, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2185, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " enable=" + z);
            try {
                mtkRadioExProxy.enableDsdaIndication(rILRequestObtainRequest.mSerial, z);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "enableDsdaIndication", e);
            }
        }
    }

    public void enableScgFailure(boolean z, int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2192, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " enable=" + z + " T1=" + i + " P1=" + i2 + " T2=" + i3);
            try {
                mtkRadioExProxy.enableSCGfailure(rILRequestObtainRequest.mSerial, z, i, i2, i3);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "enableScgFailure", e);
            }
        }
    }

    public void explicitCallTransfer(Message message) {
        if (getMtkRadioExProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(72, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            handleChldRelatedRequest(rILRequestObtainRequest, null);
        }
    }

    public void getATR(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2001, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getATR(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getATR", e);
            }
        }
    }

    public void getApcInfo(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2022, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getApcInfo(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getApcInfo", e);
            }
        }
    }

    public void getAvailableNetworksWithAct(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(MtkGsmCdmaPhone.EVENT_GET_CALL_BARRING_COMPLETE, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getAvailableNetworksWithAct(rILRequestObtainRequest.mSerial);
            } catch (RemoteException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getAvailableNetworks", e);
            }
        }
    }

    public void getCOLP(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2104, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getColp(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getCOLP", e);
            }
        }
    }

    public void getCOLR(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2105, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getColr(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getCOLR", e);
            }
        }
    }

    public void getCallSubAddress(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2209, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getCallSubAddress(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getCallSubAddress", e);
            }
        }
    }

    public void getCurrentPOLList(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2108, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getCurrentPOLList(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getCurrentPOLList", e);
            }
        }
    }

    public void getDeactivateNrScgCommunication(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2203, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getDeactivateNrScgCommunication(rILRequestObtainRequest.mSerial);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getDeactivateNrScgCommunication", e);
            }
        }
    }

    public void getDisable2G(Message message) {
        IMtkRilOp rilOp = getRilOp();
        if (rilOp != null) {
            rilOp.getDisable2G(message);
        }
    }

    public void getDsdaStatus(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2186, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)));
            try {
                mtkRadioExProxy.getDsdaStatus(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getDsdaStatus", e);
            }
        }
    }

    public void getEccNum() {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(null);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2149, null, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getEccNum(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getEccNum", e);
            }
        }
    }

    public void getFemtoCellList(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2055, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getFemtocellList(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getFemtoCellList", e);
            }
        }
    }

    public void getGsmBroadcastActivation(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2115, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getGsmBroadcastActivation(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getGsmBroadcastActivation", e);
            }
        }
    }

    public void getGsmBroadcastLangs(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2010, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getGsmBroadcastLangs(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getGsmBroadcastLangs", e);
            }
        }
    }

    public void getIccid(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2142, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getIccid(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getIccid", e);
            }
        }
    }

    public void getLteReleaseVersion(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2152, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getLteReleaseVersion(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getLteReleaseVersion", e);
            }
        }
    }

    public MtkRadioExIndication getMtkRadioExIndication() {
        return this.mMtkRadioExIndication;
    }

    public IMtkRadioEx getMtkRadioExProxy(Message message) {
        if (this.mRilHandler.hasMessages(1006)) {
            Rlog.i(RILJ_LOG_TAG, "getMtkRadioExProxy service died, we try again later");
            handleProxyNotExist(message);
            return null;
        }
        if (!this.mMtkRilJIntiDone) {
            Rlog.i(RILJ_LOG_TAG, "!mMtkRilJIntiDone");
            handleProxyNotExist(message);
            return null;
        }
        if (!SubscriptionManager.isValidPhoneId(this.mPhoneId.intValue())) {
            Rlog.i(RILJ_LOG_TAG, "phone" + this.mPhoneId + " is not valid or is disabled");
            handleProxyNotExist(message);
            return null;
        }
        if (!this.mIsCellularSupported) {
            mtkRiljLog("getMtkRadioExProxy:Not calling getService(): wifi-only");
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
                message.sendToTarget();
            }
            return null;
        }
        if (this.mRadioProxyMtk != null) {
            return this.mRadioProxyMtk;
        }
        try {
            this.mRadioProxyMtk = IMtkRadioEx.getService(HIDL_SERVICE_NAME_MTK[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], false);
            if (this.mRadioProxyMtk != null) {
                this.mRadioProxyMtk.linkToDeath(this.mMtkRadioExProxyDeathRecipient, this.mMtkRadioExProxyCookie.incrementAndGet());
                this.mRadioProxyMtk.setResponseFunctionsMtk(this.mMtkRadioExResponse, this.mMtkRadioExIndication);
                if (this.mDtmfReqQueue != null) {
                    synchronized (this.mDtmfReqQueue) {
                        Rlog.d(RILJ_LOG_TAG, "queue size  " + this.mDtmfReqQueue.size());
                        for (int size = this.mDtmfReqQueue.size() - 1; size >= 0; size--) {
                            this.mDtmfReqQueue.remove(size);
                        }
                        if (this.mDtmfReqQueue.getPendingRequest() != null) {
                            Rlog.d(RILJ_LOG_TAG, "reset pending switch request");
                            RILRequest rILRequest = this.mDtmfReqQueue.getPendingRequest().rr;
                            if (rILRequest.mResult != null) {
                                AsyncResult.forMessage(rILRequest.mResult, (Object) null, (Throwable) null);
                                rILRequest.mResult.sendToTarget();
                            }
                            this.mDtmfReqQueue.resetSendChldRequest();
                            this.mDtmfReqQueue.setPendingRequest(null);
                        }
                    }
                }
            } else {
                Rlog.e(RILJ_LOG_TAG, "getMtkRadioExProxy: mRadioProxy == null");
            }
        } catch (RemoteException | RuntimeException e) {
            this.mRadioProxyMtk = null;
            Rlog.e(RILJ_LOG_TAG, "MtkRadioExProxy getService/setResponseFunctions: " + e);
        }
        if (this.mRadioProxyMtk == null) {
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
                message.sendToTarget();
            }
            this.mRilHandler.removeMessages(1006);
            this.mRilHandler.sendMessageDelayed(this.mRilHandler.obtainMessage(1006, Long.valueOf(this.mMtkRadioExProxyCookie.get())), 1000L);
            riljLog("MtkRadioExProxy sendMessageDelayed");
        }
        return this.mRadioProxyMtk;
    }

    public MtkRadioExResponse getMtkRadioExResponse() {
        return this.mMtkRadioExResponse;
    }

    public MtkRadioIndication getMtkRadioIndication() {
        return this.mMtkRadioIndication;
    }

    public MtkRadioResponse getMtkRadioResponse() {
        return this.mMtkRadioResponse;
    }

    public void getPOLCapability(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2107, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getPOLCapability(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getPOLCapability", e);
            }
        }
    }

    public void getPhoneBookMemStorage(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2046, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> :::" + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getPhoneBookMemStorage(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getPhoneBookMemStorage", e);
            }
        }
    }

    public void getPhoneBookStringsLength(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2045, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> :::" + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getPhoneBookStringsLength(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getPhoneBookStringsLength", e);
            }
        }
    }

    public void getPreferredNetworkType(Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(74, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            if (this.mRadioVersion.lessOrEqual(RADIO_HAL_VERSION_1_3)) {
                try {
                    radioProxy.getPreferredNetworkType(rILRequestObtainRequest.mSerial);
                    return;
                } catch (RemoteException | RuntimeException e) {
                    handleRadioProxyExceptionForRR(rILRequestObtainRequest, "getPreferredNetworkType", e);
                    return;
                }
            }
            if (this.mRadioVersion.greaterOrEqual(RADIO_HAL_VERSION_1_4)) {
                try {
                    radioProxy.getPreferredNetworkTypeBitmap(rILRequestObtainRequest.mSerial);
                } catch (RemoteException | RuntimeException e2) {
                    handleRadioProxyExceptionForRR(rILRequestObtainRequest, "getPreferredNetworkTypeBitmap", e2);
                }
            }
        }
    }

    public synchronized android.hardware.radio.V1_0.IRadio getRadioProxy(Message message) {
        if (this.mInstanceId == null) {
            Rlog.i(RILJ_LOG_TAG, "getRadioProxy wait for MtkRIL");
            handleProxyNotExist(message);
            return null;
        }
        if (this.mRilHandler.hasMessages(6)) {
            Rlog.i(RILJ_LOG_TAG, "getRadioProxy service died, we try again later");
            handleProxyNotExist(message);
            return null;
        }
        if (SubscriptionManager.isValidPhoneId(this.mPhoneId.intValue())) {
            return super.getRadioProxy(message);
        }
        Rlog.i(RILJ_LOG_TAG, "phone" + this.mPhoneId + " is not valid or is disabled");
        handleProxyNotExist(message);
        return null;
    }

    public IMtkRilOp getRilOp() {
        Rlog.d(RILJ_LOG_TAG, "getRilOp");
        IMtkRilOp iMtkRilOp = this.mMtkRilOp;
        if (iMtkRilOp != null) {
            return iMtkRilOp;
        }
        if ("0".equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "0"))) {
            Rlog.d(RILJ_LOG_TAG, "mMtkRilOp init fail, because OM load");
            return null;
        }
        try {
            Class<?> cls = Class.forName("com.mediatek.opcommon.telephony.MtkRilOp");
            Rlog.d(RILJ_LOG_TAG, "class = " + cls);
            Constructor<?> constructor = cls.getConstructor(Context.class, Integer.TYPE, Integer.TYPE, Integer.class);
            Rlog.d(RILJ_LOG_TAG, "constructor function = " + constructor);
            IMtkRilOp iMtkRilOp2 = (IMtkRilOp) constructor.newInstance(this.mContext, Integer.valueOf(this.mPreferredNetworkType), Integer.valueOf(this.mCdmaSubscription), this.mPhoneId);
            this.mMtkRilOp = iMtkRilOp2;
            return iMtkRilOp2;
        } catch (Exception e) {
            Rlog.d(RILJ_LOG_TAG, "mMtkRilOp init fail");
            e.printStackTrace();
            return null;
        }
    }

    public void getRoamingEnable(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2112, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getRoamingEnable(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getRoamingEnable", e);
            }
        }
    }

    public void getRxTestResult(Message message) {
        IMtkRilOp rilOp = getRilOp();
        if (rilOp != null) {
            rilOp.getRxTestResult(message);
        }
    }

    public void getSignalStrengthWithWcdmaEcio(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2153, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getSignalStrengthWithWcdmaEcio(rILRequestObtainRequest.mSerial);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getSignalStrength", e);
            }
        }
    }

    public void getSmsParameters(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2012, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getSmsParameters(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getSmsParameters", e);
            }
        }
    }

    public void getSmsRuimMemoryStatus(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2024, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getSmsRuimMemoryStatus(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getSmsRuimMemoryStatus", e);
            }
        }
    }

    public void getSmsSimMemoryStatus(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2011, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.getSmsMemStatus(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getSmsSimMemoryStatus", e);
            }
        }
    }

    public void getSuggestedPlmnList(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2189, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ", rat=" + i + ", num=" + i2 + ", timer=" + i3);
            try {
                mtkRadioExProxy.getSuggestedPlmnList(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getSuggestedPlmnList", e);
            }
        }
    }

    public void handleDtmfQueueNext(int i) {
        mtkRiljLog("handleDtmfQueueNext (serial = " + i);
        synchronized (this.mDtmfReqQueue) {
            DtmfQueueHandler.DtmfQueueRR dtmfQueueRR = null;
            for (int i2 = 0; i2 < this.mDtmfReqQueue.mDtmfQueue.size(); i2++) {
                DtmfQueueHandler.DtmfQueueRR dtmfQueueRR2 = (DtmfQueueHandler.DtmfQueueRR) this.mDtmfReqQueue.mDtmfQueue.get(i2);
                if (dtmfQueueRR2 != null && dtmfQueueRR2.rr.mSerial == i) {
                    dtmfQueueRR = dtmfQueueRR2;
                    break;
                }
            }
            if (dtmfQueueRR == null) {
                mtkRiljLoge("cannot find serial " + i + " from mDtmfQueue. (size = " + this.mDtmfReqQueue.size() + ")");
            } else {
                this.mDtmfReqQueue.remove(dtmfQueueRR);
                mtkRiljLog("remove first item in dtmf queue done. (size = " + this.mDtmfReqQueue.size() + ")");
            }
            if (this.mDtmfReqQueue.size() > 0) {
                DtmfQueueHandler.DtmfQueueRR dtmfQueueRR3 = this.mDtmfReqQueue.get();
                RILRequest rILRequest = dtmfQueueRR3.rr;
                mtkRiljLog(rILRequest.serialString() + "> " + requestToString(rILRequest.mRequest));
                sendDtmfQueueRR(dtmfQueueRR3);
            } else if (this.mDtmfReqQueue.getPendingRequest() != null) {
                mtkRiljLog("send pending switch request");
                sendDtmfQueueRR(this.mDtmfReqQueue.getPendingRequest());
                this.mDtmfReqQueue.setSendChldRequest();
                this.mDtmfReqQueue.setPendingRequest(null);
            }
        }
    }

    protected void handleMtkRadioProxyExceptionForRR(RILRequest rILRequest, String str, Exception exc) {
        riljLoge(str + ": " + exc);
        clearRequestWithError(rILRequest, 1);
        resetMtkProxyAndRequestList();
    }

    public void handleStkCallSetupRequestFromSimWithResCode(boolean z, int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2029, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            int[] iArr = new int[1];
            if (i == 33 || i == 32) {
                iArr[0] = i;
            } else {
                iArr[0] = z ? 1 : 0;
            }
            try {
                mtkRadioExProxy.handleStkCallSetupRequestFromSimWithResCode(rILRequestObtainRequest.mSerial, iArr[0]);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "handleStkCallSetupRequestFromSimWithResCode", e);
            }
        }
    }

    public void hangupAll(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2019, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.hangupAll(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "hangupAll", e);
            }
        }
    }

    public void hangupConnectionWithCause(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2183, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " gsmIndex = " + i);
            try {
                mtkRadioExProxy.hangupWithReason(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "hangupConnectionWithCause", e);
            }
        }
    }

    public boolean hidePLMN(String str) {
        Iterator<String> it = this.hide_plmns.iterator();
        while (it.hasNext()) {
            if (it.next().equals(str)) {
                return true;
            }
        }
        return false;
    }

    public void invokeOemRilRequestRaw(byte[] bArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(59, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + "[" + IccUtils.bytesToHexString(bArr) + "]");
            try {
                mtkRadioExProxy.sendRequestRaw(rILRequestObtainRequest.mSerial, primitiveArrayToArrayList(bArr));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "invokeOemRilRequestStrings", e);
            }
        }
    }

    public void invokeOemRilRequestStrings(String[] strArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(60, message, this.mRILDefaultWorkSource, new Object[0]);
            String str = "";
            for (String str2 : strArr) {
                str = str + str2 + " ";
            }
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " strings = " + str);
            try {
                mtkRadioExProxy.sendRequestStrings(rILRequestObtainRequest.mSerial, new ArrayList<>(Arrays.asList(strArr)));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "invokeOemRilRequestStrings", e);
            }
        }
    }

    protected boolean isGetHidlServiceSync() {
        return false;
    }

    public void iwlanSetRegisterCellularQualityReport(int i, int i2, int[] iArr, Message message) {
        int i3;
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy == null) {
            return;
        }
        RILRequest rILRequestObtainRequest = obtainRequest(2188, message, this.mRILDefaultWorkSource, new Object[0]);
        riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " enable = " + i + " type = " + i2);
        String str = i == 1 ? "1" : "0";
        if (i2 == 0) {
            i3 = 0;
        } else if (i2 == 2) {
            i3 = 2;
        } else if (i2 == 5) {
            i3 = 1;
        } else if (i2 == 6) {
            i3 = 3;
        } else if (i2 != 7) {
            riljLoge("iwlanSetRegisterCellularQualityReport(): type not support");
            i3 = -1;
        } else {
            i3 = 4;
        }
        if (i3 == -1) {
            riljLog(rILRequestObtainRequest.serialString() + "< MTK : RIL_REQUEST_IWLAN_REGISTER_CELLULAR_QUALITY_REPORT Fail - Type is not supported");
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(6));
                message.sendToTarget();
                return;
            }
            return;
        }
        String strValueOf = String.valueOf(i3);
        int[] iArrCopyOf = Arrays.copyOf(iArr, iArr.length);
        Arrays.sort(iArrCopyOf);
        StringBuilder sb = new StringBuilder();
        for (int length = iArr.length - 1; length >= 0; length--) {
            sb.append(String.valueOf(iArrCopyOf[length]));
            if (length > 0) {
                sb.append(",");
            }
        }
        try {
            try {
                mtkRadioExProxy.registerCellQltyReport(rILRequestObtainRequest.mSerial, str, strValueOf, sb.toString(), "500");
            } catch (RemoteException | RuntimeException e) {
                e = e;
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "registerCellQltyReport", e);
            }
        } catch (RemoteException | RuntimeException e2) {
            e = e2;
        }
    }

    public String lookupOperator5GName(int i, String str, boolean z, int i2) {
        String strLookupOperatorName5GEons = lookupOperatorName5GEons(i, str, z, i2);
        if (TextUtils.isEmpty(strLookupOperatorName5GEons)) {
            return null;
        }
        return strLookupOperatorName5GEons;
    }

    public String lookupOperatorName(int i, String str, boolean z, int i2) {
        return lookupOperatorName(i, str, z, i2, 7);
    }

    public String lookupOperatorName(int i, String str, boolean z, int i2, int i3) {
        if ((i3 & 8) == 8) {
            String strLookupOperatorSPN = lookupOperatorSPN(str);
            if (!TextUtils.isEmpty(strLookupOperatorSPN)) {
                return strLookupOperatorSPN;
            }
        }
        if ((i3 & 1) == 1) {
            String strLookupOperator5GName = lookupOperator5GName(i, str, z, i2);
            if (!TextUtils.isEmpty(strLookupOperator5GName)) {
                return strLookupOperator5GName;
            }
            String strLookupOperatorNameEons = lookupOperatorNameEons(i, str, z, i2);
            if (!TextUtils.isEmpty(strLookupOperatorNameEons)) {
                return strLookupOperatorNameEons;
            }
        }
        if ((i3 & 2) == 2) {
            String strLookupOperatorNameNitz = lookupOperatorNameNitz(i, str, z);
            if (!TextUtils.isEmpty(strLookupOperatorNameNitz)) {
                return strLookupOperatorNameNitz;
            }
        }
        if ((i3 & 4) != 4) {
            return null;
        }
        String strLookupOperatorNameMVNO = lookupOperatorNameMVNO(i, str, z);
        if (TextUtils.isEmpty(strLookupOperatorNameMVNO)) {
            return null;
        }
        return strLookupOperatorNameMVNO;
    }

    public String lookupOperatorName5GEons(int i, String str, boolean z, int i2) {
        String str2;
        MtkSIMRecords iccRecords = UiccController.getInstance().getIccRecords(this.mInstanceId.intValue(), 1);
        String str3 = null;
        StringBuilder sb = new StringBuilder(Integer.toHexString(i2));
        if (sb.length() == 1 || sb.length() == 2) {
            sb.setCharAt(0, '*');
        } else {
            for (int i3 = 0; i3 < sb.length() / 2; i3++) {
                sb.setCharAt(i3, '*');
            }
        }
        if (this.mPhoneType == 1) {
            if (i2 == 16777214 || i2 == -1) {
                i2 = 0;
                Rlog.d(RILJ_LOG_TAG, "invalid lac, set 0");
            }
            if (iccRecords != null) {
                try {
                    str2 = iccRecords.get5GEonsIfExist(str, i2, z);
                } catch (RuntimeException e) {
                    Rlog.e(RILJ_LOG_TAG, "Exception while get5GEonsIfExist. " + e);
                }
            } else {
                str2 = null;
            }
            str3 = str2;
            if (str3 != null && !str3.equals("")) {
                Rlog.v(RILJ_LOG_TAG, "lookupOperatorName5GEons subId=" + i + " numeric=" + str + " desireLongName=" + z + " nLac=" + sb.toString());
                StringBuilder sb2 = new StringBuilder();
                sb2.append("lookupOperatorName5GEons plmn name update to 5GEons: ");
                sb2.append(str3);
                Rlog.d(RILJ_LOG_TAG, sb2.toString());
                return str3;
            }
        }
        return null;
    }

    public String lookupOperatorNameEons(int i, String str, boolean z, int i2) {
        String eonsIfExist;
        MtkSIMRecords iccRecords = UiccController.getInstance().getIccRecords(this.mInstanceId.intValue(), 1);
        String str2 = null;
        StringBuilder sb = new StringBuilder(Integer.toHexString(i2));
        if (sb.length() == 1 || sb.length() == 2) {
            sb.setCharAt(0, '*');
        } else {
            for (int i3 = 0; i3 < sb.length() / 2; i3++) {
                sb.setCharAt(i3, '*');
            }
        }
        if (this.mPhoneType == 1) {
            if (i2 == 65534 || i2 == -1) {
                i2 = 0;
            }
            if (iccRecords != null) {
                try {
                    eonsIfExist = iccRecords.getEonsIfExist(str, i2, z);
                } catch (RuntimeException e) {
                    Rlog.e(RILJ_LOG_TAG, "Exception while getEonsIfExist. " + e);
                }
            } else {
                eonsIfExist = null;
            }
            str2 = eonsIfExist;
            if (str2 != null && !str2.equals("")) {
                Rlog.v(RILJ_LOG_TAG, "lookupOperatorNameEons subId=" + i + " numeric=" + str + " desireLongName=" + z + " nLac=" + sb.toString());
                StringBuilder sb2 = new StringBuilder();
                sb2.append("lookupOperatorNameEons plmn name update to Eons: ");
                sb2.append(str2);
                Rlog.d(RILJ_LOG_TAG, sb2.toString());
                return str2;
            }
            String operatorNumeric = iccRecords != null ? iccRecords.getOperatorNumeric() : null;
            if (operatorNumeric != null && operatorNumeric.equals(str)) {
                String sIMCPHSOns = iccRecords != null ? iccRecords.getSIMCPHSOns() : null;
                if (!TextUtils.isEmpty(sIMCPHSOns)) {
                    Rlog.d(RILJ_LOG_TAG, "lookupOperatorNameEons plmn name update to CPHS Ons: " + sIMCPHSOns);
                    return sIMCPHSOns;
                }
            }
        }
        return null;
    }

    public String lookupOperatorNameForPlmnList(int i, String str, boolean z, int i2) {
        Phone phone = PhoneFactory.getPhone(this.mInstanceId.intValue());
        return lookupOperatorName(i, str, z, i2, getPlmnListDisplayRule(phone != null ? phone.getServiceStateTracker().mSS.getOperatorNumeric() : null, str));
    }

    public String lookupOperatorNameMVNO(int i, String str, boolean z) {
        if (str == null) {
            return null;
        }
        String strLookupOperatorName = MtkServiceStateTracker.lookupOperatorName(this.mMtkContext, i, str, z);
        Rlog.d(RILJ_LOG_TAG, "lookupOperatorNameMVNO plmn name update to TS.25/MVNO: " + strLookupOperatorName);
        return strLookupOperatorName;
    }

    public String lookupOperatorNameNitz(int i, String str, boolean z) {
        int phoneId = SubscriptionManager.getPhoneId(i);
        String telephonyProperty = TelephonyManager.getTelephonyProperty(phoneId, "persist.vendor.radio.nitz_oper_code", "");
        if (str == null || !str.equals(telephonyProperty)) {
            return null;
        }
        String telephonyProperty2 = z ? TelephonyManager.getTelephonyProperty(phoneId, "persist.vendor.radio.nitz_oper_lname", "") : TelephonyManager.getTelephonyProperty(phoneId, "persist.vendor.radio.nitz_oper_sname", "");
        if (telephonyProperty2 != null && telephonyProperty2.startsWith("uCs2")) {
            Rlog.d(RILJ_LOG_TAG, "lookupOperatorName() handling UCS2 format name");
            try {
                telephonyProperty2 = new String(IccUtils.hexStringToBytes(telephonyProperty2.substring(4)), "UTF-16");
            } catch (UnsupportedEncodingException e) {
                Rlog.d(RILJ_LOG_TAG, "lookupOperatorName() UnsupportedEncodingException");
            }
        }
        Rlog.d(RILJ_LOG_TAG, "lookupOperatorNameNitz plmn name update to Nitz: " + telephonyProperty2);
        if (TextUtils.isEmpty(telephonyProperty2)) {
            return null;
        }
        return telephonyProperty2;
    }

    public String lookupOperatorSPN(String str) {
        String serviceProviderName = null;
        Phone phone = PhoneFactory.getPhone(this.mInstanceId.intValue());
        if (phone != null) {
            ServiceStateTracker serviceStateTracker = phone.getServiceStateTracker();
            String operatorNumeric = serviceStateTracker.getServiceState().getOperatorNumeric();
            if (!TextUtils.isEmpty(operatorNumeric) && !TextUtils.isEmpty(str) && operatorNumeric.equals(str)) {
                serviceProviderName = serviceStateTracker.getServiceProviderName();
                Rlog.d(RILJ_LOG_TAG, "lookupOperatorSPN " + serviceProviderName);
            }
        }
        if (TextUtils.isEmpty(serviceProviderName)) {
            return null;
        }
        return serviceProviderName;
    }

    public void mtkRiljLog(String str) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.d(RILJ_LOG_TAG, sb.toString());
    }

    public void mtkRiljLoge(String str) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.e(RILJ_LOG_TAG, sb.toString());
    }

    public void notifyPlmnMvnoData(PlmnMvnoData plmnMvnoData) {
        this.mPlmnMvnoData = plmnMvnoData;
        RegistrantList registrantList = this.mPlmnDataRegistrants;
        if (registrantList != null) {
            registrantList.notifyRegistrants(new AsyncResult((Object) null, plmnMvnoData, (Throwable) null));
        }
    }

    public void onSlotActiveStatusChange(boolean z) {
        super.onSlotActiveStatusChange(z);
        if (z) {
            getMtkRadioExProxy(null);
        } else {
            resetMtkProxyAndRequestList();
        }
    }

    public void queryCallForwardInTimeSlotStatus(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2125, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " cfreason = " + i + " serviceClass = " + i2);
            CallForwardInfoEx callForwardInfoEx = new CallForwardInfoEx();
            callForwardInfoEx.reason = i;
            callForwardInfoEx.serviceClass = i2;
            callForwardInfoEx.toa = PhoneNumberUtils.toaFromString("");
            callForwardInfoEx.number = convertNullToEmptyString("");
            callForwardInfoEx.timeSeconds = 0;
            callForwardInfoEx.timeSlotBegin = convertNullToEmptyString("");
            callForwardInfoEx.timeSlotEnd = convertNullToEmptyString("");
            try {
                mtkRadioExProxy.queryCallForwardInTimeSlotStatus(rILRequestObtainRequest.mSerial, callForwardInfoEx);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryCallForwardInTimeSlotStatus", e);
            }
        }
    }

    public void queryFemtoCellSystemSelectionMode(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2058, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.queryFemtoCellSystemSelectionMode(rILRequestObtainRequest.mSerial);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryFemtoCellSystemSelectionMode", e);
            }
        }
    }

    public void queryNetworkLock(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2067, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.queryNetworkLock(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryNetworkLock", e);
            }
        }
    }

    public void queryPhbStorageInfo(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2036, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ": " + i);
            try {
                mtkRadioExProxy.queryPhbStorageInfo(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryPhbStorageInfo", e);
            }
        }
    }

    public void queryUPBAvailable(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2050, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " eftype: " + i + " fileIndex: " + i2);
            try {
                mtkRadioExProxy.queryUPBAvailable(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryUPBAvailable", e);
            }
        }
    }

    public void queryUPBCapability(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2039, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.queryUPBCapability(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryUPBCapability", e);
            }
        }
    }

    public void readPhbEntry(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2038, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ": " + i + " begin: " + i2 + " end: " + i3);
            try {
                mtkRadioExProxy.readPhbEntry(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readPhbEntry", e);
            }
        }
    }

    public void readPhoneBookEntryExt(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(MtkApnTypes.XCAP, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> :::" + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.readPhoneBookEntryExt(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readPhoneBookEntryExt", e);
            }
        }
    }

    public void readUPBAasList(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2054, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " startIndex: " + i + " endIndex: " + i2);
            try {
                mtkRadioExProxy.readUPBAasList(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readUPBAasList", e);
            }
        }
    }

    public void readUPBAnrEntry(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2053, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " adnIndex: " + i + " fileIndex: " + i2);
            try {
                mtkRadioExProxy.readUPBAnrEntry(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readUPBAnrEntry", e);
            }
        }
    }

    public void readUPBEmailEntry(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2051, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " adnIndex: " + i + " fileIndex: " + i2);
            try {
                mtkRadioExProxy.readUPBEmailEntry(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readUPBEmailEntry", e);
            }
        }
    }

    public void readUPBGasList(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2042, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ":  startIndex: " + i + " endIndex: " + i2);
            try {
                mtkRadioExProxy.readUPBGasList(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readUPBGasList", e);
            }
        }
    }

    public void readUPBGrpEntry(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2043, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ":  adnIndex: " + i);
            try {
                mtkRadioExProxy.readUPBGrpEntry(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readUPBGrpEntry", e);
            }
        }
    }

    public void readUPBSneEntry(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2052, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " adnIndex: " + i + " fileIndex: " + i2);
            try {
                mtkRadioExProxy.readUPBSneEntry(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "readUPBSneEntry", e);
            }
        }
    }

    public void registerForAttachApnChanged(Handler handler, int i, Object obj) {
        this.mAttachApnChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForCallAdditionalInfo(Handler handler, int i, Object obj) {
        this.mCallAdditionalInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForCallForwardingInfo(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        Rlog.d(RILJ_LOG_TAG, "call registerForCallForwardingInfo, Handler : " + handler);
        this.mCallForwardingInfoRegistrants.add(registrant);
        if (this.mCfuReturnValue != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mCfuReturnValue, (Throwable) null));
        }
    }

    public void registerForCardDetectedInd(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mCardDetectedIndRegistrant.add(registrant);
        if (this.mIsCardDetected) {
            registrant.notifyRegistrant();
        }
    }

    public void registerForCipherIndication(Handler handler, int i, Object obj) {
        this.mCipherIndicationRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForCommonSlotNoChanged(Handler handler, int i, Object obj) {
        this.mSimCommonSlotNoChanged.add(new Registrant(handler, i, obj));
    }

    public void registerForCsNetworkStateChanged(Handler handler, int i, Object obj) {
        this.mCsNetworkStateRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForDataAllowed(Handler handler, int i, Object obj) {
        this.mDataAllowedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForDedicatedBearerActivated(Handler handler, int i, Object obj) {
        this.mDedicatedBearerActivedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForDedicatedBearerDeactivationed(Handler handler, int i, Object obj) {
        this.mDedicatedBearerDeactivatedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForDedicatedBearerModified(Handler handler, int i, Object obj) {
        this.mDedicatedBearerModifiedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForDsbpStateChanged(Handler handler, int i, Object obj) {
        this.mDsbpStateRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForDsdaStateChanged(Handler handler, int i, Object obj) {
        this.mDsdaStateRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForEconfSrvcc(Handler handler, int i, Object obj) {
        this.mEconfSrvccRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForFemtoCellInfo(Handler handler, int i, Object obj) {
        this.mFemtoCellInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForGmssRatChanged(Handler handler, int i, Object obj) {
        this.mGmssRatChangedRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForIMEILock(Handler handler, int i, Object obj) {
        this.mImeiLockRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForIccidChanged(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mIccidRegistrants.add(registrant);
        if (this.mIccid != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mIccid, (Throwable) null));
        }
    }

    public void registerForImsiRefreshDone(Handler handler, int i, Object obj) {
        this.mImsiRefreshDoneRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForMccMncChanged(Handler handler, int i, Object obj) {
        this.mMccMncRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForMdDataRetryCountReset(Handler handler, int i, Object obj) {
        this.mMdDataRetryCountResetRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForMobileDataUsage(Handler handler, int i, Object obj) {
        this.mMobileDataUsageRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForModulation(Handler handler, int i, Object obj) {
        IMtkRilOp rilOp = getRilOp();
        if (rilOp != null) {
            rilOp.registerForModulation(handler, i, obj);
        }
    }

    public void registerForNetworkEvent(Handler handler, int i, Object obj) {
        this.mNetworkEventRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForNetworkInfo(Handler handler, int i, Object obj) {
        this.mNetworkInfoRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForNetworkReject(Handler handler, int i, Object obj) {
        this.mNetworkRejectRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForNwLimitState(Handler handler, int i, Object obj) {
        this.mNwLimitRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForPcoDataAfterAttached(Handler handler, int i, Object obj) {
        this.mPcoDataAfterAttachedRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForPhbReady(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        Rlog.d(RILJ_LOG_TAG, "call registerForPhbReady Handler : " + handler);
        this.mPhbReadyRegistrants.add(registrant);
    }

    public void registerForPlmnData(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mPlmnDataRegistrants.add(registrant);
        if (this.mPlmnMvnoData != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mPlmnMvnoData, (Throwable) null));
        }
    }

    public void registerForPsNetworkStateChanged(Handler handler, int i, Object obj) {
        this.mPsNetworkStateRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForPseudoCellInfo(Handler handler, int i, Object obj) {
        this.mPseudoCellInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForQualifiedNetworkTypesChanged(Handler handler, int i, Object obj) {
        this.mQualifiedNetworkTypesRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForRemoveRestrictEutran(Handler handler, int i, Object obj) {
        this.mRemoveRestrictEutranRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForResetAttachApn(Handler handler, int i, Object obj) {
        this.mResetAttachApnRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForRsuSimLockChanged(Handler handler, int i, Object obj) {
        this.mRsuSimlockRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForSignalStrengthWithWcdmaEcioChanged(Handler handler, int i, Object obj) {
        this.mSignalStrengthWithWcdmaEcioRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForSimMissing(Handler handler, int i, Object obj) {
        this.mSimMissing.add(new Registrant(handler, i, obj));
    }

    public void registerForSimPlugIn(Handler handler, int i, Object obj) {
        this.mSimPlugIn.add(new Registrant(handler, i, obj));
    }

    public void registerForSimPlugOut(Handler handler, int i, Object obj) {
        this.mSimPlugOut.add(new Registrant(handler, i, obj));
    }

    public void registerForSimPower(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mSimPowerChanged.add(registrant);
        if (this.mSimPowerInfo != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mSimPowerInfo, (Throwable) null));
        }
    }

    public void registerForSimRecovery(Handler handler, int i, Object obj) {
        this.mSimRecovery.add(new Registrant(handler, i, obj));
    }

    public void registerForSimTrayPlugIn(Handler handler, int i, Object obj) {
        this.mSimTrayPlugIn.add(new Registrant(handler, i, obj));
    }

    public void registerForSmlSlotLockInfoChanged(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mSmlSlotLockInfoChanged.add(registrant);
        if (this.mSmlSlotLockInfo != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mSmlSlotLockInfo, (Throwable) null));
        }
    }

    public void registerForSmsInfoExt(Handler handler, int i, Object obj) {
        this.mSmsInfoExtRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForSmsReady(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mSmsReadyRegistrants.add(registrant);
        if (this.mIsSmsReady) {
            registrant.notifyRegistrant();
        }
    }

    public void registerForTxPower(Handler handler, int i, Object obj) {
        this.mTxPowerRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForTxPowerStatus(Handler handler, int i, Object obj) {
        this.mTxPowerStatusRegistrant.add(new Registrant(handler, i, obj));
    }

    public void registerForVirtualSimOff(Handler handler, int i, Object obj) {
        this.mVirtualSimOff.add(new Registrant(handler, i, obj));
    }

    public void registerForVirtualSimOn(Handler handler, int i, Object obj) {
        this.mVirtualSimOn.add(new Registrant(handler, i, obj));
    }

    public void registerForVsimIndication(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        mtkRiljLog("registerForVsimIndication called...");
        this.mVsimIndicationRegistrants.add(registrant);
    }

    public void reloadModemType(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2184, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " modemType = " + i + ", applyType:1");
            try {
                mtkRadioExProxy.modifyModemType(rILRequestObtainRequest.mSerial, 1, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "modifyModemType", e);
            }
        }
    }

    public void removeCellBroadcastMsg(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2015, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " " + i + ", " + i2);
            try {
                mtkRadioExProxy.removeCbMsg(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "removeCellBroadcastMsg", e);
            }
        }
    }

    public void resetAllConnections(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2146, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.resetAllConnections(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "resetAllConnections", e);
            }
        }
    }

    public void resetMdDataRetryCount(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2063, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ": " + str);
            try {
                mtkRadioExProxy.resetMdDataRetryCount(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "resetMdDataRetryCount", e);
            }
        }
    }

    protected void resetMtkProxyAndRequestList() {
        this.mRadioProxyMtk = null;
        this.mMtkRadioExProxyCookie.incrementAndGet();
        getMtkRadioExProxy(null);
    }

    public void restartRILD(Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2150, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.restartRILD(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "restartRILD", e);
            }
        }
    }

    public void runGbaAuthentication(String str, String str2, boolean z, int i, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2127, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " nafFqdn = " + str + " nafSecureProtocolId = " + str2 + " forceRun = " + z + " netId = " + i);
            try {
                mtkRadioExProxy.runGbaAuthentication(rILRequestObtainRequest.mSerial, str, str2, z, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "runGbaAuthentication", e);
            }
        }
    }

    public void searchRat(int[] iArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2196, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " length=" + iArr.length);
            ArrayList<Integer> arrayList = new ArrayList<>(iArr.length);
            for (int i : iArr) {
                arrayList.add(Integer.valueOf(i));
            }
            try {
                mtkRadioExProxy.setSearchRat(rILRequestObtainRequest.mSerial, arrayList);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "searchRat", e);
            }
        }
    }

    public void searchStoredFrequencyInfo(int i, int i2, int i3, int[] iArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2195, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " operation=" + i + " plmnId=" + i2 + " rat=" + i3 + " length=" + iArr.length);
            ArrayList<Integer> arrayList = new ArrayList<>(iArr.length);
            for (int i4 : iArr) {
                arrayList.add(Integer.valueOf(i4));
            }
            try {
                mtkRadioExProxy.setSearchStoredFreqInfo(rILRequestObtainRequest.mSerial, i, i2, i3, arrayList);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "searchStoredFrequencyInfo", e);
            }
        }
    }

    public void selectFemtoCell(FemtoCellInfo femtoCellInfo, Message message) {
        int i;
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2057, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            int csgRat = femtoCellInfo.getCsgRat();
            if (csgRat == 14) {
                i = 7;
            } else {
                i = csgRat == 3 ? 2 : 0;
            }
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " csgId=" + femtoCellInfo.getCsgId() + " plmn=" + femtoCellInfo.getOperatorNumeric() + " rat=" + femtoCellInfo.getCsgRat() + " act=" + i);
            try {
                mtkRadioExProxy.selectFemtocell(rILRequestObtainRequest.mSerial, convertNullToEmptyString(femtoCellInfo.getOperatorNumeric()), convertNullToEmptyString(Integer.toString(i)), convertNullToEmptyString(Integer.toString(femtoCellInfo.getCsgId())));
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "selectFemtoCell", e);
            }
        }
    }

    public void sendCNAP(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2106, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + "CNAP string = " + str);
            try {
                mtkRadioExProxy.sendCnap(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendCNAP", e);
            }
        }
    }

    public void sendDtmfQueueRR(DtmfQueueHandler.DtmfQueueRR dtmfQueueRR) {
        RILRequest rILRequest = dtmfQueueRR.rr;
        android.hardware.radio.V1_0.IRadio radioProxy = getRadioProxy(rILRequest.mResult);
        if (radioProxy == null) {
            mtkRiljLoge("get RadioProxy null. ([" + rILRequest.serialString() + "] request: " + requestToString(rILRequest.mRequest) + ")");
            return;
        }
        mtkRiljLog(rILRequest.serialString() + "> " + requestToString(rILRequest.mRequest) + " (by DtmfQueueRR)");
        try {
            int i = rILRequest.mRequest;
            if (i == 15) {
                radioProxy.switchWaitingOrHoldingAndActive(rILRequest.mSerial);
            } else if (i == 16) {
                radioProxy.conference(rILRequest.mSerial);
            } else if (i == 49) {
                Object[] objArr = dtmfQueueRR.params;
                if (objArr.length != 1) {
                    mtkRiljLoge("request " + requestToString(rILRequest.mRequest) + " params error. (" + objArr.toString() + ")");
                } else {
                    char cCharValue = ((Character) objArr[0]).charValue();
                    radioProxy.startDtmf(rILRequest.mSerial, cCharValue + "");
                }
            } else if (i == 50) {
                radioProxy.stopDtmf(rILRequest.mSerial);
            } else if (i == 52) {
                Object[] objArr2 = dtmfQueueRR.params;
                if (objArr2.length != 1) {
                    mtkRiljLoge("request " + requestToString(rILRequest.mRequest) + " params error. (" + Arrays.toString(objArr2) + ")");
                } else {
                    radioProxy.separateConnection(rILRequest.mSerial, ((Integer) objArr2[0]).intValue());
                }
            } else if (i != 72) {
                mtkRiljLoge("get RadioProxy null. ([" + rILRequest.serialString() + "] request: " + requestToString(rILRequest.mRequest) + ")");
            } else {
                radioProxy.explicitCallTransfer(rILRequest.mSerial);
            }
        } catch (RemoteException | RuntimeException e) {
            handleRadioProxyExceptionForRR(rILRequest, "DtmfQueueRR(" + requestToString(rILRequest.mRequest) + ")", e);
        }
    }

    public void sendEmbmsAtCommand(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2060, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " data: " + str);
            try {
                mtkRadioExProxy.sendEmbmsAtCommand(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendEmbmsAtCommand", e);
            }
        }
    }

    public void sendRsuRequest(RsuRequestInfo rsuRequestInfo, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy == null || rsuRequestInfo == null) {
            return;
        }
        RILRequest rILRequestObtainRequest = obtainRequest(2204, message, this.mRILDefaultWorkSource, new Object[0]);
        mtkRiljLog(rILRequestObtainRequest.serialString() + "> RIL_REQUEST_SML_RSU_REQUEST opId = " + rsuRequestInfo.opId + " requestId = " + rsuRequestInfo.requestId);
        try {
            IMtkRadioEx.castFrom(mtkRadioExProxy).sendRsuRequest(rILRequestObtainRequest.mSerial, rsuRequestInfo);
        } catch (RemoteException | RuntimeException e) {
            handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendRsuRequest", e);
        }
    }

    public void sendSarIndicator(int i, String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2201, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " sarCmdType=" + i + " sarParameter=" + str);
            try {
                mtkRadioExProxy.sendSarIndicator(rILRequestObtainRequest.mSerial, i, str);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendSarIndicator", e);
            }
        }
    }

    public boolean sendVsimNotification(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy == null) {
            return false;
        }
        RILRequest rILRequestObtainRequest = obtainRequest(2113, message, this.mRILDefaultWorkSource, new Object[0]);
        mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ", eventId: " + i2 + ", simTpye: " + i3);
        try {
            mtkRadioExProxy.sendVsimNotification(rILRequestObtainRequest.mSerial, i, i2, i3);
            return true;
        } catch (RemoteException e) {
            handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendVsimNotification", e);
            return false;
        }
    }

    public boolean sendVsimOperation(int i, int i2, int i3, int i4, byte[] bArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy == null) {
            return false;
        }
        RILRequest rILRequestObtainRequest = obtainRequest(2114, message, this.mRILDefaultWorkSource, new Object[0]);
        mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
        mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ", eventId: " + i2 + ", length: " + i4);
        ArrayList<Byte> arrayList = new ArrayList<>();
        for (byte b : bArr) {
            arrayList.add(Byte.valueOf(b));
        }
        try {
            try {
                mtkRadioExProxy.sendVsimOperation(rILRequestObtainRequest.mSerial, i, i2, i3, i4, arrayList);
                return true;
            } catch (RemoteException e) {
                e = e;
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendVsimOperation", e);
                return false;
            }
        } catch (RemoteException e2) {
            e = e2;
        }
    }

    public void sendWifiAssociated(String str, boolean z, String str2, String str3, int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2206, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " associated:" + z + ", mtu: " + i);
            try {
                mtkRadioExProxy.sendWifiAssociated(rILRequestObtainRequest.mSerial, str, z ? 1 : 0, str2, str3, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendWifiAssociated", e);
            }
        }
    }

    public void sendWifiEnabled(String str, int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2205, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " isWifiEnabled:" + i);
            try {
                mtkRadioExProxy.sendWifiEnabled(rILRequestObtainRequest.mSerial, str, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendWifiEnabled", e);
            }
        }
    }

    public void sendWifiIpAddress(String str, String str2, String str3, int i, int i2, String str4, String str5, int i3, String str6, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2207, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " ipv4PrefixLen: " + i + " ipv6PrefixLen: " + i2 + " ipv4Gateway: " + str4 + " ipv6Gateway: " + str5 + " dnsCount: " + i3 + " dnsAddresses: " + str6);
            try {
                mtkRadioExProxy.sendWifiIpAddress(rILRequestObtainRequest.mSerial, str, str2, str3, i, i2, str4, str5, i3, str6);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendWifiIpAddress", e);
            }
        }
    }

    public void separateConnection(int i, Message message) {
        if (getMtkRadioExProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(52, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " gsmIndex = " + i);
            handleChldRelatedRequest(rILRequestObtainRequest, new Object[]{Integer.valueOf(i)});
        }
    }

    public void setApcMode(int i, boolean z, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2021, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " " + i + ", " + z + ", " + i2);
            try {
                mtkRadioExProxy.setApcMode(rILRequestObtainRequest.mSerial, i, z ? 1 : 0, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setApcMode", e);
            }
        }
    }

    public void setAtInfoNotification(Handler handler, int i, Object obj) {
        this.mEmbmsAtInfoNotificationRegistrant.add(new Registrant(handler, i, obj));
    }

    public void setBackgroundSearchTimer(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2197, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " duration=" + i);
            try {
                mtkRadioExProxy.setBgsrchDeltaSleepTimer(rILRequestObtainRequest.mSerial, i);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setBackgroundSearchTimer", e);
            }
        }
    }

    public void setCDMACardInitalEsnMeid(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mCDMACardEsnMeidRegistrant = registrant;
        if (this.mEspOrMeid != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mEspOrMeid, (Throwable) null));
        }
    }

    public void setCLIP(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2103, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " clipEnable = " + i);
            try {
                mtkRadioExProxy.setClip(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCLIP", e);
            }
        }
    }

    public void setCOLP(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2123, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " colpEnable = " + i);
            try {
                mtkRadioExProxy.setColp(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCOLP", e);
            }
        }
    }

    public void setCOLR(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2124, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " colrEnable = " + i);
            try {
                mtkRadioExProxy.setColr(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCOLR", e);
            }
        }
    }

    public void setCallForwardInTimeSlot(int i, int i2, int i3, String str, int i4, long[] jArr, Message message) {
        String str2 = "";
        String str3 = "";
        if (jArr != null && jArr.length == 2) {
            for (int i5 = 0; i5 < jArr.length; i5++) {
                Date date = new Date(jArr[i5]);
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                if (i5 == 0) {
                    str2 = simpleDateFormat.format(date);
                } else {
                    str3 = simpleDateFormat.format(date);
                }
            }
        }
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2126, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " action = " + i + " cfReason = " + i2 + " serviceClass = " + i3 + " timeSeconds = " + i4 + "timeSlot = [" + str2 + ":" + str3 + "]");
            CallForwardInfoEx callForwardInfoEx = new CallForwardInfoEx();
            callForwardInfoEx.status = i;
            callForwardInfoEx.reason = i2;
            callForwardInfoEx.serviceClass = i3;
            callForwardInfoEx.toa = PhoneNumberUtils.toaFromString(str);
            callForwardInfoEx.number = convertNullToEmptyString(str);
            callForwardInfoEx.timeSeconds = i4;
            callForwardInfoEx.timeSlotBegin = convertNullToEmptyString(str2);
            callForwardInfoEx.timeSlotEnd = convertNullToEmptyString(str3);
            try {
                mtkRadioExProxy.setCallForwardInTimeSlot(rILRequestObtainRequest.mSerial, callForwardInfoEx);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallForwardInTimeSlot", e);
            }
        }
    }

    public void setCallIndication(int i, int i2, int i3, int i4, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2016, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " " + i + ", " + i2 + ", " + i3 + ", " + i4);
            try {
                mtkRadioExProxy.setCallIndication(rILRequestObtainRequest.mSerial, i, i2, i3, i4);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallIndication", e);
            }
        }
    }

    public void setCallSubAddress(boolean z, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2208, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " enable=" + z);
            try {
                mtkRadioExProxy.setCallSubAddress(rILRequestObtainRequest.mSerial, z);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallSubAddress error", e);
            }
        }
    }

    public void setCallValidTimer(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2181, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " timer=" + i);
            try {
                mtkRadioExProxy.setCallValidTimer(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallValidTimer", e);
            }
        }
    }

    public void setDisable2G(boolean z, Message message) {
        IMtkRilOp rilOp = getRilOp();
        if (rilOp != null) {
            rilOp.setDisable2G(z, message);
        }
    }

    public void setEccMode(String str, int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2035, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " number=" + str + " enable=" + i + " airplaneMode=" + i2 + " imsReg=" + i3);
            try {
                mtkRadioExProxy.setEccMode(rILRequestObtainRequest.mSerial, str, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setEccMode", e);
            }
        }
    }

    public void setEccNum(String str, String str2) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(null);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2148, null, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " eccListWithCard: " + str + ", eccListNoCard: " + str2);
            try {
                mtkRadioExProxy.setEccNum(rILRequestObtainRequest.mSerial, str, str2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setEccNum", e);
            }
        }
    }

    public void setEccPreferredRat(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2110, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " phoneType=" + i);
            try {
                mtkRadioExProxy.eccPreferredRat(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setEccPreferredRat", e);
            }
        }
    }

    public void setEmbmsSessionStatusNotification(Handler handler, int i, Object obj) {
        this.mEmbmsSessionStatusNotificationRegistrant.add(new Registrant(handler, i, obj));
    }

    public void setEtws(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2014, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setEtws(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setEtws", e);
            }
        }
    }

    public void setFdMode(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2025, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setFdMode(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setFdMode", e);
            }
        }
    }

    public void setFemtoCellSystemSelectionMode(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2059, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " mode=" + i);
            try {
                mtkRadioExProxy.setFemtoCellSystemSelectionMode(rILRequestObtainRequest.mSerial, i);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setFemtoCellSystemSelectionMode", e);
            }
        }
    }

    public void setGsmBroadcastLangs(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2009, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ", lang:" + str);
            try {
                mtkRadioExProxy.setGsmBroadcastLangs(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setGsmBroadcastLangs", e);
            }
        }
    }

    public void setGwsdMode(int i, String str, String str2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2180, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)));
            ArrayList<String> arrayList = new ArrayList<>();
            arrayList.add(Integer.toString(i));
            arrayList.add(str);
            arrayList.add(str2);
            try {
                mtkRadioExProxy.setGwsdMode(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setGwsdMode", e);
            }
        }
    }

    public void setIgnoreSameNumberInterval(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2182, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " interval=" + i);
            try {
                mtkRadioExProxy.setIgnoreSameNumberInterval(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setIgnoreSameNumberInterval", e);
            }
        }
    }

    public void setInvalidSimInfo(Handler handler, int i, Object obj) {
        this.mInvalidSimInfoRegistrant.add(new Registrant(handler, i, obj));
    }

    public void setKeepAliveByIpData(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2200, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " data=" + str);
            try {
                mtkRadioExProxy.setKeepAliveByIpData(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setKeepAliveByIpData", e);
            }
        }
    }

    public void setKeepAliveByPDCPCtrlPDU(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2199, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " data=" + str);
            try {
                mtkRadioExProxy.setKeepAliveByPDCPCtrlPDU(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setKeepAliveByPDCPCtrlPDU", e);
            }
        }
    }

    public void setLteReleaseVersion(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2151, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " mode = " + i);
            try {
                mtkRadioExProxy.setLteReleaseVersion(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setLteReleaseVersion", e);
            }
        }
    }

    public void setModemPower(boolean z, Message message) {
        mtkRiljLog("Set Modem power as: " + z);
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = z ? obtainRequest(2003, message, this.mRILDefaultWorkSource, new Object[0]) : obtainRequest(MtkGsmCdmaPhone.EVENT_GET_CLIR_COMPLETE, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " " + z);
            try {
                mtkRadioExProxy.setModemPower(rILRequestObtainRequest.mSerial, z);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setModemPower", e);
            }
        }
    }

    public void setNetworkLock(int i, int i2, String str, String str2, String str3, String str4, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2068, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setNetworkLock(rILRequestObtainRequest.mSerial, i, i2, str == null ? "" : str, str2 == null ? "" : str2, str3 == null ? "" : str3, str4 == null ? "" : str4);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setNetworkLock", e);
            }
        }
    }

    public void setNetworkSelectionModeManualWithAct(String str, String str2, int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(MtkGsmCdmaPhone.EVENT_SET_CALL_BARRING_COMPLETE, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " operatorNumeric = " + str);
            try {
                mtkRadioExProxy.setNetworkSelectionModeManualWithAct(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), convertNullToEmptyString(str2), Integer.toString(i));
            } catch (RemoteException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setNetworkSelectionModeManual", e);
            }
        }
    }

    public void setOnBipProactiveCmd(Handler handler, int i, Object obj) {
        this.mBipProCmdRegistrant.add(new Registrant(handler, i, obj));
    }

    public void setOnCallRelatedSuppSvc(Handler handler, int i, Object obj) {
        this.mCallRelatedSuppSvcRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnEtwsNotification(Handler handler, int i, Object obj) {
        this.mEtwsNotificationRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnIncomingCallIndication(Handler handler, int i, Object obj) {
        this.mIncomingCallIndicationRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnMeSmsFull(Handler handler, int i, Object obj) {
        this.mMeSmsFullRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnPlmnChangeNotification(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        synchronized (this.mWPMonitor) {
            this.mPlmnChangeNotificationRegistrant.add(registrant);
            if (this.mEcopsReturnValue != null) {
                registrant.notifyRegistrant(new AsyncResult((Object) null, this.mEcopsReturnValue, (Throwable) null));
                this.mEcopsReturnValue = null;
            }
        }
    }

    public void setOnRegistrationSuspended(Handler handler, int i, Object obj) {
        synchronized (this.mWPMonitor) {
            Registrant registrant = new Registrant(handler, i, obj);
            this.mRegistrationSuspendedRegistrant = registrant;
            if (this.mEmsrReturnValue != null) {
                registrant.notifyRegistrant(new AsyncResult((Object) null, this.mEmsrReturnValue, (Throwable) null));
                this.mEmsrReturnValue = null;
            }
        }
    }

    public void setOnStkSetupMenuReset(Handler handler, int i, Object obj) {
        this.mStkSetupMenuResetRegistrant.add(new Registrant(handler, i, obj));
    }

    public void setOnSuppServiceNotificationEx(Handler handler, int i, Object obj) {
        this.mSsnExRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnUnsolOemHookRaw(Handler handler, int i, Object obj) {
        this.mUnsolOemHookRegistrant = new Registrant(handler, i, obj);
    }

    public void setPOLEntry(int i, String str, int i2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2109, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setPOLEntry(rILRequestObtainRequest.mSerial, i, str, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setPOLEntry", e);
            }
        }
    }

    public void setPhoneBookMemStorage(String str, String str2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2047, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> :::" + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setPhoneBookMemStorage(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), convertNullToEmptyString(str2));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "writeUPBGrpEntry", e);
            }
        }
    }

    public void setPhonebookReady(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2157, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ready = " + i);
            try {
                mtkRadioExProxy.setPhonebookReady(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setPhonebookReady", e);
            }
        }
    }

    public void setPreferredNetworkType(int i, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(73, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " networkType = " + i);
            this.mPreferredNetworkType = i;
            this.mMetrics.writeSetPreferredNetworkType(this.mPhoneId.intValue(), i);
            if (this.mRadioVersion.lessOrEqual(RADIO_HAL_VERSION_1_3)) {
                try {
                    radioProxy.setPreferredNetworkType(rILRequestObtainRequest.mSerial, i);
                    return;
                } catch (RemoteException | RuntimeException e) {
                    handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setPreferredNetworkType", e);
                    return;
                }
            }
            if (this.mRadioVersion.greaterOrEqual(RADIO_HAL_VERSION_1_4)) {
                try {
                    radioProxy.setPreferredNetworkTypeBitmap(rILRequestObtainRequest.mSerial, convertToHalRadioAccessFamily(MtkRadioAccessFamily.getRafFromNetworkType(i)));
                } catch (RemoteException | RuntimeException e2) {
                    handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setPreferredNetworkTypeBitmap", e2);
                }
            }
        }
    }

    public void setRemoveRestrictEutranMode(boolean z, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2100, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ": " + (z ? 1 : 0));
            try {
                mtkRadioExProxy.setRemoveRestrictEutranMode(rILRequestObtainRequest.mSerial, z ? 1 : 0);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setRemoveRestrictEutranMode", e);
            }
        }
    }

    protected void setResponseFunctions() {
        this.mMtkRadioResponse = new MtkRadioResponse(this);
        this.mMtkRadioIndication = new MtkRadioIndication(this);
        try {
            mtkRiljLog("override response functions");
            this.mRadioProxy.setResponseFunctions(this.mMtkRadioResponse, this.mMtkRadioIndication);
        } catch (RemoteException e) {
            mtkRiljLoge("override response function error, " + e);
        }
    }

    public void setResumeRegistration(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(MtkGsmCdmaPhone.EVENT_IMS_UT_DONE, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " sessionId = " + i);
            try {
                mtkRadioExProxy.setResumeRegistration(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setResumeRegistration", e);
            }
        }
    }

    public void setRoamingEnable(int[] iArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2111, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            ArrayList<Integer> arrayList = new ArrayList<>(iArr.length);
            for (int i : iArr) {
                arrayList.add(Integer.valueOf(i));
            }
            try {
                mtkRadioExProxy.setRoamingEnable(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setRoamingEnable", e);
            }
        }
    }

    public void setRxTestConfig(int i, Message message) {
        IMtkRilOp rilOp = getRilOp();
        if (rilOp != null) {
            rilOp.setRxTestConfig(i, message);
        }
    }

    public void setServiceStateToModem(int i, int i2, int i3, int i4, int i5, int i6, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2130, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " voiceRegState: " + i + " dataRegState: " + i2 + " voiceRoamingType: " + i3 + " dataRoamingType: " + i4 + " rilVoiceRegState: " + i5 + " rilDataRegState:" + i6);
            try {
                mtkRadioExProxy.setServiceStateToModem(rILRequestObtainRequest.mSerial, i, i2, i3, i4, i5, i6);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setServiceStateToModem", e);
            }
        }
    }

    public void setSimPower(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(ExternalSimConstants.MSG_ID_CAPABILITY_SWITCH_DONE, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setSimPower(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setSimPower", e);
            }
        }
    }

    public void setSmsParameters(MtkSmsParameters mtkSmsParameters, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2013, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            SmsParams smsParams = new SmsParams();
            smsParams.dcs = mtkSmsParameters.dcs;
            smsParams.format = mtkSmsParameters.format;
            smsParams.pid = mtkSmsParameters.pid;
            smsParams.vp = mtkSmsParameters.vp;
            try {
                mtkRadioExProxy.setSmsParameters(rILRequestObtainRequest.mSerial, smsParams);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setSmsParameters", e);
            }
        }
    }

    public void setSuppServProperty(String str, String str2, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2168, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToStringEx(Integer.valueOf(rILRequestObtainRequest.mRequest)) + " name=" + str + ", value=" + str2 + ", result=" + message);
            try {
                mtkRadioExProxy.setSuppServProperty(rILRequestObtainRequest.mSerial, str, str2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setSuppServProperty", e);
            }
        }
    }

    public void setTrm(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2028, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setTrm(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setTrm", e);
            }
        }
    }

    public void setTxPower(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2194, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " power=" + i);
            try {
                mtkRadioExProxy.setTxPower(rILRequestObtainRequest.mSerial, i);
            } catch (Exception e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setTxPower", e);
            }
        }
    }

    public void setTxPowerStatus(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2158, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setTxPowerStatus(rILRequestObtainRequest.mSerial, i);
                Message messageObtainMessage = this.mRilHandler.obtainMessage(5);
                messageObtainMessage.obj = null;
                messageObtainMessage.arg1 = rILRequestObtainRequest.mSerial;
                this.mRilHandler.sendMessageDelayed(messageObtainMessage, 2000L);
            } catch (RemoteException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setTxPowerStatus", e);
            }
        }
    }

    public void setVendorSetting(int i, String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2173, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.setVendorSetting(rILRequestObtainRequest.mSerial, i, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    public void setVoicePreferStatus(int i) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(null);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2147, null, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " status: " + i);
            try {
                mtkRadioExProxy.setVoicePreferStatus(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVoicePreferStatus", e);
            }
        }
    }

    public void startDtmf(char c, Message message) {
        synchronized (this.mDtmfReqQueue) {
            if (!this.mDtmfReqQueue.hasSendChldRequest()) {
                int size = this.mDtmfReqQueue.size();
                Objects.requireNonNull(this.mDtmfReqQueue);
                if (size < 32) {
                    if (this.mDtmfReqQueue.isStart()) {
                        mtkRiljLog("DTMF status conflict, want to start DTMF when status is " + this.mDtmfReqQueue.isStart());
                    } else if (getMtkRadioExProxy(message) != null) {
                        RILRequest rILRequestObtainRequest = obtainRequest(49, message, this.mRILDefaultWorkSource, new Object[0]);
                        this.mDtmfReqQueue.start();
                        DtmfQueueHandler.DtmfQueueRR dtmfQueueRRBuildDtmfQueueRR = this.mDtmfReqQueue.buildDtmfQueueRR(rILRequestObtainRequest, new Object[]{Character.valueOf(c)});
                        this.mDtmfReqQueue.add(dtmfQueueRRBuildDtmfQueueRR);
                        if (this.mDtmfReqQueue.size() == 1) {
                            mtkRiljLog("send start dtmf");
                            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
                            sendDtmfQueueRR(dtmfQueueRRBuildDtmfQueueRR);
                        }
                    }
                }
            }
        }
    }

    public void startNetworkScan(NetworkScanRequest networkScanRequest, Message message) {
        android.hardware.radio.V1_5.IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            if (!this.mRadioVersion.greaterOrEqual(RADIO_HAL_VERSION_1_5)) {
                super.startNetworkScan(networkScanRequest, message);
                return;
            }
            android.hardware.radio.V1_5.NetworkScanRequest networkScanRequest2 = new android.hardware.radio.V1_5.NetworkScanRequest();
            networkScanRequest2.type = networkScanRequest.getScanType();
            networkScanRequest2.interval = networkScanRequest.getSearchPeriodicity();
            networkScanRequest2.maxSearchTime = networkScanRequest.getMaxSearchTime();
            networkScanRequest2.incrementalResultsPeriodicity = networkScanRequest.getIncrementalResultsPeriodicity();
            networkScanRequest2.incrementalResults = networkScanRequest.getIncrementalResults();
            for (android.telephony.RadioAccessSpecifier radioAccessSpecifier : networkScanRequest.getSpecifiers()) {
                RadioAccessSpecifier radioAccessSpecifierMtkConvertRadioAccessSpecifierToRadioHAL_1_5 = mtkConvertRadioAccessSpecifierToRadioHAL_1_5(radioAccessSpecifier);
                if (radioAccessSpecifierMtkConvertRadioAccessSpecifierToRadioHAL_1_5 == null) {
                    return;
                }
                networkScanRequest2.specifiers.add(radioAccessSpecifierMtkConvertRadioAccessSpecifierToRadioHAL_1_5);
            }
            networkScanRequest2.mccMncs.addAll(networkScanRequest.getPlmns());
            RILRequest rILRequestObtainRequest = obtainRequest(142, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.startNetworkScan_1_5(rILRequestObtainRequest.mSerial, networkScanRequest2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "startNetworkScan", e);
            }
        }
    }

    public void stopDtmf(Message message) {
        synchronized (this.mDtmfReqQueue) {
            if (!this.mDtmfReqQueue.hasSendChldRequest()) {
                int size = this.mDtmfReqQueue.size();
                Objects.requireNonNull(this.mDtmfReqQueue);
                if (size < 32) {
                    if (!this.mDtmfReqQueue.isStart()) {
                        mtkRiljLog("DTMF status conflict, want to start DTMF when status is " + this.mDtmfReqQueue.isStart());
                    } else if (getMtkRadioExProxy(message) != null) {
                        RILRequest rILRequestObtainRequest = obtainRequest(50, message, this.mRILDefaultWorkSource, new Object[0]);
                        this.mDtmfReqQueue.stop();
                        DtmfQueueHandler.DtmfQueueRR dtmfQueueRRBuildDtmfQueueRR = this.mDtmfReqQueue.buildDtmfQueueRR(rILRequestObtainRequest, null);
                        this.mDtmfReqQueue.add(dtmfQueueRRBuildDtmfQueueRR);
                        if (this.mDtmfReqQueue.size() == 1) {
                            mtkRiljLog("send stop dtmf");
                            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
                            sendDtmfQueueRR(dtmfQueueRRBuildDtmfQueueRR);
                        }
                    }
                }
            }
        }
    }

    public void storeModemType(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2184, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " modemType = " + i + ", applyType:2");
            try {
                mtkRadioExProxy.modifyModemType(rILRequestObtainRequest.mSerial, 2, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "modifyModemType", e);
            }
        }
    }

    public void supplyDepersonalization(String str, int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2143, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " netpin = " + str + " type = " + i);
            try {
                mtkRadioExProxy.supplyDepersonalization(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "supplyNetworkDepersonalization", e);
            }
        }
    }

    public void supplyDeviceNetworkDepersonalization(String str, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2171, message, this.mRILDefaultWorkSource, new Object[0]);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.supplyDeviceNetworkDepersonalization(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "supplyDeviceNetworkDepersonalization", e);
            }
        }
    }

    public void switchWaitingOrHoldingAndActive(Message message) {
        if (getMtkRadioExProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(15, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            handleChldRelatedRequest(rILRequestObtainRequest, null);
        }
    }

    public void syncDataSettingsToMd(int[] iArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2062, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ", " + iArr[0] + ", " + iArr[1] + ", " + iArr[2]);
            ArrayList<Integer> arrayList = new ArrayList<>(iArr.length);
            for (int i : iArr) {
                arrayList.add(Integer.valueOf(i));
            }
            try {
                mtkRadioExProxy.syncDataSettingsToMd(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "syncDataSettingsToMd", e);
            }
        }
    }

    public void triggerModeSwitchByEcc(int i, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2023, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.triggerModeSwitchByEcc(rILRequestObtainRequest.mSerial, i);
                Message messageObtainMessage = this.mRilHandler.obtainMessage(5);
                messageObtainMessage.obj = null;
                messageObtainMessage.arg1 = rILRequestObtainRequest.mSerial;
                this.mRilHandler.sendMessageDelayed(messageObtainMessage, 2000L);
            } catch (RemoteException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "triggerModeSwitchByEcc", e);
            }
        }
    }

    public void unSetAtInfoNotification(Handler handler) {
        this.mEmbmsAtInfoNotificationRegistrant.remove(handler);
    }

    public void unSetEmbmsSessionStatusNotification(Handler handler) {
        this.mEmbmsSessionStatusNotificationRegistrant.remove(handler);
    }

    public void unSetInvalidSimInfo(Handler handler) {
        this.mInvalidSimInfoRegistrant.remove(handler);
    }

    public void unSetOnBipProactiveCmd(Handler handler) {
        this.mBipProCmdRegistrant.remove(handler);
    }

    public void unSetOnCallRelatedSuppSvc(Handler handler) {
        this.mCallRelatedSuppSvcRegistrant.clear();
    }

    public void unSetOnEtwsNotification(Handler handler) {
        this.mEtwsNotificationRegistrant.clear();
    }

    public void unSetOnMeSmsFull(Handler handler) {
        this.mMeSmsFullRegistrant.clear();
    }

    public void unSetOnPlmnChangeNotification(Handler handler) {
        synchronized (this.mWPMonitor) {
            this.mPlmnChangeNotificationRegistrant.remove(handler);
        }
    }

    public void unSetOnRegistrationSuspended(Handler handler) {
        synchronized (this.mWPMonitor) {
            this.mRegistrationSuspendedRegistrant.clear();
        }
    }

    public void unSetOnStkSetupMenuReset(Handler handler) {
        this.mStkSetupMenuResetRegistrant.remove(handler);
    }

    public void unSetOnSuppServiceNotificationEx(Handler handler) {
        Registrant registrant = this.mSsnExRegistrant;
        if (registrant == null || registrant.getHandler() != handler) {
            return;
        }
        this.mSsnExRegistrant.clear();
        this.mSsnExRegistrant = null;
    }

    public void unSetOnUnsolOemHookRaw(Handler handler) {
        Registrant registrant = this.mUnsolOemHookRegistrant;
        if (registrant == null || registrant.getHandler() != handler) {
            return;
        }
        this.mUnsolOemHookRegistrant.clear();
        this.mUnsolOemHookRegistrant = null;
    }

    public void unregisterForAttachApnChanged(Handler handler) {
        this.mAttachApnChangedRegistrants.remove(handler);
    }

    public void unregisterForCallAdditionalInfo(Handler handler) {
        this.mCallAdditionalInfoRegistrants.remove(handler);
    }

    public void unregisterForCallForwardingInfo(Handler handler) {
        this.mCallForwardingInfoRegistrants.remove(handler);
    }

    public void unregisterForCardDetectedInd(Handler handler) {
        this.mCardDetectedIndRegistrant.remove(handler);
    }

    public void unregisterForCipherIndication(Handler handler) {
        this.mCipherIndicationRegistrants.remove(handler);
    }

    public void unregisterForCommonSlotNoChanged(Handler handler) {
        this.mSimCommonSlotNoChanged.remove(handler);
    }

    public void unregisterForCsNetworkStateChanged(Handler handler) {
        this.mCsNetworkStateRegistrants.remove(handler);
    }

    public void unregisterForDataAllowed(Handler handler) {
        this.mDataAllowedRegistrants.remove(handler);
    }

    public void unregisterForDedicatedBearerActivated(Handler handler) {
        this.mDedicatedBearerActivedRegistrants.remove(handler);
    }

    public void unregisterForDedicatedBearerDeactivationed(Handler handler) {
        this.mDedicatedBearerDeactivatedRegistrants.remove(handler);
    }

    public void unregisterForDedicatedBearerModified(Handler handler) {
        this.mDedicatedBearerModifiedRegistrants.remove(handler);
    }

    public void unregisterForDsbpStateChanged(Handler handler) {
        this.mDsbpStateRegistrant.remove(handler);
    }

    public void unregisterForDsdaStateChanged(Handler handler) {
        this.mDsdaStateRegistrant.remove(handler);
    }

    public void unregisterForEconfSrvcc(Handler handler) {
        this.mEconfSrvccRegistrants.remove(handler);
    }

    public void unregisterForFemtoCellInfo(Handler handler) {
        this.mFemtoCellInfoRegistrants.remove(handler);
    }

    public void unregisterForIMEILock(Handler handler) {
        this.mImeiLockRegistrant.remove(handler);
    }

    public void unregisterForIccidChanged(Handler handler) {
        this.mIccidRegistrants.remove(handler);
    }

    public void unregisterForImsiRefreshDone(Handler handler) {
        this.mImsiRefreshDoneRegistrant.remove(handler);
    }

    public void unregisterForMccMncChanged(Handler handler) {
        this.mMccMncRegistrants.remove(handler);
    }

    public void unregisterForMdDataRetryCountReset(Handler handler) {
        this.mMdDataRetryCountResetRegistrants.remove(handler);
    }

    public void unregisterForMobileDataUsage(Handler handler) {
        this.mMobileDataUsageRegistrants.remove(handler);
    }

    public void unregisterForModulation(Handler handler) {
        IMtkRilOp rilOp = getRilOp();
        if (rilOp != null) {
            rilOp.unregisterForModulation(handler);
        }
    }

    public void unregisterForNetworkEvent(Handler handler) {
        this.mNetworkEventRegistrants.remove(handler);
    }

    public void unregisterForNetworkInfo(Handler handler) {
        this.mNetworkInfoRegistrant.remove(handler);
    }

    public void unregisterForNetworkReject(Handler handler) {
        this.mNetworkRejectRegistrants.remove(handler);
    }

    public void unregisterForNwLimitState(Handler handler) {
        this.mNwLimitRegistrants.remove(handler);
    }

    public void unregisterForPcoDataAfterAttached(Handler handler) {
        this.mPcoDataAfterAttachedRegistrants.remove(handler);
    }

    public void unregisterForPhbReady(Handler handler) {
        this.mPhbReadyRegistrants.remove(handler);
    }

    public void unregisterForPlmnData(Handler handler) {
        this.mPlmnDataRegistrants.remove(handler);
    }

    public void unregisterForPsNetworkStateChanged(Handler handler) {
        this.mPsNetworkStateRegistrants.remove(handler);
    }

    public void unregisterForPseudoCellInfo(Handler handler) {
        this.mPseudoCellInfoRegistrants.remove(handler);
    }

    public void unregisterForQualifiedNetworkTypesChanged(Handler handler) {
        this.mQualifiedNetworkTypesRegistrant.remove(handler);
    }

    public void unregisterForRemoveRestrictEutran(Handler handler) {
        this.mRemoveRestrictEutranRegistrants.remove(handler);
    }

    public void unregisterForResetAttachApn(Handler handler) {
        this.mResetAttachApnRegistrants.remove(handler);
    }

    public void unregisterForRsuSimLockChanged(Handler handler) {
        this.mRsuSimlockRegistrants.remove(handler);
    }

    public void unregisterForSimMissing(Handler handler) {
        this.mSimMissing.remove(handler);
    }

    public void unregisterForSimPlugIn(Handler handler) {
        this.mSimPlugIn.remove(handler);
    }

    public void unregisterForSimPlugOut(Handler handler) {
        this.mSimPlugOut.remove(handler);
    }

    public void unregisterForSimPower(Handler handler) {
        this.mSimPowerChanged.remove(handler);
    }

    public void unregisterForSimRecovery(Handler handler) {
        this.mSimRecovery.remove(handler);
    }

    public void unregisterForSimTrayPlugIn(Handler handler) {
        this.mSimTrayPlugIn.remove(handler);
    }

    public void unregisterForSmlSlotLockInfoChanged(Handler handler) {
        this.mSmlSlotLockInfoChanged.remove(handler);
    }

    public void unregisterForSmsInfoExt(Handler handler) {
        this.mSmsInfoExtRegistrants.remove(handler);
    }

    public void unregisterForSmsReady(Handler handler) {
        this.mSmsReadyRegistrants.remove(handler);
    }

    public void unregisterForTxPower(Handler handler) {
        this.mTxPowerRegistrant.remove(handler);
    }

    public void unregisterForTxPowerStatus(Handler handler) {
        this.mTxPowerStatusRegistrant.remove(handler);
    }

    public void unregisterForVirtualSimOff(Handler handler) {
        this.mVirtualSimOff.remove(handler);
    }

    public void unregisterForVirtualSimOn(Handler handler) {
        this.mVirtualSimOn.remove(handler);
    }

    public void unregisterForVsimIndication(Handler handler) {
        mtkRiljLog("unregisterForVsimIndication called...");
        this.mVsimIndicationRegistrants.remove(handler);
    }

    public void unregisterForignalStrengthWithWcdmaEcioChanged(Handler handler) {
        this.mSignalStrengthWithWcdmaEcioRegistrants.remove(handler);
    }

    public void unsetOnIncomingCallIndication(Handler handler) {
        this.mIncomingCallIndicationRegistrant.clear();
    }

    public void writePhbEntry(PhbEntry phbEntry, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2037, message, this.mRILDefaultWorkSource, new Object[0]);
            PhbEntryStructure phbEntryStructureConvertToHalPhbEntryStructure = convertToHalPhbEntryStructure(phbEntry);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ": " + phbEntry);
            try {
                mtkRadioExProxy.writePhbEntry(rILRequestObtainRequest.mSerial, phbEntryStructureConvertToHalPhbEntryStructure);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "writePhbEntry", e);
            }
        }
    }

    public void writePhoneBookEntryExt(PBEntry pBEntry, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2049, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> :::" + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioExProxy.writePhoneBookEntryExt(rILRequestObtainRequest.mSerial, convertToHalPhbEntryExt(pBEntry));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "writePhoneBookEntryExt", e);
            }
        }
    }

    public void writeUPBGrpEntry(int i, int[] iArr, Message message) {
        IMtkRadioEx mtkRadioExProxy = getMtkRadioExProxy(message);
        if (mtkRadioExProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2044, message, this.mRILDefaultWorkSource, new Object[0]);
            mtkRiljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + ":  adnIndex: " + i + " nLen: " + iArr.length);
            ArrayList<Integer> arrayList = new ArrayList<>(iArr.length);
            for (int i2 : iArr) {
                arrayList.add(Integer.valueOf(i2));
            }
            try {
                mtkRadioExProxy.writeUPBGrpEntry(rILRequestObtainRequest.mSerial, i, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "writeUPBGrpEntry", e);
            }
        }
    }
}

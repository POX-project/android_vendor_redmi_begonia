package com.mediatek.internal.telephony;

import android.R;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.net.ProxyInfo;
import android.net.wifi.WifiManager;
import android.os.AsyncResult;
import android.os.Binder;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.ResultReceiver;
import android.os.SystemProperties;
import android.preference.PreferenceManager;
import android.telecom.VideoProfile;
import android.telephony.CarrierConfigManager;
import android.telephony.MtkRadioAccessFamily;
import android.telephony.PhoneNumberUtils;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.ims.ImsManager;
import com.android.internal.telephony.Call;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.DctConstants;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.telephony.GsmCdmaPhoneInjector;
import com.android.internal.telephony.IccCard;
import com.android.internal.telephony.MiuiIccPhoneBookInterfaceManager;
import com.android.internal.telephony.MmiCode;
import com.android.internal.telephony.NetworkSelectionUtils;
import com.android.internal.telephony.OperatorInfo;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.PhoneInternalInterface;
import com.android.internal.telephony.PhoneNotifier;
import com.android.internal.telephony.RadioCapability;
import com.android.internal.telephony.RegistrantList;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.TelephonyDevController;
import com.android.internal.telephony.cdma.CdmaMmiCode;
import com.android.internal.telephony.gsm.GsmMmiCode;
import com.android.internal.telephony.gsm.SuppServiceNotification;
import com.android.internal.telephony.imsphone.ImsPhone;
import com.android.internal.telephony.imsphone.ImsPhoneMmiCode;
import com.android.internal.telephony.uicc.IccCardStatus;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.RuimRecords;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.telephony.uicc.UiccProfile;
import com.android.internal.telephony.uicc.UiccSlot;
import com.android.telephony.Rlog;
import com.mediatek.ims.internal.MtkImsManager;
import com.mediatek.internal.telephony.cdma.MtkCdmaSubscriptionSourceManager;
import com.mediatek.internal.telephony.dataconnection.CpaConnectionInfo;
import com.mediatek.internal.telephony.dataconnection.CpaDcTracker;
import com.mediatek.internal.telephony.dataconnection.MtkDcHelper;
import com.mediatek.internal.telephony.dataconnection.MtkDcTracker;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.gsm.MtkGsmMmiCode;
import com.mediatek.internal.telephony.gsm.MtkSuppCrssNotification;
import com.mediatek.internal.telephony.gsm.MtkSuppServiceNotification;
import com.mediatek.internal.telephony.imsphone.MtkImsPhone;
import com.mediatek.internal.telephony.imsphone.MtkLocalPhoneNumberUtils;
import com.mediatek.internal.telephony.phb.CsimPhbUtil;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.scbm.ISCBMManager;
import com.mediatek.internal.telephony.selfactivation.ISelfActivation;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.net.InetAddress;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Iterator;
import java.util.List;
import java.util.TimeZone;
import java.util.concurrent.Callable;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import mediatek.telephony.MtkServiceState;
import miui.os.Build;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmCdmaPhone extends GsmCdmaPhone {
    public static final String ACT_TYPE_GSM = "0";
    public static final String ACT_TYPE_LTE = "7";
    public static final String ACT_TYPE_NR = "11";
    public static final String ACT_TYPE_UTRAN = "2";
    private static final String CFB_KEY = "CFB";
    private static final String CFNRC_KEY = "CFNRC";
    private static final String CFNR_KEY = "CFNR";
    private static final String CFU_TIME_SLOT = "persist.vendor.radio.cfu.timeslot.";
    private static final boolean DBG = true;
    protected static final int EVENT_CIPHER_INDICATION = 1000;
    protected static final int EVENT_CRSS_IND = 1003;
    protected static final int EVENT_GET_APC_INFO = 1001;
    public static final int EVENT_GET_CALL_BARRING_COMPLETE = 2006;
    public static final int EVENT_GET_CALL_FORWARD_TIME_SLOT_DONE = 109;
    public static final int EVENT_GET_CALL_WAITING_DONE = 301;
    public static final int EVENT_GET_CLIR_COMPLETE = 2004;
    public static final int EVENT_IMS_UT_CSFB = 2001;
    public static final int EVENT_IMS_UT_DONE = 2000;
    protected static final int EVENT_MTK_BASE = 1000;
    protected static final int EVENT_OEM_RAW_URC = 1005;
    public static final int EVENT_SET_CALL_BARRING_COMPLETE = 2005;
    public static final int EVENT_SET_CALL_FORWARD_TIME_SLOT_DONE = 110;
    public static final int EVENT_SET_CALL_WAITING_DONE = 302;
    protected static final int EVENT_SET_SS_PROPERTY = 1004;
    protected static final int EVENT_SSN_EX = 1002;
    public static final int EVENT_UNSOL_RADIO_CAPABILITY_CHANGED = 111;
    public static final String GSM_INDICATOR = "2G";
    public static final String IMS_DEREG_OFF = "0";
    public static final String IMS_DEREG_ON = "1";
    public static final String IMS_DEREG_PROP = "vendor.gsm.radio.ss.imsdereg";
    public static final String LTE_INDICATOR = "4G";
    public static final int MESSAGE_SET_CF = 1;
    public static final boolean MTK_SVLTE_SUPPORT;
    public static final String NR_INDICATOR = "5G";
    public static final int NT_MODE_LTE_GSM = 101;
    public static final int NT_MODE_LTE_TDD_ONLY = 102;
    private static final int OPERATION_TIME_OUT_MILLIS = 3000;
    private static final String PROPERTY_DISABLE_AUTO_RETURN_RPLMN = "persist.vendor.radio.disable_auto_return_rplmn";
    private static final int PROPERTY_MODE_BOOL = 1;
    private static final int PROPERTY_MODE_INT = 0;
    private static final int PROPERTY_MODE_STRING = 2;
    private static final String PROPERTY_WFC_ENABLE = "persist.vendor.mtk.wfc.enable";
    private static final String PROP_MTK_CDMA_LTE_MODE = "ro.vendor.mtk_c2k_lte_mode";
    private static final String PROP_VZW_DEVICE_TYPE = "persist.vendor.vzw_device_type";
    public static final String REASON_CARRIER_CONFIG_LOADED = "carrierConfigLoaded";
    public static final String REASON_DATA_ALLOWED = "dataAllowed";
    public static final String REASON_DATA_SETUP_SSC_MODE3 = "dataSetupSscMode3";
    public static final String REASON_FDN_DISABLED = "FdnDisabled";
    public static final String REASON_FDN_ENABLED = "FdnEnabled";
    public static final String REASON_MD_DATA_RETRY_COUNT_RESET = "modemDataCountReset";
    public static final String REASON_PCSCF_ADDRESS_FAILED = "pcscfFailed";
    public static final String REASON_RA_FAILED = "raFailed";
    public static final String REASON_RESUME_PENDING_DATA = "resumePendingData";
    private static final String SS_SERVICE_CLASS_PROP = "vendor.gsm.radio.ss.sc";
    public static final int TBCW_NOT_VOLTE_USER = 2;
    public static final int TBCW_UNKNOWN = 0;
    public static final int TBCW_VOLTE_USER = 1;
    public static final int TBCW_WITH_CS = 3;
    public static final String UTRAN_INDICATOR = "3G";
    private int camera_State;
    private boolean enableFakeSS;
    private BroadcastReceiver mBroadcastReceiver;
    private int mCSFallbackMode;
    private AsyncResult mCachedCrssn;
    private AsyncResult mCachedSsn;
    RegistrantList mCallRelatedSuppSvcRegistrants;
    private CountDownLatch mCallbackLatch;
    private BroadcastReceiver mCameraReceiver;
    private int mCameraState;
    protected final RegistrantList mCipherIndicationRegistrants;
    public CpaDcTracker mCpaDcTracker;
    private boolean mEccRadioOnStatus;
    private ExecutorService mExecutorService;
    private boolean mIsEccSelectedPhone;
    private final Object mLock;
    public MtkRIL mMtkCi;
    private MtkSSRequestDecisionMaker mMtkSSReqDecisionMaker;
    public MtkServiceStateTracker mMtkSST;
    private int mNewVoiceTech;
    protected final RegistrantList mOemIndRegistrants;
    private ISCBMManager mScbmManager;
    private ISelfActivation mSelfActInstance;
    private int mTbcwMode;
    TelephonyDevController mTelDevController;
    private boolean mWifiIsEnabledBeforeE911;
    public static String LOG_TAG = "MtkGsmCdmaPhone";
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};

    private static class Cfu {
        final Message mOnComplete;
        final int mServiceClass;
        final String mSetCfNumber;

        Cfu(String str, Message message, int i) {
            this.mSetCfNumber = str;
            this.mOnComplete = message;
            this.mServiceClass = i;
        }
    }

    private static class CfuEx {
        final Message mOnComplete;
        final String mSetCfNumber;
        final long[] mSetTimeSlot;

        CfuEx(String str, long[] jArr, Message message) {
            this.mSetCfNumber = str;
            this.mSetTimeSlot = jArr;
            this.mOnComplete = message;
        }
    }

    private class PseudoCellInfoResult {
        PseudoCellInfo infos;
        Object lockObj;

        private PseudoCellInfoResult() {
            this.infos = null;
            this.lockObj = new Object();
        }
    }

    static {
        MTK_SVLTE_SUPPORT = SystemProperties.getInt(PROP_MTK_CDMA_LTE_MODE, 0) == 1;
    }

    public MtkGsmCdmaPhone(Context context, CommandsInterface commandsInterface, PhoneNotifier phoneNotifier, int i, int i2, TelephonyComponentFactory telephonyComponentFactory) {
        this(context, commandsInterface, phoneNotifier, false, i, i2, telephonyComponentFactory);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MtkGsmCdmaPhone(Context context, CommandsInterface commandsInterface, PhoneNotifier phoneNotifier, boolean z, int i, int i2, TelephonyComponentFactory telephonyComponentFactory) {
        super(context, commandsInterface, phoneNotifier, z, i, i2, telephonyComponentFactory);
        this.mNewVoiceTech = -1;
        this.mLock = new Object();
        this.mTelDevController = TelephonyDevController.getInstance();
        this.mCipherIndicationRegistrants = new RegistrantList();
        this.mCallRelatedSuppSvcRegistrants = new RegistrantList();
        this.mCachedSsn = null;
        this.mCachedCrssn = null;
        this.mEccRadioOnStatus = false;
        this.mIsEccSelectedPhone = false;
        this.mSelfActInstance = null;
        this.mScbmManager = null;
        this.mTbcwMode = 0;
        this.mExecutorService = Executors.newSingleThreadExecutor();
        this.mCSFallbackMode = 0;
        this.mWifiIsEnabledBeforeE911 = false;
        this.mCameraState = 0;
        this.enableFakeSS = false;
        this.mCpaDcTracker = null;
        this.mOemIndRegistrants = new RegistrantList();
        this.camera_State = 0;
        this.mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkGsmCdmaPhone.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                intent.getAction();
                if (intent.getAction().equals("android.telephony.action.CARRIER_CONFIG_CHANGED") && intent.getExtras().getInt("phone") == MtkGsmCdmaPhone.this.mPhoneId) {
                    MtkGsmCdmaPhone mtkGsmCdmaPhone = MtkGsmCdmaPhone.this;
                    mtkGsmCdmaPhone.sendMessage(mtkGsmCdmaPhone.obtainMessage(43));
                }
            }
        };
        this.mCameraReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkGsmCdmaPhone.2
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                if (intent != null) {
                    intent.getAction();
                    if ("android.intent.action.ANT_FORCE".equals(intent.getAction())) {
                        int intExtra = intent.getIntExtra("camera_state", 0);
                        MtkGsmCdmaPhone.this.logd("camera state = " + intExtra);
                        if (intExtra != MtkGsmCdmaPhone.this.mCameraState) {
                            MtkGsmCdmaPhone.this.mCameraState = intExtra;
                            if ("atom".equals(Build.DEVICE) || "bomb".equals(Build.DEVICE)) {
                                MtkGsmCdmaPhone.this.invokeOemRilRequestStrings(new String[]{"AT+EGMC=1,\"NrForceTxRx\"," + (intExtra + 6) + ",3,1,78", ""}, null);
                                return;
                            }
                            if ("cannon".equals(Build.DEVICE) || "cannong".equals(Build.DEVICE)) {
                                MtkGsmCdmaPhone.this.invokeOemRilRequestStrings(new String[]{"AT+EGMC=1,\"NrForceTxRx\"," + (intExtra + 6) + ",4,1,78", ""}, null);
                                MtkGsmCdmaPhone.this.invokeOemRilRequestStrings(new String[]{"AT+EGMC=1,\"NrForceTxRx\"," + (intExtra + 6) + ",4,1,79", ""}, null);
                            }
                        }
                    }
                }
            }
        };
        Rlog.d(LOG_TAG, "constructor: sub = " + i);
        this.mMtkCi = (MtkRIL) commandsInterface;
        this.mMtkSST = (MtkServiceStateTracker) this.mSST;
        MtkSSRequestDecisionMaker mtkSSRequestDecisionMaker = new MtkSSRequestDecisionMaker(this.mContext, this);
        this.mMtkSSReqDecisionMaker = mtkSSRequestDecisionMaker;
        mtkSSRequestDecisionMaker.starThread();
        this.mMtkCi.registerForCipherIndication(this, 1000, null);
        OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(context);
        ISelfActivation iSelfActivationMakeSelfActivationInstance = opFactory.makeSelfActivationInstance(i);
        this.mSelfActInstance = iSelfActivationMakeSelfActivationInstance;
        iSelfActivationMakeSelfActivationInstance.setContext(context).setCommandsInterface(commandsInterface).buildParams();
        if (this.mCpaDcTracker == null) {
            CpaDcTracker.makeCpaDcTracker(this.mContext, this);
            this.mCpaDcTracker = CpaDcTracker.getCpaDcTrackerInstance();
        }
        this.mScbmManager = opFactory.makeSCBMManager(context, i, commandsInterface);
        this.mCi.getVoiceRadioTechnology(obtainMessage(40));
        if ("atom".equals(Build.DEVICE) || "bomb".equals(Build.DEVICE) || "cannon".equals(Build.DEVICE) || "cannong".equals(Build.DEVICE)) {
            context.registerReceiver(this.mCameraReceiver, new IntentFilter("android.intent.action.ANT_FORCE"));
        }
    }

    private int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt("persist.vendor.radio.simswitch", 1) - 1;
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            return -1;
        }
        return i;
    }

    private void handleCfuInTimeSlotQueryResult(MtkCallForwardInfo[] mtkCallForwardInfoArr) {
        if (((IccRecords) this.mIccRecords.get()) != null) {
            if (mtkCallForwardInfoArr == null || mtkCallForwardInfoArr.length == 0) {
                setVoiceCallForwardingFlag(1, false, null);
                return;
            }
            int length = mtkCallForwardInfoArr.length;
            for (int i = 0; i < length; i++) {
                if ((mtkCallForwardInfoArr[i].serviceClass & 1) != 0) {
                    setVoiceCallForwardingFlag(1, mtkCallForwardInfoArr[i].status == 1, mtkCallForwardInfoArr[i].number);
                    saveTimeSlot(mtkCallForwardInfoArr[i].timeSlot);
                    return;
                }
            }
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    private void handleImsUtCsfb(Message message) {
        MtkSuppSrvRequest mtkSuppSrvRequest = (MtkSuppSrvRequest) message.obj;
        if (mtkSuppSrvRequest == null) {
            Rlog.e(LOG_TAG, "handleImsUtCsfb: Error MtkSuppSrvRequest null!");
            return;
        }
        if (isDuringVoLteCall() || isDuringImsEccCall()) {
            Message resultCallback = mtkSuppSrvRequest.getResultCallback();
            if (resultCallback != null) {
                AsyncResult.forMessage(resultCallback, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
                resultCallback.sendToTarget();
            }
            if (getCsFallbackStatus() == 1) {
                setCsFallbackStatus(0);
            }
            mtkSuppSrvRequest.setResultCallback(null);
            mtkSuppSrvRequest.mParcel.recycle();
            return;
        }
        int requestCode = mtkSuppSrvRequest.getRequestCode();
        mtkSuppSrvRequest.mParcel.setDataPosition(0);
        if (requestCode == 3) {
            Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_SET_CLIR");
            setOutgoingCallerIdDisplayInternal(mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.getResultCallback());
        } else if (requestCode != 4) {
            switch (requestCode) {
                case 9:
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_SET_CB");
                    setCallBarringInternal(mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.mParcel.readInt() != 0, mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.getResultCallback(), mtkSuppSrvRequest.mParcel.readInt());
                    break;
                case 10:
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_GET_CB");
                    getCallBarringInternal(mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.getResultCallback(), mtkSuppSrvRequest.mParcel.readInt());
                    break;
                case 11:
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_SET_CF");
                    setCallForwardingOptionInternal(mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.getResultCallback());
                    break;
                case 12:
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_GET_CF");
                    getCallForwardingOptionInternal(mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.getResultCallback());
                    break;
                case 13:
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_SET_CW");
                    setCallWaitingInternal(mtkSuppSrvRequest.mParcel.readInt() != 0, mtkSuppSrvRequest.getResultCallback());
                    break;
                case 14:
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_GET_CW");
                    getCallWaitingInternal(mtkSuppSrvRequest.getResultCallback());
                    break;
                case 15:
                    String string = mtkSuppSrvRequest.mParcel.readString();
                    Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_MMI_CODE: dialString = " + string);
                    try {
                        dial(string, new PhoneInternalInterface.DialArgs.Builder().build());
                    } catch (CallStateException e) {
                        Rlog.e(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_MMI_CODE: CallStateException!");
                        e.printStackTrace();
                    }
                    break;
                default:
                    Rlog.e(LOG_TAG, "handleImsUtCsfb: invalid requestCode = " + requestCode);
                    break;
            }
        } else {
            Rlog.d(LOG_TAG, "handleImsUtCsfb: SUPP_SRV_REQ_GET_CLIR");
            getOutgoingCallerIdDisplayInternal(mtkSuppSrvRequest.getResultCallback());
        }
        mtkSuppSrvRequest.setResultCallback(null);
        mtkSuppSrvRequest.mParcel.recycle();
    }

    private void handleImsUtDone(Message message) {
        AsyncResult asyncResult = (AsyncResult) message.obj;
        if (asyncResult == null) {
            Rlog.e(LOG_TAG, "EVENT_IMS_UT_DONE: Error AsyncResult null!");
            return;
        }
        MtkSuppSrvRequest mtkSuppSrvRequest = (MtkSuppSrvRequest) asyncResult.userObj;
        if (mtkSuppSrvRequest == null) {
            Rlog.e(LOG_TAG, "EVENT_IMS_UT_DONE: Error SuppSrvRequest null!");
            return;
        }
        CommandException commandException = null;
        if (asyncResult.exception != null && (asyncResult.exception instanceof CommandException)) {
            commandException = (CommandException) asyncResult.exception;
        }
        if (commandException != null && commandException.getCommandError() == CommandException.Error.OPERATION_NOT_ALLOWED) {
            setCsFallbackStatus(2);
            if (!isNotSupportUtToCS()) {
                Rlog.d(LOG_TAG, "Csfallback next_reboot.");
                sendMessage(obtainMessage(2001, mtkSuppSrvRequest));
                return;
            }
            Rlog.d(LOG_TAG, "UT_XCAP_403_FORBIDDEN.");
            asyncResult.exception = new CommandException(CommandException.Error.OPERATION_NOT_ALLOWED);
            Message resultCallback = mtkSuppSrvRequest.getResultCallback();
            if (resultCallback != null) {
                AsyncResult.forMessage(resultCallback, asyncResult.result, asyncResult.exception);
                resultCallback.sendToTarget();
            }
            mtkSuppSrvRequest.mParcel.recycle();
            return;
        }
        if (commandException != null && commandException.getCommandError() == CommandException.Error.OEM_ERROR_3) {
            if (!isNotSupportUtToCS()) {
                Rlog.d(LOG_TAG, "Csfallback once.");
                setCsFallbackStatus(1);
                sendMessage(obtainMessage(2001, mtkSuppSrvRequest));
                return;
            }
            Rlog.d(LOG_TAG, "CommandException.Error.UT_UNKNOWN_HOST.");
            asyncResult.exception = new CommandException(CommandException.Error.OPERATION_NOT_ALLOWED);
            Message resultCallback2 = mtkSuppSrvRequest.getResultCallback();
            if (resultCallback2 != null) {
                AsyncResult.forMessage(resultCallback2, asyncResult.result, asyncResult.exception);
                resultCallback2.sendToTarget();
            }
            mtkSuppSrvRequest.mParcel.recycle();
            return;
        }
        if (commandException == null || commandException.getCommandError() != CommandException.Error.NO_SUCH_ELEMENT) {
            if (commandException == null || commandException.getCommandError() != CommandException.Error.OEM_ERROR_25) {
                if (commandException == null || commandException.getCommandError() != CommandException.Error.OEM_ERROR_6) {
                    if (commandException == null || commandException.getCommandError() != CommandException.Error.OEM_ERROR_24) {
                        if (commandException == null || commandException.getCommandError() != CommandException.Error.OEM_ERROR_23) {
                            if (commandException != null && commandException.getCommandError() == CommandException.Error.OEM_ERROR_22) {
                                if (isEnableXcapHttpResponse409()) {
                                    Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_503_SERVICE_UNAVAILABLE.");
                                } else {
                                    Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_503_SERVICE_UNAVAILABLE, return GENERIC_FAILURE");
                                    asyncResult.exception = new CommandException(CommandException.Error.GENERIC_FAILURE);
                                }
                            }
                        } else if (isEnableXcapHttpResponse409()) {
                            Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_500_INTERNAL_SERVER_ERROR.");
                        } else {
                            Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_500_INTERNAL_SERVER_ERROR, return GENERIC_FAILURE");
                            asyncResult.exception = new CommandException(CommandException.Error.GENERIC_FAILURE);
                        }
                    } else if (isEnableXcapHttpResponse409()) {
                        Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_415_UNSUPPORTED_MEDIA_TYPE.");
                    } else {
                        Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_415_UNSUPPORTED_MEDIA_TYPE, return GENERIC_FAILURE");
                        asyncResult.exception = new CommandException(CommandException.Error.GENERIC_FAILURE);
                    }
                } else if (isEnableXcapHttpResponse409()) {
                    Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_412_PRECONDITION_FAILED.");
                } else {
                    Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_412_PRECONDITION_FAILED, return GENERIC_FAILURE");
                    asyncResult.exception = new CommandException(CommandException.Error.GENERIC_FAILURE);
                }
            } else if (isEnableXcapHttpResponse409()) {
                Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_409_CONFLICT.");
            } else {
                Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_409_CONFLICT, return GENERIC_FAILURE");
                asyncResult.exception = new CommandException(CommandException.Error.GENERIC_FAILURE);
            }
        } else if (isOpTransferXcap404() && (mtkSuppSrvRequest.getRequestCode() == 10 || mtkSuppSrvRequest.getRequestCode() == 9)) {
            Rlog.d(LOG_TAG, "GSMPhone get UT_XCAP_404_NOT_FOUND.");
        } else {
            asyncResult.exception = new CommandException(CommandException.Error.GENERIC_FAILURE);
        }
        Message resultCallback3 = mtkSuppSrvRequest.getResultCallback();
        if (resultCallback3 != null) {
            AsyncResult.forMessage(resultCallback3, asyncResult.result, asyncResult.exception);
            resultCallback3.sendToTarget();
        }
        mtkSuppSrvRequest.mParcel.recycle();
    }

    private boolean handleUdubIncallSupplementaryService(String str) {
        if (str.length() > 1) {
            return false;
        }
        if (getRingingCall().getState() != Call.State.IDLE || getBackgroundCall().getState() != Call.State.IDLE) {
            Rlog.d(LOG_TAG, "MmiCode 0: hangupWaitingOrBackground");
            this.mCT.hangupWaitingOrBackground();
        }
        return true;
    }

    private boolean hasC2kOverImsModem() {
        TelephonyDevController telephonyDevController = this.mTelDevController;
        return (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasC2kOverImsModem()) ? false : true;
    }

    private void initTbcwMode() {
        if (this.mTbcwMode != 0) {
            Rlog.d(LOG_TAG, "initTbcwMode, mTbcwMode is not UNKNOWN, no need to init");
            return;
        }
        IccCard iccCard = getIccCard();
        if (iccCard == null || !iccCard.hasIccCard() || "".equals(iccCard.getIccCardType())) {
            Rlog.d(LOG_TAG, "initTbcwMode, IccCard is not ready. mTbcwMode ramains UNKNOWN");
        } else {
            this.mExecutorService.submit(new Runnable() { // from class: com.mediatek.internal.telephony.MtkGsmCdmaPhone.3
                @Override // java.lang.Runnable
                public void run() {
                    if (MtkGsmCdmaPhone.this.isOpTbcwWithCS()) {
                        MtkGsmCdmaPhone.this.setTbcwMode(3);
                        MtkGsmCdmaPhone.this.setTbcwToEnabledOnIfDisabled();
                    } else if (!MtkGsmCdmaPhone.this.isUsimCard()) {
                        MtkGsmCdmaPhone.this.setTbcwMode(2);
                        MtkGsmCdmaPhone mtkGsmCdmaPhone = MtkGsmCdmaPhone.this;
                        mtkGsmCdmaPhone.setSSPropertyThroughHidl(mtkGsmCdmaPhone.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
                    }
                    Rlog.d(MtkGsmCdmaPhone.LOG_TAG, "initTbcwMode: " + MtkGsmCdmaPhone.this.mTbcwMode);
                }
            });
        }
    }

    private boolean isAllowXcapIfDataEnabled(String str) {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isAllowXcapIfDataEnabled, ssConf is null, return false");
            return false;
        }
        if (!suppServConf.isNeedCheckDataEnabled(str)) {
            return true;
        }
        if (this.mDataEnabledSettings.isDataEnabled()) {
            Rlog.d(LOG_TAG, "isAllowXcapIfDataEnabled: true");
            return true;
        }
        Rlog.d(LOG_TAG, "isAllowXcapIfDataEnabled: false");
        return false;
    }

    private boolean isAllowXcapIfDataRoaming(String str) {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isAllowXcapIfDataRoaming, ssConf is null, return false");
            return false;
        }
        if (!getServiceState().getDataRoaming()) {
            Rlog.d(LOG_TAG, "isAllowXcapIfDataRoaming: true (not roaming state)");
            return true;
        }
        if (suppServConf.isNeedCheckDataRoaming(str)) {
            Rlog.d(LOG_TAG, "isAllowXcapIfDataRoaming: false (roaming state, block SS)");
            return false;
        }
        Rlog.d(LOG_TAG, "isAllowXcapIfDataRoaming: true (ignore roaming state)");
        return true;
    }

    private boolean isCallbackDone() throws InterruptedException {
        boolean zAwait;
        try {
            zAwait = this.mCallbackLatch.await(3000L, TimeUnit.MILLISECONDS);
        } catch (InterruptedException e) {
            zAwait = false;
        }
        Rlog.d(LOG_TAG, "waitForCallback: isDone=" + zAwait);
        return zAwait;
    }

    private boolean isCdmaWithoutLteCard() {
        return MtkTelephonyManagerEx.getDefault().getIccAppFamily(getPhoneId()) == 2;
    }

    private boolean isIccCardMncMccAvailable(int i) {
        IccRecords iccRecords = UiccController.getInstance().getIccRecords(i, 1);
        if (iccRecords == null) {
            Rlog.d(LOG_TAG, "isIccCardMncMccAvailable(): false");
            return false;
        }
        String operatorNumeric = iccRecords.getOperatorNumeric();
        Rlog.d(LOG_TAG, "isIccCardMncMccAvailable(): mccMnc is " + operatorNumeric);
        return operatorNumeric != null;
    }

    private boolean isOp(MtkOperatorUtils.OPID opid) {
        return MtkOperatorUtils.isOperator(getOperatorNumeric(), opid);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isUsimCard() {
        if (isPhoneTypeGsm() && !isOp(MtkOperatorUtils.OPID.OP09)) {
            boolean z = false;
            String iccCardType = PhoneFactory.getPhone(getPhoneId()).getIccCard().getIccCardType();
            if (iccCardType != null && iccCardType.equals("USIM")) {
                z = true;
            }
            Rlog.d(LOG_TAG, "isUsimCard: " + z + ", " + iccCardType);
            return z;
        }
        String[] strArrSplit = null;
        int slotIndex = SubscriptionManager.getSlotIndex(MtkSubscriptionManager.getSubIdUsingPhoneId(getPhoneId()));
        if (slotIndex >= 0) {
            String[] strArr = PROPERTY_RIL_FULL_UICC_TYPE;
            if (slotIndex < strArr.length) {
                String str = SystemProperties.get(strArr[slotIndex], "");
                if (!str.equals("") && str.length() > 0) {
                    strArrSplit = str.split(",");
                }
                Rlog.d(LOG_TAG, "isUsimCard PhoneId = " + getPhoneId() + " cardType = " + Arrays.toString(strArrSplit));
                if (strArrSplit == null) {
                    return false;
                }
                for (String str2 : strArrSplit) {
                    if (str2.equals("USIM")) {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }

    private boolean isUtError(CommandException.Error error) {
        return error == CommandException.Error.OEM_ERROR_25 || error == CommandException.Error.OEM_ERROR_3 || error == CommandException.Error.OEM_ERROR_4 || error == CommandException.Error.OEM_ERROR_6 || error == CommandException.Error.OEM_ERROR_24 || error == CommandException.Error.OEM_ERROR_23 || error == CommandException.Error.OEM_ERROR_22;
    }

    private boolean isUtErrorHasMsg(CommandException.Error error) {
        return error == CommandException.Error.OEM_ERROR_25 || error == CommandException.Error.OEM_ERROR_6 || error == CommandException.Error.OEM_ERROR_24 || error == CommandException.Error.OEM_ERROR_23 || error == CommandException.Error.OEM_ERROR_22;
    }

    private boolean preCheckCpaDcTracker() {
        if (!MtkDcHelper.getInstance().isOperatorMccMnc(MtkDcHelper.Operator.OP129, getPhoneId())) {
            Rlog.e(LOG_TAG, "not support CPA mode for this SIM");
            return false;
        }
        if (this.mCpaDcTracker != null) {
            return true;
        }
        Rlog.e(LOG_TAG, "can't get CpaDcTracker!");
        return false;
    }

    private boolean supportMdAutoSetupIms() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    private void tryTurnOffWifiForE911(boolean z) {
        if (this.mContext == null) {
            return;
        }
        boolean z2 = ((CarrierConfigManager) this.mContext.getSystemService("carrier_config")).getConfigForSubId(getSubId()).getBoolean("mtk_carrier_turn_off_wifi_before_e911");
        boolean z3 = SystemProperties.getInt(PROPERTY_WFC_ENABLE, 0) == 1;
        Rlog.d(LOG_TAG, "tryTurnOffWifiForEcc() carrierConfig: " + z2 + " isECC: " + z + " isWfcEnable: " + z3);
        if (z && z2 && !z3) {
            WifiManager wifiManager = (WifiManager) this.mContext.getSystemService("wifi");
            this.mWifiIsEnabledBeforeE911 = wifiManager.isWifiEnabled();
            Rlog.d(LOG_TAG, "tryTurnOffWifiForEcc() wifiEnabled: " + this.mWifiIsEnabledBeforeE911);
            if (this.mWifiIsEnabledBeforeE911) {
                wifiManager.setWifiEnabled(false);
            }
        }
    }

    private void tryTurnOnWifiForE911Finished() {
        if (this.mContext != null && ((CarrierConfigManager) this.mContext.getSystemService("carrier_config")).getConfigForSubId(getSubId()).getBoolean("mtk_carrier_turn_off_wifi_before_e911")) {
            WifiManager wifiManager = (WifiManager) this.mContext.getSystemService("wifi");
            Rlog.d(LOG_TAG, "tryTurnOnWifiForEcbmFinished() wifiEnabled: " + this.mWifiIsEnabledBeforeE911);
            if (this.mWifiIsEnabledBeforeE911) {
                wifiManager.setWifiEnabled(true);
            }
        }
    }

    public int CPAChanged(String str, String str2, String str3, String str4, int i, String str5, String str6, String str7, String str8) {
        if (preCheckCpaDcTracker()) {
            return this.mCpaDcTracker.CpaChanged(str, str2, str3, str4, i, str5, str6, str7, str8);
        }
        return 3;
    }

    public void abortFemtoCellList(Message message) {
        Rlog.d(LOG_TAG, "abortFemtoCellList()");
        this.mMtkCi.abortFemtoCellList(message);
    }

    public boolean applyCFSharePreference(int i, String str) {
        String str2;
        if (i == 1) {
            str2 = "CFB_" + String.valueOf(this.mPhoneId);
        } else if (i == 2) {
            str2 = "CFNR_" + String.valueOf(this.mPhoneId);
        } else {
            if (i != 3) {
                Rlog.d(LOG_TAG, "No need to store cfreason: " + i);
                return false;
            }
            str2 = "CFNRC_" + String.valueOf(this.mPhoneId);
        }
        IccRecords iccRecords = (IccRecords) this.mIccRecords.get();
        if (iccRecords == null) {
            Rlog.d(LOG_TAG, "No iccRecords");
            return false;
        }
        String imsi = iccRecords.getIMSI();
        if (imsi == null || imsi.isEmpty()) {
            Rlog.d(LOG_TAG, "currentImsi is empty");
            return false;
        }
        if (str == null || str.isEmpty()) {
            Rlog.d(LOG_TAG, "setNumber is empty");
            return false;
        }
        SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(getContext()).edit();
        String str3 = imsi + ";" + str;
        if (str3 == null || str3.isEmpty()) {
            Rlog.e(LOG_TAG, "imsi or content are empty or null.");
            return false;
        }
        Rlog.e(LOG_TAG, "key: " + str2);
        Rlog.e(LOG_TAG, "content: " + str3);
        editorEdit.putString(str2, str3);
        editorEdit.apply();
        return true;
    }

    public synchronized void cancelAvailableNetworks(Message message) {
        Rlog.d(LOG_TAG, "cancelAvailableNetworks");
        this.mMtkCi.cancelAvailableNetworks(message);
    }

    public void changeCallBarringPassword(String str, String str2, String str3, Message message) {
        if (!isPhoneTypeGsm()) {
            loge("method changeBarringPassword is NOT supported in CDMA!");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
        } else if (!isDuringImsCall()) {
            this.mCi.changeBarringPassword(str, str2, str3, message);
        } else if (message != null) {
            AsyncResult.forMessage(message, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
            message.sendToTarget();
        }
    }

    public CommandException checkUiccApplicationForCB() {
        if (this.mUiccApplication.get() != null) {
            return null;
        }
        Rlog.d(LOG_TAG, "checkUiccApplicationForCB: mUiccApplication.get() == null");
        if (isRadioAvailable() && isRadioOn()) {
            return new CommandException(CommandException.Error.GENERIC_FAILURE);
        }
        Rlog.d(LOG_TAG, "checkUiccApplicationForCB: radio not available");
        return new CommandException(CommandException.Error.RADIO_NOT_AVAILABLE);
    }

    public void cleanCallForwardingIndicatorFromSharedPref() {
        setCallForwardingIndicatorInSharedPref(false);
    }

    public void clearCFSharePreference(int i) {
        String str;
        if (i == 1) {
            str = "CFB_" + String.valueOf(this.mPhoneId);
        } else if (i == 2) {
            str = "CFNR_" + String.valueOf(this.mPhoneId);
        } else {
            if (i != 3) {
                Rlog.e(LOG_TAG, "No need to store cfreason: " + i);
                return;
            }
            str = "CFNRC_" + String.valueOf(this.mPhoneId);
        }
        Rlog.e(LOG_TAG, "Read to clear the key: " + str);
        SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(getContext()).edit();
        editorEdit.remove(str);
        if (editorEdit.commit()) {
            Rlog.e(LOG_TAG, "Commit the removal of CF preference: " + str);
            return;
        }
        Rlog.e(LOG_TAG, "failed to commit the removal of CF preference: " + str);
    }

    protected boolean correctPhoneTypeForCdma(boolean z, int i) {
        boolean z2 = false;
        if (z && getPhoneType() == 2) {
            UiccProfile uiccProfile = getUiccProfile();
            if (uiccProfile != null) {
                uiccProfile.setVoiceRadioTech(i);
            }
            z2 = true;
        }
        if ((!isPhoneTypeCdmaLte() || !isCdmaWithoutLteCard()) && (!isPhoneTypeCdma() || isCdmaWithoutLteCard())) {
            z2 = false;
        }
        Rlog.d(LOG_TAG, "correctPhoneTypeForCdma: change:" + z2 + " newVoiceRadioTech=" + i + " mActivePhone=" + getPhoneName());
        return z2;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public Connection dial(String str, PhoneInternalInterface.DialArgs dialArgs) throws CallStateException {
        boolean z;
        if (!isPhoneTypeGsm() && dialArgs.uusInfo != null) {
            throw new CallStateException("Sending UUS information NOT supported in CDMA!");
        }
        boolean zIsEmergencyNumber = PhoneNumberUtils.isEmergencyNumber(getSubId(), str);
        MtkLocalPhoneNumberUtils.setIsEmergencyNumber(zIsEmergencyNumber);
        Phone phone = this.mImsPhone;
        this.mDialArgs = dialArgs;
        if (zIsEmergencyNumber) {
            tryTurnOffWifiForE911(zIsEmergencyNumber);
        }
        int state = phone != null ? phone.getServiceState().getState() : 3;
        boolean z2 = zIsEmergencyNumber ? ((CarrierConfigManager) this.mContext.getSystemService("carrier_config")).getConfigForSubId(getSubId()).getBoolean("carrier_use_ims_first_for_emergency_bool") : false;
        boolean zStartsWith = str != null ? str.startsWith("*272") : false;
        boolean z3 = zStartsWith ? ((CarrierConfigManager) this.mContext.getSystemService("carrier_config")).getConfigForSubId(getSubId()).getBoolean("support_wps_over_ims_bool") : true;
        boolean z4 = useImsForCall(dialArgs) && (!zStartsWith || z3);
        boolean z5 = phone != null && zIsEmergencyNumber && z2 && ImsManager.getInstance(this.mContext, this.mPhoneId).isNonTtyOrTtyOnVolteEnabled() && state != 3;
        if (hasC2kOverImsModem()) {
            Rlog.d(LOG_TAG, "keep AOSP");
        } else if (!isPhoneTypeGsm()) {
            z5 = false;
        }
        if (this.mPhoneId != getMainCapabilityPhoneId() && !MtkImsManager.isSupportMims()) {
            z5 = false;
        }
        if (shouldProcessSelfActivation() || useImsForPCOChanged()) {
            logd("always use ImsPhone for self activation");
            z = true;
        } else {
            z = z4;
        }
        String strExtractNetworkPortionAlt = PhoneNumberUtils.extractNetworkPortionAlt(PhoneNumberUtils.stripSeparators(str));
        boolean z6 = (strExtractNetworkPortionAlt.startsWith("*") || strExtractNetworkPortionAlt.startsWith("#")) && strExtractNetworkPortionAlt.endsWith("#");
        boolean z7 = phone != null && phone.isUtEnabled();
        StringBuilder sb = new StringBuilder();
        sb.append("PhoneId = ");
        sb.append(this.mPhoneId);
        sb.append(", useImsForCall=");
        sb.append(z);
        sb.append(", useImsForEmergency=");
        sb.append(z5);
        sb.append(", useImsForUt=");
        sb.append(z7);
        sb.append(", isUt=");
        sb.append(z6);
        sb.append(", isWpsCall=");
        sb.append(zStartsWith);
        sb.append(", allowWpsOverIms=");
        sb.append(z3);
        sb.append(", imsPhone=");
        sb.append(phone);
        sb.append(", imsPhone.isVolteEnabled()=");
        Object objValueOf = DataSubConstants.NO_SIM_VALUE;
        sb.append(phone != null ? Boolean.valueOf(phone.isVolteEnabled()) : DataSubConstants.NO_SIM_VALUE);
        sb.append(", imsPhone.isVowifiEnabled()=");
        sb.append(phone != null ? Boolean.valueOf(phone.isWifiCallingEnabled()) : DataSubConstants.NO_SIM_VALUE);
        sb.append(", imsPhone.isVideoEnabled()=");
        sb.append(phone != null ? Boolean.valueOf(phone.isVideoEnabled()) : DataSubConstants.NO_SIM_VALUE);
        sb.append(", imsPhone.getServiceState().getState()=");
        if (phone != null) {
            objValueOf = Integer.valueOf(state);
        }
        sb.append(objValueOf);
        logd(sb.toString());
        if (SubscriptionManager.getIntegerSubscriptionProperty(getSubId(), "wfc_ims_mode", 2, this.mContext) == 0) {
            Phone.checkWfcWifiOnlyModeBeforeDial(this.mImsPhone, this.mPhoneId, this.mContext);
        }
        if (!GsmCdmaPhoneInjector.forceUseCsForCall(this, strExtractNetworkPortionAlt) && ((z && !z6) || ((z6 && z7) || z5))) {
            if (isInCSCall()) {
                Rlog.d(LOG_TAG, "has CS Call. Don't try IMS PS Call!");
            } else {
                try {
                    if (dialArgs.videoState == 0) {
                        logd("Trying IMS PS call");
                        return phone.dial(str, dialArgs);
                    }
                    if (SystemProperties.get("persist.vendor.vilte_support").equals("1")) {
                        logd("Trying IMS PS video call");
                        return phone.dial(str, dialArgs);
                    }
                    loge("Should not be here. (isInCSCall == false, videoState=" + dialArgs.videoState);
                } catch (CallStateException e) {
                    logd("IMS PS call exception " + e + "useImsForCall =" + z + ", imsPhone =" + phone);
                    tryTurnOnWifiForE911Finished();
                    if (!"cs_fallback".equals(e.getMessage()) && !zIsEmergencyNumber) {
                        CallStateException callStateException = new CallStateException(e.getError(), e.getMessage());
                        callStateException.setStackTrace(e.getStackTrace());
                        throw callStateException;
                    }
                    logi("IMS call failed with Exception: " + e.getMessage() + ". Falling back to CS.");
                }
            }
        }
        if (SystemProperties.getInt("vendor.gsm.gcf.testmode", 0) != 2 && !isCdmaLessDevice() && this.mSST != null && this.mSST.mSS.getState() == 1 && this.mSST.mSS.getDataRegistrationState() != 0 && !zIsEmergencyNumber) {
            throw new CallStateException("cannot dial in current state");
        }
        if (this.mSST != null && this.mSST.mSS.getState() == 3 && !VideoProfile.isVideo(dialArgs.videoState) && !zIsEmergencyNumber) {
            throw new CallStateException(2, "cannot dial voice call in airplane mode");
        }
        int i = 2;
        if (SystemProperties.getInt("vendor.gsm.gcf.testmode", 0) != i && !isCdmaLessDevice() && this.mSST != null && this.mSST.mSS.getState() == 1 && ((this.mSST.mSS.getDataRegistrationState() != 0 || !ServiceState.isPsOnlyTech(this.mSST.mSS.getRilDataRadioTechnology())) && !VideoProfile.isVideo(dialArgs.videoState) && !zIsEmergencyNumber && (!z6 || !z7))) {
            throw new CallStateException(1, "cannot dial voice call in out of service");
        }
        logd("Trying (non-IMS) CS call");
        return isPhoneTypeGsm() ? dialInternal(str, new PhoneInternalInterface.DialArgs.Builder().setIntentExtras(dialArgs.intentExtras).build()) : dialInternal(str, dialArgs);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    protected Connection dialInternal(String str, PhoneInternalInterface.DialArgs dialArgs, ResultReceiver resultReceiver) throws CallStateException {
        String strStripSeparators = PhoneNumberUtils.stripSeparators(str);
        if (!isPhoneTypeGsm()) {
            return this.mCT.dial(strStripSeparators, dialArgs.intentExtras);
        }
        if (handleInCallMmiCommands(strStripSeparators)) {
            return null;
        }
        MtkGsmMmiCode mtkGsmMmiCodeNewFromDialString = MtkGsmMmiCode.newFromDialString(PhoneNumberUtils.extractNetworkPortionAlt(strStripSeparators), this, (UiccCardApplication) this.mUiccApplication.get(), resultReceiver);
        logd("dialInternal: dialing w/ mmi '" + mtkGsmMmiCodeNewFromDialString + "'...");
        if (mtkGsmMmiCodeNewFromDialString == null) {
            return this.mCT.dialGsm(strStripSeparators, dialArgs.uusInfo, dialArgs.intentExtras);
        }
        if (mtkGsmMmiCodeNewFromDialString.isTemporaryModeCLIR()) {
            return this.mCT.dialGsm(mtkGsmMmiCodeNewFromDialString.mDialingNumber, mtkGsmMmiCodeNewFromDialString.getCLIRMode(), dialArgs.uusInfo, dialArgs.intentExtras);
        }
        this.mPendingMMIs.add(mtkGsmMmiCodeNewFromDialString);
        Rlog.d(LOG_TAG, "dialInternal: " + MtkSuppServHelper.encryptString(str) + ", mmi=" + mtkGsmMmiCodeNewFromDialString);
        dumpPendingMmi();
        this.mMmiRegistrants.notifyRegistrants(new AsyncResult((Object) null, mtkGsmMmiCodeNewFromDialString, (Throwable) null));
        mtkGsmMmiCodeNewFromDialString.processCode();
        return null;
    }

    public void doGeneralSimAuthentication(int i, int i2, int i3, String str, String str2, Message message) {
        if (isPhoneTypeGsm()) {
            this.mMtkCi.doGeneralSimAuthentication(i, i2, i3, str, str2, message);
        }
    }

    public void dumpPendingMmi() {
        int size = this.mPendingMMIs.size();
        if (size == 0) {
            Rlog.d(LOG_TAG, "dumpPendingMmi: none");
            return;
        }
        for (int i = 0; i < size; i++) {
            Rlog.d(LOG_TAG, "dumpPendingMmi: " + this.mPendingMMIs.get(i));
        }
    }

    public void exitEmergencyCallbackMode() {
        Rlog.d(LOG_TAG, "exitEmergencyCallbackMode: mImsPhone=" + this.mImsPhone + " isPhoneTypeGsm=" + isPhoneTypeGsm());
        Rlog.d(LOG_TAG, "exitEmergencyCallbackMode()");
        tryTurnOnWifiForE911Finished();
        if (isPhoneTypeGsm()) {
            if (this.mImsPhone != null) {
                this.mImsPhone.exitEmergencyCallbackMode();
            }
        } else {
            if (this.mWakeLock.isHeld()) {
                this.mWakeLock.release();
            }
            this.mCi.exitEmergencyCallbackMode((Message) null);
        }
    }

    public PseudoCellInfo getApcInfo() {
        if (isPhoneTypeGsm()) {
            PseudoCellInfoResult pseudoCellInfoResult = new PseudoCellInfoResult();
            synchronized (pseudoCellInfoResult.lockObj) {
                pseudoCellInfoResult.infos = null;
                this.mMtkCi.getApcInfo(obtainMessage(1001, pseudoCellInfoResult));
                try {
                    pseudoCellInfoResult.lockObj.wait(1000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            synchronized (pseudoCellInfoResult.lockObj) {
                if (pseudoCellInfoResult.infos != null) {
                    Rlog.d(LOG_TAG, "getApcInfo return: list.size = " + pseudoCellInfoResult.infos.toString());
                    return pseudoCellInfoResult.infos;
                }
                Rlog.d(LOG_TAG, "getApcInfo return null");
            }
        } else {
            Rlog.d(LOG_TAG, "getApcInfo: not possible in CDMA");
        }
        return null;
    }

    public void getAvailableNetworks(Message message) {
        if (isPhoneTypeGsm() || isPhoneTypeCdmaLte()) {
            this.mMtkCi.getAvailableNetworksWithAct(message);
        } else {
            Rlog.d(LOG_TAG, "getAvailableNetworks: not possible in CDMA");
        }
    }

    public Message getCFCallbackMessage() {
        return obtainMessage(13);
    }

    public String getCFPreviousDialNumber(int i) {
        String str;
        if (i == 1) {
            str = "CFB_" + String.valueOf(this.mPhoneId);
        } else if (i == 2) {
            str = "CFNR_" + String.valueOf(this.mPhoneId);
        } else {
            if (i != 3) {
                Rlog.d(LOG_TAG, "No need to do the reason: " + i);
                return null;
            }
            str = "CFNRC_" + String.valueOf(this.mPhoneId);
        }
        Rlog.d(LOG_TAG, "key: " + str);
        IccRecords iccRecords = (IccRecords) this.mIccRecords.get();
        if (iccRecords == null) {
            Rlog.d(LOG_TAG, "No iccRecords");
            return null;
        }
        String imsi = iccRecords.getIMSI();
        if (imsi == null || imsi.isEmpty()) {
            Rlog.d(LOG_TAG, "currentImsi is empty");
            return null;
        }
        Rlog.d(LOG_TAG, "currentImsi: " + imsi);
        SharedPreferences defaultSharedPreferences = PreferenceManager.getDefaultSharedPreferences(getContext());
        String string = defaultSharedPreferences.getString(str, null);
        if (string == null) {
            Rlog.d(LOG_TAG, "Sharedpref not with: " + str);
            return null;
        }
        String[] strArrSplit = string.split(";");
        if (strArrSplit == null || strArrSplit.length < 2) {
            Rlog.d(LOG_TAG, "infoAry.length < 2");
            return null;
        }
        String str2 = strArrSplit[0];
        String str3 = strArrSplit[1];
        if (str2 == null || str2.isEmpty()) {
            Rlog.d(LOG_TAG, "Sharedpref imsi is empty.");
            return null;
        }
        if (str3 == null || str3.isEmpty()) {
            Rlog.d(LOG_TAG, "Sharedpref number is empty.");
            return null;
        }
        Rlog.d(LOG_TAG, "Sharedpref imsi: " + str2);
        Rlog.d(LOG_TAG, "Sharedpref number: " + str3);
        if (imsi.equals(str2)) {
            Rlog.d(LOG_TAG, "Get dial number from sharepref: " + str3);
            return str3;
        }
        SharedPreferences.Editor editorEdit = defaultSharedPreferences.edit();
        editorEdit.remove(str);
        if (!editorEdit.commit()) {
            Rlog.e(LOG_TAG, "failed to commit the removal of CF preference: " + str);
        }
        return null;
    }

    public Message getCFTimeSlotCallbackMessage() {
        return obtainMessage(109);
    }

    public Call getCSRingingCall() {
        return this.mCT.mRingingCall;
    }

    public void getCallBarring(String str, String str2, Message message) {
        getCallBarring(str, str2, message, 1);
    }

    public void getCallBarring(String str, String str2, Message message, int i) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.getCallBarring(str, str2, i, message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, getCallBarringInternal");
            getCallBarringInternal(str, str2, message, i);
        }
    }

    public void getCallBarringInternal(String str, String str2, Message message, int i) {
        if (!isPhoneTypeGsm() && !isGsmSsPrefer()) {
            loge("method getFacilityLock is NOT supported in CDMA!");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        ImsPhone imsPhone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "getCallBarringInternal enter, facility:" + str + ", serviceClass:" + i + ", password:" + str2);
            Message messageObtainMessage = obtainMessage(EVENT_GET_CALL_BARRING_COMPLETE, message);
            if (imsPhone == null || !(imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled())) {
                this.mCi.queryFacilityLock(str, str2, i, messageObtainMessage);
                return;
            } else {
                imsPhone.getCallBarring(str, str2, messageObtainMessage, i);
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && imsPhone != null && ((imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled()) && (imsPhone.isVolteEnabled() || (imsPhone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            if (isOpNotSupportOCB(str)) {
                sendErrorResponse(message, CommandException.Error.REQUEST_NOT_SUPPORTED);
                return;
            }
            MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(10, message);
            mtkSuppSrvRequestObtain.mParcel.writeString(str);
            mtkSuppSrvRequestObtain.mParcel.writeString(str2);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i);
            imsPhone.getCallBarring(str, str2, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain), i);
            return;
        }
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.queryFacilityLock(str, str2, i, message);
            return;
        }
        if (getCsFallbackStatus() == 1) {
            setCsFallbackStatus(0);
        }
        if (isNotSupportUtToCS()) {
            sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
            return;
        }
        if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        CommandException commandExceptionCheckUiccApplicationForCB = checkUiccApplicationForCB();
        if (commandExceptionCheckUiccApplicationForCB == null || message == null) {
            this.mCi.queryFacilityLockForApp(str, str2, i, ((UiccCardApplication) this.mUiccApplication.get()).getAid(), message);
        } else {
            sendErrorResponse(message, commandExceptionCheckUiccApplicationForCB.getCommandError());
        }
    }

    public void getCallForwardInTimeSlot(int i, Message message) {
        if (!isPhoneTypeGsm()) {
            loge("method getCallForwardInTimeSlot is NOT supported in CDMA!");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        ImsPhone imsPhone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "getCallForwardInTimeSlot enter, CFReason:" + i);
            if (imsPhone != null && (imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled())) {
                ((MtkImsPhone) imsPhone).getCallForwardInTimeSlot(i, message);
                return;
            } else {
                if (i == 0) {
                    Rlog.d(LOG_TAG, "requesting call forwarding in time slot query.");
                    this.mMtkCi.queryCallForwardInTimeSlotStatus(i, 0, obtainMessage(109, message));
                    return;
                }
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && imsPhone != null && ((imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled()) && (imsPhone.isVolteEnabled() || (imsPhone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            ((MtkImsPhone) imsPhone).getCallForwardInTimeSlot(i, message);
            return;
        }
        if (i != 0) {
            if (message != null) {
                sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                return;
            }
            return;
        }
        Rlog.d(LOG_TAG, "requesting call forwarding in time slot query.");
        Message messageObtainMessage = obtainMessage(109, message);
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.queryCallForwardInTimeSlotStatus(i, 1, messageObtainMessage);
        } else {
            sendErrorResponse(message, CommandException.Error.REQUEST_NOT_SUPPORTED);
        }
    }

    public boolean getCallForwardingIndicator() {
        if (getPhoneType() != 2 || !isGsmSsPrefer()) {
            return super.getCallForwardingIndicator();
        }
        IccRecords iccRecords = this.mUiccController != null ? this.mUiccController.getIccRecords(this.mPhoneId, 1) : null;
        int callForwardingIndicatorFromSharedPref = -1;
        if (iccRecords != null) {
            callForwardingIndicatorFromSharedPref = iccRecords.getVoiceCallForwardingFlag();
            Rlog.v(LOG_TAG, "getCallForwardingIndicator: from icc record = " + callForwardingIndicatorFromSharedPref);
        }
        if (callForwardingIndicatorFromSharedPref == -1) {
            callForwardingIndicatorFromSharedPref = getCallForwardingIndicatorFromSharedPref();
        }
        String str = LOG_TAG;
        StringBuilder sb = new StringBuilder();
        sb.append("getCallForwardingIndicator: iccForwardingFlag=");
        sb.append(iccRecords != null ? Integer.valueOf(iccRecords.getVoiceCallForwardingFlag()) : "null");
        sb.append(", sharedPrefFlag=");
        sb.append(getCallForwardingIndicatorFromSharedPref());
        Rlog.v(str, sb.toString());
        return callForwardingIndicatorFromSharedPref == 1;
    }

    public void getCallForwardingOption(int i, Message message) {
        getCallForwardingOptionForServiceClass(i, 1, message);
    }

    public void getCallForwardingOptionForServiceClass(int i, int i2, Message message) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.getCallForwardingOptionForServiceClass(i, i2, message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, getCallForwardingOptionForServiceClass");
            getCallForwardingOptionInternal(i, i2, message);
        }
    }

    public void getCallForwardingOptionInternal(int i, int i2, Message message) {
        if (!isPhoneTypeGsm() && !isImsUtEnabledOverCdma()) {
            loge("getCallForwardingOptionForServiceClass: not possible in CDMA");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        MtkImsPhone mtkImsPhone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "getCallForwardingOptionForServiceClass enter, CFReason:" + i + ", serviceClass:" + i2);
            if (mtkImsPhone != null && (mtkImsPhone.getServiceState().getState() == 0 || mtkImsPhone.isUtEnabled())) {
                mtkImsPhone.getCallForwardingOptionForServiceClass(i, i2, message);
                return;
            } else {
                if (isValidCommandInterfaceCFReason(i)) {
                    logd("requesting call forwarding query.");
                    this.mCi.queryCallForwardStatus(i, i2, (String) null, i == 0 ? obtainMessage(13, message) : message);
                    return;
                }
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && mtkImsPhone != null && ((mtkImsPhone.getServiceState().getState() == 0 || mtkImsPhone.isUtEnabled()) && (mtkImsPhone.isVolteEnabled() || (mtkImsPhone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(12, message);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i2);
            mtkImsPhone.getCallForwardingOptionForServiceClass(i, i2, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain));
            return;
        }
        if (isValidCommandInterfaceCFReason(i)) {
            logd("requesting call forwarding query.");
            Message messageObtainMessage = i == 0 ? obtainMessage(13, message) : message;
            if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
                if (isInCSCall() && getPhoneType() == 2) {
                    sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                    return;
                } else {
                    this.mMtkSSReqDecisionMaker.queryCallForwardStatus(i, i2, null, messageObtainMessage);
                    return;
                }
            }
            if (getCsFallbackStatus() == 1) {
                setCsFallbackStatus(0);
            }
            if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            } else if (isNotSupportUtToCS()) {
                sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
            } else {
                Rlog.d(LOG_TAG, "mCi.queryCallForwardStatus.");
                this.mCi.queryCallForwardStatus(i, i2, (String) null, messageObtainMessage);
            }
        }
    }

    public void getCallSubAddress(Message message) {
        this.mMtkCi.getCallSubAddress(message);
    }

    public void getCallWaiting(Message message) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.getCallWaiting(message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, getCallWaiting");
            getCallWaitingInternal(message);
        }
    }

    public void getCallWaitingInternal(Message message) {
        if (!isPhoneTypeGsm() && !isImsUtEnabledOverCdma()) {
            this.mCi.queryCallWaiting(1, message);
            return;
        }
        Phone phone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "getCallWaiting enter");
            if (phone == null || !(phone.getServiceState().getState() == 0 || phone.isUtEnabled())) {
                this.mCi.queryCallWaiting(0, message);
                return;
            } else {
                phone.getCallWaiting(message);
                return;
            }
        }
        if (!isOpNwCW()) {
            if (this.mTbcwMode == 0) {
                initTbcwMode();
            }
            Rlog.d(LOG_TAG, "getCallWaiting(): mTbcwMode = " + this.mTbcwMode + ", onComplete = " + message);
            int i = this.mTbcwMode;
            if (i == 1) {
                getTerminalBasedCallWaiting(message);
                return;
            }
            if (i == 2) {
                if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                    sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                    return;
                } else if (isNotSupportUtToCS()) {
                    sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
                    return;
                } else {
                    Rlog.d(LOG_TAG, "mCi.queryCallForwardStatus.");
                    this.mCi.queryCallWaiting(0, message);
                    return;
                }
            }
            if (i == 3) {
                if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                    sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                    return;
                } else {
                    this.mCi.queryCallWaiting(0, obtainMessage(EVENT_GET_CALL_WAITING_DONE, message));
                    return;
                }
            }
        }
        if (getCsFallbackStatus() == 0 && phone != null && ((phone.getServiceState().getState() == 0 || phone.isUtEnabled()) && (phone.isVolteEnabled() || (phone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            if (isOpNwCW()) {
                Rlog.d(LOG_TAG, "isOpNwCW(), getCallWaiting() by Ut interface");
                phone.getCallWaiting(obtainMessage(EVENT_IMS_UT_DONE, MtkSuppSrvRequest.obtain(14, message)));
                return;
            } else {
                Rlog.d(LOG_TAG, "isOpTbCW(), getTerminalBasedCallWaiting");
                setTbcwMode(1);
                setTbcwToEnabledOnIfDisabled();
                getTerminalBasedCallWaiting(message);
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            Rlog.d(LOG_TAG, "mMtkSSReqDecisionMaker.queryCallWaiting");
            this.mMtkSSReqDecisionMaker.queryCallWaiting(0, message);
        } else if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
        } else if (isNotSupportUtToCS()) {
            sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
        } else {
            Rlog.d(LOG_TAG, "mCi.queryCallForwardStatus.");
            this.mCi.queryCallWaiting(0, message);
        }
    }

    public int getCdmaSubscriptionActStatus() {
        if (this.mCdmaSSM != null) {
            return ((MtkCdmaSubscriptionSourceManager) this.mCdmaSSM).getActStatus();
        }
        return 0;
    }

    public Bundle getCpaConnectionInfo() {
        CpaConnectionInfo cpaConnectionInfo = null;
        if (preCheckCpaDcTracker()) {
            CpaDcTracker.CpaConnection cpaConnectionInfo2 = this.mCpaDcTracker.getCpaConnectionInfo();
            if (cpaConnectionInfo2 != null) {
                Rlog.d(LOG_TAG, "creat() E cpaConInfo");
                cpaConnectionInfo = new CpaConnectionInfo();
                cpaConnectionInfo.localAddress = cpaConnectionInfo2.getLocalAddress();
                InetAddress[] dnsAddresses = cpaConnectionInfo2.getDnsAddresses();
                if (dnsAddresses != null) {
                    cpaConnectionInfo.dnsAddresses = new InetAddress[dnsAddresses.length];
                    for (int i = 0; i < dnsAddresses.length; i++) {
                        cpaConnectionInfo.dnsAddresses[i] = dnsAddresses[i];
                    }
                }
                Rlog.d(LOG_TAG, "creat() X cpaConInfo");
            } else {
                Rlog.e(LOG_TAG, "getCpaConnectionInfo() can't get CPA connection");
            }
        }
        Bundle bundle = new Bundle();
        bundle.putParcelable("CpaConnectionInfo", cpaConnectionInfo);
        return bundle;
    }

    public DctConstants.State getCpaConnectionStatus() {
        return preCheckCpaDcTracker() ? this.mCpaDcTracker.getCpaConnectionStatus() : DctConstants.State.IDLE;
    }

    public ProxyInfo getCpaProxyData() {
        if (preCheckCpaDcTracker()) {
            return this.mCpaDcTracker.getCpaProxyData();
        }
        return null;
    }

    public int getCsFallbackStatus() {
        if (!isAllowXcapIfDataEnabled(getOperatorNumeric())) {
            this.mCSFallbackMode = 1;
        }
        if (!isAllowXcapIfDataRoaming(getOperatorNumeric())) {
            this.mCSFallbackMode = 1;
        }
        Rlog.d(LOG_TAG, "getCsFallbackStatus is " + this.mCSFallbackMode);
        return this.mCSFallbackMode;
    }

    public String getDeviceSvn() {
        if (isPhoneTypeGsm() || isPhoneTypeCdmaLte() || isPhoneTypeCdma()) {
            return this.mImeiSv;
        }
        loge("getDeviceSvn(): return 0");
        return "0";
    }

    public void getDisable2G(Message message) {
        Rlog.d(LOG_TAG, "getDisable2G");
        this.mMtkCi.getDisable2G(message);
    }

    public boolean getEccRadioOnStatus() {
        return this.mEccRadioOnStatus;
    }

    public void getFemtoCellList(Message message) {
        Rlog.d(LOG_TAG, "getFemtoCellList()");
        this.mMtkCi.getFemtoCellList(message);
    }

    public String getFullIccSerialNumber() {
        String fullIccSerialNumber = super.getFullIccSerialNumber();
        if (fullIccSerialNumber != null) {
            return fullIccSerialNumber;
        }
        if (!isPhoneTypeGsm() && this.mUiccController != null) {
            IccRecords iccRecords = this.mUiccController.getIccRecords(this.mPhoneId, 1);
            fullIccSerialNumber = iccRecords != null ? iccRecords.getFullIccId() : null;
            if (fullIccSerialNumber != null) {
                return fullIccSerialNumber;
            }
        }
        long jClearCallingIdentity = Binder.clearCallingIdentity();
        try {
            SubscriptionInfo activeSubscriptionInfo = SubscriptionManager.from(getContext()).getActiveSubscriptionInfo(getSubId());
            if (activeSubscriptionInfo != null) {
                fullIccSerialNumber = activeSubscriptionInfo.getIccId();
            }
            return fullIccSerialNumber;
        } finally {
            Binder.restoreCallingIdentity(jClearCallingIdentity);
        }
    }

    public String getLine1PhoneNumber() {
        String msisdnNumber;
        if (!isPhoneTypeGsm()) {
            return this.mSST.getMdnNumber();
        }
        String str = SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR);
        if (str == null || !"OP20".equals(str)) {
            IccRecords iccRecords = (IccRecords) this.mIccRecords.get();
            if (iccRecords != null) {
                return iccRecords.getMsisdnNumber();
            }
            return null;
        }
        MtkIccCardConstants.CardType cdmaCardType = MtkTelephonyManagerEx.getDefault().getCdmaCardType(getPhoneId());
        if (!(cdmaCardType != null ? cdmaCardType.is4GCard() : false)) {
            IccRecords iccRecords2 = (IccRecords) this.mIccRecords.get();
            if (iccRecords2 != null) {
                return iccRecords2.getMsisdnNumber();
            }
            return null;
        }
        RuimRecords iccRecords3 = UiccController.getInstance().getIccRecords(getPhoneId(), 2);
        IccRecords iccRecords4 = (IccRecords) this.mIccRecords.get();
        StringBuilder sb = new StringBuilder();
        sb.append("getLine1PhoneNumber, number = ");
        if (iccRecords3 == null || iccRecords3.getMdn() == null || iccRecords3.getMdn().isEmpty()) {
            msisdnNumber = iccRecords4 != null ? iccRecords4.getMsisdnNumber() : null;
        } else {
            msisdnNumber = iccRecords3.getMdn();
        }
        sb.append(msisdnNumber);
        sb.append(", slot = ");
        sb.append(getPhoneId());
        logd(sb.toString());
        if (iccRecords3 != null && iccRecords3.getMdn() != null && !iccRecords3.getMdn().isEmpty()) {
            return iccRecords3.getMdn();
        }
        if (iccRecords4 != null) {
            return iccRecords4.getMsisdnNumber();
        }
        return null;
    }

    public String getLocatedPlmn() {
        return this.mMtkSST.getLocatedPlmn();
    }

    public MtkSSRequestDecisionMaker getMtkSSRequestDecisionMaker() {
        return this.mMtkSSReqDecisionMaker;
    }

    public String getMvnoMatchType() {
        String mvnoMatchType = "";
        synchronized (this.mLock) {
            if (isPhoneTypeGsm()) {
                mvnoMatchType = this.mIccRecords.get() != null ? ((MtkSIMRecords) this.mIccRecords.get()).getMvnoMatchType() : "";
                Rlog.d(LOG_TAG, "getMvnoMatchType: Type = " + mvnoMatchType);
            }
        }
        return mvnoMatchType;
    }

    public String getMvnoPattern(String str) {
        String gid1 = "";
        synchronized (this.mLock) {
            if (isPhoneTypeGsm() && this.mIccRecords.get() != null) {
                if (str.equals("spn")) {
                    gid1 = ((MtkSIMRecords) this.mIccRecords.get()).getSpNameInEfSpn();
                } else if (str.equals("imsi")) {
                    gid1 = ((MtkSIMRecords) this.mIccRecords.get()).isOperatorMvnoForImsi();
                } else if (str.equals("pnn")) {
                    gid1 = ((MtkSIMRecords) this.mIccRecords.get()).isOperatorMvnoForEfPnn();
                } else if (str.equals("gid")) {
                    gid1 = ((IccRecords) this.mIccRecords.get()).getGid1();
                } else {
                    Rlog.d(LOG_TAG, "getMvnoPattern: Wrong type = " + str);
                }
            }
        }
        return gid1;
    }

    public String getNrMapStatus() {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker != null && mtkServiceStateTracker.nm != null) {
            return this.mMtkSST.nm.getNrMapStatus();
        }
        loge("getNrMapStatus mMtkSST == null && mMtkSST.nm == null");
        return "n/a";
    }

    public String getOperatorNumeric() {
        if (!isPhoneTypeGsm()) {
            this.mCdmaSubscriptionSource = this.mCdmaSSM.getCdmaSubscriptionSource();
        }
        return super.getOperatorNumeric();
    }

    public void getOutgoingCallerIdDisplay(Message message) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.getOutgoingCallerIdDisplay(message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, getOutgoingCallerIdDisplay");
            getOutgoingCallerIdDisplayInternal(message);
        }
    }

    public void getOutgoingCallerIdDisplayInternal(Message message) {
        if (!isPhoneTypeGsm() && !isGsmSsPrefer()) {
            loge("getOutgoingCallerIdDisplay: not possible in CDMA");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        Phone phone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "getOutgoingCallerIdDisplay enter");
            Message messageObtainMessage = obtainMessage(EVENT_GET_CLIR_COMPLETE, message);
            if (phone == null || phone.getServiceState().getState() != 0) {
                this.mCi.getCLIR(messageObtainMessage);
                return;
            } else {
                phone.getOutgoingCallerIdDisplay(messageObtainMessage);
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && phone != null && ((phone.getServiceState().getState() == 0 || phone.isUtEnabled()) && (phone.isVolteEnabled() || (phone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            if (isOpNotSupportCallIdentity()) {
                sendErrorResponse(message, CommandException.Error.REQUEST_NOT_SUPPORTED);
                return;
            }
            if (!isOpTbClir()) {
                phone.getOutgoingCallerIdDisplay(obtainMessage(EVENT_IMS_UT_DONE, MtkSuppSrvRequest.obtain(4, message)));
                return;
            } else {
                if (message != null) {
                    AsyncResult.forMessage(message, getSavedClirSetting(), (Throwable) null);
                    message.sendToTarget();
                    return;
                }
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            if (!isOpTbClir()) {
                this.mMtkSSReqDecisionMaker.getCLIR(message);
                return;
            } else {
                if (message != null) {
                    AsyncResult.forMessage(message, getSavedClirSetting(), (Throwable) null);
                    message.sendToTarget();
                    return;
                }
                return;
            }
        }
        if (getCsFallbackStatus() == 1) {
            setCsFallbackStatus(0);
        }
        if (isNotSupportUtToCS()) {
            sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
        } else if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
        } else {
            this.mCi.getCLIR(message);
        }
    }

    public List<? extends MmiCode> getPendingMmiCodes() {
        Rlog.d(LOG_TAG, "getPendingMmiCodes");
        dumpPendingMmi();
        ImsPhone imsPhone = this.mImsPhone;
        ArrayList arrayList = new ArrayList();
        if (imsPhone != null && imsPhone.getServiceState().getState() == 0) {
            Iterator it = imsPhone.getPendingMmiCodes().iterator();
            while (it.hasNext()) {
                arrayList.add((ImsPhoneMmiCode) it.next());
            }
        }
        ArrayList arrayList2 = new ArrayList(this.mPendingMMIs);
        arrayList2.addAll(arrayList);
        Rlog.d(LOG_TAG, "allPendingMMIs.size() = " + arrayList2.size());
        int size = arrayList2.size();
        for (int i = 0; i < size; i++) {
            Rlog.d(LOG_TAG, "dump allPendingMMIs: " + arrayList2.get(i));
        }
        return arrayList2;
    }

    public void getPol(Message message) {
        this.mMtkCi.getCurrentPOLList(message);
    }

    public void getPolCapability(Message message) {
        this.mMtkCi.getPOLCapability(message);
    }

    public void getRoamingEnable(Message message) {
        Rlog.d(LOG_TAG, "get roaming enable");
        this.mMtkCi.getRoamingEnable(this.mPhoneId, message);
    }

    public void getRxTestResult(Message message) {
        Rlog.d(LOG_TAG, "get Rx Test Result");
        this.mMtkCi.getRxTestResult(message);
    }

    public int[] getSavedClirSetting() {
        int i;
        int i2;
        int i3 = PreferenceManager.getDefaultSharedPreferences(getContext()).getInt("clir_sub_key" + getPhoneId(), -1);
        if (i3 == 0 || i3 == -1) {
            i = 4;
            i2 = 0;
        } else if (i3 == 1) {
            i = 3;
            i2 = 1;
        } else {
            i = 4;
            i2 = 2;
        }
        int[] iArr = {i2, i};
        Rlog.i(LOG_TAG, "getClirResult: " + i2);
        Rlog.i(LOG_TAG, "presentationMode: " + i);
        return iArr;
    }

    public ISCBMManager getScbmManagerInstance() {
        return this.mScbmManager;
    }

    public ISelfActivation getSelfActivationInstance() {
        return this.mSelfActInstance;
    }

    public ServiceState getServiceState() {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if ((mtkServiceStateTracker != null && (mtkServiceStateTracker.mSS.getState() == 0 || this.mMtkSST.mSS.getDataRegState() != 0)) || this.mImsPhone == null) {
            return this.mSST != null ? this.mSST.mSS : new MtkServiceState();
        }
        MtkServiceStateTracker mtkServiceStateTracker2 = this.mMtkSST;
        return MtkServiceState.mergeMtkServiceStates(mtkServiceStateTracker2 == null ? new MtkServiceState() : mtkServiceStateTracker2.mSS, this.mImsPhone.getServiceState());
    }

    public PhoneConstants.State getState() {
        PhoneConstants.State state;
        if (this.mImsPhone == null || (state = this.mImsPhone.getState()) == PhoneConstants.State.IDLE) {
            return (this.mCT.mState != PhoneConstants.State.IDLE || ((MtkGsmCdmaCallTracker) this.mCT).getHandoverConnectionSize() <= 0) ? this.mCT.mState : PhoneConstants.State.OFFHOOK;
        }
        return state;
    }

    public String getSubscriberId() {
        MtkDcTracker mtkDcTracker = (MtkDcTracker) getDcTracker(1);
        String imsi = mtkDcTracker != null ? mtkDcTracker.getImsi() : null;
        return TextUtils.isEmpty(imsi) ? super.getSubscriberId() : imsi;
    }

    public void getSuggestedPlmnList(int i, int i2, int i3, Message message) {
        this.mMtkCi.getSuggestedPlmnList(i, i2, i3, message);
    }

    public int getTbcwMode() {
        initTbcwMode();
        return this.mTbcwMode;
    }

    public void getTerminalBasedCallWaiting(final Message message) {
        try {
            boolean zBooleanValue = ((Boolean) this.mExecutorService.submit(new Callable() { // from class: com.mediatek.internal.telephony.MtkGsmCdmaPhone.4
                @Override // java.util.concurrent.Callable
                public Object call() throws Exception {
                    String telephonyProperty = TelephonyManager.getTelephonyProperty(MtkGsmCdmaPhone.this.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
                    Rlog.d(MtkGsmCdmaPhone.LOG_TAG, "getTerminalBasedCallWaiting(): tbcwMode = " + telephonyProperty + ", onComplete = " + message);
                    if ("enabled_tbcw_on".equals(telephonyProperty)) {
                        if (message != null) {
                            Thread.sleep(1000L);
                            AsyncResult.forMessage(message, new int[]{1, 1}, (Throwable) null);
                            message.sendToTarget();
                        }
                        return true;
                    }
                    if (!"enabled_tbcw_off".equals(telephonyProperty)) {
                        return false;
                    }
                    if (message != null) {
                        Thread.sleep(1000L);
                        AsyncResult.forMessage(message, new int[]{0, 0}, (Throwable) null);
                        message.sendToTarget();
                    }
                    return true;
                }
            }).get()).booleanValue();
            Rlog.d(LOG_TAG, "getTerminalBasedCallWaiting future get = " + zBooleanValue);
        } catch (Exception e) {
            Rlog.e(LOG_TAG, "getTerminalBasedCallWaiting Exception occured");
        }
    }

    public long[] getTimeSlot() {
        String str = SystemProperties.get(CFU_TIME_SLOT + this.mPhoneId, "");
        long[] jArr = null;
        if (str != null && !str.equals("")) {
            String[] strArrSplit = str.split(",");
            if (strArrSplit.length == 2) {
                jArr = new long[2];
                for (int i = 0; i < 2; i++) {
                    jArr[i] = Long.parseLong(strArrSplit[i]);
                    Calendar calendar = Calendar.getInstance(TimeZone.getDefault());
                    calendar.setTimeInMillis(jArr[i]);
                    int i2 = calendar.get(11);
                    int i3 = calendar.get(12);
                    Calendar calendar2 = Calendar.getInstance(TimeZone.getDefault());
                    calendar2.set(11, i2);
                    calendar2.set(12, i3);
                    jArr[i] = calendar2.getTimeInMillis();
                }
            }
        }
        Rlog.d(LOG_TAG, "timeSlot = " + Arrays.toString(jArr));
        return jArr;
    }

    public boolean handleInCallMmiCommands(String str) throws CallStateException {
        if (!isPhoneTypeGsm()) {
            loge("method handleInCallMmiCommands is NOT supported in CDMA!");
            return false;
        }
        Phone phone = this.mImsPhone;
        if (phone != null && phone.getServiceState().getState() == 0 && !isInCSCall()) {
            return phone.handleInCallMmiCommands(str);
        }
        if (!isInCall() || TextUtils.isEmpty(str)) {
            return false;
        }
        switch (str.charAt(0)) {
            case '0':
                return handleUdubIncallSupplementaryService(str);
            case PplMessageManager.PendingMessage.PENDING_MESSAGE_LENGTH /* 49 */:
                return handleCallWaitingIncallSupplementaryService(str);
            case '2':
                return handleCallHoldIncallSupplementaryService(str);
            case '3':
                return handleMultipartyIncallSupplementaryService(str);
            case '4':
                return handleEctIncallSupplementaryService(str);
            case MtkWspTypeDecoder.CONTENT_TYPE_B_CONNECTIVITY /* 53 */:
                return handleCcbsIncallSupplementaryService(str);
            default:
                return false;
        }
    }

    public void handleMessage(Message message) {
        MtkSuppServHelper suppServHelper;
        String xCAPErrorMessageFromSysProp;
        MtkSuppServHelper suppServHelper2;
        String xCAPErrorMessageFromSysProp2;
        MtkSuppServHelper suppServHelper3;
        String xCAPErrorMessageFromSysProp3;
        MtkSuppServHelper suppServHelper4;
        String xCAPErrorMessageFromSysProp4;
        MtkSuppServHelper suppServHelper5;
        String xCAPErrorMessageFromSysProp5;
        MtkGsmCdmaConnection mtkGsmCdmaConnection;
        MtkSuppServHelper suppServHelper6;
        String xCAPErrorMessageFromSysProp6;
        MtkSuppServHelper suppServHelper7;
        String xCAPErrorMessageFromSysProp7;
        MtkSuppServHelper suppServHelper8;
        String xCAPErrorMessageFromSysProp8;
        int i = message.what;
        boolean z = true;
        if (i == 2) {
            logd("Event EVENT_SSN Received");
            if (isPhoneTypeGsm()) {
                SuppServiceNotification suppServiceNotification = (SuppServiceNotification) ((AsyncResult) message.obj).result;
                if (suppServiceNotification.notificationType == 1 && suppServiceNotification.code == 0) {
                    logd("skip AOSP event for MT forwarded call notification");
                    return;
                }
                AsyncResult asyncResult = new AsyncResult((Object) null, suppServiceNotification, (Throwable) null);
                if (this.mSsnRegistrants.size() == 0) {
                    this.mCachedSsn = asyncResult;
                }
                this.mSsnRegistrants.notifyRegistrants(asyncResult);
                return;
            }
            return;
        }
        if (i == 3) {
            super.handleMessage(message);
            updateVoiceMail();
            return;
        }
        if (i != 8) {
            if (i == 16) {
                super.handleMessage(message);
                if (isPhoneTypeGsm()) {
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    boolean z2 = SystemProperties.getInt(PROPERTY_DISABLE_AUTO_RETURN_RPLMN, 1) > 0;
                    boolean z3 = !this.mContext.getResources().getBoolean(R.bool.config_cellBroadcastAppLinks);
                    if (asyncResult2 == null || asyncResult2.exception == null) {
                        z = false;
                    }
                    Rlog.d(LOG_TAG, "EVENT_SET_NETWORK_MANUAL_COMPLETE, restoreSelection=" + z3 + ", disable_auto_return_rplmn=" + z2 + ", exception=" + z);
                    if (z3 || !z || z2) {
                        return;
                    }
                    clearSavedNetworkSelection();
                    this.mCi.setNetworkSelectionModeAutomatic((Message) null);
                    return;
                }
                return;
            }
            if (i == 18) {
                Rlog.d(LOG_TAG, "EVENT_SET_CLIR_COMPLETE");
                AsyncResult asyncResult3 = (AsyncResult) message.obj;
                if (asyncResult3.exception == null) {
                    saveClirSetting(message.arg1);
                }
                if (asyncResult3.exception != null && (asyncResult3.exception instanceof CommandException)) {
                    CommandException commandException = asyncResult3.exception;
                    CommandException.Error commandError = commandException.getCommandError();
                    Rlog.d(LOG_TAG, "EVENT_SET_CLIR_COMPLETE: cmdException error:" + commandError);
                    if (supportMdAutoSetupIms() && commandException != null) {
                        if ((isOp(MtkOperatorUtils.OPID.OP01) || isOp(MtkOperatorUtils.OPID.OP02)) && isUtError(commandException.getCommandError())) {
                            Rlog.d(LOG_TAG, "return REQUEST_NOT_SUPPORTED");
                            asyncResult3.exception = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                        } else if (!isUtErrorHasMsg(commandError)) {
                            Rlog.d(LOG_TAG, "return Original Error");
                        } else if (commandException.getMessage() != null && commandException.getMessage().isEmpty() && (suppServHelper = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp = suppServHelper.getXCAPErrorMessageFromSysProp(commandError)) != null && !xCAPErrorMessageFromSysProp.isEmpty()) {
                            Rlog.d(LOG_TAG, "Create OEM error = " + commandError + ", msg =" + xCAPErrorMessageFromSysProp);
                            asyncResult3.exception = new CommandException(commandError, xCAPErrorMessageFromSysProp);
                        }
                    }
                }
                Message message2 = (Message) asyncResult3.userObj;
                if (message2 != null) {
                    AsyncResult.forMessage(message2, asyncResult3.result, asyncResult3.exception);
                    message2.sendToTarget();
                    return;
                }
                return;
            }
            if (i == 25) {
                if (isPhoneTypeGsm()) {
                    super.handleMessage(message);
                    return;
                }
                boolean zIsInEcm = isInEcm();
                super.handleMessage(message);
                if (zIsInEcm) {
                    return;
                }
                this.mDataEnabledSettings.setInternalDataEnabled(false);
                notifyEmergencyCallRegistrants(true);
                return;
            }
            if (i == 29) {
                Rlog.d(LOG_TAG, "EVENT_ICC_RECORD_EVENTS");
                processIccRecordEvents(((Integer) ((AsyncResult) message.obj).result).intValue());
                MtkSuppServHelper suppServHelper9 = MtkSuppServManager.getSuppServHelper(getPhoneId());
                if (suppServHelper9 != null) {
                    suppServHelper9.setIccRecordsReady();
                    return;
                }
                return;
            }
            if (i != 45) {
                if (i == 12) {
                    if (!supportMdAutoSetupIms()) {
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        IccRecords iccRecords = (IccRecords) this.mIccRecords.get();
                        Cfu cfu = (Cfu) asyncResult4.userObj;
                        if (asyncResult4.exception == null && iccRecords != null) {
                            if (!queryCFUAgainAfterSet()) {
                                setVoiceCallForwardingFlag(1, message.arg1 == 1, cfu.mSetCfNumber);
                            } else if (asyncResult4.result != null) {
                                CallForwardInfo[] callForwardInfoArr = (CallForwardInfo[]) asyncResult4.result;
                                if (callForwardInfoArr == null || callForwardInfoArr.length == 0) {
                                    Rlog.d(LOG_TAG, "cfinfo is null or length is 0.");
                                } else {
                                    Rlog.d(LOG_TAG, "[EVENT_SET_CALL_FORWARD_DONE] check cfinfo");
                                    for (int i2 = 0; i2 < callForwardInfoArr.length; i2++) {
                                        if ((callForwardInfoArr[i2].serviceClass & 1) != 0) {
                                            setVoiceCallForwardingFlag(1, callForwardInfoArr[i2].status == 1, callForwardInfoArr[i2].number);
                                            break;
                                        }
                                    }
                                }
                            } else {
                                Rlog.e(LOG_TAG, "EVENT_SET_CALL_FORWARD_DONE: ar.result is null.");
                            }
                        }
                        if (cfu.mOnComplete != null) {
                            AsyncResult.forMessage(cfu.mOnComplete, asyncResult4.result, asyncResult4.exception);
                            cfu.mOnComplete.sendToTarget();
                            return;
                        }
                        return;
                    }
                    AsyncResult asyncResult5 = (AsyncResult) message.obj;
                    IccRecords iccRecords2 = (IccRecords) this.mIccRecords.get();
                    Cfu cfu2 = (Cfu) asyncResult5.userObj;
                    if (asyncResult5.exception != null || iccRecords2 == null) {
                        if (asyncResult5.exception != null) {
                            CommandException commandException2 = asyncResult5.exception;
                            CommandException.Error commandError2 = commandException2.getCommandError();
                            if (isUtErrorHasMsg(commandError2) && commandException2.getMessage() != null && commandException2.getMessage().isEmpty() && (suppServHelper2 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp2 = suppServHelper2.getXCAPErrorMessageFromSysProp(commandError2)) != null && !xCAPErrorMessageFromSysProp2.isEmpty()) {
                                Rlog.d(LOG_TAG, "Create OEM error = " + commandError2 + ", msg =" + xCAPErrorMessageFromSysProp2);
                                asyncResult5.exception = new CommandException(commandError2, xCAPErrorMessageFromSysProp2);
                            }
                        }
                    } else if ((cfu2.mServiceClass & 1) != 0) {
                        setVoiceCallForwardingFlag(1, message.arg1 == 1, cfu2.mSetCfNumber);
                    }
                    if (cfu2.mOnComplete != null) {
                        AsyncResult.forMessage(cfu2.mOnComplete, asyncResult5.result, asyncResult5.exception);
                        cfu2.mOnComplete.sendToTarget();
                        return;
                    }
                    return;
                }
                if (i == 13) {
                    Rlog.d(LOG_TAG, "mPhoneId= " + this.mPhoneId + "subId=" + getSubId());
                    AsyncResult asyncResult6 = (AsyncResult) message.obj;
                    if (asyncResult6.exception == null) {
                        handleCfuQueryResult((CallForwardInfo[]) asyncResult6.result);
                    } else if (supportMdAutoSetupIms()) {
                        CommandException commandException3 = asyncResult6.exception;
                        CommandException.Error commandError3 = commandException3.getCommandError();
                        if (isUtErrorHasMsg(commandError3) && commandException3.getMessage() != null && commandException3.getMessage().isEmpty() && (suppServHelper3 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp3 = suppServHelper3.getXCAPErrorMessageFromSysProp(commandError3)) != null && !xCAPErrorMessageFromSysProp3.isEmpty()) {
                            Rlog.d(LOG_TAG, "Create OEM error = " + commandError3 + ", msg =" + xCAPErrorMessageFromSysProp3);
                            asyncResult6.exception = new CommandException(commandError3, xCAPErrorMessageFromSysProp3);
                        }
                    }
                    Message message3 = (Message) asyncResult6.userObj;
                    if (message3 != null) {
                        AsyncResult.forMessage(message3, asyncResult6.result, asyncResult6.exception);
                        message3.sendToTarget();
                        return;
                    }
                    return;
                }
                if (i == 301) {
                    AsyncResult asyncResult7 = (AsyncResult) message.obj;
                    Rlog.d(LOG_TAG, "[EVENT_GET_CALL_WAITING_]ar.exception = " + asyncResult7.exception);
                    Message message4 = (Message) asyncResult7.userObj;
                    if (asyncResult7.exception != null) {
                        if (supportMdAutoSetupIms()) {
                            CommandException commandException4 = asyncResult7.exception;
                            CommandException.Error commandError4 = commandException4.getCommandError();
                            if (isUtErrorHasMsg(commandError4) && commandException4.getMessage() != null && commandException4.getMessage().isEmpty() && (suppServHelper4 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp4 = suppServHelper4.getXCAPErrorMessageFromSysProp(commandError4)) != null && !xCAPErrorMessageFromSysProp4.isEmpty()) {
                                Rlog.d(LOG_TAG, "Create OEM error = " + commandError4 + ", msg =" + xCAPErrorMessageFromSysProp4);
                                asyncResult7.exception = new CommandException(commandError4, xCAPErrorMessageFromSysProp4);
                            }
                        }
                        if (message4 != null) {
                            AsyncResult.forMessage(message4, asyncResult7.result, asyncResult7.exception);
                            message4.sendToTarget();
                            return;
                        }
                        return;
                    }
                    int[] iArr = (int[]) asyncResult7.result;
                    try {
                        Rlog.d(LOG_TAG, "EVENT_GET_CALL_WAITING_DONE cwArray[0]:cwArray[1] = " + iArr[0] + ":" + iArr[1]);
                        if (iArr[0] != 1 || (iArr[1] & 1) != 1) {
                            z = false;
                        }
                        if (!supportMdAutoSetupIms()) {
                            setTerminalBasedCallWaiting(z, null);
                        }
                        if (message4 != null) {
                            AsyncResult.forMessage(message4, asyncResult7.result, (Throwable) null);
                            message4.sendToTarget();
                            return;
                        }
                        return;
                    } catch (ArrayIndexOutOfBoundsException e) {
                        Rlog.e(LOG_TAG, "EVENT_GET_CALL_WAITING_DONE: improper result: err =" + e.getMessage());
                        if (message4 != null) {
                            AsyncResult.forMessage(message4, asyncResult7.result, (Throwable) null);
                            message4.sendToTarget();
                            return;
                        }
                        return;
                    }
                }
                if (i == 302) {
                    AsyncResult asyncResult8 = (AsyncResult) message.obj;
                    Message message5 = (Message) asyncResult8.userObj;
                    Rlog.d(LOG_TAG, "EVENT_SET_CALL_WAITING_DONE: ar.exception=" + asyncResult8.exception);
                    if (asyncResult8.exception == null) {
                        if (!supportMdAutoSetupIms()) {
                            setTerminalBasedCallWaiting(message.arg1 == 1, message5);
                            return;
                        } else {
                            if (message5 != null) {
                                AsyncResult.forMessage(message5, (Object) null, (Throwable) null);
                                message5.sendToTarget();
                                return;
                            }
                            return;
                        }
                    }
                    if (supportMdAutoSetupIms()) {
                        CommandException commandException5 = asyncResult8.exception;
                        CommandException.Error commandError5 = commandException5.getCommandError();
                        if (isUtErrorHasMsg(commandError5) && commandException5.getMessage() != null && commandException5.getMessage().isEmpty() && (suppServHelper5 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp5 = suppServHelper5.getXCAPErrorMessageFromSysProp(commandError5)) != null && !xCAPErrorMessageFromSysProp5.isEmpty()) {
                            Rlog.d(LOG_TAG, "Create OEM error = " + commandError5 + ", msg =" + xCAPErrorMessageFromSysProp5);
                            asyncResult8.exception = new CommandException(commandError5, xCAPErrorMessageFromSysProp5);
                        }
                    }
                    if (message5 != null) {
                        AsyncResult.forMessage(message5, asyncResult8.result, asyncResult8.exception);
                        message5.sendToTarget();
                        return;
                    }
                    return;
                }
                if (i == 2000) {
                    Rlog.d(LOG_TAG, "EVENT_IMS_UT_DONE: Enter");
                    handleImsUtDone(message);
                    return;
                }
                if (i == 2001) {
                    handleImsUtCsfb(message);
                    return;
                }
                switch (i) {
                    case 109:
                        Rlog.d(LOG_TAG, "mPhoneId = " + this.mPhoneId + ", subId = " + getSubId());
                        AsyncResult asyncResult9 = (AsyncResult) message.obj;
                        Rlog.d(LOG_TAG, "[EVENT_GET_CALL_FORWARD_TIME_SLOT_DONE]ar.exception = " + asyncResult9.exception);
                        if (asyncResult9.exception == null) {
                            handleCfuInTimeSlotQueryResult((MtkCallForwardInfo[]) asyncResult9.result);
                        }
                        Rlog.d(LOG_TAG, "[EVENT_GET_CALL_FORWARD_TIME_SLOT_DONE]msg.arg1 = " + message.arg1);
                        if (asyncResult9.exception != null && (asyncResult9.exception instanceof CommandException)) {
                            CommandException commandException6 = asyncResult9.exception;
                            Rlog.d(LOG_TAG, "[EVENT_GET_CALL_FORWARD_TIME_SLOT_DONE] cmdException error:" + commandException6.getCommandError());
                            if (message.arg1 == 1 && commandException6 != null && commandException6.getCommandError() == CommandException.Error.REQUEST_NOT_SUPPORTED && this.mSST != null && this.mSST.mSS != null && this.mSST.mSS.getState() == 0) {
                                getCallForwardingOption(0, obtainMessage(13));
                            }
                            if (supportMdAutoSetupIms() && commandException6 != null && commandException6.getCommandError() == CommandException.Error.OEM_ERROR_2) {
                                Rlog.d(LOG_TAG, "return REQUEST_NOT_SUPPORTED");
                                asyncResult9.exception = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                            }
                        }
                        Message message6 = (Message) asyncResult9.userObj;
                        if (message6 != null) {
                            AsyncResult.forMessage(message6, asyncResult9.result, asyncResult9.exception);
                            message6.sendToTarget();
                            return;
                        }
                        return;
                    case 110:
                        AsyncResult asyncResult10 = (AsyncResult) message.obj;
                        IccRecords iccRecords3 = (IccRecords) this.mIccRecords.get();
                        CfuEx cfuEx = (CfuEx) asyncResult10.userObj;
                        if (asyncResult10.exception == null && iccRecords3 != null) {
                            iccRecords3.setVoiceCallForwardingFlag(1, message.arg1 == 1, cfuEx.mSetCfNumber);
                            saveTimeSlot(cfuEx.mSetTimeSlot);
                        }
                        if (cfuEx.mOnComplete != null) {
                            AsyncResult.forMessage(cfuEx.mOnComplete, asyncResult10.result, asyncResult10.exception);
                            cfuEx.mOnComplete.sendToTarget();
                            return;
                        }
                        return;
                    case EVENT_UNSOL_RADIO_CAPABILITY_CHANGED /* 111 */:
                        AsyncResult asyncResult11 = (AsyncResult) message.obj;
                        RadioCapability radioCapability = (RadioCapability) asyncResult11.result;
                        if (asyncResult11.exception != null) {
                            Rlog.d(LOG_TAG, "RIL_UNSOL_RADIO_CAPABILITY fail, don't change capability");
                        } else {
                            radioCapabilityUpdated(radioCapability);
                        }
                        Rlog.d(LOG_TAG, "EVENT_UNSOL_RADIO_CAPABILITY_CHANGED: rc: " + radioCapability);
                        return;
                    default:
                        switch (i) {
                            case 1001:
                                Rlog.d(LOG_TAG, "handle EVENT_GET_APC_INFO");
                                AsyncResult asyncResult12 = (AsyncResult) message.obj;
                                PseudoCellInfoResult pseudoCellInfoResult = (PseudoCellInfoResult) asyncResult12.userObj;
                                if (pseudoCellInfoResult == null) {
                                    Rlog.e(LOG_TAG, "EVENT_GET_APC_INFO: result return null");
                                    return;
                                }
                                synchronized (pseudoCellInfoResult.lockObj) {
                                    if (asyncResult12.exception != null) {
                                        Rlog.d(LOG_TAG, "EVENT_GET_APC_INFO: error ret null, e=" + asyncResult12.exception);
                                        pseudoCellInfoResult.infos = null;
                                    } else {
                                        pseudoCellInfoResult.infos = new PseudoCellInfo((int[]) asyncResult12.result);
                                    }
                                    pseudoCellInfoResult.lockObj.notify();
                                    break;
                                }
                                return;
                            case 1002:
                                logd("Event EVENT_SSN_EX Received");
                                if (isPhoneTypeGsm()) {
                                    MtkSuppServiceNotification mtkSuppServiceNotification = (MtkSuppServiceNotification) ((AsyncResult) message.obj).result;
                                    if (mtkSuppServiceNotification.notificationType == 1) {
                                        if (mtkSuppServiceNotification.code == 0 || mtkSuppServiceNotification.code >= 11) {
                                            AsyncResult asyncResult13 = new AsyncResult((Object) null, mtkSuppServiceNotification, (Throwable) null);
                                            if (this.mSsnRegistrants.size() == 0) {
                                                this.mCachedSsn = asyncResult13;
                                            }
                                            this.mSsnRegistrants.notifyRegistrants(asyncResult13);
                                            return;
                                        }
                                        logd("Unexpected SSN_EX code:" + mtkSuppServiceNotification.code);
                                        return;
                                    }
                                    return;
                                }
                                return;
                            case 1003:
                                AsyncResult asyncResult14 = (AsyncResult) message.obj;
                                MtkSuppCrssNotification mtkSuppCrssNotification = (MtkSuppCrssNotification) asyncResult14.result;
                                if (mtkSuppCrssNotification.code == 3) {
                                    Rlog.d(LOG_TAG, "[COLP]noti.number = " + pii(mtkSuppCrssNotification.number));
                                    if (getForegroundCall().getState() != Call.State.IDLE && (mtkGsmCdmaConnection = (MtkGsmCdmaConnection) getForegroundCall().getConnections().get(0)) != null && mtkGsmCdmaConnection.getAddress() != null && !mtkGsmCdmaConnection.getAddress().equals(mtkSuppCrssNotification.number)) {
                                        mtkGsmCdmaConnection.setRedirectingAddress(mtkSuppCrssNotification.number);
                                        Rlog.d(LOG_TAG, "[COLP]Redirecting address = " + pii(mtkGsmCdmaConnection.getRedirectingAddress()));
                                    }
                                }
                                if (this.mCallRelatedSuppSvcRegistrants.size() == 0) {
                                    this.mCachedCrssn = asyncResult14;
                                }
                                this.mCallRelatedSuppSvcRegistrants.notifyRegistrants(asyncResult14);
                                return;
                            case 1004:
                                CountDownLatch countDownLatch = this.mCallbackLatch;
                                if (countDownLatch != null) {
                                    countDownLatch.countDown();
                                }
                                Rlog.d(LOG_TAG, "EVENT_SET_SS_PROPERTY done");
                                return;
                            case 1005:
                                byte[] bArr = (byte[]) ((AsyncResult) message.obj).result;
                                RegistrantList registrantList = this.mOemIndRegistrants;
                                if (registrantList != null) {
                                    registrantList.notifyRegistrants(new AsyncResult((Object) null, new String(bArr), (Throwable) null));
                                    return;
                                }
                                return;
                            default:
                                switch (i) {
                                    case EVENT_GET_CLIR_COMPLETE /* 2004 */:
                                        Rlog.d(LOG_TAG, "EVENT_GET_CLIR_COMPLETE");
                                        AsyncResult asyncResult15 = (AsyncResult) message.obj;
                                        if (asyncResult15.exception != null && (asyncResult15.exception instanceof CommandException)) {
                                            CommandException commandException7 = asyncResult15.exception;
                                            CommandException.Error commandError6 = commandException7.getCommandError();
                                            Rlog.d(LOG_TAG, "EVENT_GET_CLIR_COMPLETE: cmdException error:" + commandError6);
                                            if (supportMdAutoSetupIms() && commandException7 != null) {
                                                if (isOp(MtkOperatorUtils.OPID.OP01) || isOp(MtkOperatorUtils.OPID.OP02)) {
                                                    if (isUtError(commandException7.getCommandError())) {
                                                        Rlog.d(LOG_TAG, "return REQUEST_NOT_SUPPORTED");
                                                        asyncResult15.exception = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                                                    } else {
                                                        Rlog.d(LOG_TAG, "return Original Error");
                                                    }
                                                } else if (isUtErrorHasMsg(commandError6) && commandException7.getMessage() != null && commandException7.getMessage().isEmpty() && (suppServHelper6 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp6 = suppServHelper6.getXCAPErrorMessageFromSysProp(commandError6)) != null && !xCAPErrorMessageFromSysProp6.isEmpty()) {
                                                    Rlog.d(LOG_TAG, "Create OEM error = " + commandError6 + ", msg =" + xCAPErrorMessageFromSysProp6);
                                                    asyncResult15.exception = new CommandException(commandError6, xCAPErrorMessageFromSysProp6);
                                                }
                                            }
                                        }
                                        Message message7 = (Message) asyncResult15.userObj;
                                        if (message7 != null) {
                                            AsyncResult.forMessage(message7, asyncResult15.result, asyncResult15.exception);
                                            message7.sendToTarget();
                                            return;
                                        }
                                        return;
                                    case EVENT_SET_CALL_BARRING_COMPLETE /* 2005 */:
                                        Rlog.d(LOG_TAG, "EVENT_SET_CALL_BARRING_COMPLETE");
                                        AsyncResult asyncResult16 = (AsyncResult) message.obj;
                                        if (asyncResult16.exception != null && (asyncResult16.exception instanceof CommandException)) {
                                            CommandException commandException8 = asyncResult16.exception;
                                            CommandException.Error commandError7 = commandException8.getCommandError();
                                            Rlog.d(LOG_TAG, "EVENT_SET_CALL_BARRING_COMPLETE: cmdException error:" + commandError7);
                                            if (supportMdAutoSetupIms() && commandException8 != null) {
                                                if (isOp(MtkOperatorUtils.OPID.OP01)) {
                                                    if (isUtError(commandException8.getCommandError())) {
                                                        Rlog.d(LOG_TAG, "return REQUEST_NOT_SUPPORTED");
                                                        asyncResult16.exception = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                                                    } else {
                                                        Rlog.d(LOG_TAG, "return Original Error");
                                                    }
                                                } else if (isUtErrorHasMsg(commandError7) && commandException8.getMessage() != null && commandException8.getMessage().isEmpty() && (suppServHelper7 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp7 = suppServHelper7.getXCAPErrorMessageFromSysProp(commandError7)) != null && !xCAPErrorMessageFromSysProp7.isEmpty()) {
                                                    Rlog.d(LOG_TAG, "Create OEM error = " + commandError7 + ", msg =" + xCAPErrorMessageFromSysProp7);
                                                    asyncResult16.exception = new CommandException(commandError7, xCAPErrorMessageFromSysProp7);
                                                }
                                            }
                                        }
                                        Message message8 = (Message) asyncResult16.userObj;
                                        if (message8 != null) {
                                            AsyncResult.forMessage(message8, asyncResult16.result, asyncResult16.exception);
                                            message8.sendToTarget();
                                            return;
                                        }
                                        return;
                                    case EVENT_GET_CALL_BARRING_COMPLETE /* 2006 */:
                                        Rlog.d(LOG_TAG, "EVENT_GET_CALL_BARRING_COMPLETE");
                                        AsyncResult asyncResult17 = (AsyncResult) message.obj;
                                        if (asyncResult17.exception != null && (asyncResult17.exception instanceof CommandException)) {
                                            CommandException commandException9 = asyncResult17.exception;
                                            CommandException.Error commandError8 = commandException9.getCommandError();
                                            Rlog.d(LOG_TAG, "EVENT_GET_CALL_BARRING_COMPLETE: cmdException error:" + commandError8);
                                            if (supportMdAutoSetupIms() && commandException9 != null) {
                                                if (isOp(MtkOperatorUtils.OPID.OP01) || isOp(MtkOperatorUtils.OPID.OP09)) {
                                                    if (isUtError(commandException9.getCommandError())) {
                                                        Rlog.d(LOG_TAG, "return REQUEST_NOT_SUPPORTED");
                                                        asyncResult17.exception = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                                                    } else {
                                                        Rlog.d(LOG_TAG, "return Original Error");
                                                    }
                                                } else if (isUtErrorHasMsg(commandError8) && commandException9.getMessage() != null && commandException9.getMessage().isEmpty() && (suppServHelper8 = MtkSuppServManager.getSuppServHelper(getPhoneId())) != null && (xCAPErrorMessageFromSysProp8 = suppServHelper8.getXCAPErrorMessageFromSysProp(commandError8)) != null && !xCAPErrorMessageFromSysProp8.isEmpty()) {
                                                    Rlog.d(LOG_TAG, "Create OEM error = " + commandError8 + ", msg =" + xCAPErrorMessageFromSysProp8);
                                                    asyncResult17.exception = new CommandException(commandError8, xCAPErrorMessageFromSysProp8);
                                                }
                                            }
                                        }
                                        Message message9 = (Message) asyncResult17.userObj;
                                        if (message9 != null) {
                                            AsyncResult.forMessage(message9, asyncResult17.result, asyncResult17.exception);
                                            message9.sendToTarget();
                                            return;
                                        }
                                        return;
                                    default:
                                        super.handleMessage(message);
                                        return;
                                }
                        }
                }
            }
        }
        String str = "(unknown msg)";
        if (message.what == 8) {
            str = "EVENT_RADIO_OFF_OR_NOT_AVAILABLE";
        } else if (message.what == 45) {
            str = "EVENT_MODEM_RESET";
        }
        Rlog.d(LOG_TAG, str + "received.");
        setEccRadioOnStatus(false, false);
        super.handleMessage(message);
    }

    public boolean handlePinMmi(String str) {
        MtkGsmMmiCode mtkGsmMmiCodeNewFromDialString = isPhoneTypeGsm() ? MtkGsmMmiCode.newFromDialString(str, this, (UiccCardApplication) this.mUiccApplication.get(), null) : CdmaMmiCode.newFromDialString(str, this, (UiccCardApplication) this.mUiccApplication.get());
        if (mtkGsmMmiCodeNewFromDialString == null || !mtkGsmMmiCodeNewFromDialString.isPinPukCommand()) {
            loge("Mmi is null or unrecognized!");
            return false;
        }
        this.mPendingMMIs.add(mtkGsmMmiCodeNewFromDialString);
        Rlog.d(LOG_TAG, "handlePinMmi: " + str + ", mmi=" + mtkGsmMmiCodeNewFromDialString);
        dumpPendingMmi();
        this.mMmiRegistrants.notifyRegistrants(new AsyncResult((Object) null, mtkGsmMmiCodeNewFromDialString, (Throwable) null));
        try {
            mtkGsmMmiCodeNewFromDialString.processCode();
            return true;
        } catch (CallStateException e) {
            return true;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangupAll() throws CallStateException {
        ((MtkGsmCdmaCallTracker) this.mCT).hangupAll();
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void initOnce(CommandsInterface commandsInterface) {
        super.initOnce(commandsInterface);
        LOG_TAG += "[" + this.mPhoneId + "]";
        this.mMiuiIccPhoneBookInterfaceManager = new MiuiIccPhoneBookInterfaceManager(this);
        this.mCi.registerForRadioCapabilityChanged(this, EVENT_UNSOL_RADIO_CAPABILITY_CHANGED, (Object) null);
        if (this.mMtkCi == null) {
            this.mMtkCi = (MtkRIL) commandsInterface;
        }
        this.mMtkCi.setOnSuppServiceNotificationEx(this, 1002, null);
        this.mMtkCi.setOnCallRelatedSuppSvc(this, 1003, null);
        this.mMtkCi.setOnUnsolOemHookRaw(this, 1005, null);
    }

    protected void initRatSpecific(int i) {
        super.initRatSpecific(i);
        if (isPhoneTypeGsm()) {
            this.mIsPhoneInEcmState = getInEcmMode();
            if (this.mIsPhoneInEcmState) {
                this.mCi.exitEmergencyCallbackMode((Message) null);
            }
        }
    }

    public void invokeOemRilRequestRaw(byte[] bArr, Message message) {
        this.mMtkCi.invokeOemRilRequestRaw(bArr, message);
    }

    public void invokeOemRilRequestStrings(String[] strArr, Message message) {
        this.mMtkCi.invokeOemRilRequestStrings(strArr, message);
    }

    public boolean isCdmaLessDevice() {
        boolean z = "3".equals(SystemProperties.get(PROP_VZW_DEVICE_TYPE, "0")) || "4".equals(SystemProperties.get(PROP_VZW_DEVICE_TYPE, "0"));
        Rlog.d(LOG_TAG, "isCdmaLess: " + z);
        return z;
    }

    protected boolean isDataSuspended() {
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        return mtkDcHelper != null ? !mtkDcHelper.isDataAllowedForConcurrent(getPhoneId()) : super.isDataSuspended();
    }

    public boolean isDuringImsCall() {
        if (this.mImsPhone != null) {
            if (this.mImsPhone.getForegroundCall().getState().isAlive() || this.mImsPhone.getBackgroundCall().getState().isAlive() || this.mImsPhone.getRingingCall().getState().isAlive()) {
                Rlog.d(LOG_TAG, "During IMS call.");
                return true;
            }
        }
        return false;
    }

    public boolean isDuringImsEccCall() {
        boolean z = this.mImsPhone != null && this.mImsPhone.isInEmergencyCall();
        Rlog.d(LOG_TAG, "isInImsEccCall: " + z);
        return z;
    }

    public boolean isDuringVoLteCall() {
        boolean z = isDuringImsCall() && (this.mImsPhone != null && this.mImsPhone.isVolteEnabled());
        Rlog.d(LOG_TAG, "isDuringVoLteCall: " + z);
        return z;
    }

    public boolean isEccSelectedPhone() {
        return this.mIsEccSelectedPhone;
    }

    public boolean isEnableXcapHttpResponse409() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isEnableXcapHttpResponse409, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isEnableXcapHttpResponse409(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isEnableXcapHttpResponse409: " + z);
        return z;
    }

    public boolean isGsmSsPrefer() {
        return (SystemProperties.getInt("persist.vendor.mtk_ct_volte_support", 0) != 0 && isOp(MtkOperatorUtils.OPID.OP09)) || isOp(MtkOperatorUtils.OPID.OP117);
    }

    public boolean isGsmUtSupport() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isGsmUtSupport, ssConf is null, return false");
            return false;
        }
        boolean roaming = getServiceState().getRoaming();
        if (!SystemProperties.get("persist.vendor.ims_support").equals("1") || !SystemProperties.get("persist.vendor.volte_support").equals("1") || !suppServConf.isGsmUtSupport(getOperatorNumeric()) || !isUsimCard()) {
            return false;
        }
        boolean z = this.mImsPhone != null && this.mImsPhone.isWifiCallingEnabled();
        boolean zIsWFCUtSupport = isWFCUtSupport();
        logd("in isGsmUtSupport isWfcEnable -->" + z + ",isWfcUtSupport-->" + zIsWFCUtSupport);
        if (!suppServConf.isNeedCheckImsWhenRoaming(getOperatorNumeric()) || !roaming || isIMSRegistered()) {
            return !z || zIsWFCUtSupport;
        }
        logd("in isGsmUtSupport isRoaming -->" + roaming + ",isIMSRegistered-->" + isIMSRegistered());
        return false;
    }

    public boolean isIMSRegistered() {
        MtkSuppServHelper suppServHelper = MtkSuppServManager.getSuppServHelper(getPhoneId());
        if (suppServHelper != null) {
            return suppServHelper.getIMSRegistered();
        }
        return false;
    }

    public boolean isImsUseEnabled() {
        ImsManager imsManager = ImsManager.getInstance(this.mContext, this.mPhoneId);
        boolean zIsEnhanced4gLteModeSettingEnabledByUser = imsManager.isEnhanced4gLteModeSettingEnabledByUser();
        boolean zIsWfcEnabledByUser = true;
        boolean zIsNonTtyOrTtyOnVolteEnabled = true;
        if (!zIsEnhanced4gLteModeSettingEnabledByUser) {
            zIsWfcEnabledByUser = imsManager.isWfcEnabledByUser();
            zIsNonTtyOrTtyOnVolteEnabled = imsManager.isNonTtyOrTtyOnVolteEnabled();
        }
        boolean z = zIsEnhanced4gLteModeSettingEnabledByUser || (zIsWfcEnabledByUser && zIsNonTtyOrTtyOnVolteEnabled);
        Rlog.d(LOG_TAG, "isImsUseEnabled() VolteEnableByUser: " + zIsEnhanced4gLteModeSettingEnabledByUser + ", WfcEnableByUser: " + zIsWfcEnabledByUser + ", isNonTtyOrTtyOnVolteEnabled: " + zIsNonTtyOrTtyOnVolteEnabled);
        return z;
    }

    protected boolean isImsUtEnabledOverCdma() {
        if (isGsmSsPrefer()) {
            return true;
        }
        return isPhoneTypeCdmaLte() && this.mImsPhone != null && this.mImsPhone.isUtEnabled();
    }

    boolean isInCSCall() {
        return getForegroundCall().getState().isAlive() || getBackgroundCall().getState().isAlive() || getCSRingingCall().getState().isAlive();
    }

    public boolean isNoNeedToCSFBWhenIMSRegistered() {
        return isOp(MtkOperatorUtils.OPID.OP01) || isOp(MtkOperatorUtils.OPID.OP02);
    }

    public boolean isNotSupportUtToCS() {
        boolean z = false;
        if (((SystemProperties.getInt("persist.vendor.mtk_ct_volte_support", 0) != 0 && isOp(MtkOperatorUtils.OPID.OP09) && isUsimCard()) || isOp(MtkOperatorUtils.OPID.OP117)) && !getServiceState().getRoaming()) {
            z = true;
        }
        Rlog.d(LOG_TAG, "isNotSupportUtToCS: " + z);
        return z;
    }

    public boolean isNotSupportUtToCSforCFUQuery() {
        return isNotSupportUtToCS();
    }

    public boolean isNrMapEnabled() {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker != null && mtkServiceStateTracker.nm != null) {
            return this.mMtkSST.nm.isNrMapEnabled();
        }
        loge("isNrMapEnabled mMtkSST == null && mMtkSST.nm == null");
        return false;
    }

    public boolean isOp129DunChange() {
        MtkDcTracker mtkDcTracker = (MtkDcTracker) getDcTracker(1);
        if (mtkDcTracker != null) {
            return mtkDcTracker.isOp129DunChange();
        }
        return false;
    }

    public boolean isOpNotSupportCallIdentity() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpNotSupportCallIdentity, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isNotSupportCallIdentity(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isOpNotSupportCallIdentity: " + z);
        return z;
    }

    public boolean isOpNotSupportOCB(String str) {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpNotSupportOCB, ssConf is null, return false");
            return false;
        }
        boolean z = false;
        if ((str.equals("AO") || str.equals("OI") || str.equals("OX")) && suppServConf.isNotSupportOCB(getOperatorNumeric())) {
            z = true;
        }
        Rlog.d(LOG_TAG, "isOpNotSupportOCB: " + z + ", facility=" + str);
        return z;
    }

    public boolean isOpNwCW() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpNwCW, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isImsNwCW(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isOpNwCW():" + z);
        return z;
    }

    public boolean isOpReregisterForCF() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpReregisterForCF, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isReregisterForCF(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isOpReregisterForCF: " + z);
        return z;
    }

    public boolean isOpTbClir() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpTbClir, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isTbClir(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isOpTbClir: " + z);
        return z;
    }

    public boolean isOpTbcwWithCS() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpTbcwWithCS, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isNotSupportXcap(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isOpTbcwWithCS: " + z);
        return z;
    }

    public boolean isOpTransferXcap404() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isOpTransferXcap404, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isTransferXcap404(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isOpTransferXcap404: " + z);
        return z;
    }

    public boolean isResetCSFBStatusAfterFlightMode() {
        return isOp(MtkOperatorUtils.OPID.OP02);
    }

    public boolean isSupportCFUTimeSlot() {
        boolean z = isOp(MtkOperatorUtils.OPID.OP01);
        Rlog.d(LOG_TAG, "isSupportCFUTimeSlot: " + z);
        return z;
    }

    public boolean isSupportSaveCFNumber() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "isSupportSaveCFNumber, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isSupportSaveCFNumber(getOperatorNumeric());
        Rlog.d(LOG_TAG, "isSupportSaveCFNumber: " + z);
        return z;
    }

    public boolean isWFCUtSupport() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf != null) {
            return SystemProperties.get("persist.vendor.ims_support").equals("1") && SystemProperties.get("persist.vendor.mtk_wfc_support").equals("1") && !suppServConf.isNotSupportWFCUt(getOperatorNumeric());
        }
        Rlog.d(LOG_TAG, "isWFCUtSupport, ssConf is null, return false");
        return false;
    }

    public void iwlanSetRegisterCellularQualityReport(int i, int i2, int[] iArr, Message message) {
        this.mMtkCi.iwlanSetRegisterCellularQualityReport(i, i2, iArr, message);
    }

    public void manuallySetNrMap(int i) {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker == null || mtkServiceStateTracker.nm == null) {
            loge("manuallySetNrMap mMtkSST == null && mMtkSST.nm == null");
        } else {
            this.mMtkSST.nm.manuallySetNrMap(i);
        }
    }

    protected boolean needResetPhbIntMgr() {
        return false;
    }

    public void notifyCallForwardingIndicator() {
        int simState = TelephonyManager.from(this.mContext).getSimState(this.mPhoneId);
        Rlog.d(LOG_TAG, "notifyCallForwardingIndicator: sim state = " + simState);
        if (simState == 5) {
            this.mNotifier.notifyCallForwardingChanged(this);
        }
    }

    public void notifyCallForwardingIndicatorWithoutCheckSimState() {
        Rlog.d(LOG_TAG, "notifyCallForwardingIndicatorWithoutCheckSimState");
        this.mNotifier.notifyCallForwardingChanged(this);
    }

    protected void notifyImsPhoneHandoverStateChanged(Connection connection) {
        if (this.mImsPhone != null) {
            this.mImsPhone.notifyHandoverStateChanged(connection);
        }
    }

    public void notifyMtkFakeServiceStateChanged(MtkServiceState mtkServiceState) {
        if (mtkServiceState == null) {
            this.enableFakeSS = false;
        } else {
            this.enableFakeSS = true;
            this.mNotifier.notifyMtkServiceState(this, mtkServiceState);
        }
    }

    public void notifyMtkServiceStateChanged(MtkServiceState mtkServiceState) {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker != null && mtkServiceStateTracker.shouldPauseNotifyServiceState()) {
            logi("SS display optimization, pause to notify MtkServiceState.");
            return;
        }
        this.mNotifier.notifyMtkServiceState(this, mtkServiceState);
        MtkDcTracker mtkDcTracker = (MtkDcTracker) getDcTracker(1);
        if (mtkDcTracker != null) {
            mtkDcTracker.notifyMtkServiceStateChanged(mtkServiceState);
        }
    }

    public void notifyMtkSignalStrength(SignalStrength signalStrength) {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker == null || !mtkServiceStateTracker.shouldPauseNotifyServiceState()) {
            this.mNotifier.notifyMtkSignalStrength(this, signalStrength);
        } else {
            logi("SS display optimization, pause to notify MtkSignalStrength.");
        }
    }

    public void notifyServiceStateChanged(ServiceState serviceState) {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker != null && mtkServiceStateTracker.shouldPauseNotifyServiceState()) {
            logi("SS display optimization, pause to notify ServiceState.");
            return;
        }
        MtkServiceStateTracker mtkServiceStateTracker2 = (MtkServiceStateTracker) this.mSST;
        if (this.enableFakeSS || !mtkServiceStateTracker2.once_pollState_done) {
            logd("notifyServiceStateChanged, skip");
        } else {
            super.notifyServiceStateChanged(serviceState);
        }
    }

    protected void onCheckForNetworkSelectionModeAutomatic(Message message) {
        AsyncResult asyncResult = (AsyncResult) message.obj;
        Message message2 = (Message) asyncResult.userObj;
        boolean z = true;
        if (asyncResult.exception == null && asyncResult.result != null) {
            try {
                if (((int[]) asyncResult.result)[0] == 0) {
                    z = false;
                    if (getServiceState().getCellularRegState() != 0) {
                        asyncResult.exception = new CommandException(CommandException.Error.ABORTED);
                    }
                }
            } catch (Exception e) {
            }
        }
        Phone.NetworkSelectMessage networkSelectMessage = new Phone.NetworkSelectMessage();
        networkSelectMessage.message = message2;
        networkSelectMessage.operatorNumeric = "";
        networkSelectMessage.operatorAlphaLong = "";
        networkSelectMessage.operatorAlphaShort = "";
        if (z) {
            this.mCi.setNetworkSelectionModeAutomatic(obtainMessage(17, networkSelectMessage));
        } else {
            Rlog.d(LOG_TAG, "setNetworkSelectionModeAutomatic - already auto, ignoring");
            asyncResult.userObj = networkSelectMessage;
            handleSetSelectNetwork(asyncResult);
        }
        updateSavedNetworkOperator(networkSelectMessage);
        NetworkSelectionUtils.restoreSettings(this);
    }

    protected void onIncomingUSSD(int i, String str) {
        if (!isPhoneTypeGsm()) {
            loge("onIncomingUSSD: not expected on GSM");
        }
        boolean z = i == 1;
        boolean z2 = (i == 0 || i == 1) ? false : true;
        if (i == 2) {
        }
        GsmMmiCode gsmMmiCode = null;
        int size = this.mPendingMMIs.size();
        for (int i2 = 0; i2 < size; i2++) {
            if (((GsmMmiCode) this.mPendingMMIs.get(i2)).isPendingUSSD()) {
                gsmMmiCode = (GsmMmiCode) this.mPendingMMIs.get(i2);
                break;
            }
        }
        if (gsmMmiCode != null) {
            super.onIncomingUSSD(i, str);
            return;
        }
        if (z2 || str == null) {
            if (z2) {
                onNetworkInitiatedUssd(MtkGsmMmiCode.newNetworkInitiatedUssdError(str, z, this, (UiccCardApplication) this.mUiccApplication.get()));
            }
        } else {
            super.onIncomingUSSD(i, str);
        }
    }

    protected void onUpdateIccAvailability() {
        super.onUpdateIccAvailability();
        UiccCardApplication uiccCardApplication = getUiccCardApplication();
        UiccCardApplication uiccCardApplication2 = (UiccCardApplication) this.mUiccApplication.get();
        IccRecords iccRecords = uiccCardApplication != null ? uiccCardApplication.getIccRecords() : null;
        if (uiccCardApplication2 == uiccCardApplication && this.mIccRecords.get() != iccRecords) {
            if (uiccCardApplication2 != null) {
                logd("Removing stale icc objects.");
                if (this.mIccRecords.get() != null) {
                    unregisterForIccRecordEvents();
                    this.mIccPhoneBookIntManager.updateIccRecords((IccRecords) null);
                }
                this.mIccRecords.set(null);
                this.mUiccApplication.set(null);
            }
            if (uiccCardApplication != null) {
                logd("New Uicc application found. type = " + uiccCardApplication.getType());
                this.mUiccApplication.set(uiccCardApplication);
                this.mIccRecords.set(uiccCardApplication.getIccRecords());
                registerForIccRecordEvents();
                this.mIccPhoneBookIntManager.updateIccRecords((IccRecords) this.mIccRecords.get());
            }
        }
        Rlog.d(LOG_TAG, "isPhoneTypeCdmaLte:" + isPhoneTypeCdmaLte() + ", phoneId: " + getPhoneId() + " isCdmaWithoutLteCard: " + isCdmaWithoutLteCard() + " mNewVoiceTech: " + this.mNewVoiceTech);
        if (this.mNewVoiceTech != -1) {
            if (!(isPhoneTypeCdmaLte() && isCdmaWithoutLteCard()) && (!isPhoneTypeCdma() || isCdmaWithoutLteCard())) {
                return;
            }
            updatePhoneObject(this.mNewVoiceTech);
        }
    }

    protected void phoneObjectUpdater(int i) {
        this.mNewVoiceTech = i;
        super.phoneObjectUpdater(i);
    }

    protected void processIccRecordEvents(int i) {
        if (i != 1) {
            super.processIccRecordEvents(i);
        } else {
            Rlog.d(LOG_TAG, "processIccRecordEvents");
            notifyCallForwardingIndicator();
        }
    }

    public boolean queryCFUAgainAfterSet() {
        MtkSuppServConf suppServConf = MtkSuppServManager.getSuppServConf(getPhoneId());
        if (suppServConf == null) {
            Rlog.d(LOG_TAG, "queryCFUAgainAfterSet, ssConf is null, return false");
            return false;
        }
        boolean z = suppServConf.isQueryCFUAgainAfterSet(getOperatorNumeric());
        Rlog.d(LOG_TAG, "queryCFUAgainAfterSet: " + z);
        return z;
    }

    public void queryFemtoCellSystemSelectionMode(Message message) {
        Rlog.d(LOG_TAG, "queryFemtoCellSystemSelectionMode()");
        this.mMtkCi.queryFemtoCellSystemSelectionMode(message);
    }

    public void queryPhbStorageInfo(int i, Message message) {
        if (CsimPhbUtil.hasModemPhbEnhanceCapability(getIccFileHandler())) {
            this.mMtkCi.queryPhbStorageInfo(i, message);
        } else {
            CsimPhbUtil.getPhbRecordInfo(message);
        }
    }

    protected void reapplyUiccAppsEnablementIfNeeded(int i) {
        super.reapplyUiccAppsEnablementIfNeeded(i);
        UiccSlot uiccSlotForPhone = this.mUiccController.getUiccSlotForPhone(this.mPhoneId);
        if (uiccSlotForPhone == null || uiccSlotForPhone.getCardState() != IccCardStatus.CardState.CARDSTATE_PRESENT || this.mUiccApplicationsEnabled == null) {
            if (uiccSlotForPhone == null) {
                loge("reapplyUiccAppsEnablementIfNeeded(), slot is null ,mUiccApplicationsEnabled = " + this.mUiccApplicationsEnabled);
                return;
            }
            loge("reapplyUiccAppsEnablementIfNeeded(), CardState=" + uiccSlotForPhone.getCardState() + " ,mUiccApplicationsEnabled = " + this.mUiccApplicationsEnabled);
            return;
        }
        String iccId = uiccSlotForPhone.getIccId();
        if (iccId == null) {
            loge("reapplyUiccAppsEnablementIfNeeded(), iccid is null");
            return;
        }
        SubscriptionInfo subInfoForIccId = SubscriptionController.getInstance().getSubInfoForIccId(IccUtils.stripTrailingFs(iccId));
        logd("reapplyUiccAppsEnablementIfNeeded(), expectedValue =" + (subInfoForIccId == null ? true : subInfoForIccId.areUiccApplicationsEnabled()) + " ,mUiccApplicationsEnabled =" + this.mUiccApplicationsEnabled + " ,iccId=" + SubscriptionInfo.givePrintableIccid(iccId));
    }

    public void registerForCipherIndication(Handler handler, int i, Object obj) {
        this.mCipherIndicationRegistrants.addUnique(handler, i, obj);
    }

    public void registerForCrssSuppServiceNotification(Handler handler, int i, Object obj) {
        this.mCallRelatedSuppSvcRegistrants.addUnique(handler, i, obj);
        AsyncResult asyncResult = this.mCachedCrssn;
        if (asyncResult != null) {
            this.mCallRelatedSuppSvcRegistrants.notifyRegistrants(asyncResult);
            this.mCachedCrssn = null;
        }
    }

    public void registerForNetworkInfo(Handler handler, int i, Object obj) {
        this.mMtkCi.registerForNetworkInfo(handler, i, obj);
    }

    public void registerForOemIndication(Handler handler, int i, Object obj) {
        this.mOemIndRegistrants.addUnique(handler, i, obj);
    }

    public void registerForSuppServiceNotification(Handler handler, int i, Object obj) {
        this.mSsnRegistrants.addUnique(handler, i, obj);
        if (this.mCachedSsn != null) {
            this.mSsnRegistrants.notifyRegistrants(this.mCachedSsn);
            this.mCachedSsn = null;
        }
    }

    public void registerImsEventForConcurrency() {
        logd("registerImsEventForConcurrency");
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        if (mtkDcHelper != null) {
            logd("notify dcHelper.registerImsEvents");
            mtkDcHelper.registerImsEvents(getPhoneId());
        }
    }

    public void resetAllPhoneEccRadioOnStatus() {
        for (MtkGsmCdmaPhone mtkGsmCdmaPhone : PhoneFactory.getPhones()) {
            if (mtkGsmCdmaPhone != null && (mtkGsmCdmaPhone instanceof MtkGsmCdmaPhone)) {
                mtkGsmCdmaPhone.setEccRadioOnStatus(false, false);
            }
        }
    }

    public void saveTimeSlot(long[] jArr) {
        String str = CFU_TIME_SLOT + this.mPhoneId;
        String str2 = "";
        if (jArr != null && jArr.length == 2) {
            str2 = Long.toString(jArr[0]) + "," + Long.toString(jArr[1]);
        }
        SystemProperties.set(str, str2);
        Rlog.d(LOG_TAG, "timeSlotString = " + str2);
    }

    public void selectFemtoCell(FemtoCellInfo femtoCellInfo, Message message) {
        Rlog.d(LOG_TAG, "selectFemtoCell(): " + femtoCellInfo);
        this.mMtkCi.selectFemtoCell(femtoCellInfo, message);
    }

    public void selectNetworkManually(OperatorInfo operatorInfo, boolean z, Message message) {
        Phone.NetworkSelectMessage networkSelectMessage = new Phone.NetworkSelectMessage();
        networkSelectMessage.message = message;
        networkSelectMessage.operatorNumeric = operatorInfo.getOperatorNumeric();
        networkSelectMessage.operatorAlphaLong = operatorInfo.getOperatorAlphaLong();
        networkSelectMessage.operatorAlphaShort = operatorInfo.getOperatorAlphaShort();
        Message messageObtainMessage = obtainMessage(16, networkSelectMessage);
        if (isPhoneTypeGsm()) {
            Rlog.d(LOG_TAG, "MTK GSMPhone selectNetworkManuallyWithAct:" + operatorInfo);
            if (operatorInfo.getOperatorAlphaLong() != null && operatorInfo.getOperatorAlphaLong().endsWith(GSM_INDICATOR)) {
                this.mMtkCi.setNetworkSelectionModeManualWithAct(operatorInfo.getOperatorNumeric(), "0", 0, messageObtainMessage);
            } else if (operatorInfo.getOperatorAlphaLong() != null && operatorInfo.getOperatorAlphaLong().endsWith(UTRAN_INDICATOR)) {
                this.mMtkCi.setNetworkSelectionModeManualWithAct(operatorInfo.getOperatorNumeric(), ACT_TYPE_UTRAN, 0, messageObtainMessage);
            } else if (operatorInfo.getOperatorAlphaLong() != null && operatorInfo.getOperatorAlphaLong().endsWith(LTE_INDICATOR)) {
                this.mMtkCi.setNetworkSelectionModeManualWithAct(operatorInfo.getOperatorNumeric(), "7", 0, messageObtainMessage);
            } else if (operatorInfo.getOperatorAlphaLong() == null || !operatorInfo.getOperatorAlphaLong().endsWith(NR_INDICATOR)) {
                this.mCi.setNetworkSelectionModeManual(operatorInfo.getOperatorNumeric(), operatorInfo.getRan(), messageObtainMessage);
            } else {
                this.mMtkCi.setNetworkSelectionModeManualWithAct(operatorInfo.getOperatorNumeric(), ACT_TYPE_NR, 0, messageObtainMessage);
            }
        } else {
            this.mCi.setNetworkSelectionModeManual(operatorInfo.getOperatorNumeric(), operatorInfo.getRan(), messageObtainMessage);
        }
        if (z) {
            updateSavedNetworkOperator(networkSelectMessage);
        } else {
            clearSavedNetworkSelection();
        }
        updateManualNetworkSelection(networkSelectMessage);
    }

    void sendErrorResponse(Message message, CommandException.Error error) {
        Rlog.d(LOG_TAG, "sendErrorResponse" + error);
        if (message != null) {
            AsyncResult.forMessage(message, (Object) null, new CommandException(error));
            message.sendToTarget();
        }
    }

    public void sendExitEmergencyCallbackModeMessage() {
        Rlog.d(LOG_TAG, "sendExitEmergencyCallbackModeMessage()");
        Message messageObtainMessage = obtainMessage(26);
        AsyncResult.forMessage(messageObtainMessage);
        sendMessage(messageObtainMessage);
    }

    public void sendSubscriptionSettings(boolean z) {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker != null) {
            mtkServiceStateTracker.setDeviceRatMode(this.mPhoneId);
        }
        boolean z2 = !this.mContext.getResources().getBoolean(R.bool.config_cellBroadcastAppLinks);
        if (z && z2) {
            restoreSavedNetworkSelection(null);
        }
    }

    public void setApcMode(int i, boolean z, int i2) {
        if (isPhoneTypeGsm()) {
            this.mMtkCi.setApcMode(i, z, i2, null);
        } else {
            Rlog.d(LOG_TAG, "setApcMode: not possible in CDMA");
        }
    }

    public void setCallBarring(String str, boolean z, String str2, Message message) {
        setCallBarring(str, z, str2, message, 1);
    }

    public void setCallBarring(String str, boolean z, String str2, Message message, int i) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.setCallBarring(str, z, str2, i, message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, setCallBarring");
            setCallBarringInternal(str, z, str2, message, i);
        }
    }

    public void setCallBarringInternal(String str, boolean z, String str2, Message message, int i) {
        if (!isPhoneTypeGsm() && !isGsmSsPrefer()) {
            loge("method setFacilityLock is NOT supported in CDMA!");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        ImsPhone imsPhone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "setCallBarring enter, facility:" + str + ", serviceClass:" + i + ", password:" + str2 + ", lockState:" + z);
            Message messageObtainMessage = obtainMessage(EVENT_SET_CALL_BARRING_COMPLETE, message);
            if (imsPhone == null || !(imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled())) {
                this.mCi.setFacilityLock(str, z, str2, i, messageObtainMessage);
                return;
            } else {
                imsPhone.setCallBarring(str, z, str2, messageObtainMessage, i);
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && imsPhone != null && ((imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled()) && (imsPhone.isVolteEnabled() || (imsPhone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            if (isOpNotSupportOCB(str)) {
                sendErrorResponse(message, CommandException.Error.REQUEST_NOT_SUPPORTED);
                return;
            }
            MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(9, message);
            mtkSuppSrvRequestObtain.mParcel.writeString(str);
            mtkSuppSrvRequestObtain.mParcel.writeInt(z ? 1 : 0);
            mtkSuppSrvRequestObtain.mParcel.writeString(str2);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i);
            imsPhone.setCallBarring(str, z, str2, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain), i);
            return;
        }
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.setFacilityLock(str, z, str2, i, message);
            return;
        }
        if (getCsFallbackStatus() == 1) {
            setCsFallbackStatus(0);
        }
        if (isNotSupportUtToCS()) {
            sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
            return;
        }
        if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        CommandException commandExceptionCheckUiccApplicationForCB = checkUiccApplicationForCB();
        if (commandExceptionCheckUiccApplicationForCB == null || message == null) {
            this.mCi.setFacilityLockForApp(str, z, str2, i, ((UiccCardApplication) this.mUiccApplication.get()).getAid(), message);
        } else {
            sendErrorResponse(message, commandExceptionCheckUiccApplicationForCB.getCommandError());
        }
    }

    public void setCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr, Message message) {
        if (!isPhoneTypeGsm()) {
            loge("method setCallForwardInTimeSlot is NOT supported in CDMA!");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        ImsPhone imsPhone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "setCallForwardInTimeSlot enter, CFReason:" + i2 + ", CFAction:" + i + ", dialingNumber:" + str + ", timerSeconds:" + i3);
            if (imsPhone != null && (imsPhone.getServiceState().getState() == 0 || imsPhone.isUtEnabled())) {
                ((MtkImsPhone) imsPhone).setCallForwardInTimeSlot(i, i2, str, i3, jArr, message);
                return;
            } else {
                if (isValidCommandInterfaceCFAction(i) && i2 == 0) {
                    this.mMtkCi.setCallForwardInTimeSlot(i, i2, 1, str, i3, jArr, obtainMessage(110, isCfEnable(i) ? 1 : 0, 0, new CfuEx(str, jArr, message)));
                    return;
                }
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && isOp(MtkOperatorUtils.OPID.OP01) && imsPhone != null && imsPhone.getServiceState().getState() == 0 && (imsPhone.isVolteEnabled() || (imsPhone.isWifiCallingEnabled() && isWFCUtSupport()))) {
            MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(17, message);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i2);
            mtkSuppSrvRequestObtain.mParcel.writeString(str);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i3);
            ((MtkImsPhone) imsPhone).setCallForwardInTimeSlot(i, i2, str, i3, jArr, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain));
            return;
        }
        if (!isValidCommandInterfaceCFAction(i) || i2 != 0) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        Message messageObtainMessage = obtainMessage(110, isCfEnable(i) ? 1 : 0, 0, new CfuEx(str, jArr, message));
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.setCallForwardInTimeSlot(i, i2, 1, str, i3, jArr, messageObtainMessage);
        } else {
            sendErrorResponse(message, CommandException.Error.REQUEST_NOT_SUPPORTED);
        }
    }

    public void setCallForwardingOption(int i, int i2, String str, int i3, Message message) {
        setCallForwardingOptionForServiceClass(i, i2, str, i3, 1, message);
    }

    public void setCallForwardingOptionForServiceClass(int i, int i2, String str, int i3, int i4, Message message) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.setCallForwardingOptionForServiceClass(i, i2, str, i3, i4, message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, setCallForwardingOptionForServiceClass");
            setCallForwardingOptionInternal(i, i2, str, i3, i4, message);
        }
    }

    public void setCallForwardingOptionInternal(int i, int i2, String str, int i3, int i4, Message message) {
        Message messageObtainMessage;
        Message messageObtainMessage2;
        if (!isPhoneTypeGsm() && !isImsUtEnabledOverCdma()) {
            loge("setCallForwardingOption: not possible in CDMA");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        MtkImsPhone mtkImsPhone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "setCallForwardingOptionForServiceClass enter, CFAction:" + i + ", CFReason:" + i2 + ", dialingNumber:" + pii(str) + ", timerSeconds:" + i3 + ", serviceClass:" + i4);
            if (mtkImsPhone != null && (mtkImsPhone.getServiceState().getState() == 0 || mtkImsPhone.isUtEnabled())) {
                mtkImsPhone.setCallForwardingOption(i, i2, str, i4, i3, message);
                return;
            }
            if (isValidCommandInterfaceCFAction(i) && isValidCommandInterfaceCFReason(i2)) {
                if (i2 == 0) {
                    messageObtainMessage2 = obtainMessage(12, isCfEnable(i) ? 1 : 0, 0, new Cfu(str, message, i4));
                } else {
                    messageObtainMessage2 = message;
                }
                this.mCi.setCallForward(i, i2, i4, str, i3, messageObtainMessage2);
                return;
            }
            return;
        }
        if (getCsFallbackStatus() == 0 && mtkImsPhone != null && ((mtkImsPhone.getServiceState().getState() == 0 || mtkImsPhone.isUtEnabled()) && (mtkImsPhone.isVolteEnabled() || (mtkImsPhone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(11, message);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i2);
            mtkSuppSrvRequestObtain.mParcel.writeString(str);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i3);
            mtkSuppSrvRequestObtain.mParcel.writeInt(i4);
            mtkImsPhone.setCallForwardingOption(i, i2, str, i4, i3, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain));
            return;
        }
        if (isValidCommandInterfaceCFAction(i) && isValidCommandInterfaceCFReason(i2)) {
            if (i2 == 0) {
                messageObtainMessage = obtainMessage(12, isCfEnable(i) ? 1 : 0, 0, new Cfu(str, message, i4));
            } else {
                messageObtainMessage = message;
            }
            if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
                if (isInCSCall() && getPhoneType() == 2) {
                    sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                    return;
                } else {
                    this.mMtkSSReqDecisionMaker.setCallForward(i, i2, i4, str, i3, messageObtainMessage);
                    return;
                }
            }
            if (getCsFallbackStatus() == 1) {
                setCsFallbackStatus(0);
            }
            if (isNotSupportUtToCS()) {
                sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
            } else if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            } else {
                this.mCi.setCallForward(i, i2, i4, str, i3, messageObtainMessage);
            }
        }
    }

    public void setCallSubAddress(boolean z, Message message) {
        this.mMtkCi.setCallSubAddress(z, message);
    }

    public void setCallWaiting(boolean z, Message message) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.setCallWaiting(z, message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, setCallWaiting");
            setCallWaitingInternal(z, message);
        }
    }

    public void setCallWaitingInternal(boolean z, Message message) {
        if (!isPhoneTypeGsm() && !isImsUtEnabledOverCdma()) {
            loge("method setCallWaiting is NOT supported in CDMA!");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        Phone phone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "setCallWaiting enter, enable:" + z);
            if (phone != null && (phone.getServiceState().getState() == 0 || phone.isUtEnabled())) {
                phone.setCallWaiting(z, message);
                return;
            }
            PersistableBundle configForSubId = ((CarrierConfigManager) getContext().getSystemService("carrier_config")).getConfigForSubId(getSubId());
            int i = configForSubId != null ? configForSubId.getInt("call_waiting_service_class_int", 1) : 1;
            Rlog.d(LOG_TAG, "setCallWaiting serviceClass = " + i);
            this.mCi.setCallWaiting(z, i, message);
            return;
        }
        if (!isOpNwCW()) {
            if (this.mTbcwMode == 0) {
                initTbcwMode();
            }
            Rlog.d(LOG_TAG, "setCallWaiting(): mTbcwMode = " + this.mTbcwMode + ", onComplete = " + message);
            int i2 = this.mTbcwMode;
            if (i2 == 1) {
                setTerminalBasedCallWaiting(z, message);
                return;
            }
            if (i2 == 2) {
                if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                    sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                    return;
                } else if (isNotSupportUtToCS()) {
                    sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
                    return;
                } else {
                    this.mCi.setCallWaiting(z, 1, message);
                    return;
                }
            }
            if (i2 == 3) {
                if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                    sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                    return;
                } else {
                    this.mCi.setCallWaiting(z, 1, obtainMessage(EVENT_SET_CALL_WAITING_DONE, z ? 1 : 0, 0, message));
                    return;
                }
            }
        }
        if (getCsFallbackStatus() == 0 && phone != null && ((phone.getServiceState().getState() == 0 || phone.isUtEnabled()) && (phone.isVolteEnabled() || (phone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            if (isOpNwCW()) {
                MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(13, message);
                mtkSuppSrvRequestObtain.mParcel.writeInt(z ? 1 : 0);
                phone.setCallWaiting(z, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain));
                return;
            } else {
                Rlog.d(LOG_TAG, "isOpTbCW(), setTerminalBasedCallWaiting(): IMS in service");
                setTbcwMode(1);
                setTbcwToEnabledOnIfDisabled();
                setTerminalBasedCallWaiting(z, message);
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            Rlog.d(LOG_TAG, "mMtkSSReqDecisionMaker.setCallWaiting");
            this.mMtkSSReqDecisionMaker.setCallWaiting(z, 1, message);
            return;
        }
        if (getCsFallbackStatus() == 1) {
            setCsFallbackStatus(0);
        }
        if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
        } else if (isNotSupportUtToCS()) {
            sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
        } else {
            this.mCi.setCallWaiting(z, 1, message);
        }
    }

    public void setCsFallbackStatus(int i) {
        Rlog.d(LOG_TAG, "setCsFallbackStatus to " + i);
        this.mCSFallbackMode = i;
    }

    public void setDisable2G(boolean z, Message message) {
        Rlog.d(LOG_TAG, "setDisable2G " + z);
        this.mMtkCi.setDisable2G(z, message);
    }

    public void setEccRadioOnStatus(boolean z, boolean z2) {
        if (this.mEccRadioOnStatus != z) {
            StringBuilder sb = new StringBuilder();
            sb.append("ecc radio on status changed (");
            sb.append(z ? "t" : "f");
            sb.append(",");
            sb.append(z2 ? "t" : "f");
            sb.append(")");
            logd(sb.toString());
            this.mEccRadioOnStatus = z;
            if (z) {
                this.mIsEccSelectedPhone = z2;
            } else {
                this.mIsEccSelectedPhone = false;
            }
        }
    }

    public void setFemtoCellSystemSelectionMode(int i, Message message) {
        Rlog.d(LOG_TAG, "setFemtoCellSystemSelectionMode(), mode=" + i);
        this.mMtkCi.setFemtoCellSystemSelectionMode(i, message);
    }

    public void setNetworkSelectionModeSemiAutomatic(OperatorInfo operatorInfo, Message message) {
        Phone.NetworkSelectMessage networkSelectMessage = new Phone.NetworkSelectMessage();
        networkSelectMessage.message = message;
        networkSelectMessage.operatorNumeric = "";
        networkSelectMessage.operatorAlphaLong = "";
        networkSelectMessage.operatorAlphaShort = "";
        Message messageObtainMessage = obtainMessage(17, networkSelectMessage);
        Rlog.d(LOG_TAG, "MTK GSMPhone setNetworkSelectionModeSemiAutomatic:" + operatorInfo);
        String str = "0";
        if (operatorInfo.getOperatorAlphaLong() != null && operatorInfo.getOperatorAlphaLong().endsWith(UTRAN_INDICATOR)) {
            str = ACT_TYPE_UTRAN;
        } else if (operatorInfo.getOperatorAlphaLong() != null && operatorInfo.getOperatorAlphaLong().endsWith(LTE_INDICATOR)) {
            str = "7";
        }
        this.mMtkCi.setNetworkSelectionModeManualWithAct(operatorInfo.getOperatorNumeric(), str, 1, messageObtainMessage);
    }

    public void setOutgoingCallerIdDisplay(int i, Message message) {
        MtkSuppServQueueHelper suppServQueueHelper = MtkSuppServManager.getSuppServQueueHelper();
        if (suppServQueueHelper != null) {
            suppServQueueHelper.setOutgoingCallerIdDisplay(i, message, getPhoneId());
        } else {
            Rlog.d(LOG_TAG, "ssQueueHelper not exist, setOutgoingCallerIdDisplay");
            setOutgoingCallerIdDisplayInternal(i, message);
        }
    }

    public void setOutgoingCallerIdDisplayInternal(int i, Message message) {
        if (!isPhoneTypeGsm() && !isGsmSsPrefer()) {
            loge("setOutgoingCallerIdDisplay: not possible in CDMA");
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
            return;
        }
        Phone phone = this.mImsPhone;
        if (supportMdAutoSetupIms()) {
            Rlog.d(LOG_TAG, "setOutgoingCallerIdDisplay enter, CLIRmode:" + i);
            Message messageObtainMessage = obtainMessage(18, i, 0, message);
            if (phone == null || phone.getServiceState().getState() != 0) {
                this.mCi.setCLIR(i, messageObtainMessage);
                return;
            } else {
                phone.setOutgoingCallerIdDisplay(i, messageObtainMessage);
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && phone != null && ((phone.getServiceState().getState() == 0 || phone.isUtEnabled()) && (phone.isVolteEnabled() || (phone.isWifiCallingEnabled() && isWFCUtSupport())))) {
            if (isOpNotSupportCallIdentity()) {
                sendErrorResponse(message, CommandException.Error.REQUEST_NOT_SUPPORTED);
                return;
            }
            if (!isOpTbClir()) {
                MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(3, message);
                mtkSuppSrvRequestObtain.mParcel.writeInt(i);
                phone.setOutgoingCallerIdDisplay(i, obtainMessage(EVENT_IMS_UT_DONE, mtkSuppSrvRequestObtain));
                return;
            } else if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                return;
            } else {
                this.mCi.setCLIR(i, obtainMessage(18, i, 0, message));
                return;
            }
        }
        if (getCsFallbackStatus() == 0 && isGsmUtSupport()) {
            if (!isOpTbClir()) {
                this.mMtkSSReqDecisionMaker.setCLIR(i, obtainMessage(18, i, 0, message));
                return;
            } else if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
                sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
                return;
            } else {
                this.mCi.setCLIR(i, obtainMessage(18, i, 0, message));
                return;
            }
        }
        if (getCsFallbackStatus() == 1) {
            setCsFallbackStatus(0);
        }
        if (isNotSupportUtToCS()) {
            sendErrorResponse(message, CommandException.Error.OPERATION_NOT_ALLOWED);
        } else if ((isDuringVoLteCall() || isDuringImsEccCall()) && message != null) {
            sendErrorResponse(message, CommandException.Error.GENERIC_FAILURE);
        } else {
            this.mCi.setCLIR(i, obtainMessage(18, i, 0, message));
        }
    }

    public void setPolEntry(NetworkInfoWithAcT networkInfoWithAcT, Message message) {
        this.mMtkCi.setPOLEntry(networkInfoWithAcT.getPriority(), networkInfoWithAcT.getOperatorNumeric(), networkInfoWithAcT.getAccessTechnology(), message);
    }

    public void setPreferredNetworkType(int i, Message message) {
        String subscriptionProperty;
        if (i == 102) {
            this.mCi.setPreferredNetworkType(i, message);
            return;
        }
        int radioAccessFamily = getRadioAccessFamily();
        int rafFromNetworkType = MtkRadioAccessFamily.getRafFromNetworkType(i);
        long j = -1;
        if (SubscriptionController.getInstance() != null && (subscriptionProperty = SubscriptionController.getInstance().getSubscriptionProperty(getSubId(), "allowed_network_types")) != null) {
            try {
                j = Long.parseLong(subscriptionProperty);
            } catch (NumberFormatException e) {
                Rlog.d(LOG_TAG, "allowedNetworkTypes NumberFormat exception");
            }
        }
        if (radioAccessFamily == 0 || rafFromNetworkType == 0) {
            Rlog.d(LOG_TAG, "setPreferredNetworkType: Abort, unknown RAF: " + radioAccessFamily + " " + rafFromNetworkType);
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
                message.sendToTarget();
                return;
            }
            return;
        }
        int networkTypeFromRaf = MtkRadioAccessFamily.getNetworkTypeFromRaf((int) ((((long) (rafFromNetworkType & radioAccessFamily)) & j) > 0 ? ((long) (rafFromNetworkType & radioAccessFamily)) & j : radioAccessFamily));
        Rlog.d(LOG_TAG, "setPreferredNetworkType: networkType = " + i + " modemRaf = " + radioAccessFamily + " rafFromType = " + rafFromNetworkType + " allowedNetworkTypes = " + j + " filteredType = " + networkTypeFromRaf);
        this.mCi.setPreferredNetworkType(networkTypeFromRaf, message);
    }

    protected void setPreferredNetworkTypeIfSimLoaded() {
        MtkServiceStateTracker mtkServiceStateTracker;
        if (!SubscriptionManager.isValidSubscriptionId(getSubId()) || (mtkServiceStateTracker = this.mMtkSST) == null) {
            return;
        }
        mtkServiceStateTracker.setDeviceRatMode(this.mPhoneId);
    }

    public void setRoamingEnable(int[] iArr, Message message) {
        Rlog.d(LOG_TAG, "set roaming enable");
        iArr[0] = this.mPhoneId;
        this.mMtkCi.setRoamingEnable(iArr, message);
    }

    public void setRxTestConfig(int i, Message message) {
        Rlog.d(LOG_TAG, "set Rx Test Config");
        this.mMtkCi.setRxTestConfig(i, message);
    }

    public void setSSPropertyThroughHidl(int i, String str, String str2) {
        Rlog.d(LOG_TAG, "setSSPropertyThroughHidl, phoneId = " + i + ", name = " + str + ", value = " + str2);
        String str3 = "";
        String str4 = SystemProperties.get(str);
        if (str2 == null) {
            str2 = "";
        }
        String[] strArrSplit = str4 != null ? str4.split(",") : null;
        if (!SubscriptionManager.isValidPhoneId(i)) {
            Rlog.d(LOG_TAG, "setSSPropertyThroughHidl: invalid phoneId=" + i + " property=" + str + " value: " + str2 + " prop=" + str4);
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
        if (str6.length() <= 91) {
            setSuppServProperty(str, str6);
            return;
        }
        Rlog.d(LOG_TAG, "setSSPropertyThroughHidl: property too long phoneId=" + i + " property=" + str + " value: " + str2 + " propVal=" + str6);
    }

    public void setServiceClass(int i) {
        Rlog.d(LOG_TAG, "setServiceClass: " + i);
        SystemProperties.set(SS_SERVICE_CLASS_PROP, String.valueOf(i));
    }

    public void setSuppServProperty(String str, String str2) {
        Rlog.d(LOG_TAG, "setSuppServProperty, name = " + str + ", value = " + str2);
        this.mCallbackLatch = new CountDownLatch(1);
        this.mMtkCi.setSuppServProperty(str, str2, obtainMessage(1004));
        if (isCallbackDone()) {
            return;
        }
        Rlog.e(LOG_TAG, "waitForCallback: callback is not done!");
    }

    public void setTbcwMode(int i) {
        Rlog.d(LOG_TAG, "Set tbcwmode: " + i + ", phoneId: " + getPhoneId());
        this.mTbcwMode = i;
    }

    public void setTbcwToEnabledOnIfDisabled() {
        String telephonyProperty = TelephonyManager.getTelephonyProperty(getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
        Rlog.d(LOG_TAG, "setTbcwToEnabledOnIfDisabled tbcwmode: " + telephonyProperty + ", status: " + telephonyProperty.equals(""));
        if ("disabled_tbcw".equals(telephonyProperty) || telephonyProperty.equals("")) {
            setSSPropertyThroughHidl(getPhoneId(), "persist.vendor.radio.terminal-based.cw", "enabled_tbcw_on");
        }
    }

    public void setTerminalBasedCallWaiting(final boolean z, final Message message) {
        this.mExecutorService.submit(new Runnable() { // from class: com.mediatek.internal.telephony.MtkGsmCdmaPhone.5
            @Override // java.lang.Runnable
            public void run() {
                String telephonyProperty = TelephonyManager.getTelephonyProperty(MtkGsmCdmaPhone.this.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
                Rlog.d(MtkGsmCdmaPhone.LOG_TAG, "setTerminalBasedCallWaiting(): tbcwMode = " + telephonyProperty + ", enable = " + z);
                if ("enabled_tbcw_on".equals(telephonyProperty)) {
                    if (!z) {
                        MtkGsmCdmaPhone mtkGsmCdmaPhone = MtkGsmCdmaPhone.this;
                        mtkGsmCdmaPhone.setSSPropertyThroughHidl(mtkGsmCdmaPhone.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "enabled_tbcw_off");
                    }
                    if (message != null) {
                        try {
                            Thread.sleep(1000L);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        AsyncResult.forMessage(message, (Object) null, (Throwable) null);
                        message.sendToTarget();
                        return;
                    }
                    return;
                }
                if (!"enabled_tbcw_off".equals(telephonyProperty)) {
                    Rlog.e(MtkGsmCdmaPhone.LOG_TAG, "setTerminalBasedCallWaiting(): ERROR: tbcwMode = " + telephonyProperty);
                    return;
                }
                if (z) {
                    MtkGsmCdmaPhone mtkGsmCdmaPhone2 = MtkGsmCdmaPhone.this;
                    mtkGsmCdmaPhone2.setSSPropertyThroughHidl(mtkGsmCdmaPhone2.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "enabled_tbcw_on");
                }
                if (message != null) {
                    try {
                        Thread.sleep(1000L);
                    } catch (InterruptedException e2) {
                        e2.printStackTrace();
                    }
                    AsyncResult.forMessage(message, (Object) null, (Throwable) null);
                    message.sendToTarget();
                }
            }
        });
    }

    public void setVoiceCallForwardingFlag(int i, boolean z, String str) {
        super.setVoiceCallForwardingFlag(i, z, str);
        if (getPhoneType() == 2 && isGsmSsPrefer() && this.mUiccController != null) {
            IccRecords iccRecords = this.mUiccController.getIccRecords(this.mPhoneId, 1);
            if (iccRecords != null) {
                iccRecords.setVoiceCallForwardingFlag(i, z, str);
            }
            notifyCallForwardingIndicator();
        }
    }

    public boolean shouldProcessSelfActivation() {
        int selfActivateState = getSelfActivationInstance().getSelfActivateState();
        Rlog.d(LOG_TAG, "shouldProcessSelfActivation() state: " + selfActivateState);
        return selfActivateState == 2;
    }

    public void switchNrMap(boolean z) {
        MtkServiceStateTracker mtkServiceStateTracker = this.mMtkSST;
        if (mtkServiceStateTracker == null || mtkServiceStateTracker.nm == null) {
            loge("switchNrMap mMtkSST == null && mMtkSST.nm == null");
        } else {
            this.mMtkSST.nm.swtichNrMap(z);
        }
    }

    protected void switchPhoneType(int i) {
        synchronized (this.mLock) {
            super.switchPhoneType(i);
        }
        if (this.mIccRecords.get() == null || i != 1) {
            return;
        }
        logd("Re-register registerForIccRecordEvents due to phonetype change to GSM.");
        unregisterForIccRecordEvents();
        registerForIccRecordEvents();
    }

    protected void switchVoiceRadioTech(int i) {
        StringBuilder sb = new StringBuilder();
        sb.append("Switching Voice Phone : ");
        sb.append(getPhoneName());
        sb.append(" >>> ");
        sb.append(ServiceState.isGsm(i) ? "GSM" : "CDMA");
        logd(sb.toString());
        if (ServiceState.isCdma(i) && isCdmaWithoutLteCard()) {
            switchPhoneType(2);
        } else {
            super.switchVoiceRadioTech(i);
        }
    }

    public void triggerModeSwitchByEcc(int i, Message message) {
        this.mMtkCi.triggerModeSwitchByEcc(i, message);
    }

    public void unregisterForCipherIndication(Handler handler) {
        this.mCipherIndicationRegistrants.remove(handler);
    }

    public void unregisterForCrssSuppServiceNotification(Handler handler) {
        this.mCallRelatedSuppSvcRegistrants.remove(handler);
        this.mCachedCrssn = null;
    }

    public void unregisterForNetworkInfo(Handler handler) {
        this.mMtkCi.unregisterForNetworkInfo(handler);
    }

    public void unregisterForOemIndication(Handler handler) {
        this.mOemIndRegistrants.remove(handler);
    }

    public void unregisterForSuppServiceNotification(Handler handler) {
        this.mSsnRegistrants.remove(handler);
        this.mCachedSsn = null;
    }

    public boolean useImsForPCOChanged() {
        int pCO520State = getSelfActivationInstance().getPCO520State();
        Rlog.d(LOG_TAG, "pcoState() state: " + pCO520State);
        return pCO520State == 1;
    }
}

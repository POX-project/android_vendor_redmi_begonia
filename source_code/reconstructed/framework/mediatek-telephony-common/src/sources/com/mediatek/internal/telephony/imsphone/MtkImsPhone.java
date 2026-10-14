package com.mediatek.internal.telephony.imsphone;

import android.app.NotificationManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.LinkProperties;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.ResultReceiver;
import android.os.SystemProperties;
import android.telephony.CallQuality;
import android.telephony.CarrierConfigManager;
import android.telephony.NetworkScanRequest;
import android.telephony.PhoneNumberUtils;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.ims.ImsCallForwardInfo;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.ImsSsInfo;
import com.android.ims.ImsException;
import com.android.ims.ImsManager;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.IccCard;
import com.android.internal.telephony.IccPhoneBookInterfaceManager;
import com.android.internal.telephony.OperatorInfo;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.PhoneInternalInterface;
import com.android.internal.telephony.PhoneNotifier;
import com.android.internal.telephony.imsphone.ImsPhone;
import com.android.internal.telephony.imsphone.ImsPhoneCallTrackerInjector;
import com.android.internal.telephony.imsphone.ImsPhoneMmiCode;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.ims.MtkImsCallForwardInfo;
import com.mediatek.internal.telephony.MtkCallForwardInfo;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkRIL;
import com.mediatek.internal.telephony.MtkSuppSrvRequest;
import java.util.Arrays;
import java.util.Calendar;
import java.util.List;
import java.util.TimeZone;
import mediatek.telephony.MtkServiceState;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsPhone extends ImsPhone {
    private static final String CFU_TIME_SLOT = "persist.vendor.radio.cfu.timeslot.";
    public static final int EVENT_GET_CALL_FORWARD_TIME_SLOT_DONE = 109;
    public static final int EVENT_SET_CALL_FORWARD_TIME_SLOT_DONE = 110;
    public static final String UT_BUNDLE_KEY_CLIR = "queryClir";
    private String LOG_TAG;
    private String mDialString;
    private boolean mIsWfcModeHomeForDomRoaming;
    protected BroadcastReceiver mReceiver;

    private static class Cf {
        public final boolean mIsCfu;
        public final Message mOnComplete;
        public final int mServiceClass;
        public final String mSetCfNumber;

        public Cf(String str, boolean z, Message message, int i) {
            this.mSetCfNumber = str;
            this.mIsCfu = z;
            this.mOnComplete = message;
            this.mServiceClass = i;
        }
    }

    private static class CfEx {
        final boolean mIsCfu;
        final Message mOnComplete;
        final String mSetCfNumber;
        final long[] mSetTimeSlot;

        CfEx(String str, long[] jArr, boolean z, Message message) {
            this.mSetCfNumber = str;
            this.mSetTimeSlot = jArr;
            this.mIsCfu = z;
            this.mOnComplete = message;
        }
    }

    public MtkImsPhone(Context context, PhoneNotifier phoneNotifier, Phone phone) {
        this(context, phoneNotifier, phone, false);
    }

    public MtkImsPhone(Context context, PhoneNotifier phoneNotifier, Phone phone, boolean z) {
        super(context, phoneNotifier, phone, z);
        this.LOG_TAG = "MtkImsPhone";
        this.mSS = new MtkServiceState();
        this.mReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.imsphone.MtkImsPhone.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                if (intent.getAction().equals("android.telephony.action.CARRIER_CONFIG_CHANGED") && intent.getIntExtra("subscription", -1) == MtkImsPhone.this.getSubId()) {
                    MtkImsPhone.this.logd("Receive carrierConfig changed: " + MtkImsPhone.this.mPhoneId);
                    MtkImsPhone.this.cacheCarrierConfiguration();
                }
            }
        };
        logd("Start to create MtkImsPhone.");
        this.LOG_TAG += "[" + phone.getPhoneId() + "]";
        setPhoneName("MtkImsPhone");
        cacheCarrierConfiguration();
        registerForListenCarrierConfigChanged();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void cacheCarrierConfiguration() {
        int subId = getSubId();
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        if (carrierConfigManager == null) {
            logd("cacheCarrierConfiguration failed: config mgr access failed");
            return;
        }
        PersistableBundle configForSubId = carrierConfigManager.getConfigForSubId(subId);
        if (configForSubId == null) {
            logd("cacheCarrierConfiguration failed: carrier config access failed");
            return;
        }
        this.mIsWfcModeHomeForDomRoaming = configForSubId.getBoolean("mtk_carrier_wfc_mode_domestic_roaming_to_home");
        logd("cacheCarrierConfiguration,  WfcModeHomeForDomRoaming: " + this.mIsWfcModeHomeForDomRoaming);
    }

    private MtkCallForwardInfo getMtkCallForwardInfo(MtkImsCallForwardInfo mtkImsCallForwardInfo) {
        MtkCallForwardInfo mtkCallForwardInfo = new MtkCallForwardInfo();
        mtkCallForwardInfo.status = mtkImsCallForwardInfo.mStatus;
        mtkCallForwardInfo.reason = getCFReasonFromCondition(mtkImsCallForwardInfo.mCondition);
        mtkCallForwardInfo.serviceClass = mtkImsCallForwardInfo.mServiceClass;
        mtkCallForwardInfo.toa = mtkImsCallForwardInfo.mToA;
        mtkCallForwardInfo.number = mtkImsCallForwardInfo.mNumber;
        mtkCallForwardInfo.timeSeconds = mtkImsCallForwardInfo.mTimeSeconds;
        mtkCallForwardInfo.timeSlot = mtkImsCallForwardInfo.mTimeSlot;
        return mtkCallForwardInfo;
    }

    private MtkCallForwardInfo[] handleCfInTimeSlotQueryResult(MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) {
        MtkCallForwardInfo[] mtkCallForwardInfoArr = null;
        if (supportMdAutoSetupIms()) {
            if (mtkImsCallForwardInfoArr != null && mtkImsCallForwardInfoArr.length != 0) {
                mtkCallForwardInfoArr = new MtkCallForwardInfo[mtkImsCallForwardInfoArr.length];
            }
        } else if (mtkImsCallForwardInfoArr != null) {
            mtkCallForwardInfoArr = new MtkCallForwardInfo[mtkImsCallForwardInfoArr.length];
        }
        IccRecords iccRecords = this.mDefaultPhone.getIccRecords();
        if (mtkImsCallForwardInfoArr != null && mtkImsCallForwardInfoArr.length != 0) {
            int length = mtkImsCallForwardInfoArr.length;
            for (int i = 0; i < length; i++) {
                if (mtkImsCallForwardInfoArr[i].mCondition == 0 && (mtkImsCallForwardInfoArr[i].mServiceClass & 1) != 0 && iccRecords != null) {
                    setVoiceCallForwardingFlag(iccRecords, 1, mtkImsCallForwardInfoArr[i].mStatus == 1, mtkImsCallForwardInfoArr[i].mNumber);
                    saveTimeSlot(mtkImsCallForwardInfoArr[i].mTimeSlot);
                }
                mtkCallForwardInfoArr[i] = getMtkCallForwardInfo(mtkImsCallForwardInfoArr[i]);
            }
        } else if (iccRecords != null) {
            setVoiceCallForwardingFlag(iccRecords, 1, false, null);
        }
        return mtkCallForwardInfoArr;
    }

    private boolean isSupportImsEcc() {
        return ((MtkImsPhoneCallTracker) this.mCT).isSupportImsEcc();
    }

    private void registerForListenCarrierConfigChanged() {
        if (this.mContext == null) {
            logd("registerForListenCarrierConfigChanged failed");
            return;
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
    }

    private boolean supportMdAutoSetupIms() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    public /* bridge */ /* synthetic */ void activateCellBroadcastSms(int i, Message message) {
        super.activateCellBroadcastSms(i, message);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    protected Connection dialInternal(String str, PhoneInternalInterface.DialArgs dialArgs, ResultReceiver resultReceiver) throws CallStateException {
        boolean zIsUriNumber = PhoneNumberUtils.isUriNumber(str);
        String strStripSeparators = str;
        if (!zIsUriNumber) {
            strStripSeparators = PhoneNumberUtils.stripSeparators(str);
        }
        if (handleInCallMmiCommands(strStripSeparators)) {
            return null;
        }
        ImsPhone.ImsDialArgs.Builder builderFrom = !(dialArgs instanceof ImsPhone.ImsDialArgs) ? ImsPhone.ImsDialArgs.Builder.from(dialArgs) : ImsPhone.ImsDialArgs.Builder.from((ImsPhone.ImsDialArgs) dialArgs);
        builderFrom.setClirMode(this.mCT.getClirMode());
        if (this.mDefaultPhone.getPhoneType() == 2) {
            return this.mCT.dial(str, builderFrom.build());
        }
        String strExtractNetworkPortionAlt = str;
        if (!zIsUriNumber) {
            strExtractNetworkPortionAlt = PhoneNumberUtils.extractNetworkPortionAlt(strStripSeparators);
        }
        MtkImsPhoneMmiCode mtkImsPhoneMmiCodeNewFromDialString = null;
        if (PhoneNumberUtils.isUriNumber(str)) {
            logd("dialInternal: url dial string, it must not be MMI");
        } else {
            mtkImsPhoneMmiCodeNewFromDialString = MtkImsPhoneMmiCode.newFromDialString(strExtractNetworkPortionAlt, this, resultReceiver);
        }
        boolean isEmergencyNumber = MtkLocalPhoneNumberUtils.getIsEmergencyNumber();
        logd("dialInternal: dialing w/ mmi [" + mtkImsPhoneMmiCodeNewFromDialString + "] isEcc: " + isEmergencyNumber);
        this.mDialString = str;
        if (mtkImsPhoneMmiCodeNewFromDialString == null || isEmergencyNumber) {
            return this.mCT.dial(str, builderFrom.build());
        }
        if (mtkImsPhoneMmiCodeNewFromDialString.isTemporaryModeCLIR()) {
            builderFrom.setClirMode(mtkImsPhoneMmiCodeNewFromDialString.getCLIRMode());
            return this.mCT.dial(mtkImsPhoneMmiCodeNewFromDialString.getDialingNumber(), builderFrom.build());
        }
        if (!mtkImsPhoneMmiCodeNewFromDialString.isSupportedOverImsPhone()) {
            logi("dialInternal: USSD not supported by IMS; fallback to CS.");
            throw new CallStateException("cs_fallback");
        }
        this.mPendingMMIs.add(mtkImsPhoneMmiCodeNewFromDialString);
        this.mMmiRegistrants.notifyRegistrants(new AsyncResult((Object) null, mtkImsPhoneMmiCodeNewFromDialString, (Throwable) null));
        try {
            logd("MMI processCode");
            mtkImsPhoneMmiCodeNewFromDialString.processCode();
        } catch (CallStateException e) {
            if ("cs_fallback".equals(e.getMessage())) {
                logi("dialInternal: fallback to GSM required.");
                this.mPendingMMIs.remove(mtkImsPhoneMmiCodeNewFromDialString);
                throw e;
            }
        }
        return null;
    }

    public /* bridge */ /* synthetic */ boolean disableDataConnectivity() {
        return super.disableDataConnectivity();
    }

    public /* bridge */ /* synthetic */ void disableLocationUpdates() {
        super.disableLocationUpdates();
    }

    public void dispose() {
        super.dispose();
        if (this.mContext != null) {
            this.mContext.unregisterReceiver(this.mReceiver);
        }
    }

    public void dumpPendingMmi() {
        int size = this.mPendingMMIs.size();
        if (size == 0) {
            logd("dumpPendingMmi: none");
            return;
        }
        for (int i = 0; i < size; i++) {
            logd("dumpPendingMmi: " + this.mPendingMMIs.get(i));
        }
    }

    public /* bridge */ /* synthetic */ boolean enableDataConnectivity() {
        return super.enableDataConnectivity();
    }

    public /* bridge */ /* synthetic */ void enableLocationUpdates() {
        super.enableLocationUpdates();
    }

    public /* bridge */ /* synthetic */ void getAvailableNetworks(Message message) {
        super.getAvailableNetworks(message);
    }

    protected int getCBTypeFromFacility(String str) {
        if (MtkRIL.CB_FACILITY_BA_ACR.equals(str)) {
            return 6;
        }
        return super.getCBTypeFromFacility(str);
    }

    protected int getCFReasonFromCondition(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        if (i == 2) {
            return 2;
        }
        if (i == 4) {
            return 4;
        }
        if (i != 5) {
            return i != 6 ? 3 : 6;
        }
        return 5;
    }

    public void getCallForwardInTimeSlot(int i, Message message) {
        logd("getCallForwardInTimeSlot reason = " + i);
        if (i != 0) {
            if (message != null) {
                sendErrorResponse(message);
            }
        } else {
            logd("requesting call forwarding in a time slot query.");
            try {
                this.mCT.getUtInterface().queryCallForwardInTimeSlot(getConditionFromCFReason(i), obtainMessage(109, message));
            } catch (ImsException e) {
                sendErrorResponse(message, e);
            }
        }
    }

    protected CallForwardInfo getCallForwardInfo(ImsCallForwardInfo imsCallForwardInfo) {
        CallForwardInfo callForwardInfo = new CallForwardInfo();
        callForwardInfo.status = imsCallForwardInfo.mStatus;
        callForwardInfo.reason = getCFReasonFromCondition(imsCallForwardInfo.mCondition);
        callForwardInfo.serviceClass = imsCallForwardInfo.mServiceClass;
        callForwardInfo.toa = imsCallForwardInfo.mToA;
        callForwardInfo.number = imsCallForwardInfo.mNumber;
        callForwardInfo.timeSeconds = imsCallForwardInfo.mTimeSeconds;
        return callForwardInfo;
    }

    public void getCallForwardingOption(int i, Message message) {
        logd("getCallForwardingOption reason=" + i);
        if (!isValidCommandInterfaceCFReason(i)) {
            if (message != null) {
                sendErrorResponse(message);
            }
        } else {
            logd("requesting call forwarding query.");
            try {
                this.mCT.getUtInterface().queryCallForward(getConditionFromCFReason(i), (String) null, obtainMessage(13, message));
            } catch (ImsException e) {
                sendErrorResponse(message, e);
            }
        }
    }

    public void getCallForwardingOptionForServiceClass(int i, int i2, Message message) {
        logd("getCallForwardingOptionForServiceClass reason=" + i + ", service class= " + i2);
        if (!isValidCommandInterfaceCFReason(i)) {
            if (message != null) {
                sendErrorResponse(message);
            }
        } else {
            logd("requesting call forwarding query.");
            try {
                this.mCT.getUtInterface().queryCFForServiceClass(getConditionFromCFReason(i), (String) null, i2, obtainMessage(13, message));
            } catch (ImsException e) {
                sendErrorResponse(message, e);
            }
        }
    }

    public /* bridge */ /* synthetic */ void getCellBroadcastSmsConfig(Message message) {
        super.getCellBroadcastSmsConfig(message);
    }

    protected CommandException getCommandException(int i, String str) {
        logd("getCommandException code= " + i + ", errorString= " + str);
        CommandException.Error error = CommandException.Error.GENERIC_FAILURE;
        if (i == 241) {
            error = CommandException.Error.FDN_CHECK_FAILURE;
        } else if (i == 801) {
            error = CommandException.Error.REQUEST_NOT_SUPPORTED;
        } else if (i != 802) {
            switch (i) {
                case 821:
                    error = CommandException.Error.PASSWORD_INCORRECT;
                    break;
                case 822:
                    error = CommandException.Error.SS_MODIFIED_TO_DIAL;
                    break;
                case 823:
                    error = CommandException.Error.SS_MODIFIED_TO_USSD;
                    break;
                case 824:
                    error = CommandException.Error.SS_MODIFIED_TO_SS;
                    break;
                case 825:
                    error = CommandException.Error.SS_MODIFIED_TO_DIAL_VIDEO;
                    break;
                default:
                    switch (i) {
                        case 61446:
                            error = CommandException.Error.OPERATION_NOT_ALLOWED;
                            break;
                        case 61447:
                            error = CommandException.Error.OEM_ERROR_3;
                            break;
                        default:
                            switch (i) {
                                case 61449:
                                    error = CommandException.Error.OEM_ERROR_25;
                                    break;
                                case 61450:
                                    error = CommandException.Error.OEM_ERROR_7;
                                    break;
                                default:
                                    switch (i) {
                                        case 61456:
                                            error = CommandException.Error.OEM_ERROR_6;
                                            break;
                                        case 61457:
                                            error = CommandException.Error.OEM_ERROR_24;
                                            break;
                                        case 61458:
                                            error = CommandException.Error.OEM_ERROR_23;
                                            break;
                                        case 61459:
                                            error = CommandException.Error.OEM_ERROR_22;
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
            }
        } else {
            error = CommandException.Error.RADIO_NOT_AVAILABLE;
        }
        return new CommandException(error, str);
    }

    protected int getConditionFromCFReason(int i) {
        switch (i) {
            case 0:
                return 0;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 5;
            case 6:
                return 6;
            default:
                return -1;
        }
    }

    public /* bridge */ /* synthetic */ List getCurrentDataConnectionList() {
        return super.getCurrentDataConnectionList();
    }

    public /* bridge */ /* synthetic */ PhoneInternalInterface.DataActivityState getDataActivityState() {
        return super.getDataActivityState();
    }

    public /* bridge */ /* synthetic */ PhoneConstants.DataState getDataConnectionState() {
        return super.getDataConnectionState();
    }

    public /* bridge */ /* synthetic */ boolean getDataRoamingEnabled() {
        return super.getDataRoamingEnabled();
    }

    public /* bridge */ /* synthetic */ String getDeviceId() {
        return super.getDeviceId();
    }

    public /* bridge */ /* synthetic */ String getDeviceSvn() {
        return super.getDeviceSvn();
    }

    public /* bridge */ /* synthetic */ String getEsn() {
        return super.getEsn();
    }

    public /* bridge */ /* synthetic */ String getGroupIdLevel1() {
        return super.getGroupIdLevel1();
    }

    public /* bridge */ /* synthetic */ String getGroupIdLevel2() {
        return super.getGroupIdLevel2();
    }

    public /* bridge */ /* synthetic */ IccCard getIccCard() {
        return super.getIccCard();
    }

    public /* bridge */ /* synthetic */ IccFileHandler getIccFileHandler() {
        return super.getIccFileHandler();
    }

    public /* bridge */ /* synthetic */ IccPhoneBookInterfaceManager getIccPhoneBookInterfaceManager() {
        return super.getIccPhoneBookInterfaceManager();
    }

    public /* bridge */ /* synthetic */ boolean getIccRecordsLoaded() {
        return super.getIccRecordsLoaded();
    }

    public /* bridge */ /* synthetic */ String getIccSerialNumber() {
        return super.getIccSerialNumber();
    }

    public /* bridge */ /* synthetic */ String getImei() {
        return super.getImei();
    }

    public /* bridge */ /* synthetic */ String getLine1AlphaTag() {
        return super.getLine1AlphaTag();
    }

    public /* bridge */ /* synthetic */ LinkProperties getLinkProperties(String str) {
        return super.getLinkProperties(str);
    }

    public /* bridge */ /* synthetic */ String getMeid() {
        return super.getMeid();
    }

    public /* bridge */ /* synthetic */ boolean getMessageWaitingIndicator() {
        return super.getMessageWaitingIndicator();
    }

    public /* bridge */ /* synthetic */ int getPhoneType() {
        return super.getPhoneType();
    }

    public /* bridge */ /* synthetic */ SignalStrength getSignalStrength() {
        return super.getSignalStrength();
    }

    public /* bridge */ /* synthetic */ String getSubscriberId() {
        return super.getSubscriberId();
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
        logd("timeSlot = " + Arrays.toString(jArr));
        return jArr;
    }

    public /* bridge */ /* synthetic */ String getVoiceMailAlphaTag() {
        return super.getVoiceMailAlphaTag();
    }

    public /* bridge */ /* synthetic */ String getVoiceMailNumber() {
        return super.getVoiceMailNumber();
    }

    protected int[] handleCbQueryResult(ImsSsInfo[] imsSsInfoArr) {
        return new int[]{imsSsInfoArr[0].mStatus};
    }

    public CallForwardInfo[] handleCfQueryResult(ImsCallForwardInfo[] imsCallForwardInfoArr) {
        CallForwardInfo[] callForwardInfoArr = null;
        if (supportMdAutoSetupIms()) {
            if (imsCallForwardInfoArr != null && imsCallForwardInfoArr.length != 0) {
                callForwardInfoArr = new CallForwardInfo[imsCallForwardInfoArr.length];
            }
        } else if (imsCallForwardInfoArr != null) {
            callForwardInfoArr = new CallForwardInfo[imsCallForwardInfoArr.length];
        }
        IccRecords iccRecords = this.mDefaultPhone.getIccRecords();
        if (imsCallForwardInfoArr != null && imsCallForwardInfoArr.length != 0) {
            int length = imsCallForwardInfoArr.length;
            for (int i = 0; i < length; i++) {
                if (imsCallForwardInfoArr[i].mCondition == 0 && (imsCallForwardInfoArr[i].mServiceClass & 1) != 0 && iccRecords != null) {
                    setVoiceCallForwardingFlag(iccRecords, 1, imsCallForwardInfoArr[i].mStatus == 1, imsCallForwardInfoArr[i].mNumber);
                }
                callForwardInfoArr[i] = getCallForwardInfo(imsCallForwardInfoArr[i]);
            }
        } else if (iccRecords != null) {
            setVoiceCallForwardingFlag(iccRecords, 1, false, null);
        }
        return callForwardInfoArr;
    }

    public void handleMessage(Message message) {
        ImsException imsException;
        Message message2;
        ImsException imsException2;
        Message message3;
        ImsException imsException3;
        ImsException imsException4;
        AsyncResult asyncResult = (AsyncResult) message.obj;
        logd("Mtk handleMessage what=" + message.what);
        int i = message.what;
        if (i == 12) {
            IccRecords iccRecords = this.mDefaultPhone.getIccRecords();
            Cf cf = (Cf) asyncResult.userObj;
            int i2 = message.arg1;
            int i3 = message.arg2;
            boolean zIsCfEnable = isCfEnable(i2);
            if (cf.mIsCfu && asyncResult.exception == null && iccRecords != null) {
                if (this.mDefaultPhone.queryCFUAgainAfterSet() && i3 == 0) {
                    if (asyncResult.result == null) {
                        logi("arResult is null.");
                    } else {
                        logd("[EVENT_SET_CALL_FORWARD_DONE check cfinfo.");
                    }
                } else if ((cf.mServiceClass & 1) != 0) {
                    setVoiceCallForwardingFlag(iccRecords, 1, zIsCfEnable, cf.mSetCfNumber);
                }
            }
            if (this.mDefaultPhone.getPhoneType() == 1 && (this.mDefaultPhone instanceof MtkGsmCdmaPhone) && this.mDefaultPhone.isSupportSaveCFNumber() && asyncResult.exception == null) {
                if (zIsCfEnable && !this.mDefaultPhone.applyCFSharePreference(i3, cf.mSetCfNumber)) {
                    logd("applySharePreference false.");
                }
                if (i2 == 4) {
                    this.mDefaultPhone.clearCFSharePreference(i3);
                }
            }
            sendResponse(cf.mOnComplete, null, asyncResult.exception);
            return;
        }
        if (i == 59) {
            if (supportMdAutoSetupIms() || !this.mDefaultPhone.isOpTransferXcap404() || asyncResult.exception == null || !(asyncResult.exception instanceof ImsException) || (imsException = asyncResult.exception) == null || imsException.getCode() != 61448 || (message2 = (Message) asyncResult.userObj) == null) {
                sendResponse((Message) asyncResult.userObj, null, asyncResult.exception);
                return;
            } else {
                AsyncResult.forMessage(message2, (Object) null, new CommandException(CommandException.Error.NO_SUCH_ELEMENT));
                message2.sendToTarget();
                return;
            }
        }
        if (i == 60) {
            if (supportMdAutoSetupIms() || !this.mDefaultPhone.isOpTransferXcap404() || asyncResult.exception == null || !(asyncResult.exception instanceof ImsException) || (imsException2 = asyncResult.exception) == null || imsException2.getCode() != 61448 || (message3 = (Message) asyncResult.userObj) == null) {
                sendResponse((Message) asyncResult.userObj, asyncResult.exception == null ? handleCbQueryResult((ImsSsInfo[]) asyncResult.result) : null, asyncResult.exception);
                return;
            } else {
                AsyncResult.forMessage(message3, (Object) null, new CommandException(CommandException.Error.NO_SUCH_ELEMENT));
                message3.sendToTarget();
                return;
            }
        }
        if (i == 109) {
            MtkCallForwardInfo[] mtkCallForwardInfoArrHandleCfInTimeSlotQueryResult = asyncResult.exception == null ? handleCfInTimeSlotQueryResult((MtkImsCallForwardInfo[]) asyncResult.result) : null;
            if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException) && (imsException3 = asyncResult.exception) != null && imsException3.getCode() == 61446) {
                this.mDefaultPhone.setCsFallbackStatus(2);
                Message message4 = (Message) asyncResult.userObj;
                if (message4 != null) {
                    AsyncResult.forMessage(message4, mtkCallForwardInfoArrHandleCfInTimeSlotQueryResult, new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED));
                    message4.sendToTarget();
                    return;
                }
            }
            sendResponse((Message) asyncResult.userObj, mtkCallForwardInfoArrHandleCfInTimeSlotQueryResult, asyncResult.exception);
            return;
        }
        if (i != 110) {
            super.handleMessage(message);
            return;
        }
        IccRecords iccRecords2 = this.mDefaultPhone.getIccRecords();
        CfEx cfEx = (CfEx) asyncResult.userObj;
        if (cfEx.mIsCfu && asyncResult.exception == null && iccRecords2 != null) {
            setVoiceCallForwardingFlag(iccRecords2, 1, isCfEnable(message.arg1), cfEx.mSetCfNumber);
            saveTimeSlot(cfEx.mSetTimeSlot);
        }
        if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException) && (imsException4 = asyncResult.exception) != null && imsException4.getCode() == 61446) {
            this.mDefaultPhone.setCsFallbackStatus(2);
            Message message5 = cfEx.mOnComplete;
            if (message5 != null) {
                AsyncResult.forMessage(message5, (Object) null, new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED));
                message5.sendToTarget();
                return;
            }
        }
        sendResponse(cfEx.mOnComplete, null, asyncResult.exception);
    }

    public void handleMmiCodeCsfb(int i, MtkImsPhoneMmiCode mtkImsPhoneMmiCode) {
        logd("handleMmiCodeCsfb: reason = " + i + ", mDialString = " + this.mDialString + ", mmi=" + mtkImsPhoneMmiCode);
        removeMmi(mtkImsPhoneMmiCode);
        if (i == 61446) {
            this.mDefaultPhone.setCsFallbackStatus(2);
        } else if (i == 61447) {
            this.mDefaultPhone.setCsFallbackStatus(1);
        }
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(15, null);
        mtkSuppSrvRequestObtain.mParcel.writeString(this.mDialString);
        this.mDefaultPhone.sendMessage(this.mDefaultPhone.obtainMessage(2001, mtkSuppSrvRequestObtain));
    }

    public /* bridge */ /* synthetic */ boolean handlePinMmi(String str) {
        return super.handlePinMmi(str);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangupAll() throws CallStateException {
        logd("hangupAll");
        ((MtkImsPhoneCallTracker) this.mCT).hangupAll();
    }

    public /* bridge */ /* synthetic */ boolean isDataAllowed(int i) {
        return super.isDataAllowed(i);
    }

    public /* bridge */ /* synthetic */ boolean isUserDataEnabled() {
        return super.isUserDataEnabled();
    }

    protected boolean isValidCommandInterfaceCFReason(int i) {
        switch (i) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                return true;
            default:
                return false;
        }
    }

    public boolean isWifiPdnOutOfService() {
        return ((MtkImsPhoneCallTracker) this.mCT).isWifiPdnOutOfService();
    }

    public /* bridge */ /* synthetic */ void migrateFrom(Phone phone) {
        super.migrateFrom(phone);
    }

    protected boolean needNotifySrvccState() {
        return true;
    }

    public /* bridge */ /* synthetic */ boolean needsOtaServiceProvisioning() {
        return super.needsOtaServiceProvisioning();
    }

    public /* bridge */ /* synthetic */ void notifyCallForwardingIndicator() {
        super.notifyCallForwardingIndicator();
    }

    public /* bridge */ /* synthetic */ void notifyDisconnect(Connection connection) {
        super.notifyDisconnect(connection);
    }

    public /* bridge */ /* synthetic */ void notifyImsReason(ImsReasonInfo imsReasonInfo) {
        super.notifyImsReason(imsReasonInfo);
    }

    public /* bridge */ /* synthetic */ void notifyPhoneStateChanged() {
        super.notifyPhoneStateChanged();
    }

    public /* bridge */ /* synthetic */ void notifyPreciseCallStateChanged() {
        super.notifyPreciseCallStateChanged();
    }

    public /* bridge */ /* synthetic */ void notifySuppServiceFailed(PhoneInternalInterface.SuppService suppService) {
        super.notifySuppServiceFailed(suppService);
    }

    public /* bridge */ /* synthetic */ void onCallQualityChanged(CallQuality callQuality, int i) {
        super.onCallQualityChanged(callQuality, i);
    }

    protected void onIncomingUSSD(int i, String str) {
        logd("onIncomingUSSD ussdMode=" + i);
        boolean z = false;
        boolean z2 = i == 1;
        if (i != 0 && i != 1) {
            z = true;
        }
        ImsPhoneMmiCode imsPhoneMmiCode = null;
        int size = this.mPendingMMIs.size();
        for (int i2 = 0; i2 < size; i2++) {
            if (((ImsPhoneMmiCode) this.mPendingMMIs.get(i2)).isPendingUSSD()) {
                imsPhoneMmiCode = (ImsPhoneMmiCode) this.mPendingMMIs.get(i2);
                break;
            }
        }
        if (imsPhoneMmiCode != null) {
            if (z) {
                imsPhoneMmiCode.onUssdFinishedError();
                return;
            } else {
                imsPhoneMmiCode.onUssdFinished(str, z2);
                return;
            }
        }
        if (z || str == null) {
            if (z) {
                onNetworkInitiatedUssd(MtkImsPhoneMmiCode.newNetworkInitiatedUssdError(str, this));
            }
        } else {
            onNetworkInitiatedUssd(ImsPhoneMmiCode.newNetworkInitiatedUssd(str, z2, this));
        }
    }

    public /* bridge */ /* synthetic */ void onTtyModeReceived(int i) {
        super.onTtyModeReceived(i);
    }

    public /* bridge */ /* synthetic */ void registerForOnHoldTone(Handler handler, int i, Object obj) {
        super.registerForOnHoldTone(handler, i, obj);
    }

    public /* bridge */ /* synthetic */ void registerForRingbackTone(Handler handler, int i, Object obj) {
        super.registerForRingbackTone(handler, i, obj);
    }

    public /* bridge */ /* synthetic */ void registerForTtyModeReceived(Handler handler, int i, Object obj) {
        super.registerForTtyModeReceived(handler, i, obj);
    }

    public void removeMmi(ImsPhoneMmiCode imsPhoneMmiCode) {
        logd("removeMmi: " + imsPhoneMmiCode);
        dumpPendingMmi();
        this.mPendingMMIs.remove(imsPhoneMmiCode);
    }

    public void saveTimeSlot(long[] jArr) {
        String str = CFU_TIME_SLOT + this.mPhoneId;
        String str2 = "";
        if (jArr != null && jArr.length == 2) {
            str2 = Long.toString(jArr[0]) + "," + Long.toString(jArr[1]);
        }
        SystemProperties.set(str, str2);
        logd("timeSlotString = " + str2);
    }

    public /* bridge */ /* synthetic */ void selectNetworkManually(OperatorInfo operatorInfo, boolean z, Message message) {
        super.selectNetworkManually(operatorInfo, z, message);
    }

    public void sendUssdResponse(String str) {
        dumpPendingMmi();
        super.sendUssdResponse(str);
    }

    public void setCallBarring(String str, boolean z, String str2, Message message, int i) {
        logd("setCallBarring facility=" + str + ", lockState=" + z + ", serviceClass = " + i);
        try {
            this.mCT.getUtInterface().updateCallBarring(str2, getCBTypeFromFacility(str), z ? 1 : 0, obtainMessage(59, message), (String[]) null, i);
        } catch (ImsException e) {
            sendErrorResponse(message, e);
        }
    }

    public void setCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr, Message message) {
        logd("setCallForwardInTimeSlot action = " + i + ", reason = " + i2);
        if (!isValidCommandInterfaceCFAction(i) || i2 != 0) {
            if (message != null) {
                sendErrorResponse(message);
            }
        } else {
            try {
                this.mCT.getUtInterface().updateCallForwardInTimeSlot(getActionFromCFAction(i), getConditionFromCFReason(i2), str, i3, jArr, obtainMessage(110, i, 0, new CfEx(str, jArr, true, message)));
            } catch (ImsException e) {
                sendErrorResponse(message, e);
            }
        }
    }

    public void setCallForwardingOption(int i, int i2, String str, int i3, int i4, Message message) {
        String cFPreviousDialNumber;
        logd("setCallForwardingOption action=" + i + ", reason=" + i2 + " serviceClass=" + i3);
        if (!isValidCommandInterfaceCFAction(i) || !isValidCommandInterfaceCFReason(i2)) {
            if (message != null) {
                sendErrorResponse(message);
                return;
            }
            return;
        }
        if ((str == null || str.isEmpty()) && this.mDefaultPhone != null && this.mDefaultPhone.getPhoneType() == 1 && (this.mDefaultPhone instanceof MtkGsmCdmaPhone) && this.mDefaultPhone.isSupportSaveCFNumber() && isCfEnable(i) && (cFPreviousDialNumber = this.mDefaultPhone.getCFPreviousDialNumber(i2)) != null && !cFPreviousDialNumber.isEmpty()) {
            str = cFPreviousDialNumber;
        }
        try {
            this.mCT.getUtInterface().updateCallForward(getActionFromCFAction(i), getConditionFromCFReason(i2), str, i3, i4, obtainMessage(12, isCfEnable(i) ? 1 : 0, 0, new Cf(str, i2 == 0, message, i3)));
        } catch (ImsException e) {
            sendErrorResponse(message, e);
        }
    }

    public /* bridge */ /* synthetic */ void setCellBroadcastSmsConfig(int[] iArr, Message message) {
        super.setCellBroadcastSmsConfig(iArr, message);
    }

    public /* bridge */ /* synthetic */ void setDataRoamingEnabled(boolean z) {
        super.setDataRoamingEnabled(z);
    }

    public void setImsRegistrationState(int i) {
        this.mImsRegistrationState = i;
        if (isImsRegistered()) {
            ((NotificationManager) this.mContext.getSystemService("notification")).cancel("wifi_calling", 1);
        }
        ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(isVolteEnabled(), this.mDefaultPhone);
    }

    public /* bridge */ /* synthetic */ boolean setLine1Number(String str, String str2, Message message) {
        return super.setLine1Number(str, str2, message);
    }

    public /* bridge */ /* synthetic */ void setNetworkSelectionModeAutomatic(Message message) {
        super.setNetworkSelectionModeAutomatic(message);
    }

    public /* bridge */ /* synthetic */ void setRadioPower(boolean z) {
        super.setRadioPower(z);
    }

    public void setServiceState(int i) {
        super.setServiceState(i);
        updateIsEmergencyOnly();
    }

    public void setVoiceCallForwardingFlag(IccRecords iccRecords, int i, boolean z, String str) {
        IccRecords iccRecords2;
        super.setVoiceCallForwardingFlag(iccRecords, i, z, str);
        if (this.mDefaultPhone.getPhoneType() == 2 && (this.mDefaultPhone instanceof MtkGsmCdmaPhone) && this.mDefaultPhone.isGsmSsPrefer()) {
            UiccController uiccController = UiccController.getInstance();
            if (uiccController != null && (iccRecords2 = uiccController.getIccRecords(this.mPhoneId, 1)) != null) {
                iccRecords2.setVoiceCallForwardingFlag(i, z, str);
            }
            this.mDefaultPhone.notifyCallForwardingIndicator();
        }
    }

    public /* bridge */ /* synthetic */ void setVoiceMailNumber(String str, String str2, Message message) {
        super.setVoiceMailNumber(str, str2, message);
    }

    public /* bridge */ /* synthetic */ void startNetworkScan(NetworkScanRequest networkScanRequest, Message message) {
        super.startNetworkScan(networkScanRequest, message);
    }

    public /* bridge */ /* synthetic */ void startOnHoldTone(Connection connection) {
        super.startOnHoldTone(connection);
    }

    public /* bridge */ /* synthetic */ void startRingbackTone() {
        super.startRingbackTone();
    }

    public /* bridge */ /* synthetic */ void stopNetworkScan(Message message) {
        super.stopNetworkScan(message);
    }

    public /* bridge */ /* synthetic */ void stopOnHoldTone(Connection connection) {
        super.stopOnHoldTone(connection);
    }

    public /* bridge */ /* synthetic */ void stopRingbackTone() {
        super.stopRingbackTone();
    }

    public /* bridge */ /* synthetic */ void unregisterForOnHoldTone(Handler handler) {
        super.unregisterForOnHoldTone(handler);
    }

    public /* bridge */ /* synthetic */ void unregisterForRingbackTone(Handler handler) {
        super.unregisterForRingbackTone(handler);
    }

    public /* bridge */ /* synthetic */ void unregisterForTtyModeReceived(Handler handler) {
        super.unregisterForTtyModeReceived(handler);
    }

    public void updateIsEmergencyOnly() {
        ServiceState serviceState = getServiceState();
        logd("updateIsEmergencyOnly() sst: " + serviceState.getState() + " supportImsEcc: " + isSupportImsEcc());
        if (serviceState.getState() == 1 && isSupportImsEcc()) {
            this.mSS.setEmergencyOnly(true);
        } else {
            this.mSS.setEmergencyOnly(false);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void updateRoamingState(ServiceState serviceState) {
        if (serviceState == null) {
            loge("updateRoamingState: null ServiceState!");
            return;
        }
        boolean roaming = serviceState.getRoaming();
        if (this.mRoaming == roaming) {
            return;
        }
        if (!(serviceState.getVoiceRegState() == 0 || serviceState.getDataRegState() == 0)) {
            logi("updateRoamingState: we are OUT_OF_SERVICE, ignoring roaming change.");
            return;
        }
        if (isCsNotInServiceAndPsWwanReportingWlan(serviceState)) {
            logi("updateRoamingState: IWLAN masking roaming, ignore roaming change.");
            return;
        }
        if (this.mCT.getState() != PhoneConstants.State.IDLE) {
            logd("updateRoamingState postponed: " + roaming);
            this.mCT.registerForVoiceCallEnded(this, 67, (Object) null);
            return;
        }
        logd("updateRoamingState now: " + roaming);
        this.mRoaming = roaming;
        ImsManager imsManager = ImsManager.getInstance(this.mContext, this.mPhoneId);
        if (this.mIsWfcModeHomeForDomRoaming) {
            int voiceRoamingType = serviceState.getVoiceRoamingType();
            int dataRoamingType = serviceState.getDataRoamingType();
            if (this.mRoaming && (voiceRoamingType == 2 || dataRoamingType == 2)) {
                logd("Convert new roaming to HOME if it's domestic roaming,  voiceRoamingType: " + voiceRoamingType + " dataRoamingType: " + dataRoamingType);
                imsManager.setWfcMode(imsManager.getWfcMode(false), false);
                return;
            }
        }
        imsManager.setWfcMode(imsManager.getWfcMode(roaming), roaming);
    }

    public /* bridge */ /* synthetic */ void updateServiceLocation() {
        super.updateServiceLocation();
    }
}

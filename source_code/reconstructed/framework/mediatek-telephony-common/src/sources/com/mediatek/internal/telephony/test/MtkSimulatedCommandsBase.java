package com.mediatek.internal.telephony.test;

import android.content.Context;
import android.hardware.radio.V1_0.DataRegStateResult;
import android.hardware.radio.V1_0.SetupDataCallResult;
import android.hardware.radio.V1_0.VoiceRegStateResult;
import android.net.KeepalivePacketData;
import android.net.LinkProperties;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.Parcel;
import android.os.SystemClock;
import android.os.WorkSource;
import android.telephony.CarrierRestrictionRules;
import android.telephony.CellInfo;
import android.telephony.CellInfoGsm;
import android.telephony.CellSignalStrengthCdma;
import android.telephony.CellSignalStrengthGsm;
import android.telephony.CellSignalStrengthLte;
import android.telephony.CellSignalStrengthNr;
import android.telephony.CellSignalStrengthTdscdma;
import android.telephony.CellSignalStrengthWcdma;
import android.telephony.ImsiEncryptionInfo;
import android.telephony.NetworkScanRequest;
import android.telephony.Rlog;
import android.telephony.SignalStrength;
import android.telephony.SignalThresholdInfo;
import android.telephony.data.DataProfile;
import android.telephony.emergency.EmergencyNumber;
import com.android.internal.telephony.BaseCommands;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.LastCallFailCause;
import com.android.internal.telephony.RadioCapability;
import com.android.internal.telephony.SmsResponse;
import com.android.internal.telephony.UUSInfo;
import com.android.internal.telephony.cdma.CdmaSmsBroadcastConfigInfo;
import com.android.internal.telephony.gsm.SmsBroadcastConfigInfo;
import com.android.internal.telephony.gsm.SuppServiceNotification;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccCardStatus;
import com.android.internal.telephony.uicc.IccIoResult;
import com.android.internal.telephony.uicc.IccSlotStatus;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class MtkSimulatedCommandsBase extends BaseCommands implements CommandsInterface, MtkSimulatedRadioControl {
    public static final int DEFAULT_PIN1_ATTEMPT = 5;
    public static final int DEFAULT_PIN2_ATTEMPT = 5;
    public static final String DEFAULT_SIM_PIN2_CODE = "5678";
    public static final String DEFAULT_SIM_PIN_CODE = "1234";
    public static final String FAKE_ESN = "1234";
    public static final String FAKE_IMEI = "012345678901234";
    public static final String FAKE_IMEISV = "99";
    public static final String FAKE_LONG_NAME = "Fake long name";
    public static final String FAKE_MCC_MNC = "310260";
    public static final String FAKE_MEID = "1234";
    public static final String FAKE_SHORT_NAME = "Fake short name";
    private static final String LOG_TAG = "MtkSimulatedCommandsBase";
    private static final String SIM_PUK2_CODE = "87654321";
    private static final String SIM_PUK_CODE = "12345678";
    private final AtomicInteger getNetworkSelectionModeCallCount;
    private AtomicBoolean mAllowed;
    private List<CellInfo> mCellInfoList;
    private int mChannelId;
    public boolean mCssSupported;
    private int mDataRadioTech;
    private int mDataRegState;
    private boolean mDcSuccess;
    public int mDefaultRoamingIndicator;
    private final AtomicInteger mGetDataRegistrationStateCallCount;
    private final AtomicInteger mGetOperatorCallCount;
    private final AtomicInteger mGetVoiceRegistrationStateCallCount;
    HandlerThread mHandlerThread;
    private IccCardStatus mIccCardStatus;
    private IccIoResult mIccIoResultForApduLogicalChannel;
    private IccSlotStatus mIccSlotStatus;
    private String mImei;
    private String mImeiSv;
    private int[] mImsRegState;
    private boolean mIsRadioPowerFailResponse;
    public int mMaxDataCalls;
    int mNetworkType;
    int mNextCallFailCause;
    int mPausedResponseCount;
    ArrayList<Message> mPausedResponses;
    int mPin1attemptsRemaining;
    String mPin2Code;
    int mPin2UnlockAttempts;
    String mPinCode;
    int mPinUnlockAttempts;
    int mPuk2UnlockAttempts;
    int mPukUnlockAttempts;
    public int mReasonForDenial;
    public int mRoamingIndicator;
    private SetupDataCallResult mSetupDataCallResult;
    private boolean mShouldReturnCellInfo;
    private SignalStrength mSignalStrength;
    boolean mSimFdnEnabled;
    SimFdnState mSimFdnEnabledState;
    boolean mSimLockEnabled;
    SimLockState mSimLockedState;
    boolean mSsnNotifyOn;
    public int mSystemIsInPrl;
    private int mVoiceRadioTech;
    private int mVoiceRegState;
    MtkSimulatedGsmCallState simulatedCallState;
    private static final SimLockState INITIAL_LOCK_STATE = SimLockState.NONE;
    private static final SimFdnState INITIAL_FDN_STATE = SimFdnState.NONE;

    private enum SimFdnState {
        NONE,
        REQUIRE_PIN2,
        REQUIRE_PUK2,
        SIM_PERM_LOCKED
    }

    private enum SimLockState {
        NONE,
        REQUIRE_PIN,
        REQUIRE_PUK,
        SIM_PERM_LOCKED
    }

    public MtkSimulatedCommandsBase() {
        super((Context) null);
        this.mPin1attemptsRemaining = 5;
        this.mSsnNotifyOn = false;
        this.mVoiceRegState = 1;
        this.mVoiceRadioTech = 3;
        this.mDataRegState = 1;
        this.mDataRadioTech = 3;
        this.mCellInfoList = null;
        this.mShouldReturnCellInfo = true;
        this.mChannelId = -1;
        this.mPausedResponses = new ArrayList<>();
        this.mNextCallFailCause = 16;
        this.mDcSuccess = true;
        this.mIsRadioPowerFailResponse = false;
        this.mGetVoiceRegistrationStateCallCount = new AtomicInteger(0);
        this.mGetDataRegistrationStateCallCount = new AtomicInteger(0);
        this.mGetOperatorCallCount = new AtomicInteger(0);
        this.getNetworkSelectionModeCallCount = new AtomicInteger(0);
        this.mAllowed = new AtomicBoolean(false);
        HandlerThread handlerThread = new HandlerThread(LOG_TAG);
        this.mHandlerThread = handlerThread;
        handlerThread.start();
        this.simulatedCallState = new MtkSimulatedGsmCallState(this.mHandlerThread.getLooper());
        setRadioState(1, false);
        SimLockState simLockState = INITIAL_LOCK_STATE;
        this.mSimLockedState = simLockState;
        this.mSimLockEnabled = simLockState != SimLockState.NONE;
        this.mPinCode = "1234";
        SimFdnState simFdnState = INITIAL_FDN_STATE;
        this.mSimFdnEnabledState = simFdnState;
        this.mSimFdnEnabled = simFdnState != SimFdnState.NONE;
        this.mPin2Code = DEFAULT_SIM_PIN2_CODE;
    }

    private CellInfoGsm getCellInfoGsm() {
        Parcel parcelObtain = Parcel.obtain();
        parcelObtain.writeInt(1);
        parcelObtain.writeInt(1);
        parcelObtain.writeInt(2);
        parcelObtain.writeLong(1453510289108L);
        parcelObtain.writeInt(0);
        parcelObtain.writeInt(1);
        parcelObtain.writeString("310");
        parcelObtain.writeString("260");
        parcelObtain.writeString("long");
        parcelObtain.writeString("short");
        parcelObtain.writeInt(123);
        parcelObtain.writeInt(456);
        parcelObtain.writeInt(950);
        parcelObtain.writeInt(27);
        parcelObtain.writeInt(99);
        parcelObtain.writeInt(0);
        parcelObtain.writeInt(3);
        parcelObtain.setDataPosition(0);
        return (CellInfoGsm) CellInfoGsm.CREATOR.createFromParcel(parcelObtain);
    }

    private boolean isSimLocked() {
        return this.mSimLockedState != SimLockState.NONE;
    }

    private void log(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private void resultFail(Message message, Object obj, Throwable th) {
        if (message != null) {
            AsyncResult.forMessage(message, obj, th);
            if (this.mPausedResponseCount > 0) {
                this.mPausedResponses.add(message);
            } else {
                message.sendToTarget();
            }
        }
    }

    private void resultSuccess(Message message, Object obj) {
        if (message != null) {
            AsyncResult.forMessage(message).result = obj;
            if (this.mPausedResponseCount > 0) {
                this.mPausedResponses.add(message);
            } else {
                message.sendToTarget();
            }
        }
    }

    private void unimplemented(Message message) {
        if (message != null) {
            AsyncResult.forMessage(message).exception = new RuntimeException("Unimplemented");
            if (this.mPausedResponseCount > 0) {
                this.mPausedResponses.add(message);
            } else {
                message.sendToTarget();
            }
        }
    }

    public void acceptCall(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().acceptCall(message);
        if (this.simulatedCallState.onAnswer()) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void acknowledgeIncomingGsmSmsWithPdu(boolean z, String str, Message message) {
        unimplemented(message);
    }

    public void acknowledgeLastIncomingCdmaSms(boolean z, int i, Message message) {
        unimplemented(message);
    }

    public void acknowledgeLastIncomingGsmSms(boolean z, int i, Message message) {
        unimplemented(message);
        MtkSimulatedCommandsBaseVerifier.getInstance().acknowledgeLastIncomingGsmSms(z, i, message);
    }

    public void cancelPendingUssd(Message message) {
        resultSuccess(message, null);
    }

    public void changeBarringPassword(String str, String str2, String str3, Message message) {
        unimplemented(message);
    }

    public void changeIccPin(String str, String str2, Message message) {
        if (str == null || !str.equals(this.mPinCode)) {
            Rlog.i(LOG_TAG, "[SimCmd] changeIccPin: pin failed!");
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
        } else {
            this.mPinCode = str2;
            resultSuccess(message, null);
        }
    }

    public void changeIccPin2(String str, String str2, Message message) {
        if (str == null || !str.equals(this.mPin2Code)) {
            Rlog.i(LOG_TAG, "[SimCmd] changeIccPin2: pin2 failed!");
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
        } else {
            this.mPin2Code = str2;
            resultSuccess(message, null);
        }
    }

    public void changeIccPin2ForApp(String str, String str2, String str3, Message message) {
        unimplemented(message);
    }

    public void changeIccPinForApp(String str, String str2, String str3, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().changeIccPinForApp(str, str2, str3, message);
        changeIccPin(str, str2, message);
    }

    public void conference(Message message) {
        if (this.simulatedCallState.onChld('3', (char) 0)) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void deactivateDataCall(int i, int i2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().deactivateDataCall(i, i2, message);
        resultSuccess(message, null);
    }

    public void deleteSmsOnRuim(int i, Message message) {
        Rlog.d(LOG_TAG, "Delete RUIM message at index " + i);
        unimplemented(message);
    }

    public void deleteSmsOnSim(int i, Message message) {
        Rlog.d(LOG_TAG, "Delete message at index " + i);
        unimplemented(message);
    }

    public void dial(String str, boolean z, EmergencyNumber emergencyNumber, boolean z2, int i, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().dial(str, z, emergencyNumber, z2, i, message);
        this.simulatedCallState.onDial(str);
        resultSuccess(message, null);
    }

    public void dial(String str, boolean z, EmergencyNumber emergencyNumber, boolean z2, int i, UUSInfo uUSInfo, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().dial(str, z, emergencyNumber, z2, i, uUSInfo, message);
        this.simulatedCallState.onDial(str);
        resultSuccess(message, null);
    }

    public void dispose() {
        HandlerThread handlerThread = this.mHandlerThread;
        if (handlerThread != null) {
            handlerThread.quit();
        }
    }

    public void exitEmergencyCallbackMode(Message message) {
        unimplemented(message);
    }

    public void explicitCallTransfer(Message message) {
        if (this.simulatedCallState.onChld('4', (char) 0)) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void forceDataDormancy(Message message) {
        unimplemented(message);
    }

    public void getAllowedCarriers(Message message, WorkSource workSource) {
        unimplemented(message);
    }

    public void getAvailableNetworks(Message message) {
        unimplemented(message);
    }

    public void getBasebandVersion(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getBasebandVersion(message);
        resultSuccess(message, LOG_TAG);
    }

    public void getCDMASubscription(Message message) {
        resultSuccess(message, new String[]{"123", "456", "789", "234", "345"});
    }

    public void getCLIR(Message message) {
        unimplemented(message);
    }

    public void getCdmaBroadcastConfig(Message message) {
        unimplemented(message);
    }

    public void getCdmaSubscriptionSource(Message message) {
        unimplemented(message);
    }

    public synchronized void getCellInfoList(Message message, WorkSource workSource) {
        if (this.mShouldReturnCellInfo) {
            if (this.mCellInfoList == null) {
                new ArrayList().add(getCellInfoGsm());
            }
            resultSuccess(message, this.mCellInfoList);
        }
    }

    public void getCurrentCalls(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getCurrentCalls(message);
        if (this.mState != 1 || isSimLocked()) {
            resultFail(message, null, new CommandException(CommandException.Error.RADIO_NOT_AVAILABLE));
        } else {
            resultSuccess(message, this.simulatedCallState.getDriverCalls());
        }
    }

    public void getDataCallList(Message message) {
        resultSuccess(message, new ArrayList(0));
    }

    public void getDataRegistrationState(Message message) {
        this.mGetDataRegistrationStateCallCount.incrementAndGet();
        DataRegStateResult dataRegStateResult = new DataRegStateResult();
        dataRegStateResult.regState = this.mDataRegState;
        dataRegStateResult.rat = this.mDataRadioTech;
        dataRegStateResult.maxDataCalls = this.mMaxDataCalls;
        dataRegStateResult.reasonDataDenied = this.mReasonForDenial;
        resultSuccess(message, dataRegStateResult);
    }

    public void getDeviceIdentity(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getDeviceIdentity(message);
        resultSuccess(message, new String[]{FAKE_IMEI, FAKE_IMEISV, "1234", "1234"});
    }

    public int getGetDataRegistrationStateCallCount() {
        return this.mGetDataRegistrationStateCallCount.get();
    }

    public int getGetNetworkSelectionModeCallCount() {
        return this.getNetworkSelectionModeCallCount.get();
    }

    public int getGetOperatorCallCount() {
        this.mGetOperatorCallCount.get();
        return this.mGetOperatorCallCount.get();
    }

    public int getGetVoiceRegistrationStateCallCount() {
        return this.mGetVoiceRegistrationStateCallCount.get();
    }

    public void getGsmBroadcastConfig(Message message) {
        unimplemented(message);
    }

    public Handler getHandler() {
        return this.mHandlerThread.getThreadHandler();
    }

    public void getHardwareConfig(Message message) {
        unimplemented(message);
    }

    public void getIMEI(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getIMEI(message);
        String str = this.mImei;
        if (str == null) {
            str = FAKE_IMEI;
        }
        resultSuccess(message, str);
    }

    public void getIMEISV(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getIMEISV(message);
        String str = this.mImeiSv;
        if (str == null) {
            str = FAKE_IMEISV;
        }
        resultSuccess(message, str);
    }

    public void getIMSI(Message message) {
        getIMSIForApp(null, message);
    }

    public void getIMSIForApp(String str, Message message) {
        resultSuccess(message, FAKE_IMEI);
    }

    public void getIccCardStatus(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getIccCardStatus(message);
        IccCardStatus iccCardStatus = this.mIccCardStatus;
        if (iccCardStatus != null) {
            resultSuccess(message, iccCardStatus);
        } else {
            resultFail(message, null, new RuntimeException("IccCardStatus not set"));
        }
    }

    public void getIccSlotsStatus(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getIccSlotsStatus(message);
        IccSlotStatus iccSlotStatus = this.mIccSlotStatus;
        if (iccSlotStatus != null) {
            resultSuccess(message, iccSlotStatus);
        } else {
            resultFail(message, null, new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED));
        }
    }

    public void getImsRegistrationState(Message message) {
        if (this.mImsRegState == null) {
            this.mImsRegState = new int[]{1, 0};
        }
        resultSuccess(message, this.mImsRegState);
    }

    public void getLastCallFailCause(Message message) {
        LastCallFailCause lastCallFailCause = new LastCallFailCause();
        lastCallFailCause.causeCode = this.mNextCallFailCause;
        resultSuccess(message, lastCallFailCause);
    }

    public void getLastDataCallFailCause(Message message) {
        unimplemented(message);
    }

    @Deprecated
    public void getLastPdpFailCause(Message message) {
        unimplemented(message);
    }

    public void getModemActivityInfo(Message message, WorkSource workSource) {
        unimplemented(message);
    }

    public void getMute(Message message) {
        unimplemented(message);
    }

    public void getNetworkSelectionMode(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getNetworkSelectionMode(message);
        this.getNetworkSelectionModeCallCount.incrementAndGet();
        resultSuccess(message, new int[]{0});
    }

    public void getOperator(Message message) {
        this.mGetOperatorCallCount.incrementAndGet();
        resultSuccess(message, new String[]{FAKE_LONG_NAME, FAKE_SHORT_NAME, FAKE_MCC_MNC});
    }

    @Deprecated
    public void getPDPContextList(Message message) {
        getDataCallList(message);
    }

    public void getPreferredNetworkType(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getPreferredNetworkType(message);
        resultSuccess(message, new int[]{this.mNetworkType});
    }

    public void getPreferredVoicePrivacy(Message message) {
        unimplemented(message);
    }

    public void getRadioCapability(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getRadioCapability(message);
        resultSuccess(message, new RadioCapability(0, 0, 0, 65535, (String) null, 0));
    }

    public int getRilVersion() {
        return 11;
    }

    public void getSignalStrength(Message message) {
        if (this.mSignalStrength == null) {
            this.mSignalStrength = new SignalStrength(new CellSignalStrengthCdma(), new CellSignalStrengthGsm(20, 0, Integer.MAX_VALUE), new CellSignalStrengthWcdma(), new CellSignalStrengthTdscdma(), new CellSignalStrengthLte(), new CellSignalStrengthNr());
        }
        resultSuccess(message, this.mSignalStrength);
    }

    public void getSmscAddress(Message message) {
        unimplemented(message);
    }

    public void getVoiceRadioTechnology(Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().getVoiceRadioTechnology(message);
        resultSuccess(message, new int[]{this.mVoiceRadioTech});
    }

    public void getVoiceRegistrationState(Message message) {
        this.mGetVoiceRegistrationStateCallCount.incrementAndGet();
        VoiceRegStateResult voiceRegStateResult = new VoiceRegStateResult();
        voiceRegStateResult.regState = this.mVoiceRegState;
        voiceRegStateResult.rat = this.mVoiceRadioTech;
        voiceRegStateResult.cssSupported = this.mCssSupported;
        voiceRegStateResult.roamingIndicator = this.mRoamingIndicator;
        voiceRegStateResult.systemIsInPrl = this.mSystemIsInPrl;
        voiceRegStateResult.defaultRoamingIndicator = this.mDefaultRoamingIndicator;
        voiceRegStateResult.reasonForDenial = this.mReasonForDenial;
        resultSuccess(message, voiceRegStateResult);
    }

    public void handleCallSetupRequestFromSim(boolean z, Message message) {
        resultSuccess(message, null);
    }

    public void hangupConnection(int i, Message message) {
        if (this.simulatedCallState.onChld('1', (char) (i + 48))) {
            Rlog.i("GSM", "[SimCmd] hangupConnection: resultSuccess");
            resultSuccess(message, null);
        } else {
            Rlog.i("GSM", "[SimCmd] hangupConnection: resultFail");
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void hangupForegroundResumeBackground(Message message) {
        if (this.simulatedCallState.onChld('1', (char) 0)) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void hangupWaitingOrBackground(Message message) {
        if (this.simulatedCallState.onChld('0', (char) 0)) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void iccCloseLogicalChannel(int i, Message message) {
        unimplemented(message);
    }

    public void iccIO(int i, int i2, String str, int i3, int i4, int i5, String str2, String str3, Message message) {
        iccIOForApp(i, i2, str, i3, i4, i5, str2, str3, null, message);
    }

    public void iccIOForApp(int i, int i2, String str, int i3, int i4, int i5, String str2, String str3, String str4, Message message) {
        unimplemented(message);
    }

    public void iccOpenLogicalChannel(String str, int i, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().iccOpenLogicalChannel(str, i, message);
        resultSuccess(message, new int[]{this.mChannelId});
    }

    public void iccTransmitApduBasicChannel(int i, int i2, int i3, int i4, int i5, String str, Message message) {
        unimplemented(message);
    }

    public void iccTransmitApduLogicalChannel(int i, int i2, int i3, int i4, int i5, int i6, String str, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().iccTransmitApduLogicalChannel(i, i2, i3, i4, i5, i6, str, message);
        IccIoResult iccIoResult = this.mIccIoResultForApduLogicalChannel;
        if (iccIoResult != null) {
            resultSuccess(message, iccIoResult);
        } else {
            resultFail(message, null, new RuntimeException("IccIoResult not set"));
        }
    }

    public void invokeOemRilRequestRaw(byte[] bArr, Message message) {
        if (message != null) {
            AsyncResult.forMessage(message).result = bArr;
            message.sendToTarget();
        }
    }

    public void invokeOemRilRequestStrings(String[] strArr, Message message) {
        if (message != null) {
            AsyncResult.forMessage(message).result = strArr;
            message.sendToTarget();
        }
    }

    public boolean isDataAllowed() {
        return this.mAllowed.get();
    }

    public void notifyEmergencyCallbackMode() {
        if (this.mEmergencyCallbackModeRegistrant != null) {
            this.mEmergencyCallbackModeRegistrant.notifyRegistrant();
        }
    }

    public void notifyExitEmergencyCallbackMode() {
        if (this.mExitEmergencyCallbackModeRegistrants != null) {
            this.mExitEmergencyCallbackModeRegistrants.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    public void notifyGsmBroadcastSms(Object obj) {
        if (this.mGsmBroadcastSmsRegistrant != null) {
            this.mGsmBroadcastSmsRegistrant.notifyRegistrant(new AsyncResult((Object) null, obj, (Throwable) null));
        }
    }

    public void notifyIccSmsFull() {
        if (this.mIccSmsFullRegistrant != null) {
            this.mIccSmsFullRegistrant.notifyRegistrant();
        }
    }

    public void notifyImsNetworkStateChanged() {
        if (this.mImsNetworkStateChangedRegistrants != null) {
            this.mImsNetworkStateChangedRegistrants.notifyRegistrants();
        }
    }

    public void notifyModemReset() {
        if (this.mModemResetRegistrants != null) {
            this.mModemResetRegistrants.notifyRegistrants(new AsyncResult((Object) null, "Test", (Throwable) null));
        }
    }

    public void notifyNetworkStateChanged() {
        this.mNetworkStateRegistrants.notifyRegistrants();
    }

    public void notifyOtaProvisionStatusChanged() {
        if (this.mOtaProvisionRegistrants != null) {
            this.mOtaProvisionRegistrants.notifyRegistrants(new AsyncResult((Object) null, new int[]{8}, (Throwable) null));
        }
    }

    public void notifyRadioOn() {
        this.mOnRegistrants.notifyRegistrants();
    }

    public void notifySignalStrength() {
        if (this.mSignalStrength == null) {
            this.mSignalStrength = new SignalStrength(new CellSignalStrengthCdma(), new CellSignalStrengthGsm(20, 0, Integer.MAX_VALUE), new CellSignalStrengthWcdma(), new CellSignalStrengthTdscdma(), new CellSignalStrengthLte(), new CellSignalStrengthNr());
        }
        if (this.mSignalStrengthRegistrant != null) {
            this.mSignalStrengthRegistrant.notifyRegistrant(new AsyncResult((Object) null, this.mSignalStrength, (Throwable) null));
        }
    }

    public void notifySmsStatus(Object obj) {
        if (this.mSmsStatusRegistrant != null) {
            this.mSmsStatusRegistrant.notifyRegistrant(new AsyncResult((Object) null, obj, (Throwable) null));
        }
    }

    public void nvReadItem(int i, Message message, WorkSource workSource) {
        unimplemented(message);
    }

    public void nvResetConfig(int i, Message message) {
        unimplemented(message);
    }

    public void nvWriteCdmaPrl(byte[] bArr, Message message) {
        unimplemented(message);
    }

    public void nvWriteItem(int i, String str, Message message, WorkSource workSource) {
        unimplemented(message);
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void pauseResponses() {
        this.mPausedResponseCount++;
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void progressConnectingCallState() {
        this.simulatedCallState.progressConnectingCallState();
        this.mCallStateRegistrants.notifyRegistrants();
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void progressConnectingToActive() {
        this.simulatedCallState.progressConnectingToActive();
        this.mCallStateRegistrants.notifyRegistrants();
    }

    public void pullLceData(Message message) {
        unimplemented(message);
    }

    public void queryAvailableBandMode(Message message) {
        resultSuccess(message, new int[]{4, 2, 3, 4});
    }

    public void queryCLIP(Message message) {
        unimplemented(message);
    }

    public void queryCallForwardStatus(int i, int i2, String str, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().queryCallForwardStatus(i, i2, str, message);
        resultSuccess(message, null);
    }

    public void queryCallWaiting(int i, Message message) {
        unimplemented(message);
    }

    public void queryCdmaRoamingPreference(Message message) {
        unimplemented(message);
    }

    public void queryFacilityLock(String str, String str2, int i, Message message) {
        queryFacilityLockForApp(str, str2, i, null, message);
    }

    public void queryFacilityLockForApp(String str, String str2, int i, String str3, Message message) {
        if (str != null && str.equals("SC")) {
            if (message != null) {
                int[] iArr = {this.mSimLockEnabled ? 1 : 0};
                StringBuilder sb = new StringBuilder();
                sb.append("[SimCmd] queryFacilityLock: SIM is ");
                sb.append(iArr[0] == 0 ? "unlocked" : "locked");
                Rlog.i(LOG_TAG, sb.toString());
                resultSuccess(message, iArr);
                return;
            }
            return;
        }
        if (str == null || !str.equals("FD")) {
            unimplemented(message);
            return;
        }
        if (message != null) {
            int[] iArr2 = {this.mSimFdnEnabled ? 1 : 0};
            StringBuilder sb2 = new StringBuilder();
            sb2.append("[SimCmd] queryFacilityLock: FDN is ");
            sb2.append(iArr2[0] == 0 ? "disabled" : "enabled");
            Rlog.i(LOG_TAG, sb2.toString());
            resultSuccess(message, iArr2);
        }
    }

    public void queryTTYMode(Message message) {
        unimplemented(message);
    }

    public void registerForExitEmergencyCallbackMode(Handler handler, int i, Object obj) {
        MtkSimulatedCommandsBaseVerifier.getInstance().registerForExitEmergencyCallbackMode(handler, i, obj);
        super.registerForExitEmergencyCallbackMode(handler, i, obj);
    }

    public void registerForIccRefresh(Handler handler, int i, Object obj) {
        super.registerForIccRefresh(handler, i, obj);
        MtkSimulatedCommandsBaseVerifier.getInstance().registerForIccRefresh(handler, i, obj);
    }

    public void registerForLceInfo(Handler handler, int i, Object obj) {
        MtkSimulatedCommandsBaseVerifier.getInstance().registerForLceInfo(handler, i, obj);
    }

    public void registerForModemReset(Handler handler, int i, Object obj) {
        MtkSimulatedCommandsBaseVerifier.getInstance().registerForModemReset(handler, i, obj);
        super.registerForModemReset(handler, i, obj);
    }

    public void registerForNattKeepaliveStatus(Handler handler, int i, Object obj) {
        MtkSimulatedCommandsBaseVerifier.getInstance().registerForNattKeepaliveStatus(handler, i, obj);
    }

    public void registerForPcoData(Handler handler, int i, Object obj) {
    }

    public void rejectCall(Message message) {
        if (this.simulatedCallState.onChld('0', (char) 0)) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void reportSmsMemoryStatus(boolean z, Message message) {
        resultSuccess(message, null);
        MtkSimulatedCommandsBaseVerifier.getInstance().reportSmsMemoryStatus(z, message);
    }

    public void reportStkServiceIsRunning(Message message) {
        resultSuccess(message, null);
    }

    public void requestIccSimAuthentication(int i, String str, String str2, Message message) {
        unimplemented(message);
    }

    public void requestShutdown(Message message) {
        setRadioState(2, false);
    }

    public void resetRadio(Message message) {
        unimplemented(message);
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void resumeResponses() {
        int i = this.mPausedResponseCount - 1;
        this.mPausedResponseCount = i;
        if (i != 0) {
            Rlog.e("GSM", "MtkSimulatedCommandsBase.resumeResponses < 0");
            return;
        }
        int size = this.mPausedResponses.size();
        for (int i2 = 0; i2 < size; i2++) {
            this.mPausedResponses.get(i2).sendToTarget();
        }
        this.mPausedResponses.clear();
    }

    public void sendBurstDtmf(String str, int i, int i2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().sendBurstDtmf(str, i, i2, message);
        resultSuccess(message, null);
    }

    public void sendCDMAFeatureCode(String str, Message message) {
        unimplemented(message);
    }

    public void sendCdmaSMSExpectMore(byte[] bArr, Message message) {
    }

    public void sendCdmaSms(byte[] bArr, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().sendCdmaSms(bArr, message);
        resultSuccess(message, null);
    }

    public void sendDeviceState(int i, boolean z, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().sendDeviceState(i, z, message);
        resultSuccess(message, null);
    }

    public void sendDtmf(char c, Message message) {
        resultSuccess(message, null);
    }

    public void sendEnvelope(String str, Message message) {
        resultSuccess(message, null);
    }

    public void sendEnvelopeWithStatus(String str, Message message) {
        resultSuccess(message, null);
    }

    public void sendImsCdmaSms(byte[] bArr, int i, int i2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().sendImsCdmaSms(bArr, i, i2, message);
        resultSuccess(message, new SmsResponse(0, (String) null, 0));
    }

    public void sendImsGsmSms(String str, String str2, int i, int i2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().sendImsGsmSms(str, str2, i, i2, message);
        resultSuccess(message, new SmsResponse(0, (String) null, 0));
    }

    public void sendSMS(String str, String str2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().sendSMS(str, str2, message);
        resultSuccess(message, new SmsResponse(0, (String) null, 0));
    }

    public void sendSMSExpectMore(String str, String str2, Message message) {
        unimplemented(message);
    }

    public void sendStkCcAplha(String str) {
        triggerIncomingStkCcAlpha(str);
    }

    public void sendTerminalResponse(String str, Message message) {
        resultSuccess(message, null);
    }

    public void sendUSSD(String str, Message message) {
        if (str.equals("#646#")) {
            resultSuccess(message, null);
            triggerIncomingUssd("0", "You have NNN minutes remaining.");
        } else {
            resultSuccess(message, null);
            triggerIncomingUssd("0", "All Done");
        }
    }

    public void separateConnection(int i, Message message) {
        if (this.simulatedCallState.onChld('2', (char) (i + 48))) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    public void setAllowedCarriers(CarrierRestrictionRules carrierRestrictionRules, Message message, WorkSource workSource) {
        unimplemented(message);
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void setAutoProgressConnectingCall(boolean z) {
        this.simulatedCallState.setAutoProgressConnectingCall(z);
    }

    public void setBandMode(int i, Message message) {
        resultSuccess(message, null);
    }

    public void setCLIR(int i, Message message) {
        unimplemented(message);
    }

    public void setCallForward(int i, int i2, int i3, String str, int i4, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().setCallForward(i, i2, i3, str, i4, message);
        resultSuccess(message, null);
    }

    public void setCallWaiting(boolean z, int i, Message message) {
        unimplemented(message);
    }

    public void setCarrierInfoForImsiEncryption(ImsiEncryptionInfo imsiEncryptionInfo, Message message) {
        if (message != null) {
            AsyncResult.forMessage(message).result = imsiEncryptionInfo;
            message.sendToTarget();
        }
    }

    public void setCdmaBroadcastActivation(boolean z, Message message) {
        unimplemented(message);
    }

    public void setCdmaBroadcastConfig(CdmaSmsBroadcastConfigInfo[] cdmaSmsBroadcastConfigInfoArr, Message message) {
        unimplemented(message);
    }

    public void setCdmaRoamingPreference(int i, Message message) {
        unimplemented(message);
    }

    public void setCdmaSubscriptionSource(int i, Message message) {
        unimplemented(message);
    }

    public void setCellInfoList(List<CellInfo> list) {
        this.mCellInfoList = list;
    }

    public synchronized void setCellInfoListBehavior(boolean z) {
        this.mShouldReturnCellInfo = z;
    }

    public void setCellInfoListRate(int i, Message message, WorkSource workSource) {
        unimplemented(message);
    }

    public void setDataAllowed(boolean z, Message message) {
        log("setDataAllowed = " + z);
        this.mAllowed.set(z);
        resultSuccess(message, null);
    }

    public void setDataCallResult(boolean z, SetupDataCallResult setupDataCallResult) {
        this.mSetupDataCallResult = setupDataCallResult;
        this.mDcSuccess = z;
    }

    public void setDataProfile(DataProfile[] dataProfileArr, boolean z, Message message) {
    }

    public void setDataRadioTech(int i) {
        this.mDataRadioTech = i;
    }

    public void setDataRegState(int i) {
        this.mDataRegState = i;
    }

    public void setEmergencyCallbackMode(Handler handler, int i, Object obj) {
        MtkSimulatedCommandsBaseVerifier.getInstance().setEmergencyCallbackMode(handler, i, obj);
        super.setEmergencyCallbackMode(handler, i, obj);
    }

    public void setFacilityLock(String str, boolean z, String str2, int i, Message message) {
        setFacilityLockForApp(str, z, str2, i, null, message);
    }

    public void setFacilityLockForApp(String str, boolean z, String str2, int i, String str3, Message message) {
        if (str != null && str.equals("SC")) {
            if (str2 == null || !str2.equals(this.mPinCode)) {
                Rlog.i(LOG_TAG, "[SimCmd] setFacilityLock: pin failed!");
                resultFail(message, null, new CommandException(CommandException.Error.GENERIC_FAILURE));
                return;
            } else {
                Rlog.i(LOG_TAG, "[SimCmd] setFacilityLock: pin is valid");
                this.mSimLockEnabled = z;
                resultSuccess(message, null);
                return;
            }
        }
        if (str == null || !str.equals("FD")) {
            unimplemented(message);
            return;
        }
        if (str2 == null || !str2.equals(this.mPin2Code)) {
            Rlog.i(LOG_TAG, "[SimCmd] setFacilityLock: pin2 failed!");
            resultFail(message, null, new CommandException(CommandException.Error.GENERIC_FAILURE));
        } else {
            Rlog.i(LOG_TAG, "[SimCmd] setFacilityLock: pin2 is valid");
            this.mSimFdnEnabled = z;
            resultSuccess(message, null);
        }
    }

    public void setGsmBroadcastActivation(boolean z, Message message) {
        unimplemented(message);
    }

    public void setGsmBroadcastConfig(SmsBroadcastConfigInfo[] smsBroadcastConfigInfoArr, Message message) {
        unimplemented(message);
    }

    public void setIMEI(String str) {
        this.mImei = str;
    }

    public void setIMEISV(String str) {
        this.mImeiSv = str;
    }

    public void setIccCardStatus(IccCardStatus iccCardStatus) {
        this.mIccCardStatus = iccCardStatus;
    }

    public void setIccIoResultForApduLogicalChannel(IccIoResult iccIoResult) {
        this.mIccIoResultForApduLogicalChannel = iccIoResult;
    }

    public void setIccSlotStatus(IccSlotStatus iccSlotStatus) {
        this.mIccSlotStatus = iccSlotStatus;
    }

    public void setImsRegistrationState(int[] iArr) {
        this.mImsRegState = iArr;
    }

    public void setInitialAttachApn(DataProfile dataProfile, boolean z, Message message) {
    }

    public void setLinkCapacityReportingCriteria(int i, int i2, int i3, int[] iArr, int[] iArr2, int i4, Message message) {
    }

    public void setLocationUpdates(boolean z, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().setLocationUpdates(z, message);
        resultSuccess(message, null);
    }

    public void setLogicalToPhysicalSlotMapping(int[] iArr, Message message) {
        unimplemented(message);
    }

    public void setMute(boolean z, Message message) {
        unimplemented(message);
    }

    public void setNetworkSelectionModeAutomatic(Message message) {
        unimplemented(message);
    }

    public void setNetworkSelectionModeManual(String str, int i, Message message) {
        unimplemented(message);
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void setNextCallFailCause(int i) {
        this.mNextCallFailCause = i;
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void setNextDialFailImmediately(boolean z) {
        this.simulatedCallState.setNextDialFailImmediately(z);
    }

    public void setOnRestrictedStateChanged(Handler handler, int i, Object obj) {
        super.setOnRestrictedStateChanged(handler, i, obj);
        MtkSimulatedCommandsBaseVerifier.getInstance().setOnRestrictedStateChanged(handler, i, obj);
    }

    public void setOpenChannelId(int i) {
        this.mChannelId = i;
    }

    public void setPhoneType(int i) {
    }

    public void setPin1RemainingAttempt(int i) {
        this.mPin1attemptsRemaining = i;
    }

    public void setPreferredNetworkType(int i, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().setPreferredNetworkType(i, message);
        this.mNetworkType = i;
        resultSuccess(message, null);
    }

    public void setPreferredVoicePrivacy(boolean z, Message message) {
        unimplemented(message);
    }

    public void setRadioPower(boolean z, Message message) {
        if (this.mIsRadioPowerFailResponse) {
            resultFail(message, null, new RuntimeException("setRadioPower failed!"));
            return;
        }
        if (z) {
            setRadioState(1, false);
        } else {
            setRadioState(0, false);
        }
        resultSuccess(message, null);
    }

    public void setRadioPowerFailResponse(boolean z) {
        this.mIsRadioPowerFailResponse = z;
    }

    public void setSignalStrength(SignalStrength signalStrength) {
        this.mSignalStrength = signalStrength;
    }

    public void setSignalStrengthReportingCriteria(SignalThresholdInfo signalThresholdInfo, int i, Message message) {
    }

    public void setSimCardPower(int i, Message message, WorkSource workSource) {
    }

    public void setSmscAddress(String str, Message message) {
        unimplemented(message);
    }

    public void setSuppServiceNotifications(boolean z, Message message) {
        resultSuccess(message, null);
        if (z && this.mSsnNotifyOn) {
            Rlog.w(LOG_TAG, "Supp Service Notifications already enabled!");
        }
        this.mSsnNotifyOn = z;
    }

    public void setTTYMode(int i, Message message) {
        Rlog.w(LOG_TAG, "Not implemented in MtkSimulatedCommandsBase");
        unimplemented(message);
    }

    public void setUnsolResponseFilter(int i, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().setUnsolResponseFilter(i, message);
        resultSuccess(message, null);
    }

    public void setVoiceRadioTech(int i) {
        this.mVoiceRadioTech = i;
    }

    public void setVoiceRegState(int i) {
        this.mVoiceRegState = i;
    }

    public void setupDataCall(int i, DataProfile dataProfile, boolean z, boolean z2, int i2, LinkProperties linkProperties, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().setupDataCall(i, dataProfile, z, z2, i2, linkProperties, message);
        if (this.mSetupDataCallResult == null) {
            try {
                SetupDataCallResult setupDataCallResult = new SetupDataCallResult();
                this.mSetupDataCallResult = setupDataCallResult;
                setupDataCallResult.status = 0;
                this.mSetupDataCallResult.suggestedRetryTime = -1;
                this.mSetupDataCallResult.cid = 1;
                this.mSetupDataCallResult.active = 2;
                this.mSetupDataCallResult.type = "IP";
                this.mSetupDataCallResult.ifname = "rmnet_data7";
                this.mSetupDataCallResult.addresses = "12.34.56.78";
                this.mSetupDataCallResult.dnses = "98.76.54.32";
                this.mSetupDataCallResult.gateways = "11.22.33.44";
                this.mSetupDataCallResult.pcscf = "";
                this.mSetupDataCallResult.mtu = 1440;
            } catch (Exception e) {
            }
        }
        if (this.mDcSuccess) {
            resultSuccess(message, this.mSetupDataCallResult);
        } else {
            resultFail(message, this.mSetupDataCallResult, new RuntimeException("Setup data call failed!"));
        }
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void shutdown() {
        setRadioState(2, false);
        Looper looper = this.mHandlerThread.getLooper();
        if (looper != null) {
            looper.quit();
        }
    }

    public void startDtmf(char c, Message message) {
        resultSuccess(message, null);
    }

    public void startLceService(int i, boolean z, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().startLceService(i, z, message);
    }

    public void startNattKeepalive(int i, KeepalivePacketData keepalivePacketData, int i2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().startNattKeepalive(i, keepalivePacketData, i2, message);
    }

    public void startNetworkScan(NetworkScanRequest networkScanRequest, Message message) {
        unimplemented(message);
    }

    public void stopDtmf(Message message) {
        resultSuccess(message, null);
    }

    public void stopLceService(Message message) {
        unimplemented(message);
    }

    public void stopNattKeepalive(int i, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().stopNattKeepalive(i, message);
    }

    public void stopNetworkScan(Message message) {
        unimplemented(message);
    }

    public void supplyIccPin(String str, Message message) {
        if (this.mSimLockedState != SimLockState.REQUIRE_PIN) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin: wrong state, state=" + this.mSimLockedState);
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
            return;
        }
        if (str != null && str.equals(this.mPinCode)) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin: success!");
            this.mPinUnlockAttempts = 0;
            this.mSimLockedState = SimLockState.NONE;
            this.mIccStatusChangedRegistrants.notifyRegistrants();
            resultSuccess(message, null);
            return;
        }
        if (message != null) {
            this.mPinUnlockAttempts++;
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin: failed! attempt=" + this.mPinUnlockAttempts);
            if (this.mPinUnlockAttempts >= 5) {
                Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin: set state to REQUIRE_PUK");
                this.mSimLockedState = SimLockState.REQUIRE_PUK;
            }
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
        }
    }

    public void supplyIccPin2(String str, Message message) {
        if (this.mSimFdnEnabledState != SimFdnState.REQUIRE_PIN2) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin2: wrong state, state=" + this.mSimFdnEnabledState);
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
            return;
        }
        if (str != null && str.equals(this.mPin2Code)) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin2: success!");
            this.mPin2UnlockAttempts = 0;
            this.mSimFdnEnabledState = SimFdnState.NONE;
            resultSuccess(message, null);
            return;
        }
        if (message != null) {
            this.mPin2UnlockAttempts++;
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin2: failed! attempt=" + this.mPin2UnlockAttempts);
            if (this.mPin2UnlockAttempts >= 5) {
                Rlog.i(LOG_TAG, "[SimCmd] supplyIccPin2: set state to REQUIRE_PUK2");
                this.mSimFdnEnabledState = SimFdnState.REQUIRE_PUK2;
            }
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
        }
    }

    public void supplyIccPin2ForApp(String str, String str2, Message message) {
        unimplemented(message);
    }

    public void supplyIccPinForApp(String str, String str2, Message message) {
        MtkSimulatedCommandsBaseVerifier.getInstance().supplyIccPinForApp(str, str2, message);
        String str3 = this.mPinCode;
        if (str3 != null && str3.equals(str)) {
            resultSuccess(message, null);
            return;
        }
        Rlog.i(LOG_TAG, "[SimCmd] supplyIccPinForApp: pin failed!");
        Throwable commandException = new CommandException(CommandException.Error.PASSWORD_INCORRECT);
        int[] iArr = new int[1];
        int i = this.mPin1attemptsRemaining - 1;
        this.mPin1attemptsRemaining = i;
        if (i < 0) {
            i = 0;
        }
        iArr[0] = i;
        resultFail(message, iArr, commandException);
    }

    public void supplyIccPuk(String str, String str2, Message message) {
        if (this.mSimLockedState != SimLockState.REQUIRE_PUK) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk: wrong state, state=" + this.mSimLockedState);
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
            return;
        }
        if (str != null && str.equals(SIM_PUK_CODE)) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk: success!");
            this.mSimLockedState = SimLockState.NONE;
            this.mPukUnlockAttempts = 0;
            this.mIccStatusChangedRegistrants.notifyRegistrants();
            resultSuccess(message, null);
            return;
        }
        if (message != null) {
            this.mPukUnlockAttempts++;
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk: failed! attempt=" + this.mPukUnlockAttempts);
            if (this.mPukUnlockAttempts >= 10) {
                Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk: set state to SIM_PERM_LOCKED");
                this.mSimLockedState = SimLockState.SIM_PERM_LOCKED;
            }
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
        }
    }

    public void supplyIccPuk2(String str, String str2, Message message) {
        if (this.mSimFdnEnabledState != SimFdnState.REQUIRE_PUK2) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk2: wrong state, state=" + this.mSimLockedState);
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
            return;
        }
        if (str != null && str.equals(SIM_PUK2_CODE)) {
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk2: success!");
            this.mSimFdnEnabledState = SimFdnState.NONE;
            this.mPuk2UnlockAttempts = 0;
            resultSuccess(message, null);
            return;
        }
        if (message != null) {
            this.mPuk2UnlockAttempts++;
            Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk2: failed! attempt=" + this.mPuk2UnlockAttempts);
            if (this.mPuk2UnlockAttempts >= 10) {
                Rlog.i(LOG_TAG, "[SimCmd] supplyIccPuk2: set state to SIM_PERM_LOCKED");
                this.mSimFdnEnabledState = SimFdnState.SIM_PERM_LOCKED;
            }
            resultFail(message, null, new CommandException(CommandException.Error.PASSWORD_INCORRECT));
        }
    }

    public void supplyIccPuk2ForApp(String str, String str2, String str3, Message message) {
        unimplemented(message);
    }

    public void supplyIccPukForApp(String str, String str2, String str3, Message message) {
        unimplemented(message);
    }

    public void supplyNetworkDepersonalization(String str, Message message) {
        unimplemented(message);
    }

    public void supplySimDepersonalization(IccCardApplicationStatus.PersoSubState persoSubState, String str, Message message) {
    }

    public void switchWaitingOrHoldingAndActive(Message message) {
        if (this.simulatedCallState.onChld('2', (char) 0)) {
            resultSuccess(message, null);
        } else {
            resultFail(message, null, new RuntimeException("Hangup Error"));
        }
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerHangupAll() {
        this.simulatedCallState.triggerHangupAll();
        this.mCallStateRegistrants.notifyRegistrants();
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerHangupBackground() {
        this.simulatedCallState.triggerHangupBackground();
        this.mCallStateRegistrants.notifyRegistrants();
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerHangupForeground() {
        this.simulatedCallState.triggerHangupForeground();
        this.mCallStateRegistrants.notifyRegistrants();
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerIncomingSMS(String str) {
    }

    public void triggerIncomingStkCcAlpha(String str) {
        if (this.mCatCcAlphaRegistrant != null) {
            this.mCatCcAlphaRegistrant.notifyResult(str);
        }
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerIncomingUssd(String str, String str2) {
        if (this.mUSSDRegistrant != null) {
            this.mUSSDRegistrant.notifyResult(new String[]{str, str2});
        }
    }

    public void triggerNITZupdate(String str) {
        if (str != null) {
            this.mNITZTimeRegistrant.notifyRegistrant(new AsyncResult((Object) null, new Object[]{str, Long.valueOf(SystemClock.elapsedRealtime())}, (Throwable) null));
        }
    }

    public void triggerRestrictedStateChanged(int i) {
        if (this.mRestrictedStateRegistrant != null) {
            this.mRestrictedStateRegistrant.notifyRegistrant(new AsyncResult((Object) null, Integer.valueOf(i), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerRing(String str) {
        this.simulatedCallState.triggerRing(str);
        this.mCallStateRegistrants.notifyRegistrants();
    }

    @Override // com.mediatek.internal.telephony.test.MtkSimulatedRadioControl
    public void triggerSsn(int i, int i2) {
        SuppServiceNotification suppServiceNotification = new SuppServiceNotification();
        suppServiceNotification.notificationType = i;
        suppServiceNotification.code = i2;
        this.mSsnRegistrant.notifyRegistrant(new AsyncResult((Object) null, suppServiceNotification, (Throwable) null));
    }

    public void unregisterForIccRefresh(Handler handler) {
        super.unregisterForIccRefresh(handler);
        MtkSimulatedCommandsBaseVerifier.getInstance().unregisterForIccRefresh(handler);
    }

    public void unregisterForLceInfo(Handler handler) {
        MtkSimulatedCommandsBaseVerifier.getInstance().unregisterForLceInfo(handler);
    }

    public void unregisterForNattKeepaliveStatus(Handler handler) {
        MtkSimulatedCommandsBaseVerifier.getInstance().unregisterForNattKeepaliveStatus(handler);
    }

    public void unregisterForPcoData(Handler handler) {
    }

    public void writeSmsToRuim(int i, byte[] bArr, Message message) {
        Rlog.d(LOG_TAG, "Write SMS to RUIM with status " + i);
        unimplemented(message);
    }

    public void writeSmsToSim(int i, String str, String str2, Message message) {
        Rlog.d(LOG_TAG, "Write SMS to SIM with status " + i);
        unimplemented(message);
    }
}

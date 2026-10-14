package com.mediatek.internal.telephony.imsphone;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.media.AudioManager;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telecom.VideoProfile;
import android.telephony.CarrierConfigManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.ImsStreamMediaProfile;
import android.telephony.ims.ImsSuppServiceNotification;
import android.telephony.ims.feature.ImsFeature;
import android.text.TextUtils;
import com.android.ims.FeatureConnector;
import com.android.ims.ImsCall;
import com.android.ims.ImsException;
import com.android.ims.ImsManager;
import com.android.ims.ImsUtInterface;
import com.android.ims.internal.ConferenceParticipant;
import com.android.ims.internal.IImsCallSession;
import com.android.internal.telephony.Call;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.RegistrantList;
import com.android.internal.telephony.SettingsObserver;
import com.android.internal.telephony.SomeArgs;
import com.android.internal.telephony.imsphone.ImsPhone;
import com.android.internal.telephony.imsphone.ImsPhoneCall;
import com.android.internal.telephony.imsphone.ImsPhoneCallTracker;
import com.android.internal.telephony.imsphone.ImsPhoneCallTrackerInjector;
import com.android.internal.telephony.imsphone.ImsPhoneConnection;
import com.android.internal.telephony.imsphone.ImsPullCall;
import com.mediatek.ims.MtkImsCall;
import com.mediatek.ims.MtkImsConnectionStateListener;
import com.mediatek.ims.internal.MtkImsManager;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkIncomingCallChecker;
import com.mediatek.internal.telephony.MtkSuppServHelper;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimConstants;
import java.util.Iterator;
import java.util.List;
import mediatek.telecom.FormattedLog;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsPhoneCallTracker extends ImsPhoneCallTracker implements ImsPullCall {
    private static final int EVENT_RESUME_BACKROUND_CALL = 104;
    private static final int EVENT_RETRY_DATA_ENABLED_CHANGED = 105;
    private static final int EVENT_ROAMING_OFF = 102;
    private static final int EVENT_ROAMING_ON = 101;
    private static final int EVENT_ROAMING_SETTING_CHANGE = 103;
    private static final int IMS_RTT_CALL_TYPE_CS = 0;
    private static final int IMS_RTT_CALL_TYPE_CS_NO_TTY = 3;
    private static final int IMS_RTT_CALL_TYPE_PS = 2;
    private static final int IMS_RTT_CALL_TYPE_RTT = 1;
    public static final int IMS_SESSION_MODIFY_OPERATION_FLAG = 32768;
    private static final int IMS_VIDEO_CALL = 21;
    private static final int IMS_VIDEO_CONF = 23;
    private static final int IMS_VIDEO_CONF_PARTS = 25;
    private static final int IMS_VOICE_CALL = 20;
    private static final int IMS_VOICE_CONF = 22;
    private static final int IMS_VOICE_CONF_PARTS = 24;
    private static final int INVALID_CALL_MODE = 255;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final boolean TELDBG;
    private RegistrantList mCallsDisconnectedDuringSrvccRegistrants;
    private boolean mCarrierSwitchWfcModeRequired;
    private boolean mDialAsECC;
    private boolean mIgnoreDataRoaming;
    protected BroadcastReceiver mImsBaseReceiver;
    private int mImsRegistrationErrorCode;
    private int mImsRttCallType;
    private MtkImsConnectionStateListener mImsStateListener;
    private MtkIncomingCallChecker mIncomingCallCheker;
    private IncomingCallEventRecevier mIndicationReceiver;
    private boolean mIsDataRoaming;
    private boolean mIsDataRoamingSettingEnabled;
    private boolean mIsImsEccSupported;
    private boolean mIsOnCallResumed;
    private boolean mIsRttCallMergeSupported;
    private boolean mIsRttEmcGuardTimerSupported;
    private int mLastDataEnabledReason;
    private ImsCall.Listener mMtkImsCallListener;
    private BroadcastReceiver mMultiSimConfigChangedReceiver;
    protected final SubscriptionManager.OnSubscriptionsChangedListener mOnSubscriptionsChangedListener;
    private boolean mRoamingVariablesInited;
    private RttEmcGuardTimerUtil mRttEmcGuardTimerUtil;
    private final SettingsObserver mSettingsObserver;
    private SubscriptionManager mSubscriptionManager;
    private int mWifiPdnOOSState;
    static String LOG_TAG = "MtkImsPhoneCallTracker";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker$5, reason: invalid class name */
    class AnonymousClass5 extends BroadcastReceiver {
        AnonymousClass5() {
        }

        static /* synthetic */ int lambda$onReceive$0() {
            return 0;
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            int intExtra = intent.getIntExtra("android.telephony.extra.ACTIVE_SIM_SUPPORTED_COUNT", 0);
            MtkImsPhoneCallTracker.this.log("ACTION_MULTI_SIM_CONFIG_CHANGED, numOfActiveModems: " + intExtra);
            MtkImsPhoneCallTracker.this.setRetryTimeout(new FeatureConnector.RetryTimeout() { // from class: com.mediatek.internal.telephony.imsphone.-$$Lambda$MtkImsPhoneCallTracker$5$5bSUBH3tQNa5RnVbp5vBHWHn5NE
                public final int get() {
                    return MtkImsPhoneCallTracker.AnonymousClass5.lambda$onReceive$0();
                }
            });
        }
    }

    public class IncomingCallEventRecevier extends BroadcastReceiver implements MtkIncomingCallChecker.OnCheckCompleteListener {
        public IncomingCallEventRecevier() {
        }

        @Override // com.mediatek.internal.telephony.MtkIncomingCallChecker.OnCheckCompleteListener
        public void onCheckComplete(boolean z, Object obj) {
            int i = 1;
            boolean z2 = true;
            Intent intent = (Intent) obj;
            int intExtra = intent != null ? intent.getIntExtra("android:phoneId", -1) : -1;
            if (z) {
                i = 16;
                z2 = false;
            }
            MtkImsPhoneCallTracker.this.log("onCheckComplete(): intent = " + intent + ", isAllow = " + z2 + ", cause = " + i);
            try {
                if (MtkImsPhoneCallTracker.this.mImsManager instanceof MtkImsManager) {
                    MtkImsPhoneCallTracker.this.mImsManager.setCallIndication(intExtra, intent, z2, i);
                }
            } catch (ImsException e) {
                MtkImsPhoneCallTracker.this.loge("onCheckComplete() ImsException " + e);
            }
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("com.android.ims.IMS_INCOMING_CALL_INDICATION")) {
                MtkImsPhoneCallTracker.this.log("onReceive() indication call intent");
                if (MtkImsPhoneCallTracker.this.mImsManager == null) {
                    MtkImsPhoneCallTracker.this.log("onReceive() no ims manager");
                    return;
                }
                int intExtra = intent.getIntExtra("android:phoneId", -1);
                int subId = MtkImsPhoneCallTracker.this.mPhone.getSubId();
                String stringExtra = intent.getStringExtra("android:imsDialString");
                MtkImsPhoneCallTracker.this.log("onReceive() : subId = " + subId + ", number =" + stringExtra + ", phoneId = " + intExtra);
                if (intExtra != MtkImsPhoneCallTracker.this.mPhone.getPhoneId()) {
                    return;
                }
                MtkImsPhoneCallTracker.this.mIncomingCallCheker = new MtkIncomingCallChecker("ims_call_pre_check", intent);
                if (MtkImsPhoneCallTracker.this.mIncomingCallCheker.startIncomingCallNumberCheck(MtkImsPhoneCallTracker.this.mPhone.getContext(), subId, stringExtra, this)) {
                    MtkImsPhoneCallTracker.this.log("onReceive() startIncomingCallNumberCheck true. start check ");
                    return;
                }
                MtkImsPhoneCallTracker.this.log("onReceive() startIncomingCallNumberCheck false, and flow continues");
                MtkImsPhoneCallTracker.this.log("setCallIndication : intent = " + intent + ", isAllow = true, cause = 1");
                try {
                    if (MtkImsPhoneCallTracker.this.mImsManager instanceof MtkImsManager) {
                        MtkImsPhoneCallTracker.this.mImsManager.setCallIndication(intExtra, intent, true, 1);
                    }
                } catch (ImsException e) {
                    MtkImsPhoneCallTracker.this.loge("setCallIndication ImsException " + e);
                }
            }
        }
    }

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MtkImsPhoneCallTracker(ImsPhone imsPhone) {
        super(imsPhone);
        this.mRingingCall = new MtkImsPhoneCall(this, "RG");
        this.mForegroundCall = new MtkImsPhoneCall(this, "FG");
        this.mBackgroundCall = new MtkImsPhoneCall(this, "BG");
        this.mHandoverCall = new MtkImsPhoneCall(this, "HO");
        this.mDialAsECC = false;
        this.mIsOnCallResumed = false;
        this.mIsRttEmcGuardTimerSupported = false;
        this.mIsImsEccSupported = false;
        this.mWifiPdnOOSState = 2;
        this.mRoamingVariablesInited = false;
        this.mOnSubscriptionsChangedListener = new SubscriptionManager.OnSubscriptionsChangedListener() { // from class: com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker.1
            @Override // android.telephony.SubscriptionManager.OnSubscriptionsChangedListener
            public void onSubscriptionsChanged() {
                MtkImsPhoneCallTracker.this.log("SubscriptionListener.onSubscriptionInfoChanged, subId=" + MtkImsPhoneCallTracker.this.mPhone.getSubId());
                if (SubscriptionManager.isValidSubscriptionId(MtkImsPhoneCallTracker.this.mPhone.getSubId())) {
                    if (!MtkImsPhoneCallTracker.this.mRoamingVariablesInited) {
                        MtkImsPhoneCallTracker.this.mRoamingVariablesInited = true;
                        MtkImsPhoneCallTracker.this.initRoamingAndRoamingSetting();
                    }
                    MtkImsPhoneCallTracker.this.registerSettingsObserver();
                }
            }
        };
        this.mIsDataRoaming = false;
        this.mIsDataRoamingSettingEnabled = false;
        this.mIgnoreDataRoaming = false;
        this.mCarrierSwitchWfcModeRequired = false;
        this.mIsRttCallMergeSupported = false;
        this.mImsRttCallType = 2;
        this.mIncomingCallCheker = null;
        this.mCallsDisconnectedDuringSrvccRegistrants = new RegistrantList();
        this.mImsStateListener = new MtkImsConnectionStateListener() { // from class: com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker.2
            public void onCapabilitiesStatusChanged(ImsFeature.Capabilities capabilities) {
                MtkImsPhoneCallTracker.this.log("onCapabilitiesStatusChanged: " + capabilities);
                SomeArgs someArgsObtain = SomeArgs.obtain();
                someArgsObtain.arg1 = capabilities;
                MtkImsPhoneCallTracker.this.removeMessages(26);
                MtkImsPhoneCallTracker.this.obtainMessage(26, someArgsObtain).sendToTarget();
                MtkImsPhoneCallTracker.this.notifyRttImsRegister(capabilities);
            }

            public void onImsEmergencyCapabilityChanged(boolean z) {
                MtkImsPhoneCallTracker.this.log("onImsEmergencyCapabilityChanged: " + z);
                MtkImsPhoneCallTracker.this.mPhone.onFeatureCapabilityChanged();
                MtkImsPhoneCallTracker.this.mIsImsEccSupported = z;
                ((MtkImsPhone) MtkImsPhoneCallTracker.this.mPhone).updateIsEmergencyOnly();
            }

            public void onWifiPdnOOSStateChanged(int i) {
                MtkImsPhoneCallTracker.this.log("onWifiPdnOOSStateChanged: " + i);
                MtkImsPhoneCallTracker.this.mWifiPdnOOSState = i;
            }
        };
        this.mMtkImsCallListener = new MtkImsCall.Listener() { // from class: com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker.3
            public void onCallHandover(ImsCall imsCall, int i, int i2, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallHandover(imsCall, i, i2, imsReasonInfo);
            }

            public void onCallHandoverFailed(ImsCall imsCall, int i, int i2, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallHandoverFailed(imsCall, i, i2, imsReasonInfo);
            }

            public void onCallHeld(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallHeld(imsCall);
            }

            public void onCallHoldFailed(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallHoldFailed(imsCall, imsReasonInfo);
            }

            public void onCallHoldReceived(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallHoldReceived(imsCall);
            }

            public void onCallInviteParticipantsRequestDelivered(ImsCall imsCall) {
                MtkImsPhoneCallTracker.this.log("onCallInviteParticipantsRequestDelivered");
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                if (imsPhoneConnectionFindConnection == null || !(imsPhoneConnectionFindConnection instanceof MtkImsPhoneConnection)) {
                    return;
                }
                ((MtkImsPhoneConnection) imsPhoneConnectionFindConnection).notifyConferenceParticipantsInvited(true);
            }

            public void onCallInviteParticipantsRequestFailed(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                MtkImsPhoneCallTracker.this.log("onCallInviteParticipantsRequestFailed reasonCode=" + imsReasonInfo.getCode());
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                if (imsPhoneConnectionFindConnection == null || !(imsPhoneConnectionFindConnection instanceof MtkImsPhoneConnection)) {
                    return;
                }
                ((MtkImsPhoneConnection) imsPhoneConnectionFindConnection).notifyConferenceParticipantsInvited(false);
            }

            public void onCallMergeFailed(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallMergeFailed(imsCall, imsReasonInfo);
            }

            public void onCallMerged(ImsCall imsCall, ImsCall imsCall2, boolean z) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallMerged(imsCall, imsCall2, z);
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                if (imsPhoneConnectionFindConnection == null || !(imsPhoneConnectionFindConnection instanceof MtkImsPhoneConnection)) {
                    return;
                }
                MtkImsPhoneConnection mtkImsPhoneConnection = (MtkImsPhoneConnection) imsPhoneConnectionFindConnection;
                FormattedLog formattedLogBuildDumpInfo = new FormattedLog.Builder().setCategory("CC").setServiceName("ImsPhone").setOpType(FormattedLog.OpType.DUMP).setCallNumber(MtkImsPhoneCallTracker.sensitiveEncode(imsPhoneConnectionFindConnection.getAddress())).setCallId(MtkImsPhoneCallTracker.this.getConnectionCallId(mtkImsPhoneConnection)).setStatusInfo("state", "disconnected").setStatusInfo("isConfCall", "No").setStatusInfo("isConfChildCall", "No").setStatusInfo("parent", mtkImsPhoneConnection.getParentCallName()).buildDumpInfo();
                if (formattedLogBuildDumpInfo != null) {
                    if (!MtkImsPhoneCallTracker.SENLOG || MtkImsPhoneCallTracker.TELDBG) {
                        MtkImsPhoneCallTracker.this.log(formattedLogBuildDumpInfo.toString());
                    }
                }
            }

            public void onCallProgressing(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallProgressing(imsCall);
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                if (imsPhoneConnectionFindConnection != null) {
                    imsPhoneConnectionFindConnection.onConnectionEvent("mediatek.telecom.event.EVENT_CALL_ALERTING_NOTIFICATION", (Bundle) null);
                }
            }

            public void onCallRedialEcc(ImsCall imsCall, boolean z) {
                MtkImsPhoneCallTracker.this.log("onCallRedialEcc");
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                if (imsPhoneConnectionFindConnection == null || !(imsPhoneConnectionFindConnection instanceof MtkImsPhoneConnection)) {
                    return;
                }
                ((MtkImsPhoneConnection) imsPhoneConnectionFindConnection).notifyRedialEcc(z);
            }

            public void onCallResumeFailed(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                MtkImsPhoneCallTracker.this.log("onCallResumeFailed reasonCode=" + imsReasonInfo.getCode());
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallResumeFailed(imsCall, imsReasonInfo);
            }

            public void onCallResumeReceived(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallResumeReceived(imsCall);
            }

            public void onCallResumed(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallResumed(imsCall);
            }

            public void onCallSessionTransferFailed(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallSessionTransferFailed(imsCall, imsReasonInfo);
            }

            public void onCallSessionTransferred(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallSessionTransferred(imsCall);
            }

            public void onCallSessionTtyModeReceived(ImsCall imsCall, int i) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallSessionTtyModeReceived(imsCall, i);
            }

            public void onCallStartFailed(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallStartFailed(imsCall, imsReasonInfo);
                if (MtkImsPhoneCallTracker.this.mBackgroundCall.getState() == Call.State.HOLDING) {
                    MtkImsPhoneCallTracker.this.log("auto resume holding call");
                    MtkImsPhoneCallTracker.this.sendEmptyMessage(MtkImsPhoneCallTracker.EVENT_RESUME_BACKROUND_CALL);
                }
            }

            public void onCallStarted(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallStarted(imsCall);
            }

            public void onCallSuppServiceReceived(ImsCall imsCall, ImsSuppServiceNotification imsSuppServiceNotification) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallSuppServiceReceived(imsCall, imsSuppServiceNotification);
            }

            public void onCallTerminated(ImsCall imsCall, ImsReasonInfo imsReasonInfo) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallTerminated(imsCall, imsReasonInfo);
            }

            public void onCallUpdated(ImsCall imsCall) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onCallUpdated(imsCall);
            }

            public void onConferenceParticipantsStateChanged(ImsCall imsCall, List<ConferenceParticipant> list) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onConferenceParticipantsStateChanged(imsCall, list);
            }

            public void onMultipartyStateChanged(ImsCall imsCall, boolean z) {
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onMultipartyStateChanged(imsCall, z);
            }

            public void onRttAudioIndicatorChanged(ImsCall imsCall, ImsStreamMediaProfile imsStreamMediaProfile) {
                MtkImsPhoneCallTracker.this.log("onRttAudioIndicatorChanged");
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onRttAudioIndicatorChanged(imsCall, imsStreamMediaProfile);
            }

            public void onRttEventReceived(ImsCall imsCall, int i) {
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                if (imsPhoneConnectionFindConnection != null) {
                    imsPhoneConnectionFindConnection.onConnectionEvent("mediatek.telecom.event.EVENT_RTT_EMERGENCY_REDIAL", (Bundle) null);
                }
            }

            public void onRttMessageReceived(ImsCall imsCall, String str) {
                MtkImsPhoneCallTracker.this.log("onRttMessageReceived");
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onRttMessageReceived(imsCall, str);
            }

            public void onRttModifyRequestReceived(ImsCall imsCall) {
                MtkImsPhoneCallTracker.this.log("onRttModifyRequestReceived");
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onRttModifyRequestReceived(imsCall);
            }

            public void onRttModifyResponseReceived(ImsCall imsCall, int i) {
                MtkImsPhoneCallTracker.this.log("onRttModifyResponseReceived");
                ((ImsPhoneCallTracker) MtkImsPhoneCallTracker.this).mImsCallListener.onRttModifyResponseReceived(imsCall, i);
            }

            public void onTextCapabilityChanged(ImsCall imsCall, int i, int i2, int i3, int i4) {
                ImsPhoneConnection imsPhoneConnectionFindConnection = MtkImsPhoneCallTracker.this.findConnection(imsCall);
                boolean z = i3 == 1;
                boolean z2 = i2 == 1;
                boolean z3 = i == 1;
                boolean z4 = i4 == 1;
                MtkImsPhoneCallTracker.this.log("onTextCapabilityChanged localCapability: " + i + " remote status: " + i2 + " localTextStatus" + i3 + " RemoteCapability: " + i4);
                Bundle bundle = new Bundle();
                bundle.putBoolean("mediatek.telecom.extra.RTT_STATUS_LOCAL", z);
                bundle.putBoolean("mediatek.telecom.extra.RTT_STATUS_REMOTE", z2);
                bundle.putBoolean("mediatek.telecom.extra.RTT_SUPPORT_LOCAL", z3);
                bundle.putBoolean("mediatek.telecom.extra.RTT_SUPPORT_REMOTE", z4);
                if (imsPhoneConnectionFindConnection != null) {
                    imsPhoneConnectionFindConnection.onConnectionEvent("mediatek.telecom.event.RTT_SUPPORT_CHANGED", bundle);
                    MtkImsPhoneCallTracker.this.log("onTextCapabilityChanged update to conn");
                }
            }
        };
        this.mImsBaseReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker.4
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                if (intent.getAction().equals("com.mediatek.ims.MTK_IMS_SERVICE_UP")) {
                    try {
                        MtkImsManager imsManager = ImsManager.getInstance(MtkImsPhoneCallTracker.this.mPhone.getContext(), MtkImsPhoneCallTracker.this.mPhone.getPhoneId());
                        imsManager.removeImsConnectionStateListener(MtkImsPhoneCallTracker.this.mImsStateListener);
                        imsManager.addImsConnectionStateListener(MtkImsPhoneCallTracker.this.mImsStateListener);
                        MtkImsPhoneCallTracker.this.loge("ACTION_MTK_IMS_SERVICE_UP: register ims succeed, " + MtkImsPhoneCallTracker.this.mImsStateListener);
                    } catch (ImsException e) {
                        MtkImsPhoneCallTracker.this.loge("ACTION_MTK_IMS_SERVICE_UP: register ims fail!");
                    }
                }
            }
        };
        this.mMultiSimConfigChangedReceiver = new AnonymousClass5();
        this.mIndicationReceiver = new IncomingCallEventRecevier();
        LOG_TAG += "[" + imsPhone.getPhoneId() + "]";
        RttEmcGuardTimerUtil rttEmcGuardTimerUtil = new RttEmcGuardTimerUtil(this.mPhone.getContext());
        this.mRttEmcGuardTimerUtil = rttEmcGuardTimerUtil;
        rttEmcGuardTimerUtil.setRttEmcGuardTimerSupported(this.mIsRttEmcGuardTimerSupported);
        registerIndicationReceiver();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.ims.MTK_IMS_SERVICE_UP");
        this.mPhone.getContext().registerReceiver(this.mImsBaseReceiver, intentFilter);
        IntentFilter intentFilter2 = new IntentFilter();
        intentFilter2.addAction("android.telephony.action.MULTI_SIM_CONFIG_CHANGED");
        this.mPhone.getContext().registerReceiver(this.mMultiSimConfigChangedReceiver, intentFilter2);
        this.mSettingsObserver = new SettingsObserver(this.mPhone.getContext(), this);
        registerSettingsObserver();
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mPhone.getContext());
        this.mSubscriptionManager = subscriptionManagerFrom;
        subscriptionManagerFrom.addOnSubscriptionsChangedListener(this.mOnSubscriptionsChangedListener);
        this.mPhone.getDefaultPhone().getServiceStateTracker().registerForDataRoamingOn(this, 101, (Object) null);
        this.mPhone.getDefaultPhone().getServiceStateTracker().registerForDataRoamingOff(this, 102, (Object) null, true);
        this.mRttEmcGuardTimerUtil.initRttEmcGuardTimer();
    }

    private String getCallNumber(ImsPhoneConnection imsPhoneConnection) {
        if (imsPhoneConnection == null) {
            return null;
        }
        return imsPhoneConnection.isMultiparty() ? "conferenceCall" : imsPhoneConnection.getAddress();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getConnectionCallId(MtkImsPhoneConnection mtkImsPhoneConnection) {
        if (mtkImsPhoneConnection == null) {
            return "";
        }
        int callId = mtkImsPhoneConnection.getCallId();
        return (callId == -1 && (callId = mtkImsPhoneConnection.getCallIdBeforeDisconnected()) == -1) ? "" : String.valueOf(callId);
    }

    private boolean isRttCall(ImsCall imsCall) {
        if (imsCall != null) {
            return imsCall.getCallProfile().mMediaProfile.isRttCall();
        }
        return false;
    }

    private boolean isRttCallInvolved(ImsCall imsCall, ImsCall imsCall2) {
        boolean z = isRttCall(imsCall) || isRttCall(imsCall2);
        log("isRttCallInvolved: " + z);
        return z;
    }

    private boolean isRttCallMergeSupported() {
        log("isRttCallMergeSupported: " + this.mIsRttCallMergeSupported);
        return this.mIsRttCallMergeSupported;
    }

    private boolean isTestSim() {
        boolean z = SystemProperties.get("vendor.gsm.sim.ril.testsim").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.2").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.3").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.4").equals("1");
        log("isTestSim: " + z);
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRttImsRegister(ImsFeature.Capabilities capabilities) {
        log("notifyRttImsRegister: capability:" + capabilities);
        TelephonyManager telephonyManager = (TelephonyManager) this.mPhone.getContext().getSystemService("phone");
        AudioManager audioManager = (AudioManager) this.mPhone.getContext().getSystemService("audio");
        if (telephonyManager == null || audioManager == null) {
            StringBuilder sb = new StringBuilder();
            sb.append("notifyRttImsRegister: telephony = ");
            sb.append(telephonyManager == null);
            sb.append(", audioManager = ");
            sb.append(audioManager == null);
            log(sb.toString());
            return;
        }
        if (telephonyManager.isRttSupported()) {
            if (capabilities.isCapable(1)) {
                audioManager.setParameters("ims_rtt_capability=1");
                log("notifyRttImsRegister: set audio RTT capability");
            } else {
                audioManager.setParameters("ims_rtt_capability=0");
                log("notifyRttImsRegister: remove audio RTT capability");
            }
        }
    }

    private void onDataRoamingEnabledChanged(boolean z) {
        log("onDataRoamingEnabledChanged: enabled=" + z);
        if (!this.mIsViLteDataMetered) {
            StringBuilder sb = new StringBuilder();
            sb.append("onDataRoamingEnabledChanged: Ignore data ");
            sb.append(z ? "enabled" : "disabled");
            sb.append(" - carrier policy indicates that data is not metered for ViLTE calls.");
            log(sb.toString());
            return;
        }
        if (this.mIgnoreDataRoaming) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append("onDataRoaming: Ignore data ");
            sb2.append(z ? "enabled" : "disabled");
            sb2.append(" - carrier policy indicates that ignore data roaming");
            log(sb2.toString());
            return;
        }
        if (z && !this.mIsDataEnabled) {
            log("onDataRoamingEnabledChanged: Ignore on when data off");
            return;
        }
        Iterator it = this.mConnections.iterator();
        while (true) {
            boolean z2 = true;
            if (!it.hasNext()) {
                break;
            }
            ImsPhoneConnection imsPhoneConnection = (ImsPhoneConnection) it.next();
            ImsCall imsCall = imsPhoneConnection.getImsCall();
            if (!z && (imsCall == null || !imsCall.isWifiCall())) {
                z2 = false;
            }
            imsPhoneConnection.setLocalVideoCapable(z2);
        }
        maybeNotifyDataDisabled(z, 1406);
        handleDataEnabledChange(z, 1406);
        if (this.mShouldUpdateImsConfigOnDisconnect || 2 == 0) {
            return;
        }
        ImsManager.updateImsServiceConfig(this.mPhone.getContext(), this.mPhone.getPhoneId(), true);
    }

    private void registerIndicationReceiver() {
        log("registerIndicationReceiver");
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.android.ims.IMS_INCOMING_CALL_INDICATION");
        this.mPhone.getContext().registerReceiver(this.mIndicationReceiver, intentFilter);
    }

    private void sendRttSrvccOrCsfbEvent(ImsPhoneCall imsPhoneCall) {
        log("sendRttSrvccOrCsfbEvent: " + imsPhoneCall);
        if (imsPhoneCall == null) {
            loge("sendRttSrvccOrCsfbEvent no call");
            return;
        }
        if (!isRttCall(imsPhoneCall.getImsCall())) {
            log("sendRttSrvccOrCsfbEvent: not for RTT call");
            return;
        }
        if (imsPhoneCall.hasConnections()) {
            ImsCall imsCall = imsPhoneCall.getFirstConnection().getImsCall();
            ImsPhoneConnection firstConnection = imsPhoneCall.getFirstConnection();
            if (imsCall == null || firstConnection == null) {
                return;
            }
            if (imsPhoneCall.getState() == Call.State.DIALING) {
                firstConnection.onConnectionEvent("mediatek.telecom.event.EVENT_CSFB", (Bundle) null);
            } else {
                firstConnection.onConnectionEvent("mediatek.telecom.event.EVENT_SRVCC", (Bundle) null);
            }
        }
    }

    public static String sensitiveEncode(String str) {
        return (!SENLOG || TELDBG) ? Rlog.pii(LOG_TAG, str) : "[hidden]";
    }

    private void setCallTerminationFlag(ImsPhoneCall imsPhoneCall) {
        log("setCallTerminationFlag");
        MtkImsCall imsCall = imsPhoneCall.getImsCall();
        if (imsCall != null) {
            imsCall.setTerminationRequestFlag(true);
            return;
        }
        log("setCallTerminationFlag " + imsPhoneCall + " no ims call");
    }

    private void unregisterIndicationReceiver() {
        log("unregisterIndicationReceiver");
        this.mPhone.getContext().unregisterReceiver(this.mIndicationReceiver);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void acceptCall(int i) throws CallStateException {
        if (this.mSrvccState == Call.SrvccState.STARTED || this.mSrvccState == Call.SrvccState.COMPLETED) {
            throw new CallStateException(3, "cannot accept call: SRVCC");
        }
        int i2 = i;
        if (!isDataAvailableForViLTE() && !this.mRingingCall.getImsCall().isWifiCall()) {
            i2 = 0;
            log("Data is off, answer as voice call");
        }
        logDebugMessagesWithOpFormat("CC", "Answer", this.mRingingCall.getFirstConnection(), "");
        super.acceptCall(i2);
    }

    protected synchronized void addConnection(ImsPhoneConnection imsPhoneConnection) {
        super.addConnection(imsPhoneConnection);
        if (imsPhoneConnection.isEmergency()) {
            this.mRttEmcGuardTimerUtil.stopRttEmcGuardTimer();
        }
    }

    protected void cacheCarrierConfiguration(int i) {
        super.cacheCarrierConfiguration(i);
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config");
        if (carrierConfigManager == null) {
            loge("cacheCarrierConfiguration: No carrier config service found.");
            return;
        }
        PersistableBundle configForSubId = carrierConfigManager.getConfigForSubId(i);
        if (configForSubId == null) {
            loge("cacheCarrierConfiguration: Empty carrier config.");
            return;
        }
        this.mIgnoreDataRoaming = configForSubId.getBoolean("mtk_ignore_data_roaming_for_video_calls");
        this.mIsRttCallMergeSupported = configForSubId.getBoolean("allow_merging_rtt_calls_bool");
        this.mIsRttEmcGuardTimerSupported = configForSubId.getBoolean("mtk_emc_rtt_guard_timer_bool");
        this.mCarrierSwitchWfcModeRequired = configForSubId.getBoolean("mtk_carrier_switch_wfc_mode_required_bool");
        if (isTestSim()) {
            this.mIsViLteDataMetered = isVTDataMeteredByOpid(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "OM"));
            this.mIgnoreDataRoaming = this.mIsViLteDataMetered;
            log("cacheCarrierConfiguration: For test sim, mIsViLteDataMetered = " + this.mIsViLteDataMetered);
        }
    }

    protected void callEndCleanupHandOverCallIfAny() {
        if (this.mHandoverCall.mConnections.size() > 0) {
            log("callEndCleanupHandOverCallIfAny, mHandoverCall.mConnections=" + this.mHandoverCall.mConnections);
            for (Connection connection : this.mHandoverCall.mConnections) {
                log("SRVCC: remove connection=" + connection);
                removeConnection((ImsPhoneConnection) connection);
            }
            this.mHandoverCall.mConnections.clear();
            this.mConnections.clear();
            this.mState = PhoneConstants.State.IDLE;
            if (this.mPhone == null || this.mPhone.mDefaultPhone == null || this.mPhone.mDefaultPhone.getState() != PhoneConstants.State.IDLE) {
                return;
            }
            log("SRVCC: notify ImsPhone state as idle.");
            this.mPhone.notifyPhoneStateChanged();
            this.mCallsDisconnectedDuringSrvccRegistrants.notifyRegistrants(getCallStateChangeAsyncResult());
        }
    }

    protected boolean canDailOnCallTerminated() {
        return (this.mPendingMO == null || hasMessages(18)) ? false : true;
    }

    public void checkForDialIssues() throws CallStateException {
        if (this.mPhone != null && (this.mPhone.getDefaultPhone() instanceof MtkGsmCdmaPhone) && this.mPhone.getDefaultPhone().shouldProcessSelfActivation()) {
            log("IMS: checkForDialIssues(), bypass checkForDialIssues for self activation");
        } else {
            super.checkForDialIssues();
        }
    }

    protected void checkIncomingCallInRttEmcGuardTime(ImsPhoneConnection imsPhoneConnection) {
        this.mRttEmcGuardTimerUtil.checkIncomingCallInRttEmcGuardTime(imsPhoneConnection);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    protected void checkforCsfb() throws CallStateException {
        if (this.mHandoverCall.mConnections.size() > 0) {
            log("SRVCC: there are connections during handover, trigger CSFB!");
            throw new CallStateException("cs_fallback");
        }
        if (this.mPhone == null || this.mPhone.getDefaultPhone() == null || this.mPhone.getDefaultPhone().getState() == PhoneConstants.State.IDLE || getState() != PhoneConstants.State.IDLE) {
            return;
        }
        log("There are CS connections, trigger CSFB!");
        throw new CallStateException("cs_fallback");
    }

    public void conference() {
        logDebugMessagesWithOpFormat("CC", "Conference", this.mForegroundCall.getFirstConnection(), " merge with " + this.mBackgroundCall.getFirstConnection());
        if (this.mHoldSwitchingState == ImsPhoneCallTracker.HoldSwapState.SWAPPING_ACTIVE_AND_HELD) {
            log("Can't merge during swap call.");
        } else if (!isRttCallInvolved(this.mForegroundCall.getImsCall(), this.mBackgroundCall.getImsCall()) || isRttCallMergeSupported()) {
            super.conference();
        }
    }

    public synchronized Connection dial(String str, ImsPhone.ImsDialArgs imsDialArgs) throws CallStateException {
        if (this.mSrvccState == Call.SrvccState.STARTED || this.mSrvccState == Call.SrvccState.COMPLETED) {
            throw new CallStateException(3, "cannot dial call: SRVCC");
        }
        return super.dial(str, imsDialArgs);
    }

    protected void dialInternal(ImsPhoneConnection imsPhoneConnection, int i, int i2, int i3, int i4, Bundle bundle) {
        if (imsPhoneConnection == null) {
            return;
        }
        if (!imsPhoneConnection.isAdhocConference() && (imsPhoneConnection.getAddress() == null || imsPhoneConnection.getAddress().length() == 0 || imsPhoneConnection.getAddress().indexOf(78) >= 0)) {
            imsPhoneConnection.setDisconnectCause(7);
            sendEmptyMessageDelayed(18, 500L);
            return;
        }
        setMute(false);
        boolean zIsEmergencyNumber = imsPhoneConnection.isAdhocConference() ? false : isEmergencyNumber(imsPhoneConnection.getAddress());
        int i5 = zIsEmergencyNumber ? 2 : 1;
        if (this.mDialAsECC) {
            i5 = 2;
            log("Dial as ECC: conn.getAddress(): " + imsPhoneConnection.getAddress());
            this.mDialAsECC = false;
        }
        int callTypeFromVideoState = ImsCallProfile.getCallTypeFromVideoState(i2);
        imsPhoneConnection.setVideoState(i2);
        try {
            String[] strArr = {imsPhoneConnection.getAddress()};
            ImsCallProfile imsCallProfileCreateCallProfile = this.mImsManager.createCallProfile(i5, callTypeFromVideoState);
            if (imsPhoneConnection.isAdhocConference()) {
                imsCallProfileCreateCallProfile.setCallExtraBoolean("conference", true);
            }
            try {
                imsCallProfileCreateCallProfile.setCallExtraInt("oir", i);
                try {
                    imsCallProfileCreateCallProfile.setCallExtraInt("android.telephony.ims.extra.RETRY_CALL_FAIL_REASON", i3);
                    try {
                        imsCallProfileCreateCallProfile.setCallExtraInt("android.telephony.ims.extra.RETRY_CALL_FAIL_NETWORKTYPE", i4);
                        if (zIsEmergencyNumber) {
                            setEmergencyCallInfo(imsCallProfileCreateCallProfile, imsPhoneConnection);
                        }
                        if (bundle != null) {
                            if (bundle.containsKey("android.telecom.extra.CALL_SUBJECT")) {
                                bundle.putString("DisplayText", cleanseInstantLetteringMessage(bundle.getString("android.telecom.extra.CALL_SUBJECT")));
                            }
                            if (imsPhoneConnection.hasRttTextStream()) {
                                imsCallProfileCreateCallProfile.mMediaProfile.mRttMode = 1;
                            }
                            if (bundle.containsKey("CallPull")) {
                                imsCallProfileCreateCallProfile.mCallExtras.putBoolean("CallPull", bundle.getBoolean("CallPull"));
                                int i6 = bundle.getInt("android.telephony.ImsExternalCallTracker.extra.EXTERNAL_CALL_ID");
                                imsPhoneConnection.setIsPulledCall(true);
                                imsPhoneConnection.setPulledDialogId(i6);
                            }
                            imsCallProfileCreateCallProfile.mCallExtras.putBundle("android.telephony.ims.extra.OEM_EXTRAS", bundle);
                        }
                        if (strArr.length == 1 && !imsCallProfileCreateCallProfile.getCallExtraBoolean("conference")) {
                            imsCallProfileCreateCallProfile.setCallExtra("oi", strArr[0]);
                        }
                        synchronized (this) {
                            try {
                                ImsCall imsCallMakeCall = this.mImsManager.makeCall(imsCallProfileCreateCallProfile, imsPhoneConnection.isAdhocConference() ? imsPhoneConnection.getParticipantsToDial() : strArr, this.mMtkImsCallListener);
                                imsPhoneConnection.setImsCall(imsCallMakeCall);
                                this.mMetrics.writeOnImsCallStart(this.mPhone.getPhoneId(), imsCallMakeCall.getSession());
                                setVideoCallProvider(imsPhoneConnection, imsCallMakeCall);
                                imsPhoneConnection.setAllowAddCallDuringVideoCall(this.mAllowAddCallDuringVideoCall);
                                imsPhoneConnection.setAllowHoldingVideoCall(this.mAllowHoldingVideoCall);
                            } catch (Throwable th) {
                                throw th;
                            }
                        }
                    } catch (RemoteException e) {
                    } catch (ImsException e2) {
                        e = e2;
                        loge("dialInternal : " + e);
                        this.mOperationLocalLog.log("dialInternal exception: " + e);
                        imsPhoneConnection.setDisconnectCause(36);
                        sendEmptyMessageDelayed(18, 500L);
                        retryGetImsService();
                    }
                } catch (ImsException e3) {
                    e = e3;
                    loge("dialInternal : " + e);
                    this.mOperationLocalLog.log("dialInternal exception: " + e);
                    imsPhoneConnection.setDisconnectCause(36);
                    sendEmptyMessageDelayed(18, 500L);
                    retryGetImsService();
                } catch (RemoteException e4) {
                }
            } catch (ImsException e5) {
                e = e5;
                loge("dialInternal : " + e);
                this.mOperationLocalLog.log("dialInternal exception: " + e);
                imsPhoneConnection.setDisconnectCause(36);
                sendEmptyMessageDelayed(18, 500L);
                retryGetImsService();
            } catch (RemoteException e6) {
            }
        } catch (RemoteException e7) {
        } catch (ImsException e8) {
            e = e8;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void dispose() {
        log("dispose");
        this.mRingingCall.dispose();
        this.mBackgroundCall.dispose();
        this.mForegroundCall.dispose();
        this.mHandoverCall.dispose();
        clearDisconnected();
        if (this.mUtInterface != null) {
            this.mUtInterface.unregisterForSuppServiceIndication(this);
        }
        this.mPhone.getContext().unregisterReceiver(this.mReceiver);
        this.mPhone.getContext().unregisterReceiver(this.mImsBaseReceiver);
        this.mPhone.getContext().unregisterReceiver(this.mMultiSimConfigChangedReceiver);
        unregisterIndicationReceiver();
        this.mPhone.setServiceState(1);
        this.mPhone.setImsRegistered(false);
        resetImsCapabilities();
        this.mPhone.onFeatureCapabilityChanged();
        this.mPhone.getDefaultPhone().getDataEnabledSettings().unregisterForDataEnabledChanged(this);
        this.mImsManagerConnector.disconnect();
        this.mPhone.getDefaultPhone().getServiceStateTracker().unregisterForDataRoamingOn(this);
        this.mPhone.getDefaultPhone().getServiceStateTracker().unregisterForDataRoamingOff(this);
        this.mSubscriptionManager.removeOnSubscriptionsChangedListener(this.mOnSubscriptionsChangedListener);
        this.mSettingsObserver.unobserve();
        this.mRttEmcGuardTimerUtil.disposeRttEmcGuardTimer();
        if (this.mImsManager != null) {
            try {
                this.mImsManager.removeImsConnectionStateListener(this.mImsStateListener);
            } catch (ImsException e) {
                loge("dispose() : removeRegistrationListener failed: " + e);
            }
        }
        ImsPhoneCallTrackerInjector.sendIMSRegistedStateBroadcast(false, this.mPhone.getDefaultPhone());
    }

    protected AsyncResult getCallStateChangeAsyncResult() {
        return new AsyncResult((Object) null, this.mSrvccState, (Throwable) null);
    }

    public int getDisconnectCauseFromReasonInfo(ImsReasonInfo imsReasonInfo, Call.State state) {
        int iMaybeRemapReasonCode = maybeRemapReasonCode(imsReasonInfo);
        if (iMaybeRemapReasonCode == 1600) {
            return 81;
        }
        switch (iMaybeRemapReasonCode) {
            case 9000:
                return 1500;
            case 9001:
                return 1501;
            case 9002:
                return 1502;
            case 9003:
                return 1503;
            case 9004:
                return 1504;
            case 9005:
                return 1505;
            case 9006:
                return 1506;
            case 9007:
                return 1507;
            case 9008:
                return 1508;
            case 9009:
                return 1509;
            case 9010:
                return 1510;
            case 9011:
                return 1511;
            case 9012:
                return 1512;
            case 9013:
                return 1513;
            case 9014:
                return 1514;
            case 9015:
                return 1515;
            case 9016:
                return 1516;
            case 9017:
                return 1517;
            case 9018:
                return 1518;
            case 9019:
                return 1519;
            case 9020:
                return 1520;
            case 9021:
                return 1521;
            case 9022:
                return 1522;
            case 9023:
                return 1523;
            case 9024:
                return 1524;
            case 9025:
                return 1525;
            case 9026:
                return 1526;
            case 9027:
                return 1527;
            case 9028:
                return 1528;
            case 9029:
                return 1529;
            case 9030:
                return 1530;
            case 9031:
                return 1531;
            case 9032:
                return 1532;
            case 9033:
                return 1533;
            case 9034:
                return 1534;
            case 9035:
                return 1535;
            case 9036:
                return 1536;
            case 9037:
                return 1537;
            case 9038:
                return 1538;
            case 9039:
                return 1539;
            case 9040:
                return ExternalSimConstants.MSG_ID_UICC_AUTHENTICATION_DONE_IND;
            case 9041:
                return ExternalSimConstants.MSG_ID_FINALIZATION_RESPONSE;
            case 9042:
                return ExternalSimConstants.MSG_ID_UICC_AUTHENTICATION_ABORT_IND;
            case 9043:
                return 1011;
            default:
                switch (iMaybeRemapReasonCode) {
                    case 61441:
                        return 380;
                    case 61442:
                        return ExternalSimConstants.MSG_ID_UICC_APDU_REQUEST;
                    case 61443:
                        return ExternalSimConstants.MSG_ID_UICC_POWER_DOWN_REQUEST;
                    default:
                        switch (iMaybeRemapReasonCode) {
                            case 61451:
                                return 400;
                            case 61452:
                                return 401;
                            case 61453:
                                return 402;
                            case 61454:
                                return 403;
                            default:
                                return super.getDisconnectCauseFromReasonInfo(imsReasonInfo, state);
                        }
                }
        }
    }

    protected int getHangupReasionInfo(int i, boolean z) {
        if (i == 1009) {
            return 9040;
        }
        if (i == 1010) {
            return 9042;
        }
        if (i == 1008) {
            return 9041;
        }
        return i == 1011 ? 9043 : 504;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public ImsUtInterface getUtInterface() throws ImsException {
        if (this.mImsManager != null) {
            return this.mImsManager.getSupplementaryServiceConfiguration();
        }
        throw getImsManagerIsNullException();
    }

    protected String getVtInterface() {
        String str = new String("vt_data0" + ((TelephonyManager) this.mPhone.getContext().getSystemService("phone")).getSubscriberId(this.mPhone.getSubId()));
        log("[SubId=" + this.mPhone.getSubId() + "] getVtInterface(): " + sensitiveEncode(str));
        return str;
    }

    public void handleMessage(Message message) {
        log("handleMessage what=" + message.what);
        switch (message.what) {
            case 101:
                onDataRoamingOn();
                break;
            case 102:
                onDataRoamingOff();
                break;
            case 103:
                onRoamingSettingsChanged();
                break;
            case EVENT_RESUME_BACKROUND_CALL /* 104 */:
                try {
                    this.mPhone.unholdHeldCall();
                } catch (CallStateException e) {
                    loge("handleMessage EVENT_RESUME_BACKROUND_CALL exception=" + e);
                    return;
                }
                break;
            case EVENT_RETRY_DATA_ENABLED_CHANGED /* 105 */:
                onDataEnabledChanged(this.mIsDataEnabled, this.mLastDataEnabledReason);
                break;
            default:
                super.handleMessage(message);
                break;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangup(ImsPhoneCall imsPhoneCall) throws CallStateException {
        if (this.mSrvccState == Call.SrvccState.STARTED || this.mSrvccState == Call.SrvccState.COMPLETED) {
            throw new CallStateException(3, "cannot hangup call: SRVCC");
        }
        super.hangup(imsPhoneCall);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangup(ImsPhoneCall imsPhoneCall, int i) throws CallStateException {
        log("hangup call with reason: " + i);
        if (this.mSrvccState == Call.SrvccState.STARTED || this.mSrvccState == Call.SrvccState.COMPLETED) {
            throw new CallStateException(3, "cannot hangup call: SRVCC");
        }
        super.hangup(imsPhoneCall, i);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    void hangupAll() throws CallStateException {
        log("hangupAll");
        if (this.mImsManager == null || !(this.mImsManager instanceof MtkImsManager)) {
            throw new CallStateException("No MtkImsManager Instance");
        }
        try {
            this.mImsManager.hangupAllCall(this.mPhone.getPhoneId());
            if (!this.mRingingCall.isIdle()) {
                setCallTerminationFlag(this.mRingingCall);
                this.mRingingCall.onHangupLocal();
            }
            if (!this.mForegroundCall.isIdle()) {
                setCallTerminationFlag(this.mForegroundCall);
                this.mForegroundCall.onHangupLocal();
            }
            if (this.mBackgroundCall.isIdle()) {
                return;
            }
            setCallTerminationFlag(this.mBackgroundCall);
            this.mBackgroundCall.onHangupLocal();
        } catch (ImsException e) {
            throw new CallStateException(e.getMessage());
        }
    }

    protected boolean ignoreCarrierPauseSupport() {
        return true;
    }

    protected boolean ignoreConference(ImsCall imsCall, ImsCall imsCall2) {
        if (imsCall == null || imsCall.getState() == 8) {
            log("conference: skip; foreground call state terminated");
            return true;
        }
        if (imsCall2 != null && imsCall2.getState() != 8) {
            return false;
        }
        log("conference: skip; background call state terminated");
        return true;
    }

    public void initRoamingAndRoamingSetting() {
        this.mIsDataRoaming = this.mPhone.getDefaultPhone().getServiceState().getDataRoaming();
        this.mIsDataRoamingSettingEnabled = this.mPhone.getDefaultPhone().getDataRoamingEnabled();
        ImsManager.getInstance(this.mPhone.getContext(), this.mPhone.getPhoneId()).setDataRoamingSettingsEnabled(this.mIsDataRoamingSettingEnabled);
        log("initRoamingAndRoamingSetting, mIsDataRoaming = " + this.mIsDataRoaming + ", mIsDataRoamingSettingEnabled = " + this.mIsDataRoamingSettingEnabled);
    }

    protected boolean isCarrierPauseAllowed(ImsCall imsCall) {
        return imsCall == null || imsCall.getState() != 3;
    }

    protected boolean isDataAvailableForViLTE() {
        return !this.mIsViLteDataMetered || (this.mIsDataEnabled && !isRoamingOnAndRoamingSettingOff());
    }

    protected boolean isEmergencyNumber(String str) {
        return MtkLocalPhoneNumberUtils.getIsEmergencyNumber();
    }

    protected boolean isRoamingOnAndRoamingSettingOff() {
        return (!this.mIsDataRoaming || this.mIsDataRoamingSettingEnabled || this.mIgnoreDataRoaming) ? false : true;
    }

    public boolean isSupportImsEcc() {
        return this.mIsImsEccSupported;
    }

    protected boolean isVTDataMeteredByOpid(String str) {
        return (DataSubConstants.OPERATOR_OP01.equals(str) || DataSubConstants.OPERATOR_OP02.equals(str) || DataSubConstants.OPERATOR_OP09.equals(str) || "OP17".equals(str) || "OP50".equals(str) || "OP149".equals(str) || "OP149".equals(str)) ? false : true;
    }

    public boolean isWifiPdnOutOfService() {
        int i = this.mWifiPdnOOSState;
        return i == 1 || i == 0;
    }

    protected void logDebugMessagesWithDumpFormat(String str, ImsPhoneConnection imsPhoneConnection, String str2) {
        if (str == null || imsPhoneConnection == null || !(imsPhoneConnection instanceof MtkImsPhoneConnection)) {
            return;
        }
        MtkImsPhoneConnection mtkImsPhoneConnection = (MtkImsPhoneConnection) imsPhoneConnection;
        FormattedLog formattedLogBuildDumpInfo = new FormattedLog.Builder().setCategory("CC").setServiceName("ImsPhone").setOpType(FormattedLog.OpType.DUMP).setCallNumber(sensitiveEncode(getCallNumber(imsPhoneConnection))).setCallId(getConnectionCallId(mtkImsPhoneConnection)).setExtraMessage(str2).setStatusInfo("state", imsPhoneConnection.getState().toString()).setStatusInfo("isConfCall", imsPhoneConnection.isMultiparty() ? "Yes" : "No").setStatusInfo("isConfChildCall", "No").setStatusInfo("parent", mtkImsPhoneConnection.getParentCallName()).buildDumpInfo();
        if (formattedLogBuildDumpInfo != null) {
            if (!SENLOG || TELDBG) {
                log(formattedLogBuildDumpInfo.toString());
            }
        }
    }

    protected void logDebugMessagesWithOpFormat(String str, String str2, ImsPhoneConnection imsPhoneConnection, String str3) {
        FormattedLog formattedLogBuildDebugMsg;
        if (str == null || str2 == null || imsPhoneConnection == null || (formattedLogBuildDebugMsg = new FormattedLog.Builder().setCategory(str).setServiceName("ImsPhone").setOpType(FormattedLog.OpType.OPERATION).setActionName(str2).setCallNumber(sensitiveEncode(getCallNumber(imsPhoneConnection))).setCallId(getConnectionCallId((MtkImsPhoneConnection) imsPhoneConnection)).setExtraMessage(str3).buildDebugMsg()) == null) {
            return;
        }
        if (!SENLOG || TELDBG) {
            log(formattedLogBuildDebugMsg.toString());
        }
    }

    protected ImsPhoneConnection makeImsPhoneConnectionForConference(String[] strArr) {
        return new MtkImsPhoneConnection((Phone) this.mPhone, strArr, (ImsPhoneCallTracker) this, this.mForegroundCall, false);
    }

    protected ImsPhoneConnection makeImsPhoneConnectionForMO(String str, boolean z) {
        return new MtkImsPhoneConnection((Phone) this.mPhone, str, (ImsPhoneCallTracker) this, this.mForegroundCall, z);
    }

    protected ImsPhoneConnection makeImsPhoneConnectionForMT(ImsCall imsCall, boolean z) {
        return new MtkImsPhoneConnection((Phone) this.mPhone, imsCall, (ImsPhoneCallTracker) this, z ? this.mForegroundCall : this.mRingingCall, z);
    }

    protected void modifyVideoCall(ImsCall imsCall, int i) {
        ImsPhoneConnection imsPhoneConnectionFindConnection = findConnection(imsCall);
        int i2 = i | IMS_SESSION_MODIFY_OPERATION_FLAG;
        if (imsPhoneConnectionFindConnection != null) {
            int videoState = imsPhoneConnectionFindConnection.getVideoState();
            if (imsPhoneConnectionFindConnection.getVideoProvider() != null) {
                imsPhoneConnectionFindConnection.getVideoProvider().onSendSessionModifyRequest(new VideoProfile(videoState), new VideoProfile(i2));
            }
        }
    }

    public void notifySrvccState(Call.SrvccState srvccState) {
        if (srvccState == Call.SrvccState.COMPLETED) {
            sendRttSrvccOrCsfbEvent(this.mForegroundCall);
            sendRttSrvccOrCsfbEvent(this.mBackgroundCall);
            sendRttSrvccOrCsfbEvent(this.mRingingCall);
        }
        super.notifySrvccState(srvccState);
        if (this.mSrvccState != Call.SrvccState.COMPLETED) {
            if (this.mSrvccState == Call.SrvccState.FAILED) {
                this.mSrvccState = Call.SrvccState.NONE;
            }
        } else {
            this.mSrvccState = Call.SrvccState.NONE;
            if (this.mHoldSwitchingState != ImsPhoneCallTracker.HoldSwapState.INACTIVE) {
                this.mHoldSwitchingState = ImsPhoneCallTracker.HoldSwapState.INACTIVE;
            }
        }
    }

    protected void onDataEnabledChanged(boolean z, int i) {
        this.mLastDataEnabledReason = i;
        super.onDataEnabledChanged(z, i);
    }

    protected void onDataRoamingOff() {
        log("onDataRoamingOff");
        if (!this.mIsDataRoaming) {
            log("onDataRoamingOff: device already not roaming. ignored the update.");
            return;
        }
        this.mIsDataRoaming = this.mPhone.getDefaultPhone().getServiceState().getDataRoaming();
        if (this.mIsDataRoamingSettingEnabled) {
            return;
        }
        onDataRoamingEnabledChanged(true);
    }

    protected void onDataRoamingOn() {
        log("onDataRoamingOn");
        if (this.mIsDataRoaming) {
            log("onDataRoamingOn: device already in roaming. ignored the update.");
            return;
        }
        this.mIsDataRoaming = this.mPhone.getDefaultPhone().getServiceState().getDataRoaming();
        if (this.mIsDataRoamingSettingEnabled) {
            log("onDataRoamingOn: setup data on roaming");
            onDataRoamingEnabledChanged(true);
        } else {
            log("onDataRoamingOn: Tear down data connection on roaming.");
            onDataRoamingEnabledChanged(false);
        }
    }

    protected void onRoamingSettingsChanged() {
        log("onRoamingSettingsChanged");
        this.mIsDataRoamingSettingEnabled = this.mPhone.getDefaultPhone().getDataRoamingEnabled();
        ImsManager.getInstance(this.mPhone.getContext(), this.mPhone.getPhoneId()).setDataRoamingSettingsEnabled(this.mIsDataRoamingSettingEnabled);
        log("onRoamingSettingsChanged: mIsDataRoaming = " + this.mIsDataRoaming + ", mIsDataRoamingSettingEnabled = " + this.mIsDataRoamingSettingEnabled);
        if (!this.mIsDataRoaming) {
            log("onRoamingSettingsChanged: device is not roaming. ignored the request.");
        } else if (this.mIsDataRoamingSettingEnabled) {
            log("onRoamingSettingsChanged: setup data on roaming");
            onDataRoamingEnabledChanged(true);
        } else {
            log("onRoamingSettingsChanged: Tear down data connection on roaming.");
            onDataRoamingEnabledChanged(false);
        }
    }

    protected void processCallStateChange(ImsCall imsCall, Call.State state, int i, boolean z) {
        super.processCallStateChange(imsCall, state, i, z);
        logDebugMessagesWithDumpFormat("CC", findConnection(imsCall), "");
        if (this.mIsDataEnabled || state != Call.State.ACTIVE) {
            return;
        }
        log("ImsCall updated to video call but data off, retry onDataEnabledChanged");
        sendEmptyMessage(EVENT_RETRY_DATA_ENABLED_CHANGED);
    }

    public void registerForCallsDisconnectedDuringSrvcc(Handler handler, int i, Object obj) {
        this.mCallsDisconnectedDuringSrvccRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerSettingsObserver() {
        this.mSettingsObserver.unobserve();
        String string = TelephonyManager.getDefault().getSimCount() > 1 ? Integer.toString(this.mPhone.getDefaultPhone().getSubId()) : "";
        this.mSettingsObserver.observe(Settings.Global.getUriFor("data_roaming" + string), 103);
    }

    public void rejectCall() throws CallStateException {
        logDebugMessagesWithOpFormat("CC", "Reject", this.mRingingCall.getFirstConnection(), "");
        super.rejectCall();
    }

    protected void releasePendingMOIfRequired() {
        if (this.mPendingMO == null) {
            return;
        }
        this.mPendingMO.setDisconnectCause(36);
        sendEmptyMessageDelayed(18, 500L);
    }

    protected void resetRingBackTone(ImsPhoneCall imsPhoneCall) {
        if (imsPhoneCall instanceof MtkImsPhoneCall) {
            ((MtkImsPhoneCall) imsPhoneCall).resetRingbackTone();
        }
    }

    public void sendUSSD(String str, Message message) {
        try {
            log("sendUSSD : " + MtkSuppServHelper.encryptString(str));
            this.mImsManager.createCallProfile(1, 2).setCallExtraInt("dialstring", 2);
            super.sendUSSD(str, message);
        } catch (ImsException e) {
            loge("sendUSSD : " + e);
            this.mPhone.sendErrorResponse(message, e);
            retryGetImsService();
        }
    }

    protected void setMultiPartyState(Connection connection) {
        if (connection instanceof MtkImsPhoneConnection) {
            ((MtkImsPhoneConnection) connection).mWasMultiparty = connection.isMultiparty();
            ((MtkImsPhoneConnection) connection).mWasPreMultipartyHost = connection.isConferenceHost();
            log("SRVCC: Connection isMultiparty is " + ((MtkImsPhoneConnection) connection).mWasMultiparty + "and isConfHost is " + ((MtkImsPhoneConnection) connection).mWasPreMultipartyHost + " before handover");
        }
    }

    protected void setRedialAsEcc(int i) {
        if (i == 380) {
            this.mDialAsECC = true;
        }
    }

    protected void startListeningForCalls() throws ImsException {
        super.startListeningForCalls();
        try {
            this.mImsManager.addImsConnectionStateListener(this.mImsStateListener);
            log("startListeningForCalls() : register ims succeed, " + this.mImsStateListener);
        } catch (ImsException e) {
            log("startListeningForCalls() : register ims fail!");
        }
    }

    protected void startRttEmcGuardTimer() {
        this.mRttEmcGuardTimerUtil.startRttEmcGuardTimer();
    }

    protected void switchWfcModeIfRequired(ImsManager imsManager, boolean z, boolean z2) {
        if (imsManager != null && z && z2 && this.mCarrierSwitchWfcModeRequired) {
            if (imsManager.getWfcMode() == 0) {
                imsManager.setWfcMode(1);
                return;
            }
            return;
        }
        log("Do not switch WFC mode, isWfcEnabled:" + z + ", isEmergencyNumber:" + z2 + ", mCarrierSwitchWfcModeRequired:" + this.mCarrierSwitchWfcModeRequired);
    }

    protected ImsCall takeCall(IImsCallSession iImsCallSession, Bundle bundle) throws ImsException {
        return this.mImsManager.takeCall(iImsCallSession, bundle, this.mMtkImsCallListener);
    }

    protected void transferHandoverConnections(ImsPhoneCall imsPhoneCall) {
        log("transferHandoverConnections mSrvccState:" + this.mSrvccState);
        if (this.mSrvccState == Call.SrvccState.COMPLETED && imsPhoneCall.mConnections != null) {
            for (Connection connection : imsPhoneCall.mConnections) {
                if (this.mOnHoldToneStarted && connection != null && this.mOnHoldToneId == System.identityHashCode(connection)) {
                    log("transferHandoverConnections reset the hold tone.");
                    this.mPhone.stopOnHoldTone(connection);
                    this.mOnHoldToneStarted = false;
                    this.mOnHoldToneId = -1;
                }
            }
        }
        super.transferHandoverConnections(imsPhoneCall);
    }

    public void unregisterForCallsDisconnectedDuringSrvcc(Handler handler) {
        this.mCallsDisconnectedDuringSrvccRegistrants.remove(handler);
    }

    protected int updateDisconnectCause(int i, ImsPhoneConnection imsPhoneConnection) {
        if (i == 36 && imsPhoneConnection != null && imsPhoneConnection.getImsCall().isMerged()) {
            return 45;
        }
        return i;
    }
}

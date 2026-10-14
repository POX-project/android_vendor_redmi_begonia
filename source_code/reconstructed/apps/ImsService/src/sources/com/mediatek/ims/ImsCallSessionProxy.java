package com.mediatek.ims;

import android.content.Context;
import android.content.Intent;
import android.hardware.radio.V1_0.LastCallFailCause;
import android.hardware.radio.V1_0.RadioError;
import android.net.wifi.WifiManager;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.provider.Settings;
import android.telephony.NetworkRegistrationInfo;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.TelephonyManager;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.ImsCallSessionListener;
import android.telephony.ims.ImsConferenceState;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.ImsStreamMediaProfile;
import android.telephony.ims.ImsSuppServiceNotification;
import android.telephony.ims.stub.ImsCallSessionImplBase;
import android.text.TextUtils;
import androidx.core.app.NotificationCompat;
import com.android.ims.ImsManager;
import com.android.ims.internal.IImsCallSession;
import com.android.ims.internal.IImsVideoCallProvider;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.gsm.SuppServiceNotification;
import com.mediatek.ims.common.ImsCarrierConfigConstants;
import com.mediatek.ims.config.internal.ImsConfigUtils;
import com.mediatek.ims.ext.OpImsCallSessionProxy;
import com.mediatek.ims.ext.OpImsServiceCustomizationFactoryBase;
import com.mediatek.ims.ext.OpImsServiceCustomizationUtils;
import com.mediatek.ims.internal.ConferenceCallMessageHandler;
import com.mediatek.ims.internal.ImsVTProvider;
import com.mediatek.ims.internal.ImsVTProviderUtil;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsCallOemPlugin;
import com.mediatek.ims.plugin.impl.ImsSelfActivatorBase;
import com.mediatek.ims.ril.ImsCommandsInterface;
import com.mediatek.wfo.DisconnectCause;
import com.mediatek.wfo.IMwiService;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.MwisConstants;
import com.mediatek.wfo.WifiOffloadManager;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class ImsCallSessionProxy extends ImsCallSessionImplBase {
    private static final int AMR_NB = 6;
    private static final int AMR_WB = 7;
    private static final int CACHED_TERMINATE_REASON_DELAY = 100;
    public static final int CALL_INFO_MSG_TYPE_ACTIVE = 132;
    public static final int CALL_INFO_MSG_TYPE_ALERT = 2;
    public static final int CALL_INFO_MSG_TYPE_CONNECTED = 6;
    public static final int CALL_INFO_MSG_TYPE_DISCONNECTED = 133;
    public static final int CALL_INFO_MSG_TYPE_HELD = 131;
    public static final int CALL_INFO_MSG_TYPE_MO_CALL_ID_ASSIGN = 130;
    public static final int CALL_INFO_MSG_TYPE_REMOTE_HOLD = 135;
    public static final int CALL_INFO_MSG_TYPE_REMOTE_RESUME = 136;
    public static final int CALL_INFO_MSG_TYPE_SETUP = 0;
    private static final boolean DBG = true;
    private static final int EVENT_ACCEPT_RESULT = 202;
    private static final int EVENT_ADD_CONFERENCE_RESULT = 206;
    private static final int EVENT_CACHED_TERMINATE_REASON = 230;
    private static final int EVENT_CALL_ADDITIONAL_INFO = 229;
    private static final int EVENT_CALL_INFO_INDICATION = 102;
    private static final int EVENT_CALL_MODE_CHANGE_INDICATION = 106;
    private static final int EVENT_CALL_RAT_INDICATION = 228;
    private static final int EVENT_CANCEL_USSI_COMPLETE = 214;
    private static final int EVENT_DIAL_CONFERENCE_RESULT = 209;
    private static final int EVENT_DIAL_RESULT = 201;
    private static final int EVENT_DTMF_DONE = 212;
    private static final int EVENT_ECONF_RESULT_INDICATION = 104;
    private static final int EVENT_ECT_RESULT = 215;
    private static final int EVENT_ECT_RESULT_INDICATION = 109;
    private static final int EVENT_GET_LAST_CALL_FAIL_CAUSE = 105;
    private static final int EVENT_HOLD_RESULT = 203;
    private static final int EVENT_IMS_CONFERENCE_INDICATION = 111;
    private static final int EVENT_MERGE_RESULT = 205;
    private static final int EVENT_ON_SUPP_SERVICE_NOTIFICATION = 226;
    private static final int EVENT_POLL_CALLS_RESULT = 101;
    private static final int EVENT_PULL_CALL_RESULT = 216;
    private static final int EVENT_RADIO_NOT_AVAILABLE = 217;
    private static final int EVENT_REDIAL_ECC_INDICATION = 224;
    private static final int EVENT_REMOVE_CONFERENCE_RESULT = 207;
    private static final int EVENT_RESUME_RESULT = 204;
    private static final int EVENT_RETRIEVE_MERGE_FAIL_RESULT = 211;
    private static final int EVENT_RTT_AUDIO_INDICATION = 225;
    private static final int EVENT_RTT_CAPABILITY_INDICATION = 110;
    private static final int EVENT_RTT_MODIFY_REQUEST_RECEIVE = 220;
    private static final int EVENT_RTT_MODIFY_RESPONSE = 219;
    private static final int EVENT_RTT_TEXT_RECEIVE_INDICATION = 218;
    private static final int EVENT_SEND_USSI_COMPLETE = 213;
    private static final int EVENT_SIP_CODE_INDICATION = 208;
    private static final int EVENT_SIP_HEADER_INFO = 227;
    private static final int EVENT_SPEECH_CODEC_INFO = 223;
    private static final int EVENT_SWAP_BEFORE_MERGE_RESULT = 210;
    private static final int EVENT_VIDEO_CAPABILITY_INDICATION = 107;
    private static final int EVRC = 2;
    private static final int EVRC_B = 3;
    private static final int EVRC_NW = 5;
    private static final int EVRC_WB = 4;
    private static final int EVS_AWB = 33;
    private static final int EVS_FB = 32;
    private static final int EVS_NB = 23;
    private static final int EVS_SW = 25;
    private static final int EVS_WB = 24;
    public static final String EXTRA_CALL_INFO_MESSAGE_TYPE = "mediatek:callInfoMessageType";
    public static final String EXTRA_CALL_TYPE = "mediatek:callType";
    public static final String EXTRA_EMERGENCY_CALL = "mediatek:emergencyCall";
    public static final String EXTRA_INCOMING_CALL = "mediatek:incomingCall";
    public static final String EXTRA_RAT_TYPE = "mediatek:ratType";
    public static final String EXTRA_WAS_VIDEO_CALL = "mediatek:wasVideoCall";
    private static final int GSM_EFR = 8;
    private static final int GSM_FR = 9;
    private static final int GSM_HR = 10;
    private static final int HANGUP_CAUSE_FORWARD = 3;
    private static final int HANGUP_CAUSE_LOW_BATTERY = 2;
    private static final int HANGUP_CAUSE_NONE = 0;
    private static final int HANGUP_CAUSE_NO_COVERAGE = 1;
    private static final int HANGUP_CAUSE_SPECIAL_HANGUP = 4;
    private static final int HEADER_CALL_ID = 13;
    private static String HEX = null;
    private static final int IMS_CALL_MODE_CLIENT_API = 2;
    private static final int IMS_CALL_MODE_NORMAL = 1;
    private static final int IMS_CALL_TYPE_LTE = 1;
    private static final int IMS_CALL_TYPE_NR = 3;
    private static final int IMS_CALL_TYPE_UNKNOWN = 0;
    private static final int IMS_CALL_TYPE_WIFI = 2;
    private static final int IMS_VIDEO_CALL = 21;
    private static final int IMS_VIDEO_CONF = 23;
    private static final int IMS_VIDEO_CONF_PARTS = 25;
    private static final int IMS_VOICE_CALL = 20;
    private static final int IMS_VOICE_CONF = 22;
    private static final int IMS_VOICE_CONF_PARTS = 24;
    private static final String INVALID_CALL_ID = "65535";
    private static final int INVALID_CALL_MODE = 255;
    private static final String LOG_TAG = "ImsCallSessionProxy";
    private static final int MAX_WRONG_ECPI_COUNT = 5;
    private static final int MT_CALL_ENRICHED_CALL = 102;
    private static final int MT_CALL_IMS_GWSD = 101;
    private static final String NA_PRIOR_CLIR_PREFIX = "*82";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final int QCELP13K = 1;
    private static final int RTT_AUDIO_SPEECH = 0;
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    public static final int SUB_TYPE_HEADER = 1;
    public static final int SUB_TYPE_LOCATION = 2;
    private static final String TAG_DOUBLE_QUOTE = "<ascii_34>";
    private static final boolean TELDBG;
    private static final int USSI_REQUEST = 1;
    private static final int USSI_RESPONSE = 2;
    private static final boolean VDBG = false;
    private static final int VIDEO_STATE_PAUSE = 0;
    private static final int VIDEO_STATE_RECV_ONLY = 2;
    private static final int VIDEO_STATE_SEND_ONLY = 1;
    private static final int VIDEO_STATE_SEND_RECV = 3;
    private static final String VT_PROVIDER_ID = "video_provider_id";
    private static final int WFC_GET_CAUSE_FAILED = -1;
    private int mBadRssiThreshould;
    private AsyncResult mCachedSuppServiceInfo;
    private ImsReasonInfo mCachedTerminateReasonInfo;
    private AsyncResult mCachedUserInfo;
    private CallErrorState mCallErrorState;
    private String mCallId;
    private String mCallNumber;
    private ImsCallProfile mCallProfile;
    private int mCallRat;
    private ConferenceEventListener mConfEvtListener;
    private ImsCallSessionProxy mConfSessionProxy;
    private Context mContext;
    private Message mDtmfMsg;
    private Messenger mDtmfTarget;
    private int mEconfCount;
    private Message mEctMsg;
    private Messenger mEctTarget;
    private boolean mEnableSendRttBom;
    private boolean mFwkPause;
    private final Handler mHandler;
    private int mHangupCount;
    private boolean mHangupHostDuringMerge;
    private boolean mHasPendingDisconnect;
    private boolean mHasPendingMo;
    private boolean mHasTriedSelfActivation;
    private String mHeaderCallId;
    private String mHeaderData;
    private int mImsCallMode;
    private ImsCommandsInterface mImsRILAdapter;
    private ImsReasonInfo mImsReasonInfo;
    private ImsService mImsService;
    private ImsServiceCallTracker mImsServiceCT;
    private boolean mIsAddRemoveParticipantsCommandOK;
    private boolean mIsConferenceHost;
    private boolean mIsEmergencyCall;
    private boolean mIsHideHoldDuringECT;
    private boolean mIsHideHoldEventDuringMerging;
    private boolean mIsIncomingCall;
    private boolean mIsMerging;
    private boolean mIsOnTerminated;
    private boolean mIsOneKeyConf;
    private boolean mIsRetrievingMergeFail;
    private boolean mIsRingingRedirect;
    private boolean mIsRttEnabledForCallSession;
    private boolean mIsWaitingClose;
    private String mLastSIPReasonHeader;
    private int mLastSipCode;
    private int mLastSipMethod;
    private ImsCallSessionListener mListener;
    private ImsCallProfile mLocalCallProfile;
    private int mLocalTerminateReason;
    private Object mLock;
    private boolean mMTSetup;
    private String mMergeCallId;
    private ImsCallInfo.State mMergeCallStatus;
    private boolean mMerged;
    private String mMergedCallId;
    private ImsCallInfo.State mMergedCallStatus;
    private MtkImsCallSessionProxy mMtkConfSessionProxy;
    public MtkImsCallSessionProxy mMtkImsCallSessionProxy;
    private boolean mNeedHideResumeEventDuringMerging;
    private boolean mNormalCallsMerge;
    private String[] mOneKeyparticipants;
    private OpImsCallSessionProxy mOpImsCallSession;
    private boolean mOverallPause;
    private HashMap<String, Bundle> mParticipants;
    private ArrayList<String> mParticipantsList;
    private int mPendingDisconnectReason;
    private String[] mPendingParticipantInfo;
    private int mPendingParticipantInfoIndex;
    private int mPendingParticipantStatistics;
    private int mPhoneId;
    private boolean mRadioUnavailable;
    private int mRatType;
    private ImsCallProfile mRemoteCallProfile;
    private String mRetryRemoveUri;
    private RttTextEncoder mRttTextEncoder;
    protected ImsSelfActivatorBase mSelfActivateHelper;
    private final Handler mServiceHandler;
    private boolean mShouldUpdateAddressByPau;
    private boolean mShouldUpdateAddressBySipField;
    private boolean mShouldUpdateAddressFromEcpi;
    private boolean mSipSessionProgress;
    private int mState;
    private AsyncResult mSuppSrvCache;
    private boolean mThreeWayMergeSucceeded;
    private ImsVTProvider mVTProvider;
    private ImsVTProviderUtil mVTProviderUtil;
    private int mVideoState;
    private VtProviderListener mVtProviderListener;
    private IWifiOffloadService mWfoService;
    IWifiOffloadListenerProxy mWosListener;
    private int mWrongEcpiCount;

    /* JADX INFO: renamed from: com.mediatek.ims.ImsCallSessionProxy$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$ims$ImsCallSessionProxy$CallErrorState;

        static {
            int[] iArr = new int[CallErrorState.values().length];
            $SwitchMap$com$mediatek$ims$ImsCallSessionProxy$CallErrorState = iArr;
            try {
                iArr[CallErrorState.DIAL.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$ims$ImsCallSessionProxy$CallErrorState[CallErrorState.DISCONNECT.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }

    private enum CallErrorState {
        IDLE,
        DIAL,
        DISCONNECT
    }

    class ConferenceEventListener extends DefaultConferenceHandler.Listener {
        ConferenceEventListener() {
        }

        @Override // com.mediatek.ims.DefaultConferenceHandler.Listener
        public void onAutoTerminate() {
            ImsCallSessionProxy.this.logWithCallId("onAutoTerminate()", 2);
            ImsCallSessionProxy.this.terminate(0);
        }

        @Override // com.mediatek.ims.DefaultConferenceHandler.Listener
        public void onParticipantsUpdate(ImsConferenceState imsConferenceState) {
            ImsCallSessionProxy.this.logWithCallId("onParticipantsUpdate()", 2);
            if (ImsCallSessionProxy.this.mListener == null) {
                return;
            }
            try {
                ImsCallSessionProxy.this.mListener.callSessionConferenceStateUpdated(imsConferenceState);
            } catch (RuntimeException e) {
                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionConferenceStateUpdated()", 5);
            }
        }
    }

    private class IWifiOffloadListenerProxy extends WifiOffloadManager.Listener {
        private IWifiOffloadListenerProxy() {
        }

        /* synthetic */ IWifiOffloadListenerProxy(ImsCallSessionProxy imsCallSessionProxy, AnonymousClass1 anonymousClass1) {
            this();
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onHandover(int i, int i2, int i3) {
            if (i == ImsCallSessionProxy.this.mPhoneId && i3 != ImsCallSessionProxy.this.mRatType && i2 == 1) {
                ImsCallSessionProxy.this.updateRat(i3, 0);
                if (ImsCallSessionProxy.this.mListener != null) {
                    ImsCallSessionProxy.this.logWithCallId("onHandover()", 2);
                    try {
                        ImsCallSessionProxy.this.mListener.callSessionUpdated(ImsCallSessionProxy.this.mCallProfile);
                        ImsCallSessionProxy.this.mListener.callSessionHandover(ImsCallSessionProxy.this.mRatType, i3, new ImsReasonInfo());
                    } catch (RuntimeException e) {
                        ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionHandover()", 5);
                    }
                }
            }
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onRequestImsSwitch(int i, boolean z) {
        }
    }

    private class ImsCallLogLevel {
        public static final int DEBUG = 2;
        public static final int ERROR = 5;
        public static final int INFO = 3;
        public static final int VERBOSE = 1;
        public static final int WARNNING = 4;

        private ImsCallLogLevel() {
        }
    }

    private class ImsCallProfileEx {
        public static final String EXTRA_IMPORTANCE = "mediatek:priority";
        public static final String EXTRA_IMS_GWSD = "ims_gwsd";
        public static final String EXTRA_INCOMING_MPTY = "incoming_mpty";
        public static final String EXTRA_LOCATION = "mediatek:location";
        public static final String EXTRA_MPTY = "mpty";
        public static final String EXTRA_PICTURE = "mediatek:call-info";
        public static final String EXTRA_SUBJECT = "mediatek:subject";
        public static final String EXTRA_VERSTAT = "verstat";

        private ImsCallProfileEx() {
        }
    }

    private class MyHandler extends Handler {
        private static final String PAU_END_FLAG_FIELD = ">";
        private static final String PAU_NAME_FIELD = "<name:";
        private static final String PAU_NUMBER_FIELD = "<tel:";
        private static final String PAU_SIP_NUMBER_FIELD = "<sip:";
        private static final String PAU_VERSTAT_FIELD = "verstat=";

        public MyHandler(Looper looper) {
            super(looper, null, ImsCallSessionProxy.DBG);
        }

        private ImsConferenceState convertToImsConferenceState(ArrayList<User> arrayList) {
            ImsConferenceState imsConferenceState = new ImsConferenceState();
            ImsCallSessionProxy.this.mParticipantsList.clear();
            int i = 0;
            for (int i2 = 0; i2 < arrayList.size(); i2++) {
                Bundle bundle = new Bundle();
                String str = arrayList.get(i2).mUserAddr;
                String str2 = arrayList.get(i2).mEndPoint;
                bundle.putString("user", str);
                bundle.putString("display-text", arrayList.get(i2).mDisplayText);
                bundle.putString("endpoint", str2);
                bundle.putString(NotificationCompat.CATEGORY_STATUS, arrayList.get(i2).mStatus);
                if (str == null || str.trim().isEmpty()) {
                    imsConferenceState.mParticipants.put(Integer.toString(i), bundle);
                    ImsCallSessionProxy.this.mParticipantsList.add(Integer.toString(i));
                    i++;
                } else {
                    imsConferenceState.mParticipants.put(str + "_" + str2, bundle);
                    ImsCallSessionProxy.this.mParticipantsList.add(str);
                }
            }
            ImsCallSessionProxy.this.mParticipants = imsConferenceState.mParticipants;
            return imsConferenceState;
        }

        private String getDisplayNameFromPau(String str) {
            char cCharAt;
            String strReplaceAll = str.replace("\\\\", "\\").replaceAll(ImsCallSessionProxy.TAG_DOUBLE_QUOTE, "\"");
            String str2 = "";
            if (TextUtils.isEmpty(strReplaceAll)) {
                ImsCallSessionProxy.this.logWithCallId("getDisplayNameFromPau() : pau is null !", 2);
                return "";
            }
            for (int i = 0; i < strReplaceAll.length() && (cCharAt = strReplaceAll.charAt(i)) != '<'; i++) {
                str2 = str2 + cCharAt;
            }
            return str2;
        }

        private String getFieldValueFromPau(String str, String str2) {
            if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || !str.contains(str2)) {
                return "";
            }
            int iIndexOf = str.indexOf(str2) + str2.length();
            int iIndexOf2 = str.indexOf(PAU_END_FLAG_FIELD, iIndexOf);
            return iIndexOf2 < 0 ? str.substring(iIndexOf) : str.substring(iIndexOf, iIndexOf2);
        }

        private int getWfcDisconnectCause(int i) throws RemoteException {
            ImsCallSessionProxy.this.logWithCallId("[WFC] getWfcDisconnectCause mRatType = " + ImsCallSessionProxy.this.mRatType, 2);
            if (ImsCallSessionProxy.this.mWfoService == null || ImsCallSessionProxy.this.mRatType != 2 || i == 16) {
                return -1;
            }
            DisconnectCause disconnectCause = null;
            try {
                disconnectCause = ImsCallSessionProxy.this.mWfoService.getDisconnectCause(ImsCallSessionProxy.this.mPhoneId);
            } catch (RemoteException e) {
                ImsCallSessionProxy.this.logWithCallId("getWfcDisconnectCause() : RemoteException in getWfcDisconnectCause()", 5);
            }
            if (disconnectCause == null) {
                return -1;
            }
            int errorCause = disconnectCause.getErrorCause();
            ImsCallSessionProxy.this.logWithCallId("[WFC] wfcErrorCause = " + errorCause, 2);
            if (errorCause == 2001) {
                return LastCallFailCause.OEM_CAUSE_11;
            }
            if (errorCause == 2003 || errorCause == 2005) {
                return LastCallFailCause.OEM_CAUSE_13;
            }
            if (errorCause == 2004) {
                return LastCallFailCause.OEM_CAUSE_14;
            }
            return -1;
        }

        private void handleDialResult(AsyncResult asyncResult) {
            if (asyncResult == null || ImsCallSessionProxy.this.mListener == null) {
                ImsCallSessionProxy.this.logWithCallId("handleDialResult() : ar or mListener is null", 2);
                return;
            }
            ImsCallSessionProxy.this.logEventResult(asyncResult.exception == null ? ImsCallSessionProxy.DBG : false, "handleDialResult()");
            if (asyncResult.exception != null) {
                Message messageObtainMessage = ImsCallSessionProxy.this.mHandler.obtainMessage(105);
                ImsCallSessionProxy.this.mCallErrorState = CallErrorState.DIAL;
                ImsCallSessionProxy.this.mImsRILAdapter.getLastCallFailCause(ImsCallSessionProxy.this.mPhoneId, messageObtainMessage);
                ImsCallSessionProxy.this.mHasPendingMo = ImsCallSessionProxy.VDBG;
            }
        }

        private void handleEconfIndication(String[] strArr) {
            String str = strArr[0];
            String str2 = strArr[3];
            String str3 = strArr[5];
            ImsCallSessionProxy.this.logWithCallId("handleEconfIndication() : receive EVENT_ECONF_RESULT_INDICATION mCallId:" + ImsCallSessionProxy.this.mCallId + ", conf_call_id:" + str + ", op: " + strArr[1] + ", number: " + ImsCallSessionProxy.this.sensitiveEncode(strArr[2]) + ", result: " + strArr[3] + ", joined_call_id:" + str3, 2);
            if (ImsCallSessionProxy.this.mCallId != null && ImsCallSessionProxy.this.mCallId.equals(str3) && str2.equals("0")) {
                ImsCallSessionProxy.this.mMerged = ImsCallSessionProxy.DBG;
            }
            if (!ImsCallSessionProxy.this.mIsMerging) {
                return;
            }
            if (str2.equals("0") && ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(str3) != null && ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(str3).mCallSession != null) {
                ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(str3).mCallSession.mState = 7;
                ImsCallSessionProxy.this.logWithCallId("handleEconfIndication() : call id " + str3 + " is merged successfully", 2);
            }
            if (!ImsCallSessionProxy.this.mNormalCallsMerge) {
                if (str2.equals("0")) {
                    ImsCallSessionProxy.this.logWithCallId("handleEconfIndication() : ConfCreated successed", 2);
                    ImsCallSessionProxy.this.mergeCompleted();
                    return;
                } else {
                    ImsCallSessionProxy.this.logWithCallId("handleEconfIndication() : ConfCreated failed", 2);
                    retrieveMergeFail();
                    return;
                }
            }
            if (str2.equals("0") && str3 != null) {
                ImsConferenceHandler.getInstance().addFirstMergeParticipant(str3);
            }
            ImsCallSessionProxy.access$9608(ImsCallSessionProxy.this);
            if (str2.equals("0")) {
                ImsCallSessionProxy.this.mThreeWayMergeSucceeded = ImsCallSessionProxy.DBG;
            }
            if (ImsCallSessionProxy.this.mEconfCount == 2) {
                String str4 = ImsCallSessionProxy.this.mThreeWayMergeSucceeded ? " successful" : " failed";
                ImsCallSessionProxy.this.logWithCallId("handleEconfIndication() : 3 way conference merge result is" + str4, 2);
                if (ImsCallSessionProxy.this.mThreeWayMergeSucceeded && ImsConferenceHandler.getInstance().isConferenceActive()) {
                    ImsCallSessionProxy.this.mergeCompleted();
                    if (ImsCallSessionProxy.this.mMerged) {
                        ImsCallSessionProxy.this.close();
                    } else {
                        if (ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mMergedCallId) != null && ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mMergedCallId).mCallSession != null) {
                            ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mMergedCallId).mCallSession.close();
                        }
                        if (ImsCallSessionProxy.this.mState == 8) {
                            ImsCallSessionProxy.this.close();
                        }
                    }
                } else {
                    retrieveMergeFail();
                    ImsCallSessionProxy.this.mImsRILAdapter.terminate(Integer.parseInt(str));
                }
                ImsCallSessionProxy.this.mEconfCount = 0;
                ImsCallSessionProxy.this.mNormalCallsMerge = ImsCallSessionProxy.VDBG;
                ImsCallSessionProxy.this.mThreeWayMergeSucceeded = ImsCallSessionProxy.VDBG;
            }
        }

        private void handleEctIndication(AsyncResult asyncResult) {
            ImsCallSessionProxy.this.logWithCallId("handleEctIndication()", 2);
            ImsCallSessionProxy.this.mIsHideHoldDuringECT = ImsCallSessionProxy.VDBG;
            if (asyncResult == null || ImsCallSessionProxy.this.mMtkImsCallSessionProxy == null) {
                ImsCallSessionProxy.this.logWithCallId("handleEctIndication() : ar or mMtkImsCallSessionProxy is null", 2);
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            if (ImsCallSessionProxy.this.mCallId == null || iArr[0] != Integer.parseInt(ImsCallSessionProxy.this.mCallId)) {
                return;
            }
            if (iArr[1] == 0) {
                try {
                    if (ImsCallSessionProxy.this.mListener != null) {
                        ImsCallSessionProxy.this.mListener.callSessionTransferFailed(new ImsReasonInfo());
                    }
                } catch (RuntimeException e) {
                    ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionTransferFailed()", 5);
                }
            } else if (iArr[1] == 1) {
                try {
                    if (ImsCallSessionProxy.this.mListener != null) {
                        ImsCallSessionProxy.this.mListener.callSessionTransferred();
                    }
                } catch (RuntimeException e2) {
                    ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionTransferred()", 5);
                }
            }
            if (ImsCallSessionProxy.this.mDtmfTarget != null && ImsCallSessionProxy.this.mEctMsg != null) {
                ImsCallSessionProxy.this.mEctMsg.arg1 = iArr[1];
                try {
                    ImsCallSessionProxy.this.mEctTarget.send(ImsCallSessionProxy.this.mEctMsg);
                } catch (RemoteException e3) {
                    ImsCallSessionProxy.this.logWithCallId("handleMessage() : RemoteException for ECT", 5);
                }
            }
            ImsCallSessionProxy.this.mEctTarget = null;
            ImsCallSessionProxy.this.mEctMsg = null;
        }

        private void handleEctResult(AsyncResult asyncResult) {
            if (asyncResult == null || ImsCallSessionProxy.this.mListener == null) {
                ImsCallSessionProxy.this.logWithCallId("handleEctResult() : ar or mListener is null", 2);
                return;
            }
            if (asyncResult.exception == null) {
                ImsCallSessionProxy.this.logWithCallId("handleEctResult() : explicit call transfer succeeded!!", 2);
                try {
                    if (ImsCallSessionProxy.this.mListener != null) {
                        ImsCallSessionProxy.this.mListener.callSessionTransferred();
                        return;
                    }
                    return;
                } catch (RuntimeException e) {
                    ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionTransferred()", 5);
                    return;
                }
            }
            ImsCallSessionProxy.this.logWithCallId("handleEctResult() : explicit call transfer failed!!", 2);
            ImsCallSessionProxy.this.mIsHideHoldDuringECT = ImsCallSessionProxy.VDBG;
            try {
                if (ImsCallSessionProxy.this.mListener != null) {
                    ImsCallSessionProxy.this.mListener.callSessionTransferFailed(new ImsReasonInfo());
                }
            } catch (RuntimeException e2) {
                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionTransferFailed()", 5);
            }
        }

        private void handleImsConferenceIndication(AsyncResult asyncResult) {
            if (ImsCallSessionProxy.this.mIsConferenceHost) {
                if (asyncResult == null) {
                    ImsCallSessionProxy.this.logWithCallId("handleImsConferenceIndication() : ar is null", 2);
                    return;
                }
                if (ImsCallSessionProxy.this.mListener == null) {
                    ImsCallSessionProxy.this.logWithCallId("handleImsConferenceIndication() : mListener is null, cache info", 2);
                    ImsCallSessionProxy.this.mCachedUserInfo = asyncResult;
                    return;
                }
                ArrayList<User> arrayList = (ArrayList) asyncResult.result;
                if (arrayList.size() <= 0) {
                    ImsCallSessionProxy.this.logWithCallId("handleImsConferenceIndication() : auto terminate", 2);
                    ImsCallSessionProxy.this.terminate(0);
                } else {
                    try {
                        ImsCallSessionProxy.this.mListener.callSessionConferenceStateUpdated(convertToImsConferenceState(arrayList));
                    } catch (RuntimeException e) {
                        ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionConferenceStateUpdated()", 5);
                    }
                }
            }
        }

        private boolean handlePauUpdate(String str) {
            if (TextUtils.isEmpty(str)) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallExtra("remote_uri", getFieldValueFromPau(str, PAU_SIP_NUMBER_FIELD));
            return updateAddressFromPau(str) | updateDisplayNameFromPau(str) | updateVerstatFromPau(str);
        }

        private void handleRttAudioIndication(AsyncResult asyncResult) {
            if (asyncResult == null || ImsCallSessionProxy.this.mListener == null) {
                ImsCallSessionProxy.this.logWithCallId("handleRttAudioIndication ar or mListener is null", 5);
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            if (ImsCallSessionProxy.this.mCallId != null) {
                boolean z = ImsCallSessionProxy.VDBG;
                if (iArr[0] != Integer.parseInt(ImsCallSessionProxy.this.mCallId)) {
                    return;
                }
                int i = iArr[1];
                ImsStreamMediaProfile imsStreamMediaProfile = new ImsStreamMediaProfile();
                ImsCallSessionProxy imsCallSessionProxy = ImsCallSessionProxy.this;
                StringBuilder sb = new StringBuilder();
                sb.append("handleRttAudioIndication audio: ");
                sb.append(i == 0);
                imsCallSessionProxy.logWithCallId(sb.toString(), 2);
                if (i == 0) {
                    z = true;
                }
                imsStreamMediaProfile.setReceivingRttAudio(z);
                ImsCallSessionProxy.this.mListener.callSessionRttAudioIndicatorChanged(imsStreamMediaProfile);
            }
        }

        private void handleRttCapabilityIndication(AsyncResult asyncResult) {
            String str = ImsCallSessionProxy.this.mCallId;
            if (asyncResult == null) {
                ImsCallSessionProxy.this.logWithCallId("handleRttCapabilityIndication ar is null", 5);
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            if (ImsCallSessionProxy.this.mMtkImsCallSessionProxy == null || str == null) {
                return;
            }
            boolean z = ImsCallSessionProxy.VDBG;
            if (iArr[0] != Integer.parseInt(str)) {
                return;
            }
            int i = iArr[1];
            int i2 = iArr[2];
            int i3 = iArr[3];
            int i4 = iArr[4];
            ImsCallSessionProxy.this.logWithCallId("handleRttCapabilityIndication local cap= " + i + " remo status= " + i2 + " local status= " + i3 + " remo cap= " + i4, 2);
            ImsCallSessionProxy imsCallSessionProxy = ImsCallSessionProxy.this;
            if (i2 == 1 && i3 == 1) {
                z = true;
            }
            imsCallSessionProxy.mIsRttEnabledForCallSession = z;
            ImsCallSessionProxy.this.processMtRttWithoutPrecondition(i2);
            ImsCallSessionProxy.this.logWithCallId("handleRttCapabilityIndication mIsRttEnabledForCallSession: " + ImsCallSessionProxy.this.mIsRttEnabledForCallSession, 2);
            ImsCallSessionProxy.this.mMtkImsCallSessionProxy.notifyTextCapabilityChanged(i, i2, i3, i4);
            ImsCallSessionProxy.this.mCallProfile.mMediaProfile.setRttMode(ImsCallSessionProxy.this.mIsRttEnabledForCallSession ? 1 : 0);
            ImsCallSessionProxy.this.notifyCallSessionUpdated();
            ImsCallSessionProxy.this.checkAndSendRttBom();
            ImsCallSessionProxy.this.toggleRttAudioIndication();
        }

        private void handleRttECCRedialEvent() {
            ImsCallSessionProxy.this.logWithCallId("notifyRttECCRedialEvent", 2);
            if (ImsCallSessionProxy.this.mMtkImsCallSessionProxy == null) {
                return;
            }
            ImsCallSessionProxy.this.mMtkImsCallSessionProxy.notifyRttECCRedialEvent();
        }

        private void handleRttModifyRequestReceived(AsyncResult asyncResult) {
            if (asyncResult == null || ImsCallSessionProxy.this.mListener == null) {
                ImsCallSessionProxy.this.logWithCallId("handleRttModifyRequestReceived ar or mListener is null", 5);
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            if (ImsCallSessionProxy.this.mCallId == null || iArr[0] != Integer.parseInt(ImsCallSessionProxy.this.mCallId)) {
                return;
            }
            if (!ImsCallSessionProxy.this.isAllowRttVideoSwitch()) {
                ImsCallSessionProxy.this.logWithCallId("handleRttModifyRequestReceived() : RTT and video not switchable", 2);
                ImsCallSessionProxy.this.sendRttModifyResponse(ImsCallSessionProxy.VDBG);
                return;
            }
            int i = iArr[1];
            ImsCallProfile imsCallProfile = new ImsCallProfile();
            ImsCallSessionProxy.this.logWithCallId("handleRttModifyRequestReceived status: " + i, 2);
            if (i == 1) {
                imsCallProfile.mMediaProfile.setRttMode(1);
            } else {
                imsCallProfile.mMediaProfile.setRttMode(0);
                ImsCallSessionProxy.this.sendRttModifyResponse(ImsCallSessionProxy.DBG);
            }
            ImsCallSessionProxy.this.mListener.callSessionRttModifyRequestReceived(imsCallProfile);
        }

        private void handleRttModifyResponse(AsyncResult asyncResult) {
            int i;
            if (asyncResult == null || ImsCallSessionProxy.this.mListener == null) {
                ImsCallSessionProxy.this.logWithCallId("handleRttModifyResponse ar or mListener is null", 5);
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            if (ImsCallSessionProxy.this.mCallId == null || iArr[0] != Integer.parseInt(ImsCallSessionProxy.this.mCallId)) {
                return;
            }
            int i2 = iArr[1];
            if (i2 == 0) {
                ImsCallSessionProxy.this.logWithCallId("handleRttModifyResponse success", 2);
                i = 1;
            } else {
                ImsCallSessionProxy.this.logWithCallId("handleRttModifyResponse fail status = " + i2, 2);
                i = 3;
            }
            ImsCallSessionProxy.this.mListener.callSessionRttModifyResponseReceived(i);
        }

        private void handleRttTextReceived(AsyncResult asyncResult) {
            if (asyncResult == null) {
                ImsCallSessionProxy.this.logWithCallId("handleRttTextReceived ar is null", 5);
                return;
            }
            String[] strArr = (String[]) asyncResult.result;
            if (strArr[0] == null || strArr[1] == null || strArr[2] == null) {
                ImsCallSessionProxy.this.logWithCallId("textReceived is null", 5);
                return;
            }
            int i = Integer.parseInt(strArr[0]);
            if (ImsCallSessionProxy.this.mListener == null || ImsCallSessionProxy.this.mCallId == null || i != Integer.parseInt(ImsCallSessionProxy.this.mCallId)) {
                return;
            }
            ImsCallSessionProxy.this.logWithCallId("Received call id = " + strArr[0] + " len = " + ImsCallSessionProxy.this.sensitiveEncode(String.valueOf(strArr[1])) + " textMessage = " + ImsCallSessionProxy.this.sensitiveEncode(strArr[2]) + " actual len = " + ImsCallSessionProxy.this.sensitiveEncode(String.valueOf(strArr[2].length())), 2);
            if (strArr[2].length() == 0 || Integer.parseInt(strArr[1]) == 0) {
                ImsCallSessionProxy.this.logWithCallId("handleRttTextReceived: length is 0", 5);
                return;
            }
            String unicodeFromUTF8 = ImsCallSessionProxy.this.mRttTextEncoder.getUnicodeFromUTF8(strArr[2]);
            if (unicodeFromUTF8 == null || unicodeFromUTF8.length() == 0) {
                ImsCallSessionProxy.this.logWithCallId("handleRttTextReceived: decodeText length is 0", 5);
            } else {
                ImsCallSessionProxy.this.mListener.callSessionRttMessageReceived(unicodeFromUTF8);
            }
        }

        private int imsReasonInfoCodeFromRilReasonCode(int i) throws RemoteException {
            ImsCallSessionProxy.this.logWithCallId("imsReasonInfoCodeFromRilReasonCode() : causeCode = " + i, 2);
            switch (i) {
                case 1:
                    return 1515;
                case 3:
                    return 333;
                case 6:
                case 65:
                    return 340;
                case 8:
                    return 339;
                case 17:
                    return 338;
                case 18:
                    return 202;
                case 19:
                    return RadioError.OEM_ERROR_2;
                case 21:
                    return 361;
                case 28:
                    return 337;
                case 29:
                case 43:
                case 127:
                    return 354;
                case 31:
                    return RadioError.OEM_ERROR_10;
                case 34:
                case LastCallFailCause.REQUESTED_FACILITY_NOT_IMPLEMENTED /* 69 */:
                case 111:
                    return 351;
                case 38:
                case 42:
                case 47:
                case 63:
                case 88:
                    return 352;
                case 41:
                case 44:
                    return 336;
                case 49:
                    return 340;
                case 55:
                case 57:
                    return 332;
                case 58:
                    if (ImsCallSessionProxy.this.mWfoService != null && ImsCallSessionProxy.this.mRatType == 2) {
                        try {
                            if (!ImsCallSessionProxy.this.mWfoService.isWifiConnected()) {
                                ImsCallSessionProxy.this.logWithCallId("imsReasonInfoCodeFromRilReasonCode() : Rat is Wifi, Wifi is disconnected, ret=SIGNAL_LOST", 2);
                                return LastCallFailCause.OEM_CAUSE_11;
                            }
                        } catch (RemoteException e) {
                            ImsCallSessionProxy.this.logWithCallId("imsReasonInfoCodeFromRilReasonCode() : RemoteException in isWifiConnected()", 5);
                        }
                    }
                    return 354;
                case 68:
                    return 141;
                case 81:
                    return 342;
                case 102:
                    return 335;
                case LastCallFailCause.CALL_BARRED /* 240 */:
                    return 102;
                case LastCallFailCause.FDN_BLOCKED /* 241 */:
                    return LastCallFailCause.FDN_BLOCKED;
                case LastCallFailCause.IMEI_NOT_ACCEPTED /* 243 */:
                    return LastCallFailCause.IMEI_NOT_ACCEPTED;
                case 260:
                    return 1512;
                case 380:
                    if (ImsCommonUtil.supportMdAutoSetupIms()) {
                        return 1514;
                    }
                    return LastCallFailCause.OEM_CAUSE_1;
                default:
                    int wfcDisconnectCause = getWfcDisconnectCause(i);
                    if (wfcDisconnectCause != -1) {
                        return wfcDisconnectCause;
                    }
                    int imsServiceState = ImsCallSessionProxy.this.mImsService.getImsServiceState(ImsCallSessionProxy.this.mPhoneId);
                    ImsCallSessionProxy.this.logWithCallId("imsReasonInfoCodeFromRilReasonCode() : serviceState = " + imsServiceState, 2);
                    if (imsServiceState == 3) {
                        return 111;
                    }
                    if (imsServiceState == 1 && !PhoneNumberUtils.isEmergencyNumber(ImsCallSessionProxy.this.mCallNumber)) {
                        return 106;
                    }
                    if (i == 16) {
                        return RadioError.OEM_ERROR_10;
                    }
                    return 0;
            }
        }

        private boolean isCallModeUpdated(int i, int i2) {
            ImsCallSessionProxy.this.logWithCallId("isCallModeUpdated() : callMode:" + i + "videoState:" + i2, 2);
            boolean zRemoveRemoteCallVideoCapability = ImsCallSessionProxy.VDBG;
            int i3 = ImsCallSessionProxy.this.mCallProfile.mCallType;
            if (ImsCallSessionProxy.this.mVideoState != i2) {
                ImsCallSessionProxy.this.mVideoState = i2;
                ImsCallSessionProxy.this.updateVideoDirection();
                zRemoveRemoteCallVideoCapability = ImsCallSessionProxy.DBG;
            }
            ImsCallSessionProxy imsCallSessionProxy = ImsCallSessionProxy.this;
            imsCallSessionProxy.updateCallType(i, imsCallSessionProxy.mVideoState);
            if (ImsCallSessionProxy.this.mCallProfile.mCallType != i3) {
                zRemoveRemoteCallVideoCapability = ImsCallSessionProxy.DBG;
                if (ImsCallSessionProxy.this.mVTProvider != null) {
                    ImsCallSessionProxy.this.mVTProvider.onUpdateProfile(ImsCallProfile.getVideoStateFromCallType(ImsCallSessionProxy.this.mCallProfile.mCallType));
                }
            }
            boolean zIsMatched = OperatorUtils.isMatched(OperatorUtils.OPID.OP07, ImsCallSessionProxy.this.mPhoneId);
            if ((i == 22 || i == 24) && !zIsMatched) {
                zRemoveRemoteCallVideoCapability |= ImsCallSessionProxy.this.removeRemoteCallVideoCapability();
            }
            if ((i == 20 || i == 22 || i == 24 || i == 25) && zRemoveRemoteCallVideoCapability && ImsCallSessionProxy.this.mVTProvider != null) {
                ImsCallSessionProxy.this.logWithCallId("isCallModeUpdated() : Start setUIMode old: " + i3, 2);
                ImsCallSessionProxy.this.mVTProviderUtil.setUIMode(ImsCallSessionProxy.this.mVTProvider, 4);
                ImsCallSessionProxy.this.logWithCallId("isCallModeUpdated() : End setUIMode new: " + ImsCallSessionProxy.this.mCallProfile.mCallType, 2);
            }
            return zRemoveRemoteCallVideoCapability;
        }

        private void notifyMultipartyStateChanged(int i) {
            if (updateMultipartyState(i)) {
                ImsCallSessionProxy.this.logWithCallId("notifyMultipartyStateChanged() : isMultiparty(): " + ImsCallSessionProxy.this.isMultiparty(), 2);
                if (ImsCallSessionProxy.this.mListener != null) {
                    try {
                        ImsCallSessionProxy.this.mListener.callSessionMultipartyStateChanged(ImsCallSessionProxy.this.isMultiparty());
                    } catch (RuntimeException e) {
                        ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionMultipartyStateChanged()", 5);
                    }
                }
            }
        }

        private void retrieveMergeFail() {
            if (!ImsCallSessionProxy.this.mIsMerging || ImsCallSessionProxy.this.mIsRetrievingMergeFail) {
                ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail() : Shouldn't retrieve merge fail, mIsMerging:" + ImsCallSessionProxy.this.mIsMerging + ", mIsRetrievingMergeFail:" + ImsCallSessionProxy.this.mIsRetrievingMergeFail, 4);
                return;
            }
            ImsCallInfo callInfo = null;
            ImsCallInfo callInfo2 = null;
            boolean z = ImsCallSessionProxy.VDBG;
            ImsCallSessionProxy.this.mIsRetrievingMergeFail = ImsCallSessionProxy.DBG;
            ImsConferenceHandler.getInstance().modifyParticipantFailed();
            ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail()", 2);
            if (ImsCallSessionProxy.this.mMergeCallId != null && !ImsCallSessionProxy.this.mMergeCallId.equals("")) {
                callInfo = ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mMergeCallId);
            }
            if (ImsCallSessionProxy.this.mMergedCallId != null && !ImsCallSessionProxy.this.mMergedCallId.equals("")) {
                callInfo2 = ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mMergedCallId);
            }
            if (callInfo != null && callInfo2 != null) {
                ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail() : MergeCallInfo: callId=" + callInfo.mCallId + " call status=" + callInfo.mState + " MergedCallInfo: callId=" + callInfo2.mCallId + " call status=" + callInfo2.mState, 2);
                if (callInfo.mState == ImsCallInfo.State.ACTIVE && callInfo2.mState == ImsCallInfo.State.HOLDING) {
                    z = ImsCallSessionProxy.DBG;
                } else if (callInfo.mState == ImsCallInfo.State.ACTIVE && callInfo2.mState == ImsCallInfo.State.ACTIVE) {
                    ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail() : two active call and hold merged call", 2);
                    ImsCallSessionProxy.this.mImsRILAdapter.hold(Integer.parseInt(ImsCallSessionProxy.this.mMergedCallId), ImsCallSessionProxy.this.mHandler.obtainMessage(211));
                } else if (callInfo.mState == ImsCallInfo.State.HOLDING && callInfo2.mState == ImsCallInfo.State.HOLDING) {
                    ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail() : two hold call and resume merge call", 2);
                    ImsCallSessionProxy.this.mImsRILAdapter.resume(Integer.parseInt(ImsCallSessionProxy.this.mMergeCallId), ImsCallSessionProxy.this.mHandler.obtainMessage(211));
                } else {
                    z = ImsCallSessionProxy.DBG;
                }
            } else if (callInfo == null || callInfo2 == null) {
                if (callInfo != null) {
                    ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail() : only merge call is left", 2);
                    if (callInfo.mState != ImsCallInfo.State.ACTIVE) {
                        ImsCallSessionProxy.this.mImsRILAdapter.resume(Integer.parseInt(ImsCallSessionProxy.this.mMergeCallId), ImsCallSessionProxy.this.mHandler.obtainMessage(211));
                    } else {
                        z = ImsCallSessionProxy.DBG;
                    }
                } else if (callInfo2 != null) {
                    ImsCallSessionProxy.this.logWithCallId("retrieveMergeFail() : only merged call is left", 2);
                    if (callInfo2.mState != ImsCallInfo.State.HOLDING) {
                        ImsCallSessionProxy.this.mImsRILAdapter.hold(Integer.parseInt(ImsCallSessionProxy.this.mMergedCallId), ImsCallSessionProxy.this.mHandler.obtainMessage(211));
                    } else {
                        z = ImsCallSessionProxy.DBG;
                    }
                } else {
                    z = ImsCallSessionProxy.DBG;
                }
            }
            if (z) {
                ImsCallSessionProxy.this.mIsRetrievingMergeFail = ImsCallSessionProxy.VDBG;
                ImsCallSessionProxy.this.mergeFailed();
            }
        }

        private boolean updateAddressFromPau(String str) {
            if (!ImsCallSessionProxy.this.mShouldUpdateAddressByPau) {
                ImsCallSessionProxy.this.logWithCallId("updateAddressFromPau() : MO call, should not update addr by PAU", 2);
                return ImsCallSessionProxy.VDBG;
            }
            String fieldValueFromPau = getFieldValueFromPau(str, PAU_SIP_NUMBER_FIELD);
            String fieldValueFromPau2 = getFieldValueFromPau(str, PAU_NUMBER_FIELD);
            ImsCallSessionProxy.this.logWithCallId("updateAddressFromPau() : updatePau()... telNumber: " + ImsCallSessionProxy.this.sensitiveEncode(fieldValueFromPau2) + " sipNumber: " + ImsCallSessionProxy.this.sensitiveEncode(fieldValueFromPau), 2);
            String str2 = ((TextUtils.isEmpty(fieldValueFromPau) || !ImsCallSessionProxy.this.mShouldUpdateAddressBySipField) ? fieldValueFromPau2 : fieldValueFromPau).split("[;@,]+")[0];
            String callExtra = ImsCallSessionProxy.this.mCallProfile.getCallExtra("oi");
            if (TextUtils.isEmpty(str2) || PhoneNumberUtils.compareLoosely(callExtra, str2)) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallExtra("oi", str2);
            ImsCallSessionProxy.this.logWithCallId("updateAddressFromPau() : updatePau()... addr: " + ImsCallSessionProxy.this.sensitiveEncode(str2), 2);
            return ImsCallSessionProxy.DBG;
        }

        private boolean updateCallDisplayFromNumberOrPau(String str, String str2) {
            if (!TextUtils.isEmpty(str2) || TextUtils.isEmpty(str)) {
                return handlePauUpdate(str2);
            }
            if (ImsCallSessionProxy.this.mCallProfile.getCallExtra("oi").equals(str)) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.logWithCallId("updateCallDisplayFromNumberOrPau() : number: " + ImsCallSessionProxy.this.sensitiveEncode(str), 2);
            ImsCallSessionProxy.this.mCallProfile.setCallExtra("oi", str);
            ImsCallSessionProxy.this.mCallProfile.setCallExtra("remote_uri", str);
            return ImsCallSessionProxy.DBG;
        }

        private boolean updateDisplayNameFromPau(String str) {
            String displayNameFromPau = getDisplayNameFromPau(str);
            String callExtra = ImsCallSessionProxy.this.mCallProfile.getCallExtra("cna");
            if (TextUtils.isEmpty(displayNameFromPau)) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallExtraInt("cnap", 2);
            if (PhoneNumberUtils.compareLoosely(callExtra, displayNameFromPau)) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallExtra("cna", displayNameFromPau);
            ImsCallSessionProxy.this.mCallProfile.setCallExtraInt("cnap", 2);
            ImsCallSessionProxy.this.logWithCallId("updateDisplayNameFromPau() : diaplayName: " + displayNameFromPau, 2);
            return ImsCallSessionProxy.DBG;
        }

        private void updateImsReasonInfo(AsyncResult asyncResult) {
            String[] strArr = (String[]) asyncResult.result;
            if (strArr == null || strArr[3] == null || strArr[4] == null || ImsCallSessionProxy.this.mCallId == null || !strArr[0].equals(ImsCallSessionProxy.this.mCallId)) {
                return;
            }
            ImsCallSessionProxy.this.detailLog("updateImsReasonInfo() : receive sip method = " + strArr[3] + " cause = " + strArr[4] + " reason header = " + strArr[5]);
            SipMessage sipMessage = new SipMessage(strArr);
            updateRestrictHDForRemoteCallProfile(sipMessage.getCode(), sipMessage.getReasonHeader());
            ImsReasonInfo imsReasonInfo = ImsCallSessionProxy.this.mOpImsCallSession.getImsReasonInfo(sipMessage);
            if (imsReasonInfo == null) {
                imsReasonInfo = ImsCallSessionProxy.this.getOpImsReasonInfo(sipMessage);
            }
            if (imsReasonInfo != null) {
                ImsCallSessionProxy.this.mImsReasonInfo = imsReasonInfo;
                return;
            }
            int code = sipMessage.getCode();
            if (code == 0) {
                if (sipMessage.getMethod() == 4 && sipMessage.getReasonHeader() != null && ImsCallSessionProxy.this.isRemoteCallDecline(sipMessage.getReasonHeader())) {
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1404, 0, sipMessage.getReasonHeader());
                    return;
                }
                if (sipMessage.getMethod() == 4 && sipMessage.getReasonHeader() != null && ImsCallSessionProxy.this.isAnsweredElsewhere(sipMessage.getReasonHeader())) {
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1014, 0, sipMessage.getReasonHeader());
                    return;
                }
                if (sipMessage.getMethod() == 7 && sipMessage.getReasonHeader() != null && sipMessage.getReasonHeader().equals(SipMessage.PULLED_AWAY_HEADER)) {
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1016, 0, sipMessage.getReasonHeader());
                    return;
                }
                if (sipMessage.getDir() == 0 && sipMessage.getType() == 0 && sipMessage.getMethod() == 1 && sipMessage.getReasonHeader() != null && (sipMessage.getReasonHeader().equals(SipMessage.VIDEO_CALL_NOT_AVAILABLE_HEADER) || sipMessage.getReasonHeader().equals(SipMessage.VIDEO_CALL_UNAVAILABLE_HEADER))) {
                    Rlog.d(ImsCallSessionProxy.LOG_TAG, sipMessage.getReasonHeader());
                    ImsCallSessionProxy.this.logWithCallId("updateImsReasonInfo() : " + sipMessage.getReasonHeader(), 2);
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(44, 0, sipMessage.getReasonHeader());
                    return;
                }
                if (sipMessage.getMethod() == 7 && sipMessage.getDir() == 0 && sipMessage.getReasonHeader() != null && sipMessage.getReasonHeader().toLowerCase().equals(SipMessage.NO_RTP_TIMEOUT_HEADER) && ImsCallSessionProxy.this.shouldNotifyCallDropByBadWifiQuality()) {
                    if (ImsCallSessionProxy.this.getWifiRssi() < ImsCallSessionProxy.this.mBadRssiThreshould) {
                        ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_2, 0, sipMessage.getReasonHeader());
                        return;
                    } else {
                        ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_3, 0, sipMessage.getReasonHeader());
                        return;
                    }
                }
                return;
            }
            if (code == 183) {
                if (sipMessage.getDir() == 0 && sipMessage.getType() == 1) {
                    ImsCallSessionProxy.this.mSipSessionProgress = ImsCallSessionProxy.DBG;
                    return;
                }
                return;
            }
            if (code == 200) {
                if (sipMessage.getReasonHeader() == null || !sipMessage.getReasonHeader().toLowerCase().equals(SipMessage.CALL_COMPLETED_ELSEWHERE_HEADER)) {
                    return;
                }
                ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1014, 0, sipMessage.getReasonHeader());
                return;
            }
            if (code == 403) {
                if (sipMessage.getMethod() != 1 || sipMessage.getReasonHeader() == null || sipMessage.getReasonHeader().length() == 0) {
                    return;
                }
                if (sipMessage.getReasonHeader().equals(SipMessage.CALL_MAXIMUM_ALREADY_REACHED)) {
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1403, 0, sipMessage.getReasonHeader());
                    return;
                } else {
                    if (OperatorUtils.isMatched(OperatorUtils.OPID.OP07, ImsCallSessionProxy.this.mPhoneId)) {
                        ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1623, 0, sipMessage.getReasonHeader());
                        return;
                    }
                    return;
                }
            }
            if (code == 486) {
                if (sipMessage.getMethod() == 1 && sipMessage.getDir() == 1) {
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(338, 0, sipMessage.getReasonHeader());
                    if (ImsCallSessionProxy.this.mMtkImsCallSessionProxy != null) {
                        ImsCallSessionProxy.this.mMtkImsCallSessionProxy.notifyCallSessionBusy();
                        return;
                    }
                    return;
                }
                return;
            }
            if (code != 503) {
                if (code == 603 && sipMessage.getReasonHeader() != null && sipMessage.getReasonHeader().toLowerCase().equals(SipMessage.CALL_DECLINED_HEADER)) {
                    ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1404, 0, sipMessage.getReasonHeader());
                    return;
                }
                return;
            }
            if (sipMessage.getMethod() != 1 || sipMessage.getReasonHeader() == null || sipMessage.getReasonHeader().length() == 0 || !OperatorUtils.isMatched(OperatorUtils.OPID.OP07, ImsCallSessionProxy.this.mPhoneId)) {
                return;
            }
            ImsCallSessionProxy.this.mImsReasonInfo = new ImsReasonInfo(1622, 0, sipMessage.getReasonHeader());
        }

        private boolean updateMultipartyState(int i) {
            boolean z = i == 22 || i == 23 || i == 24 || i == 25;
            if (i == 22 || i == 23) {
                ImsCallSessionProxy.this.mIsConferenceHost = ImsCallSessionProxy.DBG;
            } else {
                ImsCallSessionProxy.this.mIsConferenceHost = ImsCallSessionProxy.VDBG;
            }
            if (OperatorUtils.isMatched(OperatorUtils.OPID.OP12, ImsCallSessionProxy.this.mPhoneId) && ImsCallSessionProxy.this.mIsConferenceHost) {
                Rlog.d(ImsCallSessionProxy.LOG_TAG, "VzW: set conference no constrain for HD icon");
                ImsCallSessionProxy.this.mRemoteCallProfile.mRestrictCause = 0;
            }
            if (ImsCallSessionProxy.this.isMultiparty() == z) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallExtraInt(ImsCallProfileEx.EXTRA_MPTY, z ? 1 : 0);
            return ImsCallSessionProxy.DBG;
        }

        private void updateOIR(String str, String str2) {
            if (ImsCallSessionProxy.this.isMultiparty()) {
                ImsCallSessionProxy.this.logWithCallId("updateOIR() : ignore update OIR for mpty call: ", 2);
                return;
            }
            int i = 2;
            String displayNameFromPau = getDisplayNameFromPau(str2);
            String str3 = new String("Coin line/payphone");
            ImsCallSessionProxy.this.logWithCallId("updateOIR() : pau: [" + ImsCallSessionProxy.this.sensitiveEncode(str2) + "], displayName: [" + ImsCallSessionProxy.this.sensitiveEncode(displayNameFromPau) + "]", 2);
            if (TextUtils.isEmpty(str) && TextUtils.isEmpty(str2)) {
                i = 1;
            } else if (!TextUtils.isEmpty(str2) && str2.toLowerCase().contains("anonymous")) {
                i = 1;
            } else if (displayNameFromPau.trim().equals(str3)) {
                ImsCallSessionProxy.this.logWithCallId("updateOIR() : payhone", 2);
                i = 4;
            } else if (TextUtils.isEmpty(str2) && OperatorUtils.isMatched(OperatorUtils.OPID.OP12, ImsCallSessionProxy.this.mPhoneId)) {
                i = 1;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallExtraInt("oir", i);
        }

        private void updateRestrictHDForRemoteCallProfile(int i, String str) {
            if (OperatorUtils.isMatched(OperatorUtils.OPID.OP12, ImsCallSessionProxy.this.mPhoneId)) {
                Rlog.d(ImsCallSessionProxy.LOG_TAG, "updateRestrictHDForRemoteCallProfile: check for op12");
                if ((i == 180 || i == 200) && str != null && str.toLowerCase().equals("<call_w_mmtel_icsi_tag>")) {
                    Rlog.d(ImsCallSessionProxy.LOG_TAG, "updateRestrictHDForRemoteCallProfile");
                    ImsCallSessionProxy.this.mRemoteCallProfile.mRestrictCause = 0;
                    ImsCallSessionProxy.this.notifyCallSessionUpdated();
                }
            }
        }

        private boolean updateVerstatFromPau(String str) {
            String fieldValueFromPau = getFieldValueFromPau(str, PAU_VERSTAT_FIELD);
            if (TextUtils.isEmpty(fieldValueFromPau)) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.logWithCallId("updateVerstatFromPau() :" + fieldValueFromPau, 2);
            int callerNumberVerificationStatus = ImsCallSessionProxy.this.mCallProfile.getCallerNumberVerificationStatus();
            String str2 = fieldValueFromPau.split("[;@,]+")[0];
            if (str2.contains("TN-Validation-Passed") && callerNumberVerificationStatus != 1) {
                ImsCallSessionProxy.this.mCallProfile.setCallerNumberVerificationStatus(1);
                ImsCallSessionProxy.this.mCallProfile.setCallExtraInt(ImsCallProfileEx.EXTRA_VERSTAT, 1);
                return ImsCallSessionProxy.DBG;
            }
            if (!str2.contains("TN-Validation-Failed") || callerNumberVerificationStatus == 2) {
                return ImsCallSessionProxy.VDBG;
            }
            ImsCallSessionProxy.this.mCallProfile.setCallerNumberVerificationStatus(2);
            ImsCallSessionProxy.this.mCallProfile.setCallExtraInt(ImsCallProfileEx.EXTRA_VERSTAT, 0);
            return ImsCallSessionProxy.DBG;
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            char c;
            ImsReasonInfo imsReasonInfo;
            ImsReasonInfo imsReasonInfo2;
            int i = 255;
            ImsCallSessionProxy.this.detailLog("handleMessage() : receive message = " + ImsCallSessionProxy.this.event2String(message.what));
            ImsConferenceHandler.getInstance();
            int i2 = message.what;
            boolean z = ImsCallSessionProxy.DBG;
            if (i2 == 102) {
                String[] strArr = (String[]) ((AsyncResult) message.obj).result;
                int i3 = (strArr[1] == null || strArr[1].equals("")) ? 0 : Integer.parseInt(strArr[1]);
                if (strArr[5] != null && !strArr[5].equals("")) {
                    i = Integer.parseInt(strArr[5]);
                }
                if (ImsCallSessionProxy.this.mCallId != null && ImsCallSessionProxy.this.mCallId.equals(strArr[0])) {
                    if (ImsCallSessionProxy.this.mIsWaitingClose && !ImsCallSessionProxy.this.mIsMerging) {
                        ImsCallSessionProxy.this.logWithCallId("EVENT_CALL_INFO_INDICATION : mIsWaitingClose is " + ImsCallSessionProxy.this.mIsWaitingClose + ", count: " + ImsCallSessionProxy.this.mWrongEcpiCount, 4);
                        if (ImsCallSessionProxy.this.mWrongEcpiCount < 5) {
                            ImsCallSessionProxy.access$3908(ImsCallSessionProxy.this);
                            return;
                        } else {
                            ImsCallSessionProxy.this.close();
                            return;
                        }
                    }
                    ImsServiceCallTracker imsServiceCallTracker = ImsCallSessionProxy.this.mImsServiceCT;
                    ImsCallSessionProxy imsCallSessionProxy = ImsCallSessionProxy.this;
                    imsServiceCallTracker.processCallInfoIndication(strArr, imsCallSessionProxy, imsCallSessionProxy.mCallProfile);
                }
                if (ImsCallSessionProxy.this.mIsMerging && !strArr[0].equals(ImsCallSessionProxy.this.mCallId)) {
                    if (i3 != 130) {
                        return;
                    }
                    ImsCallSessionProxy.this.logWithCallId("handleMessage() : conference assign call id = " + strArr[0], 2);
                    ImsCallProfile imsCallProfile = new ImsCallProfile();
                    if (strArr[5] != null && !strArr[5].equals("")) {
                        i = Integer.parseInt(strArr[5]);
                    }
                    if (i == 21 || i == 23 || i == 25) {
                        imsCallProfile.mCallType = 4;
                    } else {
                        imsCallProfile.mCallType = 2;
                    }
                    ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                    if (strArr[6] == null || strArr[6].equals("")) {
                        imsCallProfile.setCallExtraInt("oir", 2);
                    } else {
                        imsCallProfile.setCallExtra("oi", strArr[6]);
                        imsCallProfile.setCallExtra("remote_uri", strArr[6]);
                        imsCallProfile.setCallExtraInt("oir", 2);
                    }
                    imsCallProfile.setCallExtra("CallRadioTech", ImsCallSessionProxy.this.mCallProfile.getCallExtra("CallRadioTech"));
                    ImsCallSessionProxy.this.createConferenceSession(imsCallProfile, strArr[0]);
                    if (ImsCallSessionProxy.this.mMtkConfSessionProxy != null) {
                        ImsCallSessionProxy.this.mImsServiceCT.processCallInfoIndication(strArr, ImsCallSessionProxy.this.mMtkConfSessionProxy.getAospCallSessionProxy(), imsCallProfile);
                    } else if (ImsCallSessionProxy.this.mConfSessionProxy != null) {
                        ImsCallSessionProxy.this.mImsServiceCT.processCallInfoIndication(strArr, ImsCallSessionProxy.this.mConfSessionProxy, imsCallProfile);
                    } else {
                        ImsCallSessionProxy.this.logWithCallId("handleMessage() : conference not create callSession", 2);
                    }
                    if (ImsCallSessionProxy.this.mHangupHostDuringMerge) {
                        ImsCallSessionProxy.this.mHangupHostDuringMerge = ImsCallSessionProxy.VDBG;
                        ImsCallSessionProxy.this.terminateConferenceSession();
                        return;
                    }
                    return;
                }
                if (ImsCallSessionProxy.this.mCallId == null || !ImsCallSessionProxy.this.mCallId.equals(strArr[0])) {
                    if (ImsCallSessionProxy.this.mCallId == null && i3 == 130) {
                        ImsCallSessionProxy.this.logWithCallId("handleMessage() : receive 130 URC, assign call_id = " + strArr[0], 2);
                        ImsServiceCallTracker imsServiceCallTracker2 = ImsCallSessionProxy.this.mImsServiceCT;
                        ImsCallSessionProxy imsCallSessionProxy2 = ImsCallSessionProxy.this;
                        imsServiceCallTracker2.processCallInfoIndication(strArr, imsCallSessionProxy2, imsCallSessionProxy2.mCallProfile);
                        if (ImsCallSessionProxy.this.mMtkImsCallSessionProxy != null) {
                            ImsCallSessionProxy.this.mMtkImsCallSessionProxy.notifyCallSessionCalling();
                        }
                        boolean zUpdateCallDisplayFromNumberOrPau = updateCallDisplayFromNumberOrPau(ImsCallSessionProxy.this.mCallNumber, strArr[8]);
                        updateOIR(ImsCallSessionProxy.this.mCallNumber, strArr[8]);
                        if (ImsCommonUtil.supportMdAutoSetupIms()) {
                            c = 0;
                        } else {
                            ImsCallSessionProxy imsCallSessionProxy3 = ImsCallSessionProxy.this;
                            c = 0;
                            imsCallSessionProxy3.updateRat(imsCallSessionProxy3.mImsService.getRatType(ImsCallSessionProxy.this.mPhoneId), 0);
                        }
                        ImsCallSessionProxy.this.mState = 3;
                        ImsCallSessionProxy.this.mCallId = strArr[c];
                        ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                        if (ImsCallSessionProxy.this.mVTProvider != null) {
                            ImsCallSessionProxy.this.mVTProviderUtil.bind(ImsCallSessionProxy.this.mVTProvider, Integer.parseInt(ImsCallSessionProxy.this.mCallId), ImsCallSessionProxy.this.mPhoneId);
                        }
                        if (ImsCallSessionProxy.this.mIsOneKeyConf) {
                            ImsConferenceHandler.getInstance().startConference(ImsCallSessionProxy.this.mContext, ImsCallSessionProxy.this.new ConferenceEventListener(), strArr[0], ImsCallSessionProxy.this.mPhoneId);
                            ImsConferenceHandler.getInstance().addLocalCache(ImsCallSessionProxy.this.mOneKeyparticipants);
                            ImsCallSessionProxy.this.mOneKeyparticipants = null;
                        }
                        if (zUpdateCallDisplayFromNumberOrPau || ImsCallSessionProxy.this.mRatType == 2) {
                            ImsCallSessionProxy.this.notifyCallSessionUpdated();
                        }
                        ImsCallSessionProxy.this.updateCallStateForWifiOffload(3);
                        if (ImsCallSessionProxy.this.mHasPendingDisconnect) {
                            ImsCallSessionProxy.this.mHasPendingDisconnect = ImsCallSessionProxy.VDBG;
                            ImsCallSessionProxy imsCallSessionProxy4 = ImsCallSessionProxy.this;
                            imsCallSessionProxy4.terminate(imsCallSessionProxy4.mPendingDisconnectReason);
                            return;
                        }
                        return;
                    }
                    return;
                }
                ImsCallSessionProxy imsCallSessionProxy5 = ImsCallSessionProxy.this;
                StringBuilder sb = new StringBuilder();
                sb.append("EVENT_CALL_INFO_INDICATION: msgType ");
                sb.append(i3);
                sb.append(", mCallNumber = ");
                ImsCallSessionProxy imsCallSessionProxy6 = ImsCallSessionProxy.this;
                sb.append(imsCallSessionProxy6.sensitiveEncode(imsCallSessionProxy6.mCallNumber));
                imsCallSessionProxy5.detailLog(sb.toString());
                if ((ImsCallSessionProxy.this.mShouldUpdateAddressFromEcpi || TextUtils.isEmpty(ImsCallSessionProxy.this.mCallNumber)) && strArr[6] != null && !strArr[6].equals("")) {
                    String strReplace = strArr[6].replace("*31#", "").replace("#31#", "");
                    if (!strReplace.equals(ImsCallSessionProxy.this.mCallNumber)) {
                        ImsCallSessionProxy.this.mCallNumber = strReplace;
                    }
                }
                boolean zUpdateCallDisplayFromNumberOrPau2 = updateCallDisplayFromNumberOrPau(ImsCallSessionProxy.this.mCallNumber, strArr[8]);
                updateOIR(ImsCallSessionProxy.this.mCallNumber, strArr[8]);
                int iMapPhoneIdToServiceId = ImsCallSessionProxy.this.mImsService.mapPhoneIdToServiceId(ImsCallSessionProxy.this.mPhoneId);
                if (i3 == 0) {
                    ImsCallSessionProxy.this.mState = 3;
                    ImsCallSessionProxy.this.mMTSetup = ImsCallSessionProxy.DBG;
                    if (strArr[5] != null && !strArr[5].equals("")) {
                        i = Integer.parseInt(strArr[5]);
                    }
                    ImsCallSessionProxy imsCallSessionProxy7 = ImsCallSessionProxy.this;
                    imsCallSessionProxy7.updateRat(imsCallSessionProxy7.mImsService.getRatType(ImsCallSessionProxy.this.mPhoneId), 0);
                    ImsCallSessionProxy imsCallSessionProxy8 = ImsCallSessionProxy.this;
                    imsCallSessionProxy8.updateCallType(i, imsCallSessionProxy8.mVideoState);
                    ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                    updateMultipartyState(i);
                    if (ImsCallSessionProxy.this.mIsRingingRedirect) {
                        ImsCallSessionProxy.this.mMtkImsCallSessionProxy.notifyCallSessionRinging(ImsCallSessionProxy.this.mCallProfile);
                    } else {
                        Bundle bundle = new Bundle();
                        bundle.putString("android:imsCallID", ImsCallSessionProxy.this.mCallId);
                        bundle.putString("android:imsDialString", strArr[6]);
                        bundle.putInt("android:imsServiceId", iMapPhoneIdToServiceId);
                        ImsCallSessionProxy.this.mImsService.notifyIncomingCallSession(ImsCallSessionProxy.this.mPhoneId, ImsCallSessionProxy.this.getServiceImpl(), bundle);
                    }
                    ImsCallSessionProxy.this.mEnableSendRttBom = ImsCallSessionProxy.DBG;
                    return;
                }
                if (i3 == 2) {
                    int iUpdateIsIbt = ImsCallSessionProxy.this.updateIsIbt(strArr);
                    updateMultipartyState(i);
                    ImsCallSessionProxy.this.updateOutgoingVideoRingtone(i, iUpdateIsIbt);
                    ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                    if (ImsCallSessionProxy.this.mState != 7) {
                        ImsCallSessionProxy.this.mState = 2;
                        if (ImsCallSessionProxy.this.mListener != null) {
                            try {
                                ImsCallSessionProxy.this.mListener.callSessionProgressing(ImsCallSessionProxy.this.mCallProfile.mMediaProfile);
                            } catch (RuntimeException e) {
                                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionRemoveParticipantsRequestFailed()", 5);
                            }
                        }
                        ImsCallSessionProxy.this.mHasPendingMo = ImsCallSessionProxy.VDBG;
                        if (zUpdateCallDisplayFromNumberOrPau2) {
                            ImsCallSessionProxy.this.notifyCallSessionUpdated();
                            return;
                        }
                        return;
                    }
                    return;
                }
                if (i3 == 6) {
                    ImsCallSessionProxy.this.mState = 4;
                    ImsCallSessionProxy.this.mCallProfile.mMediaProfile.mAudioDirection = 3;
                    updateMultipartyState(i);
                    if (ImsCallSessionProxy.this.mState != 7) {
                        if (ImsCallSessionProxy.this.mListener != null) {
                            try {
                                if (ImsCallSessionProxy.this.mHasPendingMo) {
                                    ImsCallSessionProxy.this.mListener.callSessionProgressing(ImsCallSessionProxy.this.mCallProfile.mMediaProfile);
                                }
                                ImsCallSessionProxy.this.mListener.callSessionInitiated(ImsCallSessionProxy.this.mCallProfile);
                            } catch (RuntimeException e2) {
                                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionProgressing()/callSessionInitiated()", 5);
                            }
                        }
                        ImsCallSessionProxy.this.mHasPendingMo = ImsCallSessionProxy.VDBG;
                    }
                    boolean z2 = ImsCallSessionProxy.VDBG;
                    int i4 = ImsCallSessionProxy.this.mCallProfile.mCallType;
                    ImsCallSessionProxy imsCallSessionProxy9 = ImsCallSessionProxy.this;
                    imsCallSessionProxy9.updateCallType(i, imsCallSessionProxy9.mVideoState);
                    ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                    if (ImsCallSessionProxy.this.mCallProfile.mCallType != i4) {
                        z2 = ImsCallSessionProxy.DBG;
                    }
                    if (ImsCallSessionProxy.this.mVTProvider != null) {
                        ImsCallSessionProxy.this.mVTProvider.onUpdateProfile(ImsCallProfile.getVideoStateFromCallType(ImsCallSessionProxy.this.mCallProfile.mCallType));
                    }
                    if (z2) {
                        ImsCallSessionProxy.this.notifyCallSessionUpdated();
                    }
                    ImsCallSessionProxy imsCallSessionProxy10 = ImsCallSessionProxy.this;
                    imsCallSessionProxy10.updateCallStateForWifiOffload(imsCallSessionProxy10.mState);
                    ImsCallSessionProxy.this.checkAndSendRttBom();
                    return;
                }
                if (i3 == 7) {
                    int i5 = strArr[2] != null ? Integer.parseInt(strArr[2]) : 0;
                    ImsCallSessionProxy.this.logWithCallId("videoIbt= " + i5, 2);
                    ImsCallSessionProxy.this.updateIncomingVideoRingtone(i, i5);
                    ImsCallSessionProxy.this.notifyCallSessionUpdated();
                    return;
                }
                switch (i3) {
                    case 131:
                        ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                        if (ImsCallSessionProxy.this.mListener == null || ImsCallSessionProxy.this.mState == 7) {
                            return;
                        }
                        if (!ImsCallSessionProxy.this.mIsHideHoldEventDuringMerging && !ImsCallSessionProxy.this.mIsHideHoldDuringECT && !ImsCallSessionProxy.this.mOpImsCallSession.isDeviceSwitching()) {
                            try {
                                ImsCallSessionProxy.this.mListener.callSessionHeld(ImsCallSessionProxy.this.mCallProfile);
                            } catch (RuntimeException e3) {
                                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionHeld()", 5);
                            }
                            break;
                        } else if (zUpdateCallDisplayFromNumberOrPau2) {
                            ImsCallSessionProxy.this.notifyCallSessionUpdated();
                        }
                        if (ImsCallSessionProxy.this.mIsHideHoldEventDuringMerging) {
                            ImsCallSessionProxy.this.mNeedHideResumeEventDuringMerging = ImsCallSessionProxy.DBG;
                            return;
                        }
                        return;
                    case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_ACTIVE /* 132 */:
                        ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                        if (ImsCallSessionProxy.this.mListener != null) {
                            if (ImsCallSessionProxy.this.mState != 4) {
                                if (zUpdateCallDisplayFromNumberOrPau2) {
                                    ImsCallSessionProxy.this.notifyCallSessionUpdated();
                                    return;
                                }
                                return;
                            }
                            if (!ImsCallSessionProxy.this.mNeedHideResumeEventDuringMerging) {
                                try {
                                    ImsCallSessionProxy.this.mListener.callSessionResumed(ImsCallSessionProxy.this.mCallProfile);
                                } catch (RuntimeException e4) {
                                    ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionResumed()", 5);
                                }
                                break;
                            }
                            if (ImsCallSessionProxy.this.mVTProvider != null) {
                                ImsCallSessionProxy.this.mVTProvider.onReceiveCallSessionEvent(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_ACTIVE);
                                return;
                            }
                            return;
                        }
                        return;
                    case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_DISCONNECTED /* 133 */:
                        ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                        boolean z3 = ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallInfo.State.HOLDING) != null ? ImsCallSessionProxy.DBG : ImsCallSessionProxy.VDBG;
                        if (ImsCallSessionProxy.this.mHasPendingMo && ImsCallSessionProxy.this.mMtkImsCallSessionProxy != null && ImsCallSessionProxy.this.mOpImsCallSession.handleCallStartFailed(ImsCallSessionProxy.this.mMtkImsCallSessionProxy.getServiceImpl(), ImsCallSessionProxy.this.mImsRILAdapter, z3)) {
                            return;
                        }
                        ImsCallSessionProxy.this.callTerminated();
                        return;
                    default:
                        switch (i3) {
                            case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_HOLD /* 135 */:
                                ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                                ImsCallSessionProxy.this.updateIsIbt(strArr);
                                ImsCallSessionProxy.this.notifyRemoteHeld();
                                if (zUpdateCallDisplayFromNumberOrPau2) {
                                    ImsCallSessionProxy.this.notifyCallSessionUpdated();
                                    return;
                                }
                                return;
                            case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME /* 136 */:
                                ImsCallSessionProxy.this.sendCallEventWithRat(i3);
                                ImsCallSessionProxy.this.updateIsIbt(strArr);
                                ImsCallSessionProxy.this.notifyRemoteResumed();
                                if (zUpdateCallDisplayFromNumberOrPau2) {
                                    ImsCallSessionProxy.this.notifyCallSessionUpdated();
                                    return;
                                }
                                return;
                            case 137:
                                handleRttECCRedialEvent();
                                return;
                            default:
                                return;
                        }
                }
            }
            if (i2 != 201) {
                switch (i2) {
                    case 104:
                        handleEconfIndication((String[]) ((AsyncResult) message.obj).result);
                        return;
                    case 105:
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception != null) {
                            imsReasonInfo = new ImsReasonInfo();
                        } else if (ImsCallSessionProxy.this.mLocalTerminateReason != 0) {
                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : notify disconnect cause by mLocalTerminateReason " + ImsCallSessionProxy.this.mLocalTerminateReason, 2);
                            imsReasonInfo = new ImsReasonInfo(ImsCallSessionProxy.this.mLocalTerminateReason, 0);
                        } else if (ImsCallSessionProxy.this.mImsReasonInfo == null) {
                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : get disconnect cause from +CEER", 2);
                            imsReasonInfo = new ImsReasonInfo(imsReasonInfoCodeFromRilReasonCode(((com.android.internal.telephony.LastCallFailCause) asyncResult.result).causeCode), 0);
                        } else {
                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : get disconnect cause directly from +ESIPCPI", 2);
                            imsReasonInfo = ImsCallSessionProxy.this.mImsReasonInfo;
                        }
                        ImsCallSessionProxy.this.notifyCallSessionTerminated(imsReasonInfo);
                        return;
                    case 106:
                        String[] strArr2 = (String[]) ((AsyncResult) message.obj).result;
                        ImsCallSessionProxy.this.mImsServiceCT.processCallModeChangeIndication(strArr2);
                        if (strArr2 == null || !strArr2[0].equals(ImsCallSessionProxy.this.mCallId)) {
                            return;
                        }
                        int i6 = 3;
                        if (strArr2[1] != null && !strArr2[1].equals("")) {
                            i = Integer.parseInt(strArr2[1]);
                        }
                        if (strArr2[2] != null && !strArr2[2].equals("")) {
                            i6 = Integer.parseInt(strArr2[2]);
                        }
                        ImsCallSessionProxy.this.logWithCallId("handleMessage() : mode = " + i + ", video state = " + i6, 2);
                        boolean zIsCallModeUpdated = isCallModeUpdated(i, i6);
                        boolean z4 = strArr2.length >= 5 && handlePauUpdate(strArr2[4]);
                        if (i != 25) {
                            z = false;
                        }
                        boolean z5 = z;
                        if (z5) {
                            ImsCallSessionProxy.this.mCallProfile.setCallExtra(ImsCallSessionProxy.VT_PROVIDER_ID, ImsCallSessionProxy.this.mCallId);
                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : setCallIDAsExtras video_provider_id = " + ImsCallSessionProxy.this.mCallId, 5);
                        }
                        if (zIsCallModeUpdated || z4 || z5) {
                            ImsCallSessionProxy.this.notifyCallSessionUpdated();
                            if (zIsCallModeUpdated) {
                                ImsCallSessionProxy imsCallSessionProxy11 = ImsCallSessionProxy.this;
                                imsCallSessionProxy11.updateCallStateForWifiOffload(imsCallSessionProxy11.mState);
                            }
                        }
                        notifyMultipartyStateChanged(i);
                        return;
                    case ImsCallSessionProxy.EVENT_VIDEO_CAPABILITY_INDICATION /* 107 */:
                        String[] strArr3 = (String[]) ((AsyncResult) message.obj).result;
                        int i7 = 0;
                        int i8 = 0;
                        if (strArr3 == null || !strArr3[0].equals(ImsCallSessionProxy.this.mCallId)) {
                            return;
                        }
                        if (strArr3[1] != null && !strArr3[1].equals("")) {
                            i7 = Integer.parseInt(strArr3[1]);
                            if (i7 == 1) {
                                ImsCallSessionProxy.this.mLocalCallProfile.mCallType = 4;
                            } else {
                                ImsCallSessionProxy.this.mLocalCallProfile.mCallType = 2;
                            }
                        }
                        if (strArr3[2] != null && !strArr3[2].equals("")) {
                            i8 = Integer.parseInt(strArr3[2]);
                            if (i8 == 1) {
                                ImsCallSessionProxy.this.mRemoteCallProfile.mCallType = 4;
                            } else {
                                ImsCallSessionProxy.this.mRemoteCallProfile.mCallType = 2;
                            }
                        }
                        ImsCallSessionProxy.this.correctRemoteVideoCapabilityForVideoConference();
                        boolean zIsMatched = OperatorUtils.isMatched(OperatorUtils.OPID.OP07, ImsCallSessionProxy.this.mPhoneId);
                        if (ImsCallSessionProxy.this.isMultiparty()) {
                            ImsCallSessionProxy imsCallSessionProxy12 = ImsCallSessionProxy.this;
                            if (!imsCallSessionProxy12.isVideoCall(imsCallSessionProxy12.mCallProfile) && !zIsMatched) {
                                ImsCallSessionProxy.this.removeRemoteCallVideoCapability();
                            }
                        }
                        ImsCallSessionProxy.this.logWithCallId("handleMessage() : local video capability = " + i7 + ", remote video capability = " + i8, 2);
                        ImsCallSessionProxy.this.notifyCallSessionUpdated();
                        return;
                    default:
                        switch (i2) {
                            case ImsCallSessionProxy.EVENT_ECT_RESULT_INDICATION /* 109 */:
                                if (ImsCallSessionProxy.this.mOpImsCallSession.handleDeviceSwitchResult(ImsCallSessionProxy.this.mCallId, ImsCallSessionProxy.this.mMtkImsCallSessionProxy.getServiceImpl(), (AsyncResult) message.obj)) {
                                    return;
                                }
                                handleEctIndication((AsyncResult) message.obj);
                                return;
                            case ImsCallSessionProxy.EVENT_RTT_CAPABILITY_INDICATION /* 110 */:
                                handleRttCapabilityIndication((AsyncResult) message.obj);
                                return;
                            case 111:
                                handleImsConferenceIndication((AsyncResult) message.obj);
                                return;
                            default:
                                switch (i2) {
                                    case ImsCallSessionProxy.EVENT_HOLD_RESULT /* 203 */:
                                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                                        ImsCallSessionProxy imsCallSessionProxy13 = ImsCallSessionProxy.this;
                                        if (asyncResult2.exception != null) {
                                            z = false;
                                        }
                                        imsCallSessionProxy13.logEventResult(z, "handleMessage() : receive EVENT_HOLD_RESULT");
                                        if (ImsCallSessionProxy.this.mListener == null || asyncResult2.exception == null) {
                                            return;
                                        }
                                        ImsReasonInfo imsReasonInfo3 = new ImsReasonInfo();
                                        if ((asyncResult2.exception instanceof CommandException) && asyncResult2.exception.getCommandError() == CommandException.Error.OEM_ERROR_1) {
                                            ImsReasonInfo imsReasonInfo4 = new ImsReasonInfo(148, 0);
                                            ImsCallSessionProxy.this.logWithCallId("Call hold failed by call terminated", 5);
                                            imsReasonInfo2 = imsReasonInfo4;
                                        } else {
                                            imsReasonInfo2 = imsReasonInfo3;
                                        }
                                        try {
                                            ImsCallSessionProxy.this.mListener.callSessionHoldFailed(imsReasonInfo2);
                                            return;
                                        } catch (RuntimeException e5) {
                                            ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionHoldFailed()", 5);
                                            return;
                                        }
                                    case ImsCallSessionProxy.EVENT_RESUME_RESULT /* 204 */:
                                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                                        ImsCallSessionProxy imsCallSessionProxy14 = ImsCallSessionProxy.this;
                                        if (asyncResult3.exception != null) {
                                            z = false;
                                        }
                                        imsCallSessionProxy14.logEventResult(z, "handleMessage() : receive EVENT_RESUME_RESULT");
                                        if (ImsCallSessionProxy.this.mListener == null || asyncResult3.exception == null) {
                                            return;
                                        }
                                        try {
                                            ImsCallSessionProxy.this.mListener.callSessionResumeFailed(new ImsReasonInfo());
                                            return;
                                        } catch (RuntimeException e6) {
                                            ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionResumeFailed()", 5);
                                            return;
                                        }
                                    case ImsCallSessionProxy.EVENT_MERGE_RESULT /* 205 */:
                                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                                        ImsCallSessionProxy imsCallSessionProxy15 = ImsCallSessionProxy.this;
                                        if (asyncResult4.exception != null) {
                                            z = false;
                                        }
                                        imsCallSessionProxy15.logEventResult(z, "handleMessage() : receive EVENT_MERGE_RESULT");
                                        if (ImsCallSessionProxy.this.mListener == null || asyncResult4.exception == null) {
                                            return;
                                        }
                                        ImsCallSessionProxy.this.logWithCallId("handleMessage() : ConfCreated failed", 2);
                                        retrieveMergeFail();
                                        return;
                                    case ImsCallSessionProxy.EVENT_ADD_CONFERENCE_RESULT /* 206 */:
                                        AsyncResult asyncResult5 = (AsyncResult) message.obj;
                                        if (ImsCallSessionProxy.this.mIsMerging) {
                                            if (asyncResult5.exception != null) {
                                                retrieveMergeFail();
                                                return;
                                            }
                                            return;
                                        }
                                        if (ImsCallSessionProxy.this.mIsOnTerminated) {
                                            return;
                                        }
                                        if (asyncResult5.exception == null) {
                                            ImsCallSessionProxy.this.mIsAddRemoveParticipantsCommandOK = ImsCallSessionProxy.DBG;
                                            ImsConferenceHandler.getInstance().modifyParticipantComplete();
                                        } else {
                                            ImsConferenceHandler.getInstance().modifyParticipantFailed();
                                        }
                                        ImsCallSessionProxy.access$7308(ImsCallSessionProxy.this);
                                        if (ImsCallSessionProxy.this.mPendingParticipantInfoIndex < ImsCallSessionProxy.this.mPendingParticipantStatistics) {
                                            Message messageObtainMessage = ImsCallSessionProxy.this.mHandler.obtainMessage(ImsCallSessionProxy.EVENT_ADD_CONFERENCE_RESULT);
                                            ImsConferenceHandler.getInstance().tryAddParticipant(ImsCallSessionProxy.this.mPendingParticipantInfo[ImsCallSessionProxy.this.mPendingParticipantInfoIndex]);
                                            ImsCallSessionProxy.this.mImsRILAdapter.inviteParticipants(Integer.parseInt(ImsCallSessionProxy.this.mCallId), ImsCallSessionProxy.this.mPendingParticipantInfo[ImsCallSessionProxy.this.mPendingParticipantInfoIndex], messageObtainMessage);
                                            return;
                                        }
                                        if (ImsCallSessionProxy.this.mListener != null) {
                                            try {
                                                if (ImsCallSessionProxy.this.mIsAddRemoveParticipantsCommandOK) {
                                                    ImsCallSessionProxy.this.mListener.callSessionInviteParticipantsRequestDelivered();
                                                } else {
                                                    ImsCallSessionProxy.this.mListener.callSessionInviteParticipantsRequestFailed(new ImsReasonInfo());
                                                }
                                            } catch (RuntimeException e7) {
                                                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionInviteParticipantsRequest", 5);
                                            }
                                            break;
                                        }
                                        ImsCallSessionProxy.this.mIsAddRemoveParticipantsCommandOK = ImsCallSessionProxy.VDBG;
                                        return;
                                    case ImsCallSessionProxy.EVENT_REMOVE_CONFERENCE_RESULT /* 207 */:
                                        AsyncResult asyncResult6 = (AsyncResult) message.obj;
                                        ImsCallSessionProxy.this.logEventResult(asyncResult6.exception == null, "receive EVENT_REMOVE_CONFERENCE_RESULT");
                                        if (ImsCallSessionProxy.this.mIsOnTerminated) {
                                            return;
                                        }
                                        if (asyncResult6.exception == null) {
                                            ImsCallSessionProxy.this.mIsAddRemoveParticipantsCommandOK = ImsCallSessionProxy.DBG;
                                            ImsConferenceHandler.getInstance().modifyParticipantComplete();
                                            ImsCallSessionProxy.this.mRetryRemoveUri = null;
                                        } else {
                                            if (ImsCallSessionProxy.this.mRetryRemoveUri != null) {
                                                ImsCallSessionProxy.this.mImsRILAdapter.removeParticipants(Integer.parseInt(ImsCallSessionProxy.this.mCallId), ImsCallSessionProxy.this.mRetryRemoveUri, ImsCallSessionProxy.this.mHandler.obtainMessage(ImsCallSessionProxy.EVENT_REMOVE_CONFERENCE_RESULT));
                                                ImsCallSessionProxy.this.mRetryRemoveUri = null;
                                                return;
                                            }
                                            ImsConferenceHandler.getInstance().modifyParticipantFailed();
                                        }
                                        ImsCallSessionProxy.access$7308(ImsCallSessionProxy.this);
                                        if (ImsCallSessionProxy.this.mPendingParticipantInfoIndex < ImsCallSessionProxy.this.mPendingParticipantStatistics) {
                                            ImsCallSessionProxy.this.mImsRILAdapter.removeParticipants(Integer.parseInt(ImsCallSessionProxy.this.mCallId), ImsCallSessionProxy.this.mPendingParticipantInfo[ImsCallSessionProxy.this.mPendingParticipantInfoIndex], ImsCallSessionProxy.this.mHandler.obtainMessage(ImsCallSessionProxy.EVENT_REMOVE_CONFERENCE_RESULT));
                                            return;
                                        }
                                        if (ImsCallSessionProxy.this.mListener != null) {
                                            try {
                                                if (ImsCallSessionProxy.this.mIsAddRemoveParticipantsCommandOK) {
                                                    ImsCallSessionProxy.this.mListener.callSessionRemoveParticipantsRequestDelivered();
                                                } else {
                                                    ImsCallSessionProxy.this.mListener.callSessionRemoveParticipantsRequestFailed(new ImsReasonInfo());
                                                }
                                            } catch (RuntimeException e8) {
                                                ImsCallSessionProxy.this.logWithCallId("RuntimeException callSessionRemoveParticipantsRequest", 5);
                                            }
                                            break;
                                        }
                                        ImsCallSessionProxy.this.mIsAddRemoveParticipantsCommandOK = ImsCallSessionProxy.VDBG;
                                        return;
                                    case ImsCallSessionProxy.EVENT_SIP_CODE_INDICATION /* 208 */:
                                        updateImsReasonInfo((AsyncResult) message.obj);
                                        return;
                                    case ImsCallSessionProxy.EVENT_DIAL_CONFERENCE_RESULT /* 209 */:
                                    case ImsCallSessionProxy.EVENT_PULL_CALL_RESULT /* 216 */:
                                        break;
                                    case ImsCallSessionProxy.EVENT_SWAP_BEFORE_MERGE_RESULT /* 210 */:
                                        AsyncResult asyncResult7 = (AsyncResult) message.obj;
                                        ImsCallSessionProxy imsCallSessionProxy16 = ImsCallSessionProxy.this;
                                        if (asyncResult7.exception != null) {
                                            z = false;
                                        }
                                        imsCallSessionProxy16.logEventResult(z, "handleMessage() : receive EVENT_SWAP_BEFORE_MERGE_RESULT");
                                        if (asyncResult7.exception != null) {
                                            retrieveMergeFail();
                                            return;
                                        }
                                        ImsCallInfo callInfo = ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mCallId);
                                        if (callInfo == null) {
                                            ImsCallSessionProxy.this.logWithCallId("can't find this call callInfo", 5);
                                            retrieveMergeFail();
                                            return;
                                        }
                                        ImsCallInfo callInfo2 = ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mMergedCallId);
                                        if (callInfo2 == null) {
                                            ImsCallSessionProxy.this.logWithCallId("can't find this another call callInfo", 5);
                                            retrieveMergeFail();
                                            return;
                                        } else if (callInfo.mIsConference) {
                                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : myCallI is conference, merge normal call", 2);
                                            ImsCallSessionProxy.this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(ImsCallSessionProxy.this.mCallId), callInfo2, ImsCallSessionProxy.this.mHandler.obtainMessage(ImsCallSessionProxy.EVENT_ADD_CONFERENCE_RESULT));
                                            return;
                                        } else {
                                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : bg conference is foreground now, merge normal call", 2);
                                            ImsCallSessionProxy.this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(callInfo2.mCallId), callInfo, ImsCallSessionProxy.this.mHandler.obtainMessage(ImsCallSessionProxy.EVENT_ADD_CONFERENCE_RESULT));
                                            return;
                                        }
                                    case 211:
                                        if (ImsCallSessionProxy.this.mIsRetrievingMergeFail) {
                                            ImsCallSessionProxy.this.mIsRetrievingMergeFail = ImsCallSessionProxy.VDBG;
                                        }
                                        ImsCallSessionProxy.this.mergeFailed();
                                        return;
                                    case ImsCallSessionProxy.EVENT_DTMF_DONE /* 212 */:
                                        if (ImsCallSessionProxy.this.mDtmfMsg != null) {
                                            try {
                                                Messenger messenger = ImsCallSessionProxy.this.mDtmfMsg.replyTo;
                                                ImsCallSessionProxy.this.logWithCallId("dtmfMessenger " + messenger, 2);
                                                if (messenger != null) {
                                                    messenger.send(ImsCallSessionProxy.this.mDtmfMsg);
                                                }
                                            } catch (RemoteException e9) {
                                                ImsCallSessionProxy.this.logWithCallId("handleMessage() : RemoteException for DTMF", 5);
                                            }
                                            break;
                                        }
                                        ImsCallSessionProxy.this.mDtmfMsg = null;
                                        return;
                                    case ImsCallSessionProxy.EVENT_SEND_USSI_COMPLETE /* 213 */:
                                        AsyncResult asyncResult8 = (AsyncResult) message.obj;
                                        if (ImsCallSessionProxy.this.mListener != null) {
                                            if (message.arg1 != 1) {
                                                if (asyncResult8 == null || asyncResult8.exception == null) {
                                                    return;
                                                }
                                                ImsCallSessionProxy.this.logWithCallId("EVENT_SEND_USSI_COMPLETE : callSessionInitiatedFailed", 2);
                                                ImsCallSessionProxy.this.mListener.callSessionInitiatedFailed(new ImsReasonInfo());
                                                return;
                                            }
                                            if (asyncResult8 != null && asyncResult8.exception != null) {
                                                ImsCallSessionProxy.this.logWithCallId("EVENT_SEND_USSI_COMPLETE : callSessionInitiatedFailed", 2);
                                                ImsCallSessionProxy.this.mListener.callSessionInitiatedFailed(new ImsReasonInfo());
                                                return;
                                            } else {
                                                ImsCallSessionProxy.this.logWithCallId("EVENT_SEND_USSI_COMPLETE : callSessionInitiated", 2);
                                                ImsCallSessionProxy.this.mListener.callSessionInitiated(ImsCallSessionProxy.this.mCallProfile);
                                                ImsCallSessionProxy.this.logWithCallId("EVENT_SEND_USSI_COMPLETE : callSessionTerminated", 2);
                                                ImsCallSessionProxy.this.mListener.callSessionTerminated(new ImsReasonInfo());
                                                return;
                                            }
                                        }
                                        return;
                                    case ImsCallSessionProxy.EVENT_CANCEL_USSI_COMPLETE /* 214 */:
                                        if (ImsCallSessionProxy.this.mListener != null) {
                                            ImsCallSessionProxy.this.mListener.callSessionTerminated(new ImsReasonInfo());
                                            return;
                                        }
                                        return;
                                    case ImsCallSessionProxy.EVENT_ECT_RESULT /* 215 */:
                                        handleEctResult((AsyncResult) message.obj);
                                        return;
                                    case ImsCallSessionProxy.EVENT_RADIO_NOT_AVAILABLE /* 217 */:
                                        ImsCallSessionProxy.this.mRadioUnavailable = ImsCallSessionProxy.DBG;
                                        if (ImsCallSessionProxy.this.mIsOnTerminated) {
                                            ImsCallSessionProxy.this.logWithCallId("handleMessage() : EVENT_RADIO_NOT_AVAILABLE, ignore", 2);
                                            return;
                                        }
                                        if (ImsCallSessionProxy.this.mHasPendingMo) {
                                            ImsCallSessionProxy.this.mHasPendingMo = ImsCallSessionProxy.VDBG;
                                            ImsCallSessionProxy.this.mCallErrorState = CallErrorState.DIAL;
                                        } else {
                                            ImsCallSessionProxy.this.mCallErrorState = CallErrorState.DISCONNECT;
                                        }
                                        ImsCallSessionProxy.this.notifyCallSessionTerminated(new ImsReasonInfo(106, 0));
                                        return;
                                    case ImsCallSessionProxy.EVENT_RTT_TEXT_RECEIVE_INDICATION /* 218 */:
                                        handleRttTextReceived((AsyncResult) message.obj);
                                        return;
                                    case ImsCallSessionProxy.EVENT_RTT_MODIFY_RESPONSE /* 219 */:
                                        handleRttModifyResponse((AsyncResult) message.obj);
                                        return;
                                    case ImsCallSessionProxy.EVENT_RTT_MODIFY_REQUEST_RECEIVE /* 220 */:
                                        handleRttModifyRequestReceived((AsyncResult) message.obj);
                                        return;
                                    default:
                                        switch (i2) {
                                            case ImsCallSessionProxy.EVENT_SPEECH_CODEC_INFO /* 223 */:
                                                if (ImsCallSessionProxy.this.mCallId == null) {
                                                    ImsCallSessionProxy.this.logWithCallId("skip speech codec update when mCallId null", 2);
                                                    return;
                                                }
                                                ImsCallInfo callInfo3 = ImsCallSessionProxy.this.mImsServiceCT.getCallInfo(ImsCallSessionProxy.this.mCallId);
                                                if (callInfo3 == null || !(callInfo3.mState == ImsCallInfo.State.ACTIVE || callInfo3.mState == ImsCallInfo.State.ALERTING)) {
                                                    ImsCallSessionProxy.this.logWithCallId("skip speech not active or alerting", 2);
                                                    return;
                                                } else {
                                                    ImsCallSessionProxy.this.handleSpeechCodecInfo((AsyncResult) message.obj);
                                                    return;
                                                }
                                            case ImsCallSessionProxy.EVENT_REDIAL_ECC_INDICATION /* 224 */:
                                                ImsCallSessionProxy.this.handleRedialEccIndication((AsyncResult) message.obj);
                                                return;
                                            case ImsCallSessionProxy.EVENT_RTT_AUDIO_INDICATION /* 225 */:
                                                handleRttAudioIndication((AsyncResult) message.obj);
                                                return;
                                            case 226:
                                                AsyncResult asyncResult9 = (AsyncResult) message.obj;
                                                SuppServiceNotification suppServiceNotification = (SuppServiceNotification) asyncResult9.result;
                                                if (ImsCallSessionProxy.this.mCallId == null || suppServiceNotification.index == Integer.parseInt(ImsCallSessionProxy.this.mCallId)) {
                                                    if (ImsCallSessionProxy.this.mListener == null) {
                                                        ImsCallSessionProxy.this.logWithCallId("handleMessage() : EVENT_ON_SUPP_SERVICE_NOTIFICATION, mListener is null, cache info", 2);
                                                        ImsCallSessionProxy.this.mSuppSrvCache = asyncResult9;
                                                        return;
                                                    }
                                                    ImsCallSessionProxy.this.logWithCallId("handleMessage() : EVENT_ON_SUPP_SERVICE_NOTIFICATION, notify notification:" + suppServiceNotification, 2);
                                                    final ImsSuppServiceNotification imsSuppServiceNotification = new ImsSuppServiceNotification(suppServiceNotification.notificationType, suppServiceNotification.code, suppServiceNotification.index, suppServiceNotification.type, suppServiceNotification.number, suppServiceNotification.history);
                                                    synchronized (ImsCallSessionProxy.this.mLock) {
                                                        if (ImsCallSessionProxy.this.mListener != null) {
                                                            ImsCallSessionProxy.this.mHandler.postDelayed(new Runnable() { // from class: com.mediatek.ims.ImsCallSessionProxy.MyHandler.1
                                                                @Override // java.lang.Runnable
                                                                public void run() {
                                                                    if (ImsCallSessionProxy.this.mListener != null) {
                                                                        ImsCallSessionProxy.this.mListener.callSessionSuppServiceReceived(imsSuppServiceNotification);
                                                                    }
                                                                }
                                                            }, 1000L);
                                                            ImsCallSessionProxy.this.mCachedSuppServiceInfo = null;
                                                        } else {
                                                            ImsCallSessionProxy.this.mCachedSuppServiceInfo = asyncResult9;
                                                        }
                                                        break;
                                                    }
                                                    return;
                                                }
                                                return;
                                            case ImsCallSessionProxy.EVENT_SIP_HEADER_INFO /* 227 */:
                                                ImsCallSessionProxy.this.handleSipHeaderInfo((AsyncResult) message.obj);
                                                return;
                                            case ImsCallSessionProxy.EVENT_CALL_RAT_INDICATION /* 228 */:
                                                ImsCallSessionProxy.this.handleCallRatIndication((AsyncResult) message.obj);
                                                return;
                                            case 229:
                                                ImsCallSessionProxy.this.handleCallAdditionalInfo((AsyncResult) message.obj);
                                                return;
                                            case ImsCallSessionProxy.EVENT_CACHED_TERMINATE_REASON /* 230 */:
                                                ImsCallSessionProxy.this.handleCachedTerminateReason((ImsReasonInfo) message.obj);
                                                return;
                                            default:
                                                ImsCallSessionProxy.this.logWithCallId("handleMessage() : unknown messahe, ignore", 2);
                                                return;
                                        }
                                }
                                break;
                        }
                        break;
                }
            }
            handleDialResult((AsyncResult) message.obj);
        }
    }

    public static class User {
        public String mDisplayText;
        public String mEndPoint;
        public String mEntity;
        public String mStatus = ConferenceCallMessageHandler.STATUS_DISCONNECTED;
        public String mUserAddr;
    }

    private class VtProviderListener implements ImsVTProvider.VideoProviderStateListener {
        private VtProviderListener() {
        }

        /* synthetic */ VtProviderListener(ImsCallSessionProxy imsCallSessionProxy, AnonymousClass1 anonymousClass1) {
            this();
        }

        @Override // com.mediatek.ims.internal.ImsVTProvider.VideoProviderStateListener
        public void onReceivePauseState(boolean z) {
            if (ImsCallSessionProxy.this.mCallProfile == null) {
                return;
            }
            ImsCallSessionProxy.this.logWithCallId("onReceivePauseState() : " + z, 2);
            ImsCallSessionProxy.this.mFwkPause = z;
            ImsCallSessionProxy.this.updateVideoDirection();
            ImsCallSessionProxy.this.notifyCallSessionUpdated();
        }

        @Override // com.mediatek.ims.internal.ImsVTProvider.VideoProviderStateListener
        public void onReceiveWiFiUsage(long j) {
        }
    }

    static {
        boolean z = VDBG;
        if (SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1) {
            z = true;
        }
        TELDBG = z;
        HEX = "0123456789ABCDEF";
    }

    ImsCallSessionProxy(Context context, ImsCallProfile imsCallProfile, ImsCallSessionListener imsCallSessionListener, ImsService imsService, Handler handler, ImsCommandsInterface imsCommandsInterface, int i) {
        this(context, imsCallProfile, imsCallSessionListener, imsService, handler, imsCommandsInterface, null, i);
        logWithCallId("ImsCallSessionProxy() : ImsCallSessionProxy MO constructor", 2);
        this.mIsIncomingCall = VDBG;
    }

    ImsCallSessionProxy(Context context, ImsCallProfile imsCallProfile, ImsCallSessionListener imsCallSessionListener, ImsService imsService, Handler handler, ImsCommandsInterface imsCommandsInterface, String str, int i) {
        int i2;
        this.mState = 0;
        this.mHasPendingMo = VDBG;
        this.mIsMerging = VDBG;
        this.mIsOnTerminated = VDBG;
        this.mIsWaitingClose = VDBG;
        this.mWrongEcpiCount = 0;
        this.mIsAddRemoveParticipantsCommandOK = VDBG;
        this.mPendingParticipantInfoIndex = 0;
        this.mPendingParticipantStatistics = 0;
        this.mIsHideHoldEventDuringMerging = VDBG;
        this.mNeedHideResumeEventDuringMerging = VDBG;
        this.mMergeCallId = "";
        this.mMergeCallStatus = ImsCallInfo.State.INVALID;
        this.mMergedCallId = "";
        this.mMergedCallStatus = ImsCallInfo.State.INVALID;
        this.mNormalCallsMerge = VDBG;
        this.mThreeWayMergeSucceeded = VDBG;
        this.mMerged = VDBG;
        this.mEconfCount = 0;
        this.mRadioUnavailable = VDBG;
        this.mIsRetrievingMergeFail = VDBG;
        AnonymousClass1 anonymousClass1 = null;
        this.mRetryRemoveUri = null;
        this.mHangupHostDuringMerge = VDBG;
        this.mRatType = 1;
        this.mCallRat = 0;
        this.mVTProviderUtil = ImsVTProviderUtil.getInstance();
        this.mLocalTerminateReason = 0;
        this.mHangupCount = 0;
        this.mIsOneKeyConf = VDBG;
        this.mOneKeyparticipants = null;
        this.mCallErrorState = CallErrorState.IDLE;
        this.mDtmfMsg = null;
        this.mDtmfTarget = null;
        this.mIsHideHoldDuringECT = VDBG;
        this.mEctMsg = null;
        this.mEctTarget = null;
        this.mImsReasonInfo = null;
        this.mShouldUpdateAddressByPau = DBG;
        this.mShouldUpdateAddressFromEcpi = VDBG;
        this.mShouldUpdateAddressBySipField = DBG;
        this.mRttTextEncoder = null;
        this.mOpImsCallSession = null;
        this.mBadRssiThreshould = -90;
        this.mVideoState = 3;
        this.mOverallPause = VDBG;
        this.mFwkPause = VDBG;
        this.mHasTriedSelfActivation = VDBG;
        this.mSipSessionProgress = VDBG;
        this.mIsIncomingCall = DBG;
        this.mIsEmergencyCall = VDBG;
        this.mIsConferenceHost = VDBG;
        this.mIsRttEnabledForCallSession = VDBG;
        this.mEnableSendRttBom = VDBG;
        this.mCachedUserInfo = null;
        this.mHeaderData = "";
        this.mCachedSuppServiceInfo = null;
        this.mLock = new Object();
        this.mMTSetup = VDBG;
        this.mCachedTerminateReasonInfo = null;
        this.mImsCallMode = 1;
        this.mIsRingingRedirect = VDBG;
        this.mParticipants = new HashMap<>();
        this.mParticipantsList = new ArrayList<>();
        this.mVtProviderListener = new VtProviderListener(this, anonymousClass1);
        this.mSuppSrvCache = null;
        this.mPhoneId = i;
        this.mImsServiceCT = ImsServiceCallTracker.getInstance(i);
        this.mServiceHandler = handler;
        this.mHandler = new MyHandler(handler.getLooper());
        this.mContext = context;
        this.mCallProfile = imsCallProfile;
        this.mLocalCallProfile = new ImsCallProfile(imsCallProfile.mServiceType, imsCallProfile.mCallType);
        this.mRemoteCallProfile = new ImsCallProfile(imsCallProfile.mServiceType, imsCallProfile.mCallType);
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP12, this.mPhoneId)) {
            Rlog.d(LOG_TAG, "VzW: set default as no HD icon");
            this.mRemoteCallProfile.mRestrictCause = 3;
        }
        this.mListener = imsCallSessionListener;
        this.mImsService = imsService;
        this.mImsRILAdapter = imsCommandsInterface;
        this.mCallId = str;
        logWithCallId("ImsCallSessionProxy() : RILAdapter:" + imsCommandsInterface + "imsService:" + imsService + " callID:" + str + " phoneId: " + i, 2);
        this.mRttTextEncoder = new RttTextEncoder();
        OpImsServiceCustomizationFactoryBase opFactory = OpImsServiceCustomizationUtils.getOpFactory(context);
        this.mOpImsCallSession = opFactory.makeOpImsCallSessionProxy();
        this.mImsRILAdapter.registerForCallInfo(this.mHandler, 102, null);
        this.mImsRILAdapter.registerForEconfResult(this.mHandler, 104, null);
        this.mImsRILAdapter.registerForCallProgressIndicator(this.mHandler, EVENT_SIP_CODE_INDICATION, null);
        this.mImsRILAdapter.registerForCallModeChangeIndicator(this.mHandler, 106, null);
        this.mImsRILAdapter.registerForVideoCapabilityIndicator(this.mHandler, EVENT_VIDEO_CAPABILITY_INDICATION, null);
        this.mImsRILAdapter.registerForEctResult(this.mHandler, EVENT_ECT_RESULT_INDICATION, null);
        this.mImsRILAdapter.registerForImsConfInfoUpdate(this.mHandler, 111, null);
        this.mImsRILAdapter.registerForNotAvailable(this.mHandler, EVENT_RADIO_NOT_AVAILABLE, null);
        this.mImsRILAdapter.registerForSpeechCodecInfo(this.mHandler, EVENT_SPEECH_CODEC_INFO, null);
        this.mImsRILAdapter.registerForImsRedialEccInd(this.mHandler, EVENT_REDIAL_ECC_INDICATION, null);
        this.mImsRILAdapter.registerForSipHeaderInd(this.mHandler, EVENT_SIP_HEADER_INFO, null);
        this.mImsRILAdapter.registerForCallRatIndication(this.mHandler, EVENT_CALL_RAT_INDICATION, null);
        this.mImsRILAdapter.registerForCallAdditionalInfo(this.mHandler, 229, null);
        this.mSelfActivateHelper = getImsExtSelfActivator(context, handler, this, imsCommandsInterface, imsService, i);
        this.mImsRILAdapter.registerForRttCapabilityIndicator(this.mHandler, EVENT_RTT_CAPABILITY_INDICATION, null);
        this.mImsRILAdapter.registerForRttModifyRequestReceive(this.mHandler, EVENT_RTT_MODIFY_REQUEST_RECEIVE, null);
        this.mImsRILAdapter.registerForRttTextReceive(this.mHandler, EVENT_RTT_TEXT_RECEIVE_INDICATION, null);
        this.mImsRILAdapter.registerForRttModifyResponse(this.mHandler, EVENT_RTT_MODIFY_RESPONSE, null);
        this.mImsRILAdapter.registerForRttAudioIndicator(this.mHandler, EVENT_RTT_AUDIO_INDICATION, null);
        if (SystemProperties.get("persist.vendor.vilte_support").equals("1")) {
            logWithCallId("ImsCallSessionProxy() : start new VTProvider", 2);
            if (this.mCallId != null) {
                ImsVTProvider imsVTProviderMakeImsVtProvider = opFactory.makeImsVtProvider();
                this.mVTProvider = imsVTProviderMakeImsVtProvider;
                this.mVTProviderUtil.bind(imsVTProviderMakeImsVtProvider, Integer.parseInt(this.mCallId), this.mPhoneId);
            } else {
                this.mVTProvider = opFactory.makeImsVtProvider();
            }
            this.mVTProvider.addVideoProviderStateListener(this.mVtProviderListener);
            logWithCallId("ImsCallSessionProxy() : end new VTProvider", 2);
        }
        this.mImsRILAdapter.setOnSuppServiceNotification(this.mHandler, 226, null);
        IBinder service = ServiceManager.getService(WifiOffloadManager.WFO_SERVICE);
        if (service != null) {
            this.mWfoService = IWifiOffloadService.Stub.asInterface(service);
        } else {
            IBinder service2 = ServiceManager.getService(MwisConstants.MWI_SERVICE);
            try {
                if (service2 != null) {
                    this.mWfoService = IMwiService.Stub.asInterface(service2).getWfcHandlerInterface();
                } else {
                    logWithCallId("ImsCallSessionProxy() : No MwiService exist", 5);
                }
            } catch (RemoteException e) {
                logWithCallId("ImsCallSessionProxy() : can't get MwiService" + e, 5);
            }
        }
        if (this.mWfoService != null) {
            try {
                if (this.mWosListener == null) {
                    this.mWosListener = new IWifiOffloadListenerProxy(this, anonymousClass1);
                }
                this.mWfoService.registerForHandoverEvent(this.mWosListener);
                if (str != null) {
                    updateCallStateForWifiOffload(3);
                }
            } catch (RemoteException e2) {
                logWithCallId("ImsCallSessionProxy() : RemoteException ImsCallSessionProxy()", 5);
            }
        }
        if (this.mCallId == null) {
            i2 = 0;
            this.mIsIncomingCall = VDBG;
        } else {
            i2 = 0;
        }
        if (this.mIsIncomingCall) {
            updateRat(this.mImsService.getRatType(this.mPhoneId), i2);
        }
        this.mConfSessionProxy = null;
        this.mMtkConfSessionProxy = null;
        updateShouldUseSipField();
    }

    ImsCallSessionProxy(Context context, ImsCallProfile imsCallProfile, ImsCallSessionListener imsCallSessionListener, ImsService imsService, Handler handler, ImsCommandsInterface imsCommandsInterface, String str, int i, MtkImsCallSessionProxy mtkImsCallSessionProxy) {
        this(context, imsCallProfile, imsCallSessionListener, imsService, handler, imsCommandsInterface, str, i);
        this.mMtkImsCallSessionProxy = mtkImsCallSessionProxy;
    }

    static /* synthetic */ int access$3908(ImsCallSessionProxy imsCallSessionProxy) {
        int i = imsCallSessionProxy.mWrongEcpiCount;
        imsCallSessionProxy.mWrongEcpiCount = i + 1;
        return i;
    }

    static /* synthetic */ int access$7308(ImsCallSessionProxy imsCallSessionProxy) {
        int i = imsCallSessionProxy.mPendingParticipantInfoIndex;
        imsCallSessionProxy.mPendingParticipantInfoIndex = i + 1;
        return i;
    }

    static /* synthetic */ int access$9608(ImsCallSessionProxy imsCallSessionProxy) {
        int i = imsCallSessionProxy.mEconfCount;
        imsCallSessionProxy.mEconfCount = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkAndSendRttBom() {
        boolean zIsRttSupported = isRttSupported();
        logWithCallId("checkAndSendRttBom() : isRttSuported = " + zIsRttSupported + ", isRttEnabledForCallSession = " + this.mIsRttEnabledForCallSession + ", mState = " + this.mState + ", mEnableSendRttBom = " + this.mEnableSendRttBom, 2);
        if (zIsRttSupported && this.mIsRttEnabledForCallSession && this.mEnableSendRttBom && this.mState == 4) {
            sendRttMessage(new String(new byte[]{-17, -69, -65}));
            this.mEnableSendRttBom = VDBG;
        }
    }

    private void closeConferenceSession() {
        MtkImsCallSessionProxy mtkImsCallSessionProxy = this.mMtkConfSessionProxy;
        if (mtkImsCallSessionProxy != null) {
            mtkImsCallSessionProxy.close();
            this.mMtkConfSessionProxy = null;
            return;
        }
        ImsCallSessionProxy imsCallSessionProxy = this.mConfSessionProxy;
        if (imsCallSessionProxy != null) {
            imsCallSessionProxy.close();
            this.mConfSessionProxy = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void correctRemoteVideoCapabilityForVideoConference() {
        if (isMultiparty() && isVideoCall(this.mCallProfile)) {
            logWithCallId("correctRemoteVideoCapabilityForVideoConference() : Video conference, force set remote as Video Call", 2);
            this.mRemoteCallProfile.mCallType = 4;
        }
    }

    private void createAospConferenceSession(ImsCallProfile imsCallProfile, String str) {
        ImsCallSessionProxy imsCallSessionProxy = new ImsCallSessionProxy(this.mContext, imsCallProfile, null, this.mImsService, this.mServiceHandler, this.mImsRILAdapter, str, this.mPhoneId);
        this.mConfSessionProxy = imsCallSessionProxy;
        ImsConferenceHandler.getInstance().startConference(this.mContext, imsCallSessionProxy.getConfEvtListener(), str, this.mPhoneId);
        try {
            this.mListener.callSessionMergeStarted(this.mConfSessionProxy.getServiceImpl(), this.mCallProfile);
        } catch (RuntimeException e) {
            logWithCallId("RuntimeException callSessionMergeStarted()", 5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void createConferenceSession(ImsCallProfile imsCallProfile, String str) {
        if (this.mMtkImsCallSessionProxy != null) {
            createMtkConferenceSession(imsCallProfile, str);
        } else {
            createAospConferenceSession(imsCallProfile, str);
        }
    }

    private void createMtkConferenceSession(ImsCallProfile imsCallProfile, String str) {
        this.mMtkConfSessionProxy = new MtkImsCallSessionProxy(this.mContext, imsCallProfile, null, this.mImsService, this.mServiceHandler, this.mImsRILAdapter, str, this.mPhoneId);
        ImsCallSessionProxy imsCallSessionProxy = new ImsCallSessionProxy(this.mContext, imsCallProfile, null, this.mImsService, this.mServiceHandler, this.mImsRILAdapter, str, this.mPhoneId);
        this.mMtkConfSessionProxy.setAospCallSessionProxy(imsCallSessionProxy);
        imsCallSessionProxy.setMtkCallSessionProxy(this.mMtkConfSessionProxy);
        ImsConferenceHandler.getInstance().startConference(this.mContext, this.mMtkConfSessionProxy.getConfEvtListener(), str, this.mPhoneId);
        this.mMtkImsCallSessionProxy.notifyCallSessionMergeStarted(this.mMtkConfSessionProxy.getServiceImpl(), this.mCallProfile);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void detailLog(String str) {
        if (TELDBG) {
            logWithCallId(str, 2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String event2String(int i) {
        if (101 == i) {
            return "EVENT_POLL_CALLS_RESULT";
        }
        if (102 == i) {
            return "EVENT_CALL_INFO_INDICATION";
        }
        if (104 == i) {
            return "EVENT_ECONF_RESULT_INDICATION";
        }
        if (105 == i) {
            return "EVENT_GET_LAST_CALL_FAIL_CAUSE";
        }
        if (106 == i) {
            return "EVENT_CALL_MODE_CHANGE_INDICATION";
        }
        if (EVENT_VIDEO_CAPABILITY_INDICATION == i) {
            return "EVENT_VIDEO_CAPABILITY_INDICATION";
        }
        if (EVENT_ECT_RESULT_INDICATION == i) {
            return "EVENT_ECT_RESULT_INDICATION";
        }
        if (EVENT_RTT_CAPABILITY_INDICATION == i) {
            return "EVENT_RTT_CAPABILITY_INDICATION";
        }
        if (111 == i) {
            return "EVENT_IMS_CONFERENCE_INDICATION";
        }
        if (201 == i) {
            return "EVENT_DIAL_RESULT";
        }
        if (202 == i) {
            return "EVENT_ACCEPT_RESULT";
        }
        if (EVENT_HOLD_RESULT == i) {
            return "EVENT_HOLD_RESULT";
        }
        if (EVENT_RESUME_RESULT == i) {
            return "EVENT_RESUME_RESULT";
        }
        if (EVENT_MERGE_RESULT == i) {
            return "EVENT_MERGE_RESULT";
        }
        if (EVENT_ADD_CONFERENCE_RESULT == i) {
            return "EVENT_ADD_CONFERENCE_RESULT";
        }
        if (EVENT_REMOVE_CONFERENCE_RESULT == i) {
            return "EVENT_REMOVE_CONFERENCE_RESULT";
        }
        if (EVENT_SIP_CODE_INDICATION == i) {
            return "EVENT_SIP_CODE_INDICATION";
        }
        if (EVENT_DIAL_CONFERENCE_RESULT == i) {
            return "EVENT_DIAL_CONFERENCE_RESULT";
        }
        if (EVENT_SWAP_BEFORE_MERGE_RESULT == i) {
            return "EVENT_SWAP_BEFORE_MERGE_RESULT";
        }
        if (211 == i) {
            return "EVENT_RETRIEVE_MERGE_FAIL_RESULT";
        }
        if (EVENT_DTMF_DONE == i) {
            return "EVENT_DTMF_DONE";
        }
        if (EVENT_SEND_USSI_COMPLETE == i) {
            return "EVENT_SEND_USSI_COMPLETE";
        }
        if (EVENT_CANCEL_USSI_COMPLETE == i) {
            return "EVENT_CANCEL_USSI_COMPLETE";
        }
        if (EVENT_ECT_RESULT == i) {
            return "EVENT_ECT_RESULT";
        }
        if (EVENT_PULL_CALL_RESULT == i) {
            return "EVENT_PULL_CALL_RESULT";
        }
        if (EVENT_RADIO_NOT_AVAILABLE == i) {
            return "EVENT_RADIO_NOT_AVAILABLE";
        }
        if (EVENT_RTT_TEXT_RECEIVE_INDICATION == i) {
            return "EVENT_RTT_TEXT_RECEIVE_INDICATION";
        }
        if (EVENT_RTT_MODIFY_RESPONSE == i) {
            return "EVENT_RTT_MODIFY_RESPONSE";
        }
        if (EVENT_RTT_MODIFY_REQUEST_RECEIVE == i) {
            return "EVENT_RTT_MODIFY_REQUEST_RECEIVE";
        }
        if (EVENT_RTT_AUDIO_INDICATION == i) {
            return "EVENT_RTT_AUDIO_INDICATION";
        }
        if (EVENT_SPEECH_CODEC_INFO == i) {
            return "EVENT_SPEECH_CODEC_INFO";
        }
        if (EVENT_REDIAL_ECC_INDICATION == i) {
            return "EVENT_REDIAL_ECC_INDICATION";
        }
        if (226 == i) {
            return "EVENT_ON_SUPP_SERVICE_NOTIFICATION";
        }
        if (EVENT_SIP_HEADER_INFO == i) {
            return "EVENT_SIP_HEADER_INFO";
        }
        if (EVENT_CALL_RAT_INDICATION == i) {
            return "EVENT_CALL_RAT_INDICATION";
        }
        if (EVENT_CACHED_TERMINATE_REASON == i) {
            return "EVENT_CACHED_TERMINATE_REASON";
        }
        return "unknown msg" + i;
    }

    private String getConfParticipantUri(String str) {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            return str;
        }
        String confParticipantUri = ImsConferenceHandler.getInstance().getConfParticipantUri(str, VDBG);
        this.mRetryRemoveUri = ImsConferenceHandler.getInstance().getConfParticipantUri(str, DBG);
        return confParticipantUri;
    }

    private int getDataNetworkType() {
        NetworkRegistrationInfo networkRegistrationInfo;
        ServiceState serviceState = ((TelephonyManager) this.mContext.getSystemService(TelephonyManager.class)).getServiceState();
        if (serviceState != null && (networkRegistrationInfo = serviceState.getNetworkRegistrationInfo(2, 1)) != null) {
            return networkRegistrationInfo.getAccessNetworkTechnology();
        }
        logWithCallId("getDataNetworkType error", 2);
        return 0;
    }

    private int getHangupCause(int i) {
        logWithCallId("getHangupCause() : " + i, 2);
        if (i == 504) {
            return -1;
        }
        if (i == 9040) {
            return 1;
        }
        if (i == 505) {
            return 2;
        }
        if (i == 9041) {
            return 3;
        }
        return i == 9043 ? 4 : 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public ImsReasonInfo getOpImsReasonInfo(SipMessage sipMessage) {
        ImsReasonInfo imsReasonInfo = null;
        logWithCallId("getOpImsReasonInfo sipCode " + sipMessage.getCode() + " reasonHeader " + sipMessage.getReasonHeader(), 2);
        int code = sipMessage.getCode();
        String reasonHeader = sipMessage.getReasonHeader();
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP112, this.mPhoneId) && sipMessage.getDir() == 1) {
            if (code == 301) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9000, 0) : new ImsReasonInfo(9000, 0, reasonHeader);
            } else if (code == 423) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9019, 0) : new ImsReasonInfo(9019, 0, reasonHeader);
            } else if (code == 513) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9035, 0) : new ImsReasonInfo(9035, 0, reasonHeader);
            } else if (code == 600) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9036, 0) : new ImsReasonInfo(9036, 0, reasonHeader);
            } else if (code == 606) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9039, 0) : new ImsReasonInfo(9039, 0, reasonHeader);
            } else if (code == 420) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9017, 0) : new ImsReasonInfo(9017, 0, reasonHeader);
            } else if (code == 421) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9018, 0) : new ImsReasonInfo(9018, 0, reasonHeader);
            } else if (code == 603) {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9037, 0) : new ImsReasonInfo(9037, 0, reasonHeader);
            } else if (code != 604) {
                switch (code) {
                    case 400:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(ImsVTProvider.SESSION_EVENT_WARNING_SERVICE_NOT_READY, 0, reasonHeader) : new ImsReasonInfo(ImsVTProvider.SESSION_EVENT_WARNING_SERVICE_NOT_READY, 0);
                        break;
                    case 401:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9002, 0, reasonHeader) : new ImsReasonInfo(9002, 0);
                        break;
                    case 402:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9003, 0, reasonHeader) : new ImsReasonInfo(9003, 0);
                        break;
                    case 403:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9004, 0, reasonHeader) : new ImsReasonInfo(9004, 0);
                        break;
                    case 404:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9005, 0, reasonHeader) : new ImsReasonInfo(9005, 0);
                        break;
                    case 405:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9006, 0, reasonHeader) : new ImsReasonInfo(9006, 0);
                        break;
                    case 406:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9007, 0, reasonHeader) : new ImsReasonInfo(9007, 0);
                        break;
                    case 407:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9008, 0, reasonHeader) : new ImsReasonInfo(9008, 0);
                        break;
                    case 408:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9009, 0, reasonHeader) : new ImsReasonInfo(9009, 0);
                        break;
                    case 409:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9010, 0, reasonHeader) : new ImsReasonInfo(9010, 0);
                        break;
                    case 410:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9011, 0, reasonHeader) : new ImsReasonInfo(9011, 0);
                        break;
                    case 411:
                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9012, 0, reasonHeader) : new ImsReasonInfo(9012, 0);
                        break;
                    default:
                        switch (code) {
                            case 413:
                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9013, 0, reasonHeader) : new ImsReasonInfo(9013, 0);
                                break;
                            case 414:
                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9014, 0, reasonHeader) : new ImsReasonInfo(9014, 0);
                                break;
                            case 415:
                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9015, 0, reasonHeader) : new ImsReasonInfo(9015, 0);
                                break;
                            case 416:
                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9016, 0, reasonHeader) : new ImsReasonInfo(9016, 0);
                                break;
                            default:
                                switch (code) {
                                    case 480:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9020, 0, reasonHeader) : new ImsReasonInfo(9020, 0);
                                        break;
                                    case 481:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9021, 0, reasonHeader) : new ImsReasonInfo(9021, 0);
                                        break;
                                    case 482:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9022, 0, reasonHeader) : new ImsReasonInfo(9022, 0);
                                        break;
                                    case 483:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9023, 0, reasonHeader) : new ImsReasonInfo(9023, 0);
                                        break;
                                    case 484:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9024, 0, reasonHeader) : new ImsReasonInfo(9024, 0);
                                        break;
                                    case 485:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9025, 0, reasonHeader) : new ImsReasonInfo(9025, 0);
                                        break;
                                    case SipMessage.CODE_SESSION_INVITE_FAILED_REMOTE_BUSY /* 486 */:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9026, 0, reasonHeader) : new ImsReasonInfo(9026, 0);
                                        break;
                                    case 487:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9027, 0, reasonHeader) : new ImsReasonInfo(9027, 0);
                                        break;
                                    case 488:
                                        imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9028, 0, reasonHeader) : new ImsReasonInfo(9028, 0);
                                        break;
                                    default:
                                        switch (code) {
                                            case 500:
                                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9029, 0, reasonHeader) : new ImsReasonInfo(9029, 0);
                                                break;
                                            case RadioError.OEM_ERROR_1 /* 501 */:
                                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9030, 0, reasonHeader) : new ImsReasonInfo(9030, 0);
                                                break;
                                            case RadioError.OEM_ERROR_2 /* 502 */:
                                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9031, 0, reasonHeader) : new ImsReasonInfo(9031, 0);
                                                break;
                                            case RadioError.OEM_ERROR_3 /* 503 */:
                                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9032, 0, reasonHeader) : new ImsReasonInfo(9032, 0);
                                                break;
                                            case RadioError.OEM_ERROR_4 /* 504 */:
                                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9033, 0, reasonHeader) : new ImsReasonInfo(9033, 0);
                                                break;
                                            case RadioError.OEM_ERROR_5 /* 505 */:
                                                imsReasonInfo = (reasonHeader != null && reasonHeader.length() != 0) ? new ImsReasonInfo(9034, 0, reasonHeader) : new ImsReasonInfo(9034, 0);
                                                break;
                                        }
                                        break;
                                }
                                break;
                        }
                        break;
                }
            } else {
                imsReasonInfo = (reasonHeader == null || reasonHeader.length() == 0) ? new ImsReasonInfo(9038, 0) : new ImsReasonInfo(9038, 0, reasonHeader);
            }
        }
        logWithCallId("getOpImsReasonInfo(): " + imsReasonInfo, 2);
        return imsReasonInfo;
    }

    private int getVideoDirectionFromVideoState(int i) {
        if (i == 0) {
            logWithCallId("getVideoDirectionFromVideoState() : Should not handle pause here", 4);
            return 0;
        }
        if (i == 1) {
            return 2;
        }
        if (i != 2) {
            return i != 3 ? -1 : 3;
        }
        return 1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getWifiRssi() {
        int rssi = ((WifiManager) this.mContext.getSystemService("wifi")).getConnectionInfo().getRssi();
        logWithCallId("getWifiRssi()" + rssi, 2);
        return rssi;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleCachedTerminateReason(ImsReasonInfo imsReasonInfo) {
        if (imsReasonInfo == null) {
            notifyCallSessionTerminated(new ImsReasonInfo());
        } else {
            notifyCallSessionTerminated(imsReasonInfo);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleCallAdditionalInfo(AsyncResult asyncResult) {
        String str = "UTF-8";
        String[] strArr = (String[]) asyncResult.result;
        int i = Integer.parseInt(strArr[0]);
        String str2 = strArr[1];
        if (i == 101) {
            String str3 = this.mCallId;
            if (str3 == null || !str3.equals(str2)) {
                return;
            }
            this.mCallProfile.setCallExtraInt(ImsCallProfileEx.EXTRA_IMS_GWSD, 1);
            return;
        }
        if (i != 102) {
            return;
        }
        String str4 = this.mCallId;
        if (str4 == null || !str4.equals(str2)) {
            return;
        }
        int i2 = Integer.parseInt(strArr[2]);
        if (i2 != 1) {
            if (i2 == 2) {
                this.mCallProfile.setCallExtra(ImsCallProfileEx.EXTRA_LOCATION, strArr[6]);
                return;
            }
            return;
        }
        int i3 = Integer.parseInt(strArr[3]);
        int i4 = Integer.parseInt(strArr[4]);
        int i5 = Integer.parseInt(strArr[5]);
        if (i4 == 1) {
            this.mHeaderData = strArr[6];
        } else {
            this.mHeaderData += strArr[6];
        }
        if (i4 != i3) {
            return;
        }
        try {
            String[] strArrSplit = this.mHeaderData.split(",");
            int length = strArrSplit.length / 2;
            if (length != i5) {
                try {
                    logWithCallId("Header count unmatched: " + i5 + ", " + length, 4);
                } catch (UnsupportedEncodingException e) {
                    e = e;
                    Rlog.e(LOG_TAG, "handleCallAdditionalInfo() implausible UnsupportedEncodingException", e);
                    return;
                } catch (RuntimeException e2) {
                    e = e2;
                    Rlog.e(LOG_TAG, "handleCallAdditionalInfo() RuntimeException", e);
                    return;
                }
            }
            int i6 = 0;
            while (i6 < length) {
                byte[] bArrHexToByteArray = hexToByteArray(strArrSplit[i6 * 2]);
                byte[] bArrHexToByteArray2 = hexToByteArray(strArrSplit[(i6 * 2) + 1]);
                String str5 = new String(bArrHexToByteArray, str);
                int i7 = i;
                try {
                    String str6 = new String(bArrHexToByteArray2, str);
                    String str7 = str;
                    StringBuilder sb = new StringBuilder();
                    String[] strArr2 = strArrSplit;
                    sb.append("key-value = ");
                    sb.append(str5);
                    sb.append("-");
                    sb.append(str6);
                    logWithCallId(sb.toString(), 2);
                    ImsCallProfile imsCallProfile = this.mCallProfile;
                    StringBuilder sb2 = new StringBuilder();
                    String str8 = str2;
                    try {
                        sb2.append("mediatek:");
                        sb2.append(str5.toLowerCase());
                        imsCallProfile.setCallExtra(sb2.toString(), str6);
                        i6++;
                        i = i7;
                        str = str7;
                        strArrSplit = strArr2;
                        str2 = str8;
                    } catch (UnsupportedEncodingException e3) {
                        e = e3;
                        Rlog.e(LOG_TAG, "handleCallAdditionalInfo() implausible UnsupportedEncodingException", e);
                        return;
                    } catch (RuntimeException e4) {
                        e = e4;
                        Rlog.e(LOG_TAG, "handleCallAdditionalInfo() RuntimeException", e);
                        return;
                    }
                } catch (UnsupportedEncodingException e5) {
                    e = e5;
                } catch (RuntimeException e6) {
                    e = e6;
                }
            }
        } catch (UnsupportedEncodingException e7) {
            e = e7;
        } catch (RuntimeException e8) {
            e = e8;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleCallRatIndication(AsyncResult asyncResult) {
        int[] iArr = (int[]) asyncResult.result;
        int i = iArr[0];
        int i2 = iArr[1];
        if (i == 0) {
            return;
        }
        if (i2 <= 0) {
            i2 = 0;
        }
        if (updateRat(this.mImsService.getRatType(this.mPhoneId), i2)) {
            notifyCallSessionUpdated();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleRedialEccIndication(AsyncResult asyncResult) {
        Rlog.d(LOG_TAG, "handleRedialEccIndication()");
        if (asyncResult == null) {
            Rlog.d(LOG_TAG, "handleRedialEccIndication() : ar is null");
            return;
        }
        if (this.mState == 4) {
            Rlog.d(LOG_TAG, "handleRedialEccIndication() : Call established, ignore indication");
            return;
        }
        String[] strArr = (String[]) asyncResult.result;
        if (strArr == null) {
            Rlog.d(LOG_TAG, "handleRedialEccIndication() : ar.result is null");
            return;
        }
        if (strArr[0].equals("0")) {
            turnOffAirplaneMode();
            return;
        }
        if (this.mMtkImsCallSessionProxy != null) {
            if (strArr[0].equals("30")) {
                this.mMtkImsCallSessionProxy.notifyRedialEcc(DBG);
            } else if (strArr[0].equals(this.mCallId)) {
                this.mMtkImsCallSessionProxy.notifyRedialEcc(VDBG);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSipHeaderInfo(AsyncResult asyncResult) {
        String[] strArr = (String[]) asyncResult.result;
        String str = this.mCallId;
        if (str == null || !str.equals(strArr[0])) {
            return;
        }
        int i = 0;
        if (strArr[1] != null && !strArr[1].equals("")) {
            i = Integer.parseInt(strArr[1]);
        }
        if (strArr[2] != null && !strArr[2].equals("")) {
            Integer.parseInt(strArr[2]);
        }
        if (strArr[3] != null && !strArr[3].equals("")) {
            Integer.parseInt(strArr[3]);
        }
        if (i == 13) {
            String str2 = "";
            if (strArr[4] != null && !strArr[4].equals("")) {
                str2 = strArr[4];
            }
            try {
                this.mHeaderCallId = new String(hexToByteArray(str2), "UTF-8");
                logWithCallId("handleSipHeaderInfo() : mHeaderCallId: " + this.mHeaderCallId, 2);
            } catch (UnsupportedEncodingException e) {
                Rlog.e(LOG_TAG, "handleSipHeaderInfo() implausible UnsupportedEncodingException", e);
            } catch (RuntimeException e2) {
                Rlog.e(LOG_TAG, "handleSipHeaderInfo() RuntimeException", e2);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSpeechCodecInfo(AsyncResult asyncResult) {
        int i;
        int i2 = ((int[]) asyncResult.result)[0];
        logWithCallId("handleSpeechCodecInfo() : " + i2, 2);
        int i3 = this.mLocalCallProfile.mMediaProfile.mAudioQuality;
        if (i2 == 32) {
            i = 20;
        } else if (i2 != 33) {
            switch (i2) {
                case 1:
                    i = 3;
                    break;
                case 2:
                    i = 4;
                    break;
                case 3:
                    i = 5;
                    break;
                case 4:
                    i = 6;
                    break;
                case 5:
                    i = 7;
                    break;
                case 6:
                    i = 1;
                    break;
                case 7:
                    i = 2;
                    break;
                case 8:
                    i = 8;
                    break;
                case 9:
                    i = 9;
                    break;
                case 10:
                    i = 10;
                    break;
                default:
                    switch (i2) {
                        case 23:
                            i = 17;
                            break;
                        case 24:
                            i = 18;
                            break;
                        case 25:
                            i = 19;
                            break;
                        default:
                            i = 0;
                            break;
                    }
                    break;
            }
        } else {
            i = 2;
        }
        if (i != i3) {
            this.mLocalCallProfile.mMediaProfile.mAudioQuality = i;
            notifyCallSessionUpdated();
        }
    }

    private byte[] hexToByteArray(String str) {
        String str2 = str.length() % 2 != 0 ? "0" + str : str;
        byte[] bArr = new byte[str2.length() / 2];
        for (int i = 0; i < bArr.length; i++) {
            int i2 = i * 2;
            bArr[i] = (byte) Integer.parseInt(str2.substring(i2, i2 + 2), 16);
        }
        return bArr;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isAllowRttVideoSwitch() {
        return (!((TelephonyManager) this.mContext.getSystemService(TelephonyManager.class)).getCarrierConfig().getBoolean(ImsCarrierConfigConstants.MTK_KEY_RTT_VIDEO_SWITCH_SUPPORTED_BOOL, VDBG) && this.mCallProfile.getCallExtraBoolean(EXTRA_WAS_VIDEO_CALL)) ? VDBG : DBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isAnsweredElsewhere(String str) {
        if (str == null) {
            return VDBG;
        }
        return (str.equalsIgnoreCase(SipMessage.COMPETION_ELSEWHERE_HEADER) || str.toLowerCase().contains(SipMessage.CALL_COMPLETED_ELSEWHERE_HEADER)) ? DBG : VDBG;
    }

    private boolean isCallPull(ImsCallProfile imsCallProfile) {
        Bundle bundle;
        return (imsCallProfile == null || imsCallProfile.mCallExtras == null || (bundle = imsCallProfile.mCallExtras.getBundle("android.telephony.ims.extra.OEM_EXTRAS")) == null) ? VDBG : bundle.getBoolean("CallPull", VDBG);
    }

    private boolean isMtRttWithoutPrecondition() {
        return ((TelephonyManager) this.mContext.getSystemService(TelephonyManager.class)).getCarrierConfig().getBoolean(ImsCarrierConfigConstants.MTK_KEY_MT_RTT_WITHOUT_PRECONDITION_BOOL, VDBG);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isRemoteCallDecline(String str) {
        if (str == null) {
            return VDBG;
        }
        return (str.equalsIgnoreCase(SipMessage.REMOTE_DECLINE_HEADER) || str.toLowerCase().contains(SipMessage.CALL_DECLINED_HEADER) || str.toLowerCase().contains(SipMessage.CALL_COMPLETED_BUSY_EVERYWHERE_HEADER)) ? DBG : VDBG;
    }

    private boolean isRttSupported() {
        return ((TelephonyManager) this.mContext.getSystemService(TelephonyManager.class)).isRttSupported();
    }

    private boolean isSpecialEccNumber(String str) {
        boolean zContains = VDBG;
        int i = this.mPhoneId;
        if (i == 0) {
            zContains = SystemProperties.get("vendor.ril.special.ecclist").contains(str);
        } else if (i == 1) {
            zContains = SystemProperties.get("vendor.ril.special.ecclist1").contains(str);
        } else if (i == 2) {
            zContains = SystemProperties.get("vendor.ril.special.ecclist2").contains(str);
        } else if (i == 3) {
            zContains = SystemProperties.get("vendor.ril.special.ecclist3").contains(str);
        }
        logWithCallId("isSpecialEccNumber() : mPhoneId = " + this.mPhoneId + ", isSpecialEccNumber = " + zContains, 2);
        return zContains;
    }

    private boolean isUserPerfromedHangup() {
        return this.mHangupCount > 0 ? DBG : VDBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isVideoCall(ImsCallProfile imsCallProfile) {
        return (imsCallProfile == null || ImsCallProfile.getVideoStateFromImsCallProfile(imsCallProfile) == 0) ? VDBG : DBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logEventResult(boolean z, String str) {
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(z ? " success" : " failed");
        logWithCallId(sb.toString(), 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logWithCallId(String str, int i) {
        if (1 == i && TELDBG) {
            Rlog.v(LOG_TAG, "[callId = " + this.mCallId + "] " + str);
            return;
        }
        if (2 == i) {
            Rlog.d(LOG_TAG, "[callId = " + this.mCallId + "] " + str);
            return;
        }
        if (3 == i) {
            Rlog.i(LOG_TAG, "[callId = " + this.mCallId + "] " + str);
            return;
        }
        if (4 == i) {
            Rlog.w(LOG_TAG, "[callId = " + this.mCallId + "] " + str);
            return;
        }
        if (5 == i) {
            Rlog.e(LOG_TAG, "[callId = " + this.mCallId + "] " + str);
            return;
        }
        Rlog.d(LOG_TAG, "[callId = " + this.mCallId + "] " + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void mergeCompleted() {
        notifyCallSessionMergeComplete();
        this.mIsMerging = VDBG;
        this.mIsHideHoldEventDuringMerging = VDBG;
        this.mNeedHideResumeEventDuringMerging = VDBG;
        ImsConferenceHandler.getInstance().modifyParticipantComplete();
        ImsCallSessionProxy conferenceHostCall = this.mImsServiceCT.getConferenceHostCall();
        if (conferenceHostCall != null) {
            conferenceHostCall.onAddParticipantComplete();
        }
        this.mConfSessionProxy = null;
        this.mMtkConfSessionProxy = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void mergeFailed() {
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener != null) {
            try {
                imsCallSessionListener.callSessionMergeFailed(new ImsReasonInfo());
            } catch (RuntimeException e) {
                logWithCallId("RuntimeException callSessionMergeFailed()", 5);
            }
        }
        this.mMergeCallId = "";
        this.mMergeCallStatus = ImsCallInfo.State.INVALID;
        this.mMergedCallId = "";
        this.mMergedCallStatus = ImsCallInfo.State.INVALID;
        this.mIsMerging = VDBG;
        this.mMerged = VDBG;
        this.mIsHideHoldEventDuringMerging = VDBG;
        this.mNeedHideResumeEventDuringMerging = VDBG;
        closeConferenceSession();
    }

    private void notifyCallSessionMergeComplete() {
        MtkImsCallSessionProxy mtkImsCallSessionProxy = this.mMtkImsCallSessionProxy;
        if (mtkImsCallSessionProxy != null) {
            MtkImsCallSessionProxy mtkImsCallSessionProxy2 = this.mMtkConfSessionProxy;
            if (mtkImsCallSessionProxy2 != null) {
                mtkImsCallSessionProxy.notifyCallSessionMergeComplete(mtkImsCallSessionProxy2.getServiceImpl());
                return;
            } else {
                mtkImsCallSessionProxy.notifyCallSessionMergeComplete(null);
                return;
            }
        }
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener != null) {
            try {
                if (this.mConfSessionProxy != null) {
                    imsCallSessionListener.callSessionMergeComplete(this.mConfSessionProxy.getServiceImpl());
                } else {
                    imsCallSessionListener.callSessionMergeComplete((IImsCallSession) null);
                }
            } catch (RuntimeException e) {
                logWithCallId("RuntimeException callSessionMergeComplete()", 5);
                close();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyCallSessionTerminated(ImsReasonInfo imsReasonInfo) {
        ImsCallSessionListener imsCallSessionListener;
        if (this.mListener == null) {
            logWithCallId("notifyCallSessionTerminated() : mListener = NULL", 2);
            synchronized (this.mLock) {
                this.mCachedTerminateReasonInfo = imsReasonInfo;
            }
            if (this.mMTSetup) {
                return;
            }
            logWithCallId("has not received ECPI0, close here", 2);
            close();
            return;
        }
        if (this.mIsMerging && (this.mLocalTerminateReason == 501 || this.mRadioUnavailable)) {
            logWithCallId("notifyCallSessionTerminated() : close while merging", 2);
            mergeFailed();
        }
        int i = AnonymousClass1.$SwitchMap$com$mediatek$ims$ImsCallSessionProxy$CallErrorState[this.mCallErrorState.ordinal()];
        if (i != 1) {
            if (i == 2 && (imsCallSessionListener = this.mListener) != null) {
                try {
                    imsCallSessionListener.callSessionTerminated(imsReasonInfo);
                } catch (RuntimeException e) {
                    logWithCallId("RuntimeException callSessionTerminated()", 5);
                    close();
                }
            }
        } else if (this.mListener != null) {
            try {
                if (imsReasonInfo.getCode() == 241 && getImsOemCallUtil().needReportCallTerminatedForFdn()) {
                    this.mCallId = INVALID_CALL_ID;
                    this.mListener.callSessionTerminated(imsReasonInfo);
                } else {
                    this.mListener.callSessionInitiatedFailed(imsReasonInfo);
                }
            } catch (RuntimeException e2) {
                logWithCallId("RuntimeException callSessionInitiatedFailed()", 5);
                close();
            }
        }
        this.mIsWaitingClose = DBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyCallSessionUpdated() {
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener == null) {
            return;
        }
        try {
            imsCallSessionListener.callSessionUpdated(this.mCallProfile);
        } catch (RuntimeException e) {
            logWithCallId("RuntimeException callSessionUpdated()", 5);
        }
    }

    private void notifyNotRingingMtIfRequired() {
        if (this.mSipSessionProgress && this.mState == 0 && this.mContext != null) {
            this.mCallProfile.setCallExtra("android.telephony.ims.extra.CALL_DISCONNECT_CAUSE", String.valueOf(WfcReasonInfo.CODE_WFC_403_FORBIDDEN));
            int iMapPhoneIdToServiceId = this.mImsService.mapPhoneIdToServiceId(this.mPhoneId);
            Bundle bundle = new Bundle();
            bundle.putString("android:imsCallID", this.mCallId);
            bundle.putString("android:imsDialString", this.mCallNumber);
            bundle.putInt("android:imsServiceId", iMapPhoneIdToServiceId);
            this.mImsService.notifyIncomingCallSession(this.mPhoneId, getServiceImpl(), bundle);
            this.mImsReasonInfo = new ImsReasonInfo(WfcReasonInfo.CODE_WFC_403_FORBIDDEN, 0);
            return;
        }
        logWithCallId("notifyNotRingingMtIfRequired: sipSessionProgress = " + this.mSipSessionProgress + ", state = " + this.mState + ", mContext = " + this.mContext, 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRemoteHeld() {
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener == null || this.mState == 7) {
            return;
        }
        try {
            imsCallSessionListener.callSessionHoldReceived(this.mCallProfile);
        } catch (RuntimeException e) {
            logWithCallId("RuntimeException callSessionHoldReceived()", 5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRemoteResumed() {
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener == null || this.mState == 7) {
            return;
        }
        try {
            imsCallSessionListener.callSessionResumeReceived(this.mCallProfile);
        } catch (RuntimeException e) {
            logWithCallId("RuntimeException callSessionResumeReceived()", 5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void processMtRttWithoutPrecondition(int i) {
        boolean zIsMtRttWithoutPrecondition = isMtRttWithoutPrecondition();
        logWithCallId("processMtRttWithoutPrecondition: isWithoutPrecondition=" + zIsMtRttWithoutPrecondition, 2);
        if (zIsMtRttWithoutPrecondition && this.mState == 0) {
            boolean z = DBG;
            if (i != 1) {
                z = VDBG;
            }
            this.mIsRttEnabledForCallSession = z;
        }
    }

    private void pullCall(String str, ImsCallProfile imsCallProfile) {
        this.mImsRILAdapter.pullCall(str, isVideoCall(imsCallProfile), this.mHandler.obtainMessage(EVENT_PULL_CALL_RESULT));
    }

    private void rejectDial() {
        logWithCallId("rejectDial()", 2);
        this.mCallErrorState = CallErrorState.DIAL;
        notifyCallSessionTerminated(new ImsReasonInfo());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean removeRemoteCallVideoCapability() {
        logWithCallId("removeRemoteCallVideoCapability()", 2);
        if (this.mRemoteCallProfile.mCallType == 2) {
            return VDBG;
        }
        this.mRemoteCallProfile.mCallType = 2;
        return DBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCallEventWithRat(int i) {
        Bundle bundle = new Bundle();
        bundle.putInt(EXTRA_CALL_INFO_MESSAGE_TYPE, i);
        bundle.putInt(EXTRA_CALL_TYPE, this.mCallProfile.mCallType);
        bundle.putInt(EXTRA_RAT_TYPE, this.mRatType);
        bundle.putBoolean(EXTRA_INCOMING_CALL, this.mIsIncomingCall);
        bundle.putBoolean(EXTRA_EMERGENCY_CALL, this.mIsEmergencyCall);
        this.mOpImsCallSession.sendCallEventWithRat(bundle);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String sensitiveEncode(String str) {
        return ImsServiceCallTracker.sensitiveEncode(str);
    }

    private void setRttModeForDial(boolean z) {
        logWithCallId("setRttModeForDial + isRtt: " + z + " mCallId = " + this.mCallId, 2);
        if (isRttSupported()) {
            if (!z) {
                logWithCallId("setRttModeForDial setRttMode 2", 2);
                this.mImsRILAdapter.setRttMode(2, null);
            } else {
                logWithCallId("setRttModeForDial setRttMode 1", 2);
                this.mImsRILAdapter.setRttMode(1, null);
                this.mEnableSendRttBom = DBG;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean shouldNotifyCallDropByBadWifiQuality() {
        boolean zIsMatched = OperatorUtils.isMatched(OperatorUtils.OPID.OP07, this.mPhoneId);
        logWithCallId("shouldNotifyCallDropByBadWifiQuality() :  carrier =  " + zIsMatched + " isUserPerfromedHangup = " + isUserPerfromedHangup() + " mRatType = " + this.mRatType, 2);
        return (zIsMatched && !isUserPerfromedHangup() && this.mRatType == 2) ? DBG : VDBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void terminateConferenceSession() {
        if (this.mMtkConfSessionProxy == null) {
            if (this.mConfSessionProxy == null) {
                this.mHangupHostDuringMerge = DBG;
                return;
            }
            logWithCallId("terminateConferenceSession() : Hangup Conference: Hangup host while merging (aosp)", 2);
            ImsCallSessionProxy imsCallSessionProxy = this.mConfSessionProxy;
            imsCallSessionProxy.terminate(102);
            ImsConferenceHandler.getInstance().closeConference(imsCallSessionProxy.getCallId());
            this.mParticipants.clear();
            return;
        }
        logWithCallId("terminateConferenceSession() : Hangup Conference: Hangup host while merging (mtk)", 2);
        if (this.mMtkConfSessionProxy.getAospCallSessionProxy() == null) {
            this.mHangupHostDuringMerge = DBG;
            logWithCallId("terminateConferenceSession() : init conference object not compelted.", 2);
        } else {
            MtkImsCallSessionProxy mtkImsCallSessionProxy = this.mMtkConfSessionProxy;
            mtkImsCallSessionProxy.terminate(102);
            ImsConferenceHandler.getInstance().closeConference(mtkImsCallSessionProxy.getCallId());
            this.mParticipants.clear();
        }
    }

    private static String toHex(int i) {
        StringBuilder sb = new StringBuilder();
        if (i < 0) {
            i += 256;
        }
        sb.append(HEX.charAt(i >> 4));
        sb.append(HEX.charAt(i & 15));
        return sb.toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void toggleRttAudioIndication() {
        if (isRttSupported()) {
            if (!((TelephonyManager) this.mContext.getSystemService(TelephonyManager.class)).getCarrierConfig().getBoolean(ImsCarrierConfigConstants.MTK_KEY_RTT_AUDIO_INDICATION_SUPPORTED_BOOL, VDBG)) {
                logWithCallId("toggleRttAudioIndication: carrier config not supported.", 2);
                return;
            }
            int i = Integer.parseInt(this.mCallId);
            if (this.mIsRttEnabledForCallSession) {
                logWithCallId("toggleRttAudioIndication: enable RTT audio indication.", 2);
                this.mImsRILAdapter.toggleRttAudioIndication(i, 1, null);
            } else if (this.mState == 4) {
                logWithCallId("toggleRttAudioIndication: disable RTT audio indication.", 2);
                this.mImsRILAdapter.toggleRttAudioIndication(i, 0, null);
            }
        }
    }

    private void tryTurnOnVolteForE911(boolean z) {
        if (z) {
            ImsManager imsManager = ImsManager.getInstance(this.mContext, this.mPhoneId);
            boolean zIsVolteEnabledByPlatform = imsManager.isVolteEnabledByPlatform();
            logWithCallId("tryTurnOnVolteForE911() : isEmergencNumber " + z + ", volteEnabledByPlatform " + zIsVolteEnabledByPlatform + ", volteEnabledByUser " + imsManager.isEnhanced4gLteModeSettingEnabledByUser(), 3);
            if (zIsVolteEnabledByPlatform) {
                return;
            }
            ImsConfigUtils.triggerSendCfgForVolte(this.mContext, this.mImsRILAdapter, this.mPhoneId, 1);
            this.mImsServiceCT.setEnableVolteForImsEcc(DBG);
        }
    }

    private void turnOffAirplaneMode() {
        Rlog.d(LOG_TAG, "turnOffAirplaneMode()");
        if (Settings.Global.getInt(this.mContext.getContentResolver(), "airplane_mode_on", 0) > 0) {
            Rlog.d(LOG_TAG, "turnOffAirplaneMode() : Turning off airplane mode.");
            Settings.Global.putInt(this.mContext.getContentResolver(), "airplane_mode_on", 0);
            Intent intent = new Intent("android.intent.action.AIRPLANE_MODE");
            intent.putExtra("state", VDBG);
            this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateCallStateForWifiOffload(int i) {
        int i2;
        if (this.mWfoService == null) {
            logWithCallId("updateCallStateForWifiOffload() : skip, no WOS!", 2);
            return;
        }
        String str = this.mCallId;
        if (str == null) {
            logWithCallId("updateCallStateForWifiOffload() : skip, no call ID!", 2);
            return;
        }
        int i3 = Integer.parseInt(str);
        int i4 = (this.mCallProfile.mCallType == 2 || this.mCallProfile.mCallType == 1) ? 1 : 2;
        switch (i) {
            case 0:
            case 7:
            case 8:
                i2 = 0;
                break;
            case 1:
            case 2:
            case 3:
            case 5:
            case 6:
                i2 = 2;
                break;
            case 4:
                i2 = 1;
                break;
            default:
                logWithCallId("updateCallStateForWifiOffload() : skip, unexpected state: " + i, 2);
                return;
        }
        try {
            this.mWfoService.updateCallState(this.mPhoneId, i3, i4, i2);
        } catch (RemoteException e) {
            logWithCallId("updateCallStateForWifiOffload() : RemoteException in Wos.updateCallState()", 5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateCallType(int i, int i2) {
        if (i == 21 || i == 23 || i == 25) {
            if (i2 != 0) {
                if (i2 == 1) {
                    this.mCallProfile.mCallType = 5;
                    logWithCallId("updateCallType() : mCallType = CALL_TYPE_VT_TX", 2);
                } else if (i2 == 2) {
                    this.mCallProfile.mCallType = 6;
                    logWithCallId("updateCallType() : mCallType = CALL_TYPE_VT_RX", 2);
                } else if (i2 != 3) {
                    this.mCallProfile.mCallType = 4;
                    logWithCallId("updateCallType() : mCallType = CALL_TYPE_VT", 2);
                } else {
                    this.mCallProfile.mCallType = 4;
                    logWithCallId("updateCallType() : mCallType = CALL_TYPE_VT", 2);
                }
            }
            if (isRttSupported()) {
                this.mCallProfile.setCallExtraBoolean(EXTRA_WAS_VIDEO_CALL, DBG);
                logWithCallId("updateCallType() : EXTRA_WAS_VIDEO_CALL = true", 2);
            }
        } else if (i == 20 || i == 22 || i == 24) {
            this.mCallProfile.mCallType = 2;
            logWithCallId("updateCallType() : mCallType = CALL_TYPE_VOICE", 2);
        }
        logWithCallId("updateCallType() : " + this.mCallProfile.mCallType, 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateIncomingVideoRingtone(int i, int i2) {
        if (i == 21 && i2 >= 1) {
            this.mRemoteCallProfile.mMediaProfile.mVideoDirection = i2;
        } else if (i == 20 && i2 == 1) {
            this.mRemoteCallProfile.mMediaProfile.mVideoDirection = i2;
        } else {
            this.mRemoteCallProfile.mMediaProfile.mVideoDirection = 0;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int updateIsIbt(String[] strArr) {
        int i = strArr[2] != null ? Integer.parseInt(strArr[2]) : 1;
        logWithCallId("updateIsIbt() : isIbt= " + i, 2);
        if (i == 0) {
            this.mCallProfile.mMediaProfile.mAudioDirection = 0;
        } else {
            this.mCallProfile.mMediaProfile.mAudioDirection = 1;
        }
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateOutgoingVideoRingtone(int i, int i2) {
        if (SystemProperties.get("persist.vendor.vilte_support").equals("1")) {
            int i3 = this.mCallProfile.mCallType;
            logWithCallId("updateOutgoingVideoRingtone(): callType = " + i3, 2);
            if (i3 != 4 && i3 != 6) {
                this.mRemoteCallProfile.mMediaProfile.mVideoDirection = -1;
            } else if (i != 21 || i2 < 2) {
                this.mRemoteCallProfile.mMediaProfile.mVideoDirection = 0;
            } else {
                this.mRemoteCallProfile.mMediaProfile.mVideoDirection = i2;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean updateRat(int i, int i2) {
        String strValueOf;
        if (this.mRatType == i && this.mCallRat == i2) {
            return VDBG;
        }
        if (this.mCallRat != 0 && this.mIsEmergencyCall) {
            return VDBG;
        }
        int i3 = 0;
        if (i2 != 0) {
            i3 = i2;
        } else if (i == 1) {
            int dataNetworkType = getDataNetworkType();
            logWithCallId("updateRat() : dataNetworkType is " + dataNetworkType, 2);
            if (dataNetworkType == 13 || dataNetworkType == 19) {
                i3 = 1;
            } else if (dataNetworkType == 20) {
                i3 = 3;
            }
        } else {
            i3 = i == 2 ? 2 : 0;
        }
        this.mRatType = i;
        if (this.mCallRat == i3) {
            return VDBG;
        }
        this.mCallRat = i3;
        if (i3 == 1) {
            strValueOf = String.valueOf(14);
        } else if (i3 == 2) {
            strValueOf = String.valueOf(18);
        } else {
            strValueOf = i3 == 3 ? String.valueOf(20) : String.valueOf(0);
        }
        this.mCallProfile.setCallExtra("CallRadioTech", strValueOf);
        ImsVTProvider imsVTProvider = this.mVTProvider;
        if (imsVTProvider != null) {
            int i4 = this.mCallRat;
            if (i4 == 2) {
                imsVTProvider.onUpdateCallRat(1);
            } else if (i4 == 3) {
                imsVTProvider.onUpdateCallRat(2);
            } else {
                imsVTProvider.onUpdateCallRat(0);
            }
        }
        logWithCallId("updateRat() : mRatType is " + this.mRatType + ", mCallRat is " + this.mCallRat, 2);
        return DBG;
    }

    private void updateShouldUpdateAddress() {
        boolean zIsMatched = OperatorUtils.isMatched(OperatorUtils.OPID.OP06, this.mPhoneId);
        boolean z = VDBG;
        this.mShouldUpdateAddressByPau = zIsMatched || OperatorUtils.isMatched(OperatorUtils.OPID.OP08, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP_EIOT, this.mPhoneId);
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP130, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP120, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP132, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OPOi, this.mPhoneId)) {
            z = true;
        }
        this.mShouldUpdateAddressFromEcpi = z;
    }

    private void updateShouldUseSipField() {
        this.mShouldUpdateAddressBySipField = OperatorUtils.isMatched(OperatorUtils.OPID.OP236, this.mPhoneId) ^ DBG;
        logWithCallId("updateShouldUseSipField() : mShouldUpdateAddressBySipField = " + this.mShouldUpdateAddressBySipField, 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateVideoDirection() {
        this.mOverallPause = (this.mFwkPause || this.mVideoState == 0) ? DBG : false;
        this.mCallProfile.mMediaProfile.mVideoDirection = this.mOverallPause ? 0 : getVideoDirectionFromVideoState(this.mVideoState);
        logWithCallId("updateVideoDirection() : mOverallPause = " + this.mOverallPause + ", mVideoDirection = " + this.mCallProfile.mMediaProfile.mVideoDirection, 2);
    }

    public void accept(int i, ImsStreamMediaProfile imsStreamMediaProfile) {
        int i2;
        logWithCallId("accept() : original call Type: " + this.mCallProfile.mCallType + ", accept as: " + i, 2);
        this.mImsService.cleanMtkCallSessionProxyIfNeed(this, DBG, this.mCallId, this.mPhoneId);
        if (this.mCallProfile.getCallExtraInt("dialstring", 0) != 2) {
            if (this.mCallProfile.mCallType == 2) {
                this.mImsRILAdapter.accept();
                return;
            }
            if (i == 2) {
                i2 = 1;
            } else if (i == 4) {
                i2 = 0;
            } else if (i != 5) {
                i2 = i != 6 ? 0 : 2;
            } else {
                i2 = 3;
            }
            this.mImsRILAdapter.acceptVideoCall(i2, Integer.parseInt(this.mCallId));
            return;
        }
        String callExtra = this.mCallProfile.getCallExtra("m");
        String callExtra2 = this.mCallProfile.getCallExtra("str");
        logWithCallId("accept() : m = " + callExtra + ", str = " + callExtra2, 2);
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener != null) {
            imsCallSessionListener.callSessionUssdMessageReceived(Integer.parseInt(callExtra), callExtra2);
            if (callExtra.equals(String.valueOf(1)) || this.mListener == null) {
                return;
            }
            logWithCallId("callSessionTerminated !", 2);
            this.mListener.callSessionTerminated(new ImsReasonInfo());
        }
    }

    public void approveEccRedial(boolean z) {
        this.mImsRILAdapter.approveEccRedial(z ? 1 : 0, Integer.parseInt(this.mCallId), null);
        if (z) {
            turnOffAirplaneMode();
        }
    }

    public void callTerminated() {
        detailLog("callTerminated() : mCallNumber = " + sensitiveEncode(this.mCallNumber));
        if (isMultiparty()) {
            ImsConferenceHandler.getInstance().closeConference(getCallId());
        }
        int i = this.mState;
        if (i == -1 || i == 8) {
            logWithCallId("callTerminated() : mState is INVALID, return: " + this.mState, 2);
            return;
        }
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP08, this.mPhoneId)) {
            notifyNotRingingMtIfRequired();
        }
        this.mIsOnTerminated = DBG;
        this.mState = 8;
        if (this.mHasPendingMo) {
            this.mHasPendingMo = VDBG;
            this.mCallErrorState = CallErrorState.DIAL;
        } else {
            this.mCallErrorState = CallErrorState.DISCONNECT;
        }
        if (this.mImsReasonInfo != null) {
            logWithCallId("callTerminated() : get disconnect cause directly from +ESIPCPI", 2);
            notifyCallSessionTerminated(this.mImsReasonInfo);
        } else {
            logWithCallId("callTerminated() : get disconnect cause from AT+CEER", 2);
            this.mImsRILAdapter.getLastCallFailCause(this.mPhoneId, this.mHandler.obtainMessage(105));
        }
        updateCallStateForWifiOffload(this.mState);
    }

    public void close() {
        IWifiOffloadListenerProxy iWifiOffloadListenerProxy;
        logWithCallId("close() : ImsCallSessionProxy is closed!!! ", 2);
        if (this.mState == -1) {
            logWithCallId("close() : ImsCallSessionProxy already closed", 2);
            return;
        }
        this.mState = -1;
        this.mImsServiceCT.removeCallConnection(this.mCallId, this);
        this.mImsRILAdapter.unregisterForCallInfo(this.mHandler);
        this.mImsRILAdapter.unregisterForEconfResult(this.mHandler);
        this.mImsRILAdapter.unregisterForCallProgressIndicator(this.mHandler);
        this.mImsRILAdapter.unregisterForCallModeChangeIndicator(this.mHandler);
        this.mImsRILAdapter.unregisterForVideoCapabilityIndicator(this.mHandler);
        this.mImsRILAdapter.unregisterForEctResult(this.mHandler);
        this.mImsRILAdapter.unregisterForImsConfInfoUpdate(this.mHandler);
        this.mImsRILAdapter.unregisterForNotAvailable(this.mHandler);
        this.mImsRILAdapter.unregisterForSpeechCodecInfo(this.mHandler);
        this.mImsRILAdapter.unregisterForImsRedialEccInd(this.mHandler);
        this.mImsRILAdapter.unregisterForSipHeaderInd(this.mHandler);
        this.mImsRILAdapter.unregisterForCallRatIndication(this.mHandler);
        this.mImsRILAdapter.unregisterForCallAdditionalInfo(this.mHandler);
        this.mImsRILAdapter.unregisterForRttCapabilityIndicator(this.mHandler);
        this.mImsRILAdapter.unregisterForRttModifyResponse(this.mHandler);
        this.mImsRILAdapter.unregisterForRttTextReceive(this.mHandler);
        this.mImsRILAdapter.unregisterForRttModifyRequestReceive(this.mHandler);
        this.mImsRILAdapter.unregisterForRttAudioIndicator(this.mHandler);
        this.mImsRILAdapter.unSetOnSuppServiceNotification(this.mHandler);
        this.mParticipants.clear();
        if (getVideoCallProvider() != null) {
            logWithCallId("close() : Start VtProvider setUIMode", 2);
            this.mVTProvider.onSetUIMode(65536);
            this.mVTProvider.removeVideoProviderStateListener(this.mVtProviderListener);
            this.mVTProvider = null;
        }
        ImsConferenceHandler.getInstance().closeConference(this.mCallId);
        this.mConfEvtListener = null;
        this.mOneKeyparticipants = null;
        IWifiOffloadService iWifiOffloadService = this.mWfoService;
        if (iWifiOffloadService != null && (iWifiOffloadListenerProxy = this.mWosListener) != null) {
            try {
                iWifiOffloadService.unregisterForHandoverEvent(iWifiOffloadListenerProxy);
            } catch (RemoteException e) {
                logWithCallId("close() : RemoteException when unregisterForHandoverEvent", 5);
            }
        }
        ImsSelfActivatorBase imsSelfActivatorBase = this.mSelfActivateHelper;
        if (imsSelfActivatorBase != null) {
            imsSelfActivatorBase.close();
            this.mSelfActivateHelper = null;
        }
        this.mCallId = null;
        this.mListener = null;
        this.mCachedUserInfo = null;
        this.mCachedSuppServiceInfo = null;
        this.mCachedTerminateReasonInfo = null;
        this.mSuppSrvCache = null;
    }

    void explicitCallTransferWithCallback(Message message, Messenger messenger) {
        this.mEctMsg = message;
        this.mEctTarget = messenger;
        transfer(null);
    }

    public void extendToConference(String[] strArr) {
    }

    public String getCallId() {
        return this.mCallId;
    }

    public ImsCallProfile getCallProfile() {
        return this.mCallProfile;
    }

    ConferenceEventListener getConfEvtListener() {
        if (this.mConfEvtListener == null) {
            this.mConfEvtListener = new ConferenceEventListener();
        }
        return this.mConfEvtListener;
    }

    public String getHeaderCallId() {
        return this.mHeaderCallId;
    }

    public ImsSelfActivatorBase getImsExtSelfActivator(Context context, Handler handler, ImsCallSessionProxy imsCallSessionProxy, ImsCommandsInterface imsCommandsInterface, ImsService imsService, int i) {
        return ExtensionFactory.makeExtensionPluginFactory(this.mContext).makeImsSelfActivator(this.mContext, handler, this, imsCommandsInterface, imsService, i);
    }

    public ImsCallOemPlugin getImsOemCallUtil() {
        return ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsCallPlugin(this.mContext);
    }

    public ImsCallProfile getLocalCallProfile() {
        return this.mLocalCallProfile;
    }

    public MtkImsCallSessionProxy getMtkCallSessionProxy() {
        return this.mMtkImsCallSessionProxy;
    }

    public String getProperty(String str) {
        return this.mCallProfile.getCallExtra(str);
    }

    public ImsCallProfile getRemoteCallProfile() {
        return this.mRemoteCallProfile;
    }

    public int getState() {
        return this.mState;
    }

    public IImsVideoCallProvider getVideoCallProvider() {
        logWithCallId("getVideoCallProvider() : mVTProvider = " + this.mVTProvider, 2);
        ImsVTProvider imsVTProvider = this.mVTProvider;
        if (imsVTProvider != null) {
            return imsVTProvider.getInterface();
        }
        return null;
    }

    public void hold(ImsStreamMediaProfile imsStreamMediaProfile) {
        this.mImsRILAdapter.hold(Integer.parseInt(this.mCallId), this.mHandler.obtainMessage(EVENT_HOLD_RESULT));
    }

    public void inviteParticipants(String[] strArr) {
        Message messageObtainMessage = this.mHandler.obtainMessage(EVENT_ADD_CONFERENCE_RESULT);
        this.mPendingParticipantInfoIndex = 0;
        this.mPendingParticipantInfo = strArr;
        int length = strArr.length;
        this.mPendingParticipantStatistics = length;
        if (this.mCallId != null && length != 0) {
            ImsConferenceHandler.getInstance().tryAddParticipant(this.mPendingParticipantInfo[this.mPendingParticipantInfoIndex]);
            this.mImsRILAdapter.inviteParticipants(Integer.parseInt(this.mCallId), this.mPendingParticipantInfo[this.mPendingParticipantInfoIndex], messageObtainMessage);
            return;
        }
        logWithCallId("inviteParticipants() : fail since no call ID or participants is null CallID=" + this.mCallId + " Participant number=" + this.mPendingParticipantStatistics, 5);
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener != null) {
            try {
                imsCallSessionListener.callSessionInviteParticipantsRequestFailed(new ImsReasonInfo());
            } catch (RuntimeException e) {
                logWithCallId("RuntimeException callSessionInviteParticipantsRequestFailed()", 5);
            }
        }
    }

    public boolean isInCall() {
        return VDBG;
    }

    public boolean isIncomingCallMultiparty() {
        return this.mCallProfile.getCallExtraInt(ImsCallProfileEx.EXTRA_INCOMING_MPTY, 0) == 1 ? DBG : VDBG;
    }

    public boolean isMultiparty() {
        return this.mCallProfile.getCallExtraInt(ImsCallProfileEx.EXTRA_MPTY, 0) == 1 ? DBG : VDBG;
    }

    public void merge() {
        logWithCallId("merge()", 2);
        ImsCallInfo callInfo = this.mImsServiceCT.getCallInfo(this.mCallId);
        ImsCallInfo callInfo2 = null;
        boolean zIsMatched = OperatorUtils.isMatched(OperatorUtils.OPID.OP165, this.mPhoneId);
        boolean z = VDBG;
        boolean z2 = zIsMatched || OperatorUtils.isMatched(OperatorUtils.OPID.OP152, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP117, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP131, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP125, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP18, this.mPhoneId);
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP16, this.mPhoneId) || OperatorUtils.isMatched(OperatorUtils.OPID.OP18, this.mPhoneId)) {
            z = true;
        }
        if (callInfo == null) {
            logWithCallId("merge() : can't find this call callInfo", 5);
            mergeFailed();
            return;
        }
        if (callInfo.mState == ImsCallInfo.State.ACTIVE) {
            callInfo2 = this.mImsServiceCT.getCallInfo(ImsCallInfo.State.HOLDING);
        } else if (callInfo.mState == ImsCallInfo.State.HOLDING) {
            callInfo2 = this.mImsServiceCT.getCallInfo(ImsCallInfo.State.ACTIVE);
        }
        if (callInfo2 == null) {
            logWithCallId("merge() : can't find another call's callInfo", 5);
            mergeFailed();
            return;
        }
        ImsCallProfile imsCallProfile = this.mCallProfile;
        if (imsCallProfile != null && imsCallProfile.isVideoCall()) {
            z2 = z;
        }
        logWithCallId("merge() : merge command- my call: conference type=" + callInfo.mIsConference + " call status=" + callInfo.mState + " beMergedCall: conference type=" + callInfo2.mIsConference + " call status=" + callInfo2.mState + " needSwapConfToFg=" + z2, 2);
        this.mMergeCallId = callInfo.mCallId;
        this.mMergeCallStatus = callInfo.mState;
        this.mMergedCallId = callInfo2.mCallId;
        this.mMergedCallStatus = callInfo2.mState;
        this.mIsMerging = DBG;
        DefaultConferenceHandler imsConferenceHandler = ImsConferenceHandler.getInstance();
        if (!callInfo.mIsConferenceHost && !callInfo2.mIsConferenceHost) {
            this.mImsRILAdapter.merge(this.mHandler.obtainMessage(EVENT_MERGE_RESULT));
            this.mIsHideHoldEventDuringMerging = DBG;
            this.mNormalCallsMerge = DBG;
            imsConferenceHandler.firstMerge(callInfo.mCallId, callInfo2.mCallId, callInfo.mCallNum, callInfo2.mCallNum);
            return;
        }
        if (callInfo.mIsConferenceHost && callInfo2.mIsConferenceHost) {
            logWithCallId("merge() : conference call merge conference call", 2);
            this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(this.mCallId), callInfo2, this.mHandler.obtainMessage(EVENT_ADD_CONFERENCE_RESULT));
            return;
        }
        imsConferenceHandler.tryAddParticipant(callInfo.mIsConferenceHost ? callInfo2.mCallNum : callInfo.mCallNum);
        if (!z2) {
            if (callInfo.mIsConferenceHost) {
                logWithCallId("merge() : active conference call merge background normal call", 2);
                this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(this.mCallId), callInfo2, this.mHandler.obtainMessage(EVENT_ADD_CONFERENCE_RESULT));
                return;
            } else {
                logWithCallId("merge() : active normal call merge background conference call", 2);
                this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(callInfo2.mCallId), callInfo, this.mHandler.obtainMessage(EVENT_ADD_CONFERENCE_RESULT));
                return;
            }
        }
        if (callInfo.mIsConferenceHost && callInfo.mState == ImsCallInfo.State.ACTIVE) {
            logWithCallId("merge() : active conference call merge background normal call", 2);
            this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(this.mCallId), callInfo2, this.mHandler.obtainMessage(EVENT_ADD_CONFERENCE_RESULT));
        } else if (callInfo2.mIsConferenceHost && callInfo2.mState == ImsCallInfo.State.ACTIVE) {
            logWithCallId("merge() : beMergedCall in foreground merge bg normal call", 2);
            this.mImsRILAdapter.inviteParticipantsByCallId(Integer.parseInt(callInfo2.mCallId), callInfo, this.mHandler.obtainMessage(EVENT_ADD_CONFERENCE_RESULT));
        } else {
            logWithCallId("merge() : swapping before merge", 2);
            this.mImsRILAdapter.swap(this.mHandler.obtainMessage(EVENT_SWAP_BEFORE_MERGE_RESULT));
        }
    }

    public void onAddParticipantComplete() {
        Rlog.d(LOG_TAG, "onAddParticipantComplete(): " + this.mCallId);
        ImsVTProvider imsVTProvider = this.mVTProvider;
        if (imsVTProvider != null) {
            this.mVTProviderUtil.resetWrapper(imsVTProvider);
        }
    }

    public void reject(int i) {
        if (this.mCallId == null) {
            logWithCallId("reject() : Reject Call fail since there is no call ID. Abnormal Case", 5);
            return;
        }
        int hangupCause = getHangupCause(i);
        this.mLocalTerminateReason = i;
        if (hangupCause <= 0) {
            this.mImsRILAdapter.reject(Integer.parseInt(this.mCallId));
        } else {
            this.mImsRILAdapter.reject(Integer.parseInt(this.mCallId), hangupCause);
        }
    }

    public void removeLastParticipant() {
        if (this.mCallId == null) {
            logWithCallId("removeLastParticipant() : fail since no call ID CallID = " + this.mCallId, 5);
            return;
        }
        int size = this.mParticipantsList.size();
        if (this.mCallId != null && size > 1) {
            this.mImsRILAdapter.removeParticipants(Integer.parseInt(this.mCallId), getConfParticipantUri(this.mParticipantsList.get(size - 1)), this.mHandler.obtainMessage(EVENT_REMOVE_CONFERENCE_RESULT));
        } else {
            logWithCallId("removeLastParticipant() : Participant number = " + size, 5);
            logWithCallId("removeLastParticipant() : terminate", 2);
            terminate(0);
        }
    }

    public void removeParticipants(String[] strArr) {
        Message messageObtainMessage = this.mHandler.obtainMessage(EVENT_REMOVE_CONFERENCE_RESULT);
        this.mPendingParticipantInfoIndex = 0;
        this.mPendingParticipantInfo = strArr;
        int length = strArr.length;
        this.mPendingParticipantStatistics = length;
        if (this.mCallId != null && length != 0) {
            String str = strArr[0];
            this.mImsRILAdapter.removeParticipants(Integer.parseInt(this.mCallId), getConfParticipantUri(str), messageObtainMessage);
            ImsConferenceHandler.getInstance().tryRemoveParticipant(str);
            return;
        }
        logWithCallId("removeParticipants() : fail since no call ID or participants is null CallID=" + this.mCallId + " Participant number=" + this.mPendingParticipantStatistics, 5);
        ImsCallSessionListener imsCallSessionListener = this.mListener;
        if (imsCallSessionListener != null) {
            try {
                imsCallSessionListener.callSessionRemoveParticipantsRequestFailed(new ImsReasonInfo());
            } catch (RuntimeException e) {
                logWithCallId("RuntimeException callSessionRemoveParticipantsRequestFailed()", 5);
            }
        }
    }

    public void resume(ImsStreamMediaProfile imsStreamMediaProfile) {
        this.mImsRILAdapter.resume(Integer.parseInt(this.mCallId), this.mHandler.obtainMessage(EVENT_RESUME_RESULT));
    }

    public void sendDtmf(char c, Message message) {
        this.mDtmfMsg = message;
        this.mImsRILAdapter.sendDtmf(c, this.mHandler.obtainMessage(EVENT_DTMF_DONE));
    }

    public void sendRttMessage(String str) {
        if (isRttSupported()) {
            int i = Integer.parseInt(this.mCallId);
            if (str == null) {
                return;
            }
            int length = str.length();
            try {
                byte[] bytes = str.getBytes("utf-8");
                int length2 = bytes != null ? bytes.length : 0;
                StringBuilder sb = new StringBuilder();
                for (byte b : bytes) {
                    sb.append(toHex(new Byte(b).intValue()));
                }
                String string = sb.toString();
                logWithCallId("sendRttMessage rttMessage= " + sensitiveEncode(str) + " len =" + sensitiveEncode(String.valueOf(length)) + " = " + sensitiveEncode(string) + " encodeText.length= " + sensitiveEncode(String.valueOf(bytes.length)), 2);
                if (string == null || length2 <= 0) {
                    return;
                }
                this.mImsRILAdapter.sendRttText(i, string, length2, null);
            } catch (UnsupportedEncodingException e) {
                logWithCallId("sendRttMessage: UnSupportedEncodingException", 5);
            }
        }
    }

    public void sendRttModifyRequest(ImsCallProfile imsCallProfile) {
        logWithCallId("sendRttModifyRequest() : to = " + imsCallProfile, 2);
        if (isRttSupported()) {
            int i = Integer.parseInt(this.mCallId);
            if (imsCallProfile == null) {
                logWithCallId("sendRttModifyRequest invalid ImsCallProfile", 5);
                return;
            }
            if (!imsCallProfile.mMediaProfile.isRttCall()) {
                logWithCallId("sendRttModifyRequest downgrade mCallId= " + this.mCallId, 2);
                this.mImsRILAdapter.sendRttModifyRequest(i, 0, null);
                return;
            }
            logWithCallId("sendRttModifyRequest upgrade mCallId= " + this.mCallId, 2);
            this.mImsRILAdapter.sendRttModifyRequest(i, 1, null);
            this.mEnableSendRttBom = DBG;
        }
    }

    public void sendRttModifyResponse(boolean z) {
        if (isRttSupported()) {
            int i = Integer.parseInt(this.mCallId);
            logWithCallId("sendRttModifyResponse = " + z, 2);
            this.mImsRILAdapter.setRttModifyRequestResponse(i, !z ? 1 : 0, null);
            if (z) {
                this.mEnableSendRttBom = DBG;
            }
        }
    }

    public void sendUssd(String str) {
        this.mImsRILAdapter.sendUSSI(str, this.mHandler.obtainMessage(EVENT_SEND_USSI_COMPLETE, 1, 0));
    }

    public void setImsCallMode(int i) {
        this.mImsCallMode = i;
        if (i == 2) {
            this.mIsRingingRedirect = DBG;
            this.mImsRILAdapter.setImsCallMode(2, null);
        }
    }

    public void setListener(ImsCallSessionListener imsCallSessionListener) {
        this.mListener = imsCallSessionListener;
        if (imsCallSessionListener == null) {
            if (this.mIsOnTerminated) {
                logWithCallId("setListener(), session terminated and no listener, close it.", 2);
                close();
                return;
            }
            return;
        }
        if (this.mIsOnTerminated) {
            logWithCallId("setListener(), session terminated, notify terminated again.", 2);
            synchronized (this.mLock) {
                if (this.mCachedTerminateReasonInfo != null) {
                    this.mHandler.sendMessageDelayed(this.mHandler.obtainMessage(EVENT_CACHED_TERMINATE_REASON, this.mCachedTerminateReasonInfo), 100L);
                    this.mCachedTerminateReasonInfo = null;
                }
            }
        } else if (this.mCachedUserInfo != null) {
            logWithCallId("setListener(), has unhandled ImsConference CEP", 2);
            if (!this.mHandler.hasMessages(111)) {
                this.mHandler.obtainMessage(111, this.mCachedUserInfo).sendToTarget();
            }
            this.mCachedUserInfo = null;
        } else if (this.mSuppSrvCache != null) {
            logWithCallId("setListener(), has unhandled suppSrv", 2);
            Handler handler = this.mHandler;
            handler.sendMessageDelayed(handler.obtainMessage(226, this.mSuppSrvCache), 300L);
            this.mSuppSrvCache = null;
        }
        synchronized (this.mLock) {
            if (this.mCachedSuppServiceInfo != null) {
                this.mHandler.sendMessageDelayed(this.mHandler.obtainMessage(226, this.mCachedSuppServiceInfo), 1000L);
                this.mCachedSuppServiceInfo = null;
            }
        }
    }

    public void setMtkCallSessionProxy(MtkImsCallSessionProxy mtkImsCallSessionProxy) {
        this.mMtkImsCallSessionProxy = mtkImsCallSessionProxy;
    }

    public void setMute(boolean z) {
        this.mImsRILAdapter.setMute(z, null);
    }

    public void start(String str, ImsCallProfile imsCallProfile) {
        if (isCallPull(imsCallProfile)) {
            pullCall(str, imsCallProfile);
            this.mHasPendingMo = DBG;
            this.mCallNumber = str;
            updateShouldUpdateAddress();
            return;
        }
        this.mImsService.cleanMtkCallSessionProxyIfNeed(this, VDBG, this.mCallId, this.mPhoneId);
        int callExtraInt = imsCallProfile.getCallExtraInt("oir", 0);
        this.mIsEmergencyCall = imsCallProfile.mServiceType == 2;
        this.mImsService.getSubIdUsingPhoneId(this.mPhoneId);
        if (!ImsCommonUtil.supportMdAutoSetupIms() && ((OperatorUtils.isMatched(OperatorUtils.OPID.OP08, this.mPhoneId) && callExtraInt == 1 && str.startsWith(NA_PRIOR_CLIR_PREFIX)) || this.mIsEmergencyCall)) {
            logWithCallId("start() : Prior CLIR supported, *82 or ECC is higher priority than CLIR invocation.", 2);
            callExtraInt = 0;
        }
        if (this.mIsEmergencyCall && !isSpecialEccNumber(str) && (!this.mImsService.isImsEccSupportedWhenNormalService(this.mPhoneId) || getImsOemCallUtil().needHangupOtherCallWhenEccDialing())) {
            logWithCallId("start() : Hangup all if IMS Ecc not supported", 2);
            this.mImsRILAdapter.hangupAllCall(null);
        }
        if (isVideoCall(imsCallProfile)) {
            if (!this.mOpImsCallSession.isValidVtDialString(str)) {
                rejectDial();
                return;
            }
            str = this.mOpImsCallSession.normalizeVtDialString(str);
        }
        ImsSelfActivatorBase imsSelfActivatorBase = this.mSelfActivateHelper;
        if (imsSelfActivatorBase != null && !this.mHasTriedSelfActivation && imsSelfActivatorBase.shouldProcessSelfActivation(this.mPhoneId)) {
            this.mSelfActivateHelper.doSelfActivationDial(str, imsCallProfile, this.mIsEmergencyCall);
            this.mHasTriedSelfActivation = DBG;
            return;
        }
        if (imsCallProfile.getCallExtraInt("dialstring", 0) == 2) {
            Message messageObtainMessage = this.mHandler.obtainMessage(EVENT_SEND_USSI_COMPLETE, 1, 0);
            this.mCallProfile = imsCallProfile;
            this.mImsRILAdapter.sendUSSI(str, messageObtainMessage);
            return;
        }
        tryTurnOnVolteForE911(this.mIsEmergencyCall);
        setRttModeForDial(imsCallProfile.mMediaProfile.isRttCall());
        Message messageObtainMessage2 = this.mHandler.obtainMessage(201);
        boolean z = this.mIsEmergencyCall;
        if (getImsOemCallUtil().useNormalDialForEmergencyCall()) {
            z = VDBG;
        }
        this.mImsRILAdapter.start(str, imsCallProfile, callExtraInt, z, isVideoCall(imsCallProfile), messageObtainMessage2);
        this.mHasPendingMo = DBG;
        this.mCallNumber = str;
        updateShouldUpdateAddress();
    }

    public void startConference(String[] strArr, ImsCallProfile imsCallProfile) {
        this.mImsRILAdapter.startConference(strArr, imsCallProfile.getCallExtraInt("oir", 0), isVideoCall(imsCallProfile), this.mPhoneId, this.mHandler.obtainMessage(EVENT_DIAL_CONFERENCE_RESULT));
        this.mHasPendingMo = DBG;
        this.mIsOneKeyConf = DBG;
        this.mOneKeyparticipants = strArr;
        updateShouldUpdateAddress();
    }

    public void startDtmf(char c) {
        this.mImsRILAdapter.startDtmf(c, null);
    }

    public void stopDtmf() {
        this.mImsRILAdapter.stopDtmf(null);
    }

    public void terminate(int i) {
        if (this.mOpImsCallSession.handleHangup()) {
            return;
        }
        if (this.mCallProfile.getCallExtraInt("dialstring", 0) == 2) {
            this.mImsRILAdapter.cancelPendingUssi(this.mHandler.obtainMessage(EVENT_CANCEL_USSI_COMPLETE));
            return;
        }
        if (this.mCallId == null) {
            logWithCallId("terminate() : Terminate Call fail since there is no call ID. Abnormal Case", 5);
            if (this.mHasPendingMo) {
                logWithCallId("terminate() : Pending M0, wait for assign call id", 5);
                this.mHasPendingDisconnect = DBG;
                this.mPendingDisconnectReason = i;
                return;
            }
            return;
        }
        int hangupCause = getHangupCause(i);
        if (this.mHangupCount <= 0) {
            if (hangupCause <= 0) {
                this.mImsRILAdapter.terminate(Integer.parseInt(this.mCallId));
            } else {
                this.mImsRILAdapter.terminate(Integer.parseInt(this.mCallId), hangupCause);
            }
            if (this.mIsMerging) {
                terminateConferenceSession();
            }
        } else if (hangupCause <= 0) {
            this.mImsRILAdapter.forceHangup(Integer.parseInt(this.mCallId));
        } else {
            this.mImsRILAdapter.forceHangup(Integer.parseInt(this.mCallId), hangupCause);
        }
        this.mLocalTerminateReason = i;
        this.mHangupCount++;
        this.mState = 7;
    }

    public void transfer(ImsCallSessionImplBase imsCallSessionImplBase) {
        this.mImsRILAdapter.explicitCallTransfer(this.mHandler.obtainMessage(EVENT_ECT_RESULT));
        this.mIsHideHoldDuringECT = DBG;
    }

    public void transfer(String str, boolean z) {
        this.mImsRILAdapter.unattendedCallTransfer(str, z ? 2 : 1, this.mHandler.obtainMessage(EVENT_ECT_RESULT));
        this.mIsHideHoldDuringECT = DBG;
    }

    public void update(int i, ImsStreamMediaProfile imsStreamMediaProfile) {
    }
}

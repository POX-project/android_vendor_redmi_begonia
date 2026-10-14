package com.mediatek.internal.telephony.imsphone;

import android.net.Uri;
import android.os.PersistableBundle;
import android.os.SystemProperties;
import android.telephony.CarrierConfigManager;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallProfile;
import android.text.TextUtils;
import com.android.ims.ImsCall;
import com.android.ims.internal.ConferenceParticipant;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.imsphone.ImsPhone;
import com.android.internal.telephony.imsphone.ImsPhoneCall;
import com.android.internal.telephony.imsphone.ImsPhoneCallTracker;
import com.android.internal.telephony.imsphone.ImsPhoneConnection;
import com.mediatek.ims.MtkImsCall;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsPhoneConnection extends ImsPhoneConnection {
    private static final String EXTRA_IMS_GWSD = "ims_gwsd";
    private static final String LOG_TAG = "MtkImsPhoneConnection";
    public static final int STATE_AUDIO_RINGTONE = 1;
    public static final int STATE_VIDEO_RINGTONE = 2;
    public static final int SUPPORTS_AUDIO_RINGTONE = 64;
    public static final int SUPPORTS_VIDEO_RINGTONE = 128;
    private int mCallIdBeforeDisconnected;
    private List<ConferenceParticipant> mConferenceParticipants;
    private boolean mIsIncomingCallDuringRttEmcGuard;
    private boolean mIsIncomingCallGwsd;
    private boolean mIsRttVideoSwitchSupported;
    public boolean mWasMultiparty;
    public boolean mWasPreMultipartyHost;

    public static abstract class MtkListenerBase extends Connection.ListenerBase {
        public void onAddressDisplayChanged() {
        }

        public void onConferenceConnectionsConfigured(ArrayList<Connection> arrayList) {
        }

        public void onConferenceParticipantsInvited(boolean z) {
        }

        public void onRedialEcc(boolean z) {
        }

        public void onTextCapabilityChanged(int i, int i2, int i3, int i4) {
        }
    }

    public MtkImsPhoneConnection(Phone phone, ImsCall imsCall, ImsPhoneCallTracker imsPhoneCallTracker, ImsPhoneCall imsPhoneCall, boolean z) {
        super(phone, imsCall, imsPhoneCallTracker, imsPhoneCall, z);
        this.mConferenceParticipants = null;
        this.mWasMultiparty = false;
        this.mWasPreMultipartyHost = false;
        this.mCallIdBeforeDisconnected = -1;
        this.mIsRttVideoSwitchSupported = true;
        this.mIsIncomingCallGwsd = false;
        this.mIsIncomingCallDuringRttEmcGuard = false;
        if (imsCall != null && imsCall.getCallProfile() != null) {
            this.mIsIncomingCallGwsd = imsCall.getCallProfile().getCallExtraInt(EXTRA_IMS_GWSD) == 1;
        }
        fetchIsRttVideoSwitchSupported(phone);
    }

    public MtkImsPhoneConnection(Phone phone, String str, ImsPhoneCallTracker imsPhoneCallTracker, ImsPhoneCall imsPhoneCall, boolean z) {
        super(phone, str, imsPhoneCallTracker, imsPhoneCall, z);
        this.mConferenceParticipants = null;
        this.mWasMultiparty = false;
        this.mWasPreMultipartyHost = false;
        this.mCallIdBeforeDisconnected = -1;
        this.mIsRttVideoSwitchSupported = true;
        this.mIsIncomingCallGwsd = false;
        this.mIsIncomingCallDuringRttEmcGuard = false;
        if (PhoneNumberUtils.isUriNumber(str)) {
            this.mAddress = str;
            this.mPostDialString = "";
        }
        fetchIsRttVideoSwitchSupported(phone);
    }

    public MtkImsPhoneConnection(Phone phone, String[] strArr, ImsPhoneCallTracker imsPhoneCallTracker, ImsPhoneCall imsPhoneCall, boolean z) {
        super(phone, strArr, imsPhoneCallTracker, imsPhoneCall, z);
        this.mConferenceParticipants = null;
        this.mWasMultiparty = false;
        this.mWasPreMultipartyHost = false;
        this.mCallIdBeforeDisconnected = -1;
        this.mIsRttVideoSwitchSupported = true;
        this.mIsIncomingCallGwsd = false;
        this.mIsIncomingCallDuringRttEmcGuard = false;
        fetchIsRttVideoSwitchSupported(phone);
    }

    private void fetchIsRttVideoSwitchSupported(Phone phone) {
        PersistableBundle configForSubId = ((CarrierConfigManager) phone.getContext().getSystemService("carrier_config")).getConfigForSubId(phone.getSubId());
        if (configForSubId != null) {
            this.mIsRttVideoSwitchSupported = configForSubId.getBoolean("rtt_supported_for_vt_bool");
        }
    }

    private boolean isParticipantHost(Uri[] uriArr, Uri uri) {
        if (uriArr == null || uriArr.length == 0 || uri == null) {
            Rlog.d(LOG_TAG, "isParticipantHost(N) : host or participant uri null");
            return false;
        }
        String[] strArrSplit = uri.getSchemeSpecificPart().split("[@;:]");
        if (strArrSplit.length == 0) {
            return false;
        }
        String str = strArrSplit[0];
        for (Uri uri2 : uriArr) {
            if (uri2 != null && PhoneNumberUtils.compare(uri2.getSchemeSpecificPart(), str)) {
                return true;
            }
        }
        return false;
    }

    private boolean isTestSim() {
        boolean z = SystemProperties.get("vendor.gsm.sim.ril.testsim").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.2").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.3").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.4").equals("1");
        Rlog.d(LOG_TAG, "isTestSim: " + z);
        return z;
    }

    private void removeHostAddress() {
        ArrayList arrayList = new ArrayList();
        ImsPhone imsPhone = this.mOwner.mPhone;
        if (imsPhone.getCurrentSubscriberUris() == null) {
            Rlog.d(LOG_TAG, "remove host participant failed ");
            return;
        }
        arrayList.addAll(new ArrayList(Arrays.asList(imsPhone.getCurrentSubscriberUris())));
        Uri[] uriArr = (Uri[]) arrayList.toArray(new Uri[arrayList.size()]);
        ConferenceParticipant conferenceParticipant = null;
        for (ConferenceParticipant conferenceParticipant2 : this.mConferenceParticipants) {
            if (isParticipantHost(uriArr, conferenceParticipant2.getHandle())) {
                conferenceParticipant = conferenceParticipant2;
                break;
            }
        }
        if (conferenceParticipant != null) {
            this.mConferenceParticipants.remove(conferenceParticipant);
        }
        Rlog.d(LOG_TAG, "remove host participant: " + conferenceParticipant);
    }

    private void setConnectionAddressDisplay() {
        for (MtkListenerBase mtkListenerBase : this.mListeners) {
            if (mtkListenerBase instanceof MtkListenerBase) {
                mtkListenerBase.onAddressDisplayChanged();
            }
        }
    }

    protected boolean allowedUpdateMOAddress() {
        return true;
    }

    protected int applyLocalCallCapabilities(ImsCallProfile imsCallProfile, int i) {
        int iApplyLocalCallCapabilities = super.applyLocalCallCapabilities(imsCallProfile, i);
        boolean zIsRttEnabledForCall = isRttEnabledForCall();
        Rlog.d(LOG_TAG, "applyLocalCallCapabilities: isRttEnabledForCall=" + zIsRttEnabledForCall + " mIsRttVideoSwitchSupported=" + this.mIsRttVideoSwitchSupported);
        return (!zIsRttEnabledForCall || this.mIsRttVideoSwitchSupported) ? iApplyLocalCallCapabilities : removeCapability(iApplyLocalCallCapabilities, 4);
    }

    protected int applyVideoRingtoneCapabilities(ImsCallProfile imsCallProfile, int i) {
        int iRemoveCapability;
        int i2 = imsCallProfile.mMediaProfile.mVideoDirection;
        if (i2 < 0) {
            return removeCapability(removeCapability(i, 128), 64);
        }
        if ((i2 & 2) == 2) {
            Rlog.d(LOG_TAG, "Add video ringtone capability");
            iRemoveCapability = addCapability(i, 128);
        } else {
            Rlog.d(LOG_TAG, "Remove video ringtone capability");
            iRemoveCapability = removeCapability(i, 128);
        }
        if ((i2 & 1) == 1) {
            Rlog.d(LOG_TAG, "Add audio ringtone capability");
            return addCapability(iRemoveCapability, 64);
        }
        Rlog.d(LOG_TAG, "Remove audio ringtone capability");
        return removeCapability(iRemoveCapability, 64);
    }

    protected int calNumberPresentation(ImsCallProfile imsCallProfile) {
        int iOIRToPresentation = ImsCallProfile.OIRToPresentation(imsCallProfile.getCallExtraInt("oir"));
        if (this.mIsIncoming) {
            return iOIRToPresentation;
        }
        return 1;
    }

    int getCallId() {
        ImsCall imsCall = getImsCall();
        if (imsCall == null || imsCall.getCallSession() == null) {
            return -1;
        }
        String callId = imsCall.getCallSession().getCallId();
        if (callId != null) {
            return Integer.parseInt(callId);
        }
        Rlog.d(LOG_TAG, "Abnormal! Call Id = null");
        return -1;
    }

    int getCallIdBeforeDisconnected() {
        return this.mCallIdBeforeDisconnected;
    }

    public String getConferenceParticipantAddress(int i) {
        List<ConferenceParticipant> list = this.mConferenceParticipants;
        if (list == null) {
            Rlog.d(LOG_TAG, "getConferenceParticipantAddress(): no XML information");
            return "";
        }
        if (i < 0 || i >= list.size()) {
            Rlog.d(LOG_TAG, "getConferenceParticipantAddress(): invalid index: " + i);
            return "";
        }
        ConferenceParticipant conferenceParticipant = this.mConferenceParticipants.get(i);
        if (conferenceParticipant == null) {
            Rlog.d(LOG_TAG, "getConferenceParticipantAddress(): empty participant info");
            return "";
        }
        Uri handle = conferenceParticipant.getHandle();
        StringBuilder sb = new StringBuilder();
        sb.append("getConferenceParticipantAddress(): ret=");
        sb.append(MtkImsPhoneCallTracker.sensitiveEncode("" + handle));
        Rlog.d(LOG_TAG, sb.toString());
        return handle.toString();
    }

    String getParentCallName() {
        if (this.mOwner == null) {
            return "Unknown";
        }
        if (this.mParent == this.mOwner.mForegroundCall) {
            return "Foreground Call";
        }
        if (this.mParent == this.mOwner.mBackgroundCall) {
            return "Background Call";
        }
        if (this.mParent == this.mOwner.mRingingCall) {
            return "Ringing Call";
        }
        return this.mParent == this.mOwner.mHandoverCall ? "Handover Call" : "Abnormal";
    }

    public void hangup() throws CallStateException {
        if (this.mOwner != null && (this.mOwner instanceof MtkImsPhoneCallTracker)) {
            ((MtkImsPhoneCallTracker) this.mOwner).logDebugMessagesWithOpFormat("CC", "Hangup", this, "MtkImsphoneConnection.hangup");
        }
        super.hangup();
    }

    public boolean isConfHostBeforeHandover() {
        return this.mWasPreMultipartyHost;
    }

    public boolean isIncomingCallDuringRttEmcGuard() {
        Rlog.d(LOG_TAG, "isIncomingCallDuringRttEmcGuard: " + this.mIsIncomingCallDuringRttEmcGuard);
        return this.mIsIncomingCallDuringRttEmcGuard;
    }

    public synchronized boolean isIncomingCallGwsd() {
        Rlog.d(LOG_TAG, "isIncomingCallGwsd: " + this.mIsIncomingCallGwsd);
        return this.mIsIncomingCallGwsd;
    }

    public synchronized boolean isIncomingCallMultiparty() {
        return this.mImsCall != null && (this.mImsCall instanceof MtkImsCall) && this.mImsCall.isIncomingCallMultiparty();
    }

    public boolean isMultipartyBeforeHandover() {
        return this.mWasMultiparty;
    }

    protected boolean needUpdateAddress(String str) {
        if (equalsBaseDialString(this.mAddress, str)) {
            return false;
        }
        Rlog.d(LOG_TAG, "update address = " + MtkImsPhoneCallTracker.sensitiveEncode(str) + " isMpty = " + isMultiparty());
        return !TextUtils.isEmpty(str);
    }

    public void notifyConferenceConnectionsConfigured(ArrayList<Connection> arrayList) {
        for (MtkListenerBase mtkListenerBase : this.mListeners) {
            if (mtkListenerBase instanceof MtkListenerBase) {
                mtkListenerBase.onConferenceConnectionsConfigured(arrayList);
            }
        }
    }

    void notifyConferenceParticipantsInvited(boolean z) {
        for (MtkListenerBase mtkListenerBase : this.mListeners) {
            if (mtkListenerBase instanceof MtkListenerBase) {
                mtkListenerBase.onConferenceParticipantsInvited(z);
            }
        }
    }

    public void notifyRedialEcc(boolean z) {
        for (MtkListenerBase mtkListenerBase : this.mListeners) {
            if (mtkListenerBase instanceof MtkListenerBase) {
                mtkListenerBase.onRedialEcc(z);
            }
        }
    }

    public boolean onDisconnect() {
        if (!this.mDisconnected) {
            this.mCallIdBeforeDisconnected = getCallId();
        }
        return super.onDisconnect();
    }

    public void onDisconnectConferenceParticipant(Uri uri) {
        if (this.mOwner != null && (this.mOwner instanceof MtkImsPhoneCallTracker)) {
            MtkImsPhoneCallTracker mtkImsPhoneCallTracker = (MtkImsPhoneCallTracker) this.mOwner;
            StringBuilder sb = new StringBuilder();
            sb.append(" remove: ");
            sb.append(MtkImsPhoneCallTracker.sensitiveEncode("" + uri));
            mtkImsPhoneCallTracker.logDebugMessagesWithOpFormat("CC", "RemoveMember", this, sb.toString());
        }
        super.onDisconnectConferenceParticipant(uri);
    }

    public void setIncomingCallDuringRttEmcGuard(boolean z) {
        this.mIsIncomingCallDuringRttEmcGuard = z;
        Rlog.d(LOG_TAG, "setIncomingCallDuringRttEmcGuard: " + this.mIsIncomingCallDuringRttEmcGuard);
    }

    protected boolean skipSwitchingCallToForeground() {
        if (this.mParent == this.mOwner.mHandoverCall) {
            return true;
        }
        Rlog.d(LOG_TAG, "update() - Switch Connection to foreground call:" + this);
        return false;
    }

    protected void switchCallToBackgroundIfNecessary() {
        if (this.mParent == this.mOwner.mForegroundCall) {
            Rlog.d(LOG_TAG, "update() - Switch Connection to background call:" + this);
            this.mParent.detach(this);
            this.mParent = this.mOwner.mBackgroundCall;
            this.mParent.attach(this);
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(super.toString());
        sb.append(" state:" + getState());
        sb.append(" mParent:");
        sb.append(getParentCallName());
        return sb.toString();
    }

    public boolean updateAddressDisplay(ImsCall imsCall) {
        boolean zUpdateAddressDisplay = super.updateAddressDisplay(imsCall);
        if (zUpdateAddressDisplay) {
            setConnectionAddressDisplay();
        }
        return zUpdateAddressDisplay;
    }

    public void updateConferenceParticipants(List<ConferenceParticipant> list) {
        this.mConferenceParticipants = list;
        removeHostAddress();
        super.updateConferenceParticipants(list);
    }

    public boolean updateMediaCapabilities(ImsCall imsCall) {
        boolean zUpdateMediaCapabilities = super.updateMediaCapabilities(imsCall);
        if (zUpdateMediaCapabilities) {
            Rlog.d(LOG_TAG, "updateMediaCapabilities capabilities = " + getConnectionCapabilities());
        }
        return zUpdateMediaCapabilities;
    }
}

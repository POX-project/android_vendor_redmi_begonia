package com.mediatek.ims;

import android.net.Uri;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallProfile;
import android.text.TextUtils;
import android.util.SparseArray;
import com.mediatek.ims.internal.ImsXuiManager;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class ImsServiceCallTracker {
    private static final int CALL_MSG_TYPE_ACTIVE = 132;
    private static final int CALL_MSG_TYPE_ALERT = 2;
    private static final int CALL_MSG_TYPE_DISCONNECTED = 133;
    private static final int CALL_MSG_TYPE_HELD = 131;
    private static final int CALL_MSG_TYPE_ID_ASSIGN = 130;
    private static final int CALL_MSG_TYPE_MT = 0;
    private static final int IMS_VIDEO = 21;
    private static final int IMS_VIDEO_CONF = 23;
    private static final int IMS_VIDEO_CONF_PARTS = 25;
    private static final int IMS_VOICE = 20;
    private static final int IMS_VOICE_CONF = 22;
    private static final int IMS_VOICE_CONF_PARTS = 24;
    private static final int INVALID_CALL = -1;
    private static final String LOG_TAG = "ImsServiceCT";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final boolean TELDBG;
    private static SparseArray<ImsServiceCallTracker> mImsServiceCTs;
    private int mPhoneId;
    private boolean mEnableVolteForImsEcc = false;
    private ConcurrentHashMap<String, ImsCallInfo> mCallConnections = new ConcurrentHashMap<>();

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        mImsServiceCTs = new SparseArray<>();
    }

    private ImsServiceCallTracker(int i) {
        this.mPhoneId = i;
    }

    public static ImsServiceCallTracker getInstance(int i) {
        if (mImsServiceCTs.get(i) == null) {
            mImsServiceCTs.put(i, new ImsServiceCallTracker(i));
        }
        return mImsServiceCTs.get(i);
    }

    public static boolean isEccExistOnAnySlot() {
        for (int i = 0; i < mImsServiceCTs.size(); i++) {
            ImsServiceCallTracker imsServiceCallTrackerValueAt = mImsServiceCTs.valueAt(i);
            if (imsServiceCallTrackerValueAt != null && imsServiceCallTrackerValueAt.isEccExist()) {
                return true;
            }
        }
        return false;
    }

    private void logWithPhoneId(String str) {
        if (TELDBG) {
            Rlog.d(LOG_TAG, "[PhoneId = " + this.mPhoneId + "] " + str);
        }
    }

    public static String sensitiveEncode(String str) {
        return (!SENLOG || TELDBG) ? Rlog.pii(LOG_TAG, str) : "[hidden]";
    }

    public ImsCallInfo getCallInfo(ImsCallInfo.State state) {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            logWithPhoneId("getCallInfo(state) : callID: " + value.mCallId + " call num: " + sensitiveEncode(value.mCallNum) + " call State: " + value.mState);
            if (value.mState == state) {
                return value;
            }
        }
        return null;
    }

    public ImsCallInfo getCallInfo(String str) {
        ImsCallInfo imsCallInfo = this.mCallConnections.get(str);
        if (imsCallInfo != null) {
            logWithPhoneId("getCallInfo(callId) : callID: " + imsCallInfo.mCallId + " call num: " + sensitiveEncode(imsCallInfo.mCallNum) + " call State: " + imsCallInfo.mState);
        } else {
            logWithPhoneId("getCallInfo(callId) : callID: " + str + " is null");
        }
        return imsCallInfo;
    }

    public ImsCallSessionProxy getConferenceHostCall() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (value.mIsConferenceHost) {
                return value.mCallSession;
            }
        }
        return null;
    }

    public int getCurrentCallCount() {
        ConcurrentHashMap<String, ImsCallInfo> concurrentHashMap = this.mCallConnections;
        if (concurrentHashMap == null) {
            return 0;
        }
        return concurrentHashMap.size();
    }

    public boolean getEnableVolteForImsEcc() {
        return this.mEnableVolteForImsEcc;
    }

    public ImsCallSessionProxy getFgCall() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (ImsCallInfo.State.ACTIVE == value.mState) {
                return value.mCallSession;
            }
        }
        return null;
    }

    public int getParticipantCallId(String str) {
        int i = -1;
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (str.equals(value.mCallNum)) {
                i = Integer.parseInt(value.mCallId);
                break;
            }
        }
        logWithPhoneId("getParticipantCallId() : participantCallId = " + i);
        return i;
    }

    public ArrayList<String> getSelfAddressList() {
        Uri[] selfIdentifyUri = ImsXuiManager.getInstance().getSelfIdentifyUri(this.mPhoneId);
        if (selfIdentifyUri == null) {
            return null;
        }
        ArrayList<String> arrayList = new ArrayList<>();
        for (Uri uri : selfIdentifyUri) {
            String[] strArrSplit = uri.getSchemeSpecificPart().split("[@;:]");
            if (strArrSplit.length != 0) {
                logWithPhoneId("isSelfAddress() selfId: " + sensitiveEncode(strArrSplit[0]));
                arrayList.add(strArrSplit[0]);
            }
        }
        return arrayList;
    }

    public boolean isConferenceCall(int i) {
        return 22 == i || 24 == i || 23 == i || 25 == i;
    }

    public boolean isConferenceCallExist() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (value.mIsConference || value.mIsConferenceHost) {
                if (isInCall(value)) {
                    return true;
                }
            }
        }
        return false;
    }

    public boolean isConferenceCallHost(int i) {
        return 22 == i || 23 == i;
    }

    public boolean isConferenceHostCallExist() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (value.mIsConferenceHost && isInCall(value)) {
                return true;
            }
        }
        return false;
    }

    public boolean isEccExist() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (value.mIsEcc && isInCall(value)) {
                return true;
            }
        }
        return false;
    }

    public boolean isInCall() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (ImsCallInfo.State.ACTIVE == value.mState || ImsCallInfo.State.HOLDING == value.mState) {
                return true;
            }
        }
        return false;
    }

    public boolean isInCall(ImsCallInfo imsCallInfo) {
        return ImsCallInfo.State.ACTIVE == imsCallInfo.mState || ImsCallInfo.State.HOLDING == imsCallInfo.mState;
    }

    public boolean isSelfAddress(String str) {
        Uri[] selfIdentifyUri = ImsXuiManager.getInstance().getSelfIdentifyUri(this.mPhoneId);
        if (selfIdentifyUri == null) {
            return false;
        }
        for (Uri uri : selfIdentifyUri) {
            String[] strArrSplit = uri.getSchemeSpecificPart().split("[@;:]");
            if (strArrSplit.length != 0) {
                logWithPhoneId("isSelfAddress() selfId: " + sensitiveEncode(strArrSplit[0]) + " addr: " + sensitiveEncode(str));
                if (PhoneNumberUtils.compareLoosely(str, strArrSplit[0])) {
                    return true;
                }
            }
        }
        return false;
    }

    public boolean isVideoCall(int i) {
        return 21 == i || 23 == i || 25 == i;
    }

    public boolean isVideoCallExist() {
        Iterator<Map.Entry<String, ImsCallInfo>> it = this.mCallConnections.entrySet().iterator();
        while (it.hasNext()) {
            ImsCallInfo value = it.next().getValue();
            if (value.mIsVideo && isInCall(value)) {
                return true;
            }
        }
        return false;
    }

    public boolean isVoiceCall(int i) {
        return 20 == i || 22 == i || 24 == i;
    }

    public void processCallInfoIndication(String[] strArr, ImsCallSessionProxy imsCallSessionProxy, ImsCallProfile imsCallProfile) {
        String str = strArr[0];
        int i = Integer.parseInt(strArr[1]);
        int i2 = TextUtils.isEmpty(strArr[5]) ? -1 : Integer.parseInt(strArr[5]);
        String str2 = strArr[6];
        boolean z = isConferenceCall(i2);
        boolean z2 = isConferenceCallHost(i2);
        boolean z3 = isVideoCall(i2);
        boolean z4 = imsCallProfile.getServiceType() == 2;
        if (i == 0) {
            boolean z5 = z4;
            boolean z6 = z3;
            logWithPhoneId("processCallInfoIndication() : CALL_MSG_TYPE_MT => callId = " + str + ", callMode = " + i2 + ", isConference = " + z + ", isConferenceHost = " + z2 + ", isVideo = " + z6 + ", isEcc = " + z5);
            this.mCallConnections.put(str, new ImsCallInfo(str, str2, z, z2, z6, z5, ImsCallInfo.State.INCOMING, imsCallSessionProxy));
        }
        if (i == 2) {
            boolean z7 = z3;
            logWithPhoneId("processCallInfoIndication() : CALL_MSG_TYPE_ALERT => callId = " + str + ", callMode = " + i2 + ", isConference = " + z + ", isConferenceHost = " + z2 + ", isVideo = " + z7 + ", isEcc = " + z4);
            ImsCallInfo imsCallInfo = this.mCallConnections.get(str);
            if (imsCallInfo == null) {
                return;
            }
            imsCallInfo.mIsConference = z;
            imsCallInfo.mIsConferenceHost = z2;
            imsCallInfo.mIsVideo = z7;
            this.mCallConnections.put(str, imsCallInfo);
            return;
        }
        switch (i) {
            case 130:
                logWithPhoneId("processCallInfoIndication() : CALL_MSG_TYPE_ID_ASSIGN => callId = " + str + ", callMode = " + i2 + ", isConference = " + z + ", isConferenceHost = " + z2 + ", isVideo = " + z3 + ", isEcc = " + z4);
                this.mCallConnections.put(str, new ImsCallInfo(str, str2, z, z2, z3, z4, ImsCallInfo.State.ALERTING, imsCallSessionProxy));
                break;
            case 131:
                logWithPhoneId("processCallInfoIndication() : CALL_MSG_TYPE_HELD => callId = " + str + ", callMode = " + i2 + ", isConference = " + z + ", isConferenceHost = " + z2 + ", isVideo = " + z3 + ", isEcc = " + z4);
                ImsCallInfo imsCallInfo2 = this.mCallConnections.get(str);
                if (imsCallInfo2 != null) {
                    imsCallInfo2.mState = ImsCallInfo.State.HOLDING;
                    imsCallInfo2.mIsConference = z;
                    imsCallInfo2.mIsConferenceHost = z2;
                    this.mCallConnections.put(str, imsCallInfo2);
                    break;
                }
                break;
            case 132:
                logWithPhoneId("processCallInfoIndication() : CALL_MSG_TYPE_ACTIVE => callId = " + str + ", callMode = " + i2 + ", isConference = " + z + ", isConferenceHost = " + z2 + ", isVideo = " + z3 + ", isEcc = " + z4);
                ImsCallInfo imsCallInfo3 = this.mCallConnections.get(str);
                if (imsCallInfo3 != null) {
                    imsCallInfo3.mState = ImsCallInfo.State.ACTIVE;
                    imsCallInfo3.mIsConference = z;
                    imsCallInfo3.mIsConferenceHost = z2;
                    imsCallInfo3.mIsVideo = z3;
                    this.mCallConnections.put(str, imsCallInfo3);
                    break;
                }
                break;
            case 133:
                logWithPhoneId("processCallInfoIndication() : CALL_MSG_TYPE_DISCONNECTED => callId = " + str + ", callMode = " + i2 + ", isConference = " + z + ", isConferenceHost = " + z2 + ", isVideo = " + z3 + ", isEcc = " + z4);
                ImsCallInfo imsCallInfo4 = this.mCallConnections.get(str);
                if (imsCallInfo4 != null) {
                    imsCallInfo4.mState = ImsCallInfo.State.DISCONNECTED;
                    imsCallInfo4.mIsConference = z;
                    imsCallInfo4.mIsConferenceHost = z2;
                    imsCallInfo4.mIsVideo = z3;
                    this.mCallConnections.put(str, imsCallInfo4);
                    break;
                }
                break;
            default:
                break;
        }
    }

    public void processCallModeChangeIndication(String[] strArr) {
        int i = -1;
        if (strArr == null) {
            return;
        }
        String str = strArr[0];
        if (strArr[1] != null && !strArr[1].equals("")) {
            i = Integer.parseInt(strArr[1]);
        }
        logWithPhoneId("processCallModeChangeIndication() :callId = " + str + ", callMode = " + i);
        ImsCallInfo imsCallInfo = this.mCallConnections.get(str);
        if (imsCallInfo == null) {
            return;
        }
        imsCallInfo.mIsVideo = isVideoCall(i);
        this.mCallConnections.put(str, imsCallInfo);
    }

    public void removeCallConnection(String str, ImsCallSessionProxy imsCallSessionProxy) {
        ImsCallInfo imsCallInfo;
        if (str == null || (imsCallInfo = this.mCallConnections.get(str)) == null || imsCallInfo.mCallSession != imsCallSessionProxy) {
            return;
        }
        this.mCallConnections.remove(str);
    }

    public void setEnableVolteForImsEcc(boolean z) {
        this.mEnableVolteForImsEcc = z;
    }
}

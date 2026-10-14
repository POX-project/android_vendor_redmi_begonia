package com.mediatek.ims;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.ims.ImsConferenceState;
import android.text.TextUtils;
import androidx.core.app.NotificationCompat;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.mediatek.ims.internal.ConferenceCallMessageHandler;
import java.io.ByteArrayInputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;

/* JADX INFO: loaded from: classes.dex */
public class ImsConferenceHandler extends DefaultConferenceHandler {
    private static final String ANONYMOUS_URI = "sip:anonymous@anonymous.invalid";
    private static final int CEP_TIMEOUT = 5000;
    private static final int CONFERENCE_STATE_ACTIVE = 1;
    private static final int CONFERENCE_STATE_CLOSED = 0;
    private static final String CONF_HOST = "host";
    private static final boolean DBG = true;
    private static final int EVENT_CLOSE_CONFERENCE = 1;
    private static final int EVENT_HANDLE_CACHED_CONFERENCE_DATA = 2;
    private static final int EVENT_TRY_UPDATE_WITH_LOCAL_CACHE = 0;
    private static final String LOG_TAG = "ImsConferenceHandler";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final boolean TELDBG;
    private static final String USER_ENTITY = "user-entity";
    private static final boolean VDBG = false;
    private static DefaultConferenceHandler mConfHdler;
    private static DefaultConferenceHandler.Listener mListener;
    private String mAddingParticipant;
    private Context mContext;
    private String mLatestRemovedParticipant;
    private String mRemovingParticipant;
    private LinkedHashMap mConfParticipants = new LinkedHashMap();
    private List<Bundle> mUnknowParticipants = new ArrayList();
    private ArrayList<String> mLocalParticipants = new ArrayList<>();
    private int mConfCallId = -1;
    private int mCepVersion = -1;
    private int mPhoneId = -1;
    private int mConfState = 0;
    private boolean mIsFirstCep = DBG;
    private String mHostAddr = null;
    private String mCachedConferenceData = null;
    private boolean mIsCepNotified = false;
    private boolean mRestoreParticipantsAddr = DBG;
    private boolean mRemoveParticipantsByUserEntity = false;
    private boolean mHaveUpdateConferenceWithMember = false;
    private boolean mSupportConferenceManagement = DBG;
    private LinkedHashMap mConfParticipantsAddr = new LinkedHashMap();
    private LinkedHashMap mFirstMergeParticipants = new LinkedHashMap();
    private Handler mHandler = new Handler() { // from class: com.mediatek.ims.ImsConferenceHandler.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Rlog.d(ImsConferenceHandler.LOG_TAG, "handleMessage: " + message.what);
            int i = message.what;
            if (i == 0) {
                if (ImsConferenceHandler.this.mIsCepNotified) {
                    Rlog.d(ImsConferenceHandler.LOG_TAG, "CEP is notified, no need to update with local cache");
                    return;
                } else {
                    ImsConferenceHandler.this.updateConferenceStateWithLocalCache();
                    return;
                }
            }
            if (i == 1) {
                ImsConferenceHandler.this.closeConferenceInternal(message.arg1);
            } else if (i == 2 && ImsConferenceHandler.this.mCachedConferenceData != null) {
                ImsConferenceHandler imsConferenceHandler = ImsConferenceHandler.this;
                imsConferenceHandler.handleImsConfCallMessage(imsConferenceHandler.mCachedConferenceData.length(), ImsConferenceHandler.this.mCachedConferenceData);
                ImsConferenceHandler.this.mCachedConferenceData = null;
            }
        }
    };
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.ImsConferenceHandler.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Rlog.d(ImsConferenceHandler.LOG_TAG, "received broadcast " + action);
            if (!ImsConstants.ACTION_IMS_CONFERENCE_CALL_INDICATION.equals(action)) {
                Rlog.e(ImsConferenceHandler.LOG_TAG, "can't handle conference message since no call ID. Abnormal Case");
                return;
            }
            String stringExtra = intent.getStringExtra(ImsConstants.EXTRA_MESSAGE_CONTENT);
            if (intent.getIntExtra(ImsConstants.EXTRA_CALL_ID, 0) == 255 || stringExtra == null || stringExtra.equals("")) {
                return;
            }
            ImsConferenceHandler.this.mIsCepNotified = ImsConferenceHandler.DBG;
            if (ImsConferenceHandler.this.mAddingParticipant == null && ImsConferenceHandler.this.mRemovingParticipant == null) {
                ImsConferenceHandler.this.handleImsConfCallMessage(stringExtra.length(), stringExtra);
            } else {
                ImsConferenceHandler.this.mCachedConferenceData = stringExtra;
            }
        }
    };

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    private ImsConferenceHandler() {
        Rlog.d(LOG_TAG, "ImsConferenceHandler()");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void closeConferenceInternal(int i) {
        Rlog.d(LOG_TAG, "closeConferenceInternal()");
        this.mConfState = 0;
        mListener = null;
        Context context = this.mContext;
        if (context != null) {
            LocalBroadcastManager.getInstance(context).unregisterReceiver(this.mBroadcastReceiver);
            this.mContext = null;
        }
        this.mLocalParticipants.clear();
        this.mAddingParticipant = null;
        this.mRemovingParticipant = null;
        this.mConfCallId = -1;
        this.mCepVersion = -1;
        this.mPhoneId = -1;
        this.mHostAddr = null;
        this.mConfParticipants.clear();
        this.mConfParticipantsAddr.clear();
        this.mFirstMergeParticipants.clear();
        this.mUnknowParticipants.clear();
        this.mIsCepNotified = false;
        this.mHandler.removeMessages(0);
        this.mLatestRemovedParticipant = null;
        this.mHaveUpdateConferenceWithMember = false;
        this.mCachedConferenceData = null;
    }

    private Bundle createFakeInfo(String str) {
        Bundle bundle = new Bundle();
        bundle.putString("user", str);
        bundle.putString("display-text", str);
        bundle.putString("endpoint", str);
        bundle.putString(NotificationCompat.CATEGORY_STATUS, ConferenceCallMessageHandler.STATUS_CONNECTED);
        return bundle;
    }

    private void fullUpdateParticipants(List<ConferenceCallMessageHandler.User> list) {
        Rlog.d(LOG_TAG, "reset all users as participants");
        this.mUnknowParticipants.clear();
        this.mConfParticipants.clear();
        for (ConferenceCallMessageHandler.User user : list) {
            String entity = user.getEntity();
            String userNameFromSipTelUriString = getUserNameFromSipTelUriString(entity);
            Bundle bundlePackUserInfo = packUserInfo(user);
            Rlog.d(LOG_TAG, "handle user: " + sensitiveEncode(entity) + " addr: " + sensitiveEncode(userNameFromSipTelUriString));
            if (userNameFromSipTelUriString == null || userNameFromSipTelUriString.trim().length() == 0) {
                this.mUnknowParticipants.add(bundlePackUserInfo);
                Rlog.d(LOG_TAG, "add unknow participants");
            } else {
                this.mConfParticipants.put(userNameFromSipTelUriString, bundlePackUserInfo);
            }
        }
    }

    public static DefaultConferenceHandler getInstance() {
        if (mConfHdler == null) {
            if (ImsCommonUtil.supportMdAutoSetupIms()) {
                mConfHdler = new DefaultConferenceHandler();
            } else {
                mConfHdler = new ImsConferenceHandler();
            }
        }
        return mConfHdler;
    }

    private String getPairedAddressFromCache(String str) {
        for (String str2 : this.mLocalParticipants) {
            if (PhoneNumberUtils.compareLoosely(str, str2)) {
                Rlog.d(LOG_TAG, "getPairedAddressFromCache: " + sensitiveEncode(str2));
                this.mConfParticipantsAddr.put(str2, str);
                return str2;
            }
        }
        String str3 = this.mLatestRemovedParticipant;
        if (str3 == null || !PhoneNumberUtils.compareLoosely(str, str3)) {
            return str;
        }
        Rlog.d(LOG_TAG, "getPairedAddressFromLatestRemoved: " + sensitiveEncode(this.mLatestRemovedParticipant));
        return this.mLatestRemovedParticipant;
    }

    private String getUserNameFromSipTelUriString(String str) {
        String schemeSpecificPart;
        String usernameFromUriNumber;
        if (str == null || (schemeSpecificPart = Uri.parse(str).getSchemeSpecificPart()) == null || (usernameFromUriNumber = PhoneNumberUtils.getUsernameFromUriNumber(schemeSpecificPart)) == null) {
            return null;
        }
        int iIndexOf = usernameFromUriNumber.indexOf(59);
        int iIndexOf2 = usernameFromUriNumber.indexOf(44);
        if (iIndexOf >= 0 && iIndexOf2 >= 0) {
            return usernameFromUriNumber.substring(0, Math.min(iIndexOf, iIndexOf2));
        }
        if (iIndexOf >= 0) {
            return usernameFromUriNumber.substring(0, iIndexOf);
        }
        return iIndexOf2 >= 0 ? usernameFromUriNumber.substring(0, iIndexOf2) : usernameFromUriNumber;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleImsConfCallMessage(int i, String str) {
        if (this.mConfCallId == -1) {
            Rlog.e(LOG_TAG, "ImsConference is closed");
            return;
        }
        if (str == null || str.equals("")) {
            Rlog.e(LOG_TAG, "Failed to handleImsConfCallMessage due to data is empty");
            return;
        }
        Rlog.d(LOG_TAG, "handleVoLteConfCallMessage, data length = " + str.length());
        ConferenceCallMessageHandler xmlPackage = parseXmlPackage(i, str);
        if (xmlPackage == null) {
            Rlog.e(LOG_TAG, "can't create xmlData object, update conf state with local cache");
            updateConferenceStateWithLocalCache();
            return;
        }
        if (this.mHostAddr == null) {
            this.mHostAddr = getUserNameFromSipTelUriString(xmlPackage.getHostInfo());
        }
        int cEPState = xmlPackage.getCEPState();
        boolean z = cEPState == 2;
        Rlog.d(LOG_TAG, "isPartialCEP: " + z);
        int version = xmlPackage.getVersion();
        if (!z) {
            int i2 = this.mCepVersion;
            if (i2 > version && i2 != -1) {
                Rlog.e(LOG_TAG, "version is less than local version" + this.mCepVersion + "," + version);
                return;
            }
            this.mCepVersion = version;
        }
        List<ConferenceCallMessageHandler.User> users = xmlPackage.getUsers();
        int userCount = xmlPackage.getUserCount();
        if (cEPState == 1) {
            fullUpdateParticipants(users);
        } else if (cEPState == 2) {
            partialUpdateParticipants(users);
        } else if (userCount == -1 || userCount == users.size()) {
            fullUpdateParticipants(users);
        } else {
            partialUpdateParticipants(users);
        }
        if (isEmptyConference() && shouldAutoTerminateConf() && !this.mIsFirstCep && this.mHaveUpdateConferenceWithMember) {
            Rlog.d(LOG_TAG, "no participants, terminate the conference");
            DefaultConferenceHandler.Listener listener = mListener;
            if (listener != null) {
                listener.onAutoTerminate();
            }
        }
        if (this.mRestoreParticipantsAddr) {
            restoreParticipantsAddressByLocalCache();
        }
        notifyConfStateUpdate();
        updateLocalCache();
        this.mIsFirstCep = false;
    }

    private boolean isEmptyConference() {
        int size = this.mUnknowParticipants.size();
        for (Map.Entry entry : this.mConfParticipants.entrySet()) {
            String str = (String) entry.getKey();
            if (!((Bundle) entry.getValue()).getString(NotificationCompat.CATEGORY_STATUS).equals(ConferenceCallMessageHandler.STATUS_DISCONNECTED) && !isSelfAddress(str)) {
                size++;
            }
        }
        if (size == 0) {
            return DBG;
        }
        if (this.mHaveUpdateConferenceWithMember) {
            return false;
        }
        Rlog.d(LOG_TAG, "Set mHaveUpdateConferenceWithMember = true");
        this.mHaveUpdateConferenceWithMember = DBG;
        return false;
    }

    private boolean isSelfAddress(String str) {
        if (!PhoneNumberUtils.compareLoosely(this.mHostAddr, str)) {
            return ImsServiceCallTracker.getInstance(this.mPhoneId).isSelfAddress(str);
        }
        Rlog.d(LOG_TAG, "isSelfAddress(): true, meet host info in xml");
        return DBG;
    }

    private String normalizeNumberFromCLIR(String str) {
        return str.replace("*31#", "").replace("#31#", "");
    }

    private void notifyConfStateUpdate() {
        Rlog.d(LOG_TAG, "notifyConfStateUpdate()");
        ImsConferenceState imsConferenceState = new ImsConferenceState();
        for (Map.Entry entry : this.mConfParticipants.entrySet()) {
            imsConferenceState.mParticipants.put((String) entry.getKey(), (Bundle) entry.getValue());
            Rlog.d(LOG_TAG, "submit participants: " + sensitiveEncode((String) entry.getKey()));
        }
        int i = 0;
        Iterator<Bundle> it = this.mUnknowParticipants.iterator();
        while (it.hasNext()) {
            imsConferenceState.mParticipants.put(Integer.toString(i), it.next());
            Rlog.d(LOG_TAG, "submit unknow participants: " + sensitiveEncode(Integer.toString(i)));
            i++;
        }
        DefaultConferenceHandler.Listener listener = mListener;
        if (listener != null) {
            listener.onParticipantsUpdate(imsConferenceState);
        }
    }

    private Bundle packUserInfo(ConferenceCallMessageHandler.User user) {
        String entity = user.getEntity();
        String userNameFromSipTelUriString = getUserNameFromSipTelUriString(entity);
        Bundle bundle = new Bundle();
        bundle.putString("user", userNameFromSipTelUriString);
        bundle.putString("display-text", user.getDisplayText());
        bundle.putString("endpoint", user.getEndPoint());
        bundle.putString(NotificationCompat.CATEGORY_STATUS, user.getStatus());
        bundle.putString(USER_ENTITY, entity);
        return bundle;
    }

    private ConferenceCallMessageHandler parseXmlPackage(int i, String str) {
        try {
            ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(str.getBytes(StandardCharsets.UTF_8));
            SAXParser sAXParserNewSAXParser = SAXParserFactory.newInstance().newSAXParser();
            ConferenceCallMessageHandler conferenceCallMessageHandler = new ConferenceCallMessageHandler();
            sAXParserNewSAXParser.parse(byteArrayInputStream, conferenceCallMessageHandler);
            return conferenceCallMessageHandler;
        } catch (Exception e) {
            Rlog.d(LOG_TAG, "Parsing exception: " + sensitiveEncode(e.toString()));
            updateConferenceStateWithLocalCache();
            return null;
        }
    }

    private void partialUpdateParticipants(List<ConferenceCallMessageHandler.User> list) {
        Rlog.d(LOG_TAG, "partial update participants");
        for (ConferenceCallMessageHandler.User user : list) {
            String entity = user.getEntity();
            String userNameFromSipTelUriString = getUserNameFromSipTelUriString(entity);
            if (this.mRestoreParticipantsAddr) {
                userNameFromSipTelUriString = getPairedAddressFromCache(userNameFromSipTelUriString);
            }
            Bundle bundlePackUserInfo = packUserInfo(user);
            Rlog.d(LOG_TAG, "handle user: " + sensitiveEncode(entity) + " addr: " + sensitiveEncode(userNameFromSipTelUriString));
            String status = user.getStatus();
            if (userNameFromSipTelUriString == null || userNameFromSipTelUriString.trim().length() == 0) {
                if (status.equals(ConferenceCallMessageHandler.STATUS_CONNECTED)) {
                    this.mUnknowParticipants.add(bundlePackUserInfo);
                    Rlog.d(LOG_TAG, "add unknow participants");
                } else if (status.equals(ConferenceCallMessageHandler.STATUS_DISCONNECTED) && this.mUnknowParticipants.size() > 0) {
                    List<Bundle> list2 = this.mUnknowParticipants;
                    list2.remove(list2.size() - 1);
                    Rlog.d(LOG_TAG, "remove unknow participants");
                }
            } else if (!status.equals(ConferenceCallMessageHandler.STATUS_DIALING_OUT)) {
                this.mConfParticipants.put(userNameFromSipTelUriString, bundlePackUserInfo);
            }
        }
    }

    private void restoreParticipantsAddressByLocalCache() {
        ArrayList arrayList = new ArrayList(this.mLocalParticipants);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Map.Entry entry : new LinkedHashMap(this.mConfParticipants).entrySet()) {
            String str = (String) entry.getKey();
            Bundle bundle = (Bundle) entry.getValue();
            String pairedAddressFromCache = getPairedAddressFromCache(str);
            if (isSelfAddress(str) || arrayList.remove(pairedAddressFromCache)) {
                bundle.putString("user", pairedAddressFromCache);
                this.mConfParticipants.put(str, bundle);
                Rlog.d(LOG_TAG, "restore participant: " + sensitiveEncode(str) + " to: " + sensitiveEncode(pairedAddressFromCache));
            } else {
                linkedHashMap.put(str, bundle);
                Rlog.d(LOG_TAG, "wait for restore: " + sensitiveEncode(pairedAddressFromCache));
            }
        }
        ArrayList<String> arrayList2 = new ArrayList<>(arrayList);
        int i = 0;
        for (Map.Entry entry2 : linkedHashMap.entrySet()) {
            if (arrayList.size() <= i) {
                Rlog.d(LOG_TAG, "No candidate to restore, size: " + arrayList.size() + ", index: " + i);
                break;
            }
            String str2 = (String) entry2.getKey();
            Bundle bundle2 = (Bundle) entry2.getValue();
            String str3 = (String) arrayList.get(i);
            if (arrayList2.size() > 0) {
                arrayList2.remove(0);
            }
            linkedHashMap = linkedHashMap;
            if (!bundle2.getString(NotificationCompat.CATEGORY_STATUS).equals(ConferenceCallMessageHandler.STATUS_DISCONNECTED)) {
                this.mConfParticipantsAddr.put(str3, str2);
                bundle2.putString("user", str3);
                this.mConfParticipants.put(str2, bundle2);
                Rlog.d(LOG_TAG, "restore participant: " + sensitiveEncode(str2) + " to: " + sensitiveEncode(str3));
                i++;
            }
        }
        restoreUnknowParticipants(arrayList2);
    }

    private void restoreUnknowParticipants(ArrayList<String> arrayList) {
        ArrayList arrayList2 = new ArrayList(this.mUnknowParticipants);
        int i = 0;
        for (Bundle bundle : this.mUnknowParticipants) {
            if (arrayList.size() <= i) {
                arrayList2.add(bundle);
            } else {
                String str = arrayList.get(i);
                bundle.putString("user", str);
                this.mConfParticipants.put(str, bundle);
                if (arrayList2.size() > 0) {
                    arrayList2.remove(0);
                }
                Rlog.d(LOG_TAG, "restore unknow participants(" + i + ") to: " + sensitiveEncode(str));
                i++;
            }
        }
        this.mUnknowParticipants = arrayList2;
    }

    private String sensitiveEncode(String str) {
        return ImsServiceCallTracker.sensitiveEncode(str);
    }

    private boolean shouldAutoTerminateConf() {
        Rlog.d(LOG_TAG, "shouldTerminate:" + DBG);
        return DBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateConferenceStateWithLocalCache() {
        Rlog.d(LOG_TAG, "updateConferenceStateWithLocalCache()");
        if (this.mLocalParticipants.size() == 0 && shouldAutoTerminateConf()) {
            DefaultConferenceHandler.Listener listener = mListener;
            if (listener != null) {
                listener.onAutoTerminate();
            }
            Rlog.d(LOG_TAG, "no participants");
            return;
        }
        ImsConferenceState imsConferenceState = new ImsConferenceState();
        for (String str : this.mLocalParticipants) {
            imsConferenceState.mParticipants.put(str, createFakeInfo(str));
            Rlog.d(LOG_TAG, "submit participants:  uri: " + sensitiveEncode(str));
        }
        DefaultConferenceHandler.Listener listener2 = mListener;
        if (listener2 != null) {
            listener2.onParticipantsUpdate(imsConferenceState);
        }
    }

    private void updateLocalCache() {
        Iterator it = this.mConfParticipants.entrySet().iterator();
        while (it.hasNext()) {
            Bundle bundle = (Bundle) ((Map.Entry) it.next()).getValue();
            String string = bundle.getString(NotificationCompat.CATEGORY_STATUS);
            String string2 = bundle.getString("user");
            if (string.equals(ConferenceCallMessageHandler.STATUS_DISCONNECTED)) {
                this.mLocalParticipants.remove(string2);
            }
        }
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void addFirstMergeParticipant(String str) {
        String str2 = (String) this.mFirstMergeParticipants.get(str);
        if (str2 != null) {
            Rlog.d(LOG_TAG, "addFirstMergeParticipant() callId: " + str + ", num: " + sensitiveEncode(str2));
            this.mLocalParticipants.add(str2);
        }
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void addLocalCache(String[] strArr) {
        if (strArr == null) {
            return;
        }
        this.mLocalParticipants.clear();
        for (String str : strArr) {
            this.mLocalParticipants.add(normalizeNumberFromCLIR(str));
        }
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void closeConference(String str) {
        Rlog.d(LOG_TAG, "closeConference() " + str);
        if (str == null || this.mConfCallId != Integer.parseInt(str)) {
            return;
        }
        Handler handler = this.mHandler;
        handler.sendMessage(handler.obtainMessage(1, Integer.parseInt(str), 0));
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void firstMerge(String str, String str2, String str3, String str4) {
        this.mLocalParticipants.clear();
        this.mFirstMergeParticipants.clear();
        this.mFirstMergeParticipants.put(str, normalizeNumberFromCLIR(str3));
        this.mFirstMergeParticipants.put(str2, normalizeNumberFromCLIR(str4));
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public String getConfParticipantUri(String str, boolean z) {
        String str2;
        if (this.mRestoreParticipantsAddr && this.mRemoveParticipantsByUserEntity != z && (str2 = (String) this.mConfParticipantsAddr.get(str)) != null) {
            Rlog.d(LOG_TAG, "removeParticipants confParticipantUri: " + sensitiveEncode(str2) + " addr: " + sensitiveEncode(str));
            str = str2;
        }
        Bundle bundle = (Bundle) this.mConfParticipants.get(str);
        if (bundle == null) {
            return (str == null || str.isEmpty()) ? ANONYMOUS_URI : str;
        }
        String string = bundle.getString(USER_ENTITY);
        if (string == null || !string.startsWith("sip:")) {
            string = str;
        }
        Rlog.d(LOG_TAG, "removeParticipants uri: " + sensitiveEncode(string) + " addr: " + sensitiveEncode(str));
        return string;
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public boolean isConferenceActive() {
        if (this.mConfState == 1) {
            return DBG;
        }
        return false;
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void modifyParticipantComplete() {
        boolean z = this.mAddingParticipant == null && this.mRemovingParticipant == null;
        String str = this.mAddingParticipant;
        if (str != null && (!this.mLocalParticipants.contains(str) || this.mAddingParticipant.isEmpty())) {
            this.mLocalParticipants.add(this.mAddingParticipant);
        }
        String str2 = this.mRemovingParticipant;
        if (str2 != null) {
            this.mLocalParticipants.remove(str2);
            this.mLatestRemovedParticipant = this.mRemovingParticipant;
        }
        this.mAddingParticipant = null;
        this.mRemovingParticipant = null;
        Iterator<String> it = this.mLocalParticipants.iterator();
        while (it.hasNext()) {
            Rlog.d(LOG_TAG, "modifyParticipantComplete: " + sensitiveEncode(it.next()));
        }
        if (this.mSupportConferenceManagement) {
            this.mHandler.sendEmptyMessageDelayed(0, 5000L);
        }
        if (this.mCachedConferenceData != null) {
            this.mHandler.sendEmptyMessage(2);
        }
        if (this.mIsCepNotified && z) {
            Rlog.d(LOG_TAG, "CEP is notify before merge complete, notify again");
            notifyConfStateUpdate();
        }
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void modifyParticipantFailed() {
        this.mAddingParticipant = null;
        this.mRemovingParticipant = null;
        this.mLatestRemovedParticipant = null;
        Iterator<String> it = this.mLocalParticipants.iterator();
        while (it.hasNext()) {
            Rlog.d(LOG_TAG, "modifyParticipantFailed: " + sensitiveEncode(it.next()));
        }
        if (this.mCachedConferenceData != null) {
            this.mHandler.sendEmptyMessage(2);
        }
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void startConference(Context context, DefaultConferenceHandler.Listener listener, String str, int i) {
        if (this.mContext != null) {
            Rlog.d(LOG_TAG, "startConference() failed, a conference is ongoing");
            return;
        }
        Rlog.d(LOG_TAG, "startConference()");
        mListener = listener;
        this.mContext = context;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ImsConstants.ACTION_IMS_CONFERENCE_CALL_INDICATION);
        LocalBroadcastManager.getInstance(this.mContext).registerReceiver(this.mBroadcastReceiver, intentFilter);
        this.mConfCallId = Integer.parseInt(str);
        this.mPhoneId = i;
        this.mIsFirstCep = DBG;
        this.mConfState = 1;
        this.mRemoveParticipantsByUserEntity = OperatorUtils.isMatched(OperatorUtils.OPID.OP132_Peru, this.mPhoneId);
        this.mSupportConferenceManagement = OperatorUtils.isMatched(OperatorUtils.OPID.OP151, this.mPhoneId);
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void tryAddParticipant(String str) {
        this.mAddingParticipant = normalizeNumberFromCLIR(str);
    }

    @Override // com.mediatek.ims.DefaultConferenceHandler
    public void tryRemoveParticipant(String str) {
        this.mRemovingParticipant = normalizeNumberFromCLIR(str);
    }
}

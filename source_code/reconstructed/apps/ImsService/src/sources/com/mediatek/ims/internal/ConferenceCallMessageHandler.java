package com.mediatek.ims.internal;

import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import androidx.core.app.NotificationCompat;
import com.mediatek.ims.ImsServiceCallTracker;
import java.util.ArrayList;
import java.util.List;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;

/* JADX INFO: loaded from: classes.dex */
public class ConferenceCallMessageHandler extends DefaultHandler {
    public static final int CEP_STATE_FULL = 1;
    public static final int CEP_STATE_PARTIAL = 2;
    public static final int CEP_STATE_UNKNOWN = 0;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    public static final String STATUS_ALERTING = "alerting";
    public static final String STATUS_CONNECTED = "connected";
    public static final String STATUS_CONNECT_FAIL = "connect-fail";
    public static final String STATUS_DIALING_IN = "dialing-in";
    public static final String STATUS_DIALING_OUT = "dialing-out";
    public static final String STATUS_DISCONNECTED = "disconnected";
    public static final String STATUS_DISCONNECTING = "disconnecting";
    public static final String STATUS_MUTED_VIA_FOCUS = "muted-via-focus";
    public static final String STATUS_ON_HOLD = "on-hold";
    public static final String STATUS_PENDING = "pending";
    private static final String TAG = "ConferenceCallMessageHandler";
    private static final boolean TELDBG;
    private String mHostInfo;
    private int mMaxUserCount;
    private String mTag;
    private String mTempVal;
    private User mUser;
    private List<User> mUsers;
    private int mCallId = -1;
    private int mIndex = 0;
    private int mUserCount = -1;
    private boolean mParsingHostInfo = false;
    private int mVersion = -1;
    private int mCEPState = 0;

    public class User {
        private String mDisplayText;
        private String mEndPoint;
        private String mEntity;
        private int mIndex;
        private String mSipTelUri;
        private String mStatus = ConferenceCallMessageHandler.STATUS_DISCONNECTED;
        private int mConnectionIndex = -1;

        public User() {
        }

        public int getConnectionIndex() {
            return this.mConnectionIndex;
        }

        public String getDisplayText() {
            return this.mDisplayText;
        }

        public String getEndPoint() {
            return this.mEndPoint;
        }

        public String getEntity() {
            return this.mEntity;
        }

        public int getIndex() {
            return this.mIndex;
        }

        public String getSipTelUri() {
            return this.mSipTelUri;
        }

        public String getStatus() {
            return this.mStatus;
        }

        public void setConnectionIndex(int i) {
            this.mConnectionIndex = i;
        }

        void setDisplayText(String str) {
            this.mDisplayText = str;
        }

        void setEndPoint(String str) {
            this.mEndPoint = str;
        }

        void setEntity(String str) {
            this.mEntity = str;
        }

        void setIndex(int i) {
            this.mIndex = i;
        }

        void setSipTelUri(String str) {
            this.mSipTelUri = str;
        }

        void setStatus(String str) {
            this.mStatus = str;
        }
    }

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    private String sensitiveEncode(String str) {
        return ImsServiceCallTracker.sensitiveEncode(str);
    }

    private void setMaxUserCount(String str) {
        this.mMaxUserCount = Integer.parseInt(str);
    }

    private void telLog(String str) {
        if (TELDBG) {
            Rlog.d(TAG, str);
        }
    }

    private int updateCEPState(String str) {
        if (str == null) {
            return 0;
        }
        if (str.equalsIgnoreCase("full")) {
            return 1;
        }
        return str.equalsIgnoreCase("partial") ? 2 : 0;
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void characters(char[] cArr, int i, int i2) throws SAXException {
        if (this.mTag == null) {
            Rlog.d(TAG, "Parse val failed: tag is null");
            return;
        }
        String str = new String(cArr, i, i2);
        telLog("Current tag: " + this.mTag + " val: " + sensitiveEncode(str));
        if (this.mTag.equalsIgnoreCase("maximum-user-count")) {
            setMaxUserCount(str);
        } else if (this.mTag.equalsIgnoreCase("user-count")) {
            this.mUserCount = Integer.parseInt(str);
        } else if (this.mParsingHostInfo && this.mTag.equalsIgnoreCase("uri")) {
            this.mHostInfo = str;
        }
        if (this.mUser == null) {
            Rlog.d(TAG, "Parse val failed: user is null");
        } else if (this.mTag.equalsIgnoreCase("display-text")) {
            this.mUser.setDisplayText(str);
        } else if (this.mTag.equalsIgnoreCase(NotificationCompat.CATEGORY_STATUS)) {
            this.mUser.setStatus(str);
        }
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void endElement(String str, String str2, String str3) throws SAXException {
        List<User> list;
        if (str3.equalsIgnoreCase("user") && (list = this.mUsers) != null) {
            list.add(this.mUser);
            this.mUser = null;
        } else if (str3.equalsIgnoreCase("host-info")) {
            this.mParsingHostInfo = false;
        }
        this.mTag = null;
    }

    public int getCEPState() {
        return this.mCEPState;
    }

    public int getCallId() {
        return this.mCallId;
    }

    public String getHostInfo() {
        return this.mHostInfo;
    }

    public int getMaxUserCount() {
        return this.mMaxUserCount;
    }

    public int getUserCount() {
        return this.mUserCount;
    }

    public List<User> getUsers() {
        return this.mUsers;
    }

    public int getVersion() {
        return this.mVersion;
    }

    public void setCallId(int i) {
        this.mCallId = i;
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void startDocument() throws SAXException {
        this.mUsers = new ArrayList();
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void startElement(String str, String str2, String str3, Attributes attributes) throws SAXException {
        if (str3.equalsIgnoreCase("user")) {
            this.mIndex++;
            User user = new User();
            this.mUser = user;
            user.setIndex(this.mIndex);
            this.mUser.setEntity(attributes.getValue("", "entity"));
            telLog("user - entity: " + sensitiveEncode(this.mUser.getEntity()));
        } else if (str3.equalsIgnoreCase("endpoint")) {
            this.mUser.setEndPoint(attributes.getValue("", "entity"));
            telLog("endpoint - entity: " + sensitiveEncode(this.mUser.getEndPoint()));
        } else if (str3.equalsIgnoreCase("endpoint")) {
            this.mUser.setEndPoint(attributes.getValue("", "entity"));
        } else if (str3.equalsIgnoreCase("host-info")) {
            this.mParsingHostInfo = true;
        } else if (str3.equalsIgnoreCase("conference-info")) {
            try {
                this.mVersion = Integer.valueOf(attributes.getValue("version")).intValue();
            } catch (NumberFormatException e) {
                e.printStackTrace();
            }
            telLog("version:" + this.mVersion);
            String value = attributes.getValue("state");
            this.mCEPState = updateCEPState(value);
            telLog("get CEP state: " + value);
        }
        this.mTag = str3;
    }
}

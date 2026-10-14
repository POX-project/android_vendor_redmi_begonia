package com.mediatek.internal.telephony.dataconnection;

import android.content.Context;
import android.content.Intent;
import android.net.ProxyInfo;
import android.net.Uri;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.data.ApnSetting;
import android.text.TextUtils;
import com.android.internal.telephony.DctConstants;
import com.android.internal.telephony.Phone;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import java.net.InetAddress;
import mediatek.telephony.data.MtkApnSetting;

/* JADX INFO: loaded from: classes.dex */
public class CpaDcTracker extends Handler {
    public static final String ABORT = "ABORT";
    public static final String CONNECTIVITY_ACTION = "com.kddi.android.cpa.CONNECTIVITY_CHANGE";
    public static final int CPA_DCT_STATE_APN_UPDATE = 1;
    public static final int CPA_DCT_STATE_CONNECTED = 5;
    public static final int CPA_DCT_STATE_CONNECTING = 4;
    public static final int CPA_DCT_STATE_DISCONNECTED = 3;
    public static final int CPA_DCT_STATE_DISCONNECTING = 2;
    public static final int CPA_DCT_STATE_LOST_NW = 6;
    public static final int CPA_DCT_STATE_NONE = 0;
    public static final int CPA_DCT_STATE_RETRYING = 7;
    public static final int CPA_DC_ALREADY_ACTIVE = 0;
    public static final int CPA_DC_DATA_SOCKET_DISABLED = 5;
    public static final int CPA_DC_REQUEST_FAILED = 3;
    public static final int CPA_DC_REQUEST_NOT_AVAILABLE = 4;
    public static final int CPA_DC_REQUEST_STARTED = 1;
    public static final int CPA_DC_TYPE_NOT_AVAILABLE = 2;
    private static final int CPA_NAVI_APN_ID = 99;
    public static final int CPA_RTN_AUTHENTICATION_ERROR = -3;
    public static final int CPA_RTN_PARAMTER_ERROR = -1;
    public static final int CPA_RTN_RADIO_NOT_AVAILABLE = -2;
    public static final int CPA_RTN_SUCCESS = 0;
    public static final int CPA_RTN_UNKNOWN_ERROR = -4;
    private static final boolean DBG = true;
    public static final String DEFAULT_MODE = "DEFAULT";
    public static final int EVENT_ALL_DC_DISCONNECTED = 2;
    public static final int EVENT_ALL_DC_DISCONNECTING = 1;
    public static final int EVENT_APN_UPDATE = 0;
    public static final int EVENT_CPA_DC_CONNECTED = 4;
    public static final int EVENT_CPA_DC_CONNECTING = 3;
    public static final int EVENT_CPA_DC_LOST_CONNECTION = 5;
    public static final int EVENT_CPA_DC_PROTOCOL_ERRORS = 7;
    public static final int EVENT_CPA_DC_RETRY = 6;
    public static final String EXTRA_CONNECTIVITY_STATUS = "connStatus";
    public static final String EXTRA_ERRNO = "errno";
    private static final String LOG_TAG = "CpaDct";
    public static final boolean MTK_CPA_SUPPORT = true;
    public static final String NAVI_MODE = "NAVI";
    public static final String NONE = "NONE";
    public static final int REQ_TO_DEFAULT = 1;
    public static final int REQ_TO_NAVI = 0;
    public static final int STATE_CONNECTED = 2;
    public static final int STATE_CONNECTING = 1;
    public static final int STATE_DISCONNECTED = 4;
    public static final int STATE_DISCONNECTING = 3;
    private static final boolean VDBG = SystemProperties.get("ro.build.type").equals("eng");
    private static CpaDcTracker sCpaDcTracker = null;
    private Context mContext;
    private MtkDcTracker mMtkDcTracker;
    protected Phone mPhone;
    protected int mPhoneId;
    private int mCurrentPhoneId = -1;
    private MtkApnSetting mCpaApnSetting = null;
    private String mCurrentCpaMode = DEFAULT_MODE;
    private String mRequestCpaMode = NONE;
    private int mCpaDctState = 0;
    public DctConstants.State mCpaConnectionStatus = DctConstants.State.IDLE;
    public CpaConnection mCpaConnInfo = null;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.dataconnection.CpaDcTracker$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$DctConstants$State;

        static {
            int[] iArr = new int[DctConstants.State.values().length];
            $SwitchMap$com$android$internal$telephony$DctConstants$State = iArr;
            try {
                iArr[DctConstants.State.IDLE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$DctConstants$State[DctConstants.State.FAILED.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$DctConstants$State[DctConstants.State.RETRYING.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$DctConstants$State[DctConstants.State.CONNECTING.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$DctConstants$State[DctConstants.State.CONNECTED.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$DctConstants$State[DctConstants.State.DISCONNECTING.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
        }
    }

    public enum CpaConnType {
        CPA_TYPE_NONE,
        CPA_TYPE_NAVI
    }

    public class CpaConnection {
        ApnSetting mCpaApn = null;
        CpaConnType mCpaConnType = CpaConnType.CPA_TYPE_NONE;
        InetAddress mLocalAddress = null;
        InetAddress[] mDnsAddresses = null;

        public CpaConnection() {
        }

        public ApnSetting getCpaApn() {
            return this.mCpaApn;
        }

        public CpaConnType getCpaConnectionType() {
            return this.mCpaConnType;
        }

        public InetAddress[] getDnsAddresses() {
            return this.mDnsAddresses;
        }

        public InetAddress getLocalAddress() {
            return this.mLocalAddress;
        }
    }

    protected CpaDcTracker(Context context, Phone phone) {
        this.mMtkDcTracker = null;
        this.mContext = context;
        this.mPhone = phone;
        this.mPhoneId = phone.getPhoneId();
        this.mMtkDcTracker = (MtkDcTracker) this.mPhone.getDcTracker(1);
    }

    private String converEventIdToString(int i) {
        if (i == 0) {
            return "EVENT_APN_UPDATE";
        }
        if (i == 1) {
            return "EVENT_ALL_DC_DISCONNECTING";
        }
        if (i == 2) {
            return "EVENT_ALL_DC_DISCONNECTED";
        }
        if (i == 3) {
            return "EVENT_CPA_DC_CONNECTING";
        }
        if (i == 4) {
            return "EVENT_CPA_DC_CONNECTED";
        }
        if (i == 5) {
            return "EVENT_CPA_DC_LOST_CONNECTION";
        }
        if (i == 7) {
            return "EVENT_CPA_DC_PROTOCOL_ERRORS";
        }
        return "unknown eventId:" + i;
    }

    private int converToCpaDcState(DctConstants.State state) {
        switch (AnonymousClass1.$SwitchMap$com$android$internal$telephony$DctConstants$State[state.ordinal()]) {
            case 1:
            case 2:
                return 4;
            case 3:
            case 4:
                return 1;
            case 5:
                return 2;
            case 6:
                return 3;
            default:
                return 4;
        }
    }

    private int converToCpaReturnCode(int i) {
        if (i != -5) {
            if (i == 0) {
                return 0;
            }
            if (i == 29) {
                return -3;
            }
            if (i != 65537) {
                return -4;
            }
        }
        return -2;
    }

    private MtkApnSetting createCpaApn(String str, String str2, String str3, int i, String str4, String str5) {
        int i2;
        String[] strArr = {"default", "mms", "supl", "dun", "hipri", "fota", "cbs", "ia"};
        String strMtkGetOperatorNumeric = this.mMtkDcTracker.mtkGetOperatorNumeric();
        try {
            i2 = Integer.parseInt(str5);
        } catch (NumberFormatException e) {
            loge("[CpaDct]proxyPort is a invalid format");
            i2 = 0;
        }
        int apnTypesBitmaskFromString = ApnSetting.getApnTypesBitmaskFromString(TextUtils.join(",", strArr));
        logd("[CpaDct]createCpaApn Cpa apnTypesBitmask=" + apnTypesBitmaskFromString);
        return new MtkApnSetting(CPA_NAVI_APN_ID, strMtkGetOperatorNumeric, "CPA", str != null ? str : "", str4 != null ? str4 : "", i2, (Uri) null, "", 0, str2 != null ? str2 : "", str3 != null ? str3 : "", i, apnTypesBitmaskFromString, 2, 0, true, 393215, 0, false, 0, 0, 0, 0, 0, "", 0, 0, 0, 0);
    }

    private void createCpaConnection(CpaConnType cpaConnType, ApnSetting apnSetting) {
        logd("[CpaDct]create mCpaConnInfo");
        CpaConnection cpaConnection = new CpaConnection();
        this.mCpaConnInfo = cpaConnection;
        cpaConnection.mCpaConnType = cpaConnType;
        this.mCpaConnInfo.mCpaApn = apnSetting;
    }

    public static CpaDcTracker getCpaDcTrackerInstance() {
        CpaDcTracker cpaDcTracker = sCpaDcTracker;
        if (cpaDcTracker != null) {
            return cpaDcTracker;
        }
        throw new RuntimeException("[CpaDct]Should not be called before makesCpaDcTracker");
    }

    protected static void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    protected static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    protected static void logi(String str) {
        Rlog.i(LOG_TAG, str);
    }

    protected static void logv(String str) {
        Rlog.v(LOG_TAG, str);
    }

    public static CpaDcTracker makeCpaDcTracker(Context context, Phone phone) {
        if (context == null || phone == null) {
            throw new RuntimeException("param is null");
        }
        if (sCpaDcTracker == null) {
            sCpaDcTracker = new CpaDcTracker(context, phone);
        }
        logd("[CpaDct]makeCpaDcTracker: X sCpaDcTracker=" + sCpaDcTracker);
        return sCpaDcTracker;
    }

    private void setCpaConnectionStatus(DctConstants.State state) {
        logd("[CpaDct]setCpaConnectionStatus() state=" + state);
        if ((this.mCurrentCpaMode.equals(DEFAULT_MODE) && this.mRequestCpaMode.equals(NONE)) || this.mCpaConnectionStatus == state) {
            return;
        }
        logd("[CpaDct]old mCpaConnectionStatus=" + this.mCpaConnectionStatus + " new mCpaConnectionStatus=" + state);
        this.mCpaConnectionStatus = state;
    }

    public int CpaChanged(String str, String str2, String str3, String str4, int i, String str5, String str6, String str7, String str8) {
        logd("[CpaDct]CpaChanged, mCurrentCpaMode=" + this.mCurrentCpaMode + " mRequestCpaMode=" + this.mRequestCpaMode + " request mode=" + str + " mCpaDctState=" + this.mCpaDctState);
        if (!this.mRequestCpaMode.equals(NONE)) {
            if (!this.mCurrentCpaMode.equals(str) && this.mRequestCpaMode.equals(str)) {
                logd("[CpaDct]switch procedure is on-gonig");
                return 1;
            }
            if (!this.mCurrentCpaMode.equals(str) || this.mRequestCpaMode.equals(str)) {
                loge("[CpaDct]Unhandled with this case!");
                return 3;
            }
            loge("[CpaDct]interrupt the switching procedure!");
            if (!str.equals(DEFAULT_MODE)) {
                return 3;
            }
            this.mRequestCpaMode = str;
            Message messageObtainMessage = obtainMessage(0);
            messageObtainMessage.arg1 = 1;
            sendMessage(messageObtainMessage);
            return 1;
        }
        if (this.mCurrentCpaMode.equals(str)) {
            logd("[CpaDct]cpa mode is not changed");
            return 0;
        }
        int i2 = this.mCpaDctState;
        if (i2 != 0 && i2 != 6 && i2 != 7) {
            loge("[CpaDct]Unhandled with mCpaDctState:" + this.mCpaDctState);
            return 3;
        }
        this.mRequestCpaMode = str;
        if (!str.equals(NAVI_MODE)) {
            if (!str.equals(DEFAULT_MODE)) {
                loge("[CpaDct]paramter error:" + str);
                return 3;
            }
            logd("[CpaDct]Cpa changed from " + this.mCurrentCpaMode + " to " + this.mRequestCpaMode);
            Message messageObtainMessage2 = obtainMessage(0);
            messageObtainMessage2.arg1 = 1;
            sendMessage(messageObtainMessage2);
            return 1;
        }
        logd("[CpaDct]Cpa changed from " + this.mCurrentCpaMode + " to " + this.mRequestCpaMode);
        if (!this.mPhone.isUserDataEnabled()) {
            logd("[CpaDct] mobile data off");
            return 2;
        }
        int currentDataConnectionState = this.mPhone.getServiceStateTracker().getCurrentDataConnectionState();
        if (currentDataConnectionState == 1 || currentDataConnectionState == 2) {
            logd("[CpaDct]radio not available");
            return 4;
        }
        MtkApnSetting mtkApnSettingCreateCpaApn = createCpaApn(str2, str3, str4, i, str7, str8);
        if (mtkApnSettingCreateCpaApn == null) {
            logd("[CpaDct]Cpa APN configuration error");
            return 2;
        }
        MtkApnSetting mtkApnSetting = this.mCpaApnSetting;
        if (mtkApnSetting == null || !mtkApnSetting.equals(mtkApnSettingCreateCpaApn)) {
            logd("[CpaDct]update new Cpa APN settings!");
            this.mCpaApnSetting = mtkApnSettingCreateCpaApn;
        }
        Message messageObtainMessage3 = obtainMessage(0);
        messageObtainMessage3.arg1 = 0;
        sendMessage(messageObtainMessage3);
        return 1;
    }

    public void clearCpaConnectionInfo(String str) {
        logd("[CpaDct]clearCpaConnectionInfo reson:" + str);
        this.mCpaConnInfo = null;
    }

    public void dispose() {
        logd("[CpaDct]CpaDcTracker.dispose");
        setCpaConnectionStatus(DctConstants.State.IDLE);
        notifyCpaStateChanged(this.mCpaConnectionStatus, -3);
    }

    public ApnSetting getCpaApn() {
        return this.mCpaConnInfo.getCpaApn();
    }

    public CpaConnection getCpaConnectionInfo() {
        logd("[CpaDct]getCpaConnectionInfo, mCurrentCpaMode=" + this.mCurrentCpaMode + " mRequestCpaMode=" + this.mRequestCpaMode + " mCpaDctState=" + this.mCpaDctState);
        CpaConnection cpaConnection = this.mCpaConnInfo;
        if (cpaConnection == null || cpaConnection.getCpaConnectionType() != CpaConnType.CPA_TYPE_NAVI) {
            return null;
        }
        return this.mCpaConnInfo;
    }

    public DctConstants.State getCpaConnectionStatus() {
        logd("[CpaDct]getCpaConnectionStatus() mCpaConnectionStatus=" + this.mCpaConnectionStatus);
        return this.mCpaConnectionStatus;
    }

    public int getCpaDctPhoneId() {
        return this.mPhoneId;
    }

    public int getCpaDctState() {
        return this.mCpaDctState;
    }

    public ProxyInfo getCpaProxyData() {
        logd("[CpaDct]getCpaProxyData, mCurrentCpaMode=" + this.mCurrentCpaMode + " mRequestCpaMode=" + this.mRequestCpaMode + " mCpaDctState=" + this.mCpaDctState);
        CpaConnection cpaConnection = this.mCpaConnInfo;
        if (cpaConnection == null) {
            loge("[CpaDct]getCpaProxyData, mCpaConnInfo is null");
            return null;
        }
        if (cpaConnection.mCpaApn.getProxyAddressAsString().isEmpty()) {
            return null;
        }
        return new ProxyInfo(this.mCpaConnInfo.mCpaApn.getProxyAddressAsString(), this.mCpaConnInfo.mCpaApn.getProxyPort(), "");
    }

    public String getCurrentCpaMode() {
        return this.mCurrentCpaMode;
    }

    public String getRequestCpaMode() {
        return this.mRequestCpaMode;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        logd("[CpaDct]handleMessage event=" + converEventIdToString(message.what));
        switch (message.what) {
            case 0:
                logd("[CpaDct] mode=" + message.arg1);
                this.mCpaDctState = 1;
                if (this.mRequestCpaMode.equals(NAVI_MODE)) {
                    this.mMtkDcTracker.updateApnListForCpaConnection(NAVI_MODE, this.mCpaApnSetting);
                    Message messageObtainMessage = obtainMessage(1);
                    messageObtainMessage.arg1 = 0;
                    sendMessage(messageObtainMessage);
                } else if (!this.mRequestCpaMode.equals(DEFAULT_MODE)) {
                    loge("[CpaDct]Unhandled mRequestCpaMode=" + this.mRequestCpaMode);
                } else {
                    this.mMtkDcTracker.updateApnListForCpaConnection(DEFAULT_MODE, null);
                    Message messageObtainMessage2 = obtainMessage(1);
                    messageObtainMessage2.arg1 = 1;
                    sendMessage(messageObtainMessage2);
                }
                break;
            case 1:
                logd("[CpaDct] mode=" + message.arg1);
                this.mCpaDctState = 2;
                this.mMtkDcTracker.registerForAllDataDisconnected(this, 2);
                if (this.mRequestCpaMode.equals(DEFAULT_MODE)) {
                    setCpaConnectionStatus(DctConstants.State.DISCONNECTING);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, 0);
                }
                this.mMtkDcTracker.cleanUpConnectionsOnCpaChanged(message.arg1, this);
                break;
            case 2:
                this.mCpaDctState = 3;
                this.mMtkDcTracker.unregisterForAllDataDisconnected(this);
                if (this.mRequestCpaMode.equals(DEFAULT_MODE)) {
                    setCpaConnectionStatus(DctConstants.State.IDLE);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, 0);
                    clearCpaConnectionInfo("connection disconnected");
                }
                sendMessage(obtainMessage(3));
                break;
            case 3:
                if (this.mRequestCpaMode.equals(NAVI_MODE)) {
                    this.mCpaDctState = 4;
                    createCpaConnection(CpaConnType.CPA_TYPE_NAVI, this.mCpaApnSetting);
                    setCpaConnectionStatus(DctConstants.State.CONNECTING);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, 0);
                    this.mMtkDcTracker.setupDataForCpaChange("apnChanged");
                } else if (!this.mRequestCpaMode.equals(DEFAULT_MODE)) {
                    loge("[CpaDct]Unhandled mRequestCpaMode: " + this.mRequestCpaMode);
                } else {
                    createCpaConnection(CpaConnType.CPA_TYPE_NONE, null);
                    this.mMtkDcTracker.setupDataForCpaChange("apnChanged");
                    this.mCurrentCpaMode = this.mRequestCpaMode;
                    this.mRequestCpaMode = NONE;
                    this.mCpaDctState = 0;
                }
                break;
            case 4:
                if (this.mRequestCpaMode.equals(NAVI_MODE) || this.mCpaDctState == 7) {
                    this.mCpaDctState = 5;
                    setCpaConnectionStatus(DctConstants.State.CONNECTED);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, 0);
                    this.mCurrentCpaMode = this.mRequestCpaMode;
                    this.mRequestCpaMode = NONE;
                    this.mCpaDctState = 0;
                } else {
                    logd("[CpaDct]Unhandled mRequestCpaMode: " + this.mRequestCpaMode);
                }
                break;
            case 5:
                if (this.mCurrentCpaMode.equals(NAVI_MODE) && this.mRequestCpaMode.equals(NONE)) {
                    logd("[CpaDct] network deact");
                    this.mCpaDctState = 6;
                    setCpaConnectionStatus(DctConstants.State.IDLE);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, 0);
                    break;
                }
                break;
            case 6:
                if (this.mCurrentCpaMode.equals(NAVI_MODE) && this.mRequestCpaMode.equals(NONE)) {
                    logd("[CpaDct] retry to setup CPA PDN");
                    this.mCpaDctState = 7;
                    setCpaConnectionStatus(DctConstants.State.CONNECTING);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, 0);
                    break;
                }
                break;
            case 7:
                logd("[CpaDct] protocol error");
                if ((this.mRequestCpaMode.equals(NAVI_MODE) && this.mCurrentCpaMode.equals(DEFAULT_MODE)) || (this.mCurrentCpaMode.equals(NAVI_MODE) && this.mRequestCpaMode.equals(NONE))) {
                    setCpaConnectionStatus(DctConstants.State.IDLE);
                    notifyCpaStateChanged(this.mCpaConnectionStatus, MtkGsmCdmaPhone.EVENT_UNSOL_RADIO_CAPABILITY_CHANGED);
                    clearCpaConnectionInfo("protocol error");
                    this.mCurrentCpaMode = NAVI_MODE;
                    this.mRequestCpaMode = DEFAULT_MODE;
                    Message messageObtainMessage3 = obtainMessage(0);
                    messageObtainMessage3.arg1 = 1;
                    sendMessage(messageObtainMessage3);
                    break;
                }
                break;
            default:
                loge("[CpaDct]Unhandled message with number: " + message.what);
                break;
        }
    }

    public boolean isCapApn(int i) {
        CpaConnection cpaConnection = this.mCpaConnInfo;
        if (cpaConnection == null) {
            logd("[CpaDct]isCapApn() mCpaConnInfo is null");
            return false;
        }
        if ((cpaConnection.getCpaApn().getApnTypeBitmask() & i) == i) {
            logd("[CpaDct]isCapApn() is true!");
            return true;
        }
        logd("[CpaDct]isCapApn() can't handle type,apnTypeBitmask=" + i);
        return false;
    }

    public boolean isCapApnCanHandleType(int i) {
        MtkApnSetting mtkApnSetting = this.mCpaApnSetting;
        if (mtkApnSetting == null) {
            logd("[CpaDct]isCapApnCanHandleType() mCpaApnSetting is null");
            return false;
        }
        int apnTypeBitmask = mtkApnSetting.getApnTypeBitmask();
        logd("[CpaDct]isCapApnCanHandleType() cap_ApnTypeBitmask=" + apnTypeBitmask + "apnTypeBitmask=" + i);
        if ((apnTypeBitmask & i) != i) {
            return false;
        }
        logd("[CpaDct]isCapApnCanHandleType() is true!");
        return true;
    }

    public void notifyCpaStateChanged(DctConstants.State state, int i) {
        if (this.mCurrentCpaMode.equals(DEFAULT_MODE) && this.mRequestCpaMode.equals(NONE)) {
            return;
        }
        logd("[CpaDct]onNotifyCpaStateChanged: state=" + state + " failCause=" + i);
        int iConverToCpaDcState = converToCpaDcState(state);
        int iConverToCpaReturnCode = converToCpaReturnCode(i);
        Intent intent = new Intent(CONNECTIVITY_ACTION);
        intent.putExtra(EXTRA_CONNECTIVITY_STATUS, iConverToCpaDcState);
        intent.putExtra(EXTRA_ERRNO, iConverToCpaReturnCode);
        this.mContext.sendBroadcast(intent);
    }

    public void setCpaConInfo(InetAddress inetAddress, InetAddress[] inetAddressArr) {
        CpaConnection cpaConnection = this.mCpaConnInfo;
        if (cpaConnection != null) {
            cpaConnection.mLocalAddress = inetAddress;
            this.mCpaConnInfo.mDnsAddresses = inetAddressArr;
        }
    }
}

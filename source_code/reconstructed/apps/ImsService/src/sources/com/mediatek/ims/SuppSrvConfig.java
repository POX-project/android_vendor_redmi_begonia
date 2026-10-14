package com.mediatek.ims;

import android.content.Context;
import android.content.res.Configuration;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class SuppSrvConfig {
    static final String LOG_TAG = "SuppSrvConfig";
    public static final int MEDIA_TYPE_ONLY_AUDIO = 1;
    public static final int MEDIA_TYPE_SEPERATE = 2;
    public static final int MEDIA_TYPE_STANDARD = 0;
    public static final int MEDIA_TYPE_VIDEO_WITH_AUDIO = 3;
    private static final int PROP_BOOL_IDX_APPEND_COUNTRY_CODE = 6;
    private static final int PROP_BOOL_IDX_ATTR_NEED_QUAOTATION_MARK = 20;
    private static final int PROP_BOOL_IDX_DISABLE_ETAG = 10;
    private static final int PROP_BOOL_IDX_FILL_FORWARD_TO = 3;
    private static final int PROP_BOOL_IDX_FWD_NUM_USE_SIP_URI = 21;
    private static final int PROP_BOOL_IDX_HANDLE_409 = 2;
    private static final int PROP_BOOL_IDX_HTTP_ERR_TO_UNKNOWN_HOST = 11;
    private static final int PROP_BOOL_IDX_IMS_DEREG = 5;
    private static final int PROP_BOOL_IDX_INTERNET_APN = 13;
    private static final int PROP_BOOL_IDX_MEDIA_TAG = 7;
    private static final int PROP_BOOL_IDX_NOREPLYTIMER_INSIDE_CFACTION = 14;
    private static final int PROP_BOOL_IDX_NOT_SUPPORT_CFNL = 18;
    private static final int PROP_BOOL_IDX_NOT_SUPPORT_XCAP = 0;
    private static final int PROP_BOOL_IDX_PUT_WHOLE_CLIR = 8;
    private static final int PROP_BOOL_IDX_QUERY_WHOLE_SIMSERV = 9;
    private static final int PROP_BOOL_IDX_SAVE_WHOLE_NODE = 16;
    private static final int PROP_BOOL_IDX_SET_CFNRC_WITH_CFNL = 17;
    private static final int PROP_BOOL_IDX_SUPPORT_NON_URI_NUMBER = 23;
    private static final int PROP_BOOL_IDX_SUPPORT_PLUS_TO_URL = 22;
    private static final int PROP_BOOL_IDX_SUPPORT_PUT_CF_ROOT = 19;
    private static final int PROP_BOOL_IDX_SUPPORT_TIME_SLOT = 15;
    private static final int PROP_BOOL_IDX_USE_HTTP_PROTOCOL = 1;
    private static final int PROP_BOOL_IDX_XCAP_APN = 12;
    private static final int PROP_BOOL_IDX_XCAP_PREFIX_SS = 4;
    private static final int PROP_INT_IDX_DATA_COOL_DOWN_TIMER = 4;
    private static final int PROP_INT_IDX_DATA_KEEP_ALIVE_TIMER = 2;
    private static final int PROP_INT_IDX_MEDIA_TYPE = 1;
    private static final int PROP_INT_IDX_REQUEST_DATA_TIMER = 3;
    private static final int PROP_INT_IDX_XCAP_PORT = 0;
    private static final int PROP_LONG_IDX_CACHE_VALID_TIME = 0;
    private static final int PROP_STR_IDX_AUID = 1;
    private static final int PROP_STR_IDX_DIGEST_ID = 8;
    private static final int PROP_STR_IDX_DIGEST_PWD = 9;
    private static final int PROP_STR_IDX_ELEMENT_CONTENT_TYPE = 0;
    private static final int PROP_STR_IDX_PHONE_CONTEXT = 10;
    private static final int PROP_STR_IDX_RULEID_CFB = 4;
    private static final int PROP_STR_IDX_RULEID_CFNL = 7;
    private static final int PROP_STR_IDX_RULEID_CFNRC = 6;
    private static final int PROP_STR_IDX_RULEID_CFNRY = 5;
    private static final int PROP_STR_IDX_RULEID_CFU = 3;
    private static final int PROP_STR_IDX_XCAP_ROOT = 2;
    public static final String RULEID_CFB = "CFB";
    public static final String RULEID_CFNL = "CFNL";
    public static final String RULEID_CFNRc = "CFNRc";
    public static final String RULEID_CFNRy = "CFNRy";
    public static final String RULEID_CFU = "CFU";
    private static final String SYS_PROP_AUID = "persist.vendor.ss.auid";
    private static final String SYS_PROP_BOOL_CONFIG = "persist.vendor.ss.boolconfig";
    private static final String SYS_PROP_BOOL_VALUE = "persist.vendor.ss.boolvalue";
    private static final String SYS_PROP_CACHE_VALID_TIME = "persist.vendor.ss.cachetime";
    private static final String SYS_PROP_CONTENT_TYPE = "persist.vendor.ss.contenttype";
    private static final String SYS_PROP_DATA_COOL_DOWN_TIMER = "persist.vendor.ss.cdtimer";
    private static final String SYS_PROP_DATA_KEEP_ALIVE_TIMER = "persist.vendor.ss.alivetimer";
    private static final String SYS_PROP_DIGEST_ID = "persist.vendor.ss.digest.id";
    private static final String SYS_PROP_DIGEST_PWD = "persist.vendor.ss.digest.pwd";
    private static final String SYS_PROP_MEDIA_TYPE = "persist.vendor.ss.mediatype";
    private static final String SYS_PROP_REQUEST_DATA_TIMER = "persist.vendor.ss.reqtimer";
    private static final String SYS_PROP_RULEID_CFB = "persist.vendor.ss.ruleid.cfb";
    private static final String SYS_PROP_RULEID_CFNL = "persist.vendor.ss.ruleid.cfnl";
    private static final String SYS_PROP_RULEID_CFNRC = "persist.vendor.ss.ruleid.cfnrc";
    private static final String SYS_PROP_RULEID_CFNRY = "persist.vendor.ss.ruleid.cfnry";
    private static final String SYS_PROP_RULEID_CFU = "persist.vendor.ss.ruleid.cfu";
    private static final String SYS_PROP_XCAP_PORT = "persist.vendor.ss.xcapport";
    private static final String SYS_PROP_XCAP_ROOT = "persist.vendor.ss.xcaproot";
    private static SuppSrvConfig sInstance = null;
    private Context mContext;
    private boolean mNotSupportXcap = false;
    private boolean mHttpProtocolScheme = true;
    private boolean mHandleError409 = false;
    private boolean mFillCompleteForwardTo = false;
    private boolean mXcapNsPrefixSS = false;
    private boolean mNeedIMSDereg = false;
    private boolean mAppendCountryCode = false;
    private boolean mSupportMediaTag = true;
    private boolean mPutWholeCLIR = false;
    private boolean mQueryWholeSimServ = false;
    private boolean mDisableEtag = false;
    private boolean mHttpErrToUnknownHostErr = false;
    private boolean mUseXCAPTypeApn = true;
    private boolean mUseInternetTypeApn = false;
    private boolean mNoReplyTimeInsideCFAction = false;
    private boolean mTimeSlot = false;
    private boolean mSaveWholeNode = false;
    private boolean mSetCFNRcWithCFNL = false;
    private boolean mNotSupportCFNotRegistered = false;
    private boolean mSupportPutCfRoot = true;
    private boolean mAttrNeedQuotationMark = false;
    private boolean mFwdNumUseSipUri = false;
    private boolean mSupportPutNonUriNumber = false;
    private String mElementContentType = null;
    private String mAUID = null;
    private String mXcapRoot = null;
    private Map mRuleId = null;
    private String mDigestId = null;
    private String mDigestPwd = null;
    private String mPhoneContext = null;
    private int mPort = 0;
    private int mMediaTagType = -1;
    private int mDataKeepAliveTimer = 0;
    private int mRequestDataTimer = 0;
    private int mDataCoolDownTimer = 0;
    private long mCacheValidTime = 0;

    private SuppSrvConfig(Context context) {
        this.mContext = null;
        this.mContext = context;
    }

    public static SuppSrvConfig getInstance(Context context) {
        if (sInstance == null) {
            sInstance = new SuppSrvConfig(context);
        }
        return sInstance;
    }

    private String getMccMnc(int i) {
        return TelephonyManager.getDefault().getSimOperatorNumericForPhone(i);
    }

    private int getSysPropForBool(int i) {
        int i2 = -1;
        if (i > -1) {
            int i3 = SystemProperties.getInt(SYS_PROP_BOOL_CONFIG, 0);
            if (i3 > 0 && ((1 << i) & i3) != 0) {
                i2 = ((1 << i) & SystemProperties.getInt(SYS_PROP_BOOL_VALUE, 0)) != 0 ? 1 : 0;
                StringBuilder sb = new StringBuilder();
                sb.append("getSysPropForBool: ");
                sb.append(propBoolIdxToString(i));
                sb.append("=");
                sb.append(i2 == 1 ? "TRUE" : "FALSE");
                Rlog.i(LOG_TAG, sb.toString());
            }
        }
        return i2;
    }

    private int getSysPropForInteger(int i) {
        int i2 = -1;
        if (i == 0) {
            i2 = SystemProperties.getInt(SYS_PROP_XCAP_PORT, -1);
        } else if (i == 1) {
            i2 = SystemProperties.getInt(SYS_PROP_MEDIA_TYPE, -1);
        } else if (i == 2) {
            i2 = SystemProperties.getInt(SYS_PROP_DATA_KEEP_ALIVE_TIMER, -1);
        } else if (i == 3) {
            i2 = SystemProperties.getInt(SYS_PROP_REQUEST_DATA_TIMER, -1);
        } else if (i == 4) {
            i2 = SystemProperties.getInt(SYS_PROP_DATA_COOL_DOWN_TIMER, -1);
        }
        Rlog.i(LOG_TAG, "getSysPropForInteger: " + propIntIdxToString(i) + "=" + i2);
        return i2;
    }

    private long getSysPropForLong(int i) {
        long j = i == 0 ? SystemProperties.getLong(SYS_PROP_CACHE_VALID_TIME, -1L) : -1L;
        Rlog.i(LOG_TAG, "getSysPropForInteger: " + propLongIdxToString(i) + "=" + j);
        return j;
    }

    private String getSysPropForString(int i) {
        String str = null;
        switch (i) {
            case 0:
                str = SystemProperties.get(SYS_PROP_CONTENT_TYPE);
                break;
            case 1:
                str = SystemProperties.get(SYS_PROP_AUID);
                break;
            case 2:
                str = SystemProperties.get(SYS_PROP_XCAP_ROOT);
                break;
            case 3:
                str = SystemProperties.get(SYS_PROP_RULEID_CFU);
                break;
            case 4:
                str = SystemProperties.get(SYS_PROP_RULEID_CFB);
                break;
            case 5:
                str = SystemProperties.get(SYS_PROP_RULEID_CFNRY);
                break;
            case 6:
                str = SystemProperties.get(SYS_PROP_RULEID_CFNRC);
                break;
            case 7:
                str = SystemProperties.get(SYS_PROP_RULEID_CFNL);
                break;
        }
        Rlog.i(LOG_TAG, "getSysPropForString: " + propStrIdxToString(i) + "=" + str);
        return str;
    }

    private void initAllPara() {
        this.mNotSupportXcap = initParaBool(0, R.bool.conf_not_support_xcap);
        this.mHttpProtocolScheme = initParaBool(1, R.bool.conf_xcap_http);
        this.mHandleError409 = initParaBool(2, R.bool.conf_handle409);
        this.mFillCompleteForwardTo = initParaBool(3, R.bool.conf_fill_complete_forward_to);
        this.mXcapNsPrefixSS = initParaBool(4, R.bool.conf_xcap_nsprefixss);
        this.mNeedIMSDereg = initParaBool(5, R.bool.conf_imsdereg);
        this.mAppendCountryCode = initParaBool(6, R.bool.conf_append_countrycode);
        this.mSupportMediaTag = initParaBool(7, R.bool.conf_mediatag);
        this.mPutWholeCLIR = initParaBool(8, R.bool.conf_putwholeclir);
        this.mQueryWholeSimServ = initParaBool(9, R.bool.conf_querywholesimserv);
        this.mDisableEtag = initParaBool(10, R.bool.conf_disable_etag);
        this.mHttpErrToUnknownHostErr = initParaBool(11, R.bool.conf_httperr_to_unknownhost);
        this.mUseXCAPTypeApn = initParaBool(12, R.bool.conf_use_xcap_apn);
        this.mUseInternetTypeApn = initParaBool(13, R.bool.conf_use_internet_apn);
        this.mNoReplyTimeInsideCFAction = initParaBool(14, R.bool.conf_noreplytimer_inside_cf);
        this.mTimeSlot = initParaBool(15, R.bool.conf_support_time_slot);
        this.mSaveWholeNode = initParaBool(16, R.bool.conf_save_whole_node);
        this.mSetCFNRcWithCFNL = initParaBool(17, R.bool.conf_set_cfnrc_with_cfnl);
        this.mNotSupportCFNotRegistered = initParaBool(18, R.bool.conf_not_support_cfnl);
        this.mSupportPutCfRoot = initParaBool(19, R.bool.conf_support_put_cf_root);
        this.mAttrNeedQuotationMark = initParaBool(20, R.bool.conf_attr_need_quaotation_mark);
        this.mFwdNumUseSipUri = initParaBool(21, R.bool.conf_fwd_num_use_sip_uri);
        if (initParaBool(22, R.bool.conf_support_plus_to_url)) {
            SystemProperties.set("persist.vendor.mtk.xcap.rawurl", "true");
        } else {
            SystemProperties.set("persist.vendor.mtk.xcap.rawurl", "false");
        }
        this.mSupportPutNonUriNumber = initParaBool(23, R.bool.conf_support_put_non_uri_number);
        this.mElementContentType = initParaString(0, R.string.conf_eleupdatetype);
        this.mAUID = initParaString(1, R.string.conf_auid);
        this.mXcapRoot = initParaString(2, R.string.conf_xcap_root);
        initRuleId();
        this.mDigestId = initParaString(8, R.string.conf_digest_id);
        this.mDigestPwd = initParaString(9, R.string.conf_digest_pwd);
        this.mPhoneContext = initParaString(10, R.string.conf_phone_context);
        this.mPort = initParaInteger(0, R.integer.conf_xcap_port);
        this.mMediaTagType = initParaInteger(1, R.integer.conf_mediatag_type);
        this.mDataKeepAliveTimer = initParaInteger(2, R.integer.conf_data_keep_alive_timer);
        this.mRequestDataTimer = initParaInteger(3, R.integer.conf_request_data_timer);
        this.mDataCoolDownTimer = initParaInteger(4, R.integer.conf_data_cool_down_timer);
        this.mCacheValidTime = initParaLong(0, R.string.conf_cache_value_time);
    }

    private boolean initParaBool(int i, int i2) {
        boolean z;
        int sysPropForBool = getSysPropForBool(i);
        if (sysPropForBool != -1) {
            z = sysPropForBool == 1;
        } else {
            z = this.mContext.getResources().getBoolean(i2);
        }
        Rlog.i(LOG_TAG, "initParaBool: " + propBoolIdxToString(i) + " = " + z);
        return z;
    }

    private int initParaInteger(int i, int i2) {
        int sysPropForInteger = getSysPropForInteger(i);
        if (sysPropForInteger == -1) {
            sysPropForInteger = this.mContext.getResources().getInteger(i2);
        }
        Rlog.i(LOG_TAG, "initParaInteger: " + propIntIdxToString(i) + " = " + sysPropForInteger);
        return sysPropForInteger;
    }

    private long initParaLong(int i, int i2) {
        long sysPropForLong = getSysPropForLong(i);
        if (sysPropForLong == -1) {
            sysPropForLong = Long.parseLong(this.mContext.getResources().getString(i2));
        }
        Rlog.i(LOG_TAG, "initParaLong: " + propLongIdxToString(i) + " = " + sysPropForLong);
        return sysPropForLong;
    }

    private String initParaString(int i, int i2) {
        String sysPropForString = getSysPropForString(i);
        if (sysPropForString == null || sysPropForString.isEmpty()) {
            sysPropForString = this.mContext.getResources().getString(i2);
        }
        Rlog.i(LOG_TAG, "initParaString: " + propStrIdxToString(i) + " = " + sysPropForString);
        return sysPropForString;
    }

    private void initRuleId() {
        String strInitParaString = initParaString(3, R.string.conf_ruleid_cfu);
        String strInitParaString2 = initParaString(4, R.string.conf_ruleid_cfb);
        String strInitParaString3 = initParaString(5, R.string.conf_ruleid_cfnry);
        String strInitParaString4 = initParaString(6, R.string.conf_ruleid_cfnrc);
        String strInitParaString5 = initParaString(7, R.string.conf_ruleid_cfnl);
        HashMap map = new HashMap();
        this.mRuleId = map;
        map.put(RULEID_CFU, strInitParaString);
        this.mRuleId.put(RULEID_CFB, strInitParaString2);
        this.mRuleId.put(RULEID_CFNRy, strInitParaString3);
        this.mRuleId.put(RULEID_CFNRc, strInitParaString4);
        this.mRuleId.put(RULEID_CFNL, strInitParaString5);
    }

    private String propBoolIdxToString(int i) {
        switch (i) {
            case 0:
                return "PROP_BOOL_IDX_NOT_SUPPORT_XCAP";
            case 1:
                return "PROP_BOOL_IDX_USE_HTTP_PROTOCOL";
            case 2:
                return "PROP_BOOL_IDX_HANDLE_409";
            case 3:
                return "PROP_BOOL_IDX_FILL_FORWARD_TO";
            case 4:
                return "PROP_BOOL_IDX_XCAP_PREFIX_SS";
            case 5:
                return "PROP_BOOL_IDX_IMS_DEREG";
            case 6:
                return "PROP_BOOL_IDX_APPEND_COUNTRY_CODE";
            case 7:
                return "PROP_BOOL_IDX_MEDIA_TAG";
            case 8:
                return "PROP_BOOL_IDX_PUT_WHOLE_CLIR";
            case 9:
                return "PROP_BOOL_IDX_QUERY_WHOLE_SIMSERV";
            case 10:
                return "PROP_BOOL_IDX_DISABLE_ETAG";
            case 11:
                return "PROP_BOOL_IDX_HTTP_ERR_TO_UNKNOWN_HOST";
            case 12:
                return "PROP_BOOL_IDX_XCAP_APN";
            case 13:
                return "PROP_BOOL_IDX_INTERNET_APN";
            case 14:
                return "PROP_BOOL_IDX_NOREPLYTIMER_INSIDE_CFACTION";
            case 15:
                return "PROP_BOOL_IDX_SUPPORT_TIME_SLOT";
            case 16:
                return "PROP_BOOL_IDX_SAVE_WHOLE_NODE";
            case 17:
                return "PROP_BOOL_IDX_SET_CFNRC_WITH_CFNL";
            case 18:
                return "PROP_BOOL_IDX_NOT_SUPPORT_CFNL";
            case 19:
            case 22:
            default:
                return "NOT_FOUND";
            case 20:
                return "PROP_BOOL_IDX_ATTR_NEED_QUAOTATION_MARK";
            case 21:
                return "PROP_BOOL_IDX_FWD_NUM_USE_SIP_URI";
            case 23:
                return "PROP_BOOL_IDX_SUPPORT_NON_URI_NUMBER";
        }
    }

    private String propIntIdxToString(int i) {
        if (i == 0) {
            return "PROP_INT_IDX_XCAP_PORT";
        }
        if (i == 1) {
            return "PROP_INT_IDX_MEDIA_TYPE";
        }
        if (i == 2) {
            return "PROP_INT_IDX_DATA_KEEP_ALIVE_TIMER";
        }
        if (i != 3) {
            return i != 4 ? "NOT_FOUND" : "PROP_INT_IDX_DATA_COOL_DOWN_TIMER";
        }
        return "PROP_INT_IDX_REQUEST_DATA_TIMER";
    }

    private String propLongIdxToString(int i) {
        return i != 0 ? "NOT_FOUND" : "PROP_LONG_IDX_CACHE_VALID_TIME";
    }

    private String propStrIdxToString(int i) {
        switch (i) {
            case 0:
                return "PROP_STR_IDX_ELEMENT_CONTENT_TYPE";
            case 1:
                return "PROP_STR_IDX_AUID";
            case 2:
                return "PROP_STR_IDX_XCAP_ROOT";
            case 3:
                return "PROP_STR_IDX_RULEID_CFU";
            case 4:
                return "PROP_STR_IDX_RULEID_CFB";
            case 5:
                return "PROP_STR_IDX_RULEID_CFNRY";
            case 6:
                return "PROP_STR_IDX_RULEID_CFNRC";
            case 7:
                return "PROP_STR_IDX_RULEID_CFNL";
            case 8:
                return "PROP_STR_IDX_DIGEST_ID";
            case 9:
                return "PROP_STR_IDX_DIGEST_PWD";
            case 10:
                return "PROP_STR_IDX_PHONE_CONTEXT";
            default:
                return "NOT_FOUND";
        }
    }

    private void updateResourceBySim(String str) {
        Rlog.d(LOG_TAG, "updateResourceBySim: " + str);
        if (str == null || str.isEmpty()) {
            return;
        }
        Configuration configuration = this.mContext.getResources().getConfiguration();
        int iIntValue = Integer.valueOf(str.substring(0, 3)).intValue();
        int iIntValue2 = Integer.valueOf(str.substring(3)).intValue();
        configuration.mcc = iIntValue;
        configuration.mnc = iIntValue2 == 0 ? 65535 : iIntValue2;
        Rlog.d(LOG_TAG, "Config mcc : " + configuration.mcc + ", mnc = " + configuration.mnc);
        this.mContext.getResources().updateConfiguration(configuration, this.mContext.getResources().getDisplayMetrics());
    }

    public String getAUID() {
        return this.mAUID;
    }

    public long getCacheValidTime() {
        return this.mCacheValidTime;
    }

    public int getDataCoolDownTimer() {
        return this.mDataCoolDownTimer;
    }

    public int getDataKeepAliveTimer() {
        return this.mDataKeepAliveTimer;
    }

    public String getDigestId() {
        return this.mDigestId;
    }

    public String getDigestPwd() {
        return this.mDigestPwd;
    }

    public String getElementContentType() {
        return this.mElementContentType;
    }

    public int getMediaTagType() {
        return this.mMediaTagType;
    }

    public String getPhoneContext() {
        return this.mPhoneContext;
    }

    public int getPort() {
        return this.mPort;
    }

    public int getRequestDataTimer() {
        return this.mRequestDataTimer;
    }

    public Map getRuleId() {
        return this.mRuleId;
    }

    public String getXcapRoot() {
        return this.mXcapRoot;
    }

    public boolean isAppendCountryCode() {
        return this.mAppendCountryCode;
    }

    public boolean isAttrNeedQuotationMark() {
        return this.mAttrNeedQuotationMark;
    }

    public boolean isDisableEtag() {
        return this.mDisableEtag;
    }

    public boolean isFillCompleteForwardTo() {
        return this.mFillCompleteForwardTo;
    }

    public boolean isFwdNumUseSipUri() {
        return this.mFwdNumUseSipUri;
    }

    public boolean isHandleError409() {
        return this.mHandleError409;
    }

    public boolean isHttpErrToUnknownHostErr() {
        return this.mHttpErrToUnknownHostErr;
    }

    public boolean isNeedIMSDereg() {
        return this.mNeedIMSDereg;
    }

    public boolean isNoReplyTimeInsideCFAction() {
        return this.mNoReplyTimeInsideCFAction;
    }

    public boolean isNotSupportCFNotRegistered() {
        return this.mNotSupportCFNotRegistered;
    }

    public boolean isNotSupportXcap() {
        return this.mNotSupportXcap;
    }

    public boolean isPutWholeCLIR() {
        return this.mPutWholeCLIR;
    }

    public boolean isQueryWholeSimServ() {
        return this.mQueryWholeSimServ;
    }

    public boolean isSaveWholeNode() {
        return this.mSaveWholeNode;
    }

    public boolean isSetCFNRcWithCFNL() {
        return this.mSetCFNRcWithCFNL;
    }

    public boolean isSupportMediaTag() {
        return this.mSupportMediaTag;
    }

    public boolean isSupportPutCfRoot() {
        return this.mSupportPutCfRoot;
    }

    public boolean isSupportPutNonUriNumber() {
        return this.mSupportPutNonUriNumber;
    }

    public boolean isSupportTimeSlot() {
        return this.mTimeSlot;
    }

    public boolean isUseHttpProtocolScheme() {
        return this.mHttpProtocolScheme;
    }

    public boolean isUseInternetTypeApn() {
        return this.mUseInternetTypeApn;
    }

    public boolean isUseXCAPTypeApn() {
        return this.mUseXCAPTypeApn;
    }

    public boolean isXcapNsPrefixSS() {
        return this.mXcapNsPrefixSS;
    }

    public void update(int i) {
        updateResourceBySim(getMccMnc(i));
        initAllPara();
    }
}

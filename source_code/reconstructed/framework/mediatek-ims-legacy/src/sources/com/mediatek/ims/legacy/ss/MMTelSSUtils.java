package com.mediatek.ims.legacy.ss;

import android.content.Context;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.google.i18n.phonenumbers.PhoneNumberUtil;
import com.mediatek.ims.SuppSrvConfig;
import com.mediatek.ims.internal.ImsXuiManager;
import com.mediatek.internal.telephony.MtkSuppServHelper;
import com.mediatek.internal.telephony.dataconnection.MtkDcHelper;
import com.mediatek.simservs.client.SimServs;
import com.mediatek.telephony.MtkTelephonyManagerEx;

/* JADX INFO: loaded from: classes.dex */
public class MMTelSSUtils {
    private static final String LOG_TAG = "MMTelSSUtils";
    private static final String MODE_SS_CS = "Prefer CS";
    private static final String MODE_SS_XCAP = "Prefer XCAP";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String PROP_SS_MODE = "persist.vendor.radio.ss.mode";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final String SS_SERVICE_CLASS_PROP = "vendor.gsm.radio.ss.sc";
    private static final boolean TELDBG;
    private static SimServs mSimservs;

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        mSimservs = null;
    }

    public static String addXcapRootPort(String str, int i, Context context) {
        if (!"http".equals(str.substring(0, str.lastIndexOf(58))) && !"https".equals(str.substring(0, str.lastIndexOf(58)))) {
            return str;
        }
        if (str.charAt(str.length() - 1) == '/') {
            str = str.substring(0, str.length() - 1);
        }
        int port = SuppSrvConfig.getInstance(context).getPort();
        if (port != 0) {
            str = str + ":" + port;
        }
        return str + "/";
    }

    public static String appendCountryCode(String str, int i) {
        String networkCountryIso = TelephonyManager.getDefault().getNetworkCountryIso(i);
        Rlog.d(LOG_TAG, "currIso: " + networkCountryIso);
        int countryCodeForRegion = PhoneNumberUtil.getInstance().getCountryCodeForRegion(networkCountryIso.toUpperCase());
        if (countryCodeForRegion == 0) {
            Rlog.d(LOG_TAG, "Country code not found.");
            return str;
        }
        String string = Integer.toString(countryCodeForRegion);
        if (str == null || str.isEmpty() || string == null) {
            return str;
        }
        if (str.substring(0, 1).equals("+")) {
            Rlog.d(LOG_TAG, "No need to append country code: " + MtkSuppServHelper.encryptString(str));
            return str;
        }
        String str2 = "+" + string + str;
        Rlog.d(LOG_TAG, "dialNumberWithCountryCode: " + MtkSuppServHelper.encryptString(str2));
        return str2;
    }

    public static int getServiceClass() {
        return Integer.parseInt(SystemProperties.get(SS_SERVICE_CLASS_PROP, "-1"));
    }

    public static String getSipUriFromXui(String str) {
        String str2 = null;
        String[] strArrSplit = str.split(",");
        boolean z = false;
        for (int i = 0; i < strArrSplit.length; i++) {
            if (strArrSplit[i] != null && !strArrSplit[i].isEmpty() && strArrSplit[i].contains("sip:")) {
                str2 = strArrSplit[i];
                z = true;
                break;
            }
        }
        if (!z) {
            str2 = strArrSplit[0];
        }
        Rlog.d(LOG_TAG, "getSipUriFromXui: " + MtkSuppServHelper.encryptString(str2));
        return str2;
    }

    private static int getSubIdUsingPhoneId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        return (subId == null || subId.length <= 0) ? SubscriptionManager.getDefaultSubscriptionId() : subId[0];
    }

    public static String getXIntendedId(int i, Context context) {
        return getXui(i, context);
    }

    public static String getXcapRootUri(int i, Context context) {
        String simOperator;
        String xcapRoot = SimServs.getInstance().getXcapRoot();
        Rlog.d(LOG_TAG, "getXcapRootUri():" + xcapRoot);
        int subIdUsingPhoneId = getSubIdUsingPhoneId(i);
        if (xcapRoot != null) {
            return xcapRoot;
        }
        String isimImpi = MtkTelephonyManagerEx.getDefault().getIsimImpi(subIdUsingPhoneId);
        if (isValidIMPI(isimImpi)) {
            Rlog.d(LOG_TAG, "getXcapRootUri():get APP_FAM_IMS and impi=" + MtkSuppServHelper.encryptString(isimImpi));
            mSimservs.setXcapRootByImpi(isimImpi);
        } else {
            if (!MtkDcHelper.isCdma4GDualModeCard(i) || (simOperator = MtkTelephonyManagerEx.getDefault().getSimOperatorNumericForPhoneEx(i)[0]) == null || simOperator.length() <= 0) {
                simOperator = TelephonyManager.getDefault().getSimOperator(subIdUsingPhoneId);
            }
            String strSubstring = "";
            String strSubstring2 = "";
            if (!TextUtils.isEmpty(simOperator)) {
                strSubstring = simOperator.substring(0, 3);
                strSubstring2 = simOperator.substring(3);
            }
            if (strSubstring2.length() == 2) {
                simOperator = strSubstring + 0 + strSubstring2;
                Rlog.d(LOG_TAG, "add 0 to mnc =" + strSubstring2);
            }
            Rlog.d(LOG_TAG, "get mccMnc=" + simOperator + " from the IccRecrods");
            if (!TextUtils.isEmpty(simOperator)) {
                if (simOperator.equals("460000") || simOperator.equals("460002") || simOperator.equals("460007") || simOperator.equals("460008") || simOperator.equals("460004")) {
                    mSimservs.setXcapRootByMccMnc("460", "000");
                } else {
                    mSimservs.setXcapRootByMccMnc(simOperator.substring(0, 3), simOperator.substring(3));
                }
            }
        }
        String xcapRoot2 = mSimservs.getXcapRoot();
        Rlog.d(LOG_TAG, "getXcapRoot():rootUri=" + xcapRoot2);
        return xcapRoot2;
    }

    public static String getXui(int i, Context context) {
        String simOperator;
        String xui = ImsXuiManager.getInstance().getXui(i);
        Rlog.d(LOG_TAG, "getXui():sXui from XuiManager = " + MtkSuppServHelper.encryptString(xui));
        int subIdUsingPhoneId = getSubIdUsingPhoneId(i);
        if (xui != null) {
            return getSipUriFromXui(xui);
        }
        SimServs simServs = SimServs.getInstance();
        String xui2 = simServs.getXui();
        Rlog.d(LOG_TAG, "getXui():sXui from simSrv=" + MtkSuppServHelper.encryptString(xui2));
        if (xui2 != null) {
            String sipUriFromXui = getSipUriFromXui(xui2);
            simServs.setXui(sipUriFromXui);
            return sipUriFromXui;
        }
        String[] isimImpu = MtkTelephonyManagerEx.getDefault().getIsimImpu(subIdUsingPhoneId);
        if (isimImpu == null || isimImpu[0] == null || isimImpu[0].isEmpty()) {
            String subscriberId = ((TelephonyManager) context.getSystemService("phone")).getSubscriberId(getSubIdUsingPhoneId(i));
            Rlog.d(LOG_TAG, "getXui():IMS uiccApp is null, try to select USIM uiccApp");
            if (!MtkDcHelper.isCdma4GDualModeCard(i) || (simOperator = MtkTelephonyManagerEx.getDefault().getSimOperatorNumericForPhoneEx(i)[0]) == null || simOperator.length() <= 0) {
                simOperator = TelephonyManager.getDefault().getSimOperator(subIdUsingPhoneId);
            }
            Rlog.d(LOG_TAG, "getXui():Imsi=" + MtkSuppServHelper.encryptString(subscriberId) + ", mccMnc=" + simOperator);
            if (!TextUtils.isEmpty(simOperator)) {
                mSimservs.setXuiByImsiMccMnc(subscriberId, simOperator.substring(0, 3), simOperator.substring(3));
            }
        } else {
            String str = isimImpu[0];
            Rlog.d(LOG_TAG, "getXui():sImpu=" + MtkSuppServHelper.encryptString(str));
            mSimservs.setXuiByImpu(str);
        }
        String xui3 = mSimservs.getXui();
        Rlog.d(LOG_TAG, "getXui():sXui=" + MtkSuppServHelper.encryptString(xui3));
        return xui3;
    }

    public static SimServs initSimserv(Context context, int i) {
        SimServs simServs = SimServs.getInstance();
        mSimservs = simServs;
        if (simServs.getPhoneId() != i) {
            Rlog.d(LOG_TAG, "[initSimserv] old PhoneId:" + mSimservs.getPhoneId() + " new PhoneId:" + i);
            mSimservs.resetParameters();
            mSimservs.setPhoneId(i);
        }
        SuppSrvConfig suppSrvConfig = SuppSrvConfig.getInstance(context);
        mSimservs.setUseHttpProtocolScheme(suppSrvConfig.isUseHttpProtocolScheme());
        if (suppSrvConfig.getElementContentType() != null && !suppSrvConfig.getElementContentType().isEmpty()) {
            mSimservs.setElementUpdateContentType(false, suppSrvConfig.getElementContentType());
        }
        mSimservs.setHandleError409(suppSrvConfig.isHandleError409());
        mSimservs.setFillCompleteForwardTo(suppSrvConfig.isFillCompleteForwardTo());
        mSimservs.setXcapNSPrefixSS(suppSrvConfig.isXcapNsPrefixSS());
        mSimservs.setSimservQueryWhole(suppSrvConfig.isQueryWholeSimServ());
        mSimservs.setETagDisable(suppSrvConfig.isDisableEtag());
        mSimservs.setAttrNeedQuotationMark(suppSrvConfig.isAttrNeedQuotationMark());
        if (suppSrvConfig.getAUID() != null && !suppSrvConfig.getAUID().isEmpty()) {
            mSimservs.setAUID(suppSrvConfig.getAUID());
        }
        if (suppSrvConfig.getXcapRoot() != null && !suppSrvConfig.getXcapRoot().isEmpty()) {
            mSimservs.setXcapRoot(suppSrvConfig.getXcapRoot());
        }
        mSimservs.setXui(getXui(i, context));
        String xcapRootUri = getXcapRootUri(i, context);
        if (xcapRootUri != null && !xcapRootUri.isEmpty()) {
            mSimservs.setXcapRoot(addXcapRootPort(xcapRootUri, i, context));
        }
        mSimservs.setIntendedId(getXIntendedId(i, context));
        mSimservs.setContext(context);
        mSimservs.setPhoneId(i);
        XcapMobileDataNetworkManager.setKeepAliveTimer(suppSrvConfig.getDataKeepAliveTimer());
        if (suppSrvConfig.getRequestDataTimer() > 0) {
            XcapMobileDataNetworkManager.setRequestDataTimer(suppSrvConfig.getRequestDataTimer());
        }
        if (suppSrvConfig.getDataCoolDownTimer() > 0) {
            XcapMobileDataNetworkManager.setDataCoolDownTimer(suppSrvConfig.getDataCoolDownTimer());
        }
        return mSimservs;
    }

    public static boolean isPreferXcap(int i, Context context) {
        String str;
        SuppSrvConfig suppSrvConfig = SuppSrvConfig.getInstance(context);
        if (!SystemProperties.get("persist.vendor.ims_support").equals("1") || !SystemProperties.get("persist.vendor.volte_support").equals("1")) {
            Rlog.d(LOG_TAG, "isPreferXcap(): Not Enable VOLTE feature!");
            return false;
        }
        if (SystemProperties.get("persist.vendor.ims_support").equals("1") && SystemProperties.get("persist.vendor.volte_support").equals("1")) {
            str = SystemProperties.get(PROP_SS_MODE, MODE_SS_XCAP);
            if (suppSrvConfig.isNotSupportXcap()) {
                str = MODE_SS_CS;
            }
        } else {
            str = SystemProperties.get(PROP_SS_MODE, MODE_SS_CS);
        }
        boolean z = MODE_SS_CS.equals(str) ? false : true;
        Rlog.d(LOG_TAG, "isPreferXcap() " + str);
        return z;
    }

    public static boolean isValidIMPI(String str) {
        Rlog.d(LOG_TAG, "isValidIMPI, impi= " + MtkSuppServHelper.encryptString(str));
        return (str == null || str.isEmpty() || !str.contains("@")) ? false : true;
    }

    public static void resetServcieClass() {
        SystemProperties.set(SS_SERVICE_CLASS_PROP, "-1");
    }
}

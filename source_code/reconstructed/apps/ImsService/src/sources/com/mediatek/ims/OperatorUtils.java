package com.mediatek.ims;

import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import com.mediatek.ims.common.SubscriptionManagerHelper;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class OperatorUtils {
    private static final String LOG_TAG = "OperatorUtils";
    private static final String PROPERTY_MTK_CT_VOLTE_SUPPORT = "persist.vendor.mtk_ct_volte_support";
    private static final String PROPERTY_MTK_DYNAMIC_IMS_SWITCH = "persist.vendor.mtk_dynamic_ims_switch";
    private static final String PROPERTY_MTK_UIM_SUBSCRIBERID = "vendor.ril.uim.subscriberid";
    private static final Map<OPID, List> mOPMap = new HashMap<OPID, List>() { // from class: com.mediatek.ims.OperatorUtils.1
        {
            put(OPID.OP01, Arrays.asList("46000", "46002", "46004", "46007", "46008"));
            put(OPID.OP02, Arrays.asList("46001", "46006", "46009", "45407"));
            put(OPID.OP03, Arrays.asList("20801", "20802"));
            put(OPID.OP05, Arrays.asList("23203", "23204", "21901", "23001", "21630", "29702", "20416", "20420", "26002", "22004", "23430", "26201", "26206", "26278"));
            put(OPID.OP06, Arrays.asList("21401", "21406", "20404", "28602", "23415", "27602", "23003", "23099", "60202", "28802", "54201", "26202", "26204", "26209", "62002", "20205", "21670", "27402", "27403", "27201", "22210", "27801", "53001", "26801", "22601", "42702", "23591", "90128"));
            put(OPID.OP07, Arrays.asList("310030", "310070", "310090", "310150", "310170", "310280", "310380", "310410", "310560", "310680", "311180"));
            put(OPID.OP08, Arrays.asList("310160", "310260", "310490", "310580", "310660", "310200", "310210", "310220", "310230", "310240", "310250", "310270", "310310", "310800"));
            put(OPID.OP09, Arrays.asList("46003", "46011", "46012", "45502", "45507"));
            put(OPID.OP11, Arrays.asList("23420"));
            put(OPID.OP12, Arrays.asList("310590", "310890", "311270", "311480"));
            put(OPID.OP15, Arrays.asList("26203", "26207", "26208", "26211", "26277"));
            put(OPID.OP16, Arrays.asList("23430", "23431", "23432", "23433", "23434"));
            put(OPID.OP18, Arrays.asList("405854", "405855", "405856", "405872", "405857", "405858", "405859", "405860", "405861", "405862", "405873", "405863", "405864", "405874", "405865", "405866", "405867", "405868", "405869", "405871", "405870", "405840"));
            put(OPID.OP112, Arrays.asList("334020"));
            put(OPID.OP129, Arrays.asList("44007", "44008", "44050", "44051", "44052", "44053", "44054", "44055", "44056", "44070", "44071", "44072", "44073", "44074", "44075", "44076", "44077", "44078", "44079", "44088", "44089", "44110", "44170"));
            put(OPID.OP156, Arrays.asList("23802"));
            put(OPID.OP130, Arrays.asList("72402", "72403", "72404"));
            put(OPID.OP120, Arrays.asList("72405"));
            put(OPID.OP132, Arrays.asList("72406", "72410", "72411", "72423"));
            put(OPID.OPOi, Arrays.asList("72416", "72424", "72431"));
            put(OPID.OP165, Arrays.asList("22802"));
            put(OPID.OP152, Arrays.asList("50502"));
            put(OPID.OP117, Arrays.asList("51009", "51028"));
            put(OPID.OP131, Arrays.asList("52004"));
            put(OPID.OP125, Arrays.asList("52005"));
            put(OPID.OP132_Peru, Arrays.asList("71606"));
            put(OPID.OP151, Arrays.asList("52503"));
            put(OPID.OP236, Arrays.asList("31100", "311220", "311221", "311222", "311223", "311224", "311225", "311226", "311227", "311228", "311229", "311580", "311581", "311582", "311583", "311584", "311585", "311586", "311587", "311588", "311589"));
            put(OPID.OP_EIOT, Arrays.asList("24099"));
        }
    };

    public enum OPID {
        OP01,
        OP02,
        OP03,
        OP05,
        OP06,
        OP07,
        OP08,
        OP09,
        OP11,
        OP12,
        OP15,
        OP16,
        OP18,
        OP112,
        OP129,
        OP156,
        OP130,
        OP120,
        OP132,
        OPOi,
        OP165,
        OP152,
        OP117,
        OP131,
        OP125,
        OP132_Peru,
        OP151,
        OP236,
        OP_EIOT
    }

    private static int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt(ImsConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            i = -1;
        }
        Rlog.d(LOG_TAG, "getMainCapabilityPhoneId = " + i);
        return i;
    }

    public static String getSimOperatorNumericForPhone(int i) {
        String str;
        if (TelephonyManager.getDefault().getCurrentPhoneType(SubscriptionManagerHelper.getSubIdUsingPhoneId(i)) == 2) {
            if (i == 0) {
                str = "vendor.cdma.ril.uicc.mccmnc";
            } else {
                str = "vendor.cdma.ril.uicc.mccmnc." + i;
            }
        } else if (i == 0) {
            str = "vendor.gsm.ril.uicc.mccmnc";
        } else {
            str = "vendor.gsm.ril.uicc.mccmnc." + i;
        }
        String str2 = SystemProperties.get(str, "");
        Rlog.w(LOG_TAG, "getMccMnc, mccMnc value:" + Rlog.pii(LOG_TAG, str2));
        return str2;
    }

    public static boolean isCTVolteDisabled(int i) {
        if (!"1".equals(SystemProperties.get(PROPERTY_MTK_DYNAMIC_IMS_SWITCH)) || SystemProperties.getInt(PROPERTY_MTK_CT_VOLTE_SUPPORT, 0) != 0 || !isMatched(OPID.OP09, i)) {
            return false;
        }
        Rlog.d(LOG_TAG, "SIM loaded, but CT VoLTE shall not support");
        return true;
    }

    public static boolean isMainCapabilitySimOperator(OPID opid) {
        return isMatched(opid, getMainCapabilityPhoneId());
    }

    public static boolean isMatched(OPID opid, int i) {
        String simOperatorNumericForPhone = getSimOperatorNumericForPhone(i);
        List list = mOPMap.get(opid);
        return list != null && list.contains(simOperatorNumericForPhone);
    }

    public static boolean isOperator(String str, OPID opid) {
        boolean z = mOPMap.get(opid).contains(str);
        StringBuilder sb = new StringBuilder();
        sb.append("isOperator: id = ");
        sb.append(Rlog.pii(LOG_TAG, opid));
        sb.append(", matched = ");
        sb.append(z ? "true" : "false");
        Rlog.d(LOG_TAG, sb.toString());
        return z;
    }
}

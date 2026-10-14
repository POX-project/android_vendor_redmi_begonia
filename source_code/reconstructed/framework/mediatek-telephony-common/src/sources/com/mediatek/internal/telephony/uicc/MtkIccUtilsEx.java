package com.mediatek.internal.telephony.uicc;

import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.gsm.SimTlv;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.nio.charset.Charset;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkIccUtilsEx extends IccUtils {
    public static final int CDMA_CARD_TYPE_NOT_3GCARD = 0;
    public static final int CDMA_CARD_TYPE_RUIM_SIM = 2;
    public static final int CDMA_CARD_TYPE_UIM_ONLY = 1;
    static final String MTK_LOG_TAG = "MtkIccUtilsEx";
    protected static final int TAG_FULL_NETWORK_NAME = 67;
    private static final int TAG_ISIM_VALUE = 128;
    protected static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    protected static final String[] PROPERTY_RIL_CT3G = {"vendor.gsm.ril.ct3g", "vendor.gsm.ril.ct3g.2", "vendor.gsm.ril.ct3g.3", "vendor.gsm.ril.ct3g.4"};

    public static IccCardApplicationStatus.PersoSubState PersoSubstateFromRILInt(int i) {
        if (i != 100) {
            return i != 101 ? IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_UNKNOWN : IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SIM_C_PUK;
        }
        return IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SIM_C;
    }

    public static int checkCdma3gCard(int i) {
        String[] strArrSplit = null;
        int i2 = -1;
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_FULL_UICC_TYPE;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i]);
                if (str != null && str.length() > 0) {
                    strArrSplit = str.split(",");
                }
                if (strArrSplit != null) {
                    if (Arrays.asList(strArrSplit).contains("RUIM") && Arrays.asList(strArrSplit).contains("SIM")) {
                        i2 = 2;
                    } else {
                        i2 = ((Arrays.asList(strArrSplit).contains("USIM") || Arrays.asList(strArrSplit).contains("SIM")) && !(Arrays.asList(strArrSplit).contains("SIM") && "1".equals(SystemProperties.get(PROPERTY_RIL_CT3G[i])))) ? 0 : 1;
                    }
                }
                StringBuilder sb = new StringBuilder();
                sb.append("checkCdma3gCard slotId ");
                sb.append(i);
                sb.append(", prop value = ");
                sb.append(str);
                sb.append(", size = ");
                sb.append(strArrSplit != null ? strArrSplit.length : 0);
                sb.append(", cdma3gCardType = ");
                sb.append(i2);
                Rlog.d(MTK_LOG_TAG, sb.toString());
                return i2;
            }
        }
        Rlog.d(MTK_LOG_TAG, "checkCdma3gCard: invalid slotId " + i);
        return -1;
    }

    public static String getPrintableString(String str, int i) {
        if (str == null) {
            return null;
        }
        if (str.length() <= i) {
            return str;
        }
        return str.substring(0, i) + Rlog.pii(false, str.substring(i));
    }

    public static String parseImpiToString(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        SimTlv simTlv = new SimTlv(bArr, 0, bArr.length);
        do {
            if (simTlv.isValidObject() && simTlv.getTag() == 128) {
                return new String(simTlv.getData(), Charset.forName("UTF-8"));
            }
        } while (simTlv.nextObject());
        Rlog.d(MTK_LOG_TAG, "[ISIM] can't find TLV. record = " + IccUtils.bytesToHexString(bArr));
        return null;
    }

    public static String parsePnnToString(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        SimTlv simTlv = new SimTlv(bArr, 0, bArr.length);
        while (simTlv.isValidObject()) {
            if (simTlv.getTag() == TAG_FULL_NETWORK_NAME) {
                return networkNameToString(simTlv.getData(), 0, simTlv.getData().length);
            }
            simTlv.nextObject();
        }
        return null;
    }

    public static String parseSpnToString(int i, byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        if (1 == i) {
            return IccUtils.adnStringFieldToString(bArr, 1, bArr.length - 1);
        }
        if (2 == i) {
            byte b = bArr[1];
            byte b2 = bArr[2];
            byte[] bArr2 = new byte[32];
            System.arraycopy(bArr, 3, bArr2, 0, bArr.length - 3 < 32 ? bArr.length - 3 : 32);
            int i2 = 0;
            while (i2 < bArr2.length && (bArr2[i2] & PplMessageManager.Type.INVALID) != 255) {
                i2++;
            }
            if (i2 == 0) {
                return "";
            }
            try {
                if (b != 0) {
                    if (b == 2) {
                        String str = new String(bArr2, 0, i2, "US-ASCII");
                        return TextUtils.isPrintableAsciiOnly(str) ? str : GsmAlphabet.gsm7BitPackedToString(bArr2, 0, (i2 * 8) / 7);
                    }
                    if (b != 3) {
                        if (b == 4) {
                            return new String(bArr2, 0, i2, "utf-16");
                        }
                        if (b != 8) {
                            if (b != 9) {
                                Rlog.d(MTK_LOG_TAG, "spn decode error: " + ((int) b));
                            }
                        }
                    }
                    return GsmAlphabet.gsm7BitPackedToString(bArr2, 0, (i2 * 8) / 7);
                }
                return new String(bArr2, 0, i2, "ISO-8859-1");
            } catch (Exception e) {
                Rlog.d(MTK_LOG_TAG, "spn decode error: " + e);
            }
        }
        return null;
    }
}

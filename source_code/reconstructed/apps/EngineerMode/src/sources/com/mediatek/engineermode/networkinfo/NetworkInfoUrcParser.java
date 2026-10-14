package com.mediatek.engineermode.networkinfo;

import android.content.Context;
import android.support.v4.app.NotificationManagerCompat;
import android.support.v4.media.session.PlaybackStateCompat;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mdmcomponent.MDMContent;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class NetworkInfoUrcParser {
    private static final int DATA_FORMAT = 16;
    private static final int DATA_OFFSET_2 = 2;
    private static final int DATA_OFFSET_4 = 4;
    private static final int DATA_OFFSET_6 = 6;
    private static final int DATA_OFFSET_8 = 8;
    private static final int MAX_DATA_PER_LINE = 7;
    private static final String TAG = "NetworkInfo/UrcParser";
    private static final int TYPE_ALIGNMENT = 8;
    private static final int TYPE_FLOAT = 7;
    private static final int TYPE_INT16 = 4;
    private static final int TYPE_INT32 = 5;
    private static final int TYPE_INT8 = 3;
    private static final int TYPE_LONG = 6;
    private static final int TYPE_STRING = 9;
    private static final int TYPE_UINT16 = 1;
    private static final int TYPE_UINT32 = 2;
    private static final int TYPE_UINT8 = 0;
    private int mColumn;
    private Context mContext;
    private String[] mLabels;
    private int mOffset;
    private String mRawString;
    private String[] mRawValues;
    private StringBuilder mResult;
    private int mType;
    private static final Boolean ALIGN_MENT_ENABLE = true;
    private static final Boolean GPRS_MODE_ENABLE = true;
    private static final Boolean AMR_SUPPORT_ENABLE = true;
    private static final Boolean FWPNC_LAI_INFO_ENABLE = false;
    private static final Boolean UMTS_R8 = true;
    private static final Boolean WISDOM_EM = true;
    private static final Boolean ADVANCED_EM = true;
    private static final Boolean IS_MOLY = Boolean.valueOf(Content.IS_MOLY);

    public NetworkInfoUrcParser(Context context) {
        this.mContext = context;
    }

    private String decodeMcc(int i) {
        int i2 = i + 111;
        if (i2 % 10 == 0) {
            i2 -= 10;
        }
        if ((i2 / 10) % 10 == 0) {
            i2 -= 100;
        }
        if ((i2 / 100) % 10 == 0) {
            i2 += NotificationManagerCompat.IMPORTANCE_UNSPECIFIED;
        }
        return ("000" + i2).substring(String.valueOf(i2).length());
    }

    private String decodeMnc(int i) {
        int i2 = i + 11;
        if (i2 % 10 == 0) {
            i2 -= 10;
        }
        if ((i2 / 10) % 10 == 0) {
            i2 -= 100;
        }
        return ("00" + i2).substring(String.valueOf(i2).length());
    }

    private String getValueFrom2Byte(String str, int i, boolean z) {
        if (str.length() < i + 4) {
            return "0";
        }
        try {
            String strSubstring = str.substring(i, i + 2);
            String str2 = str.substring(i + 2, i + 4) + strSubstring;
            return z ? Short.valueOf((short) Integer.valueOf(str2, 16).intValue()).toString() : Integer.valueOf(str2, 16).toString();
        } catch (NumberFormatException e) {
            return "Error.";
        }
    }

    private String getValueFrom4Byte(String str, int i, boolean z) {
        if (str.length() < i + 8) {
            return "0";
        }
        try {
            String strSubstring = str.substring(i, i + 2);
            String strSubstring2 = str.substring(i + 2, i + 4);
            String strSubstring3 = str.substring(i + 4, i + 6);
            String str2 = str.substring(i + 6, i + 8) + strSubstring3 + strSubstring2 + strSubstring;
            return z ? Integer.valueOf((int) Long.valueOf(str2, 16).longValue()).toString() : Long.valueOf(str2, 16).toString();
        } catch (NumberFormatException e) {
            return "Error.";
        }
    }

    private String getValueFromByte(String str, int i, boolean z) {
        if (str.length() < i + 2) {
            return "0";
        }
        try {
            String strSubstring = str.substring(i, i + 2);
            return z ? Byte.valueOf((byte) Short.valueOf(strSubstring, 16).shortValue()).toString() : Short.valueOf(strSubstring, 16).toString();
        } catch (NumberFormatException e) {
            return "Error.";
        }
    }

    /* JADX WARN: Code duplicated, block: B:59:0x015f A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:60:0x0161 A[RETURN] */
    private String nextValue() {
        int i = this.mOffset;
        this.mOffset++;
        String[] strArr = this.mRawValues;
        if (strArr == null || strArr.length <= i) {
            return "";
        }
        String strTrim = strArr[i].trim();
        try {
            int i2 = Integer.parseInt(strTrim);
            String[] strArr2 = null;
            switch (this.mType) {
                case Content.CDMA_1XRTT_INFO_INDEX /* 301 */:
                    if (i == 1) {
                        strArr2 = new String[]{"CP_DISABLED", "CP_SYS_DETERMINATION", "CP_PILOT_ACQUISITION", "CP_SYNC_ACQUISITION", "CP_TIMING_CHANGE", "CP_IDLE", "CP_UPDATE_OHD_INFO", "CP_PAGE_RESPONSE", "CP_ORD_MSG_RESP", "CP_ORIGINATION", "CP_REGISTRATION", "CP_MSG_TRANSMISSION", "CP_TC_INIT", "CP_TC_WAIT_ORDER", "CP_TC_WAIT_ANSWER", "CP_TC_CONVERSATION", "CP_TC_RELEASE", "CP_NST", "CP_FROZEN", "CP_TC_FROZEN"};
                        break;
                    } else if (i == 2) {
                        strArr2 = new String[]{"TRUE", "FALSE", "Unknown"};
                        break;
                    } else {
                        if (i == 19 || i == 20) {
                            return String.format("%.1f", Float.valueOf(i2 / (-2.0f)));
                        }
                        if (i == 22) {
                            return String.valueOf(i2 / 10);
                        }
                        switch (i) {
                            case 14:
                                strArr2 = new String[]{"FALSE", "TRUE"};
                                break;
                            case 15:
                                return decodeMcc(i2);
                            case 16:
                                return decodeMnc(i2);
                        }
                    }
                    break;
                case Content.CDMA_1XRTT_SCH_INFO_INDEX /* 302 */:
                    if (i != 1) {
                        if (i == 4) {
                            if (i2 == 15) {
                                return "Infinite";
                            }
                        } else if (i != 6) {
                            if (i == 9) {
                                if (i2 == 15) {
                                    return "Infinite";
                                }
                            }
                        }
                    }
                    return String.format("0x%x", Integer.valueOf(i2));
                case Content.CDMA_1XRTT_SERVING_INDEX /* 304 */:
                    if (this.mColumn == 1) {
                        return String.format("%.1f", Float.valueOf(i2 / (-2.0f)));
                    }
                    break;
                case 305:
                    if (i == 5 || i == 6) {
                        return String.format("%.2f", Float.valueOf(i2 / 128.0f));
                    }
                    if (i == 15 || i == 16) {
                        return String.format("%.1f", Float.valueOf(i2 / (-2.0f)));
                    }
                    break;
                case Content.CDMA_EVDO_ACTIVE_SET_INDEX /* 306 */:
                    if (this.mColumn == 1) {
                        return String.format("%.2f", Float.valueOf(i2 / 8.0f));
                    }
                    break;
                case Content.CDMA_EVDO_CANDICATE_SET_INDEX /* 307 */:
                case Content.CDMA_EVDO_NEIGHBOR_SET_INDEX /* 308 */:
                    if (this.mColumn == 3) {
                        return String.format("%.2f", Float.valueOf(i2 / 8.0f));
                    }
                    break;
                case Content.CDMA_EVDO_FL_INDEX /* 309 */:
                    if (i == 1) {
                        return String.format("%.2f", Float.valueOf(i2 / 64.0f));
                    }
                    break;
                case Content.CDMA_EVDO_RL_INDEX /* 310 */:
                    if (i == 4 || i == 5) {
                        return String.format("%.2f", Float.valueOf(i2 / 128.0f));
                    }
                    break;
                case Content.CDMA_EVDO_STATE_INDEX /* 311 */:
                    switch (i) {
                        case 1:
                            strArr2 = new String[]{"NEW_SESSION", "ALIVE_SESSION", "PRIOR_SESSION", "OPENED_SESSION"};
                            break;
                        case 2:
                            strArr2 = new String[]{"AT_PWROFF", "AT_INACTIVE", "AT_PILOTACQ", "AT_SYNC", "AT_IDLE", "AT_ACCESS", "AT_CONNECTED"};
                            break;
                        case 3:
                            strArr2 = new String[]{"ALMP_INIT_STATE", "ALMP_IDLE_STATE", "ALMP_CONN_SETUP_STATE", "ALMP_CONNECTED_STATE"};
                            break;
                        case 4:
                            strArr2 = new String[]{"INSP_INACTIVE_STATE", "INSP_NETWORK_DET_STATE", "INSP_PILOT_ACQ_STATE", "INSP_SYNC_STATE", "INSP_TIMING_CHANGE_STATE", "INSP_WFR_1XASSTST_STATE"};
                            break;
                        case 5:
                            strArr2 = new String[]{"IDP_INACTIVE_ST", "IDP_MONITOR_ST", "IDP_SLEEP_ST", "IDP_CONN_SETUP_ST", "IDP_FREEZE_PENDING_ST", "IDP_FREEZE_ST", "IDP_CONN_FROZEN_ST", "IDP_STATE_MAX"};
                            break;
                        case 6:
                            strArr2 = new String[]{"OMP_INACTIVE_ST", "OMP_ACTIVE_ST", "OMP_STATE_MAX"};
                            break;
                        case 7:
                            strArr2 = new String[]{"CSP_INACTIVE_STATE", "CSP_CLOSING_STATE", "CSP_OPEN_STATE"};
                            break;
                        case 8:
                            strArr2 = new String[]{"RUP_INACTIVE", "RUP_IDLE", "RUP_CONNECTED", "RUP_IRAT_MEASUREMENT", "RUP_INVALID"};
                            break;
                    }
                    break;
            }
            return (strArr2 == null || i2 < 0 || i2 >= strArr2.length) ? strTrim : strArr2[i2];
        } catch (NumberFormatException e) {
            return strTrim;
        }
    }

    private String oneBlockFrom2Byte(String str, String str2, int i, boolean z, int i2) {
        String str3 = new String(str);
        for (int i3 = 0; i3 < i2; i3++) {
            if (i2 > 7 && i3 % 7 == 0) {
                str3 = str3 + "\n";
            }
            str3 = str3 + getValueFrom2Byte(str2, i, z);
            i += 4;
            if (i3 != i2 - 1) {
                str3 = str3 + ", ";
            }
        }
        return str3 + "\n";
    }

    private String oneBlockFrom4Byte(String str, String str2, int i, boolean z, int i2) {
        String str3 = new String(str);
        for (int i3 = 0; i3 < i2; i3++) {
            if (i2 > 7 && i3 % 7 == 0) {
                str3 = str3 + "\n";
            }
            str3 = str3 + getValueFrom4Byte(str2, i, z);
            i += 8;
            if (i3 != i2 - 1) {
                str3 = str3 + ", ";
            }
        }
        return str3 + "\n";
    }

    private String oneBlockFromByte(String str, String str2, int i, boolean z, int i2) {
        String str3 = new String(str);
        for (int i3 = 0; i3 < i2; i3++) {
            if (i2 > 7 && i3 % 7 == 0) {
                str3 = str3 + "\n";
            }
            str3 = str3 + getValueFromByte(str2, i, z);
            i += 2;
            if (i3 != i2 - 1) {
                str3 = str3 + ", ";
            }
        }
        return str3 + "\n";
    }

    private ArrayList<String[]> parse1xRttServing() {
        ArrayList<String[]> arrayList = new ArrayList<>();
        arrayList.add(new String[]{"Active Set"});
        arrayList.addAll(parseCellInfo());
        arrayList.add(new String[]{"Candicate Set"});
        arrayList.addAll(parseCellInfo());
        arrayList.add(new String[]{"Neighbor Set"});
        arrayList.addAll(parseCellInfo());
        return arrayList;
    }

    private ArrayList<String[]> parseCellInfo() {
        ArrayList<String[]> arrayList = new ArrayList<>();
        arrayList.add(this.mLabels);
        int length = this.mLabels.length;
        this.mColumn = -1;
        try {
            int i = Integer.parseInt(nextValue());
            for (int i2 = 0; i2 < i; i2++) {
                ArrayList arrayList2 = new ArrayList();
                for (int i3 = 0; i3 < length; i3++) {
                    this.mColumn = i3;
                    arrayList2.add(nextValue());
                }
                arrayList.add((String[]) arrayList2.toArray(new String[arrayList2.size()]));
            }
            return arrayList;
        } catch (NumberFormatException e) {
            return arrayList;
        }
    }

    private ArrayList<String[]> parseCommonCdmaInfo() {
        ArrayList<String[]> arrayList = new ArrayList<>();
        int i = 0;
        while (true) {
            String[] strArr = this.mLabels;
            if (i >= strArr.length) {
                return arrayList;
            }
            arrayList.add(new String[]{strArr[i], nextValue()});
            i++;
        }
    }

    private String parseElement(int i, String str) {
        return parseElement(i, str, 1);
    }

    private String parseElement(int i, String str, int i2) {
        String strOneBlockFromByte = "";
        switch (i) {
            case 0:
                strOneBlockFromByte = oneBlockFromByte(str, this.mRawString, this.mOffset, false, i2);
                this.mOffset += i2 * 2;
                break;
            case 1:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 3) & (-4);
                }
                strOneBlockFromByte = oneBlockFrom2Byte(str, this.mRawString, this.mOffset, false, i2);
                this.mOffset += i2 * 4;
                break;
            case 2:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 7) & (-8);
                }
                strOneBlockFromByte = oneBlockFrom4Byte(str, this.mRawString, this.mOffset, false, i2);
                this.mOffset += i2 * 8;
                break;
            case 3:
                strOneBlockFromByte = oneBlockFromByte(str, this.mRawString, this.mOffset, true, i2);
                this.mOffset += i2 * 2;
                break;
            case 4:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 3) & (-4);
                }
                strOneBlockFromByte = oneBlockFrom2Byte(str, this.mRawString, this.mOffset, true, i2);
                this.mOffset += i2 * 4;
                break;
            case 5:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 7) & (-8);
                }
                strOneBlockFromByte = oneBlockFrom4Byte(str, this.mRawString, this.mOffset, true, i2);
                this.mOffset += i2 * 8;
                break;
            case 6:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 7) & (-8);
                }
                long jLongValue = 0;
                try {
                    jLongValue = Long.valueOf(getValueFrom4Byte(this.mRawString, this.mOffset, true)).longValue() / PlaybackStateCompat.ACTION_SKIP_TO_QUEUE_ITEM;
                } catch (NumberFormatException e) {
                    Elog.v(TAG, "rscp = Long.valueOf(strRscp)/4096 exp.");
                }
                strOneBlockFromByte = str + jLongValue + "\n";
                this.mOffset += 8;
                break;
            case 7:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 7) & (-8);
                }
                float fFloatValue = 0.0f;
                try {
                    fFloatValue = Float.valueOf(getValueFrom4Byte(this.mRawString, this.mOffset, true)).floatValue() / 4096.0f;
                } catch (NumberFormatException e2) {
                    Elog.e(TAG, "ecno = Long.valueOf(strEcno)/4096 exp.");
                }
                strOneBlockFromByte = str + fFloatValue + "\n";
                this.mOffset += 8;
                break;
            case 8:
                if (ALIGN_MENT_ENABLE.booleanValue()) {
                    this.mOffset = (this.mOffset + 7) & (-8);
                }
                break;
            case 9:
                String str2 = str;
                for (int i3 = 0; i3 < i2; i3++) {
                    String valueFromByte = getValueFromByte(this.mRawString, this.mOffset, false);
                    this.mOffset += 2;
                    try {
                        str2 = str2 + Character.toString((char) Short.valueOf(valueFromByte).shortValue());
                    } catch (NumberFormatException e3) {
                    }
                }
                strOneBlockFromByte = str2 + "\n";
                break;
        }
        this.mResult.append(strOneBlockFromByte);
        return strOneBlockFromByte;
    }

    private int readIntegerFrom2Byte() {
        int length = this.mRawString.length();
        int i = this.mOffset;
        if (length < i + 4) {
            this.mOffset = i + 4;
            return 0;
        }
        try {
            String strSubstring = this.mRawString.substring(i, i + 2);
            String str = this.mRawString.substring(this.mOffset + 2, this.mOffset + 4) + strSubstring;
            this.mOffset += 4;
            return Short.valueOf((short) Integer.valueOf(str, 16).intValue()).shortValue();
        } catch (NumberFormatException e) {
            return 0;
        }
    }

    private int readIntegerFromByte() {
        int length = this.mRawString.length();
        int i = this.mOffset;
        if (length < i + 2) {
            this.mOffset = i + 2;
            return 0;
        }
        String strSubstring = this.mRawString.substring(i, i + 2);
        this.mOffset += 2;
        try {
            return Integer.parseInt(strSubstring, 16);
        } catch (NumberFormatException e) {
            return 0;
        }
    }

    public String get3GCsceEMServCellSStatusInd(boolean z) {
        if (!IS_MOLY.booleanValue()) {
            parseElement(0, "ref_count:");
            parseElement(1, "msg_len");
        }
        parseElement(0, "cell_idx: ");
        parseElement(1, "uarfacn_DL: ");
        parseElement(1, "psc: ");
        parseElement(0, "is_s_criteria_satisfied: ");
        parseElement(3, "qQualmin: ");
        parseElement(3, "qRxlevmin: ");
        parseElement(5, "srxlev: ");
        parseElement(5, "spual: ");
        parseElement(6, "rscp: ");
        if (!z) {
            parseElement(7, "ec_no: ");
        }
        parseElement(1, "cycle_len: ");
        if (!z) {
            parseElement(0, "quality_measure: ");
        }
        parseElement(0, "band: ");
        parseElement(5, "rssi: ");
        parseElement(2, "cell_identity: ");
        if (UMTS_R8.booleanValue()) {
            parseElement(2, "csg_id: ");
            parseElement(0, "apbcr_priority: ");
            parseElement(0, "sprio_search1: ");
            parseElement(0, "sprio_search2: ");
            parseElement(0, "threshserv_low: ");
            if (IS_MOLY.booleanValue()) {
                parseElement(0, "threshserv_low2: ");
            }
        }
        if (!z) {
            parseElement(0, "multi_plmn_count: ");
            for (int i = 0; i < 6; i++) {
                parseElement(0, "multi_plmn_id[" + i + "].mcc: ", 3);
                parseElement(0, "multi_plmn_id[" + i + "].mnc: ", 3);
            }
            if (readIntegerFromByte() != 0) {
                parseElement(1, "lac: ");
            } else {
                this.mResult.append("lac: invalid\n");
                this.mOffset += 4;
            }
            if (readIntegerFromByte() != 0) {
                parseElement(0, "rac: ");
            } else {
                this.mResult.append("rac: invalid\n");
                this.mOffset += 2;
            }
            if (readIntegerFromByte() != 0) {
                parseElement(0, "num_ura_id: ");
                for (int i2 = 0; i2 < 8; i2++) {
                    if (readIntegerFromByte() == 1) {
                        parseElement(0, "uraIdentity[" + i2 + "]: ");
                        this.mOffset = this.mOffset + 2;
                    } else {
                        parseElement(0, "uraIdentity[" + i2 + "]: ", 2);
                    }
                }
            } else {
                this.mResult.append("ura: invalid\n");
            }
        }
        return this.mResult.toString();
    }

    public String get3GCsceEmInfoMultiPlmn() {
        parseElement(0, "multi_plmn_count: ");
        for (int i = 0; i < 6; i++) {
            parseElement(0, "mcc1_" + i + ":");
            parseElement(0, "mcc2_" + i + ":");
            parseElement(0, "mcc3_" + i + ":");
            parseElement(0, "mnc1_" + i + ":");
            parseElement(0, "mnc2_" + i + ":");
            parseElement(0, "mnc3_" + i + ":");
        }
        return this.mResult.toString();
    }

    public String get3GGeneralInfo() {
        if (getValueFromByte(this.mRawString, this.mOffset, false).equals("255")) {
            this.mResult.append("service_status:\n");
            this.mOffset += 2;
        } else {
            parseElement(0, "service_status: ");
        }
        if (getValueFromByte(this.mRawString, this.mOffset, false).equals("255")) {
            this.mResult.append("umts_rrc_state:\n");
            this.mOffset += 2;
        } else {
            parseElement(0, "umts_rrc_state: ");
        }
        if (getValueFrom2Byte(this.mRawString, this.mOffset, false).equals("65535")) {
            this.mResult.append("uarfcn_DL:\n");
            this.mOffset += 4;
        } else {
            parseElement(1, "uarfcn_DL: ");
        }
        if (getValueFrom2Byte(this.mRawString, this.mOffset, false).equals("65535")) {
            this.mResult.append("psc:\n");
            this.mOffset += 4;
        } else {
            parseElement(1, "psc: ");
        }
        return this.mResult.toString();
    }

    public String get3GHandoverSequenceIndStuct() {
        parseElement(0, "service_status: ");
        parseElement(8, "");
        parseElement(1, "[old_cell_info:-----]\nprimary_uarfcn_DL: ");
        parseElement(1, "working_uarfcn: ");
        parseElement(1, "physicalCellId: ");
        parseElement(1, "[target_cell_info:-----]\nprimary_uarfcn_DL: ");
        parseElement(1, "working_uarfcn: ");
        parseElement(1, "physicalCellId: ");
        return this.mResult.toString();
    }

    public String get3GMemeEmInfoHServCellInd() {
        parseElement(1, "HSDSCH_Serving_UARFCN: ");
        parseElement(1, "HSDSCH_Serving_PSC: ");
        parseElement(1, "EDCH_Serving_UARFCN: ");
        parseElement(1, "EDCH_Serving_PSC: ");
        return this.mResult.toString();
    }

    public String get3GMemeEmInfoUmtsCellStatus() {
        parseElement(3, "tx_power: ");
        parseElement(0, "num_cells: ");
        int i = 8;
        parseElement(8, "");
        String[] strArr = new String[32];
        int i2 = 0;
        while (i2 < 32) {
            this.mResult.append("--------------------\n");
            this.mResult.append("umts_cell_list[" + i2 + "]:\n");
            parseElement(1, "UARFCN: ");
            parseElement(1, "PSC: ");
            parseElement(5, "RSCP: ");
            parseElement(5, "ECNO: ");
            parseElement(0, "cell_type: ");
            parseElement(0, "Band: ");
            parseElement(5, "RSSI: ");
            parseElement(2, "Cell_identity: ");
            int integerFromByte = readIntegerFromByte();
            int i3 = integerFromByte & 1;
            int i4 = integerFromByte & 2;
            int i5 = integerFromByte & 4;
            parseElement(0, "num_plmn_id: ");
            for (int i6 = 0; i6 < 6; i6++) {
                parseElement(1, "plmn_id_list[" + i6 + "].mcc: ");
                parseElement(1, "plmn_id_list[" + i6 + "].mnc: ");
            }
            if (i3 != 0) {
                parseElement(1, "lac: ");
            } else {
                this.mResult.append("lac: invalid\n");
                this.mOffset += 4;
            }
            if (i4 != 0) {
                parseElement(0, "rac: ");
            } else {
                this.mResult.append("rac: invalid\n");
                this.mOffset += 2;
            }
            if (i5 != 0) {
                parseElement(0, "num_ura_id: ");
                int i7 = 0;
                while (i7 < i) {
                    if (readIntegerFromByte() == 1) {
                        parseElement(0, "uraIdentity[" + i7 + "]: ");
                        this.mOffset = this.mOffset + 2;
                    } else {
                        parseElement(0, "uraIdentity[" + i7 + "]: ", 2);
                    }
                    i7++;
                    i = 8;
                }
                this.mOffset += 4;
            } else {
                this.mResult.append("ura: invalid\n");
                this.mOffset += 54;
            }
            i2++;
            i = 8;
        }
        return this.mResult.toString();
    }

    public String get3GMemeEmPeriodicBlerReportInd() {
        parseElement(0, "num_trch: ");
        for (int i = 0; i < 8; i++) {
            parseElement(8, "");
            parseElement(0, "TrCHId" + i + ":");
            parseElement(2, "TotalCRC" + i + ":");
            parseElement(2, "BadCRC" + i + ":");
        }
        return this.mResult.toString();
    }

    public String get3GMmEmInfo() {
        parseElement(0, "t3212: ");
        parseElement(0, "ATT_flag: ");
        parseElement(0, "MM_reject_cause: ");
        parseElement(0, "MM_state: ");
        parseElement(0, "MCC:", 3);
        parseElement(0, "MNC:", 3);
        parseElement(0, "LOC:", 2);
        parseElement(0, "rac: ");
        parseElement(0, "TMSI:", 4);
        parseElement(0, "is_t3212_running:");
        parseElement(1, "t3212_timer_value:");
        parseElement(1, "t3212_passed_time:");
        parseElement(0, "common_access_class: ");
        parseElement(0, "cs_access_class: ");
        parseElement(0, "ps_access_class: ");
        this.mOffset += 8;
        return this.mResult.toString();
    }

    public String get3GSlceEmPsDataRateStatusInd() {
        parseElement(0, "ps_number: ");
        parseElement(8, "");
        for (int i = 0; i < 8; i++) {
            parseElement(0, "RAB_ID" + i + ":");
            parseElement(3, "RB_UD" + i + ":");
            parseElement(2, "DL_rate" + i + ":");
            parseElement(2, "UL_rate" + i + ":");
        }
        return this.mResult.toString();
    }

    public String get3GTcmMmiEmInfo() {
        parseElement(0, "num_of_valid_entries: ");
        for (int i = 0; i < 3; i++) {
            parseElement(0, "nsapi" + i + ":");
            parseElement(0, "data_speed_value" + i + ":");
        }
        return this.mResult.toString();
    }

    public String get3GUl2EmAdmPoolStatusIndStruct() {
        this.mResult.append("[dl_adm_poll_info:-----]\n");
        for (int i = 0; i < 4; i++) {
            parseElement(1, "max_usage_kbytes" + i + ":");
            parseElement(1, "avg_usage_kbytes" + i + ":");
        }
        this.mResult.append("[ul_adm_poll_info:-----]\n");
        for (int i2 = 0; i2 < 4; i2++) {
            parseElement(1, "max_usage_kbytes" + i2 + ":");
            parseElement(1, "avg_usage_kbytes" + i2 + ":");
        }
        return this.mResult.toString();
    }

    public String get3GUl2EmPeriodicBlerReportInd() {
        parseElement(0, "num_trch:");
        parseElement(8, "");
        this.mResult.append("TrCHBler:--------");
        for (int i = 0; i < 8; i++) {
            parseElement(0, "TrCHId" + i + ":");
            parseElement(2, "TotalCRC" + i + ":");
            parseElement(2, "BadCRC" + i + ":");
        }
        return this.mResult.toString();
    }

    public String get3GUl2EmPsDataRateStatusIndStruct() {
        parseElement(1, "rx_mac_data_rate:");
        parseElement(1, "rx_pdcp_data_rate:");
        parseElement(1, "tx_mac_data_rate:");
        parseElement(1, "tx_pdcp_data_rate:");
        return this.mResult.toString();
    }

    public String get3GUl2EmUrlcEventStatusIndStruct() {
        parseElement(3, "rb_id:");
        parseElement(0, "rlc_action:");
        parseElement(0, "rb_info:--- \nis_srb:");
        parseElement(0, "cn_domain:");
        parseElement(0, "rlc_info:--- \nrlc_mode:");
        parseElement(0, "direction:");
        parseElement(1, "rlc_parameter:--- \npdu_Size:");
        parseElement(1, "tx_window_size:");
        parseElement(1, "rx_window_size:");
        parseElement(0, "discard_mode:");
        parseElement(1, "discard_value:");
        parseElement(0, "flush_data_indicator:");
        parseElement(0, "reset_cause:");
        return this.mResult.toString();
    }

    public String get3GUrrUmtsSrncId() {
        parseElement(1, "srnc: ");
        return this.mResult.toString();
    }

    public String get3Gul2EmHsdschReconfigStatusIndStruct() {
        for (int i = 0; i < 8; i++) {
            parseElement(0, "reconfig_info" + i + ":");
        }
        return this.mResult.toString();
    }

    public String getBLKInfo() {
        parseElement(0, "ul_coding_scheme: ");
        parseElement(0, "ul_cv: ");
        parseElement(0, "ul_tlli: ");
        parseElement(1, "ul_bsn1: ");
        if (GPRS_MODE_ENABLE.booleanValue()) {
            parseElement(1, "ul_bsn2: ");
            parseElement(0, "ul_cps: ");
            parseElement(0, "ul_rsb: ");
            parseElement(0, "ul_spb: ");
        }
        parseElement(0, "dl_c_value_in_rx_level: ");
        parseElement(0, "dl_rxqual: ");
        parseElement(0, "dl_sign_var: ");
        parseElement(0, "dl_coding_scheme: ");
        parseElement(0, "dl_fbi: ");
        parseElement(1, "dl_bsn1: ");
        if (GPRS_MODE_ENABLE.booleanValue()) {
            parseElement(1, "dl_bsn2: ");
            parseElement(0, "dl_cps: ");
            parseElement(0, "dl_gmsk_mean_bep_lev: ");
            parseElement(0, "dl_8psk_mean_bep_lev: ");
            parseElement(0, "dl_tn_mean_bep_lev:", 8);
        }
        parseElement(0, "dl_tn_interference_lev:", 8);
        return this.mResult.toString();
    }

    public String getCaListInfo() {
        parseElement(0, "valid: ");
        parseElement(0, "number_of_channels: ");
        parseElement(1, "arfcn_list:", 64);
        return this.mResult.toString();
    }

    public String getCellSelInfo() {
        parseElement(0, "crh: ");
        parseElement(0, "ms_txpwr: ");
        parseElement(0, "rxlev_access_min: ");
        return this.mResult.toString();
    }

    public String getChDscrInfo() {
        parseElement(0, "channel_type: ");
        parseElement(0, "tn: ");
        parseElement(0, "tsc: ");
        parseElement(0, "hopping_flag: ");
        parseElement(0, "maio: ");
        parseElement(0, "hsn: ");
        parseElement(0, "num_of_carriers: ");
        parseElement(1, "arfcn:", 64);
        parseElement(3, "is_BCCH_arfcn_valid: ");
        parseElement(1, "BCCH_arfcn: ");
        parseElement(0, "cipher_algo: ");
        parseElement(0, "imeisv_digit: ", 16);
        parseElement(0, "channel_mode: ");
        if (AMR_SUPPORT_ENABLE.booleanValue()) {
            parseElement(3, "amr_valid: ");
            parseElement(0, "mr_ver: ");
            parseElement(3, "nscb: ");
            parseElement(3, "icmi: ");
            parseElement(0, "start_codec_mode: ");
            parseElement(0, "acs: ");
            parseElement(0, "threshold:", 3);
            parseElement(0, "hysteresis:", 3);
        }
        return this.mResult.toString();
    }

    public String getControlMsgInfo() {
        parseElement(0, "msg_type: ");
        parseElement(0, "rr_cause: ");
        return this.mResult.toString();
    }

    public String getCtrlchanInfo() {
        parseElement(0, "mscr: ");
        parseElement(0, "att: ");
        parseElement(0, "bs_ag_blks_res: ");
        parseElement(0, "ccch_conf: ");
        parseElement(0, "cbq2: ");
        parseElement(0, "bs_pa_mfrms: ");
        parseElement(0, "t3212: ");
        return this.mResult.toString();
    }

    public String getGPRSGenInfo() {
        parseElement(2, "t3192: ");
        parseElement(2, "t3168: ");
        parseElement(0, "rp: ");
        parseElement(0, "gprs_support: ");
        parseElement(0, "egprs_support: ");
        parseElement(0, "sgsn_r: ");
        parseElement(0, "pfc_support: ");
        parseElement(0, "epcr_support: ");
        parseElement(0, "bep_period: ");
        return this.mResult.toString();
    }

    public String getGmmEmInfo() {
        parseElement(1, "ready_timer: ");
        parseElement(1, "rau_timer: ");
        parseElement(0, "ms_state: ");
        parseElement(3, "is_rau_timer_running: ");
        parseElement(1, "rau_timer_passed_time: ");
        parseElement(0, "attach_req_mobile_identity: ");
        if (WISDOM_EM.booleanValue() && ADVANCED_EM.booleanValue()) {
            parseElement(0, "ptmsi: ", 4);
            parseElement(0, "attach_rej_cause: ");
            parseElement(0, "rau_rej_cause: ");
            parseElement(0, "gprs_update_status: ");
            parseElement(0, "cipher_algo: ");
            parseElement(0, "attach_type: ");
            parseElement(0, "gmm_state: ");
            parseElement(0, "gprs_attach_status: ");
        }
        return this.mResult.toString();
    }

    public String getLAIInfo() {
        parseElement(0, "mcc:", 3);
        parseElement(0, "mnc:", 3);
        parseElement(0, "lac:", 2);
        parseElement(1, "cell_id: ");
        parseElement(0, "nc_info_index: ");
        parseElement(0, "rac: ");
        parseElement(0, "nmo: ");
        parseElement(0, "supported_Band: ");
        return this.mResult.toString();
    }

    public String getMIInfo() {
        parseElement(3, "present: ");
        parseElement(0, "no_of_instance: ");
        parseElement(3, "emr_report: ");
        parseElement(3, "umts_parameter_exist: ");
        return this.mResult.toString();
    }

    public String getMeasRepInfo() {
        parseElement(0, "rr_state: ");
        if (IS_MOLY.booleanValue()) {
            parseElement(0, "meas_mode: ");
        }
        parseElement(1, "serving_arfcn: ");
        parseElement(0, "serving_bsic: ");
        parseElement(0, "serving_current_band: ");
        parseElement(0, "serv_gprs_supported: ");
        parseElement(4, "serv_rla_in_quarter_dbm: ");
        if (IS_MOLY.booleanValue()) {
            parseElement(0, "serv_rla_reported_value: ");
        }
        parseElement(3, "is_serv_BCCH_rla_valid: ");
        parseElement(4, "serv_BCCH_rla_in_dedi_state: ");
        parseElement(0, "quality: ");
        parseElement(3, "gprs_pbcch_present: ");
        parseElement(3, "gprs_c31_c32_enable: ");
        if (!IS_MOLY.booleanValue()) {
            parseElement(4, "c31:", 32);
        }
        parseElement(4, "c1_serv_cell: ");
        parseElement(4, "c2_serv_cell: ");
        parseElement(4, "c31_serv_cell: ");
        parseElement(0, "num_of_carriers: ");
        parseElement(1, "nc_arfcn:", 32);
        parseElement(4, "rla_in_quarter_dbm:", 32);
        if (IS_MOLY.booleanValue()) {
            parseElement(0, "rla_in_reported_value: ", 32);
        }
        parseElement(0, "nc_info_status:", 32);
        parseElement(0, "nc_bsic:", 32);
        parseElement(5, "frame_offset:", 32);
        parseElement(5, "ebit_offset:", 32);
        parseElement(4, "c1:", 32);
        parseElement(4, "c2:", 32);
        if (IS_MOLY.booleanValue()) {
            parseElement(4, "c31:", 32);
        }
        parseElement(0, "multiband_report: ");
        parseElement(0, "timing_advance: ");
        parseElement(4, "tx_power_level: ");
        parseElement(4, "serv_rla_full_value_in_quater_dbm: ");
        parseElement(0, "nco: ");
        parseElement(0, "rxqual_sub: ");
        parseElement(0, "rxqual_full: ");
        parseElement(4, "using_tx_power_in_dbm: ");
        parseElement(3, "amr_info_valid: ");
        parseElement(0, "cmr_cmc_cmiu_cmid: ");
        parseElement(0, "c_i: ");
        parseElement(1, "icm: ");
        parseElement(1, "acs: ");
        parseElement(3, "dl_dtx_used: ");
        if (FWPNC_LAI_INFO_ENABLE.booleanValue()) {
            parseElement(0, "num_of_nc_lai: ");
            this.mResult.append("nc_lai:\n");
            for (int i = 0; i < 6; i++) {
                parseElement(0, "nc_lai[" + i + "]:\nmcc:", 3);
                parseElement(0, "mnc:", 3);
                parseElement(0, "lac:", 2);
                parseElement(1, "cell_id: ");
                parseElement(0, "nc_info_index: ");
            }
        }
        return this.mResult.toString();
    }

    public String getRACHCtrlInfo() {
        parseElement(0, "max_retrans: ");
        parseElement(0, "tx_integer: ");
        parseElement(0, "cba: ");
        parseElement(0, "re: ");
        parseElement(0, "acc_class:", 2);
        parseElement(3, "CB_supported: ");
        return this.mResult.toString();
    }

    public String getRadioLinkInfo() {
        parseElement(1, "max_value: ");
        parseElement(4, "current_value: ");
        parseElement(0, "dtx_ind: ");
        parseElement(0, "dtx_used: ");
        parseElement(3, "is_dsf: ");
        return this.mResult.toString();
    }

    public String getSI2QInfo() {
        parseElement(3, "present: ");
        parseElement(0, "no_of_instance: ");
        parseElement(3, "emr_report: ");
        parseElement(3, "pemr_report: ");
        parseElement(3, "umts_parameter_exist: ");
        return this.mResult.toString();
    }

    public String getSecurityConfigInfo() {
        parseElement(0, "Ciphering Algorithm: ");
        parseElement(0, "Integrity Algorithm: ");
        return this.mResult.toString();
    }

    public String getSlceVoiceInfo() {
        if (IS_MOLY.booleanValue()) {
            parseElement(0, "ULAMRType: ");
            parseElement(0, "DLAMRType: ");
        } else {
            parseElement(0, "voice: ");
        }
        return this.mResult.toString();
    }

    public String getSmEmInfo() {
        parseElement(0, "num_of_active_pdp_context: ");
        parseElement(8, "");
        for (int i = 0; i < 11; i++) {
            this.mResult.append("--------------------\n");
            this.mResult.append("pdp[" + i + "]:\n");
            parseElement(0, "pdp_index: ");
            parseElement(0, "nsapi: ");
            if (IS_MOLY.booleanValue()) {
                parseElement(0, "ti_value: ");
            }
            parseElement(0, "pdp_context_status: ");
            if (IS_MOLY.booleanValue()) {
                parseElement(0, "context_type: ");
                parseElement(0, "initiated_by: ");
                parseElement(0, "pdp_addr_type: ");
            }
            parseElement(0, "ip:", 16);
            parseElement(1, "sdu_size:");
            parseElement(9, "apn: ", 100);
            parseElement(0, "sm_cause: ");
            if (IS_MOLY.booleanValue()) {
                this.mOffset += 498;
            } else {
                this.mOffset += Cea708CCParser.Const.CODE_C1_DF2;
            }
        }
        return this.mResult.toString();
    }

    public String getTBFInfo() {
        parseElement(0, "tbf_mode: ");
        parseElement(0, "ul_tbf_status: ");
        parseElement(0, "ul_rel_cause: ");
        parseElement(0, "ul_ts_allocation: ");
        parseElement(0, "ul_rlc_mode: ");
        parseElement(0, "ul_mac_mode: ");
        parseElement(1, "number_rlc_octect: ");
        parseElement(0, "ul_tfi: ");
        parseElement(0, "ul_granularity: ");
        parseElement(0, "ul_usf: ");
        parseElement(0, "ul_tai: ");
        parseElement(1, "ul_tqi: ");
        parseElement(1, "ul_window_size: ");
        parseElement(0, "dl_tbf_status: ");
        parseElement(0, "dl_rel_cause: ");
        parseElement(0, "dl_ts_allocation: ");
        parseElement(0, "dl_rlc_mode: ");
        parseElement(0, "dl_mac_mode: ");
        parseElement(0, "dl_tfi: ");
        parseElement(0, "dl_tai: ");
        parseElement(1, "dl_window_size: ");
        if (GPRS_MODE_ENABLE.booleanValue()) {
            parseElement(0, "dl_out_of_memory: ");
        }
        return this.mResult.toString();
    }

    public String getxGCsceEMNeighCellSStatusIndStructSize(boolean z) {
        String str;
        String str2;
        if (!IS_MOLY.booleanValue()) {
            parseElement(0, "ref_count:");
            parseElement(1, "msg_len");
        }
        parseElement(0, "neigh_cell_count:");
        parseElement(0, "operation:");
        String valueFromByte = getValueFromByte(this.mRawString, this.mOffset, false);
        parseElement(0, "RAT_type:");
        parseElement(8, "");
        String str3 = "srxlev";
        String str4 = ":";
        if (valueFromByte.equals("1")) {
            this.mResult.append("----GSM_neigh_cells----\n");
            int i = 0;
            for (int i2 = 16; i < i2; i2 = 16) {
                parseElement(0, "cellidx" + i + ":");
                parseElement(1, "arfcn");
                parseElement(0, "bsic" + i + ":");
                parseElement(0, "is_bsic_verified" + i + ":");
                parseElement(0, "is_s_criteria_saticified" + i + ":");
                parseElement(0, MDMContent.EM_CSCE_NEIGH_CELL_CHOICE_GSM_NEIGH_CELLS_FREQ_BAND + i + ":");
                parseElement(3, "qRxlevmin" + i + ":");
                parseElement(5, "srxlev" + i + ":");
                parseElement(5, "rssi" + i + ":");
                parseElement(3, "apbcr_priority" + i + ":");
                parseElement(0, "threshx_high" + i + ":");
                parseElement(0, "threshx_low" + i + ":");
                if (IS_MOLY.booleanValue()) {
                    parseElement(0, "threshx_high2" + i + ":");
                    parseElement(0, "threshx_low2" + i + ":");
                }
                parseElement(8, "");
                i++;
            }
        } else if (valueFromByte.equals("2")) {
            this.mResult.append("----LTE_neigh_cells----\n");
            for (int i3 = 0; i3 < 16; i3++) {
                parseElement(1, "earfcn");
                parseElement(1, "pci" + i3 + ":");
                parseElement(5, "rsrp" + i3 + ":");
                parseElement(5, "rsrq" + i3 + ":");
                parseElement(5, "Treselection" + i3 + ":");
                parseElement(3, "apbcr_priority" + i3 + ":");
                parseElement(4, "qRxlevmin" + i3 + ":");
                parseElement(3, "qQualMinEUTRA" + i3 + ":");
                parseElement(0, "threshx_high" + i3 + ":");
                parseElement(0, "threshx_low" + i3 + ":");
                parseElement(0, "threshx_high2" + i3 + ":");
                parseElement(0, "threshx_low2" + i3 + ":");
                parseElement(8, "");
            }
        } else {
            this.mResult.append("----3G_neigh_cells----\n");
            int i4 = 0;
            while (i4 < 16) {
                parseElement(0, "cellidx" + i4 + str4);
                parseElement(1, "arfcn_DL");
                parseElement(1, "psc");
                parseElement(0, "is_s_criteria_saticified" + i4 + str4);
                parseElement(3, "qQualmin" + i4 + str4);
                parseElement(3, "qRxlevmin" + i4 + str4);
                parseElement(5, str3 + i4 + str4);
                parseElement(5, "squal" + i4 + str4);
                parseElement(6, "rscp: ");
                parseElement(5, "ec_no" + i4 + str4);
                parseElement(3, "apbcr_priority" + i4 + str4);
                parseElement(0, "threshx_high" + i4 + str4);
                parseElement(0, "threshx_low" + i4 + str4);
                if (IS_MOLY.booleanValue()) {
                    parseElement(0, "threshx_high2" + i4 + str4);
                    parseElement(0, "threshx_low2" + i4 + str4);
                }
                if (z) {
                    valueFromByte = valueFromByte;
                    str = str4;
                    str2 = str3;
                } else {
                    parseElement(2, "cell_identity" + i4 + str4);
                    int integerFromByte = readIntegerFromByte();
                    if (integerFromByte != 0) {
                        parseElement(0, "multi_plmn_count: ");
                        int i5 = 0;
                        while (i5 < 6) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("multi_plmn_id[");
                            sb.append(i5);
                            sb.append("].mcc: ");
                            parseElement(0, sb.toString(), 3);
                            parseElement(0, "multi_plmn_id[" + i5 + "].mnc: ", 3);
                            i5++;
                            str3 = str3;
                            str4 = str4;
                            integerFromByte = integerFromByte;
                        }
                        str = str4;
                        str2 = str3;
                    } else {
                        str = str4;
                        str2 = str3;
                        this.mOffset += 74;
                    }
                    int integerFromByte2 = readIntegerFromByte();
                    if (integerFromByte2 != 0) {
                        parseElement(1, "lac: ");
                    } else {
                        this.mResult.append("lac: invalid\n");
                        this.mOffset += 6;
                    }
                    int integerFromByte3 = readIntegerFromByte();
                    if (integerFromByte3 != 0) {
                        parseElement(0, "rac: ");
                    } else {
                        this.mResult.append("rac: invalid\n");
                        this.mOffset += 2;
                    }
                    int integerFromByte4 = readIntegerFromByte();
                    if (integerFromByte4 != 0) {
                        parseElement(0, "num_ura_id: ");
                        int i6 = 0;
                        while (i6 < 8) {
                            int i7 = integerFromByte2;
                            int i8 = integerFromByte3;
                            int i9 = integerFromByte4;
                            if (readIntegerFromByte() == 1) {
                                parseElement(0, "uraIdentity[" + i6 + "]: ");
                                this.mOffset = this.mOffset + 2;
                            } else {
                                parseElement(0, "uraIdentity[" + i6 + "]: ", 2);
                            }
                            i6++;
                            integerFromByte2 = i7;
                            integerFromByte3 = i8;
                            integerFromByte4 = i9;
                        }
                    } else {
                        this.mOffset += 50;
                        this.mResult.append("ura: invalid\n");
                    }
                }
                parseElement(8, "");
                i4++;
                str3 = str2;
                valueFromByte = valueFromByte;
                str4 = str;
            }
        }
        return this.mResult.toString();
    }

    String[] parseAntennaDiversity(int i, String str) {
        if (str == null) {
            return null;
        }
        Elog.v(TAG, "NetworkInfo ------ Type is: " + i);
        Elog.v(TAG, "NetworkInfo ------ Data is:\n");
        Elog.v(TAG, str + "\n");
        Elog.v(TAG, "NetworkInfo ---------------------------");
        this.mRawString = str;
        this.mResult = new StringBuilder();
        this.mOffset = 0;
        if (i == 177) {
            int integerFrom2Byte = readIntegerFrom2Byte();
            int integerFrom2Byte2 = readIntegerFrom2Byte();
            int integerFrom2Byte3 = readIntegerFrom2Byte();
            int integerFrom2Byte4 = readIntegerFrom2Byte();
            String[] strArr = new String[6];
            strArr[0] = String.valueOf(integerFrom2Byte);
            strArr[1] = String.valueOf(integerFrom2Byte3);
            strArr[2] = String.valueOf(integerFrom2Byte2);
            strArr[3] = String.valueOf(integerFrom2Byte4);
            strArr[4] = String.valueOf(integerFrom2Byte > integerFrom2Byte2 ? integerFrom2Byte : integerFrom2Byte2);
            strArr[5] = String.valueOf(integerFrom2Byte3 > integerFrom2Byte4 ? integerFrom2Byte3 : integerFrom2Byte4);
            return strArr;
        }
        if (i != 249 || readIntegerFromByte() == 0) {
            return null;
        }
        this.mOffset += 30;
        int integerFrom2Byte5 = readIntegerFrom2Byte();
        int integerFrom2Byte6 = readIntegerFrom2Byte();
        int integerFrom2Byte7 = readIntegerFrom2Byte();
        int integerFrom2Byte8 = readIntegerFrom2Byte();
        int integerFrom2Byte9 = readIntegerFrom2Byte();
        int integerFrom2Byte10 = readIntegerFrom2Byte();
        int integerFrom2Byte11 = readIntegerFrom2Byte();
        int integerFrom2Byte12 = readIntegerFrom2Byte();
        int integerFrom2Byte13 = readIntegerFrom2Byte();
        String[] strArr2 = new String[12];
        strArr2[0] = String.valueOf(integerFrom2Byte5);
        strArr2[1] = String.valueOf(integerFrom2Byte12);
        strArr2[2] = String.valueOf(integerFrom2Byte7);
        strArr2[3] = String.valueOf(integerFrom2Byte9);
        strArr2[4] = String.valueOf(integerFrom2Byte6);
        strArr2[5] = String.valueOf(integerFrom2Byte12);
        strArr2[6] = String.valueOf(integerFrom2Byte8);
        strArr2[7] = String.valueOf(integerFrom2Byte10);
        strArr2[8] = String.valueOf(integerFrom2Byte11);
        strArr2[9] = String.valueOf(integerFrom2Byte12);
        strArr2[10] = String.valueOf(integerFrom2Byte7 > integerFrom2Byte8 ? integerFrom2Byte7 : integerFrom2Byte8);
        strArr2[11] = String.valueOf(integerFrom2Byte13);
        return strArr2;
    }

    public ArrayList<String[]> parseCdmaInfo(int i, String str) {
        Elog.v(TAG, "NetworkInfo ------ Type is: " + i);
        Elog.v(TAG, "NetworkInfo ------ Data is:\n");
        Elog.v(TAG, str + "\n");
        Elog.v(TAG, "NetworkInfo ---------------------------");
        this.mRawString = str;
        this.mRawValues = str.split(",");
        this.mOffset = 1;
        this.mType = i;
        switch (i) {
            case 300:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_1xrtt_radio);
                break;
            case Content.CDMA_1XRTT_INFO_INDEX /* 301 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_1xrtt_info);
                break;
            case Content.CDMA_1XRTT_SCH_INFO_INDEX /* 302 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_1xrtt_sch_info);
                break;
            case Content.CDMA_1XRTT_STATISTICS_INDEX /* 303 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_1xrtt_statistics);
                break;
            case Content.CDMA_1XRTT_SERVING_INDEX /* 304 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_1xrtt_serving);
                break;
            case 305:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_serving_info);
                break;
            case Content.CDMA_EVDO_ACTIVE_SET_INDEX /* 306 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_active_set);
                break;
            case Content.CDMA_EVDO_CANDICATE_SET_INDEX /* 307 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_set);
                break;
            case Content.CDMA_EVDO_NEIGHBOR_SET_INDEX /* 308 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_set);
                break;
            case Content.CDMA_EVDO_FL_INDEX /* 309 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_fl);
                break;
            case Content.CDMA_EVDO_RL_INDEX /* 310 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_rl);
                break;
            case Content.CDMA_EVDO_STATE_INDEX /* 311 */:
                this.mLabels = this.mContext.getResources().getStringArray(R.array.network_info_evdo_state_info);
                break;
        }
        switch (i) {
            case Content.CDMA_1XRTT_SERVING_INDEX /* 304 */:
                return parse1xRttServing();
            case 305:
            default:
                return parseCommonCdmaInfo();
            case Content.CDMA_EVDO_ACTIVE_SET_INDEX /* 306 */:
            case Content.CDMA_EVDO_CANDICATE_SET_INDEX /* 307 */:
            case Content.CDMA_EVDO_NEIGHBOR_SET_INDEX /* 308 */:
                return parseCellInfo();
        }
    }

    public String parseInfo(int i, String str, int i2) {
        Elog.v(TAG, "NetworkInfo ------ Type is: " + i);
        Elog.v(TAG, "NetworkInfo ------ Data is:\n");
        Elog.v(TAG, str + "\n");
        Elog.v(TAG, "NetworkInfo ---------------------------");
        this.mRawString = str;
        this.mResult = new StringBuilder();
        this.mOffset = 0;
        if (i == 56) {
            return getGmmEmInfo();
        }
        if (i == 70) {
            return get3GGeneralInfo();
        }
        switch (i) {
            case 0:
                return getCellSelInfo();
            case 1:
                return getChDscrInfo();
            case 2:
                return getCtrlchanInfo();
            case 3:
                return getRACHCtrlInfo();
            case 4:
                return getLAIInfo();
            case 5:
                return getRadioLinkInfo();
            case 6:
                return getMeasRepInfo();
            case 7:
                return getCaListInfo();
            case 8:
                return getControlMsgInfo();
            case 9:
                return getSI2QInfo();
            case 10:
                return getMIInfo();
            case 11:
                return getBLKInfo();
            case 12:
                return getTBFInfo();
            case 13:
                return getGPRSGenInfo();
            default:
                if (i == Content.SM_INFO_INDEX) {
                    return getSmEmInfo();
                }
                if (i == Content.SLCE_VOICE_INDEX) {
                    return getSlceVoiceInfo();
                }
                if (i == Content.SECURITY_CONFIGURATION_INDEX) {
                    return getSecurityConfigInfo();
                }
                if (i == Content.MM_INFO_INDEX) {
                    return get3GMmEmInfo();
                }
                if (i == Content.TCM_MMI_INDEX) {
                    return get3GTcmMmiEmInfo();
                }
                if (i == Content.CSCE_MULTIPLMN_INDEX) {
                    return get3GCsceEmInfoMultiPlmn();
                }
                if (i == Content.PERIOD_IC_BLER_REPORT_INDEX) {
                    return get3GMemeEmPeriodicBlerReportInd();
                }
                if (i == Content.URR_UMTS_SRNC_INDEX) {
                    return get3GUrrUmtsSrncId();
                }
                if (i == Content.HSERV_CELL_INDEX) {
                    return get3GMemeEmInfoHServCellInd();
                }
                if (i == Content.CSCE_NEIGH_CELL_STATUS_INDEX) {
                    return getxGCsceEMNeighCellSStatusIndStructSize(ModemCategory.getModemType() == 2);
                }
                if (i == Content.CSCE_SERV_CELL_STATUS_INDEX) {
                    return get3GCsceEMServCellSStatusInd(ModemCategory.getModemType() == 2);
                }
                if (ModemCategory.getModemType() == 1) {
                    if (i == Content.UMTS_CELL_STATUS_INDEX) {
                        return get3GMemeEmInfoUmtsCellStatus();
                    }
                    if (i == Content.PSDATA_RATE_STATUS_INDEX) {
                        return get3GSlceEmPsDataRateStatusInd();
                    }
                    return null;
                }
                if (ModemCategory.getModemType() != 2) {
                    return null;
                }
                if (i == Content.HANDOVER_SEQUENCE_INDEX) {
                    return get3GHandoverSequenceIndStuct();
                }
                if (i == Content.UL_ADM_POOL_STATUS_INDEX) {
                    return get3GUl2EmAdmPoolStatusIndStruct();
                }
                if (i == Content.UL_PSDATA_RATE_STATUS_INDEX) {
                    return get3GUl2EmPsDataRateStatusIndStruct();
                }
                if (i == Content.UL_HSDSCH_RECONFIG_STATUS_INDEX) {
                    return get3Gul2EmHsdschReconfigStatusIndStruct();
                }
                if (i == Content.UL_URLC_EVENT_STATUS_INDEX) {
                    return get3GUl2EmUrlcEventStatusIndStruct();
                }
                if (i == Content.UL_PERIOD_IC_BLER_REPORT_INDEX) {
                    return get3GUl2EmPeriodicBlerReportInd();
                }
                return null;
        }
    }

    String[] parseSecurityStatus(int i, String str) {
        String[] strArr = {"No Ciphering", "A5/1", "A5/2", "A5/3", "A5/4", "A5/5", "A5/6", "A5/7"};
        String[] strArr2 = {"No Ciphering", "GEA1", "GEA2", "GEA3"};
        String[] strArr3 = {"No Ciphering", "UEA0", "UEA1", "", "UEA2"};
        String[] strArr4 = {"No Integrity", "UIA1", "UIA2"};
        String[] strArr5 = {"EEA0(NULL)", "EEA1(SNOW3G)", "EEA2(AES)", "EEA3(ZUC)"};
        String[] strArr6 = {"EIA0(NULL)", "EIA1(SNOW3G)", "EIA2(AES)", "EIA3(ZUC)"};
        String[] strArr7 = {"EEA0(NULL)", "EEA1(SNOW3G)", "EEA2(AES)", "EEA3(ZUC)"};
        String[] strArr8 = {"EIA0(NULL)", "EIA1(SNOW3G)", "EIA2(AES)", "EIA3(ZUC)"};
        String[] strArr9 = {"---", "---"};
        if (str == null) {
            return strArr9;
        }
        Elog.v(TAG, "NetworkInfo ------ Type is: " + i);
        Elog.v(TAG, "NetworkInfo ------ Data is:\n");
        Elog.v(TAG, str + "\n");
        Elog.v(TAG, "NetworkInfo ---------------------------");
        this.mRawString = str;
        this.mResult = new StringBuilder();
        this.mOffset = 0;
        if (i == 1) {
            this.mOffset = 0 + 280;
            int integerFromByte = readIntegerFromByte();
            if (integerFromByte >= 0 && integerFromByte < strArr.length) {
                strArr9[0] = strArr[integerFromByte];
            }
        } else if (i == 57) {
            this.mOffset = 0 + 64;
            int integerFromByte2 = readIntegerFromByte();
            if (integerFromByte2 >= 0 && integerFromByte2 < strArr2.length) {
                strArr9[0] = strArr2[integerFromByte2];
            }
        } else if (i == Content.SECURITY_CONFIGURATION_INDEX) {
            int integerFromByte3 = readIntegerFromByte();
            int integerFromByte4 = readIntegerFromByte();
            if (integerFromByte3 >= 0 && integerFromByte3 < strArr3.length) {
                strArr9[0] = strArr3[integerFromByte3];
            }
            if (integerFromByte4 >= 0 && integerFromByte4 < strArr4.length) {
                strArr9[1] = strArr4[integerFromByte4];
            }
        } else if (i == 217) {
            this.mOffset += 4;
            int integerFromByte5 = readIntegerFromByte();
            int integerFromByte6 = readIntegerFromByte();
            if (integerFromByte6 >= 0 && integerFromByte6 < strArr7.length) {
                strArr9[0] = strArr7[integerFromByte6];
            } else if (integerFromByte6 == 255) {
                strArr9[0] = "N/A";
            }
            if (integerFromByte5 >= 0 && integerFromByte5 < strArr8.length) {
                strArr9[1] = strArr8[integerFromByte5];
            } else if (integerFromByte5 == 255) {
                strArr9[1] = "N/A";
            }
        } else if (i == 244) {
            this.mOffset += 178;
            int integerFromByte7 = readIntegerFromByte();
            int integerFromByte8 = readIntegerFromByte();
            if (integerFromByte8 >= 0 && integerFromByte8 < strArr5.length) {
                strArr9[0] = strArr5[integerFromByte8];
            } else if (integerFromByte8 == 255) {
                strArr9[0] = "N/A";
            }
            if (integerFromByte7 < 0 || integerFromByte7 >= strArr6.length) {
                char c = 1;
                if (integerFromByte7 == 255) {
                    strArr9[c] = "N/A";
                }
            } else {
                strArr9[1] = strArr6[integerFromByte7];
            }
        } else if (i == 222) {
            strArr9[0] = getValueFromByte(this.mRawString, this.mOffset, false);
        }
        return strArr9;
    }
}

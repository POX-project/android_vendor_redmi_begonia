package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ActivePDPContextInformationUmtsFDD extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_SM_NSAPI5_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI6_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI7_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI8_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI9_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI10_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI11_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI12_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI13_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI14_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI15_STATUS_IND};
    int[] QoS;
    int[] addr_type;
    String[] ipv4_s;
    String[] ipv6_s;
    HashMap<Integer, String> mMapping;
    String[] pdpapn_s;
    boolean[] status;

    public ActivePDPContextInformationUmtsFDD(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ActivePDPContextInformationUmtsFDD.1
            {
                put(33, "IPV4");
                put(87, "IPV6");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DLY), "IPV4V6");
                put(1, "PPP");
                put(2, "OSP_IMOSS");
                put(3, "NULL_PDP");
            }
        };
        this.pdpapn_s = new String[11];
        this.ipv4_s = new String[11];
        this.ipv6_s = new String[11];
        this.QoS = new int[11];
        this.addr_type = new int[11];
        this.status = new boolean[11];
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "3. UMTS FDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"NSAPI index", "IP Type", "IPv4", "IPv6", "APN", "QoS (traffic_class)"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Active PDP Context Information(UMTS FDD)";
    }

    int parsIndex(String str) {
        int i = Integer.parseInt(str.substring(18).split("_")[0]);
        Elog.d("EmInfo/MDMComponent", "name = " + i);
        return i - 5;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        int iParsIndex = parsIndex(str);
        int fieldValue = getFieldValue(msg, "pdp.pdp_context_status");
        Elog.d("EmInfo/MDMComponent", "pdp_context_status = " + fieldValue);
        char c = 0;
        if (fieldValue == 0 || fieldValue == 2) {
            this.status[iParsIndex] = false;
        } else {
            this.status[iParsIndex] = true;
        }
        if (this.status[iParsIndex]) {
            this.addr_type[iParsIndex] = getFieldValue(msg, "pdp.pdp_addr_type");
            this.ipv4_s[iParsIndex] = "";
            for (int i = 0; i < 4; i++) {
                int fieldValue2 = getFieldValue(msg, "pdp.ip[" + i + "]");
                StringBuilder sb = new StringBuilder();
                String[] strArr = this.ipv4_s;
                sb.append(strArr[iParsIndex]);
                sb.append(fieldValue2);
                strArr[iParsIndex] = sb.toString();
                if (i != 3) {
                    StringBuilder sb2 = new StringBuilder();
                    String[] strArr2 = this.ipv4_s;
                    sb2.append(strArr2[iParsIndex]);
                    sb2.append(".");
                    strArr2[iParsIndex] = sb2.toString();
                }
            }
            int i2 = 4;
            int[] iArr = this.addr_type;
            if (iArr[iParsIndex] == 87) {
                i2 = 0;
            } else if (iArr[iParsIndex] == 141) {
                i2 = 4;
            }
            this.ipv6_s[iParsIndex] = "";
            int i3 = i2 + 0;
            while (i3 < i2 + 16) {
                int fieldValue3 = getFieldValue(msg, "pdp.ip[" + i3 + "]");
                StringBuilder sb3 = new StringBuilder();
                String[] strArr3 = this.ipv6_s;
                sb3.append(strArr3[iParsIndex]);
                Object[] objArr = new Object[1];
                objArr[c] = Integer.valueOf(fieldValue3);
                sb3.append(String.format("%02x", objArr));
                strArr3[iParsIndex] = sb3.toString();
                if ((i3 + 1) % 2 == 0 && i3 != i2 + 15) {
                    StringBuilder sb4 = new StringBuilder();
                    String[] strArr4 = this.ipv6_s;
                    sb4.append(strArr4[iParsIndex]);
                    sb4.append(":");
                    strArr4[iParsIndex] = sb4.toString();
                }
                i3++;
                c = 0;
            }
            this.pdpapn_s[iParsIndex] = "";
            for (int i4 = 0; i4 < 100; i4++) {
                char fieldValue4 = (char) getFieldValue(msg, "pdp.apn[" + i4 + "]");
                StringBuilder sb5 = new StringBuilder();
                String[] strArr5 = this.pdpapn_s;
                sb5.append(strArr5[iParsIndex]);
                sb5.append(fieldValue4);
                strArr5[iParsIndex] = sb5.toString();
            }
            int[] iArr2 = this.addr_type;
            if (iArr2[iParsIndex] == 33) {
                this.ipv6_s[iParsIndex] = "-";
            } else if (iArr2[iParsIndex] == 87) {
                this.ipv4_s[iParsIndex] = "-";
            }
            this.QoS[iParsIndex] = getFieldValue(msg, "pdp.em_negotiated_qos.human_readable_traffic_class");
        }
        for (int i5 = 0; i5 < 11; i5++) {
            if (this.status[i5]) {
                addData("SM_NSAP" + (i5 + 5), this.mMapping.get(Integer.valueOf(this.addr_type[i5])), this.ipv4_s[i5], this.ipv6_s[i5], this.pdpapn_s[i5], Integer.valueOf(this.QoS[i5]));
            }
        }
    }
}

package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ActivePDPContextInformationLTE extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ESM_ESM_INFO_IND, MDMContent.MSG_ID_EM_DDM_IP_INFO_IND};
    int[] QoS;
    int[] addr_type;
    String[] ipv4_s;
    String[] ipv6_s;
    int[] linked_cid;
    HashMap<Integer, String> mMapping;
    String[] pdpapn_s;
    boolean[] status;

    public ActivePDPContextInformationLTE(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ActivePDPContextInformationLTE.1
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
        this.linked_cid = new int[11];
        this.status = new boolean[11];
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"IPV4 address", "IPV6 address", "IP version", "QoS (QCI)", "APN"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Active PDP Context Information(LTE)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        clearData();
        Msg msg = (Msg) obj;
        int i = 11;
        boolean z = false;
        boolean z2 = true;
        if (str.equals(MDMContent.MSG_ID_EM_ESM_ESM_INFO_IND)) {
            int i2 = 0;
            while (i2 < i) {
                String str2 = "esm_epsbc[" + i2 + "].";
                int fieldValue = getFieldValue(msg, str2 + "is_active");
                Elog.d("EmInfo/MDMComponent", str2 + "is_active: " + fieldValue);
                if (fieldValue == 0) {
                    this.status[i2] = z;
                } else {
                    this.status[i2] = z2;
                    this.addr_type[i2] = getFieldValue(msg, str2 + "ip_addr.ip_addr_type");
                    this.QoS[i2] = getFieldValue(msg, str2 + "qci");
                    this.linked_cid[i2] = getFieldValue(msg, str2 + "linked_cid");
                    int fieldValue2 = getFieldValue(msg, str2 + "apn.length");
                    this.pdpapn_s[i2] = "";
                    for (int i3 = 0; i3 < fieldValue2; i3++) {
                        int fieldValue3 = getFieldValue(msg, str2 + "apn.data[" + i3 + "]");
                        if (i3 <= 0 || fieldValue3 >= 31) {
                            StringBuilder sb = new StringBuilder();
                            String[] strArr = this.pdpapn_s;
                            sb.append(strArr[i2]);
                            sb.append((char) fieldValue3);
                            strArr[i2] = sb.toString();
                        } else {
                            StringBuilder sb2 = new StringBuilder();
                            String[] strArr2 = this.pdpapn_s;
                            sb2.append(strArr2[i2]);
                            sb2.append(".");
                            strArr2[i2] = sb2.toString();
                        }
                    }
                }
                i2++;
                i = 11;
                z = false;
                z2 = true;
            }
        }
        int i4 = 4;
        int i5 = 3;
        if (str.equals(MDMContent.MSG_ID_EM_DDM_IP_INFO_IND)) {
            int fieldValue4 = getFieldValue(msg, "p_cid");
            int fieldValue5 = getFieldValue(msg, "addr.len");
            int i6 = 0;
            while (i6 < 11) {
                if (fieldValue4 == this.linked_cid[i6]) {
                    this.ipv4_s[i6] = "";
                    int i7 = 0;
                    while (i7 < i4) {
                        int fieldValue6 = getFieldValue(msg, "addr.val[" + i7 + "]");
                        StringBuilder sb3 = new StringBuilder();
                        String[] strArr3 = this.ipv4_s;
                        sb3.append(strArr3[i6]);
                        sb3.append(fieldValue6);
                        strArr3[i6] = sb3.toString();
                        if (i7 != i5) {
                            StringBuilder sb4 = new StringBuilder();
                            String[] strArr4 = this.ipv4_s;
                            sb4.append(strArr4[i6]);
                            sb4.append(".");
                            strArr4[i6] = sb4.toString();
                        }
                        i7++;
                        i4 = 4;
                    }
                    int i8 = 4;
                    if (fieldValue5 == 16) {
                        i8 = 0;
                    } else if (fieldValue5 == 20) {
                        i8 = 4;
                    }
                    this.ipv6_s[i6] = "";
                    for (int i9 = i8 + 0; i9 < i8 + 16; i9++) {
                        int fieldValue7 = getFieldValue(msg, "addr.val[" + i9 + "]");
                        StringBuilder sb5 = new StringBuilder();
                        String[] strArr5 = this.ipv6_s;
                        sb5.append(strArr5[i6]);
                        sb5.append(String.format("%02x", Integer.valueOf(fieldValue7)));
                        strArr5[i6] = sb5.toString();
                        if ((i9 + 1) % 2 == 0 && i9 != i8 + 15) {
                            StringBuilder sb6 = new StringBuilder();
                            String[] strArr6 = this.ipv6_s;
                            sb6.append(strArr6[i6]);
                            sb6.append(":");
                            strArr6[i6] = sb6.toString();
                        }
                    }
                    break;
                }
                i6++;
                i4 = 4;
                i5 = 3;
            }
        }
        for (int i10 = 0; i10 < 11; i10++) {
            if (this.status[i10]) {
                addData(this.ipv4_s[i10], this.ipv6_s[i10], this.mMapping.get(Integer.valueOf(this.addr_type[i10])), Integer.valueOf(this.QoS[i10]), this.pdpapn_s[i10]);
            }
        }
    }
}

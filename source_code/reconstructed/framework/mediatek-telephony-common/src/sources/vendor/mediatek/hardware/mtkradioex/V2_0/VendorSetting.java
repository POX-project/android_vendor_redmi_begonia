package vendor.mediatek.hardware.mtkradioex.V2_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class VendorSetting {
    public static final int VENDOR_SETTING_BIP_OVERRIDE_APN = 6;
    public static final int VENDOR_SETTING_BIP_PDN_NAME_REUSE = 7;
    public static final int VENDOR_SETTING_BIP_PDN_REUSE = 5;
    public static final int VENDOR_SETTING_CXP_CONFIG_OPTR = 0;
    public static final int VENDOR_SETTING_CXP_CONFIG_SBP = 3;
    public static final int VENDOR_SETTING_CXP_CONFIG_SEG = 2;
    public static final int VENDOR_SETTING_CXP_CONFIG_SPEC = 1;
    public static final int VENDOR_SETTING_CXP_CONFIG_SUBID = 4;
    public static final int VENDOR_SETTING_DATA_SSC_MODE = 15;
    public static final int VENDOR_SETTING_RADIO_AIRPLANE_MODE = 8;
    public static final int VENDOR_SETTING_RADIO_SILENT_REBOOT = 10;
    public static final int VENDOR_SETTING_RADIO_SIM_MODE = 9;
    public static final int VENDOR_SETTING_RCS_UA_ENABLE = 14;
    public static final int VENDOR_SETTING_VILTE_ENABLE = 12;
    public static final int VENDOR_SETTING_VIWIFI_ENABLE = 13;
    public static final int VENDOR_SETTING_VOLTE_ENABLE = 11;
    public static final int VENDOR_SETTING_WFC_ENABLE = 16;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("VENDOR_SETTING_CXP_CONFIG_OPTR");
        if ((i & 1) == 1) {
            arrayList.add("VENDOR_SETTING_CXP_CONFIG_SPEC");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("VENDOR_SETTING_CXP_CONFIG_SEG");
            i2 |= 2;
        }
        if ((i & 3) == 3) {
            arrayList.add("VENDOR_SETTING_CXP_CONFIG_SBP");
            i2 |= 3;
        }
        if ((i & 4) == 4) {
            arrayList.add("VENDOR_SETTING_CXP_CONFIG_SUBID");
            i2 |= 4;
        }
        if ((i & 5) == 5) {
            arrayList.add("VENDOR_SETTING_BIP_PDN_REUSE");
            i2 |= 5;
        }
        if ((i & 6) == 6) {
            arrayList.add("VENDOR_SETTING_BIP_OVERRIDE_APN");
            i2 |= 6;
        }
        if ((i & 7) == 7) {
            arrayList.add("VENDOR_SETTING_BIP_PDN_NAME_REUSE");
            i2 |= 7;
        }
        if ((i & 8) == 8) {
            arrayList.add("VENDOR_SETTING_RADIO_AIRPLANE_MODE");
            i2 |= 8;
        }
        if ((i & 9) == 9) {
            arrayList.add("VENDOR_SETTING_RADIO_SIM_MODE");
            i2 |= 9;
        }
        if ((i & 10) == 10) {
            arrayList.add("VENDOR_SETTING_RADIO_SILENT_REBOOT");
            i2 |= 10;
        }
        if ((i & 11) == 11) {
            arrayList.add("VENDOR_SETTING_VOLTE_ENABLE");
            i2 |= 11;
        }
        if ((i & 12) == 12) {
            arrayList.add("VENDOR_SETTING_VILTE_ENABLE");
            i2 |= 12;
        }
        if ((i & 13) == 13) {
            arrayList.add("VENDOR_SETTING_VIWIFI_ENABLE");
            i2 |= 13;
        }
        if ((i & 14) == 14) {
            arrayList.add("VENDOR_SETTING_RCS_UA_ENABLE");
            i2 |= 14;
        }
        if ((i & 15) == 15) {
            arrayList.add("VENDOR_SETTING_DATA_SSC_MODE");
            i2 |= 15;
        }
        if ((i & 16) == 16) {
            arrayList.add("VENDOR_SETTING_WFC_ENABLE");
            i2 |= 16;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "VENDOR_SETTING_CXP_CONFIG_OPTR";
        }
        if (i == 1) {
            return "VENDOR_SETTING_CXP_CONFIG_SPEC";
        }
        if (i == 2) {
            return "VENDOR_SETTING_CXP_CONFIG_SEG";
        }
        if (i == 3) {
            return "VENDOR_SETTING_CXP_CONFIG_SBP";
        }
        if (i == 4) {
            return "VENDOR_SETTING_CXP_CONFIG_SUBID";
        }
        if (i == 5) {
            return "VENDOR_SETTING_BIP_PDN_REUSE";
        }
        if (i == 6) {
            return "VENDOR_SETTING_BIP_OVERRIDE_APN";
        }
        if (i == 7) {
            return "VENDOR_SETTING_BIP_PDN_NAME_REUSE";
        }
        if (i == 8) {
            return "VENDOR_SETTING_RADIO_AIRPLANE_MODE";
        }
        if (i == 9) {
            return "VENDOR_SETTING_RADIO_SIM_MODE";
        }
        if (i == 10) {
            return "VENDOR_SETTING_RADIO_SILENT_REBOOT";
        }
        if (i == 11) {
            return "VENDOR_SETTING_VOLTE_ENABLE";
        }
        if (i == 12) {
            return "VENDOR_SETTING_VILTE_ENABLE";
        }
        if (i == 13) {
            return "VENDOR_SETTING_VIWIFI_ENABLE";
        }
        if (i == 14) {
            return "VENDOR_SETTING_RCS_UA_ENABLE";
        }
        if (i == 15) {
            return "VENDOR_SETTING_DATA_SSC_MODE";
        }
        if (i == 16) {
            return "VENDOR_SETTING_WFC_ENABLE";
        }
        return "0x" + Integer.toHexString(i);
    }
}

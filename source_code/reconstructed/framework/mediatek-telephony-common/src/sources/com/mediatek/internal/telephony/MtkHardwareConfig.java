package com.mediatek.internal.telephony;

import android.os.SystemProperties;
import com.android.internal.telephony.HardwareConfig;

/* JADX INFO: loaded from: classes.dex */
public final class MtkHardwareConfig extends HardwareConfig {
    public MtkHardwareConfig(int i) {
        super(i);
    }

    public MtkHardwareConfig(String str) {
        super(str);
    }

    public boolean hasC2kOverImsModem() {
        return SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild");
    }

    public boolean hasMdAutoSetupImsCapability() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    public boolean hasModemDeactPdnCapabilityForMultiPS() {
        return SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild");
    }

    public boolean hasOperatorIaCapability() {
        return SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild");
    }

    public boolean hasParsingCEPCapability() {
        return hasMdAutoSetupImsCapability();
    }

    public boolean hasRaCapability() {
        return SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild");
    }

    public boolean isCdma3gDualActivationSupported() {
        return SystemProperties.get("vendor.ril.cdma.3g.dualact").equals("1");
    }
}

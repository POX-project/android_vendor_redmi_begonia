package com.mediatek.engineermode.wifi;

import android.os.SystemProperties;

/* JADX INFO: compiled from: WifiCapability.java */
/* JADX INFO: loaded from: classes3.dex */
class Capability6632 extends WifiCapability {
    private static final String[] CHIP_SUPPORT_DBDC = {"0x6779", "0x6885", "0x6873"};
    private static final String PROPERTY = "persist.vendor.connsys.chipid";
    private boolean mCapAntSwap = false;
    private boolean mCapDbdc = false;

    Capability6632() {
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected void getCapability() {
        this.mCapAntSwap = EMWifi.isAntSwapSupport();
        String str = SystemProperties.get(PROPERTY);
        for (String str2 : CHIP_SUPPORT_DBDC) {
            if (str2.equalsIgnoreCase(str)) {
                this.mCapDbdc = true;
            }
        }
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean isAntSwapSupport() {
        return this.mCapAntSwap;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean isDbdcSupport() {
        return this.mCapDbdc;
    }
}

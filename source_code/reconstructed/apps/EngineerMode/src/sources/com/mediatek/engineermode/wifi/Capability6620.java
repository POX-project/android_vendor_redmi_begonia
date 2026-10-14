package com.mediatek.engineermode.wifi;

/* JADX INFO: compiled from: WifiCapability.java */
/* JADX INFO: loaded from: classes3.dex */
class Capability6620 extends WifiCapability {
    private boolean mCap11ac = false;
    private boolean mCapAntSwap = false;
    private String mWifiChip;

    Capability6620(String str) {
        this.mWifiChip = str;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected void getCapability() {
        for (String str : new String[]{"6630", "6797", "6759"}) {
            if (str.equals(this.mWifiChip)) {
                this.mCap11ac = true;
            }
        }
        this.mCapAntSwap = EMWifi.isAntSwapSupport();
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean is11AcSupport() {
        return this.mCap11ac;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean isAntSwapSupport() {
        return this.mCapAntSwap;
    }
}

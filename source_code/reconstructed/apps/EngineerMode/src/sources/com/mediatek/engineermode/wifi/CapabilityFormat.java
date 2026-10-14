package com.mediatek.engineermode.wifi;

import com.mediatek.engineermode.Elog;
import java.util.Arrays;

/* JADX INFO: compiled from: WifiCapability.java */
/* JADX INFO: loaded from: classes3.dex */
class CapabilityFormat extends WifiCapability {
    private static final int CAPABILITY_LENGTH = 32;
    private static final int INDEX_CAP_ANT_NUM = 1;
    private static final int INDEX_CAP_ANT_SWAP = 16;
    private static final int INDEX_CAP_DBDC = 2;
    private static final int INDEX_CAP_PROTOCOL = 0;
    private static final int MASK_CAP_11AX = 8;
    private static final int MASK_CAP_ANT_SWAP = 1;
    private static final int MASK_CAP_DBDC = 1;
    private static final int MASK_CAP_HW_TX = 2;
    private boolean mCapAntSwap = false;
    private boolean mCap11ax = false;
    private boolean mCapDbdc = false;
    private boolean mCap2by2 = false;
    private boolean mCapHwTx = false;

    CapabilityFormat() {
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected void getCapability() {
        int[] iArr = new int[32];
        Arrays.fill(iArr, 0);
        if (EMWifi.hqaGetChipCapability(iArr) != 0) {
            Elog.e("Wifi/Capability", "Query capability failed");
            return;
        }
        Elog.i("Wifi/Capability", "capability:" + Arrays.toString(iArr));
        this.mCap11ax = (iArr[0] & 8) > 0;
        this.mCap2by2 = iArr[1] > 1;
        this.mCapDbdc = (iArr[2] & 1) > 0;
        this.mCapAntSwap = (iArr[16] & 1) > 0;
        this.mCapHwTx = (2 & iArr[16]) > 0;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean is11AxSupport() {
        return this.mCap11ax;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean is2by2Support() {
        return this.mCap2by2;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean isAntSwapSupport() {
        return this.mCapAntSwap;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean isDbdcSupport() {
        return this.mCapDbdc;
    }

    @Override // com.mediatek.engineermode.wifi.WifiCapability
    protected boolean isHwTxSupport() {
        return this.mCapHwTx;
    }
}

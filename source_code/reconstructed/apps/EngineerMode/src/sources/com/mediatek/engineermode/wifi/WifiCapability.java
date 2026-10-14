package com.mediatek.engineermode.wifi;

import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes3.dex */
abstract class WifiCapability {
    protected static final String TAG = "Wifi/Capability";

    /* JADX INFO: renamed from: com.mediatek.engineermode.wifi.WifiCapability$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType;

        static {
            int[] iArr = new int[WiFi.WifiType.values().length];
            $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType = iArr;
            try {
                iArr[WiFi.WifiType.WIFI_FORMAT.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[WiFi.WifiType.WIFI_6632.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[WiFi.WifiType.WIFI_6620.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    WifiCapability() {
    }

    static WifiCapability getWifiCapability(String str, WiFi.WifiType wifiType) {
        WifiCapability capabilityFormat = null;
        int i = AnonymousClass1.$SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[wifiType.ordinal()];
        if (i == 1) {
            capabilityFormat = new CapabilityFormat();
        } else if (i == 2) {
            capabilityFormat = new Capability6632();
        } else if (i != 3) {
            Elog.e(TAG, "WifiType error");
        } else {
            capabilityFormat = new Capability6620(str);
        }
        if (capabilityFormat != null) {
            capabilityFormat.getCapability();
        }
        return capabilityFormat;
    }

    protected abstract void getCapability();

    protected boolean is11AcSupport() {
        return false;
    }

    protected boolean is11AxSupport() {
        return false;
    }

    protected boolean is2by2Support() {
        return false;
    }

    protected abstract boolean isAntSwapSupport();

    protected boolean isDbdcSupport() {
        return false;
    }

    protected boolean isHwTxSupport() {
        return false;
    }
}

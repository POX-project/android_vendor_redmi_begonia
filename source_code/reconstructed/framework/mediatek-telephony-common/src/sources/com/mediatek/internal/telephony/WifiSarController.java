package com.mediatek.internal.telephony;

import android.content.Context;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.SystemProperties;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class WifiSarController implements DynamicSarService.SarControllerClient {
    private static final String PROPERTY_DYNAMIC_WIFI_SAR = "persist.wifi.sar";
    private static int mAudioReceiverState;
    private static int mBTPanState;
    private static int mHotspotState;
    private static int mModemState;
    private static int mSarSensorState;
    private static int mWifiState;
    private Context mContext;
    private DynamicSarService mService;
    private WifiManager mWifiManager;
    private static int mMccState = 3;
    private static int mPaternIndex = 0;
    private static int mSarSet = 0;
    private final String TAG = "WifiSarController";
    private final int DSI0 = 0;
    private final int DSI1 = 1;
    private final int DSI2 = 2;
    private final int DSI3 = 3;
    private final int DSI4 = 4;
    private final int DSI5 = 5;
    private final int DSI6 = 6;
    private final int DSI7 = 7;
    private final int DSI8 = 8;
    private final int DSI9 = 9;
    private final int DSI10 = 10;
    private final int DSI11 = 11;
    private final int DSI12 = 12;
    private final int DSI_SAR_DISABLE = 100;
    private final String PATERN1_DEVCIE_LIST = "grus";
    private final String PATERN2_DEVCIE_LIST = "andromeda";
    private final String PATERN3_DEVCIE_LIST = "raphael,davinci,davinciin,begonia,begoniain";
    private final String PATERN4_DEVCIE_LIST = "umi,cmi,umiin,cmiin,lmi,lmiin,lmipro,lmiinpro,cezanne,cezannein,cannong,cannon";

    public WifiSarController(Context context) {
        this.mService = null;
        Log.d("WifiSarController", "WifiSarController init...");
        if (!SystemProperties.getBoolean(PROPERTY_DYNAMIC_WIFI_SAR, true)) {
            Log.d("WifiSarController", "disable wifi sar");
            return;
        }
        String lowerCase = Build.DEVICE.toLowerCase();
        if ("grus".indexOf(lowerCase) != -1) {
            mPaternIndex = 1;
        } else if ("andromeda".indexOf(lowerCase) != -1) {
            mPaternIndex = 2;
        } else if ("raphael,davinci,davinciin,begonia,begoniain".indexOf(lowerCase) != -1) {
            mPaternIndex = 3;
        } else if ("umi,cmi,umiin,cmiin,lmi,lmiin,lmipro,lmiinpro,cezanne,cezannein,cannong,cannon".indexOf(lowerCase) != -1) {
            mPaternIndex = 4;
        }
        Log.d("WifiSarController", "device: " + lowerCase + ", SAR patern: " + mPaternIndex);
        this.mContext = context;
        this.mWifiManager = (WifiManager) context.getSystemService("wifi");
        if (mPaternIndex != 0) {
            this.mService = DynamicSarService.getInstance(context);
        }
        DynamicSarService dynamicSarService = this.mService;
        if (dynamicSarService != null) {
            int i = mPaternIndex;
            if (i == 1) {
                dynamicSarService.registerStateChangeListener(0, this);
                this.mService.registerStateChangeListener(1, this);
                this.mService.registerStateChangeListener(3, this);
                this.mService.registerStateChangeListener(2, this);
                this.mService.registerStateChangeListener(5, this);
            } else if (i == 2) {
                dynamicSarService.registerStateChangeListener(0, this);
                this.mService.registerStateChangeListener(1, this);
                this.mService.registerStateChangeListener(5, this);
            } else if (i == 3) {
                dynamicSarService.registerStateChangeListener(0, this);
                this.mService.registerStateChangeListener(1, this);
                this.mService.registerStateChangeListener(2, this);
                this.mService.registerStateChangeListener(5, this);
                this.mService.registerStateChangeListener(6, this);
            } else if (i == 4) {
                dynamicSarService.registerStateChangeListener(0, this);
                this.mService.registerStateChangeListener(1, this);
                this.mService.registerStateChangeListener(2, this);
                this.mService.registerStateChangeListener(5, this);
                this.mService.registerStateChangeListener(6, this);
                this.mService.registerStateChangeListener(7, this);
            }
        }
        Log.d("WifiSarController", "WifiSarController init done");
    }

    private int calculateSarSetPatern1() {
        if (mWifiState == 0 && mHotspotState == 0) {
            return 100;
        }
        if (mAudioReceiverState == 1) {
            return mModemState == 1 ? 1 : 0;
        }
        if (mHotspotState == 1) {
            return mSarSensorState != 0 ? 4 : 100;
        }
        if (mModemState != 1) {
            return mSarSensorState != 0 ? 0 : 100;
        }
        int i = mSarSensorState;
        if (i == 2) {
            return 3;
        }
        return i == 1 ? 2 : 100;
    }

    private int calculateSarSetPatern2() {
        if (mWifiState == 0 && mHotspotState == 0) {
            return 100;
        }
        if (mWifiState == 1 && mHotspotState == 1) {
            int frequency = this.mWifiManager.getConnectionInfo().getFrequency();
            int band = this.mWifiManager.getSoftApConfiguration().getBand();
            if ((frequency < 5000 && band == 2) || (frequency > 5000 && band == 1)) {
                return 1;
            }
        }
        return mAudioReceiverState == 1 ? 0 : 100;
    }

    private int calculateSarSetPatern3() {
        if (mWifiState == 0 && mHotspotState == 0) {
            return 100;
        }
        int i = mHotspotState;
        if (i == 1) {
            return 8;
        }
        if (mAudioReceiverState == 1) {
            if (mMccState == 1) {
                return mModemState != 1 ? 0 : 1;
            }
            return mModemState == 1 ? 3 : 2;
        }
        if (i != 0) {
            return 100;
        }
        if (mMccState == 1) {
            return mModemState == 1 ? 5 : 4;
        }
        return mModemState == 1 ? 7 : 6;
    }

    private int calculateSarSetPatern4() {
        if (mWifiState == 0 && mHotspotState == 0) {
            return 100;
        }
        int i = mHotspotState;
        if (i == 1 || mBTPanState == 1) {
            return 12;
        }
        if (mAudioReceiverState == 1) {
            int i2 = mMccState;
            if (i2 == 1) {
                return mModemState != 1 ? 0 : 1;
            }
            if (i2 == 2) {
                return mModemState != 1 ? 2 : 3;
            }
            if (i2 == 3) {
                return mModemState == 1 ? 5 : 4;
            }
            return 100;
        }
        if (i != 0) {
            return 100;
        }
        int i3 = mMccState;
        if (i3 == 1) {
            return mModemState == 1 ? 7 : 6;
        }
        if (i3 == 2) {
            return mModemState == 1 ? 9 : 8;
        }
        if (i3 == 3) {
            return mModemState == 1 ? 11 : 10;
        }
        return 100;
    }

    public static boolean isNeeded() {
        return WifiManagerCompatible.isNeeded();
    }

    private void updateWifiSarSet() {
        int iCalculateSarSetPatern4 = 100;
        int i = mPaternIndex;
        if (i == 1) {
            iCalculateSarSetPatern4 = calculateSarSetPatern1();
        } else if (i == 2) {
            iCalculateSarSetPatern4 = calculateSarSetPatern2();
        } else if (i == 3) {
            iCalculateSarSetPatern4 = calculateSarSetPatern3();
        } else if (i == 4) {
            iCalculateSarSetPatern4 = calculateSarSetPatern4();
        }
        if (mSarSet != iCalculateSarSetPatern4) {
            Log.d("WifiSarController", "setSARLimit: " + iCalculateSarSetPatern4);
            WifiManagerCompatible.setSARLimit(this.mContext, iCalculateSarSetPatern4);
            mSarSet = iCalculateSarSetPatern4;
        }
    }

    @Override // com.mediatek.internal.telephony.DynamicSarService.SarControllerClient
    public void onStateChanged(int i, int i2) {
        Log.d("WifiSarController", "onStateChanged: type = " + i + ", value = " + i2);
        if (i == 0) {
            mWifiState = i2;
        } else if (i == 1) {
            mHotspotState = i2;
        } else if (i == 2) {
            mModemState = i2;
        } else if (i == 3) {
            mSarSensorState = i2;
        } else if (i == 5) {
            mAudioReceiverState = i2;
        } else if (i == 6) {
            mMccState = i2;
        } else if (i == 7) {
            mBTPanState = i2;
        }
        updateWifiSarSet();
    }
}

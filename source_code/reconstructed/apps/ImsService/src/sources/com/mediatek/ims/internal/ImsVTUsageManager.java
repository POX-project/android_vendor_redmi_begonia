package com.mediatek.ims.internal;

import android.content.Context;
import android.content.Intent;
import android.net.INetworkStatsService;
import android.net.NetworkStats;
import android.os.PersistableBundle;
import android.os.RegistrantList;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.CarrierConfigManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.mediatek.ims.common.SubscriptionManagerHelper;

/* JADX INFO: loaded from: classes.dex */
public class ImsVTUsageManager {
    static final String TAG = "ImsVT Usage";
    public static final int VILTE_UID = 1001;
    private Context mContext;
    public int mId;
    private ImsVTUsage mInitialUsage;
    protected int mSimId;
    public ImsVTProviderUtil mVTProviderUtil = ImsVTProviderUtil.getInstance();
    private boolean mNeedReportDataUsage = true;
    private RegistrantList mDataUsageUpdateRegistrants = new RegistrantList();
    private ImsVTUsage mCurrentUsage = new ImsVTUsage("Current");
    private ImsVTUsage mPreviousUsage = new ImsVTUsage("Previous");

    public static class ImsVTUsage {
        public static final int STATE_RX = 2;
        public static final int STATE_TX = 1;
        public static final int STATE_TXRX = 3;
        private long mLteRxUsage;
        private long mLteTxUsage;
        private long mLteUsage;
        private String mUsedForName;
        private long mWifiRxUsage;
        private long mWifiTxUsage;
        private long mWifiUsage;

        public ImsVTUsage(String str) {
            this.mUsedForName = str;
            this.mLteUsage = 0L;
            this.mLteTxUsage = 0L;
            this.mLteRxUsage = 0L;
            this.mWifiUsage = 0L;
            this.mWifiTxUsage = 0L;
            this.mWifiRxUsage = 0L;
            Log.d(ImsVTUsageManager.TAG, "[ImsVTUsage]" + toString());
        }

        public ImsVTUsage(String str, long j, long j2, long j3, long j4, long j5, long j6) {
            this.mUsedForName = str;
            this.mLteTxUsage = j;
            this.mLteRxUsage = j2;
            this.mLteUsage = j3;
            this.mWifiTxUsage = j4;
            this.mWifiRxUsage = j5;
            this.mWifiUsage = j6;
            Log.d(ImsVTUsageManager.TAG, "[ImsVTUsage]" + toString());
        }

        public ImsVTUsage(String str, ImsVTUsage imsVTUsage) {
            this.mUsedForName = str;
            this.mLteTxUsage = imsVTUsage.getLteUsage(1);
            this.mLteRxUsage = imsVTUsage.getLteUsage(2);
            this.mLteUsage = imsVTUsage.getLteUsage(3);
            this.mWifiTxUsage = imsVTUsage.getWifiUsage(1);
            this.mWifiRxUsage = imsVTUsage.getWifiUsage(2);
            this.mWifiUsage = imsVTUsage.getWifiUsage(3);
            Log.d(ImsVTUsageManager.TAG, "[ImsVTUsage]" + toString());
        }

        public long getLteUsage(int i) {
            if (1 == i) {
                return this.mLteTxUsage;
            }
            if (2 == i) {
                return this.mLteRxUsage;
            }
            if (3 == i) {
                return this.mLteUsage;
            }
            return 0L;
        }

        public long getWifiUsage(int i) {
            if (1 == i) {
                return this.mWifiTxUsage;
            }
            if (2 == i) {
                return this.mWifiRxUsage;
            }
            if (3 == i) {
                return this.mWifiUsage;
            }
            return 0L;
        }

        public void setAllUsage(long j, long j2, long j3, long j4, long j5, long j6) {
            this.mLteTxUsage = j;
            this.mLteRxUsage = j2;
            this.mLteUsage = j3;
            this.mWifiTxUsage = j4;
            this.mWifiRxUsage = j5;
            this.mWifiUsage = j6;
            Log.d(ImsVTUsageManager.TAG, "[setAllUsage]" + toString());
        }

        public void setLteUsage(int i, long j) {
            if (1 == i) {
                this.mLteTxUsage = j;
            } else if (2 == i) {
                this.mLteRxUsage = j;
            } else if (3 == i) {
                this.mLteUsage = j;
            }
            Log.d(ImsVTUsageManager.TAG, "[setLTEUsage] state: " + i + ", usage: " + j);
        }

        public void setWifiUsage(int i, long j) {
            if (1 == i) {
                this.mWifiTxUsage = j;
            } else if (2 == i) {
                this.mWifiRxUsage = j;
            } else if (3 == i) {
                this.mWifiUsage = j;
            }
            Log.d(ImsVTUsageManager.TAG, "[setWifiUsage] state: " + i + ", usage: " + j);
        }

        public void subtraction(ImsVTUsage imsVTUsage) {
            this.mLteTxUsage -= imsVTUsage.getLteUsage(1);
            this.mLteRxUsage -= imsVTUsage.getLteUsage(2);
            this.mLteUsage -= imsVTUsage.getLteUsage(3);
            this.mWifiTxUsage -= imsVTUsage.getWifiUsage(1);
            this.mWifiRxUsage -= imsVTUsage.getWifiUsage(2);
            this.mWifiUsage -= imsVTUsage.getWifiUsage(3);
            Log.d(ImsVTUsageManager.TAG, "[subtraction]" + toString());
        }

        public String toString() {
            return "[" + this.mUsedForName + "] lteTx=" + this.mLteTxUsage + ", lteRx=" + this.mLteRxUsage + ", lteTxRx=" + this.mLteUsage + ", wifiTx=" + this.mWifiTxUsage + ", wifiRx=" + this.mWifiRxUsage + ", wifiTxRx=" + this.mWifiUsage;
        }

        public void updateFrom(ImsVTUsage imsVTUsage) {
            this.mLteTxUsage = imsVTUsage.getLteUsage(1);
            this.mLteRxUsage = imsVTUsage.getLteUsage(2);
            this.mLteUsage = imsVTUsage.getLteUsage(3);
            this.mWifiTxUsage = imsVTUsage.getWifiUsage(1);
            this.mWifiRxUsage = imsVTUsage.getWifiUsage(2);
            this.mWifiUsage = imsVTUsage.getWifiUsage(3);
            Log.d(ImsVTUsageManager.TAG, "[updateFrom]" + toString());
        }
    }

    private boolean canRequestDataUsage() {
        Log.d(TAG, "[canRequestDataUsage]");
        if (SystemProperties.get("persist.vendor.vt.data_simulate").equals("1")) {
            return true;
        }
        boolean booleanCarrierConfig = getBooleanCarrierConfig(this.mVTProviderUtil.mContext, "ignore_data_enabled_changed_for_video_calls", SubscriptionManagerHelper.getSubIdUsingPhoneId(this.mSimId));
        if (this.mNeedReportDataUsage && booleanCarrierConfig) {
            Log.d(TAG, "[canRequestDataUsage] set dataUsage as false");
            this.mNeedReportDataUsage = false;
        }
        return this.mNeedReportDataUsage;
    }

    private boolean getBooleanCarrierConfig(Context context, String str, int i) {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) context.getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(i) : null;
        return configForSubId != null ? configForSubId.getBoolean(str) : CarrierConfigManager.getDefaultConfig().getBoolean(str);
    }

    private ImsVTUsage getTagUsage(NetworkStats networkStats) {
        Log.i(TAG, "getTagUsage uid:1001");
        long j = 0;
        long j2 = 0;
        long j3 = 0;
        long j4 = 0;
        NetworkStats.Entry values = null;
        int i = this.mId;
        int i2 = (-16777216) + i;
        int i3 = i + ImsVTProviderUtil.TAG_VILTE_WIFI;
        for (int i4 = 0; i4 < networkStats.size(); i4++) {
            values = networkStats.getValues(i4, values);
            if (values.uid == 1001 && values.tag == i2) {
                Log.i(TAG, "getTaggedSnapshot LTE entry:" + values.toString());
                j += values.txBytes;
                j2 += values.rxBytes;
            }
            if (values.uid == 1001 && values.tag == i3) {
                Log.i(TAG, "getTaggedSnapshot WiFi entry:" + values.toString());
                j3 += values.txBytes;
                j4 += values.rxBytes;
            }
        }
        Log.i(TAG, "getTaggedSnapshot LTE: Tx=" + Long.toString(j) + ", Rx=" + Long.toString(j2) + ", Total=" + Long.toString(j + j2));
        Log.i(TAG, "getTaggedSnapshot WiFi: Tx=" + Long.toString(j3) + ", Rx=" + Long.toString(j4) + ", Total=" + Long.toString(j3 + j4));
        return new ImsVTUsage("Tag", j, j2, j2 + j, j3, j4, j4 + j3);
    }

    private void updateUsage(ImsVTUsage imsVTUsage) {
        int subIdUsingPhoneId = SubscriptionManagerHelper.getSubIdUsingPhoneId(this.mSimId);
        String subscriberId = ((TelephonyManager) this.mVTProviderUtil.mContext.getSystemService("phone")).getSubscriberId(subIdUsingPhoneId);
        long wifiUsage = this.mInitialUsage.getWifiUsage(1);
        long wifiUsage2 = this.mInitialUsage.getWifiUsage(2);
        long wifiUsage3 = this.mInitialUsage.getWifiUsage(3);
        long wifiUsage4 = this.mCurrentUsage.getWifiUsage(1);
        long wifiUsage5 = this.mCurrentUsage.getWifiUsage(2);
        long wifiUsage6 = this.mCurrentUsage.getWifiUsage(3);
        this.mPreviousUsage.updateFrom(this.mCurrentUsage);
        if (imsVTUsage.getWifiUsage(1) == 0 && imsVTUsage.getWifiUsage(2) == 0) {
            imsVTUsage.setWifiUsage(1, wifiUsage4 + wifiUsage);
            imsVTUsage.setWifiUsage(2, wifiUsage5 + wifiUsage2);
            imsVTUsage.setWifiUsage(3, wifiUsage6 + wifiUsage3);
        }
        this.mVTProviderUtil.usageSet(this.mId, imsVTUsage);
        imsVTUsage.subtraction(this.mInitialUsage);
        this.mCurrentUsage.updateFrom(imsVTUsage);
        ImsVTUsage imsVTUsage2 = new ImsVTUsage("Delta", this.mCurrentUsage);
        imsVTUsage2.subtraction(this.mPreviousUsage);
        Intent intent = new Intent(this.mVTProviderUtil.getImsOemCallUtil().getVTUsageAction());
        intent.putExtra("lterxbytes", imsVTUsage2.getLteUsage(2));
        intent.putExtra("ltetxbytes", imsVTUsage2.getLteUsage(1));
        intent.putExtra("wifirxbytes", imsVTUsage2.getWifiUsage(2));
        intent.putExtra("wifiTxbytes", imsVTUsage2.getWifiUsage(1));
        intent.putExtra("subscriberId", subscriberId);
        Log.i(TAG, "sendVTusageBroadcast:  lterxbytes=" + Long.toString(imsVTUsage2.getLteUsage(2)) + ", ltetxbytes=" + Long.toString(imsVTUsage2.getLteUsage(1)) + ", wifirxbytes=" + Long.toString(imsVTUsage2.getWifiUsage(2)) + ", wifiTxbytes=" + Long.toString(imsVTUsage2.getWifiUsage(1)) + ", subId=" + subIdUsingPhoneId);
        this.mVTProviderUtil.mContext.sendBroadcast(intent, this.mVTProviderUtil.getImsOemCallUtil().getVTUsagePermission());
    }

    public ImsVTUsage requestCallDataUsage() {
        Log.d(TAG, "[ID=" + this.mId + "] [onRequestCallDataUsage] Start");
        if (!canRequestDataUsage()) {
            return null;
        }
        try {
            updateUsage(getTagUsage(INetworkStatsService.Stub.asInterface(ServiceManager.getService("netstats")).getDataLayerSnapshotForUid(1001)));
            Log.d(TAG, "[ID=" + this.mId + "] [onRequestCallDataUsage] Finish (VIWIFI usage:" + this.mCurrentUsage.getWifiUsage(3) + ")");
            return this.mCurrentUsage;
        } catch (RemoteException e) {
            Log.d(TAG, "Exception:" + e);
            return null;
        }
    }

    public void setContext(Context context) {
        this.mContext = context;
    }

    public void setId(int i) {
        this.mId = i;
    }

    public void setInitUsage(ImsVTUsage imsVTUsage) {
        this.mInitialUsage = imsVTUsage;
    }

    public void setSimId(int i) {
        this.mSimId = i;
    }
}

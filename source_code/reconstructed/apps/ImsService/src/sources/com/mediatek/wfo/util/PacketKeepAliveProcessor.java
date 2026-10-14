package com.mediatek.wfo.util;

import android.net.ConnectivityManager;
import android.net.Network;
import android.os.Handler;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import androidx.core.os.EnvironmentCompat;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class PacketKeepAliveProcessor {
    static final String PROPERTY_ENABLE_OFFLOAD = "persist.vendor.mtk_enable_keep_alive_offload";
    static final String TAG = "PacketKeepAliveProcessor";
    ConnectivityManager mConnectivityManager;
    ArrayList<KeepAliveInfo> mKeepAlives = new ArrayList<>();
    Handler mWifiPdnHandler;

    public class KeepAliveConfig {
        InetAddress dstIp;
        int dstPort;
        boolean enable;
        int interval;
        InetAddress srcIp;
        int srcPort;

        public KeepAliveConfig() {
            Rlog.d(PacketKeepAliveProcessor.TAG, "KeepAliveConfig default ctor");
            this.enable = false;
            this.interval = 0;
            this.srcIp = null;
            this.srcPort = 0;
            this.dstIp = null;
            this.dstPort = 0;
        }

        public KeepAliveConfig(boolean z, int i, String str, int i2, String str2, int i3) throws UnknownHostException {
            this.enable = z;
            this.interval = i;
            this.srcIp = InetAddress.getByName(str);
            this.srcPort = i2;
            this.dstIp = InetAddress.getByName(str2);
            this.dstPort = i3;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || getClass() != obj.getClass()) {
                return false;
            }
            KeepAliveConfig keepAliveConfig = (KeepAliveConfig) obj;
            return this.interval == keepAliveConfig.interval && this.srcIp.equals(keepAliveConfig.srcIp) && this.srcPort == keepAliveConfig.srcPort && this.dstIp.equals(keepAliveConfig.dstIp) && this.dstPort == keepAliveConfig.dstPort;
        }

        public String getDstIp() {
            return this.dstIp.getHostAddress();
        }

        public int getDstPort() {
            return this.dstPort;
        }

        public String getSrcIp() {
            return this.srcIp.getHostAddress();
        }

        public int getSrcPort() {
            return this.srcPort;
        }

        public boolean isEnabled() {
            return this.enable;
        }

        public boolean isEnabledAndAvailable() {
            return this.enable && this.interval >= 20 && this.dstPort == 4500;
        }

        public String toString() {
            return "enable: " + this.enable + " interval: " + this.interval + " srcIp: " + PacketKeepAliveProcessor.this.maskString(this.srcIp.getHostAddress()) + " srcPort: " + this.srcPort + " dstIp: " + PacketKeepAliveProcessor.this.maskString(this.dstIp.getHostAddress()) + " dstPort: " + this.dstPort;
        }
    }

    public class KeepAliveInfo {
        WfcKeepAliveCallback callback;
        KeepAliveConfig config;
        ConnectivityManager.PacketKeepalive ka;

        public KeepAliveInfo(ConnectivityManager.PacketKeepalive packetKeepalive, KeepAliveConfig keepAliveConfig, WfcKeepAliveCallback wfcKeepAliveCallback) {
            this.ka = packetKeepalive;
            this.config = keepAliveConfig;
            this.callback = wfcKeepAliveCallback;
        }

        public KeepAliveConfig getConfig() {
            return this.config;
        }

        public void stop() {
            Rlog.d(PacketKeepAliveProcessor.TAG, "KeepAliveInfo.stop, config: " + this.config + ", isStarted: " + this.callback.isStarted());
            if (this.callback.isStarted()) {
                this.ka.stop();
            }
        }
    }

    class WfcKeepAliveCallback extends ConnectivityManager.PacketKeepaliveCallback {
        KeepAliveConfig config;
        boolean mIsStarted = false;

        public WfcKeepAliveCallback(KeepAliveConfig keepAliveConfig) {
            this.config = keepAliveConfig;
        }

        private String errorToString(int i) {
            if (i == -31) {
                return "ERROR_HARDWARE_ERROR";
            }
            if (i == -30) {
                return "ERROR_HARDWARE_UNSUPPORTED";
            }
            switch (i) {
                case -24:
                    return "ERROR_INVALID_INTERVAL";
                case -23:
                    return "ERROR_INVALID_LENGTH";
                case -22:
                    return "ERROR_INVALID_PORT";
                case -21:
                    return "ERROR_INVALID_IP_ADDRESS";
                case -20:
                    return "ERROR_INVALID_NETWORK";
                default:
                    return EnvironmentCompat.MEDIA_UNKNOWN;
            }
        }

        public boolean isStarted() {
            return this.mIsStarted;
        }

        public void onError(int i) {
            Rlog.d(PacketKeepAliveProcessor.TAG, "keepAlive is failed, error: " + i + ", " + errorToString(i));
            this.mIsStarted = false;
        }

        public void onStarted() {
            Rlog.d(PacketKeepAliveProcessor.TAG, "keepAlive is started!");
            this.mIsStarted = true;
            PacketKeepAliveProcessor.this.mWifiPdnHandler.sendMessage(PacketKeepAliveProcessor.this.mWifiPdnHandler.obtainMessage(1007, 0, 0, this.config));
        }

        public void onStopped() {
            Rlog.d(PacketKeepAliveProcessor.TAG, "keepAlive is stopped!");
            this.mIsStarted = false;
        }
    }

    public PacketKeepAliveProcessor(ConnectivityManager connectivityManager, Handler handler) {
        this.mConnectivityManager = connectivityManager;
        this.mWifiPdnHandler = handler;
    }

    private String getStringFromArray(String[] strArr) {
        if (strArr == null) {
            return "null";
        }
        String str = "";
        for (String str2 : strArr) {
            str = str + str2 + " ";
        }
        return str;
    }

    private boolean isActiveWifiNetwork(Network network) {
        return (network == null || this.mConnectivityManager.getNetworkInfo(network) == null || this.mConnectivityManager.getNetworkInfo(network).getType() != 1) ? false : true;
    }

    private boolean isWifiOffloadEnabledFromSystemProperty() {
        return "1".equals(SystemProperties.get(PROPERTY_ENABLE_OFFLOAD, "1"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String maskString(String str) {
        StringBuilder sb = new StringBuilder();
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        int length = str.length() / 2;
        if (length < 1) {
            sb.append("*");
            return sb.toString();
        }
        for (int i = 0; i < length; i++) {
            sb.append("*");
        }
        return sb.toString() + str.substring(length);
    }

    private KeepAliveConfig parseKeepAliveConfig(String[] strArr) {
        if (strArr == null) {
            Rlog.d(TAG, "parseKeepAliveConfig() result is null");
            return new KeepAliveConfig();
        }
        KeepAliveConfig keepAliveConfig = null;
        try {
            keepAliveConfig = new KeepAliveConfig(Integer.parseInt(strArr[0]) == 1, Integer.parseInt(strArr[1]), strArr[2], Integer.parseInt(strArr[3]), strArr[4], Integer.parseInt(strArr[5]));
        } catch (Exception e) {
            Rlog.e(TAG, "parseKeepAliveConfig() exception: " + e.toString());
        }
        Rlog.d(TAG, "parseKeepAliveConfig() config: " + keepAliveConfig);
        return keepAliveConfig;
    }

    KeepAliveInfo findConfigInList(KeepAliveConfig keepAliveConfig) {
        for (KeepAliveInfo keepAliveInfo : this.mKeepAlives) {
            if (keepAliveInfo.getConfig().equals(keepAliveConfig)) {
                Rlog.d(TAG, "findConfigInList found config: " + keepAliveConfig);
                return keepAliveInfo;
            }
        }
        return null;
    }

    public void handleKeepAliveChanged(String[] strArr) {
        if (!isWifiOffloadEnabledFromSystemProperty()) {
            Rlog.d(TAG, "mtk_enable_keep_alive_offload is disabled by System Property.");
            return;
        }
        Rlog.d(TAG, "handleKeepAliveChanged");
        KeepAliveConfig keepAliveConfig = parseKeepAliveConfig(strArr);
        if (keepAliveConfig == null) {
            Rlog.e(TAG, "KeepAliveConfig is null, return directly");
        } else if (keepAliveConfig.isEnabledAndAvailable()) {
            startPacketKeepAlive(keepAliveConfig);
        } else {
            stopPacketKeepAlive(keepAliveConfig);
        }
    }

    public void notifyWifiDisconnect() {
        stopAllPacketKeepAlive();
    }

    void startPacketKeepAlive(KeepAliveConfig keepAliveConfig) {
        if (this.mConnectivityManager == null) {
            Rlog.e(TAG, "ConnectivityManager is null");
            return;
        }
        if (this.mKeepAlives.size() >= 3) {
            Rlog.e(TAG, "startNattKeepalive cannot start! Due to mKeepAlives.size() >=3, size: " + this.mKeepAlives.size());
            return;
        }
        WfcKeepAliveCallback wfcKeepAliveCallback = new WfcKeepAliveCallback(keepAliveConfig);
        Network activeNetwork = this.mConnectivityManager.getActiveNetwork();
        if (isActiveWifiNetwork(activeNetwork)) {
            this.mKeepAlives.add(new KeepAliveInfo(this.mConnectivityManager.startNattKeepalive(activeNetwork, keepAliveConfig.interval, wfcKeepAliveCallback, keepAliveConfig.srcIp, keepAliveConfig.srcPort, keepAliveConfig.dstIp), keepAliveConfig, wfcKeepAliveCallback));
        } else {
            Rlog.e(TAG, "It's not a active wifi network, network: " + activeNetwork);
        }
    }

    void stopAllPacketKeepAlive() {
        Rlog.d(TAG, "stopAllPacketKeepAlive");
        Iterator<KeepAliveInfo> it = this.mKeepAlives.iterator();
        while (it.hasNext()) {
            it.next().stop();
            it.remove();
        }
    }

    void stopAndRemoveKeepAlive(KeepAliveInfo keepAliveInfo) {
        keepAliveInfo.stop();
        this.mKeepAlives.remove(keepAliveInfo);
    }

    void stopPacketKeepAlive(KeepAliveConfig keepAliveConfig) {
        Rlog.d(TAG, "stopPacketKeepAlive");
        if (this.mConnectivityManager == null) {
            Rlog.e(TAG, "ConnectivityManager is null");
            return;
        }
        KeepAliveInfo keepAliveInfoFindConfigInList = findConfigInList(keepAliveConfig);
        if (keepAliveInfoFindConfigInList != null) {
            stopAndRemoveKeepAlive(keepAliveInfoFindConfigInList);
        }
    }
}

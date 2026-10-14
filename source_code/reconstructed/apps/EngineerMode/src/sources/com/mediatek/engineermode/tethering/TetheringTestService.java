package com.mediatek.engineermode.tethering;

import android.R;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Network;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.text.TextUtils;
import com.mediatek.engineermode.Elog;
import java.util.ArrayList;
import vendor.mediatek.hardware.netdagent.V1_0.INetdagent;

/* JADX INFO: loaded from: classes3.dex */
public class TetheringTestService extends Service {
    private static final int EVENT_TEST_STATE_CHANGED = 0;
    private static final String TAG = "TetheringTestService";
    private static ConnectivityManager sConnMgr;
    private static TetheringHandler sTetherHandler;
    private Context mContext;
    private Network mCurrentNetwork;
    private boolean mIsNetworkAvailable;
    private boolean mIsNsIotCmdSent;
    private boolean mIsTetheringOn;
    private String mDownIface = "";
    private String mUpstreamIface = "";
    private final ConnectivityManager.NetworkCallback mNetworkCallback = new ConnectivityManager.NetworkCallback() { // from class: com.mediatek.engineermode.tethering.TetheringTestService.1
        @Override // android.net.ConnectivityManager.NetworkCallback
        public void onAvailable(Network network) {
            String interfaceName = "";
            TetheringTestService.this.mCurrentNetwork = network;
            TetheringTestService.this.mIsNetworkAvailable = true;
            LinkProperties linkProperties = TetheringTestService.sConnMgr.getLinkProperties(network);
            if (linkProperties != null) {
                interfaceName = linkProperties.getInterfaceName();
            } else {
                Elog.e(TetheringTestService.TAG, "No interface for upstreaming");
            }
            Elog.d(TetheringTestService.TAG, "onAvailable:" + network + ":" + interfaceName);
            if (!TextUtils.isEmpty(TetheringTestService.this.mUpstreamIface) && !TextUtils.isEmpty(interfaceName)) {
                Elog.d(TetheringTestService.TAG, "Need to update upstraming iface:" + TetheringTestService.this.mUpstreamIface);
            }
            TetheringTestService.sTetherHandler.sendEmptyMessage(0);
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public void onLost(Network network) {
            if (network.equals(TetheringTestService.this.mCurrentNetwork)) {
                TetheringTestService.this.mCurrentNetwork = null;
                TetheringTestService.this.mIsNetworkAvailable = false;
                TetheringTestService.sTetherHandler.sendEmptyMessage(0);
            }
            Elog.d(TetheringTestService.TAG, "onLost:" + network);
        }
    };
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.tethering.TetheringTestService.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (((action.hashCode() == -1754841973 && action.equals("android.net.conn.TETHER_STATE_CHANGED")) ? (byte) 0 : (byte) -1) != 0) {
                return;
            }
            ArrayList<String> stringArrayListExtra = intent.getStringArrayListExtra("tetherArray");
            TetheringTestService.this.mIsTetheringOn = stringArrayListExtra != null && stringArrayListExtra.size() > 0;
            StringBuilder sb = new StringBuilder();
            sb.append("Tethering ");
            sb.append(TetheringTestService.this.mIsTetheringOn ? "on" : "off");
            Elog.d(TetheringTestService.TAG, sb.toString());
            TetheringTestService.sTetherHandler.sendEmptyMessage(0);
        }
    };

    private class TetheringHandler extends Handler {
        public TetheringHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.arg1;
            if (message.what != 0) {
                return;
            }
            if (TetheringTestService.this.mIsNetworkAvailable && TetheringTestService.this.mIsTetheringOn) {
                TetheringTestService.this.enableNsIotTest(true);
                TetheringTestService.this.mIsNsIotCmdSent = true;
            } else if (TetheringTestService.this.mIsNsIotCmdSent && !TetheringTestService.this.mIsNetworkAvailable) {
                TetheringTestService.this.enableNsIotTest(false);
                TetheringTestService.this.mIsNsIotCmdSent = false;
            } else if (TetheringTestService.this.mIsNsIotCmdSent && !TetheringTestService.this.mIsTetheringOn) {
                TetheringTestService.this.enableNsIotTest(false);
                TetheringTestService.this.mIsNsIotCmdSent = false;
            }
            Elog.i(TetheringTestService.TAG, "NSIOT enabled flag:" + TetheringTestService.this.mIsNsIotCmdSent + " network:" + TetheringTestService.this.mIsNetworkAvailable + " tethering:" + TetheringTestService.this.mIsTetheringOn);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableNsIotTest(boolean z) {
        String str;
        String[] tetheredIfaces = sConnMgr.getTetheredIfaces();
        if (tetheredIfaces.length != 1) {
            Elog.e(TAG, "tethered iface:" + tetheredIfaces.length);
        } else {
            this.mDownIface = tetheredIfaces[0];
        }
        Network network = this.mCurrentNetwork;
        if (network != null) {
            LinkProperties linkProperties = sConnMgr.getLinkProperties(network);
            if (linkProperties != null) {
                this.mUpstreamIface = linkProperties.getInterfaceName();
            } else {
                Elog.e(TAG, "No interface for upstreaming");
            }
        } else {
            Elog.e(TAG, "Current network is null");
        }
        if (this.mDownIface.length() == 0 || this.mUpstreamIface.length() == 0) {
            Elog.e(TAG, "network interface is not ready");
            return;
        }
        Elog.i(TAG, "Upstream iface:" + this.mUpstreamIface + " downstream iface:" + this.mDownIface);
        try {
            INetdagent service = INetdagent.getService();
            if (service == null) {
                Elog.e(TAG, "agnet is null");
                return;
            }
            if (z) {
                service.dispatchNetdagentCmd("netdagent firewall get_usb_client " + this.mDownIface);
                Thread.sleep(500L);
                String str2 = SystemProperties.get("vendor.net.rndis.client");
                if (str2.length() == 0) {
                    Thread.sleep(500L);
                    service.dispatchNetdagentCmd("netdagent firewall get_usb_client " + this.mDownIface);
                    str2 = SystemProperties.get("vendor.net.rndis.client");
                }
                Elog.i(TAG, "ipaddr from vendor.net.rndis.client:" + str2);
                str = "netdagent firewall set_udp_forwarding " + this.mDownIface + " " + this.mUpstreamIface + " " + str2;
            } else {
                str = "netdagent firewall clear_udp_forwarding " + this.mDownIface + " " + this.mUpstreamIface;
            }
            Elog.i(TAG, "Send " + str);
            service.dispatchNetdagentCmd(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void init() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.conn.TETHER_STATE_CHANGED");
        this.mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
        sConnMgr.registerDefaultNetworkCallback(this.mNetworkCallback);
        Network activeNetwork = sConnMgr.getActiveNetwork();
        this.mCurrentNetwork = activeNetwork;
        this.mIsNetworkAvailable = activeNetwork != null;
        this.mIsTetheringOn = sConnMgr.getTetheredIfaces().length != 0;
        this.mIsNsIotCmdSent = false;
        sTetherHandler.sendEmptyMessage(0);
    }

    private void uninit() {
        enableNsIotTest(false);
        this.mContext.unregisterReceiver(this.mBroadcastReceiver);
        sConnMgr.unregisterNetworkCallback(this.mNetworkCallback);
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        Context applicationContext = getApplicationContext();
        this.mContext = applicationContext;
        sConnMgr = (ConnectivityManager) applicationContext.getSystemService("connectivity");
        this.mContext = getApplicationContext();
        HandlerThread handlerThread = new HandlerThread(TAG);
        handlerThread.start();
        sTetherHandler = new TetheringHandler(handlerThread.getLooper());
        Elog.d(TAG, "onCreate");
        init();
    }

    @Override // android.app.Service
    public void onDestroy() {
        uninit();
        super.onDestroy();
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        Elog.d(TAG, "onStartCommand:" + intent.getAction());
        ((NotificationManager) getSystemService(NotificationManager.class)).createNotificationChannel(new NotificationChannel(TAG, TAG, 2));
        startForeground(1, new Notification.Builder(this).setWhen(System.currentTimeMillis()).setChannelId(TAG).setSmallIcon(R.drawable.ic_menu_find_mtrl_alpha).setContentTitle(TAG).build());
        return 1;
    }
}

package com.mediatek.ims.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.ContentObserver;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.location.LocationRequest;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.provider.Settings;
import android.util.Log;
import com.mediatek.ims.ImsAdapter;
import com.mediatek.ims.ImsEventDispatcher;
import com.mediatek.ims.VaConstants;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class WfcDispatcher implements ImsEventDispatcher.VaEventDispatcher {
    private static final String ACTION_LOCATED_PLMN_CHANGED = "com.mediatek.intent.action.LOCATED_PLMN_CHANGED";
    private static final boolean DEBUG = false;
    private static final int EVENT_MSG_HANDLE_NETWORK_LOCATION_RESPONSE = 2;
    private static final int EVENT_MSG_REQUEST_GEO_LOCATION = 0;
    private static final int EVENT_MSG_REQUEST_NETWORK_LOCATION = 1;
    private static final int EVENT_MSG_RESPONSE_GEO_LOCATION = 4;
    private static final int EVENT_MSG_UPDATE_AID_INFORMATION = 5;
    private static final String EXTRA_ISO = "iso";
    private static final int MSG_REG_IMSA_REQUEST_GEO_LOCATION_INFO = 96009;
    private static final int MSG_REG_IMSA_RESPONSE_GETO_LOCATION_INFO = 91030;
    private static final int NETWORK_LOCATION_UPDATE_TIME = 1000;
    private static final String TAG = "Wfc-IMSA";
    private String mAid;
    private Context mContext;
    private LocationManager mLocationManager;
    private ImsAdapter.VaSocketIO mSocket;
    private static final String AID_SETTING_URI_STR = "wfc_aid_value";
    private static final Uri AID_SETTING_URI = Settings.Global.getUriFor(AID_SETTING_URI_STR);
    private static final BlockingQueue<Runnable> sPoolWorkQueue = new LinkedBlockingDeque();
    private static final ThreadFactory sThreadFactory = new ThreadFactory() { // from class: com.mediatek.ims.internal.WfcDispatcher.1
        private final AtomicInteger mCount = new AtomicInteger(1);

        @Override // java.util.concurrent.ThreadFactory
        public Thread newThread(Runnable runnable) {
            return new Thread(runnable, "WFC #" + this.mCount.getAndIncrement());
        }
    };
    private static final ThreadPoolExecutor sPoolExecutor = new ThreadPoolExecutor(0, 3, 30, TimeUnit.SECONDS, sPoolWorkQueue, sThreadFactory);
    private List<GeoLocationTask> mNetworkLocationTasks = new ArrayList();
    private boolean mImsEnabled = DEBUG;
    private String mPlmnCountryCode = "";
    private LocationListener mLocationListener = new LocationListener() { // from class: com.mediatek.ims.internal.WfcDispatcher.2
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            WfcDispatcher.this.log("onLocationChanged: " + location);
            WfcDispatcher.this.cancelNetworkGeoLocationRequest();
            WfcDispatcher.this.mHandler.obtainMessage(2, location).sendToTarget();
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
            WfcDispatcher.this.log("onProviderDisabled: " + str);
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
            WfcDispatcher.this.log("onProviderEnabled: " + str);
        }

        @Override // android.location.LocationListener
        public void onStatusChanged(String str, int i, Bundle bundle) {
            WfcDispatcher.this.log("onStatusChanged: " + str + ", status=" + i);
        }
    };
    private BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.internal.WfcDispatcher.3
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent == null || intent.getAction() == null) {
                return;
            }
            WfcDispatcher.this.log("onReceive action:" + intent.getAction());
            if (intent.getAction().equals(WfcDispatcher.ACTION_LOCATED_PLMN_CHANGED)) {
                String str = (String) intent.getExtra(WfcDispatcher.EXTRA_ISO);
                if (str == null) {
                    WfcDispatcher.this.log("iso country code is null");
                    return;
                }
                WfcDispatcher.this.mPlmnCountryCode = str.toUpperCase();
                WfcDispatcher.this.log("ACTION_LOCATED_PLMN_CHANGED, iso: " + WfcDispatcher.this.mPlmnCountryCode);
            }
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.ims.internal.WfcDispatcher.4
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            Object obj = message.obj;
            WfcDispatcher.this.log("handleMessage: msg=" + WfcDispatcher.this.handlerEventMsgToString(i));
            if (i == 0) {
                final GeoLocationTask geoLocationTask = (GeoLocationTask) obj;
                WfcDispatcher.this.log("push GeoLocation task transaction-" + geoLocationTask.transactionId + " to queue");
                WfcDispatcher.sPoolExecutor.execute(new Runnable() { // from class: com.mediatek.ims.internal.WfcDispatcher.4.1
                    @Override // java.lang.Runnable
                    public void run() throws IOException {
                        WfcDispatcher.this.log(" start for transaction-" + geoLocationTask.transactionId);
                        WfcDispatcher.this.updateGeoLocationFromLatLong(geoLocationTask);
                        obtainMessage(4, geoLocationTask).sendToTarget();
                    }
                });
                return;
            }
            if (i == 1) {
                GeoLocationTask geoLocationTask2 = (GeoLocationTask) obj;
                WfcDispatcher.this.mNetworkLocationTasks.add(geoLocationTask2);
                if (WfcDispatcher.this.getLastKnownLocation(geoLocationTask2)) {
                    return;
                }
                WfcDispatcher.this.mNetworkLocationTasks.remove(geoLocationTask2);
                WfcDispatcher.this.log("getLastKnownLocation failed");
                obtainMessage(4, geoLocationTask2).sendToTarget();
                return;
            }
            if (i != 2) {
                if (i != 4) {
                    if (i == 5) {
                        WfcDispatcher.this.handleAidInfoUpdate();
                        return;
                    }
                    Log.w(WfcDispatcher.TAG, "Unhandled message: " + WfcDispatcher.this.handlerEventMsgToString(i));
                    return;
                }
                GeoLocationTask geoLocationTask3 = (GeoLocationTask) obj;
                WfcDispatcher.this.log("finish for transaction-" + geoLocationTask3.transactionId);
                WfcDispatcher.this.handleGeoLocationResponse(geoLocationTask3);
                return;
            }
            Location location = (Location) obj;
            if (location == null) {
                WfcDispatcher.this.log("network location get null, unexpected result");
                return;
            }
            double latitude = location.getLatitude();
            double longitude = location.getLongitude();
            WfcDispatcher.this.log("update all GeoLocationTask");
            for (GeoLocationTask geoLocationTask4 : WfcDispatcher.this.mNetworkLocationTasks) {
                geoLocationTask4.latitude = latitude;
                geoLocationTask4.longitude = longitude;
                WfcDispatcher.this.log("Get network location, send EVENT_MSG_REQUEST_GEO_LOCATION for transactionId-" + geoLocationTask4.transactionId);
                obtainMessage(0, geoLocationTask4).sendToTarget();
            }
            WfcDispatcher.this.mNetworkLocationTasks.clear();
        }
    };

    private static class GeoLocationTask {
        int accuracy;
        String city;
        String countryCode;
        double latitude;
        double longitude;
        String method;
        int phoneId;
        String state;
        int transactionId;
        String zip;

        private GeoLocationTask() {
            this.method = "";
            this.city = "";
            this.state = "";
            this.zip = "";
            this.countryCode = "";
        }

        public String toString() {
            return "[GeoLocationTask objId: " + hashCode() + ", phoneId: " + this.phoneId + ", transactionId: " + this.transactionId + ", accuracy: " + this.accuracy + ", method: " + this.method + ", city: " + this.city + ", state: " + this.state + ", zip: " + this.zip + ", countryCode: " + this.countryCode;
        }
    }

    private class SettingsObserver extends ContentObserver {
        public SettingsObserver(Handler handler) {
            super(handler);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void register() {
            WfcDispatcher.this.mContext.getContentResolver().registerContentObserver(WfcDispatcher.AID_SETTING_URI, WfcDispatcher.DEBUG, this);
        }

        private void unregister() {
            WfcDispatcher.this.mContext.getContentResolver().unregisterContentObserver(this);
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean z) {
            onChange(z, null);
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean z, Uri uri) {
            if (WfcDispatcher.AID_SETTING_URI.equals(uri)) {
                WfcDispatcher wfcDispatcher = WfcDispatcher.this;
                wfcDispatcher.mAid = Settings.Global.getString(wfcDispatcher.mContext.getContentResolver(), WfcDispatcher.AID_SETTING_URI_STR);
                WfcDispatcher.this.log("Receive AID changed from Setting, AID=" + WfcDispatcher.this.mAid);
                WfcDispatcher.this.mHandler.obtainMessage(5).sendToTarget();
            }
        }
    }

    public WfcDispatcher(Context context, ImsAdapter.VaSocketIO vaSocketIO) {
        log("WfcDispatcher()");
        this.mContext = context;
        this.mSocket = vaSocketIO;
        this.mLocationManager = (LocationManager) context.getSystemService("location");
        new SettingsObserver(null).register();
        registerForBroadcast();
        log("WfcDispatcher() end");
    }

    private void addPackageInLocationSettingsWhitelist() {
        String str;
        String packageName = this.mContext.getPackageName();
        String string = Settings.Global.getString(this.mContext.getContentResolver(), "location_ignore_settings_package_whitelist");
        if (string == null || string.indexOf(packageName) == -1) {
            if (string == null) {
                str = "";
            } else {
                str = string + ",";
            }
            String str2 = str + packageName;
            log("Add WFC in location setting whitelist:" + str2);
            Settings.Global.putString(this.mContext.getContentResolver(), "location_ignore_settings_package_whitelist", str2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void cancelNetworkGeoLocationRequest() {
        LocationManager locationManager = this.mLocationManager;
        if (locationManager == null) {
            log("cancelNetworkGeoLocationRequest: empty locationManager, return");
            return;
        }
        locationManager.removeUpdates(this.mLocationListener);
        removePackageInLocationSettingsWhitelist();
        Log.d(TAG, "cancelNetworkGeoLocationRequest");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean getLastKnownLocation(GeoLocationTask geoLocationTask) {
        log("getLastKnownLocation");
        LocationManager locationManager = this.mLocationManager;
        if (locationManager == null) {
            log("getLastKnownLocation: empty locationManager, return");
            return DEBUG;
        }
        Location lastKnownLocation = locationManager.getLastKnownLocation("gps");
        if (lastKnownLocation != null) {
            geoLocationTask.method = "GPS";
            log("GPS location: " + lastKnownLocation);
            this.mHandler.obtainMessage(2, lastKnownLocation).sendToTarget();
            return true;
        }
        Location lastKnownLocation2 = this.mLocationManager.getLastKnownLocation("network");
        if (lastKnownLocation2 == null) {
            log("getLastKnownLocation: no last known location");
            return DEBUG;
        }
        geoLocationTask.method = "Network";
        log("Network location: " + lastKnownLocation2);
        this.mHandler.obtainMessage(2, lastKnownLocation2).sendToTarget();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleAidInfoUpdate() {
        if (this.mSocket == null) {
            log("handleAidInfoUpdate: socket is null, can't send AID info.");
            return;
        }
        log("send " + imsaMsgToString(VaConstants.MSG_ID_UPDATE_IMCB_AID_INFO) + "(" + VaConstants.MSG_ID_UPDATE_IMCB_AID_INFO + ") to IMSM: AID=" + this.mAid);
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(ImsAdapter.Util.getDefaultVoltePhoneId(), VaConstants.MSG_ID_UPDATE_IMCB_AID_INFO);
        String str = this.mAid;
        if (str == null) {
            str = "";
        }
        vaEvent.putString(str, 32);
        writeEventToSocket(vaEvent);
    }

    private void handleGeoLocationRequest(int i, ImsAdapter.VaEvent vaEvent) {
        GeoLocationTask geoLocationTask = new GeoLocationTask();
        geoLocationTask.phoneId = vaEvent.getPhoneId();
        geoLocationTask.transactionId = i;
        geoLocationTask.latitude = vaEvent.getDouble();
        geoLocationTask.longitude = vaEvent.getDouble();
        geoLocationTask.accuracy = vaEvent.getInt();
        log("handleGeoLocationRequest: get UA's request: " + geoLocationTask);
        if (geoLocationTask.latitude == 0.0d || geoLocationTask.longitude == 0.0d) {
            log("send EVENT_MSG_REQUEST_NETWORK_LOCATION for transactionId-" + geoLocationTask.transactionId);
            geoLocationTask.method = "Network";
            this.mHandler.obtainMessage(1, geoLocationTask).sendToTarget();
            return;
        }
        log("send EVENT_MSG_REQUEST_GEO_LOCATION for transactionId-" + geoLocationTask.transactionId);
        geoLocationTask.method = "GPS";
        this.mHandler.obtainMessage(0, geoLocationTask).sendToTarget();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleGeoLocationResponse(GeoLocationTask geoLocationTask) {
        log("send " + imsaMsgToString(VaConstants.MSG_ID_RESPONSE_VOWIFI_RELATED_INFO) + "(" + VaConstants.MSG_ID_RESPONSE_VOWIFI_RELATED_INFO + ") to IMSM: result=" + geoLocationTask);
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(geoLocationTask.phoneId, VaConstants.MSG_ID_RESPONSE_VOWIFI_RELATED_INFO);
        vaEvent.putByte(geoLocationTask.transactionId);
        vaEvent.putBytes(new byte[3]);
        vaEvent.putInt(MSG_REG_IMSA_RESPONSE_GETO_LOCATION_INFO);
        vaEvent.putDouble(geoLocationTask.latitude);
        vaEvent.putDouble(geoLocationTask.longitude);
        vaEvent.putInt(geoLocationTask.accuracy);
        vaEvent.putString(geoLocationTask.method == null ? "" : geoLocationTask.method, 16);
        vaEvent.putString(geoLocationTask.city == null ? "" : geoLocationTask.city, 32);
        vaEvent.putString(geoLocationTask.state == null ? "Unknown" : geoLocationTask.state, 32);
        vaEvent.putString(geoLocationTask.zip == null ? "" : geoLocationTask.zip, 8);
        vaEvent.putString(geoLocationTask.countryCode != null ? geoLocationTask.countryCode : "", 8);
        writeEventToSocket(vaEvent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String handlerEventMsgToString(int i) {
        if (i == 0) {
            return "EVENT_MSG_REQUEST_GEO_LOCATION";
        }
        if (i == 1) {
            return "EVENT_MSG_REQUEST_NETWORK_LOCATION";
        }
        if (i == 2) {
            return "EVENT_MSG_HANDLE_NETWORK_LOCATION_RESPONSE";
        }
        if (i == 4) {
            return "EVENT_MSG_RESPONSE_GEO_LOCATION";
        }
        if (i == 5) {
            return "EVENT_MSG_UPDATE_AID_INFORMATION";
        }
        return "EVENT_MSG_ID-" + i;
    }

    private String imsaMsgToString(int i) {
        switch (i) {
            case VaConstants.MSG_ID_REQUEST_VOWIFI_RELATED_INFO /* 900406 */:
                return "MSG_ID_REQUEST_VOWIFI_RELATED_INFO";
            case VaConstants.MSG_ID_RESPONSE_VOWIFI_RELATED_INFO /* 900407 */:
                return "MSG_ID_RESPONSE_VOWIFI_RELATED_INFO";
            case VaConstants.MSG_ID_UPDATE_IMCB_AID_INFO /* 900408 */:
                return "MSG_ID_UPDATE_IMCB_AID_INFO";
            default:
                return "Unknown Msg";
        }
    }

    private void parseRequestDataPayload(ImsAdapter.VaEvent vaEvent) {
        int i = vaEvent.getByte();
        vaEvent.getBytes(3);
        int i2 = vaEvent.getInt();
        log("parseRequestDataPayload: transaction-" + i + ", uaMsgId=" + uaMsgIdToString(i2) + "(" + i2 + ")");
        if (i2 != MSG_REG_IMSA_REQUEST_GEO_LOCATION_INFO) {
            log("parseRequestDataPayload: unknown msgId");
        } else {
            handleGeoLocationRequest(i, vaEvent);
        }
    }

    private void registerForBroadcast() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_LOCATED_PLMN_CHANGED);
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
    }

    private void removePackageInLocationSettingsWhitelist() {
        String packageName = this.mContext.getPackageName();
        String string = Settings.Global.getString(this.mContext.getContentResolver(), "location_ignore_settings_package_whitelist");
        int iIndexOf = -1;
        String strReplace = "";
        if (string != null) {
            iIndexOf = string.indexOf("," + packageName);
            if (iIndexOf != -1) {
                strReplace = string.replace("," + packageName, "");
            } else {
                iIndexOf = string.indexOf(packageName);
                if (iIndexOf != -1) {
                    strReplace = string.replace(packageName, "");
                }
            }
        }
        if (iIndexOf != -1) {
            log("Remove WFC in location setting whitelist:" + strReplace);
            Settings.Global.putString(this.mContext.getContentResolver(), "location_ignore_settings_package_whitelist", strReplace);
        }
    }

    private boolean requestGeoLocationFromNetworkLocation() {
        if (this.mLocationManager == null) {
            log("getGeoLocationFromNetworkLocation: empty locationManager, return");
            return DEBUG;
        }
        String str = SystemProperties.get("persist.vendor.operator.optr");
        if (str == null || !str.equals("OP08")) {
            if (!this.mLocationManager.isProviderEnabled("network")) {
                log("requestGeoLocationFromNetworkLocation:this system has no networkProvider implementation!");
                return DEBUG;
            }
        } else if (this.mLocationManager.getProvider("network") == null) {
            log("requestGeoLocationFromNetworkLocation:getProvider() is null!");
            return DEBUG;
        }
        addPackageInLocationSettingsWhitelist();
        LocationRequest locationRequestCreateFromDeprecatedProvider = LocationRequest.createFromDeprecatedProvider("network", 1000L, 0.0f, DEBUG);
        locationRequestCreateFromDeprecatedProvider.setHideFromAppOps(true);
        locationRequestCreateFromDeprecatedProvider.setLocationSettingsIgnored(true);
        this.mLocationManager.requestLocationUpdates(locationRequestCreateFromDeprecatedProvider, this.mLocationListener, (Looper) null);
        Log.d(TAG, "requestGeoLocationFromNetworkLocation");
        return true;
    }

    private String uaMsgIdToString(int i) {
        if (i != MSG_REG_IMSA_RESPONSE_GETO_LOCATION_INFO) {
            return i != MSG_REG_IMSA_REQUEST_GEO_LOCATION_INFO ? "Unknown Msg" : "MSG_REG_IMSA_REQUEST_GEO_LOCATION_INFO";
        }
        return "MSG_REG_IMSA_RESPONSE_GETO_LOCATION_INFO";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateGeoLocationFromLatLong(GeoLocationTask geoLocationTask) throws IOException {
        if (!Geocoder.isPresent()) {
            log("getGeoLocationFromLatLong: this system has no GeoCoder implementation!!");
            return;
        }
        List<Address> fromLocation = null;
        try {
            fromLocation = new Geocoder(this.mContext, Locale.US).getFromLocation(geoLocationTask.latitude, geoLocationTask.longitude, 1);
        } catch (IOException e) {
            Log.e(TAG, "geocoder.getFromLocation throw exception:", e);
        }
        if (fromLocation == null || fromLocation.isEmpty()) {
            log("getGeoLocationFromLatLong: get empty address, fill plmn:" + this.mPlmnCountryCode);
            geoLocationTask.countryCode = this.mPlmnCountryCode;
            return;
        }
        Address address = fromLocation.get(0);
        geoLocationTask.city = address.getLocality();
        if (geoLocationTask.city == null || geoLocationTask.city.equals("")) {
            geoLocationTask.city = address.getSubAdminArea();
        }
        geoLocationTask.state = address.getAdminArea();
        if (geoLocationTask.state == null || geoLocationTask.state.equals("")) {
            geoLocationTask.state = fromLocation.get(0).getCountryName();
        }
        geoLocationTask.zip = address.getPostalCode();
        geoLocationTask.countryCode = address.getCountryCode();
        if (geoLocationTask.countryCode != null && !geoLocationTask.countryCode.equals("")) {
            this.mPlmnCountryCode = geoLocationTask.countryCode;
        }
        log("getGeoLocationFromLatLong: location=" + geoLocationTask);
    }

    private void writeEventToSocket(ImsAdapter.VaEvent vaEvent) {
        ImsAdapter.VaSocketIO vaSocketIO;
        if (this.mImsEnabled && (vaSocketIO = this.mSocket) != null && vaEvent != null) {
            vaSocketIO.writeEvent(vaEvent);
            return;
        }
        Log.e(TAG, "Event discarded:" + vaEvent);
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void disableRequest(int i) {
        log("disableRequest()");
        this.mImsEnabled = DEBUG;
        this.mNetworkLocationTasks.clear();
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void enableRequest(int i) {
        log("enableRequest()");
        this.mImsEnabled = true;
        this.mAid = Settings.Global.getString(this.mContext.getContentResolver(), AID_SETTING_URI_STR);
        log("Trigger AID information update to IMCB, AID=" + this.mAid);
        Handler handler = this.mHandler;
        handler.sendMessageDelayed(handler.obtainMessage(5), 1000L);
    }

    protected void log(String str) {
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void vaEventCallback(ImsAdapter.VaEvent vaEvent) {
        try {
            int requestID = vaEvent.getRequestID();
            log("vaEventCallback: ID=" + imsaMsgToString(requestID) + "(" + requestID + ")");
            if (requestID != 900406) {
                log("Unknown request, return directly ");
            } else {
                parseRequestDataPayload(vaEvent);
            }
        } catch (Exception e) {
            Log.e(TAG, "Event exception", e);
        }
    }
}

package com.mediatek.wfo.impl;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.location.LocationRequest;
import android.net.ConnectivityManager;
import android.net.Network;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.SystemProperties;
import android.preference.PreferenceManager;
import android.provider.Settings;
import android.telecom.TelecomManager;
import android.telephony.CarrierConfigManager;
import android.telephony.PhoneStateListener;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.mediatek.ims.ImsConstants;
import com.mediatek.wfo.ril.MwiRIL;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public class WfcLocationHandler extends Handler {
    private static final String ACTION_LOCATED_PLMN_CHANGED = "com.mediatek.intent.action.LOCATED_PLMN_CHANGED";
    private static final String ACTION_LOCATION_CACHE = "com.mediatek.intent.action.LOCATION_HANDLE";
    private static final int BASE = 3000;
    private static final int CACHE_DISABLE = 0;
    private static final int CACHE_ENABLE = 1;
    private static final String CACHE_ENABLE_EXTRA = "enable_location_handle";
    private static final String COUNTRY_CODE_HK = "HK";
    private static final int EVENT_ALL_RETRY_GET_LOCATION_REQUST = 3008;
    private static final int EVENT_DIALING_E911 = 3006;
    private static final int EVENT_GET_LAST_KNOWN_LOCATION = 3001;
    public static final int EVENT_GET_LOCATION_REQUEST = 3000;
    private static final int EVENT_HANDLE_LAST_KNOWN_LOCATION_RESPONSE = 3003;
    private static final int EVENT_HANDLE_NETWORK_LOCATION_RESPONSE = 3002;
    private static final int EVENT_LOCATION_CACHE = 3011;
    private static final int EVENT_LOCATION_MODE_CHANGED = 3009;
    private static final int EVENT_LOCATION_PROVIDERS_CHANGED = 3013;
    private static final int EVENT_REQUEST_NETWORK_LOCATION = 3010;
    private static final int EVENT_RETRY_GET_LOCATION_REQUEST = 3007;
    private static final int EVENT_RETRY_NETWORK_LOCATION_REQUEST = 3012;
    private static final int EVENT_SET_COUNTRY_CODE = 3005;
    private static final int EVENT_SET_LOCATION_INFO = 3004;
    private static final String EXTRA_ISO = "iso";
    private static final String KEY_LOCATION_CACHE = "key_ocation_cache";
    private static final String KEY_LOCATION_CACHE_ACCOUNTID = "key_accountid";
    private static final String KEY_LOCATION_CACHE_ACCURACY = "key_accuracy";
    private static final String KEY_LOCATION_CACHE_BROADCASTFLAG = "key_broadcastflag";
    private static final String KEY_LOCATION_CACHE_CITY = "key_city";
    private static final String KEY_LOCATION_CACHE_COUNTRYCODE = "key_countrycode";
    private static final String KEY_LOCATION_CACHE_LATITUDE = "key_latitude";
    private static final String KEY_LOCATION_CACHE_LONGTITUDE = "key_longitude";
    private static final String KEY_LOCATION_CACHE_METHOD = "key_method";
    private static final String KEY_LOCATION_CACHE_STATE = "key_state";
    private static final String KEY_LOCATION_CACHE_ZIP = "key_zip";
    private static final String LOCATION_PERMISSION_NAME = "android.permission.ACCESS_FINE_LOCATION";
    private static final int MAX_VALID_SIM_COUNT = 4;
    private static final int MSG_REG_IMSA_REQUEST_GEO_LOCATION_INFO = 96009;
    private static final int MSG_REG_IMSA_RESPONSE_GETO_LOCATION_INFO = 91030;
    public static final String MTK_KEY_WFC_GET_LOCATION_ALWAYS = "mtk_carrier_wfc_get_location_always";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final int REQUEST_NETWORK_LOCATION_RETRY_TIMEOUT = 3000;
    private static final int RESPONSE_SET_LOCATION_ENABLED = 3101;
    private static final int RESPONSE_SET_LOCATION_INFO = 3100;
    private static final String TAG = "WfcLocationHandler";
    private static final boolean TELDBG;
    private static final boolean USR_BUILD;
    private CallStateListener mCallStateListener;
    private CarrierConfigManager mConfigManager;
    private Context mContext;
    private Context mDeviceContext;
    private Geocoder mGeoCoder;
    private int mGeocodingFailRetry;
    private String mGnssProxyPackageName;
    private boolean mLastLocationSetting;
    private ArrayList<LocationInfo> mLocationInfoQueue;
    private LocationListenerImp mLocationListener;
    private LocationManager mLocationManager;
    private Object mLocationRequestLock;
    private boolean mLocationRequestRegistered;
    private boolean mLocationSetting;
    private boolean mLocationTimeout;
    private Object mLocationTimeoutLock;
    private MwiRIL[] mMwiRil;
    private boolean mNetworkAvailable;
    private int mNetworkLocationRetry;
    private ArrayList<LocationInfo> mNetworkLocationTasks;
    private PackageManager mPackageManager;
    private ArrayList<Message> mPendingLocationRequest;
    private String mPlmnCountryCode;
    private BroadcastReceiver mReceiver;
    private int mSimCount;
    private TelecomManager mTelecomManager;
    private TelephonyManager mTelephonyManager;
    private WfcHandler mWfcHandler;
    private String mWifiMacAddr;
    private WifiPdnHandler mWifiPdnHandler;
    private static int MAX_NUM_OF_GET_LOCATION_TASKS_THREAD = 3;
    private static int REQUEST_GEOLOCATION_FROM_NETWORK_TIMEOUT = 60000;
    private static final boolean ENGLOAD = "eng".equals(Build.TYPE);
    private static int MAX_GEOCODING_FAILURE_RETRY = 5;
    private static int MAX_NETWORK_LOCATION_RETRY = 15;
    private static final int REQUEST_LOCATION_RETRY_TIMEOUT = 5000;
    private static int NETWORK_LOCATION_UPDATE_TIME = REQUEST_LOCATION_RETRY_TIMEOUT;

    class CallStateListener extends PhoneStateListener {
        CallStateListener() {
        }

        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            Rlog.i(WfcLocationHandler.TAG, "onCallStateChanged state=" + i);
            if (i == 2 && WfcLocationHandler.this.isEccInProgress()) {
                Rlog.i(WfcLocationHandler.TAG, "E911 is dialing");
                if (WfcLocationHandler.this.mWifiPdnHandler.isWifiConnected() || WfcLocationHandler.this.mNetworkAvailable) {
                    WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_DIALING_E911).sendToTarget();
                } else {
                    Rlog.e(WfcLocationHandler.TAG, "E911, Wi-Fi isn't connected and network unavailable");
                }
            }
        }
    }

    public class LocationInfo {
        public int mAccountId;
        public float mAccuracy;
        public int mBroadcastFlag;
        public double mLatitude;
        public double mLongitude;
        public int mSimIdx;
        public String mMethod = "";
        public String mCity = "";
        public String mState = "";
        public String mZip = "";
        public String mCountryCode = "";
        public long mTime = 0;

        LocationInfo(int i, int i2, int i3, double d, double d2, float f) {
            this.mSimIdx = i;
            this.mAccountId = i2;
            this.mBroadcastFlag = i3;
            this.mLatitude = d;
            this.mLongitude = d2;
            this.mAccuracy = f;
        }

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append("[LocationInfo objId: ");
            sb.append(System.identityHashCode(this));
            sb.append(", phoneId: " + this.mSimIdx);
            sb.append(", transationId: " + this.mAccountId);
            sb.append(", accuracy: " + this.mAccuracy);
            sb.append(", broadcastFlag: " + this.mBroadcastFlag);
            sb.append(", method: " + this.mMethod);
            sb.append(", city: " + WfcLocationHandler.this.maskString(this.mCity));
            sb.append(", state: " + WfcLocationHandler.this.maskString(this.mState));
            sb.append(", zip: " + WfcLocationHandler.this.maskString(this.mZip));
            sb.append(", countryCode: " + WfcLocationHandler.this.maskString(this.mCountryCode));
            sb.append(", time: " + this.mTime);
            return sb.toString();
        }
    }

    private class LocationListenerImp implements LocationListener {
        private LocationListenerImp() {
        }

        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            if (WfcLocationHandler.ENGLOAD) {
                Rlog.i(WfcLocationHandler.TAG, "onLocationChanged: " + location);
            } else {
                Rlog.i(WfcLocationHandler.TAG, "onLocationChanged");
            }
            long time = location.getTime();
            WfcLocationHandler.this.log("onLocationChanged newNlpTime: " + time);
            boolean z = false;
            for (LocationInfo locationInfo : WfcLocationHandler.this.mLocationInfoQueue) {
                WfcLocationHandler.this.log("onLocationChanged locationInfo time: " + locationInfo.mTime);
                if (locationInfo.mTime == time) {
                    z = true;
                }
            }
            if (z) {
                WfcLocationHandler.this.log("onLocationChanged isCache: " + z);
                WfcLocationHandler.access$608(WfcLocationHandler.this);
            }
            WfcLocationHandler.this.cancelNetworkLocationRequest();
            synchronized (WfcLocationHandler.this.mLocationTimeoutLock) {
                WfcLocationHandler.this.mLocationTimeout = false;
            }
            WfcLocationHandler.this.log("removeMessages: EVENT_GET_LAST_KNOWN_LOCATION");
            WfcLocationHandler.this.removeMessages(WfcLocationHandler.EVENT_GET_LAST_KNOWN_LOCATION);
            WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_HANDLE_NETWORK_LOCATION_RESPONSE, 0, 0, location).sendToTarget();
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
            WfcLocationHandler.this.log("onProviderDisabled: " + str);
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
            WfcLocationHandler.this.log("onProviderEnabled: " + str);
        }

        @Override // android.location.LocationListener
        public void onStatusChanged(String str, int i, Bundle bundle) {
            WfcLocationHandler.this.log("onStatusChanged: " + str + ", status=" + i);
        }
    }

    static {
        USR_BUILD = TextUtils.equals(Build.TYPE, "user") || TextUtils.equals(Build.TYPE, "userdebug");
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public WfcLocationHandler(Context context, WfcHandler wfcHandler, WifiPdnHandler wifiPdnHandler, int i, Looper looper, MwiRIL[] mwiRILArr) {
        super(looper);
        this.mCallStateListener = new CallStateListener();
        this.mLocationInfoQueue = new ArrayList<>();
        this.mNetworkLocationTasks = new ArrayList<>();
        this.mLocationListener = new LocationListenerImp();
        this.mLocationRequestRegistered = false;
        this.mPlmnCountryCode = "";
        this.mWifiMacAddr = "";
        this.mNetworkAvailable = false;
        this.mPendingLocationRequest = new ArrayList<>();
        this.mLocationRequestLock = new Object();
        this.mLocationTimeout = false;
        this.mLocationTimeoutLock = new Object();
        this.mLocationSetting = false;
        this.mLastLocationSetting = false;
        this.mReceiver = new BroadcastReceiver() { // from class: com.mediatek.wfo.impl.WfcLocationHandler.3
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                if (intent == null || intent.getAction() == null) {
                    return;
                }
                WfcLocationHandler.this.log("onReceive action:" + intent.getAction());
                if (intent.getAction().equals(WfcLocationHandler.ACTION_LOCATED_PLMN_CHANGED)) {
                    String str = (String) intent.getExtra(WfcLocationHandler.EXTRA_ISO);
                    if (str == null || TextUtils.isEmpty(str)) {
                        Rlog.w(WfcLocationHandler.TAG, "iso country code is null");
                        return;
                    }
                    String upperCase = str.toUpperCase();
                    Rlog.i(WfcLocationHandler.TAG, "ACTION_LOCATED_PLMN_CHANGED, iso: " + upperCase);
                    if (WfcLocationHandler.this.isCtaNotAllow()) {
                        return;
                    }
                    WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_SET_COUNTRY_CODE, upperCase).sendToTarget();
                    return;
                }
                if (intent.getAction().equals("android.location.MODE_CHANGED")) {
                    Rlog.i(WfcLocationHandler.TAG, "LocationManager.MODE_CHANGED_ACTION");
                    WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_LOCATION_MODE_CHANGED).sendToTarget();
                    return;
                }
                if (!intent.getAction().equals("android.location.PROVIDERS_CHANGED")) {
                    if (intent.getAction().equals(WfcLocationHandler.ACTION_LOCATION_CACHE)) {
                        WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_LOCATION_CACHE, intent.getIntExtra(WfcLocationHandler.CACHE_ENABLE_EXTRA, 0), 0).sendToTarget();
                        return;
                    }
                    return;
                }
                boolean zIsProviderEnabled = WfcLocationHandler.this.mLocationManager.isProviderEnabled("network");
                synchronized (WfcLocationHandler.this.mLocationTimeoutLock) {
                    Rlog.i(WfcLocationHandler.TAG, "LocationManager.PROVIDERS_CHANGED_ACTION isNlpEnabled: " + zIsProviderEnabled + ", location timeout = " + WfcLocationHandler.this.mLocationTimeout);
                    if (WfcLocationHandler.this.mLocationTimeout && zIsProviderEnabled) {
                        WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_LOCATION_PROVIDERS_CHANGED).sendToTarget();
                    }
                }
            }
        };
        this.mContext = context;
        Context contextCreateDeviceProtectedStorageContext = context.createDeviceProtectedStorageContext();
        this.mDeviceContext = contextCreateDeviceProtectedStorageContext;
        if (contextCreateDeviceProtectedStorageContext == null) {
            this.mDeviceContext = this.mContext;
            log("replace mContext to mDeviceContext");
        }
        this.mWfcHandler = wfcHandler;
        this.mWifiPdnHandler = wifiPdnHandler;
        this.mSimCount = i <= 4 ? i : 4;
        this.mMwiRil = mwiRILArr;
        this.mGeocodingFailRetry = MAX_GEOCODING_FAILURE_RETRY;
        this.mNetworkLocationRetry = MAX_NETWORK_LOCATION_RETRY;
        this.mGeoCoder = new Geocoder(this.mContext, Locale.US);
        this.mLocationManager = (LocationManager) this.mContext.getSystemService("location");
        TelephonyManager telephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        this.mTelephonyManager = telephonyManager;
        telephonyManager.listen(this.mCallStateListener, 32);
        this.mLocationSetting = this.mLocationManager.isLocationEnabled();
        log("1st time send location setting to modem, mLocationSetting:" + this.mLocationSetting);
        setLocationEnabled();
        this.mTelecomManager = (TelecomManager) this.mContext.getSystemService("telecom");
        this.mGnssProxyPackageName = loadProxyNameFromCarrierConfig();
        this.mPackageManager = this.mContext.getPackageManager();
        this.mConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        registerForBroadcast();
        registerIndication();
        registerDefaultNetwork();
    }

    static /* synthetic */ int access$608(WfcLocationHandler wfcLocationHandler) {
        int i = wfcLocationHandler.mGeocodingFailRetry;
        wfcLocationHandler.mGeocodingFailRetry = i + 1;
        return i;
    }

    static /* synthetic */ int access$610(WfcLocationHandler wfcLocationHandler) {
        int i = wfcLocationHandler.mGeocodingFailRetry;
        wfcLocationHandler.mGeocodingFailRetry = i - 1;
        return i;
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

    private void addRetryLocationRequest(Message message) {
        synchronized (this.mLocationRequestLock) {
            String[] strArr = (String[]) ((AsyncResult) message.obj).result;
            String[] strArr2 = new String[6];
            String[] strArr3 = new String[6];
            System.arraycopy(strArr, 0, strArr2, 0, strArr.length);
            System.arraycopy(strArr, 0, strArr3, 0, strArr.length);
            AsyncResult asyncResult = new AsyncResult((Object) null, strArr2, (Throwable) null);
            AsyncResult asyncResult2 = new AsyncResult((Object) null, strArr3, (Throwable) null);
            Message messageObtainMessage = obtainMessage(EVENT_RETRY_GET_LOCATION_REQUEST, asyncResult);
            if (this.mPendingLocationRequest.size() == 0) {
                this.mPendingLocationRequest.add(messageObtainMessage);
            } else {
                this.mPendingLocationRequest.set(0, messageObtainMessage);
            }
            Rlog.i(TAG, "Added, current PendingLocationRequest size: " + this.mPendingLocationRequest.size());
            sendMessageDelayed(obtainMessage(EVENT_RETRY_GET_LOCATION_REQUEST, asyncResult2), 5000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void cancelNetworkLocationRequest() {
        if (hasMessages(EVENT_RETRY_NETWORK_LOCATION_REQUEST)) {
            removeMessages(EVENT_RETRY_NETWORK_LOCATION_REQUEST);
        }
        LocationManager locationManager = this.mLocationManager;
        if (locationManager == null) {
            this.mLocationRequestRegistered = false;
            Rlog.e(TAG, "cancelNetworkLocationRequest: empty locationManager, return");
        } else {
            locationManager.removeUpdates(this.mLocationListener);
            this.mLocationRequestRegistered = false;
            removePackageInLocationSettingsWhitelist();
            Rlog.d(TAG, "cancelNetworkLocationRequest");
        }
    }

    private boolean checkLocationProxyAppPermission() {
        String strLoadProxyNameFromCarrierConfig = loadProxyNameFromCarrierConfig();
        this.mGnssProxyPackageName = strLoadProxyNameFromCarrierConfig;
        if (strLoadProxyNameFromCarrierConfig != null && strLoadProxyNameFromCarrierConfig.length() == 0) {
            Rlog.i(TAG, "The package name is empty, treat it as granted");
            return true;
        }
        if (!isPackageInstalled(this.mGnssProxyPackageName)) {
            Rlog.i(TAG, "non-FWK permission app not installed, treat it as granted");
            return true;
        }
        boolean z = this.mPackageManager.checkPermission(LOCATION_PERMISSION_NAME, this.mGnssProxyPackageName) == 0;
        Rlog.i(TAG, "proxyAppLocationGranted: " + z);
        return z;
    }

    private void dispatchLocationRequest(LocationInfo locationInfo) {
        double d = locationInfo.mLatitude;
        double d2 = locationInfo.mLongitude;
        float f = locationInfo.mAccuracy;
        if (d == 0.0d && d2 == 0.0d && f == 0.0f) {
            proccessLocationFromNetwork(locationInfo);
        } else {
            cancelNetworkLocationRequest();
            synchronized (this.mLocationTimeoutLock) {
                this.mLocationTimeout = false;
            }
            log("removeMessages: EVENT_GET_LAST_KNOWN_LOCATION");
            removeMessages(EVENT_GET_LAST_KNOWN_LOCATION);
            locationInfo.mMethod = "GPS";
            this.mLocationInfoQueue.add(locationInfo);
            pollLocationInfo();
        }
        log("dispatchLocationRequest(): " + locationInfo.mMethod);
    }

    private boolean getBooleanCarrierConfig(String str, int i, boolean z) {
        boolean z2;
        if (this.mContext == null) {
            Rlog.e(TAG, "getBooleanCarrierConfig fail, mContext = null");
        }
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(getSubId(i)) : null;
        if (configForSubId != null) {
            z2 = configForSubId.getBoolean(str, z);
        } else {
            log("getBooleanCarrierConfig: get from default config");
            z2 = CarrierConfigManager.getDefaultConfig().getBoolean(str, z);
        }
        log("getBooleanCarrierConfig phoneId: " + i + " key: " + str + " ret: " + z2);
        return z2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public LocationInfo getGeoLocationFromLatLong(LocationInfo locationInfo, Boolean bool) throws IOException {
        Boolean.valueOf(false);
        if (this.mGeoCoder == null) {
            log("getGeoLocationFromLatLong: empty geoCoder, return an empty location");
            return locationInfo;
        }
        if (!Geocoder.isPresent()) {
            log("getGeoLocationFromLatLong: this system has no GeoCoder implementation!!");
            return locationInfo;
        }
        List<Address> fromLocation = null;
        try {
            fromLocation = this.mGeoCoder.getFromLocation(locationInfo.mLatitude, locationInfo.mLongitude, 1);
        } catch (IOException e) {
            log("mGeoCoder.getFromLocation throw IOException:" + e);
        } catch (IllegalArgumentException e2) {
            log("mGeoCoder.getFromLocation throw IllegalArgumentException");
        }
        if (fromLocation == null || fromLocation.isEmpty()) {
            log("getGeoLocationFromLatLong: get empty address");
            if (!getLocationCacheEnable()) {
                Boolean.valueOf(true);
                return locationInfo;
            }
            getLocationCache(locationInfo);
            if ("".equals(locationInfo.mCity)) {
                return null;
            }
            return locationInfo;
        }
        locationInfo.mCity = fromLocation.get(0).getLocality();
        if (TextUtils.isEmpty(locationInfo.mCity)) {
            locationInfo.mCity = fromLocation.get(0).getSubAdminArea();
        }
        locationInfo.mState = fromLocation.get(0).getAdminArea();
        if (TextUtils.isEmpty(locationInfo.mState)) {
            locationInfo.mState = fromLocation.get(0).getCountryName();
        }
        locationInfo.mZip = fromLocation.get(0).getPostalCode();
        locationInfo.mCountryCode = fromLocation.get(0).getCountryCode();
        if (getLocationCacheEnable()) {
            saveLocationCache(locationInfo);
        }
        log("getGeoLocationFromLatLong: location=" + locationInfo);
        return locationInfo;
    }

    private boolean getLastKnownLocation(LocationInfo locationInfo) {
        log("getLastKnownLocation");
        LocationManager locationManager = this.mLocationManager;
        if (locationManager == null) {
            log("getLastKnownLocation: empty locationManager, return");
            return false;
        }
        if (locationManager.getProvider("gps") == null) {
            log("getLastKnownLocation: GPS_PROVIDER doesn't exist or not ready");
            return false;
        }
        Location lastKnownLocation = this.mLocationManager.getLastKnownLocation("gps");
        if (lastKnownLocation != null) {
            log("GPS location: " + lastKnownLocation);
            if (System.currentTimeMillis() - lastKnownLocation.getTime() < 1800000) {
                obtainMessage(EVENT_HANDLE_LAST_KNOWN_LOCATION_RESPONSE, 0, 0, lastKnownLocation).sendToTarget();
                return true;
            }
        }
        if (this.mLocationManager.getProvider("network") == null) {
            log("getLastKnownLocation: NETWORK_PROVIDER doesn't exist or not ready");
            return false;
        }
        Location lastKnownLocation2 = this.mLocationManager.getLastKnownLocation("network");
        if (lastKnownLocation2 != null) {
            log("Network location: " + lastKnownLocation2);
            if (System.currentTimeMillis() - lastKnownLocation2.getTime() < 1800000) {
                obtainMessage(EVENT_HANDLE_LAST_KNOWN_LOCATION_RESPONSE, 0, 0, lastKnownLocation2).sendToTarget();
                return true;
            }
        }
        log("getLastKnownLocation: no last known location");
        setLocationInfo(locationInfo);
        return false;
    }

    private LocationInfo getLocationCache(LocationInfo locationInfo) {
        SharedPreferences defaultSharedPreferences = PreferenceManager.getDefaultSharedPreferences(this.mDeviceContext);
        locationInfo.mAccountId = defaultSharedPreferences.getInt(KEY_LOCATION_CACHE_ACCOUNTID, 0);
        if (locationInfo.mBroadcastFlag == 0) {
            locationInfo.mBroadcastFlag = defaultSharedPreferences.getInt(KEY_LOCATION_CACHE_BROADCASTFLAG, 0);
        }
        locationInfo.mLatitude = defaultSharedPreferences.getFloat(KEY_LOCATION_CACHE_LATITUDE, 0.0f);
        locationInfo.mLongitude = defaultSharedPreferences.getFloat(KEY_LOCATION_CACHE_LONGTITUDE, 0.0f);
        locationInfo.mAccuracy = defaultSharedPreferences.getFloat(KEY_LOCATION_CACHE_ACCURACY, 0.0f);
        locationInfo.mMethod = defaultSharedPreferences.getString(KEY_LOCATION_CACHE_METHOD, "");
        locationInfo.mCity = defaultSharedPreferences.getString(KEY_LOCATION_CACHE_CITY, "");
        locationInfo.mState = defaultSharedPreferences.getString(KEY_LOCATION_CACHE_STATE, "");
        locationInfo.mZip = defaultSharedPreferences.getString(KEY_LOCATION_CACHE_ZIP, "");
        locationInfo.mCountryCode = defaultSharedPreferences.getString(KEY_LOCATION_CACHE_COUNTRYCODE, "");
        Rlog.i(TAG, "get geolocation from cache, location=" + locationInfo);
        return locationInfo;
    }

    private boolean getLocationCacheEnable() {
        boolean z = PreferenceManager.getDefaultSharedPreferences(this.mDeviceContext).getBoolean(KEY_LOCATION_CACHE, false);
        Rlog.i(TAG, "get location cache enable status:" + z);
        return z;
    }

    private int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt(ImsConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            i = -1;
        }
        log("getMainCapabilityPhoneId = " + i);
        return i;
    }

    private MwiRIL getMwiRil() {
        int mainCapabilityPhoneId = getMainCapabilityPhoneId();
        if (mainCapabilityPhoneId == -1) {
            return null;
        }
        return this.mMwiRil[mainCapabilityPhoneId];
    }

    private String getSimCountryCode() {
        String upperCase = this.mTelephonyManager.getSimCountryIso().toUpperCase(Locale.US);
        log("getSimCountryCode: " + upperCase);
        return upperCase;
    }

    private int getSubId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length < 1) {
            return -1;
        }
        return subId[0];
    }

    private void handleAllRetryLocationRequest() {
        log("handleAllRetryLocationRequest mPendingLocationRequest.size(): " + this.mPendingLocationRequest.size());
        synchronized (this.mLocationRequestLock) {
            if (hasMessages(EVENT_RETRY_GET_LOCATION_REQUEST)) {
                removeMessages(EVENT_RETRY_GET_LOCATION_REQUEST);
            }
            for (Message message : this.mPendingLocationRequest) {
                if (this.mWifiPdnHandler.isWifiConnected() || this.mNetworkAvailable) {
                    handleLocationRequest(message);
                } else {
                    log("Network not available, ignore EVENT_RETRY_GET_LOCATION_REQUEST.");
                }
            }
            this.mPendingLocationRequest.clear();
        }
    }

    private void handleLocationRequest(Message message) {
        if (message.obj == null) {
            Rlog.e(TAG, "handleLocationInfo(): msg.obj is null");
            return;
        }
        String[] strArr = (String[]) ((AsyncResult) message.obj).result;
        if (strArr == null) {
            Rlog.e(TAG, "handleLocationInfo(): result is null");
            return;
        }
        try {
            LocationInfo locationInfo = new LocationInfo(Integer.parseInt(strArr[5]), Integer.parseInt(strArr[0]), Integer.parseInt(strArr[1]), Double.parseDouble(strArr[2]), Double.parseDouble(strArr[3]), Float.parseFloat(strArr[4]));
            log("handleLocationRequest(): " + locationInfo);
            dispatchLocationRequest(locationInfo);
        } catch (Exception e) {
            log("handleLocationRequest(), [" + strArr.length + "], accId:" + strArr[0] + ", broadcastFlag:" + strArr[1] + ", simIdx:" + strArr[5] + ", error:" + e);
        }
    }

    private void handleNetworkLocationUpdate(Location location) {
        if (location == null) {
            log("network location get null, unexpected result");
            return;
        }
        double latitude = location.getLatitude();
        double longitude = location.getLongitude();
        float accuracy = location.getAccuracy();
        long time = location.getTime();
        log("update all LocationInfo with  time: " + time + " accuracy: " + accuracy);
        ArrayList arrayList = new ArrayList();
        for (LocationInfo locationInfo : this.mNetworkLocationTasks) {
            locationInfo.mLatitude = latitude;
            locationInfo.mLongitude = longitude;
            locationInfo.mAccuracy = accuracy;
            locationInfo.mTime = time;
            arrayList.clear();
            for (LocationInfo locationInfo2 : this.mLocationInfoQueue) {
                if (locationInfo2.mAccountId == locationInfo.mAccountId) {
                    arrayList.add(locationInfo2);
                }
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                this.mLocationInfoQueue.remove((LocationInfo) it.next());
            }
            this.mLocationInfoQueue.add(locationInfo);
        }
        pollLocationInfo();
        this.mNetworkLocationTasks.clear();
    }

    private void handleRetryLocationRequest(Message message) {
        synchronized (this.mLocationRequestLock) {
            log("Current PendingLocationRequest size: " + this.mPendingLocationRequest.size());
            if (this.mWifiPdnHandler.isWifiConnected() || this.mNetworkAvailable) {
                handleLocationRequest(message);
            } else {
                log("Network not available, ignore EVENT_RETRY_GET_LOCATION_REQUEST.");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isCtaNotAllow() {
        boolean z = false;
        String str = SystemProperties.get("ro.miui.cust_variant", "");
        if (!TextUtils.isEmpty(str) && str.startsWith("cn")) {
            return true;
        }
        boolean z2 = SystemProperties.getInt("ro.vendor.mtk_cta_set", 0) == 1;
        boolean z3 = SystemProperties.getInt("ro.vendor.mtk_mobile_management", 0) == 1;
        boolean zIsProviderEnabled = this.mLocationManager.isProviderEnabled("network");
        log("isCtaNotAllow: isCtaSet:" + z2 + ", isCtaSecurity:" + z3 + ", isNlpEnabled:" + zIsProviderEnabled);
        if (z2 && z3 && !zIsProviderEnabled) {
            z = true;
        }
        Rlog.i(TAG, "isCtaNotAllow: " + z);
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isEccInProgress() {
        TelecomManager telecomManager = this.mTelecomManager;
        boolean zIsInEmergencyCall = telecomManager != null ? telecomManager.isInEmergencyCall() : false;
        Rlog.i(TAG, "isEccInProgress: " + zIsInEmergencyCall);
        return zIsInEmergencyCall;
    }

    private boolean isGetLocationAlways() {
        boolean booleanCarrierConfig = false;
        if (SystemProperties.getInt("persist.vendor.mims_support", 1) <= 1) {
            booleanCarrierConfig = getBooleanCarrierConfig(MTK_KEY_WFC_GET_LOCATION_ALWAYS, getMainCapabilityPhoneId(), false);
        } else {
            for (int i = 0; i < this.mSimCount && !(booleanCarrierConfig = getBooleanCarrierConfig(MTK_KEY_WFC_GET_LOCATION_ALWAYS, i, false)); i++) {
            }
        }
        log("isGetLocationAlways: " + booleanCarrierConfig);
        return booleanCarrierConfig;
    }

    private boolean isPackageInstalled(String str) {
        try {
            this.mPackageManager.getPackageInfo(str, 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            Rlog.e(TAG, "non-FWK permission apk not found, treat it as granted" + str);
            return false;
        }
    }

    private String loadProxyNameFromCarrierConfig() {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        this.mConfigManager = carrierConfigManager;
        if (carrierConfigManager == null) {
            log("loadProxyNameFromCarrierConfig: Carrier Config service is NOT ready");
            return "";
        }
        int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
        PersistableBundle configForSubId = SubscriptionManager.isValidSubscriptionId(defaultDataSubscriptionId) ? this.mConfigManager.getConfigForSubId(defaultDataSubscriptionId) : null;
        if (configForSubId == null) {
            log("SIM not ready, use default carrier config");
            configForSubId = CarrierConfigManager.getDefaultConfig();
        }
        String str = (String) configForSubId.get("gps.nfw_proxy_apps");
        log("gps.nfw_proxy_apps: " + str);
        if (str != null) {
            return str.trim().split(" ")[0];
        }
        log("Cannot get location proxy APP package name");
        return "";
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

    private String messageToString(Message message) {
        int i = message.what;
        if (i == RESPONSE_SET_LOCATION_INFO) {
            return "RESPONSE_SET_LOCATION_INFO";
        }
        if (i == RESPONSE_SET_LOCATION_ENABLED) {
            return "RESPONSE_SET_LOCATION_ENABLED";
        }
        switch (i) {
            case 3000:
                return "EVENT_GET_LOCATION_REQUEST";
            case EVENT_GET_LAST_KNOWN_LOCATION /* 3001 */:
                return "EVENT_GET_LAST_KNOWN_LOCATION";
            case EVENT_HANDLE_NETWORK_LOCATION_RESPONSE /* 3002 */:
                return "EVENT_HANDLE_NETWORK_LOCATION_RESPONSE";
            case EVENT_HANDLE_LAST_KNOWN_LOCATION_RESPONSE /* 3003 */:
                return "EVENT_HANDLE_LAST_KNOWN_LOCATION_RESPONSE";
            case EVENT_SET_LOCATION_INFO /* 3004 */:
                return "EVENT_SET_LOCATION_INFO";
            case EVENT_SET_COUNTRY_CODE /* 3005 */:
                return "EVENT_SET_COUNTRY_CODE";
            case EVENT_DIALING_E911 /* 3006 */:
                return "EVENT_DIALING_E911";
            case EVENT_RETRY_GET_LOCATION_REQUEST /* 3007 */:
                return "EVENT_RETRY_GET_LOCATION_REQUEST";
            case EVENT_ALL_RETRY_GET_LOCATION_REQUST /* 3008 */:
                return "EVENT_ALL_RETRY_GET_LOCATION_REQUST";
            case EVENT_LOCATION_MODE_CHANGED /* 3009 */:
                return "EVENT_LOCATION_MODE_CHANGED";
            case EVENT_REQUEST_NETWORK_LOCATION /* 3010 */:
                return "EVENT_REQUEST_NETWORK_LOCATION";
            case EVENT_LOCATION_CACHE /* 3011 */:
                return "EVENT_LOCATION_CACHE";
            case EVENT_RETRY_NETWORK_LOCATION_REQUEST /* 3012 */:
                return "EVENT_RETRY_NETWORK_LOCATION_REQUEST";
            case EVENT_LOCATION_PROVIDERS_CHANGED /* 3013 */:
                return "EVENT_LOCATION_PROVIDERS_CHANGED";
            default:
                return "UNKNOWN";
        }
    }

    private void pollLocationInfo() {
        if (this.mLocationInfoQueue.isEmpty()) {
            log("No GeoLocation task");
            return;
        }
        final ArrayList arrayList = new ArrayList(this.mLocationInfoQueue);
        this.mLocationInfoQueue.clear();
        new Thread(new Runnable() { // from class: com.mediatek.wfo.impl.WfcLocationHandler.2
            @Override // java.lang.Runnable
            public void run() throws IOException {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    Boolean bool = false;
                    LocationInfo geoLocationFromLatLong = WfcLocationHandler.this.getGeoLocationFromLatLong((LocationInfo) it.next(), bool);
                    if (geoLocationFromLatLong != null) {
                        WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_SET_LOCATION_INFO, 0, 0, geoLocationFromLatLong).sendToTarget();
                    }
                    if (bool.booleanValue()) {
                        WfcLocationHandler.this.log("GeoCoding fail, retry = " + WfcLocationHandler.this.mGeocodingFailRetry);
                        if (WfcLocationHandler.this.mWifiPdnHandler.isWifiConnected() && WfcLocationHandler.this.mGeocodingFailRetry > 0) {
                            WfcLocationHandler.access$610(WfcLocationHandler.this);
                            WfcLocationHandler.this.obtainMessage(WfcLocationHandler.EVENT_REQUEST_NETWORK_LOCATION).sendToTarget();
                        }
                    }
                }
            }
        }).start();
    }

    private void proccessLocationFromNetwork(LocationInfo locationInfo) {
        locationInfo.mMethod = "Network";
        this.mNetworkLocationTasks.add(locationInfo);
        if (!requestLocationFromNetworkLocation()) {
            log("requestLocationFromNetworkLocation failed");
            setLocationInfo(locationInfo);
            if (hasMessages(EVENT_RETRY_NETWORK_LOCATION_REQUEST)) {
                removeMessages(EVENT_RETRY_NETWORK_LOCATION_REQUEST);
                this.mNetworkLocationRetry = MAX_NETWORK_LOCATION_RETRY;
            }
            int i = this.mNetworkLocationRetry;
            this.mNetworkLocationRetry = i - 1;
            if (i > 0) {
                log("requestLocationFromNetworkLocation retry.");
                sendMessageDelayed(obtainMessage(EVENT_RETRY_NETWORK_LOCATION_REQUEST, 0, 0, locationInfo), 3000L);
            } else {
                log("requestLocationFromNetworkLocation retry fail, skip.");
                this.mNetworkLocationTasks.remove(locationInfo);
                this.mNetworkLocationRetry = MAX_NETWORK_LOCATION_RETRY;
            }
        }
        if (hasMessages(EVENT_GET_LAST_KNOWN_LOCATION)) {
            return;
        }
        log("Add delayed message: EVENT_GET_LAST_KNOWN_LOCATION");
        sendMessageDelayed(obtainMessage(EVENT_GET_LAST_KNOWN_LOCATION, 0, 0, locationInfo), REQUEST_GEOLOCATION_FROM_NETWORK_TIMEOUT);
    }

    private void registerDefaultNetwork() {
        ConnectivityManager.from(this.mContext).registerDefaultNetworkCallback(new ConnectivityManager.NetworkCallback() { // from class: com.mediatek.wfo.impl.WfcLocationHandler.1
            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onAvailable(Network network) {
                Rlog.i(WfcLocationHandler.TAG, "NetworkCallback.onAvailable()");
                WfcLocationHandler.this.mNetworkAvailable = true;
                WfcLocationHandler.this.sendEmptyMessage(WfcLocationHandler.EVENT_ALL_RETRY_GET_LOCATION_REQUST);
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onLost(Network network) {
                Rlog.i(WfcLocationHandler.TAG, "NetworkCallback.onLost()");
                WfcLocationHandler.this.mNetworkAvailable = false;
            }
        });
    }

    private void registerForBroadcast() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_LOCATED_PLMN_CHANGED);
        intentFilter.addAction("android.location.MODE_CHANGED");
        intentFilter.addAction("android.location.PROVIDERS_CHANGED");
        intentFilter.addAction(ACTION_LOCATION_CACHE);
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
    }

    private void registerIndication() {
        for (int i = 0; i < this.mSimCount; i++) {
            this.mMwiRil[i].registerRequestGeoLocation(this, 3000, null);
        }
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

    private boolean requestLocationFromNetworkLocation() {
        LocationManager locationManager = this.mLocationManager;
        if (locationManager == null) {
            Rlog.e(TAG, "requestLocationFromNetworkLocation failed: empty locationManager");
            return false;
        }
        if (locationManager.getProvider("network") == null) {
            Rlog.e(TAG, "requestLocationFromNetworkLocation failed: NETWORK_PROVIDER not ready");
            return false;
        }
        if (isCtaNotAllow()) {
            Rlog.e(TAG, "requestLocationFromNetworkLocation failed: CTA not allow");
            return false;
        }
        boolean zCheckLocationProxyAppPermission = checkLocationProxyAppPermission();
        boolean z = isEccInProgress() || isGetLocationAlways();
        if (z) {
            addPackageInLocationSettingsWhitelist();
        }
        if (!z && !zCheckLocationProxyAppPermission) {
            Rlog.w(TAG, "requestLocationFromNetworkLocation failed: is NOT in ECC & non-framework location proxy app is NOT granted");
            return false;
        }
        if (!this.mLocationRequestRegistered) {
            LocationRequest locationRequestCreateFromDeprecatedProvider = LocationRequest.createFromDeprecatedProvider("network", NETWORK_LOCATION_UPDATE_TIME, 0.0f, false);
            locationRequestCreateFromDeprecatedProvider.setHideFromAppOps(true);
            locationRequestCreateFromDeprecatedProvider.setLocationSettingsIgnored(z);
            this.mLocationManager.requestLocationUpdates(locationRequestCreateFromDeprecatedProvider, this.mLocationListener, getLooper());
            this.mLocationRequestRegistered = true;
            Rlog.i(TAG, "requestLocationFromNetworkLocation: success");
        }
        return true;
    }

    private void saveLocationCache(LocationInfo locationInfo) {
        Rlog.i(TAG, "saveLocationCache, location=" + locationInfo);
        SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(this.mDeviceContext).edit();
        editorEdit.putInt(KEY_LOCATION_CACHE_ACCOUNTID, locationInfo.mAccountId);
        editorEdit.putInt(KEY_LOCATION_CACHE_BROADCASTFLAG, locationInfo.mBroadcastFlag);
        editorEdit.putFloat(KEY_LOCATION_CACHE_LATITUDE, (float) locationInfo.mLatitude);
        editorEdit.putFloat(KEY_LOCATION_CACHE_LONGTITUDE, (float) locationInfo.mLongitude);
        editorEdit.putFloat(KEY_LOCATION_CACHE_ACCURACY, locationInfo.mAccuracy);
        editorEdit.putString(KEY_LOCATION_CACHE_METHOD, locationInfo.mMethod);
        editorEdit.putString(KEY_LOCATION_CACHE_CITY, locationInfo.mCity);
        editorEdit.putString(KEY_LOCATION_CACHE_STATE, locationInfo.mState);
        editorEdit.putString(KEY_LOCATION_CACHE_ZIP, locationInfo.mZip);
        editorEdit.putString(KEY_LOCATION_CACHE_COUNTRYCODE, locationInfo.mCountryCode);
        if (!editorEdit.commit()) {
            Rlog.e(TAG, "Failed to commit saveLocationCache");
        }
        getLocationCache(new LocationInfo(0, 0, 0, 0.0d, 0.0d, 0.0f));
    }

    private void setCountryCode(String str) {
        LocationInfo locationInfo = new LocationInfo(0, 0, 0, 0.0d, 0.0d, 0.0f);
        locationInfo.mCountryCode = str;
        setLocationInfo(locationInfo);
    }

    private void setLocationCacheEnable(boolean z) {
        SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(this.mDeviceContext).edit();
        editorEdit.putBoolean(KEY_LOCATION_CACHE, z);
        Rlog.i(TAG, "set location cache enable:" + z);
        if (editorEdit.commit()) {
            return;
        }
        Rlog.e(TAG, "Failed to commit location cache");
    }

    private void setLocationEnabled() {
        Message messageObtainMessage = obtainMessage(RESPONSE_SET_LOCATION_ENABLED);
        log("setLocationEnabled(): last location setting:" + this.mLastLocationSetting + ", new location setting:" + this.mLocationSetting);
        getMwiRil().setWfcConfig(MwiRIL.WfcConfigType.WFC_SETTING_LOCATION_SETTING.ordinal(), "locenable", this.mLocationSetting ? "1" : "0", messageObtainMessage);
        this.mLastLocationSetting = this.mLocationSetting;
    }

    private void setLocationInfo(LocationInfo locationInfo) {
        if (TextUtils.isEmpty(locationInfo.mState)) {
            locationInfo.mState = "Unknown";
        }
        if ((!TextUtils.isEmpty(this.mPlmnCountryCode) && TextUtils.length(locationInfo.mCountryCode) != 2) || COUNTRY_CODE_HK.equals(this.mPlmnCountryCode)) {
            locationInfo.mCountryCode = this.mPlmnCountryCode;
        } else if (TextUtils.isEmpty(this.mPlmnCountryCode) && TextUtils.length(locationInfo.mCountryCode) != 2) {
            locationInfo.mCountryCode = getSimCountryCode();
        } else if (TextUtils.length(locationInfo.mCountryCode) == 2) {
            this.mPlmnCountryCode = locationInfo.mCountryCode;
        }
        Rlog.i(TAG, "setLocationInfo info=" + locationInfo + ", mPlmnCountryCode:" + this.mPlmnCountryCode);
        getMwiRil().setLocationInfo(Integer.toString(locationInfo.mAccountId), Integer.toString(locationInfo.mBroadcastFlag), String.valueOf(locationInfo.mLatitude), String.valueOf(locationInfo.mLongitude), String.valueOf(locationInfo.mAccuracy), locationInfo.mMethod, locationInfo.mCity, locationInfo.mState, locationInfo.mZip, locationInfo.mCountryCode, WifiPdnHandler.getUeWlanMacAddr(), obtainMessage(RESPONSE_SET_LOCATION_INFO));
        pollLocationInfo();
    }

    private void utGeoLocationRequest() {
        dispatchLocationRequest(new LocationInfo(0, 8, 0, 212.0d, 147.0d, 1.0f));
    }

    private void utNetworkLocationRequest() {
        dispatchLocationRequest(new LocationInfo(0, 8, 0, 0.0d, 0.0d, 0.0f));
    }

    public Handler getHandler() {
        return this;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        log("handleMessage: msg= " + messageToString(message));
        switch (message.what) {
            case 3000:
                if (isCtaNotAllow()) {
                    return;
                }
                if (this.mWifiPdnHandler.isWifiConnected() || this.mNetworkAvailable) {
                    handleLocationRequest(message);
                    return;
                } else {
                    Rlog.e(TAG, "Wi-Fi isn't connected and network unavailable.");
                    addRetryLocationRequest(message);
                    return;
                }
            case EVENT_GET_LAST_KNOWN_LOCATION /* 3001 */:
                synchronized (this.mLocationTimeoutLock) {
                    this.mLocationTimeout = true;
                    break;
                }
                WfcHandler wfcHandler = this.mWfcHandler;
                if (wfcHandler != null) {
                    wfcHandler.onLocationTimeout();
                } else {
                    Rlog.e(TAG, "EVENT_GET_LAST_KNOWN_LOCATION: WfcHandler null");
                }
                if (getLastKnownLocation((LocationInfo) message.obj)) {
                    cancelNetworkLocationRequest();
                    return;
                }
                return;
            case EVENT_HANDLE_NETWORK_LOCATION_RESPONSE /* 3002 */:
            case EVENT_HANDLE_LAST_KNOWN_LOCATION_RESPONSE /* 3003 */:
                handleNetworkLocationUpdate((Location) message.obj);
                return;
            case EVENT_SET_LOCATION_INFO /* 3004 */:
                setLocationInfo((LocationInfo) message.obj);
                return;
            case EVENT_SET_COUNTRY_CODE /* 3005 */:
                String str = (String) message.obj;
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                if (TextUtils.isEmpty(this.mPlmnCountryCode)) {
                    setCountryCode(str);
                } else if (!str.equals(this.mPlmnCountryCode)) {
                    if (this.mWifiPdnHandler.isWifiConnected() || this.mNetworkAvailable) {
                        dispatchLocationRequest(new LocationInfo(0, 0, 0, 0.0d, 0.0d, 0.0f));
                    } else {
                        setCountryCode(str);
                    }
                }
                this.mPlmnCountryCode = str;
                return;
            case EVENT_DIALING_E911 /* 3006 */:
            case EVENT_REQUEST_NETWORK_LOCATION /* 3010 */:
            case EVENT_LOCATION_PROVIDERS_CHANGED /* 3013 */:
                dispatchLocationRequest(new LocationInfo(0, 0, 0, 0.0d, 0.0d, 0.0f));
                return;
            case EVENT_RETRY_GET_LOCATION_REQUEST /* 3007 */:
                handleRetryLocationRequest(message);
                return;
            case EVENT_ALL_RETRY_GET_LOCATION_REQUST /* 3008 */:
                handleAllRetryLocationRequest();
                return;
            case EVENT_LOCATION_MODE_CHANGED /* 3009 */:
                boolean zIsLocationEnabled = this.mLocationManager.isLocationEnabled();
                this.mLocationSetting = zIsLocationEnabled;
                if (zIsLocationEnabled != this.mLastLocationSetting) {
                    setLocationEnabled();
                    return;
                }
                log("Same location setting:" + this.mLocationSetting);
                return;
            case EVENT_LOCATION_CACHE /* 3011 */:
                int i = message.arg1;
                Rlog.d(TAG, "cacheEnable: " + i);
                SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(this.mDeviceContext).edit();
                if (i == 1) {
                    getLocationCache(new LocationInfo(0, 0, 0, 0.0d, 0.0d, 0.0f));
                    setLocationCacheEnable(true);
                    proccessLocationFromNetwork(new LocationInfo(0, 8, 0, 0.0d, 0.0d, 0.0f));
                    return;
                } else {
                    setLocationCacheEnable(false);
                    if (!editorEdit.commit()) {
                        log("Failed to commit location cache");
                    }
                    cancelNetworkLocationRequest();
                    return;
                }
            case EVENT_RETRY_NETWORK_LOCATION_REQUEST /* 3012 */:
                LocationInfo locationInfo = (LocationInfo) message.obj;
                if (requestLocationFromNetworkLocation()) {
                    return;
                }
                int i2 = this.mNetworkLocationRetry;
                this.mNetworkLocationRetry = i2 - 1;
                if (i2 > 0) {
                    log("EVENT_RETRY_NETWORK_LOCATION_REQUEST retry.");
                    sendMessageDelayed(obtainMessage(EVENT_RETRY_NETWORK_LOCATION_REQUEST, 0, 0, locationInfo), 3000L);
                    return;
                } else {
                    log("EVENT_RETRY_NETWORK_LOCATION_REQUEST retry fail, skip.");
                    this.mNetworkLocationTasks.remove(locationInfo);
                    this.mNetworkLocationRetry = MAX_NETWORK_LOCATION_RETRY;
                    return;
                }
            default:
                return;
        }
    }

    protected void log(String str) {
        if (!USR_BUILD || TELDBG) {
            Rlog.d(TAG, str);
        }
    }
}

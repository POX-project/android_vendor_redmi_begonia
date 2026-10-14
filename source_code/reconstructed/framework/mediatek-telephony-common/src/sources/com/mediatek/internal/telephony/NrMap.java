package com.mediatek.internal.telephony;

import android.content.ContentValues;
import android.content.Context;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.AsyncResult;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.SystemProperties;
import android.telephony.CarrierConfigManager;
import android.telephony.NetworkRegistrationInfo;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.text.TextUtils;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.util.XmlUtils;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserFactory;

/* JADX INFO: loaded from: classes.dex */
public class NrMap {
    protected static final int EVENT_REQUEST_LISTENER_UPDATE = 2;
    protected static final int EVENT_REQUEST_LOCATION_UPDATE = 1;
    protected static final int EVENT_RESPONSE_SET_NR = 101;
    protected static final int EVENT_SERVICE_STATE_CHANGE = 201;
    private static final String LOCATION_PERMISSION_NAME = "android.permission.ACCESS_FINE_LOCATION";
    private static final String NR_CITY_FILE = "etc/nr-city.xml";
    private static final String NR_CITY_SQL_NAME = "mtk_nr_city_sql.db";
    private final String NR_MAP_SP_KEY;
    private final String NR_MAP_SW_KEY;
    private CitySQL city_sql;
    private SQLiteDatabase city_sql_data;
    private boolean listening;
    private final CommandsInterface mCi;
    private String mGnssProxyPackageName;
    private int mId;
    private LocationManager mLocationManager;
    private PackageManager mPackageManager;
    private final GsmCdmaPhone mPhone;
    private Handler mtkHandler;
    private HandlerThread mtkHandlerThread;
    private static String NR_AT = "AT+EGMC=1,\"5g_available\",";
    private static String NR_SET_UNAVAILABLE = "0";
    private static String NR_SET_AVAILABLE = "1";
    private static String NR_SET_UNKNOWN = MtkGsmCdmaPhone.ACT_TYPE_UTRAN;
    private static LoadCityFromXml loader = null;
    private static Object mLock = new Object();
    private static ArrayList<Record> records = new ArrayList<>();
    private static Object lock = new Object();
    private String LOG_TAG = "NrMap";
    private boolean started = false;
    private int interval_location_update = 1800000;
    private int min_time_location_update = 0;
    private int min_distance_location_update = 0;
    private String is_nr_city = "";
    private String current_city = "n/a";
    private ServiceState mSS = null;
    private boolean camp_SA = false;
    private boolean manually_set = false;
    private int manually_config = -1;
    private boolean signal_update = false;
    private boolean mLastPermission = false;
    private LocationListener mLocationListener = new LocationListener() { // from class: com.mediatek.internal.telephony.NrMap.1
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) throws IOException {
            int i;
            boolean z;
            synchronized (NrMap.mLock) {
                i = NrMap.this.interval_location_update;
                z = NrMap.this.listening;
            }
            if (location == null) {
                Rlog.d(NrMap.this.LOG_TAG, "network location get null, unexpected result");
                NrMap.this.mtkHandler.sendMessageDelayed(NrMap.this.mtkHandler.obtainMessage(1), i);
                return;
            }
            double latitude = location.getLatitude();
            double longitude = location.getLongitude();
            if (!Geocoder.isPresent()) {
                Rlog.d(NrMap.this.LOG_TAG, "getGeoLocationFromLatLong: this system has no GeoCoder implementation!!");
                return;
            }
            Address addByLocation = NrMap.this.getAddByLocation(latitude, longitude);
            if (addByLocation != null) {
                String countryCode = addByLocation.getCountryCode();
                if ((TextUtils.isEmpty(countryCode) || countryCode.equals("0")) && NrMap.this.mPhone.getServiceStateTracker() != null && NrMap.this.mPhone.getServiceStateTracker().getLocaleTracker() != null) {
                    countryCode = NrMap.this.mPhone.getServiceStateTracker().getLocaleTracker().getCurrentCountry();
                }
                NrMap.this.current_city = addByLocation.getLocality();
                if (TextUtils.isEmpty(countryCode)) {
                    if (NrMap.this.mSS != null && NrMap.this.mSS.getVoiceRegState() != 3) {
                        NrMap.this.setNrCity(NrMap.NR_SET_UNKNOWN);
                    }
                } else if (TextUtils.isEmpty(addByLocation.getLocality())) {
                    Rlog.d(NrMap.this.LOG_TAG, "got a empty city");
                    NrMap.this.setNrCity(NrMap.NR_SET_UNKNOWN);
                } else {
                    if (NrMap.this.camp_SA && !NrMap.this.city_sql.findByCityName(addByLocation.getLocality())) {
                        Rlog.d(NrMap.this.LOG_TAG, "find a new SA city " + addByLocation.getLocality());
                        NrMap.this.city_sql.insert("n/a", countryCode, addByLocation.getLocality(), true);
                    }
                    if (!NrMap.this.manually_set) {
                        if (!NrMap.this.city_sql.findByIsoName(countryCode)) {
                            NrMap.this.setNrCity(NrMap.NR_SET_UNKNOWN);
                        } else if (NrMap.this.city_sql.findByCityName(addByLocation.getLocality())) {
                            NrMap.this.setNrCity(NrMap.NR_SET_AVAILABLE);
                        } else {
                            NrMap.this.setNrCity(NrMap.NR_SET_UNAVAILABLE);
                        }
                    }
                }
            }
            if (z && NrMap.this.signal_update) {
                NrMap.this.startPassiveLocationListener();
            }
            NrMap.this.signal_update = false;
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
        }

        @Override // android.location.LocationListener
        public void onStatusChanged(String str, int i, Bundle bundle) {
        }
    };

    private class CitySQL {
        private final String TABLE_NAME = "table_nr_city";
        private final String COLUMN_ID = "_id";
        private final String COLUMN_MCCMNC = "mccmnc";
        private final String COLUMN_ISO = "iso";
        private final String COLUMN_COUNTRY_NAME = "country_name";
        private final String COLUMN_NR = "nr";

        public CitySQL(Context context) {
            synchronized (NrMap.lock) {
                NrMap.this.city_sql_data = context.openOrCreateDatabase(NrMap.NR_CITY_SQL_NAME, 0, null);
                NrMap.this.city_sql_data.execSQL("CREATE TABLE IF NOT EXISTS table_nr_city (_id INTEGER PRIMARY KEY AUTOINCREMENT, mccmnc VARCHAR(8), iso VARCHAR(8), country_name VARCHAR(32), nr INT)");
            }
        }

        public boolean findByCityName(String str) {
            synchronized (NrMap.lock) {
                boolean z = true;
                Cursor cursorQuery = NrMap.this.city_sql_data.query(false, "table_nr_city", null, "country_name=?", new String[]{str.toLowerCase()}, null, null, null, null);
                if (cursorQuery == null) {
                    Rlog.e(NrMap.this.LOG_TAG, "findByCityName cursor null");
                    return false;
                }
                int count = cursorQuery.getCount();
                for (int i = 0; i < count; i++) {
                    cursorQuery.moveToPosition(i);
                    Rlog.d(NrMap.this.LOG_TAG, "findByCityName Record[" + i + "] _id=" + cursorQuery.getString(cursorQuery.getColumnIndex("_id")) + ", mccmnc=" + cursorQuery.getString(cursorQuery.getColumnIndex("mccmnc")) + ", iso=" + cursorQuery.getString(cursorQuery.getColumnIndex("iso")) + ", country_name=" + cursorQuery.getString(cursorQuery.getColumnIndex("country_name")));
                }
                cursorQuery.close();
                if (count <= 0) {
                    z = false;
                }
                return z;
            }
        }

        public boolean findByIsoName(String str) {
            synchronized (NrMap.lock) {
                boolean z = true;
                Cursor cursorQuery = NrMap.this.city_sql_data.query(false, "table_nr_city", null, "iso=?", new String[]{str.toLowerCase()}, null, null, null, null);
                if (cursorQuery == null) {
                    Rlog.e(NrMap.this.LOG_TAG, "findByIsoName cursor null");
                    return false;
                }
                int count = cursorQuery.getCount();
                for (int i = 0; i < count; i++) {
                    cursorQuery.moveToPosition(i);
                    Rlog.d(NrMap.this.LOG_TAG, "findByIsoName Record[" + i + "] _id=" + cursorQuery.getString(cursorQuery.getColumnIndex("_id")) + ", mccmnc=" + cursorQuery.getString(cursorQuery.getColumnIndex("mccmnc")) + ", iso=" + cursorQuery.getString(cursorQuery.getColumnIndex("iso")) + ", country_name=" + cursorQuery.getString(cursorQuery.getColumnIndex("country_name")));
                }
                cursorQuery.close();
                if (count <= 0) {
                    z = false;
                }
                return z;
            }
        }

        public boolean insert(String str, String str2, String str3, boolean z) {
            ContentValues contentValues = new ContentValues(3);
            contentValues.put("mccmnc", str);
            contentValues.put("iso", str2.toLowerCase());
            contentValues.put("country_name", str3.toLowerCase());
            contentValues.put("nr", Integer.valueOf(z ? 1 : 0));
            synchronized (NrMap.lock) {
                return NrMap.this.city_sql_data.insert("table_nr_city", null, contentValues) != -1;
            }
        }
    }

    private class LoadCityFromXml extends AsyncTask<String, Integer, Integer> {
        private boolean done;

        private LoadCityFromXml() {
            this.done = false;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Integer doInBackground(String... strArr) {
            String str = "n/a";
            try {
                XmlPullParserFactory xmlPullParserFactoryNewInstance = XmlPullParserFactory.newInstance();
                xmlPullParserFactoryNewInstance.setNamespaceAware(true);
                XmlPullParser xmlPullParserNewPullParser = xmlPullParserFactoryNewInstance.newPullParser();
                File file = new File(Environment.getRootDirectory(), NrMap.NR_CITY_FILE);
                if (file.exists()) {
                    xmlPullParserNewPullParser.setInput(new FileReader(file));
                    XmlUtils.beginDocument(xmlPullParserNewPullParser, "records");
                    String str2 = "n/a";
                    String str3 = "n/a";
                    for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                        if (eventType != 0) {
                            if (eventType == 2) {
                                if (xmlPullParserNewPullParser.getName().equals("mccmnc")) {
                                    str = new String(xmlPullParserNewPullParser.nextText());
                                } else if (xmlPullParserNewPullParser.getName().equals("city_name")) {
                                    str3 = new String(xmlPullParserNewPullParser.nextText());
                                } else if (xmlPullParserNewPullParser.getName().equals("iso")) {
                                    str2 = new String(xmlPullParserNewPullParser.nextText());
                                }
                            } else if (eventType == 3 && xmlPullParserNewPullParser.getName().equals("record")) {
                                NrMap.records.add(NrMap.this.new Record(str, str3, str2));
                            }
                        }
                    }
                } else {
                    Rlog.e(NrMap.this.LOG_TAG, "LoadCityFromXml file doesn't exist etc/nr-city.xml");
                }
            } catch (Exception e) {
            }
            for (int i = 0; i < NrMap.records.size(); i++) {
                Rlog.d(NrMap.this.LOG_TAG, "[" + i + "]" + NrMap.records.get(i));
                if (!NrMap.this.city_sql.findByCityName(((Record) NrMap.records.get(i)).getCityName())) {
                    NrMap.this.city_sql.insert(((Record) NrMap.records.get(i)).getMccMnc(), ((Record) NrMap.records.get(i)).getIso(), ((Record) NrMap.records.get(i)).getCityName(), true);
                }
            }
            return 0;
        }

        public boolean isReady() {
            return this.done;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Integer num) {
            Rlog.d(NrMap.this.LOG_TAG, "loadCityFromXml.done: etc/nr-city.xml");
            this.done = true;
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            Rlog.d(NrMap.this.LOG_TAG, "loadCityFromXml.onPreExecute: etc/nr-city.xml");
        }
    }

    private class MtkHandler extends Handler {
        public MtkHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            boolean z;
            boolean z2;
            boolean z3;
            int i = message.what;
            if (i == 1) {
                synchronized (NrMap.mLock) {
                    z = NrMap.this.started;
                }
                Rlog.d(NrMap.this.LOG_TAG, "EVENT_REQUEST_LOCATION_UPDATE started=" + z);
                if (z) {
                    NrMap.this.mLocationManager.requestSingleUpdate("network", NrMap.this.mLocationListener, (Looper) null);
                    return;
                }
                return;
            }
            if (i == 2) {
                boolean zCheckLocationProxyAppPermission = NrMap.this.checkLocationProxyAppPermission();
                synchronized (NrMap.mLock) {
                    z2 = NrMap.this.listening;
                }
                Rlog.d(NrMap.this.LOG_TAG, "EVENT_REQUEST_LISTENER_UPDATE listening=" + z2 + " permission=" + zCheckLocationProxyAppPermission);
                if (zCheckLocationProxyAppPermission) {
                    if (z2) {
                        NrMap.this.startSingleLocationUpdate();
                        return;
                    } else {
                        NrMap.this.mLocationManager.removeUpdates(NrMap.this.mLocationListener);
                        return;
                    }
                }
                synchronized (NrMap.mLock) {
                    NrMap.this.listening = false;
                }
                NrMap.this.mPhone.getContext().getSharedPreferences(NrMap.this.NR_MAP_SP_KEY, 0).edit().putString(NrMap.this.NR_MAP_SW_KEY, "0").commit();
                return;
            }
            if (i != 201) {
                return;
            }
            synchronized (NrMap.mLock) {
                z3 = NrMap.this.listening;
            }
            NrMap.this.mSS = (ServiceState) ((AsyncResult) message.obj).result;
            Rlog.d(NrMap.this.LOG_TAG, "EVENT_SERVICE_STATE_CHANGE camp_SA=" + NrMap.this.camp_SA + " listening=" + z3);
            NetworkRegistrationInfo networkRegistrationInfo = NrMap.this.mSS.getNetworkRegistrationInfo(2, 1);
            if (networkRegistrationInfo == null || networkRegistrationInfo.getAccessNetworkTechnology() != 20) {
                NrMap.this.camp_SA = false;
                return;
            }
            NrMap.this.camp_SA = true;
            if (z3) {
                NrMap.this.startSingleLocationUpdate();
            }
        }
    }

    private class Record {
        private String city_name;
        private String iso;
        private String mccmnc;

        public Record(String str, String str2, String str3) {
            this.mccmnc = str;
            this.city_name = str2;
            this.iso = str3;
        }

        public String getCityName() {
            return this.city_name;
        }

        public String getIso() {
            return this.iso;
        }

        public String getMccMnc() {
            return this.mccmnc;
        }

        public String toString() {
            return new String("Record(" + this.mccmnc + "/" + this.city_name + "/" + this.iso + ")");
        }
    }

    public NrMap(GsmCdmaPhone gsmCdmaPhone, CommandsInterface commandsInterface) {
        this.listening = false;
        this.mId = -1;
        this.mPhone = gsmCdmaPhone;
        this.mId = gsmCdmaPhone.getPhoneId();
        this.LOG_TAG += "-" + this.mId;
        this.NR_MAP_SP_KEY = "nr_map_sp_key-" + this.mId;
        this.NR_MAP_SW_KEY = "nr_map_sw_key-" + this.mId;
        this.mCi = commandsInterface;
        HandlerThread handlerThread = new HandlerThread("MtkNrMapThread");
        this.mtkHandlerThread = handlerThread;
        handlerThread.start();
        this.mtkHandler = new MtkHandler(this.mtkHandlerThread.getLooper());
        Context context = this.mPhone.getContext();
        this.mLocationManager = (LocationManager) context.getSystemService("location");
        this.mPackageManager = context.getPackageManager();
        this.mGnssProxyPackageName = loadProxyNameFromCarrierConfig(context);
        Rlog.d(this.LOG_TAG, "mGnssProxyPackageName from carrierConfig: " + this.mGnssProxyPackageName);
        enableAggressiveUpdate(false);
        this.city_sql = new CitySQL(context);
        if (loader == null) {
            LoadCityFromXml loadCityFromXml = new LoadCityFromXml();
            loader = loadCityFromXml;
            loadCityFromXml.execute("");
        }
        setNrCity(NR_SET_UNKNOWN);
        this.mPhone.registerForServiceStateChanged(this.mtkHandler, 201, (Object) null);
        String string = this.mPhone.getContext().getSharedPreferences(this.NR_MAP_SP_KEY, 0).getString(this.NR_MAP_SW_KEY, "0");
        boolean zCheckLocationProxyAppPermission = checkLocationProxyAppPermission();
        Rlog.d(this.LOG_TAG, "NrMap set=" + string + " permission=" + zCheckLocationProxyAppPermission);
        if (string.equals("1") && zCheckLocationProxyAppPermission) {
            this.listening = true;
            startSingleLocationUpdate();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean checkLocationProxyAppPermission() {
        if (!isPackageInstalled(this.mGnssProxyPackageName)) {
            this.mLastPermission = false;
            return false;
        }
        boolean zHasLocationPermission = hasLocationPermission(this.mGnssProxyPackageName);
        Rlog.d(this.LOG_TAG, "proxyApp = " + this.mGnssProxyPackageName + " proxyAppLocationGranted = " + zHasLocationPermission);
        this.mLastPermission = zHasLocationPermission;
        return zHasLocationPermission;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public Address getAddByLocation(double d, double d2) throws IOException {
        List<Address> fromLocation = null;
        try {
            fromLocation = new Geocoder(this.mPhone.getContext(), Locale.US).getFromLocation(d, d2, 1);
        } catch (Exception e) {
            Rlog.d(this.LOG_TAG, "geocoder.getFromLocation throw exception:" + e);
        }
        if (fromLocation != null && !fromLocation.isEmpty()) {
            return fromLocation.get(0);
        }
        Rlog.d(this.LOG_TAG, "getGeoLocationFromLatLong: get empty address");
        return null;
    }

    private double getDoubleFromProperty(String str) {
        try {
            return Double.parseDouble(SystemProperties.get(str));
        } catch (Exception e) {
            return 0.0d;
        }
    }

    private boolean hasLocationPermission(String str) {
        return this.mPackageManager.checkPermission(LOCATION_PERMISSION_NAME, str) == 0;
    }

    private boolean isPackageInstalled(String str) {
        try {
            this.mPackageManager.getPackageInfo(str, 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }

    private String loadProxyNameFromCarrierConfig(Context context) {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) context.getSystemService("carrier_config");
        if (carrierConfigManager == null) {
            return "";
        }
        int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
        PersistableBundle configForSubId = SubscriptionManager.isValidSubscriptionId(defaultDataSubscriptionId) ? carrierConfigManager.getConfigForSubId(defaultDataSubscriptionId) : null;
        if (configForSubId == null) {
            Rlog.d(this.LOG_TAG, "SIM not ready, use default carrier config.");
            configForSubId = CarrierConfigManager.getDefaultConfig();
        }
        String str = (String) configForSubId.get("gps.nfw_proxy_apps");
        Rlog.d(this.LOG_TAG, "gps.nfw_proxy_apps: " + str);
        return str != null ? str.trim().split(" ")[0] : "";
    }

    private String nrSetToString(String str) {
        if (str.equals("0")) {
            return "NR_SET_UNAVAILABLE";
        }
        return str.equals("1") ? "NR_SET_AVAILABLE" : "NR_SET_UNKNOWN";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setNrCity(String str) {
        String str2;
        synchronized (mLock) {
            str2 = new String(this.is_nr_city);
        }
        Message messageObtainMessage = this.mtkHandler.obtainMessage(101);
        if (!str2.equals(str)) {
            Rlog.d(this.LOG_TAG, "notify MD about NR city " + str);
            this.mCi.invokeOemRilRequestRaw((NR_AT + str).getBytes(), messageObtainMessage);
        }
        synchronized (mLock) {
            this.is_nr_city = str2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startPassiveLocationListener() {
        Rlog.d(this.LOG_TAG, "startPassiveLocationListener");
        this.mLocationManager.requestLocationUpdates("passive", this.min_time_location_update, this.min_distance_location_update, this.mLocationListener);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startSingleLocationUpdate() {
        Rlog.d(this.LOG_TAG, "startSingleLocationUpdate");
        this.signal_update = true;
        this.mLocationManager.requestSingleUpdate("network", this.mLocationListener, (Looper) null);
    }

    public void enableAggressiveUpdate(boolean z) {
        boolean z2;
        int i;
        synchronized (mLock) {
            z2 = this.started;
            i = this.interval_location_update;
        }
        Rlog.d(this.LOG_TAG, "swtichNrMap=" + z + " listening=" + z2);
        if (!z) {
            if (z2) {
                synchronized (mLock) {
                    this.started = false;
                }
                return;
            }
            return;
        }
        if (z2) {
            return;
        }
        synchronized (mLock) {
            this.started = true;
        }
        Handler handler = this.mtkHandler;
        handler.sendMessageDelayed(handler.obtainMessage(1), i);
    }

    public String getNrMapStatus() {
        if (this.manually_set) {
            int i = this.manually_config;
            if (i == 0) {
                return "Manually_UNAVAILABLE";
            }
            if (i != 1) {
                return i != 2 ? "Unknown manually setting" : "Manually_UNKNOWN";
            }
            return "Manually_AVAILABLE";
        }
        if (!this.mLastPermission) {
            return "NEED PERMISSION";
        }
        if (!this.listening) {
            return "NR MAP is OFF";
        }
        return "NR MAP is ON, city=" + this.current_city + "(" + nrSetToString(this.is_nr_city) + ")";
    }

    public boolean isNrMapEnabled() {
        return this.listening;
    }

    public void manuallySetNrMap(int i) {
        this.manually_set = true;
        Rlog.d(this.LOG_TAG, "manuallySetNrMap " + i + " listening=" + this.listening);
        this.manually_config = i;
        if (i == 0) {
            setNrCity(NR_SET_UNAVAILABLE);
            return;
        }
        if (i == 1) {
            setNrCity(NR_SET_AVAILABLE);
            return;
        }
        if (i == 2) {
            setNrCity(NR_SET_UNKNOWN);
            return;
        }
        this.manually_set = false;
        this.manually_config = -1;
        if (this.listening) {
            startSingleLocationUpdate();
        }
    }

    public void setAggressiveUpdateInterval(int i) {
        Rlog.d(this.LOG_TAG, "setAggressiveUpdateInterval " + i);
        synchronized (mLock) {
            this.interval_location_update = i;
        }
    }

    public void swtichNrMap(boolean z) {
        boolean z2;
        synchronized (mLock) {
            z2 = this.listening;
        }
        Rlog.d(this.LOG_TAG, "swtichNrMap=" + z + " listening=" + z2);
        if (z) {
            this.mPhone.getContext().getSharedPreferences(this.NR_MAP_SP_KEY, 0).edit().putString(this.NR_MAP_SW_KEY, "1").commit();
            if (z2) {
                return;
            }
            synchronized (mLock) {
                this.listening = true;
            }
            Handler handler = this.mtkHandler;
            handler.sendMessage(handler.obtainMessage(2));
            return;
        }
        this.mPhone.getContext().getSharedPreferences(this.NR_MAP_SP_KEY, 0).edit().putString(this.NR_MAP_SW_KEY, "0").commit();
        if (z2) {
            synchronized (mLock) {
                this.listening = false;
            }
            Handler handler2 = this.mtkHandler;
            handler2.sendMessage(handler2.obtainMessage(2));
        }
    }
}

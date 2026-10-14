package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.location.LocationRequest;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;
import java.io.IOException;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class LbsNlp extends Activity {
    protected Button mButtonClearScreen;
    private Button mButtonGetGeolocation;
    private Location mLastLocation;
    private TextView mTextViewFlpResult;
    private TextView mTextViewGeocoderInstalledValue;
    private TextView mTextViewGeolocation;
    private TextView mTextViewMtkNlpBoundValue;
    private TextView mTextViewNlpEnabledValue;
    private TextView mTextViewNlpInstalledValue;
    private TextView mTextViewNlpPackageNameValue;
    private TextView mTextViewNlpResult;
    protected ToggleButton mToggleButtonFlp;
    protected ToggleButton mToggleButtonNlp;
    private LocationManager mLocationManager = null;
    private StringList mStringListNlp = new StringList(12);
    private StringList mStringListFlp = new StringList(12);
    private LocationListener mLocationListenerNlp = new LocationListener() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.5
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            if (location == null) {
                LbsNlp.log("ERR: onLocationChanged get null");
                return;
            }
            LbsNlp.log("onLocationChanged - NLP");
            LbsNlp.this.mLastLocation = location;
            LbsNlp.this.mStringListNlp.add(LbsNlp.this.getTimeString(location.getTime()) + " " + location.toString() + "\n");
            LbsNlp.this.mTextViewNlpResult.setText(LbsNlp.this.mStringListNlp.get());
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
    private LocationListener mLocationListenerFlp = new LocationListener() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.6
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            if (location == null) {
                LbsNlp.log("ERR: onLocationChanged get null");
                return;
            }
            LbsNlp.log("onLocationChanged - FLP");
            LbsNlp.this.mLastLocation = location;
            LbsNlp.this.mStringListFlp.add(LbsNlp.this.getTimeString(location.getTime()) + " " + location.toString() + "\n");
            LbsNlp.this.mTextViewFlpResult.setText(LbsNlp.this.mStringListFlp.get());
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
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.9
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != 6) {
                if (i != 7) {
                    LbsNlp.log("WARNING: unknown handle event recv!!");
                    return;
                }
                String str = (String) message.obj;
                if (str != null) {
                    LbsNlp.this.mTextViewNlpPackageNameValue.setText(str);
                    return;
                }
                return;
            }
            Object obj = message.obj;
            if (obj == null) {
                LbsNlp.this.mTextViewGeolocation.setText("Get Address failed!");
                return;
            }
            Address address = (Address) obj;
            LbsNlp.this.mTextViewGeolocation.setText(((((((((("CountryNmae: " + address.getCountryName()) + "\nCountryCode: " + address.getCountryCode()) + "\nAdminArea: " + address.getAdminArea()) + "\nSubAdminArea: " + address.getSubAdminArea()) + "\nLocality: " + address.getLocality()) + "\nSubLocality: " + address.getSubLocality()) + "\nPremises: " + address.getPremises()) + "\nPostalCode: " + address.getPostalCode()) + "\nFeatureName: " + address.getFeatureName()) + "\nAddressLine: " + address.getAddressLine(0));
            LbsNlp.log("GeoLocation successfully received from geocoder");
        }
    };

    class GeolocationThread extends Thread {
        GeolocationThread() {
        }

        public void getGeolocation() {
            start();
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            List<Address> fromLocation;
            Geocoder geocoder = new Geocoder(LbsNlp.this.getApplicationContext());
            try {
                LbsNlp.log("Query geoLocation");
                fromLocation = geocoder.getFromLocation(LbsNlp.this.mLastLocation.getLatitude(), LbsNlp.this.mLastLocation.getLongitude(), 5);
            } catch (IOException e) {
                LbsNlp.log("geoLocation exception: " + e.getMessage());
                LbsNlp.this.sendMessage(6, 0, 0, null);
                fromLocation = null;
            }
            if (fromLocation == null || fromLocation.size() <= 0) {
                LbsNlp.log("geoLocation ret null address");
                LbsNlp.this.sendMessage(6, 0, 0, null);
                return;
            }
            LbsNlp.log("geoLocation updated size: " + fromLocation.size());
            LbsNlp.this.sendMessage(6, 0, 0, fromLocation.get(0));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getTimeString(long j) {
        Date date = new Date(j);
        return String.format("%04d/%02d/%02d %02d:%02d:%02d", Integer.valueOf(date.getYear() + 1900), Integer.valueOf(date.getMonth() + 1), Integer.valueOf(date.getDate()), Integer.valueOf(date.getHours()), Integer.valueOf(date.getMinutes()), Integer.valueOf(date.getSeconds()));
    }

    protected static void log(Object obj) {
        Log.d("LocationEM_NLP", "" + obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2, int i3, Object obj) {
        this.mHandler.obtainMessage(i, i2, i3, obj).sendToTarget();
    }

    protected void initUI() {
        this.mTextViewNlpInstalledValue = (TextView) findViewById(R.id.TextNlp_InstalledValue);
        this.mTextViewNlpEnabledValue = (TextView) findViewById(R.id.TextNlp_EnabledValue);
        this.mTextViewGeocoderInstalledValue = (TextView) findViewById(R.id.TextGeocoder_InstalledValue);
        this.mTextViewMtkNlpBoundValue = (TextView) findViewById(R.id.TextNlp_MtkNlpBound);
        this.mTextViewNlpPackageNameValue = (TextView) findViewById(R.id.TextNlp_PackageNameValue);
        this.mToggleButtonNlp = (ToggleButton) findViewById(R.id.toggleButton_Nlp);
        this.mToggleButtonFlp = (ToggleButton) findViewById(R.id.toggleButton_Flp);
        this.mButtonClearScreen = (Button) findViewById(R.id.Button_ClearScreen);
        this.mButtonGetGeolocation = (Button) findViewById(R.id.Button_GetGeoLocation);
        this.mTextViewNlpResult = (TextView) findViewById(R.id.TextView_NlpResult);
        this.mTextViewFlpResult = (TextView) findViewById(R.id.TextView_FlpResult);
        this.mTextViewGeolocation = (TextView) findViewById(R.id.TextView_Geolocation);
        this.mTextViewNlpInstalledValue.setText("");
        this.mTextViewNlpEnabledValue.setText("");
        this.mTextViewGeocoderInstalledValue.setText("");
        this.mTextViewMtkNlpBoundValue.setText("");
        this.mTextViewNlpPackageNameValue.setText("");
        this.mTextViewGeolocation.setText("");
        this.mToggleButtonNlp.setChecked(false);
        this.mToggleButtonNlp.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!LbsNlp.this.mToggleButtonNlp.isChecked()) {
                    LbsNlp.this.mLocationManager.removeUpdates(LbsNlp.this.mLocationListenerNlp);
                    return;
                }
                try {
                    LocationRequest locationRequestCreateFromDeprecatedProvider = LocationRequest.createFromDeprecatedProvider("network", 1000L, 0.0f, false);
                    locationRequestCreateFromDeprecatedProvider.setLocationSettingsIgnored(true);
                    LbsNlp.this.mLocationManager.requestLocationUpdates(locationRequestCreateFromDeprecatedProvider, LbsNlp.this.mLocationListenerNlp, LbsNlp.this.mHandler.getLooper());
                } catch (IllegalArgumentException unused) {
                    LbsNlp.log("requestLocationUpdates to unexisted provider");
                }
            }
        });
        this.mToggleButtonFlp.setChecked(false);
        this.mToggleButtonFlp.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!LbsNlp.this.mToggleButtonFlp.isChecked()) {
                    LbsNlp.this.mLocationManager.removeUpdates(LbsNlp.this.mLocationListenerFlp);
                    return;
                }
                try {
                    LocationRequest locationRequestCreateFromDeprecatedProvider = LocationRequest.createFromDeprecatedProvider("fused", 1000L, 0.0f, false);
                    locationRequestCreateFromDeprecatedProvider.setLocationSettingsIgnored(true);
                    locationRequestCreateFromDeprecatedProvider.setQuality(100);
                    LbsNlp.this.mLocationManager.requestLocationUpdates(locationRequestCreateFromDeprecatedProvider, LbsNlp.this.mLocationListenerFlp, LbsNlp.this.mHandler.getLooper());
                } catch (IllegalArgumentException unused) {
                    LbsNlp.log("requestLocationUpdates to unexisted provider");
                }
            }
        });
        this.mButtonClearScreen.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsNlp.this.mStringListNlp.clear();
                LbsNlp.this.mStringListFlp.clear();
                LbsNlp.this.mTextViewNlpResult.setText(LbsNlp.this.mStringListNlp.get());
                LbsNlp.this.mTextViewFlpResult.setText(LbsNlp.this.mStringListFlp.get());
                LbsNlp.this.mTextViewGeolocation.setText("");
            }
        });
        this.mButtonGetGeolocation.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsNlp.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsNlp.this.mLastLocation == null) {
                    Toast.makeText(LbsNlp.this.getApplicationContext(), "Before using Geolocation, you need to have NLP position. Please turn on NLP for getting a NLP location.", 1).show();
                } else {
                    LbsNlp.this.new GeolocationThread().getGeolocation();
                    LbsNlp.this.mTextViewGeolocation.setText("Waiting...");
                }
            }
        });
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.nlp);
        this.mLocationManager = (LocationManager) getSystemService("location");
        initUI();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        this.mLocationManager.removeUpdates(this.mLocationListenerNlp);
        this.mLocationManager.removeUpdates(this.mLocationListenerFlp);
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    public void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
        this.mToggleButtonNlp.setChecked(false);
        this.mToggleButtonFlp.setChecked(false);
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        if (this.mLocationManager.getProvider("network") != null) {
            this.mTextViewNlpInstalledValue.setText("Yes");
            this.mTextViewNlpInstalledValue.setTextColor(-16711936);
        } else {
            this.mTextViewNlpInstalledValue.setText("No");
            this.mTextViewNlpInstalledValue.setTextColor(-65536);
        }
        if (this.mLocationManager.isProviderEnabled("network")) {
            this.mTextViewNlpEnabledValue.setText("Yes");
            this.mTextViewNlpEnabledValue.setTextColor(-16711936);
        } else {
            this.mTextViewNlpEnabledValue.setText("No");
            this.mTextViewNlpEnabledValue.setTextColor(-65536);
        }
        if (Geocoder.isPresent()) {
            this.mTextViewGeocoderInstalledValue.setText("Yes");
            this.mTextViewGeocoderInstalledValue.setTextColor(-16711936);
        } else {
            this.mTextViewGeocoderInstalledValue.setText("No");
            this.mTextViewGeocoderInstalledValue.setTextColor(-65536);
        }
        if (this.mLocationManager.isProviderPackage("com.mediatek.location.mtknlp")) {
            this.mTextViewMtkNlpBoundValue.setText("Yes");
            this.mTextViewMtkNlpBoundValue.setTextColor(-16711936);
        } else {
            this.mTextViewMtkNlpBoundValue.setText("No");
            this.mTextViewMtkNlpBoundValue.setTextColor(-65536);
        }
        if (this.mLocationManager.isProviderPackage("com.baidu.map.location")) {
            this.mTextViewNlpPackageNameValue.setText("com.baidu.map.location");
        } else if (this.mLocationManager.isProviderPackage("com.google.android.gms")) {
            this.mTextViewNlpPackageNameValue.setText("com.google.android.gms");
        }
    }
}

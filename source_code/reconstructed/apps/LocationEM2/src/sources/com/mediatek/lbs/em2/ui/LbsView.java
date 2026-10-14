package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.location.GnssStatus;
import android.location.GpsStatus;
import android.location.LocationManager;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.RadioButton;

/* JADX INFO: loaded from: classes.dex */
public class LbsView extends Activity {
    protected RadioButton mRadioButtonGNSS;
    protected RadioButton mRadioButtonGPS;
    protected RadioButton mRadioButtonINFO;
    protected RadioButton mRadioButtonNMEA;
    protected RadioButton mRadioButtonPage1;
    protected RadioButton mRadioButtonPage2;
    protected RadioButton mRadioButtonPage3;
    private int mShowingView;
    private ViewGnss mViewGnss;
    private ViewGps mViewGps;
    private ViewNmea mViewNmea;
    private LocationManager mLocationManager = null;
    private NmeaParser.NmeaUpdateViewListener mNmeaListener = null;
    private NmeaParser nmeaInd = NmeaParser.getNMEAParser();
    private GnssStatus.Callback mGnssStatusCallback = new GnssStatus.Callback() { // from class: com.mediatek.lbs.em2.ui.LbsView.8
        @Override // android.location.GnssStatus.Callback
        public void onSatelliteStatusChanged(GnssStatus gnssStatus) {
            try {
                LbsView.this.mViewGnss.setGnssStatus(gnssStatus);
            } catch (Exception e) {
                Log.e("LocationEM", "Error encountered on setGnssStatus() ", e);
            }
        }

        @Override // android.location.GnssStatus.Callback
        public void onStarted() {
            LbsView.this.mViewGnss.resetGnssView();
        }
    };
    private GpsStatus.Listener mGpsStatusListener = new GpsStatus.Listener() { // from class: com.mediatek.lbs.em2.ui.LbsView.9
        @Override // android.location.GpsStatus.Listener
        public void onGpsStatusChanged(int i) {
            if (i == 1) {
                LbsView.this.mViewGps.resetGpsView();
            } else if (i == 4) {
                try {
                    LbsView.this.mViewGps.setGpsStatus(LbsView.this.mLocationManager.getGpsStatus(null));
                } catch (Exception e) {
                    Log.e("LocationEM", "Error encountered on getGpsStatus() ", e);
                }
            }
        }
    };

    private class NmeaStatusListener implements NmeaParser.NmeaUpdateViewListener {
        private NmeaStatusListener() {
        }

        @Override // com.mediatek.lbs.em2.ui.NmeaParser.NmeaUpdateViewListener
        public void onViewupdateNotify() {
            LbsView.this.mViewNmea.setGpsStatus(LbsView.this.nmeaInd.getSatelliteList());
        }
    }

    private void log(String str) {
        Log.d("LocationEM", str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showInfoDialog(CharSequence charSequence, CharSequence charSequence2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle(charSequence);
        builder.setMessage(charSequence2);
        builder.setCancelable(true);
        builder.setPositiveButton("OK", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsView.10
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showView() {
        log("showView mShowingView=" + this.mShowingView);
        this.mViewGnss.setVisibility(8);
        this.mViewGps.setVisibility(8);
        this.mViewNmea.setVisibility(8);
        int i = this.mShowingView;
        if (i == 1) {
            this.mViewGnss.setVisibility(0);
        } else if (i == 2) {
            this.mViewGps.setVisibility(0);
        } else {
            if (i != 3) {
                return;
            }
            this.mViewNmea.setVisibility(0);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.view);
        this.mViewGnss = (ViewGnss) findViewById(R.id.viewgnss);
        this.mViewGps = (ViewGps) findViewById(R.id.viewgps);
        this.mViewNmea = (ViewNmea) findViewById(R.id.viewnmea);
        this.mRadioButtonGNSS = (RadioButton) findViewById(R.id.RadioButton_GNSS);
        this.mRadioButtonGPS = (RadioButton) findViewById(R.id.RadioButton_GPS);
        this.mRadioButtonNMEA = (RadioButton) findViewById(R.id.RadioButton_NMEA);
        this.mRadioButtonINFO = (RadioButton) findViewById(R.id.RadioButton_INFO);
        this.mRadioButtonPage1 = (RadioButton) findViewById(R.id.RadioButton_Page1);
        this.mRadioButtonPage2 = (RadioButton) findViewById(R.id.RadioButton_Page2);
        this.mRadioButtonPage3 = (RadioButton) findViewById(R.id.RadioButton_Page3);
        LocationManager locationManager = (LocationManager) getSystemService("location");
        this.mLocationManager = locationManager;
        if (locationManager == null) {
            log("ERR: mLocationManager is null");
        }
        this.mRadioButtonGNSS.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.mShowingView = 1;
                LbsView.this.showView();
            }
        });
        this.mRadioButtonGPS.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.mShowingView = 2;
                LbsView.this.showView();
            }
        });
        this.mRadioButtonNMEA.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.mShowingView = 3;
                LbsView.this.showView();
            }
        });
        this.mRadioButtonINFO.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.showInfoDialog("Constellation Type:\n", "G: GPS\nS: SBAS\nR: GLONASS\nQ: QZSS\nB: BEIDOU\nE: GALILEO\nI: IRNSS\n\nExample:\nGL1: GPS Band L1\nRL5: GLONASS Band L5");
                LbsView.this.mRadioButtonINFO.setChecked(false);
                if (LbsView.this.mShowingView == 1) {
                    LbsView.this.mRadioButtonGNSS.setChecked(true);
                } else if (LbsView.this.mShowingView == 3) {
                    LbsView.this.mRadioButtonNMEA.setChecked(true);
                }
            }
        });
        this.mRadioButtonPage1.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.mViewGnss.setDisplayPage(0);
                LbsView.this.mViewGps.setDisplayPage(0);
                LbsView.this.mViewNmea.setDisplayPage(0);
            }
        });
        this.mRadioButtonPage2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.mViewGnss.setDisplayPage(1);
                LbsView.this.mViewGps.setDisplayPage(1);
                LbsView.this.mViewNmea.setDisplayPage(1);
            }
        });
        this.mRadioButtonPage3.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsView.7
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsView.this.mViewGnss.setDisplayPage(2);
                LbsView.this.mViewGps.setDisplayPage(2);
                LbsView.this.mViewNmea.setDisplayPage(2);
            }
        });
        this.mLocationManager.registerGnssStatusCallback(this.mGnssStatusCallback);
        this.mLocationManager.addGpsStatusListener(this.mGpsStatusListener);
        NmeaStatusListener nmeaStatusListener = new NmeaStatusListener();
        this.mNmeaListener = nmeaStatusListener;
        this.nmeaInd.addSVUpdateListener(nmeaStatusListener);
        this.mShowingView = 1;
        this.mRadioButtonGNSS.setChecked(true);
        this.mRadioButtonPage1.setChecked(true);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.mLocationManager.unregisterGnssStatusCallback(this.mGnssStatusCallback);
        this.mLocationManager.removeGpsStatusListener(this.mGpsStatusListener);
        this.nmeaInd.removeSVUpdateListener(this.mNmeaListener);
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        showView();
    }
}

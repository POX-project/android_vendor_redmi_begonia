package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.location.GnssAntennaInfo;
import android.location.GnssMeasurement;
import android.location.GnssMeasurementCorrections;
import android.location.GnssMeasurementsEvent;
import android.location.GnssNavigationMessage;
import android.location.GnssReflectingPlane;
import android.location.GnssSingleSatCorrection;
import android.location.LocationManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.ToggleButton;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
public class LbsRawData extends Activity {
    private static final boolean IS_USER_BUILD = "user".equals(Build.TYPE);
    protected Button mButtonMeasurementCorrection;
    protected LinearLayout mLayoutDebug;
    protected TextView mTextViewLogAntenna;
    protected TextView mTextViewLogMeas;
    protected TextView mTextViewLogMeasTitle;
    protected TextView mTextViewLogNavi;
    protected ToggleButton mToggleButtonAntenna;
    protected ToggleButton mToggleButtonMeasurement;
    protected ToggleButton mToggleButtonNavigation;
    protected ToggleButton mToggleButtonRegress;
    private LocationManager mLocationManager = null;
    private int mMeasurementUpdates = 0;
    private int mNaviUpdates = 0;
    private int mAntennaUpdates = 0;
    private String mMeasFileName = "";
    private String mNaviFileName = "";
    private String mAntennaFileName = "";
    private GnssMeasurementsEvent.Callback mMeasurementCallback = new GnssMeasurementsEvent.Callback() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.1
        @Override // android.location.GnssMeasurementsEvent.Callback
        public void onGnssMeasurementsReceived(GnssMeasurementsEvent gnssMeasurementsEvent) {
            LbsRawData.access$008(LbsRawData.this);
            Collection<GnssMeasurement> measurements = gnssMeasurementsEvent.getMeasurements();
            new String();
            String str = new String();
            String str2 = LbsRawData.this.getTimeString2(new Date().getTime()) + ",getClock: " + gnssMeasurementsEvent.getClock() + "\n";
            String str3 = str2;
            int i = 0;
            for (GnssMeasurement gnssMeasurement : measurements) {
                str3 = str3 + "meas:[" + i + "] :" + gnssMeasurement + "\n";
                str = str + " Svid=" + gnssMeasurement.getConstellationType() + "_" + gnssMeasurement.getSvid() + " STA=" + gnssMeasurement.getState() + " CType=" + gnssMeasurement.getCodeType() + "\n";
                i++;
            }
            LbsRawData.this.write2File("MEAS", "MEAS_" + LbsRawData.this.mMeasFileName + ".txt", str3, true, false);
            String str4 = "Measurement Count=" + LbsRawData.this.mMeasurementUpdates + "\nSatellite Num=" + i + "\n" + str;
            LbsRawData.log(str4);
            LbsRawData.this.sendMessage(1, 0, 0, str4);
        }

        @Override // android.location.GnssMeasurementsEvent.Callback
        public void onStatusChanged(int i) {
        }
    };
    private GnssNavigationMessage.Callback mNavigationCallback = new GnssNavigationMessage.Callback() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.2
        @Override // android.location.GnssNavigationMessage.Callback
        public void onGnssNavigationMessageReceived(GnssNavigationMessage gnssNavigationMessage) {
            LbsRawData.access$408(LbsRawData.this);
            String str = new String();
            new String();
            String str2 = LbsRawData.this.getTimeString2(new Date().getTime()) + ":" + gnssNavigationMessage + "\n";
            LbsRawData.this.write2File("NAVI", "NAVI_" + LbsRawData.this.mNaviFileName + ".txt", str2, true, false);
            String str3 = str + "Navigation Count=" + LbsRawData.this.mNaviUpdates + " Svid=" + gnssNavigationMessage.getSvid() + " Type=" + gnssNavigationMessage.getType() + "\n";
            LbsRawData.log(str3);
            LbsRawData.this.sendMessage(2, 0, 0, str3);
        }

        @Override // android.location.GnssNavigationMessage.Callback
        public void onStatusChanged(int i) {
        }
    };
    private GnssAntennaInfo.Listener mAntennaInfoListner = new GnssAntennaInfo.Listener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.3
        @Override // android.location.GnssAntennaInfo.Listener
        public void onGnssAntennaInfoReceived(List<GnssAntennaInfo> list) {
            LbsRawData.access$608(LbsRawData.this);
            new String();
            String str = new String();
            String str2 = LbsRawData.this.getTimeString2(new Date().getTime()) + "\n";
            Iterator<GnssAntennaInfo> it = list.iterator();
            String str3 = str2;
            int i = 0;
            while (it.hasNext()) {
                str3 = str3 + "AntennaInfo:[" + i + "] :" + it.next() + "\n";
                i++;
                str = str3;
            }
            LbsRawData.this.write2File("ANTENNA", "ANTENNA_" + LbsRawData.this.mAntennaFileName + ".txt", str3, true, false);
            String str4 = "AntennaInfo Update Count=" + LbsRawData.this.mAntennaUpdates + "\nAntennaInfo Num=" + i + "\n" + str;
            LbsRawData.log(str4);
            LbsRawData.this.sendMessage(3, 0, 0, str4);
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.11
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Object obj;
            int i = message.what;
            if (i == 1) {
                Object obj2 = message.obj;
                if (obj2 != null) {
                    LbsRawData.this.mTextViewLogMeas.setText((String) obj2);
                    return;
                }
                return;
            }
            if (i != 2) {
                if (i == 3 && (obj = message.obj) != null) {
                    LbsRawData.this.mTextViewLogAntenna.setText((String) obj);
                    return;
                }
                return;
            }
            Object obj3 = message.obj;
            if (obj3 != null) {
                LbsRawData.this.mTextViewLogNavi.setText((String) obj3);
            }
        }
    };

    static /* synthetic */ int access$008(LbsRawData lbsRawData) {
        int i = lbsRawData.mMeasurementUpdates;
        lbsRawData.mMeasurementUpdates = i + 1;
        return i;
    }

    static /* synthetic */ int access$408(LbsRawData lbsRawData) {
        int i = lbsRawData.mNaviUpdates;
        lbsRawData.mNaviUpdates = i + 1;
        return i;
    }

    static /* synthetic */ int access$608(LbsRawData lbsRawData) {
        int i = lbsRawData.mAntennaUpdates;
        lbsRawData.mAntennaUpdates = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getTimeString2(long j) {
        Date date = new Date(j);
        return String.format("%04d%02d%02d_%02d%02d%02d", Integer.valueOf(date.getYear() + 1900), Integer.valueOf(date.getMonth() + 1), Integer.valueOf(date.getDate()), Integer.valueOf(date.getHours()), Integer.valueOf(date.getMinutes()), Integer.valueOf(date.getSeconds()));
    }

    protected static void log(Object obj) {
        Log.d("LocationEM", "" + obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2, int i3, Object obj) {
        this.mHandler.obtainMessage(i, i2, i3, obj).sendToTarget();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showMeasConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Enable GnssMeasurement may log sensitve data into files, are you sure to enable it?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.9
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsRawData.this.mToggleButtonMeasurement.setEnabled(true);
                LbsRawData.this.mMeasurementUpdates = 0;
                boolean zRegisterGnssMeasurementsCallback = LbsRawData.this.mLocationManager.registerGnssMeasurementsCallback(LbsRawData.this.mMeasurementCallback);
                LbsRawData lbsRawData = LbsRawData.this;
                lbsRawData.mMeasFileName = lbsRawData.getTimeString2(new Date().getTime());
                String str = "Measurement Opt:" + LbsRawData.this.mToggleButtonMeasurement.isChecked();
                LbsRawData.this.mTextViewLogMeas.setText(str);
                LbsRawData.log(str + " result:" + zRegisterGnssMeasurementsCallback);
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.10
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsRawData.this.mToggleButtonMeasurement.setChecked(false);
            }
        });
        builder.create().show();
    }

    protected void initUI() {
        this.mToggleButtonMeasurement = (ToggleButton) findViewById(R.id.toggleButton_measurement);
        this.mToggleButtonNavigation = (ToggleButton) findViewById(R.id.toggleButton_navigation);
        this.mToggleButtonRegress = (ToggleButton) findViewById(R.id.toggleButton_regress);
        this.mToggleButtonAntenna = (ToggleButton) findViewById(R.id.toggleButton_antenna);
        this.mButtonMeasurementCorrection = (Button) findViewById(R.id.Button_MeasurementCorrection);
        this.mTextViewLogNavi = (TextView) findViewById(R.id.TextView_navi);
        this.mTextViewLogMeas = (TextView) findViewById(R.id.TextView_meas);
        this.mTextViewLogMeasTitle = (TextView) findViewById(R.id.TextView_meas_title);
        this.mTextViewLogAntenna = (TextView) findViewById(R.id.TextView_antenna);
        LinearLayout linearLayout = (LinearLayout) findViewById(R.id.LinearLayout_Debug);
        this.mLayoutDebug = linearLayout;
        linearLayout.setVisibility(8);
        if (IS_USER_BUILD) {
            this.mTextViewLogMeasTitle.setVisibility(8);
            this.mToggleButtonMeasurement.setVisibility(8);
        }
        this.mToggleButtonRegress.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsRawData.this.mToggleButtonRegress.isChecked()) {
                    LbsRawData.this.mToggleButtonMeasurement.performClick();
                    LbsRawData.this.mToggleButtonNavigation.performClick();
                    LbsRawData.this.mToggleButtonMeasurement.setEnabled(false);
                    LbsRawData.this.mToggleButtonNavigation.setEnabled(false);
                } else {
                    LbsRawData.this.mToggleButtonMeasurement.performClick();
                    LbsRawData.this.mToggleButtonNavigation.performClick();
                    LbsRawData.this.mToggleButtonMeasurement.setEnabled(true);
                    LbsRawData.this.mToggleButtonNavigation.setEnabled(true);
                }
                LbsRawData.log(("regress Opt:" + LbsRawData.this.mToggleButtonRegress.isChecked()) + " result:true");
            }
        });
        this.mToggleButtonMeasurement.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsRawData.this.mToggleButtonMeasurement.isChecked()) {
                    LbsRawData.this.showMeasConfirmDialog();
                } else {
                    LbsRawData.this.mLocationManager.unregisterGnssMeasurementsCallback(LbsRawData.this.mMeasurementCallback);
                }
            }
        });
        this.mToggleButtonNavigation.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                boolean zRegisterGnssNavigationMessageCallback;
                if (LbsRawData.this.mToggleButtonNavigation.isChecked()) {
                    LbsRawData.this.mNaviUpdates = 0;
                    zRegisterGnssNavigationMessageCallback = LbsRawData.this.mLocationManager.registerGnssNavigationMessageCallback(LbsRawData.this.mNavigationCallback);
                    LbsRawData lbsRawData = LbsRawData.this;
                    lbsRawData.mNaviFileName = lbsRawData.getTimeString2(new Date().getTime());
                } else {
                    LbsRawData.this.mLocationManager.unregisterGnssNavigationMessageCallback(LbsRawData.this.mNavigationCallback);
                    zRegisterGnssNavigationMessageCallback = true;
                }
                String str = "Navigation Opt:" + LbsRawData.this.mToggleButtonNavigation.isChecked();
                LbsRawData.this.mTextViewLogNavi.setText(str);
                LbsRawData.log(str + "register result:" + zRegisterGnssNavigationMessageCallback);
            }
        });
        this.mButtonMeasurementCorrection.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.7
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                GnssSingleSatCorrection gnssSingleSatCorrectionBuild = new GnssSingleSatCorrection.Builder().setConstellationType(1).setSatelliteId(12).setCarrierFrequencyHz(1.59975002E9f).setProbabilityLineOfSight(0.50001f).setExcessPathLengthMeters(137.4802f).setExcessPathLengthUncertaintyMeters(25.5f).setReflectingPlane(new GnssReflectingPlane.Builder().setLatitudeDegrees(37.4220039d).setLongitudeDegrees(-122.0840991d).setAltitudeMeters(250.35d).setAzimuthDegrees(203.0d).build()).build();
                GnssSingleSatCorrection gnssSingleSatCorrectionBuild2 = new GnssSingleSatCorrection.Builder().setConstellationType(1).setSatelliteId(9).setCarrierFrequencyHz(1.59975002E9f).setProbabilityLineOfSight(0.873f).setExcessPathLengthMeters(26.294f).setExcessPathLengthUncertaintyMeters(10.0f).build();
                ArrayList arrayList = new ArrayList(2);
                arrayList.add(gnssSingleSatCorrectionBuild);
                arrayList.add(gnssSingleSatCorrectionBuild2);
                LbsRawData.this.mLocationManager.injectGnssMeasurementCorrections(new GnssMeasurementCorrections.Builder().setLatitudeDegrees(37.422000885009766d).setLongitudeDegrees(-122.08406066894531d).setAltitudeMeters(30.60062599182129d).setHorizontalPositionUncertaintyMeters(9.235420227050781d).setVerticalPositionUncertaintyMeters(15.023409843444824d).setToaGpsNanosecondsOfWeek(2935633453L).setSingleSatelliteCorrectionList(arrayList).build());
            }
        });
        this.mToggleButtonAntenna.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsRawData.8
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                boolean zRegisterAntennaInfoListener;
                if (LbsRawData.this.mToggleButtonAntenna.isChecked()) {
                    LbsRawData.this.mAntennaUpdates = 0;
                    zRegisterAntennaInfoListener = LbsRawData.this.mLocationManager.registerAntennaInfoListener(new Executor() { // from class: com.mediatek.lbs.em2.ui.-$$Lambda$_14QHG018Z6p13d3hzJuGTWnNeo
                        @Override // java.util.concurrent.Executor
                        public final void execute(Runnable runnable) {
                            runnable.run();
                        }
                    }, LbsRawData.this.mAntennaInfoListner);
                    LbsRawData lbsRawData = LbsRawData.this;
                    lbsRawData.mAntennaFileName = lbsRawData.getTimeString2(new Date().getTime());
                } else {
                    LbsRawData.this.mLocationManager.unregisterAntennaInfoListener(LbsRawData.this.mAntennaInfoListner);
                    zRegisterAntennaInfoListener = true;
                }
                String str = "Antenna Opt:" + LbsRawData.this.mToggleButtonAntenna.isChecked();
                LbsRawData.this.mTextViewLogAntenna.setText(str);
                LbsRawData.log(str + "register result:" + zRegisterAntennaInfoListener);
            }
        });
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.raw);
        this.mLocationManager = (LocationManager) getSystemService("location");
        initUI();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        this.mLocationManager.unregisterGnssMeasurementsCallback(this.mMeasurementCallback);
        this.mLocationManager.unregisterGnssNavigationMessageCallback(this.mNavigationCallback);
        this.mLocationManager.unregisterAntennaInfoListener(this.mAntennaInfoListner);
        super.onDestroy();
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
    }

    public boolean write2File(String str, String str2, String str3, boolean z, boolean z2) {
        String str4;
        if (z2) {
            str4 = "/sdcard/" + str;
        } else {
            str4 = "/data/data/" + getPackageName() + "/" + str;
        }
        new File(str4).mkdir();
        String str5 = str4 + "/" + str2;
        try {
            DataOutputStream dataOutputStream = z ? new DataOutputStream(new FileOutputStream(str5, true)) : new DataOutputStream(new FileOutputStream(new File(str5)));
            dataOutputStream.writeBytes(str3);
            dataOutputStream.close();
            return true;
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return false;
        } catch (IOException e2) {
            e2.printStackTrace();
            return false;
        }
    }
}

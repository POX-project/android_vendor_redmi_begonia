package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.location.BatchedLocationCallback;
import android.location.Location;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class LbsBatch extends Activity {
    Button mButtonClearInfo;
    Button mButtonDecreasePeriod;
    Button mButtonFlushLocations;
    Button mButtonIncreasePeriod;
    CheckBox mCheckBoxWakeupOnFifoFull;
    int mLocationCallbackCount;
    int mSupportedBatchSize;
    TextView mTextViewLocationCallback;
    TextView mTextViewLocationCount;
    TextView mTextViewPeriod;
    TextView mTextViewSupportBatchSize;
    ToggleButton mToggleButtonStart;
    StringList mLocationInfo = new StringList(16);
    boolean mIsStarted = false;
    boolean mIsWakeOnFifoFull = true;
    long mPeriodSecond = 1;
    private LocationManager mLocationManager = null;
    private BatchedLocationCallback mBatchingCallback = new BatchedLocationCallback() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.1
        public void onLocationBatch(List<Location> list) {
            LbsBatch.this.sendMessage(1, 0, 0, list);
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.8
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 1) {
                LbsBatch.log("WARNING: unknown handle event recv!!");
                return;
            }
            Object obj = message.obj;
            if (obj != null) {
                Location location = null;
                List list = (List) obj;
                LbsBatch.this.mLocationCallbackCount++;
                for (int i = 0; i < list.size(); i++) {
                    location = (Location) list.get(i);
                    StringBuilder sb = new StringBuilder();
                    sb.append("i=" + i + " [" + location.getProvider() + "]  " + LbsUtility.getTimeString(location.getTime()) + " " + String.format("lat=%.06f, lng=%.06f ", Double.valueOf(location.getLatitude()), Double.valueOf(location.getLongitude())));
                    if (location.hasAccuracy()) {
                        sb.append("acc=" + location.getAccuracy() + " ");
                    }
                    if (location.hasAltitude()) {
                        sb.append("atl=" + String.format("%.06f ", Double.valueOf(location.getAltitude())) + " ");
                    }
                    if (location.hasSpeed()) {
                        sb.append("speed=" + location.getSpeed() + " ");
                    }
                    if (location.hasBearing()) {
                        sb.append("bearing=" + location.getBearing() + " ");
                    }
                    sb.append("\n");
                    LbsBatch.this.mLocationInfo.add(sb.toString());
                    LbsBatch.log("location info updated index: " + i);
                }
                if (location != null) {
                    LbsBatch.this.mapReportLocation(location);
                }
                String str = "Callback Count=" + LbsBatch.this.mLocationCallbackCount + ", Location size=" + list.size();
                LbsBatch.this.mTextViewLocationCount.setText(str);
                LbsBatch.log(str);
                LbsBatch lbsBatch = LbsBatch.this;
                lbsBatch.mTextViewLocationCallback.setText(lbsBatch.mLocationInfo.get());
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void enableOptions(boolean z) {
        this.mButtonIncreasePeriod.setEnabled(z);
        this.mButtonDecreasePeriod.setEnabled(z);
        this.mCheckBoxWakeupOnFifoFull.setEnabled(z);
    }

    private void initUi() {
        this.mTextViewSupportBatchSize = (TextView) findViewById(R.id.supported_batch_size);
        this.mTextViewPeriod = (TextView) findViewById(R.id.period);
        this.mButtonIncreasePeriod = (Button) findViewById(R.id.button_IncreasePeriod);
        this.mButtonDecreasePeriod = (Button) findViewById(R.id.button_DecreasePeriod);
        this.mCheckBoxWakeupOnFifoFull = (CheckBox) findViewById(R.id.CheckBox_WakeupOnFifoFull);
        this.mToggleButtonStart = (ToggleButton) findViewById(R.id.batch_start);
        this.mButtonFlushLocations = (Button) findViewById(R.id.fused_flush_batched_locations);
        this.mButtonClearInfo = (Button) findViewById(R.id.fused_clear_info);
        this.mTextViewLocationCount = (TextView) findViewById(R.id.fused_count);
        this.mTextViewLocationCallback = (TextView) findViewById(R.id.fused_callback);
        this.mTextViewPeriod.setText("Location report Period (s) : " + this.mPeriodSecond);
        if (this.mIsWakeOnFifoFull) {
            this.mCheckBoxWakeupOnFifoFull.setChecked(true);
        }
        log("SupportedBatchSize = " + this.mSupportedBatchSize + ", report period =" + this.mPeriodSecond);
        TextView textView = this.mTextViewSupportBatchSize;
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(this.mSupportedBatchSize);
        textView.setText(sb.toString());
    }

    private void initUiListeners() {
        this.mButtonIncreasePeriod.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsBatch lbsBatch = LbsBatch.this;
                lbsBatch.mPeriodSecond++;
                lbsBatch.mTextViewPeriod.setText("Location report Period (s) : " + LbsBatch.this.mPeriodSecond);
            }
        });
        this.mButtonDecreasePeriod.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsBatch lbsBatch = LbsBatch.this;
                long j = lbsBatch.mPeriodSecond - 1;
                lbsBatch.mPeriodSecond = j;
                if (j < 0) {
                    j = 0;
                }
                lbsBatch.mPeriodSecond = j;
                LbsBatch.this.mTextViewPeriod.setText("Location report Period (s) : " + LbsBatch.this.mPeriodSecond);
            }
        });
        this.mCheckBoxWakeupOnFifoFull.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsBatch.this.mCheckBoxWakeupOnFifoFull.isChecked()) {
                    LbsBatch.this.mIsWakeOnFifoFull = true;
                } else {
                    LbsBatch.this.mIsWakeOnFifoFull = false;
                }
            }
        });
        this.mToggleButtonStart.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                boolean zIsChecked = LbsBatch.this.mToggleButtonStart.isChecked();
                LbsBatch.this.mIsStarted = zIsChecked;
                try {
                    if (zIsChecked) {
                        LbsBatch.log("startBatching mIsWakeOnFifoFull=" + LbsBatch.this.mIsWakeOnFifoFull + ", BatchSize = " + LbsBatch.this.mSupportedBatchSize);
                        LbsBatch.this.mLocationCallbackCount = 0;
                        LbsBatch.this.mLocationManager.registerGnssBatchedLocationCallback(LbsBatch.this.mPeriodSecond * 1000000000, LbsBatch.this.mIsWakeOnFifoFull, LbsBatch.this.mBatchingCallback, null);
                    } else {
                        LbsBatch.log("stopBatching");
                        LbsBatch.this.mLocationManager.unregisterGnssBatchedLocationCallback(LbsBatch.this.mBatchingCallback);
                    }
                } catch (Exception unused) {
                    LbsBatch.loge("Failed to run GnssBatching registeration.");
                    Toast.makeText(LbsBatch.this.getApplicationContext(), "GnssBatching not support !!", 0).show();
                }
                LbsBatch lbsBatch = LbsBatch.this;
                lbsBatch.enableOptions(!lbsBatch.mIsStarted);
            }
        });
        this.mButtonClearInfo.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsBatch.this.mLocationInfo.clear();
                LbsBatch.this.mTextViewLocationCount.setText("");
                LbsBatch.this.mTextViewLocationCallback.setText("");
            }
        });
        this.mButtonFlushLocations.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsBatch.7
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsBatch.log("flushBatchedLocations");
                try {
                    LbsBatch.this.mLocationManager.flushGnssBatch();
                } catch (Exception unused) {
                    LbsBatch.loge("Failed to run GnssBatching flushGnssBatch.");
                    Toast.makeText(LbsBatch.this.getApplicationContext(), "GnssBatching not support !!", 0).show();
                }
            }
        });
    }

    public static void log(Object obj) {
        Log.d("LocationEM_Batch", "" + obj);
    }

    public static void loge(Object obj) {
        Log.d("LocationEM_Batch", "ERR: " + obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2, int i3, Object obj) {
        this.mHandler.obtainMessage(i, i2, i3, obj).sendToTarget();
    }

    public void mapReportLocation(Location location) {
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.batch);
        LocationManager locationManager = (LocationManager) getSystemService("location");
        this.mLocationManager = locationManager;
        if (locationManager == null) {
            log("ERR: mLocationManager is null");
        }
        try {
            this.mSupportedBatchSize = this.mLocationManager.getGnssBatchSize();
        } catch (Exception unused) {
            loge("Failed to run GnssBatching getGnssBatchSize.");
        }
        initUi();
        initUiListeners();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.mLocationManager.unregisterGnssBatchedLocationCallback(this.mBatchingCallback);
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }
}

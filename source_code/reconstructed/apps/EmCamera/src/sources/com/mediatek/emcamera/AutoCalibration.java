package com.mediatek.emcamera;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraManager;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class AutoCalibration extends Activity implements AdapterView.OnItemClickListener, ActivityCompat.OnRequestPermissionsResultCallback {
    private static final String TAG = "AutoCalibration";
    private String mCameraId;
    private String[] mCameraList;
    private Spinner mCaptureSensorMode;
    private ListView mGisCaliLv;
    private boolean mIsInitialized = false;
    private PermissionManager mPermissionManager;
    private Spinner mSensorSpinner;

    private class SensorItem {
        String cameraId;
        String cameraName;

        public SensorItem(String str, String str2) {
            this.cameraName = str;
            this.cameraId = str2;
        }

        public String getCameraId() {
            return this.cameraId;
        }

        public String getName() {
            return this.cameraName;
        }

        public String toString() {
            return this.cameraName;
        }
    }

    private void initComponents() {
        this.mSensorSpinner = (Spinner) findViewById(R.id.auto_clibr_camera_sensor_spnr);
        this.mCaptureSensorMode = (Spinner) findViewById(R.id.sensor_mode);
        ListView listView = (ListView) findViewById(R.id.gis_cali_list);
        this.mGisCaliLv = listView;
        listView.setOnItemClickListener(this);
    }

    private void initSensorSpnr() {
        ArrayList arrayList = new ArrayList();
        String string = getString(R.string.auto_clibr_camera_sensor_main);
        String string2 = getString(R.string.auto_clibr_camera_sensor_sub);
        CameraManager cameraManager = (CameraManager) getSystemService("camera");
        int i = 0;
        int i2 = 0;
        for (String str : this.mCameraList) {
            Integer num = null;
            String str2 = null;
            try {
                num = (Integer) cameraManager.getCameraCharacteristics(str).get(CameraCharacteristics.LENS_FACING);
            } catch (CameraAccessException e) {
                e.printStackTrace();
            }
            if (num != null && num.intValue() == 1) {
                i2++;
                str2 = i2 == 1 ? string : string + "" + i2;
            } else if (num == null || num.intValue() != 0) {
                Elog.w(TAG, "add raw sensor; Invalid facing info");
            } else {
                i++;
                str2 = i == 1 ? string2 : string2 + "" + i;
            }
            if (str2 != null) {
                arrayList.add(new SensorItem(str2, str));
            }
        }
        if (arrayList.size() == 0) {
            Toast.makeText(this, "no available raw sensor", 0).show();
            finish();
        } else {
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            this.mSensorSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
            this.mSensorSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.emcamera.AutoCalibration.1
                @Override // android.widget.AdapterView.OnItemSelectedListener
                public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                    Elog.d(AutoCalibration.TAG, "mSensorSpinner.onItemSelected; position" + i3 + " mIsInitialized:" + AutoCalibration.this.mIsInitialized);
                    if (AutoCalibration.this.mIsInitialized) {
                        SensorItem sensorItem = (SensorItem) adapterView.getSelectedItem();
                        String cameraId = sensorItem.getCameraId();
                        Elog.d(AutoCalibration.TAG, "Camera ID:" + cameraId + ",Tag:" + sensorItem.getName());
                        if (cameraId.equals(AutoCalibration.this.mCameraId)) {
                            return;
                        }
                        AutoCalibration.this.mCameraId = cameraId;
                        AutoCalibration.this.setStatusTodefault();
                    }
                }

                @Override // android.widget.AdapterView.OnItemSelectedListener
                public void onNothingSelected(AdapterView<?> adapterView) {
                    Elog.d(AutoCalibration.TAG, "mSensorSpinner onNothingSelected()");
                }
            });
        }
    }

    private void initSupportedUi() {
        try {
            this.mCameraList = ((CameraManager) getSystemService("camera")).getCameraIdList();
            Elog.i(TAG, "availCameraNumber =" + this.mCameraList.length);
        } catch (CameraAccessException e) {
            e.printStackTrace();
        }
        String[] strArr = this.mCameraList;
        if (strArr == null || strArr.length == 0) {
            Toast.makeText(this, "No available Camera", 0).show();
            finish();
            return;
        }
        if (!this.mIsInitialized) {
            initSensorSpnr();
        }
        if (isGisCalibrationSupported(this.mCameraId)) {
            this.mGisCaliLv.setVisibility(0);
        } else {
            this.mGisCaliLv.setVisibility(8);
        }
    }

    private boolean isGisCalibrationSupported(String str) {
        return true;
    }

    private void saveAllSettings(String str) {
        Elog.v(TAG, "saveAllSettings start");
        SharedPreferences.Editor editorEdit = getSharedPreferences(str, 0).edit();
        editorEdit.putInt(getString(R.string.camera_key_selected_sensor_mode), this.mCaptureSensorMode.getSelectedItemPosition());
        editorEdit.putString(getString(R.string.camera_key_selected_sensor_id), this.mCameraId);
        editorEdit.putString(getString(R.string.camera_key_selected_sensor_name), ((SensorItem) this.mSensorSpinner.getSelectedItem()).getName());
        editorEdit.commit();
        Elog.v(TAG, "saveAllSettings end");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setStatusTodefault() {
        Elog.v(TAG, "setStatusTodefault()");
        this.mCaptureSensorMode.setSelection(1);
        Toast.makeText(this, "Reset to default state!", 0).show();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.i(TAG, "onCreate.");
        if (Utils.isAutoTest()) {
            Elog.d(TAG, "Monkey running.");
            finish();
            return;
        }
        this.mIsInitialized = false;
        setContentView(R.layout.auto_calibration);
        this.mPermissionManager = new PermissionManager(this);
        this.mCameraId = "0";
        initComponents();
        if (this.mPermissionManager.requestCameraLaunchPermissions()) {
            Elog.i(TAG, "requestCameraLaunchPermissions return true");
            initSupportedUi();
            setStatusTodefault();
            this.mIsInitialized = true;
        }
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        if (adapterView.getId() == R.id.gis_cali_list) {
            Elog.d(TAG, "Start GIS Calibration");
            saveAllSettings(Utils.PREFERENCE_KEY);
            startActivity(new Intent(this, (Class<?>) CaptureActivity.class));
        }
    }

    @Override // android.app.Activity, android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        Elog.i(TAG, "onRequestPermissionsResult(), requestCode = " + i);
        if (iArr == null || iArr.length <= 0) {
            return;
        }
        if (this.mPermissionManager.getCameraLaunchPermissionRequestCode() != i) {
            super.onRequestPermissionsResult(i, strArr, iArr);
            return;
        }
        if (!this.mPermissionManager.isCameraLaunchPermissionsResultReady(strArr, iArr)) {
            Toast.makeText(this, R.string.denied_required_permission, 1).show();
            finish();
        } else {
            initSupportedUi();
            setStatusTodefault();
            this.mIsInitialized = true;
        }
    }
}

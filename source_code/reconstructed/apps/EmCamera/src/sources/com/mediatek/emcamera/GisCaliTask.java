package com.mediatek.emcamera;

import android.content.Context;
import android.os.AsyncTask;
import android.os.Handler;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class GisCaliTask extends AsyncTask<String, Void, Boolean> {
    private static final String GIS_DIR = "data/vendor/camera_dump/eis/gyro/";
    private static final String GIS_INFO_FILE = "data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt";
    private static final String GIS_PARAM_FILE = "data/vendor/camera_dump/eis/gyro/GIS_default_parameter.txt";
    private static final String GIS_PARAM_FILE_PREFIX = "data/vendor/camera_dump/eis/gyro/GIS_default_parameter_";
    private static final String GIS_PARAM_FILE_SUFFIX = ".txt";
    public static final int GIS_STATE_DONE = 1003;
    public static final int GIS_STATE_INIT = 1001;
    public static final int GIS_STATE_PROC = 1002;
    public static final int MSG_ID_GIS_CALI_DONE = 601;
    public static final int MSG_ID_GIS_START_PREVIEW = 600;
    private static final String ROPERTY_GIS_CALIBRATION = "vendor.debug.eis.EMEnabled";
    private static final String TAG = "GisCaliTask";
    private String mCameraName;
    private Context mContext;
    private Handler mHandler;
    private int mStatus = 1001;

    public GisCaliTask(Context context, String str, Handler handler) {
        this.mContext = context;
        this.mCameraName = str;
        this.mHandler = handler;
    }

    private void cameraGisCalFinish() {
        String file = readFile(GIS_INFO_FILE);
        Elog.v(TAG, "cali finish: " + file);
        Context context = this.mContext;
        Utils.showMsgDialog(context, context.getString(R.string.gis_cali_fail_result), file);
        File file2 = new File(GIS_INFO_FILE);
        if (file2.isFile() && file2.exists()) {
            file2.delete();
        }
        File file3 = new File(GIS_PARAM_FILE);
        String str = GIS_PARAM_FILE_PREFIX + this.mCameraName + GIS_PARAM_FILE_SUFFIX;
        if (file3.isFile() && file3.exists()) {
            Elog.v(TAG, "target file name: " + str);
            copyFile(GIS_PARAM_FILE, str);
            file3.delete();
        }
    }

    private void copyFile(String str, String str2) {
        File file = new File(str);
        try {
            if (file.exists()) {
                FileInputStream fileInputStream = new FileInputStream(file);
                FileOutputStream fileOutputStream = new FileOutputStream(str2);
                byte[] bArr = new byte[fileInputStream.available()];
                fileInputStream.read(bArr);
                fileOutputStream.write(bArr);
                fileInputStream.close();
                fileOutputStream.close();
            }
        } catch (IOException e) {
            Elog.e(TAG, "copyFile IOException");
            e.printStackTrace();
        }
    }

    private String readFile(String str) {
        String str2 = "";
        File file = new File(str);
        try {
            FileInputStream fileInputStream = new FileInputStream(file);
            byte[] bArr = new byte[fileInputStream.available()];
            fileInputStream.read(bArr);
            str2 = new String(bArr);
            fileInputStream.close();
            return str2;
        } catch (IOException e) {
            Elog.e(TAG, "readFile IOException");
            e.printStackTrace();
            file.delete();
            return str2;
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    public Boolean doInBackground(String... strArr) {
        Elog.i(TAG, "cameraGisCalProc - data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt");
        this.mStatus = 1002;
        File file = new File(GIS_INFO_FILE);
        if (file.isFile() && file.exists()) {
            Elog.i(TAG, "CalibrationInfo.txt deleted = " + file.delete());
        }
        Utils.setProperty(ROPERTY_GIS_CALIBRATION, "1");
        Elog.i(TAG, "cameraGisCalProc - set vendor.debug.eid.EMmode property");
        long jCurrentTimeMillis = System.currentTimeMillis();
        long jCurrentTimeMillis2 = jCurrentTimeMillis;
        File file2 = new File(GIS_INFO_FILE);
        this.mHandler.sendEmptyMessage(MSG_ID_GIS_START_PREVIEW);
        while (jCurrentTimeMillis2 - jCurrentTimeMillis < 10000) {
            if (file2.isFile() && file2.exists()) {
                Elog.i(TAG, "cameraGisCalProc - file exit");
                Utils.setProperty(ROPERTY_GIS_CALIBRATION, "0");
                return true;
            }
            jCurrentTimeMillis2 = System.currentTimeMillis();
            if (isCancelled()) {
                this.mStatus = 1003;
                Elog.d(TAG, "cameraGisCalProc canceled");
                break;
            }
        }
        Elog.i(TAG, "cameraGisCalProc - exit while");
        Utils.setProperty(ROPERTY_GIS_CALIBRATION, "0");
        return false;
    }

    public int getGisStatus() {
        Elog.i(TAG, "getGisStatus = " + this.mStatus);
        return this.mStatus;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    public void onPostExecute(Boolean bool) {
        if (isCancelled()) {
            Elog.d(TAG, "onPostExecute canceled");
            return;
        }
        Elog.d(TAG, "onPostExecute " + bool);
        if (bool.booleanValue()) {
            cameraGisCalFinish();
        } else {
            Elog.i(TAG, "show GisCal Dlg: fail");
            Context context = this.mContext;
            Utils.showMsgDialog(context, context.getString(R.string.gis_cali_fail_tittle), this.mContext.getString(R.string.gis_cali_fail_msg, GIS_INFO_FILE));
        }
        this.mStatus = 1003;
        this.mHandler.sendEmptyMessage(MSG_ID_GIS_CALI_DONE);
    }
}

package com.mediatek.engineermode;

import android.app.Activity;
import android.hardware.Camera;
import android.media.CameraProfile;
import android.os.Bundle;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import java.io.IOException;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class CameraTest extends Activity implements SurfaceHolder.Callback {
    public static final String FACING_TAG = "facingfront";
    private static final int FULL_DEGREE = 360;
    private static final int IDLE = 1;
    private static final int PREVIEW_STOPPED = 0;
    static final String TAG = "CameraTest";
    private static final long TIME_ONE_SEC = 1000;
    private Camera mCameraDevice;
    private int mCameraId;
    private boolean mPausing;
    private SurfaceHolder mSurfaceHolder = null;
    private int mCameraState = 0;

    private void closeCamera() {
        Camera camera = this.mCameraDevice;
        if (camera != null) {
            camera.release();
            this.mCameraDevice = null;
            setCameraState(0);
        }
    }

    private static int getCameraID(boolean z) {
        Elog.d(TAG, "facing:" + z);
        int numberOfCameras = Camera.getNumberOfCameras();
        Elog.d(TAG, "availCameraNumber:" + numberOfCameras);
        for (int i = 0; i < numberOfCameras; i++) {
            Camera.CameraInfo cameraInfo = new Camera.CameraInfo();
            Camera.getCameraInfo(i, cameraInfo);
            if (cameraInfo.facing == (z ? 1 : 0)) {
                Elog.d(TAG, "cameraID:" + i);
                return i;
            }
        }
        return -1;
    }

    private int getOrientation(int i) {
        Camera.CameraInfo cameraInfo = new Camera.CameraInfo();
        Camera.getCameraInfo(this.mCameraId, cameraInfo);
        return cameraInfo.facing == 1 ? (360 - ((cameraInfo.orientation + i) % FULL_DEGREE)) % FULL_DEGREE : ((cameraInfo.orientation - i) + FULL_DEGREE) % FULL_DEGREE;
    }

    public static boolean isCameraSupport(boolean z) {
        return getCameraID(z) != -1;
    }

    private Camera openCamera(int i) {
        for (int i2 = 0; i2 < 10; i2++) {
            Camera cameraOpen = Camera.open(i);
            if (cameraOpen != null) {
                return cameraOpen;
            }
            try {
                Thread.sleep(TIME_ONE_SEC);
            } catch (InterruptedException e) {
                e.printStackTrace();
                return null;
            }
        }
        return null;
    }

    private void setCameraParameters() {
        Camera.Parameters parameters = this.mCameraDevice.getParameters();
        List<Integer> supportedPreviewFrameRates = parameters.getSupportedPreviewFrameRates();
        if (supportedPreviewFrameRates != null) {
            Integer num = (Integer) Collections.max(supportedPreviewFrameRates);
            Elog.v(TAG, "Max frame rate is " + num);
            parameters.setPreviewFrameRate(num.intValue());
        }
        List<Camera.Size> supportedPictureSizes = parameters.getSupportedPictureSizes();
        Camera.Size size = supportedPictureSizes.get(0);
        for (Camera.Size size2 : supportedPictureSizes) {
            if (size2.height > size.height || size2.width > size.width) {
                size = size2;
            }
        }
        Elog.v(TAG, "Max picture size is " + size.width + "x" + size.height);
        parameters.setPictureSize(size.width, size.height);
        List<Camera.Size> supportedPreviewSizes = parameters.getSupportedPreviewSizes();
        Camera.Size size3 = supportedPreviewSizes.get(0);
        for (Camera.Size size4 : supportedPreviewSizes) {
            if (size4.height > size3.height || size4.width > size3.width) {
                size3 = size4;
            }
        }
        Elog.v(TAG, "Max preview size is " + size3.width + "x" + size3.height);
        parameters.setPreviewSize(size3.width, size3.height);
        parameters.setJpegQuality(CameraProfile.getJpegEncodingQualityParameter(this.mCameraId, 2));
        this.mCameraDevice.setParameters(parameters);
    }

    private void setCameraState(int i) {
        Elog.d(TAG, "setCameraState() state " + i);
        this.mCameraState = i;
    }

    private void setOrientation() {
        int i = 0;
        int rotation = getWindowManager().getDefaultDisplay().getRotation();
        if (rotation == 1) {
            i = 90;
        } else if (rotation == 2) {
            i = 180;
        } else if (rotation == 3) {
            i = 270;
        }
        this.mCameraDevice.setDisplayOrientation(getOrientation(i));
    }

    private void setPreviewDisplay(SurfaceHolder surfaceHolder) {
        try {
            this.mCameraDevice.setPreviewDisplay(surfaceHolder);
        } catch (IOException e) {
            closeCamera();
        }
    }

    private void startPreview() {
        Elog.d(TAG, "set Preview");
        if (this.mSurfaceHolder == null || this.mPausing || isFinishing()) {
            Elog.d(TAG, "startPreview() return");
            return;
        }
        if (this.mCameraState != 0) {
            stopPreview();
        }
        setPreviewDisplay(this.mSurfaceHolder);
        setOrientation();
        setCameraParameters();
        Elog.v(TAG, "==== startPreview ====");
        this.mCameraDevice.startPreview();
        setCameraState(1);
    }

    private void stopPreview() {
        if (this.mCameraDevice != null && this.mCameraState != 0) {
            Elog.v(TAG, "stopPreview");
            this.mCameraDevice.stopPreview();
        }
        setCameraState(0);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.i(TAG, "[onCreate]");
        this.mCameraId = getCameraID(getIntent().getBooleanExtra(FACING_TAG, false));
        SurfaceView surfaceView = new SurfaceView(this);
        setContentView(surfaceView);
        SurfaceHolder holder = surfaceView.getHolder();
        holder.addCallback(this);
        holder.setType(3);
        Elog.i(TAG, "[onCreate] Finished");
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        Elog.i(TAG, "onPause()");
        this.mPausing = true;
        stopPreview();
        closeCamera();
        getWindow().clearFlags(128);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.i(TAG, "onResume()");
        getWindow().addFlags(128);
        this.mPausing = false;
        Camera cameraOpenCamera = openCamera(this.mCameraId);
        this.mCameraDevice = cameraOpenCamera;
        if (cameraOpenCamera != null) {
            startPreview();
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        if (surfaceHolder == null || surfaceHolder.getSurface() == null || this.mCameraDevice == null || this.mPausing || isFinishing()) {
            Elog.d(TAG, "holder.getSurface() == null");
            return;
        }
        this.mSurfaceHolder = surfaceHolder;
        if (this.mCameraState == 0) {
            startPreview();
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceCreated(SurfaceHolder surfaceHolder) {
        Elog.v(TAG, "surfaceCreated.");
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceDestroyed(SurfaceHolder surfaceHolder) {
        Elog.v(TAG, "surfaceDestroyed()");
        stopPreview();
        this.mSurfaceHolder = null;
    }
}

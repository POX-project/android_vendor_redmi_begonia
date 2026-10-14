package com.mediatek.emcamera;

import android.content.SharedPreferences;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.graphics.SurfaceTexture;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCaptureSession;
import android.hardware.camera2.CameraDevice;
import android.hardware.camera2.CameraManager;
import android.hardware.camera2.CaptureRequest;
import android.hardware.camera2.CaptureResult;
import android.hardware.camera2.TotalCaptureResult;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.util.Size;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.TextureView;
import android.view.View;
import android.widget.Button;
import java.util.Arrays;
import java.util.concurrent.Semaphore;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class CaptureActivity extends ActivityBase implements View.OnTouchListener {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private static final String APP_MODE_NAME_MTK_ENG = "MtkEng";
    private static final int MSG_ID_CAMERA_CLOSED = 1;
    private static final int MSG_ID_CAMERA_OPENED = 0;
    private static final String PROPERTY_KEY_CLIENT_APPMODE = "vendor.client.em.appmode";
    private static final String PROPERTY_SENSOR_MODE = "vendor.debug.cameng.force_sensormode";
    private static final String TAG = CaptureActivity.class.getSimpleName();
    private Handler mBackgroundHandler;
    private HandlerThread mBackgroundThread;
    private String mCameraId;
    private String mCameraName;
    private int mCaptureSensorMode;
    private CameraCaptureSession mCaptureSession;
    private GisCaliTask mGisCaliTask;
    private MainHandler mMainHandler;
    private CaptureRequest.Builder mPreviewRequestBuilder;
    private Size mPreviewSize;
    private Button mShutterButton;
    private AutoFitTextureView mTextureView;
    private final TextureView.SurfaceTextureListener mSurfaceTextureListener = new TextureView.SurfaceTextureListener() { // from class: com.mediatek.emcamera.CaptureActivity.1
        @Override // android.view.TextureView.SurfaceTextureListener
        public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
            Elog.d(CaptureActivity.TAG, "onSurfaceTextureAvailable, width=" + i + ",height=" + i2);
            CaptureActivity.this.openCamera(i, i2);
        }

        @Override // android.view.TextureView.SurfaceTextureListener
        public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
            return true;
        }

        @Override // android.view.TextureView.SurfaceTextureListener
        public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
            Elog.d(CaptureActivity.TAG, "onSurfaceTextureSizeChanged, width=" + i + ",height=" + i2);
            CaptureActivity.this.configureTransform(i, i2);
        }

        @Override // android.view.TextureView.SurfaceTextureListener
        public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
        }
    };
    private final CameraDevice.StateCallback mStateCallback = new CameraDevice.StateCallback() { // from class: com.mediatek.emcamera.CaptureActivity.2
        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public void onDisconnected(CameraDevice cameraDevice) {
            Elog.d(CaptureActivity.TAG, "CameraDevice onDisconnected");
            CaptureActivity.this.mCameraOpenCloseLock.release();
            cameraDevice.close();
            CaptureActivity.this.mCameraDevice = null;
            CaptureActivity.this.mMainHandler.sendEmptyMessage(1);
        }

        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public void onError(CameraDevice cameraDevice, int i) {
            CaptureActivity.this.mCameraOpenCloseLock.release();
            cameraDevice.close();
            CaptureActivity.this.mCameraDevice = null;
            Utils.showErrorAndFinish(CaptureActivity.this, R.string.cannot_connect_camera);
        }

        @Override // android.hardware.camera2.CameraDevice.StateCallback
        public void onOpened(CameraDevice cameraDevice) {
            Elog.d(CaptureActivity.TAG, "CameraDevice onOpened");
            CaptureActivity.this.mCameraOpenCloseLock.release();
            CaptureActivity.this.mCameraDevice = cameraDevice;
            CaptureActivity.this.createCameraPreviewSession();
            CaptureActivity.this.mMainHandler.sendEmptyMessage(0);
        }
    };
    private Semaphore mCameraOpenCloseLock = new Semaphore(1);
    private CameraCaptureSession.CaptureCallback mCaptureCallback = new CameraCaptureSession.CaptureCallback() { // from class: com.mediatek.emcamera.CaptureActivity.3
        @Override // android.hardware.camera2.CameraCaptureSession.CaptureCallback
        public void onCaptureCompleted(CameraCaptureSession cameraCaptureSession, CaptureRequest captureRequest, TotalCaptureResult totalCaptureResult) {
        }

        @Override // android.hardware.camera2.CameraCaptureSession.CaptureCallback
        public void onCaptureProgressed(CameraCaptureSession cameraCaptureSession, CaptureRequest captureRequest, CaptureResult captureResult) {
            Elog.d(CaptureActivity.TAG, "Preview onCaptureProgressed");
        }
    };
    CameraCaptureSession.StateCallback mConfigStateCallback = new CameraCaptureSession.StateCallback() { // from class: com.mediatek.emcamera.CaptureActivity.4
        @Override // android.hardware.camera2.CameraCaptureSession.StateCallback
        public void onConfigureFailed(CameraCaptureSession cameraCaptureSession) {
            Utils.showToast(CaptureActivity.this, "EmCamera Configure Failed");
        }

        @Override // android.hardware.camera2.CameraCaptureSession.StateCallback
        public void onConfigured(CameraCaptureSession cameraCaptureSession) {
            if (CaptureActivity.this.mCameraDevice == null) {
                return;
            }
            CaptureActivity.this.mCaptureSession = cameraCaptureSession;
            try {
                CaptureActivity.this.mPreviewRequestBuilder.set(CaptureRequest.CONTROL_AF_MODE, 4);
                CaptureActivity.this.mCaptureSession.setRepeatingRequest(CaptureActivity.this.mPreviewRequestBuilder.build(), CaptureActivity.this.mCaptureCallback, CaptureActivity.this.mBackgroundHandler);
            } catch (CameraAccessException e) {
                e.printStackTrace();
            }
        }
    };

    private class GisCaliHander extends Handler {
        private GisCaliHander() {
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != 600) {
                if (i != 601) {
                    return;
                }
                CaptureActivity.this.mShutterButton.setEnabled(true);
                Elog.d(CaptureActivity.TAG, "GIS Cali done");
                return;
            }
            CaptureActivity.this.closeCamera();
            CaptureActivity captureActivity = CaptureActivity.this;
            captureActivity.openCamera(captureActivity.mTextureView.getWidth(), CaptureActivity.this.mTextureView.getHeight());
            Elog.d(CaptureActivity.TAG, "GIS Cali start preview");
        }
    }

    private class MainHandler extends Handler {
        private MainHandler() {
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                if (CaptureActivity.this.mGisCaliTask == null || CaptureActivity.this.mGisCaliTask.getGisStatus() != 1002) {
                    CaptureActivity.this.mShutterButton.setOnTouchListener(CaptureActivity.this);
                    CaptureActivity.this.mShutterButton.setEnabled(true);
                    return;
                }
                return;
            }
            if (i != 1) {
                return;
            }
            if (CaptureActivity.this.mGisCaliTask == null || CaptureActivity.this.mGisCaliTask.getGisStatus() != 1002) {
                CaptureActivity.this.mShutterButton.setEnabled(CaptureActivity.$assertionsDisabled);
                CaptureActivity.this.mShutterButton.setOnTouchListener(null);
            }
        }
    }

    private void cameraGisCalProc() {
        Elog.v(TAG, "cameraGisCalProc");
        GisCaliTask gisCaliTask = new GisCaliTask(this, this.mCameraName, new GisCaliHander());
        this.mGisCaliTask = gisCaliTask;
        gisCaliTask.execute(new String[0]);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void closeCamera() {
        try {
            try {
                this.mCameraOpenCloseLock.acquire();
                if (this.mCaptureSession != null) {
                    this.mCaptureSession.close();
                    this.mCaptureSession = null;
                }
                if (this.mCameraDevice != null) {
                    this.mCameraDevice.close();
                    this.mCameraDevice = null;
                }
                this.mCameraOpenCloseLock.release();
            } catch (InterruptedException e) {
                throw new RuntimeException("Interrupted while trying to lock camera closing.", e);
            }
        } catch (Throwable th) {
            this.mCameraOpenCloseLock.release();
            throw th;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void configureTransform(int i, int i2) {
        if (this.mTextureView == null || this.mPreviewSize == null) {
            return;
        }
        int rotation = getWindowManager().getDefaultDisplay().getRotation();
        Matrix matrix = new Matrix();
        RectF rectF = new RectF(0.0f, 0.0f, i, i2);
        RectF rectF2 = new RectF(0.0f, 0.0f, this.mPreviewSize.getHeight(), this.mPreviewSize.getWidth());
        Elog.d(TAG, "viewWidth=" + i + ",viewHeight=" + i2 + ",bufferWidth=" + this.mPreviewSize.getWidth() + ",bufferHeight=" + this.mPreviewSize.getHeight());
        float fCenterX = rectF.centerX();
        float fCenterY = rectF.centerY();
        if (1 == rotation || 3 == rotation) {
            rectF2.offset(fCenterX - rectF2.centerX(), fCenterY - rectF2.centerY());
            matrix.setRectToRect(rectF, rectF2, Matrix.ScaleToFit.FILL);
            float fMax = Math.max(i2 / this.mPreviewSize.getHeight(), i / this.mPreviewSize.getWidth());
            matrix.postScale(fMax, fMax, fCenterX, fCenterY);
            matrix.postRotate((rotation - 2) * 90, fCenterX, fCenterY);
        } else if (2 == rotation) {
            matrix.postRotate(180.0f, fCenterX, fCenterY);
        }
        this.mTextureView.setTransform(matrix);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void createCameraPreviewSession() {
        try {
            SurfaceTexture surfaceTexture = this.mTextureView.getSurfaceTexture();
            surfaceTexture.setDefaultBufferSize(this.mPreviewSize.getWidth(), this.mPreviewSize.getHeight());
            Surface surface = new Surface(surfaceTexture);
            CaptureRequest.Builder builderCreateCaptureRequest = this.mCameraDevice.createCaptureRequest(1);
            this.mPreviewRequestBuilder = builderCreateCaptureRequest;
            builderCreateCaptureRequest.addTarget(surface);
            this.mCameraDevice.createCaptureSession(Arrays.asList(surface), this.mConfigStateCallback, null);
        } catch (CameraAccessException e) {
            e.printStackTrace();
        }
    }

    private void getSettingsFromPref(String str) {
        SharedPreferences sharedPreferences = getSharedPreferences(str, 0);
        this.mCaptureSensorMode = sharedPreferences.getInt(getString(R.string.camera_key_selected_sensor_mode), 1);
        this.mCameraId = sharedPreferences.getString(getString(R.string.camera_key_selected_sensor_id), "0");
        this.mCameraName = sharedPreferences.getString(getString(R.string.camera_key_selected_sensor_name), "Main");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void openCamera(int i, int i2) {
        Elog.d(TAG, "openCamera width=" + i + ",height=" + i2);
        setUpCameraOutputs(i, i2);
        configureTransform(i, i2);
        CameraManager cameraManager = (CameraManager) getSystemService("camera");
        try {
            if (this.mCameraOpenCloseLock.tryAcquire(2500L, TimeUnit.MILLISECONDS)) {
                cameraManager.openCamera(this.mCameraId, this.mStateCallback, this.mBackgroundHandler);
            } else {
                Utils.showToast(this, "Time out waiting to lock camera opening.");
            }
        } catch (CameraAccessException e) {
            Utils.showToast(this, "Fail to open camera:CameraAccessException");
            e.printStackTrace();
        } catch (InterruptedException e2) {
            Utils.showToast(this, "Interrupted while trying to lock camera opening");
            e2.printStackTrace();
        }
    }

    private void setUpCameraOutputs(int i, int i2) {
        this.mPreviewSize = new Size(1920, 1080);
        if (getResources().getConfiguration().orientation == 2) {
            this.mTextureView.setAspectRatio(this.mPreviewSize.getWidth(), this.mPreviewSize.getHeight());
        } else {
            this.mTextureView.setAspectRatio(this.mPreviewSize.getHeight(), this.mPreviewSize.getWidth());
        }
    }

    private void startBackgroundThread() {
        HandlerThread handlerThread = new HandlerThread("CameraBackground");
        this.mBackgroundThread = handlerThread;
        handlerThread.start();
        this.mBackgroundHandler = new Handler(this.mBackgroundThread.getLooper());
    }

    private void stopBackgroundThread() {
        HandlerThread handlerThread = this.mBackgroundThread;
        if (handlerThread != null) {
            handlerThread.quitSafely();
            try {
                this.mBackgroundThread.join();
                this.mBackgroundThread = null;
                this.mBackgroundHandler = null;
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    @Override // com.mediatek.emcamera.ActivityBase
    public void doOnResume() {
        startBackgroundThread();
        Utils.setProperty(PROPERTY_KEY_CLIENT_APPMODE, APP_MODE_NAME_MTK_ENG);
        Utils.setProperty(PROPERTY_SENSOR_MODE, "" + this.mCaptureSensorMode);
        if (!this.mTextureView.isAvailable()) {
            this.mTextureView.setSurfaceTextureListener(this.mSurfaceTextureListener);
        } else {
            Elog.v(TAG, "mTextureView.isAvailable()");
            openCamera(this.mTextureView.getWidth(), this.mTextureView.getHeight());
        }
    }

    @Override // com.mediatek.emcamera.ActivityBase, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.v(TAG, "[onCreate] Bundle = " + String.valueOf(bundle));
        setContentView(R.layout.capture_activity);
        this.mTextureView = (AutoFitTextureView) findViewById(R.id.texture);
        Button button = (Button) findViewById(R.id.capture_btn);
        this.mShutterButton = button;
        button.setEnabled($assertionsDisabled);
        getSettingsFromPref(Utils.PREFERENCE_KEY);
        this.mMainHandler = new MainHandler();
    }

    @Override // com.mediatek.emcamera.ActivityBase, android.app.Activity
    public void onPause() {
        GisCaliTask gisCaliTask = this.mGisCaliTask;
        if (gisCaliTask != null && gisCaliTask.getStatus() == AsyncTask.Status.RUNNING) {
            this.mGisCaliTask.cancel(true);
        }
        closeCamera();
        stopBackgroundThread();
        Utils.setProperty(PROPERTY_KEY_CLIENT_APPMODE, "");
        Utils.setProperty(PROPERTY_SENSOR_MODE, "-1");
        super.onPause();
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        if (this.mCameraDevice == null) {
            return $assertionsDisabled;
        }
        if (!view.equals(this.mShutterButton)) {
            return true;
        }
        this.mShutterButton.setEnabled($assertionsDisabled);
        cameraGisCalProc();
        return true;
    }
}

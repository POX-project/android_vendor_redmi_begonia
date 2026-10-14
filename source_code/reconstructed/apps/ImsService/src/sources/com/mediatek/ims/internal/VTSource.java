package com.mediatek.ims.internal;

import android.content.Context;
import android.graphics.PointF;
import android.graphics.Rect;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCaptureSession;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraDevice;
import android.hardware.camera2.CameraManager;
import android.hardware.camera2.CaptureRequest;
import android.hardware.camera2.params.OutputConfiguration;
import android.hardware.camera2.params.SessionConfiguration;
import android.net.Uri;
import android.os.ConditionVariable;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.Range;
import android.view.Surface;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class VTSource {
    public static final int CAMERA_HARWARE_LEVEL_1 = 1;
    public static final int CAMERA_HARWARE_LEVEL_3 = 3;
    private static final String TAG = "VT SRC";
    private static final int TIME_OUT_MS = 6500;
    public static final int VT_SRV_CALL_3G = 1;
    public static final int VT_SRV_CALL_4G = 2;
    protected static Resolution[] sCameraResolutions;
    protected static Context sContext;
    private Surface mCachedPreviewSurface;
    private Surface mCachedRecordSurface;
    private final CameraManager mCameraManager;
    private final EventCallback mEventCallBack;
    private boolean mIsWaitRelease;
    private AtomicInteger mMessageId;
    private final int mMode;
    private boolean mNeedRecordStream;
    private Handler mRequestHandler;
    private HandlerThread mRequestThread;
    private boolean mStopPreviewAndRecord;
    private String mTAG;
    public final ImsVTProviderUtil mVTProviderUtil;

    private class DeviceHandler extends Handler {
        private static final int MAX_RETRY_OPEN_CAMERA_COUNT = 25;
        public static final int MSG_CLOSE_CAMERA = 9;
        public static final int MSG_DEVICE_ORIENTATION = 11;
        public static final int MSG_GET_CAMERA_CHARACTERISTICS = 8;
        public static final int MSG_OPEN_CAMERA = 0;
        public static final int MSG_PERFORM_ZOOM = 7;
        public static final int MSG_RELEASE = 10;
        public static final int MSG_RESTART_CAMERA = 12;
        public static final int MSG_START_PREVIEW = 1;
        public static final int MSG_START_RECORDING = 4;
        public static final int MSG_STOP_PREVIEW = 2;
        public static final int MSG_STOP_RECORDING = 5;
        public static final int MSG_STOP_RECORDING_PREVIEW = 13;
        public static final int MSG_SUBMIT_REQUEST = 6;
        public static final int MSG_UPDATE_RECORD_SURFACE = 3;
        private CameraCaptureSession mCameraCaptureSession;
        private CameraCharacteristics mCameraCharacteristics;
        private CameraDevice mCameraDevice;
        private String mCameraId;
        private CameraDevice.StateCallback mDeviceCallback;
        private ConditionVariable mDeviceConditionVariable;
        private int mDeviceDegree;
        private EventCallback mEventCallBack;
        private boolean mHasAddTarget;
        private boolean mNeedPortraitBuffer;
        private boolean mNeedRestart;
        private List<OutputConfiguration> mOutputConfigurations;
        private HandlerThread mRespondThread;
        private int mRetryCount;
        private CameraCaptureSession.StateCallback mSessionCallback;
        private ConditionVariable mSessionConditionVariable;
        private List<Surface> mSessionUsedSurfaceList;
        private float mZoomValue;

        DeviceHandler(Looper looper, boolean z, EventCallback eventCallback) {
            super(looper);
            this.mNeedRestart = false;
            this.mDeviceConditionVariable = new ConditionVariable();
            this.mZoomValue = 1.0f;
            this.mHasAddTarget = false;
            this.mSessionConditionVariable = new ConditionVariable();
            this.mSessionUsedSurfaceList = new ArrayList();
            this.mOutputConfigurations = new ArrayList();
            this.mDeviceCallback = new CameraDevice.StateCallback() { // from class: com.mediatek.ims.internal.VTSource.DeviceHandler.1
                @Override // android.hardware.camera2.CameraDevice.StateCallback
                public void onClosed(CameraDevice cameraDevice) {
                    Log.d(VTSource.this.mTAG, "[HDR] [onClosed]");
                    super.onClosed(cameraDevice);
                    if (DeviceHandler.this.mNeedRestart) {
                        DeviceHandler deviceHandler = DeviceHandler.this;
                        deviceHandler.obtainMessage(0, VTSource.this.mMessageId.incrementAndGet(), 0, DeviceHandler.this.mCameraId).sendToTarget();
                        Log.d(VTSource.this.mTAG, "[HDR] [onClosed] Send message to handler [" + VTSource.this.mMessageId.get() + "]");
                        DeviceHandler.this.mNeedRestart = false;
                    }
                    DeviceHandler.this.mDeviceConditionVariable.open();
                }

                @Override // android.hardware.camera2.CameraDevice.StateCallback
                public void onDisconnected(CameraDevice cameraDevice) {
                    Log.e(VTSource.this.mTAG, "[HDR] [onDisconnected] cameraDevice:" + cameraDevice);
                    if (DeviceHandler.this.mCameraDevice != null) {
                        DeviceHandler.this.mCameraDevice.close();
                        DeviceHandler.this.mCameraDevice = null;
                    }
                    DeviceHandler.this.mDeviceConditionVariable.open();
                }

                @Override // android.hardware.camera2.CameraDevice.StateCallback
                public void onError(CameraDevice cameraDevice, int i) {
                    Log.e(VTSource.this.mTAG, "[HDR] [onError] error:" + i);
                    if (DeviceHandler.this.mRetryCount >= 25 || VTSource.this.mStopPreviewAndRecord || !(i == 1 || i == 2)) {
                        DeviceHandler.this.mDeviceConditionVariable.open();
                        DeviceHandler.this.mEventCallBack.onError();
                        DeviceHandler.this.mEventCallBack.onOpenFail();
                    } else {
                        DeviceHandler.access$608(DeviceHandler.this);
                        try {
                            Thread.sleep(400L);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        DeviceHandler deviceHandler = DeviceHandler.this;
                        deviceHandler.doOpenCamera(deviceHandler.mCameraId);
                    }
                }

                @Override // android.hardware.camera2.CameraDevice.StateCallback
                public void onOpened(CameraDevice cameraDevice) {
                    Log.d(VTSource.this.mTAG, "[HDR] [onOpened]");
                    DeviceHandler.this.mCameraDevice = cameraDevice;
                    if (VTSource.this.mCachedPreviewSurface != null) {
                        DeviceHandler deviceHandler = DeviceHandler.this;
                        deviceHandler.obtainMessage(1, VTSource.this.mMessageId.incrementAndGet(), 0, VTSource.this.mCachedPreviewSurface).sendToTarget();
                        Log.d(VTSource.this.mTAG, "[HDR] [onOpened] Send message to handler [" + VTSource.this.mMessageId.get() + "]");
                    }
                    DeviceHandler.this.mDeviceConditionVariable.open();
                    DeviceHandler.this.mEventCallBack.onOpenSuccess();
                }
            };
            this.mSessionCallback = new CameraCaptureSession.StateCallback() { // from class: com.mediatek.ims.internal.VTSource.DeviceHandler.2
                @Override // android.hardware.camera2.CameraCaptureSession.StateCallback
                public void onConfigureFailed(CameraCaptureSession cameraCaptureSession) {
                    Log.d(VTSource.this.mTAG, "[onConfigureFailed]");
                    DeviceHandler.this.mSessionConditionVariable.open();
                    DeviceHandler.this.mEventCallBack.onError();
                }

                @Override // android.hardware.camera2.CameraCaptureSession.StateCallback
                public void onConfigured(CameraCaptureSession cameraCaptureSession) {
                    Log.d(VTSource.this.mTAG, "[onConfigured]");
                    DeviceHandler.this.mCameraCaptureSession = cameraCaptureSession;
                    DeviceHandler deviceHandler = DeviceHandler.this;
                    deviceHandler.obtainMessage(6, VTSource.this.mMessageId.incrementAndGet(), 0).sendToTarget();
                    Log.d(VTSource.this.mTAG, "[onConfigured] Send message to handler [" + VTSource.this.mMessageId.get() + "]");
                    DeviceHandler.this.mSessionConditionVariable.open();
                }
            };
            this.mNeedPortraitBuffer = z;
            HandlerThread handlerThread = new HandlerThread("VTSource-Respond");
            this.mRespondThread = handlerThread;
            handlerThread.start();
            this.mDeviceDegree = 0;
            this.mEventCallBack = eventCallback;
        }

        static /* synthetic */ int access$608(DeviceHandler deviceHandler) {
            int i = deviceHandler.mRetryCount;
            deviceHandler.mRetryCount = i + 1;
            return i;
        }

        private Range calculateAeFpsRange() {
            Log.d(VTSource.this.mTAG, "[HDR] [calculateAeFpsRange] Start");
            if (ImsVTProviderUtil.isVideoQualityTestMode()) {
                Range range = new Range(30, 30);
                Log.d(VTSource.this.mTAG, "[HDR] [calculateAeFpsRange] for VQ test, Range = [" + range.getLower() + ", " + range.getUpper() + "], Finish");
                return range;
            }
            Range[] rangeArr = (Range[]) this.mCameraCharacteristics.get(CameraCharacteristics.CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES);
            Range range2 = rangeArr[0];
            for (Range range3 : rangeArr) {
                if (((Integer) range2.getUpper()).intValue() < ((Integer) range3.getUpper()).intValue()) {
                    range2 = range3;
                } else if (range2.getUpper() == range3.getUpper() && ((Integer) range2.getLower()).intValue() > ((Integer) range3.getLower()).intValue()) {
                    range2 = range3;
                }
            }
            Log.d(VTSource.this.mTAG, "[HDR] [calculateAeFpsRange] Finish, Range = [" + range2.getLower() + ", " + range2.getUpper() + "]");
            return range2;
        }

        private Rect calculateCropRegionByZoomValue(float f) {
            Log.d(VTSource.this.mTAG, "[HDR] [calculateCropRegionByZoomValue] Start, zoomValue = " + f);
            PointF pointF = new PointF(0.5f, 0.5f);
            float fFloatValue = ((Float) this.mCameraCharacteristics.get(CameraCharacteristics.SCALER_AVAILABLE_MAX_DIGITAL_ZOOM)).floatValue();
            Rect rect = (Rect) this.mCameraCharacteristics.get(CameraCharacteristics.SENSOR_INFO_ACTIVE_ARRAY_SIZE);
            Log.d(VTSource.this.mTAG, "[HDR] [calculateCropRegionByZoomValue] Finish");
            return getCropRegionForZoom(f, pointF, fFloatValue, rect);
        }

        private void closeSession() {
            Log.d(VTSource.this.mTAG, "[HDR] [closeSession] Start");
            CameraCaptureSession cameraCaptureSession = this.mCameraCaptureSession;
            if (cameraCaptureSession != null) {
                try {
                    cameraCaptureSession.abortCaptures();
                    this.mCameraCaptureSession.close();
                    this.mCameraCaptureSession = null;
                } catch (CameraAccessException e) {
                    Log.e(VTSource.TAG, "[HDR] [closeSession] exception", e);
                } catch (IllegalStateException e2) {
                    Log.e(VTSource.TAG, "[HDR] [closeSession] exception", e2);
                    e2.printStackTrace();
                }
            } else {
                Log.d(VTSource.this.mTAG, "[HDR] [closeSession] mCameraCaptureSession = NULL");
            }
            Log.d(VTSource.this.mTAG, "[HDR] [closeSession] Finish");
        }

        private void createSession() {
            Log.d(VTSource.this.mTAG, "[HDR] [createSession] Start");
            if (this.mCameraDevice == null) {
                Log.w(VTSource.this.mTAG, "[HDR] [createSession] mCameraDevice is null !!!");
                return;
            }
            boolean zPrepareOutputConfiguration = prepareOutputConfiguration();
            if (this.mSessionUsedSurfaceList.size() <= 0 || !zPrepareOutputConfiguration) {
                Log.w(VTSource.this.mTAG, "[HDR] [createSession] Session surface list size <=0 or prepareOutputConfiguration fail");
                return;
            }
            SessionConfiguration sessionConfiguration = new SessionConfiguration(0, this.mOutputConfigurations, new HandlerExecutor(new Handler(this.mRespondThread.getLooper())), this.mSessionCallback);
            Log.d(VTSource.this.mTAG, "[HDR] [createSession] Create sessionConfig");
            CaptureRequest.Builder builderMakeRequestBuilder = makeRequestBuilder();
            if (builderMakeRequestBuilder == null) {
                Log.w(VTSource.this.mTAG, "[HDR] [createSession] requestBuilder == null");
                this.mEventCallBack.onError();
                return;
            }
            sessionConfiguration.setSessionParameters(builderMakeRequestBuilder.build());
            this.mSessionConditionVariable.close();
            try {
                this.mCameraDevice.createCaptureSession(sessionConfiguration);
                this.mSessionConditionVariable.block();
                Log.d(VTSource.this.mTAG, "[HDR] [createSession] Finish");
            } catch (Exception e) {
                Log.e(VTSource.this.mTAG, "[HDR] [createSession] create preview session with exception:" + e);
                this.mEventCallBack.onError();
            }
        }

        private void doCloseCamera() {
            Log.d(VTSource.this.mTAG, "[HDR] [doCloseCamera] Start");
            CameraDevice cameraDevice = this.mCameraDevice;
            if (cameraDevice != null) {
                cameraDevice.close();
                this.mCameraDevice = null;
            } else {
                Log.d(VTSource.this.mTAG, "[HDR] [doCloseCamera] mCameraDevice = NULL");
            }
            Log.d(VTSource.this.mTAG, "[HDR] [doCloseCamera] Finish");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void doOpenCamera(String str) {
            Log.d(VTSource.this.mTAG, "[HDR] [doOpenCamera] Start");
            try {
                VTSource.this.mCameraManager.openCamera(str, this.mDeviceCallback, new Handler(this.mRespondThread.getLooper()));
            } catch (Exception e) {
                Log.i(VTSource.this.mTAG, "[HDR] [doOpenCamera] open camera with access exception:" + e);
                this.mDeviceConditionVariable.open();
                this.mEventCallBack.onError();
            }
            Log.d(VTSource.this.mTAG, "[HDR] [doOpenCamera] Finish");
        }

        private int getCameraRotation(int i, CameraCharacteristics cameraCharacteristics) {
            int i2;
            Log.d(VTSource.this.mTAG, "[HDR] [getCameraRotation] Start");
            int iIntValue = ((Integer) cameraCharacteristics.get(CameraCharacteristics.LENS_FACING)).intValue();
            int iIntValue2 = ((Integer) cameraCharacteristics.get(CameraCharacteristics.SENSOR_ORIENTATION)).intValue();
            Log.d(VTSource.this.mTAG, "[HDR] [getCameraRotation] degrees: " + i + ", facing: " + iIntValue + ", orientation: " + iIntValue2);
            if (iIntValue == 0) {
                if (i == 0) {
                    i2 = 0;
                } else if (i == 90) {
                    i2 = 270;
                } else if (i != 180) {
                    i2 = i != 270 ? 0 : 90;
                } else {
                    i2 = 180;
                }
            } else if (i == 0) {
                i2 = 0;
            } else if (i == 90) {
                i2 = 90;
            } else if (i != 180) {
                i2 = i != 270 ? 0 : 270;
            } else {
                i2 = 180;
            }
            Log.d(VTSource.this.mTAG, "[HDR] [getCameraRotation] Fisnish, Final angle = " + i2);
            return i2;
        }

        private Rect getCropRegionForZoom(float f, PointF pointF, float f2, Rect rect) {
            Log.d(VTSource.this.mTAG, "[HDR] [getCropRegionForZoom] Start, zoomFactor = " + f + ", center = " + pointF + ", maxZoom = " + f2 + ", activeArray = " + rect);
            if (f < 1.0d) {
                throw new IllegalArgumentException("zoom factor " + f + " should be >= 1.0");
            }
            if (pointF.x > 1.0d || pointF.x < 0.0f) {
                throw new IllegalArgumentException("center.x " + pointF.x + " should be in range of [0, 1.0]");
            }
            if (pointF.y > 1.0d || pointF.y < 0.0f) {
                throw new IllegalArgumentException("center.y " + pointF.y + " should be in range of [0, 1.0]");
            }
            if (f2 < 1.0d) {
                throw new IllegalArgumentException("max zoom factor " + f2 + " should be >= 1.0");
            }
            if (rect == null) {
                throw new IllegalArgumentException("activeArray must not be null");
            }
            float fMin = 0.5f / Math.min(Math.min(pointF.x, 1.0f - pointF.x), Math.min(pointF.y, 1.0f - pointF.y));
            if (fMin > f2) {
                throw new IllegalArgumentException("Requested center " + pointF.toString() + " has minimal zoomable factor " + fMin + ", which exceeds max zoom factor " + f2);
            }
            if (f < fMin) {
                Log.w(VTSource.this.mTAG, "Requested zoomFactor " + f + " > minimal zoomable factor " + fMin + ". It will be overwritten by " + fMin);
                f = fMin;
            }
            int iWidth = (int) (rect.width() * pointF.x);
            int iHeight = (int) (rect.height() * pointF.y);
            int iWidth2 = (int) (rect.width() / f);
            int iHeight2 = (int) (rect.height() / f);
            Log.d(VTSource.this.mTAG, "[HDR] [getCropRegionForZoom] Finish");
            return new Rect(iWidth - (iWidth2 / 2), iHeight - (iHeight2 / 2), ((iWidth2 / 2) + iWidth) - 1, ((iHeight2 / 2) + iHeight) - 1);
        }

        private int getSessionRotationIndex(int i) {
            Log.d(VTSource.this.mTAG, "[HDR] [getSessionRotationIndex] rotation = " + i);
            if (i == 90) {
                return 1;
            }
            if (i != 180) {
                return i != 270 ? 0 : 3;
            }
            return 2;
        }

        private CaptureRequest.Builder makeRequestBuilder() {
            Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] Start");
            this.mHasAddTarget = false;
            CaptureRequest.Builder builderCreateCaptureRequest = null;
            try {
                builderCreateCaptureRequest = this.mCameraDevice.createCaptureRequest(3);
                builderCreateCaptureRequest.set(CaptureRequest.SCALER_CROP_REGION, calculateCropRegionByZoomValue(this.mZoomValue));
                builderCreateCaptureRequest.set(CaptureRequest.CONTROL_AE_TARGET_FPS_RANGE, calculateAeFpsRange());
                if (ImsVTProviderUtil.is512mbProject() || ImsVTProviderUtil.isVideoQualityTestMode()) {
                    Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] 512MB project or VQtest,turn off face detection");
                } else {
                    Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] Turn on face detection");
                    builderCreateCaptureRequest.set(CaptureRequest.CONTROL_MODE, 2);
                    builderCreateCaptureRequest.set(CaptureRequest.CONTROL_SCENE_MODE, 1);
                }
                Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] Add target mNeedRecordStream = " + VTSource.this.mNeedRecordStream + ", mCachedRecordSurface = " + VTSource.this.mCachedRecordSurface + ", mCachedPreviewSurface = " + VTSource.this.mCachedPreviewSurface);
                if (VTSource.this.mNeedRecordStream && VTSource.this.mCachedRecordSurface != null && this.mSessionUsedSurfaceList.contains(VTSource.this.mCachedRecordSurface)) {
                    builderCreateCaptureRequest.addTarget(VTSource.this.mCachedRecordSurface);
                    this.mHasAddTarget = true;
                }
                if (VTSource.this.mCachedPreviewSurface != null && this.mSessionUsedSurfaceList.contains(VTSource.this.mCachedPreviewSurface)) {
                    builderCreateCaptureRequest.addTarget(VTSource.this.mCachedPreviewSurface);
                    this.mHasAddTarget = true;
                }
                if (ImsVTProviderUtil.isVideoQualityTestMode()) {
                    Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] set CONTINUOUS_PICTURE");
                    builderCreateCaptureRequest.set(CaptureRequest.CONTROL_AF_MODE, 4);
                }
                builderCreateCaptureRequest.set(CaptureRequest.CONTROL_VIDEO_STABILIZATION_MODE, 0);
            } catch (Exception e) {
                Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] exception: " + e);
                e.printStackTrace();
                this.mEventCallBack.onError();
            }
            Log.d(VTSource.this.mTAG, "[HDR] [makeRequestBuilder] Finish");
            return builderCreateCaptureRequest;
        }

        private void prepareForOpenCamera(String str) {
            String str2;
            Log.d(VTSource.this.mTAG, "[HDR] [prepareForOpenCamera] Start, cameraId = " + str);
            if (this.mCameraDevice != null && (str2 = this.mCameraId) != null && !str2.equals(str)) {
                closeSession();
                this.mDeviceConditionVariable.close();
                doCloseCamera();
                this.mDeviceConditionVariable.block();
            }
            this.mCameraId = str;
            try {
                this.mCameraCharacteristics = VTSource.this.mCameraManager.getCameraCharacteristics(this.mCameraId);
            } catch (Exception e) {
                Log.e(VTSource.this.mTAG, "[HDR] [prepareForOpenCamera] before open camera getCameraCharacteristics access exception: " + e);
                this.mEventCallBack.onError();
            }
            Log.d(VTSource.this.mTAG, "[HDR] [prepareForOpenCamera] Finish");
        }

        private boolean prepareOutputConfiguration() {
            Log.d(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration] Start");
            this.mSessionUsedSurfaceList.clear();
            this.mOutputConfigurations.clear();
            if (VTSource.this.mCachedPreviewSurface != null) {
                Log.d(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration][Preview]");
                this.mSessionUsedSurfaceList.add(VTSource.this.mCachedPreviewSurface);
                try {
                    this.mOutputConfigurations.add(new OutputConfiguration(VTSource.this.mCachedPreviewSurface));
                } catch (Exception e) {
                    Log.e(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration][Preview] new OutputConfiguration with exception: " + e);
                    this.mSessionUsedSurfaceList.remove(VTSource.this.mCachedPreviewSurface);
                    VTSource.this.mCachedPreviewSurface = null;
                    this.mEventCallBack.onError();
                    Log.d(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration] Finish");
                    return false;
                }
            }
            if (VTSource.this.mCachedRecordSurface != null) {
                Log.d(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration][Record]");
                this.mSessionUsedSurfaceList.add(VTSource.this.mCachedRecordSurface);
                try {
                    this.mOutputConfigurations.add(new OutputConfiguration(VTSource.this.mCachedRecordSurface));
                } catch (Exception e2) {
                    Log.e(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration][Record] new OutputConfiguration with exception: " + e2);
                    this.mSessionUsedSurfaceList.remove(VTSource.this.mCachedRecordSurface);
                    VTSource.this.mCachedRecordSurface = null;
                    this.mEventCallBack.onError();
                    Log.d(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration] Finish");
                    return false;
                }
            }
            Log.d(VTSource.this.mTAG, "[HDR] [prepareOutputConfiguration] Finish");
            return true;
        }

        private void submitRepeatingRequest() {
            Log.d(VTSource.this.mTAG, "[HDR] [submitRepeatingRequest] Start");
            if (this.mCameraDevice == null || this.mCameraCaptureSession == null) {
                Log.w(VTSource.this.mTAG, "submitRepeatingRequest illegal state, ignore!");
                return;
            }
            CaptureRequest.Builder builderMakeRequestBuilder = makeRequestBuilder();
            if (builderMakeRequestBuilder == null) {
                Log.w(VTSource.this.mTAG, "submitRepeatingRequest requestBuilder == null");
                this.mEventCallBack.onError();
                return;
            }
            try {
                if (this.mHasAddTarget) {
                    this.mCameraCaptureSession.setRepeatingRequest(builderMakeRequestBuilder.build(), null, new Handler(this.mRespondThread.getLooper()));
                }
                if (ImsVTProviderUtil.isVideoQualityTestMode()) {
                    Log.d(VTSource.this.mTAG, "[HDR] [submitRepeatingRequest] trigger set focus once");
                    builderMakeRequestBuilder.set(CaptureRequest.CONTROL_AF_TRIGGER, 1);
                    this.mCameraCaptureSession.capture(builderMakeRequestBuilder.build(), null, new Handler(this.mRespondThread.getLooper()));
                }
            } catch (Exception e) {
                Log.d(VTSource.this.mTAG, "[HDR] [submitRepeatingRequest] exception: " + e);
                e.printStackTrace();
                this.mEventCallBack.onError();
            }
            Log.d(VTSource.this.mTAG, "[HDR] [submitRepeatingRequest] Finish");
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (this.mRespondThread == null) {
                Log.w(VTSource.this.mTAG, "[handleMessage] mRespondThread null, ignore message!!");
            }
            switch (message.what) {
                case 0:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_OPEN_CAMERA [" + message.arg1 + "]");
                    String str = (String) message.obj;
                    CameraDevice cameraDevice = this.mCameraDevice;
                    if (cameraDevice != null && cameraDevice.getId().equals(str)) {
                        Log.w(VTSource.this.mTAG, "open existing camera, ignore open!!!");
                    } else {
                        prepareForOpenCamera(str);
                        this.mRetryCount = 0;
                        VTSource.this.mStopPreviewAndRecord = false;
                        this.mDeviceConditionVariable.close();
                        doOpenCamera(this.mCameraId);
                        this.mDeviceConditionVariable.block();
                    }
                    break;
                case 1:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_START_PREVIEW [" + message.arg1 + "]");
                    Surface surface = (Surface) message.obj;
                    if (this.mCameraDevice != null && surface != null && surface.isValid()) {
                        if (surface.equals(VTSource.this.mCachedPreviewSurface)) {
                            closeSession();
                        }
                        VTSource.this.mCachedPreviewSurface = surface;
                        createSession();
                        break;
                    } else {
                        Log.w(VTSource.this.mTAG, "[HDR] [handleMessage] start preview with status error, device:" + this.mCameraDevice + ", new surface:" + surface);
                        if (surface != null && surface.isValid()) {
                            Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] Camera closed, store the surface for use later.");
                            VTSource.this.mCachedPreviewSurface = surface;
                            break;
                        }
                    }
                    break;
                case 2:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_STOP_PREVIEW [" + message.arg1 + "]");
                    VTSource.this.mCachedPreviewSurface = null;
                    closeSession();
                    createSession();
                    break;
                case 3:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_UPDATE_RECORD_SURFACE [" + message.arg1 + "]");
                    Surface surface2 = (Surface) message.obj;
                    if (surface2 != null || VTSource.this.mCachedRecordSurface != null) {
                        VTSource.this.mCachedRecordSurface = surface2;
                        closeSession();
                        createSession();
                    }
                    break;
                case 4:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_START_RECORDING [" + message.arg1 + "]");
                    if (this.mCameraDevice == null || this.mCameraCaptureSession == null || VTSource.this.mNeedRecordStream) {
                        Log.w(VTSource.this.mTAG, "[HDR] [handleMessage] start recording status error, device:" + this.mCameraDevice + ", session:" + this.mCameraCaptureSession + ", record status:" + VTSource.this.mNeedRecordStream);
                        VTSource.this.mNeedRecordStream = true;
                    } else {
                        VTSource.this.mNeedRecordStream = true;
                        submitRepeatingRequest();
                    }
                    break;
                case 5:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_STOP_RECORDING [" + message.arg1 + "]");
                    if (VTSource.this.mNeedRecordStream) {
                        VTSource.this.mNeedRecordStream = false;
                        if (VTSource.this.mCachedRecordSurface != null) {
                            closeSession();
                            createSession();
                        }
                    }
                    break;
                case 6:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_SUBMIT_REQUEST [" + message.arg1 + "]");
                    if (this.mCameraDevice == null || this.mCameraCaptureSession == null) {
                        Log.w(VTSource.this.mTAG, "[HDR] [handleMessage] submitRepeatingRequest illegal state, ignore!");
                    } else {
                        submitRepeatingRequest();
                    }
                    break;
                case 7:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_PERFORM_ZOOM [" + message.arg1 + "]");
                    if (this.mCameraDevice == null || this.mCameraCaptureSession == null) {
                        Log.w(VTSource.this.mTAG, "[HDR] [handleMessage] perform zoom with null device or session!!!");
                    } else {
                        this.mZoomValue = ((Float) message.obj).floatValue();
                        submitRepeatingRequest();
                    }
                    break;
                case 8:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_GET_CAMERA_CHARACTERISTICS [" + message.arg1 + "]");
                    ((CameraCharacteristics[]) message.obj)[0] = this.mCameraCharacteristics;
                    break;
                case 9:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_CLOSE_CAMERA [" + message.arg1 + "]");
                    this.mCameraCaptureSession = null;
                    this.mZoomValue = 1.0f;
                    doCloseCamera();
                    break;
                case 10:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_RELEASE [" + message.arg1 + "]");
                    this.mCameraCaptureSession = null;
                    this.mZoomValue = 1.0f;
                    doCloseCamera();
                    this.mSessionUsedSurfaceList.clear();
                    this.mOutputConfigurations.clear();
                    VTSource.this.mCachedRecordSurface = null;
                    VTSource.this.mCachedPreviewSurface = null;
                    this.mRespondThread.quitSafely();
                    break;
                case 11:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_DEVICE_ORIENTATION [" + message.arg1 + "]");
                    if (this.mDeviceDegree != ((Integer) message.obj).intValue()) {
                        Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] Change device orientation from " + this.mDeviceDegree + "to " + ((Integer) message.obj).intValue());
                        this.mDeviceDegree = ((Integer) message.obj).intValue();
                    }
                    break;
                case 12:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_RESTART_CAMERA [" + message.arg1 + "]");
                    closeSession();
                    this.mNeedRestart = true;
                    doCloseCamera();
                    break;
                case 13:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] MSG_STOP_RECORDING_PREVIEW [" + message.arg1 + "]");
                    if (VTSource.this.mNeedRecordStream) {
                        VTSource.this.mNeedRecordStream = false;
                        closeSession();
                    }
                    break;
                default:
                    Log.d(VTSource.this.mTAG, "[HDR] [handleMessage] what:" + message.what + " [" + message.arg1 + "]");
                    break;
            }
        }
    }

    public interface EventCallback {
        void onError();

        void onOpenFail();

        void onOpenSuccess();
    }

    private static class HandlerExecutor implements Executor {
        private final Handler mHandler;

        public HandlerExecutor(Handler handler) {
            this.mHandler = handler;
        }

        @Override // java.util.concurrent.Executor
        public void execute(Runnable runnable) {
            this.mHandler.post(runnable);
        }
    }

    public static final class Resolution {
        int mDegree;
        int mFacing;
        int mHal;
        int mId;
        int mMaxHeight;
        int mMaxWidth;

        public String toString() {
            return " mId: " + this.mId + " mMaxWidth: " + this.mMaxWidth + " mMaxHeight: " + this.mMaxHeight + " mDegree: " + this.mDegree + " mFacing: " + this.mFacing + " mHal: " + this.mHal;
        }
    }

    public VTSource() {
        this.mVTProviderUtil = ImsVTProviderUtil.getInstance();
        this.mIsWaitRelease = false;
        this.mStopPreviewAndRecord = false;
        this.mMessageId = new AtomicInteger(0);
        this.mMode = 2;
        this.mEventCallBack = null;
        this.mCameraManager = null;
    }

    public VTSource(int i, int i2, EventCallback eventCallback) {
        this.mVTProviderUtil = ImsVTProviderUtil.getInstance();
        this.mIsWaitRelease = false;
        this.mStopPreviewAndRecord = false;
        this.mMessageId = new AtomicInteger(0);
        String str = "VT SRC - " + i2;
        this.mTAG = str;
        Log.d(str, "[INT] [VTSource] Start, mode: " + i);
        this.mMode = i;
        this.mEventCallBack = eventCallback;
        this.mCameraManager = (CameraManager) sContext.getSystemService("camera");
        createRequestThreadAndHandler();
        Log.d(this.mTAG, "[INT] [VTSource] Finish");
    }

    private boolean IsHandlerThreadUnavailable() {
        if (this.mRequestThread != null && !this.mIsWaitRelease) {
            return false;
        }
        String str = this.mTAG;
        StringBuilder sb = new StringBuilder();
        sb.append("Thread = null:");
        sb.append(this.mRequestThread == null);
        sb.append(", mIsWaitRelease:");
        sb.append(this.mIsWaitRelease);
        Log.d(str, sb.toString());
        return true;
    }

    private void createRequestThreadAndHandler() {
        if (this.mRequestThread == null) {
            HandlerThread handlerThread = new HandlerThread("VTSource-Request");
            this.mRequestThread = handlerThread;
            handlerThread.start();
            this.mRequestHandler = new DeviceHandler(this.mRequestThread.getLooper(), this.mMode == 2, this.mEventCallBack);
        }
    }

    public static Resolution[] getAllCameraResolutions() {
        Log.d(TAG, "[STC] [getAllCameraResolutions] Start");
        if (sCameraResolutions == null) {
            ArrayList arrayList = new ArrayList();
            CameraManager cameraManager = (CameraManager) sContext.getSystemService("camera");
            try {
                for (String str : cameraManager.getCameraIdList()) {
                    Resolution resolution = new Resolution();
                    CameraCharacteristics cameraCharacteristics = cameraManager.getCameraCharacteristics(str);
                    Rect rect = (Rect) cameraCharacteristics.get(CameraCharacteristics.SENSOR_INFO_ACTIVE_ARRAY_SIZE);
                    int iIntValue = ((Integer) cameraCharacteristics.get(CameraCharacteristics.SENSOR_ORIENTATION)).intValue();
                    int iIntValue2 = ((Integer) cameraCharacteristics.get(CameraCharacteristics.LENS_FACING)).intValue();
                    int i = 2 == ((Integer) cameraCharacteristics.get(CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL)).intValue() ? 1 : 3;
                    resolution.mId = Integer.valueOf(str).intValue();
                    resolution.mMaxWidth = rect.width();
                    resolution.mMaxHeight = rect.width();
                    resolution.mDegree = iIntValue;
                    resolution.mFacing = iIntValue2;
                    resolution.mHal = i;
                    Log.w(TAG, "[getAllCameraResolutions] " + resolution);
                    arrayList.add(resolution);
                }
            } catch (Exception e) {
                Log.e(TAG, "[STC] [getAllCameraResolutions] getCameraIdList with exception:" + e);
            }
            if (arrayList.size() > 0) {
                Resolution[] resolutionArr = new Resolution[arrayList.size()];
                sCameraResolutions = resolutionArr;
                sCameraResolutions = (Resolution[]) arrayList.toArray(resolutionArr);
            }
            Log.d(TAG, "[STC] [getAllCameraResolutions] resolution size:" + arrayList.size());
        }
        Log.d(TAG, "[STC] [getAllCameraResolutions] Finish");
        return sCameraResolutions;
    }

    public static void setContext(Context context) {
        Log.d(TAG, "[STC] [setContext] context:" + context);
        sContext = context;
    }

    private boolean waitDone(Handler handler) {
        if (handler == null) {
            return false;
        }
        final ConditionVariable conditionVariable = new ConditionVariable();
        Runnable runnable = new Runnable() { // from class: com.mediatek.ims.internal.VTSource.1
            @Override // java.lang.Runnable
            public void run() {
                synchronized (conditionVariable) {
                    conditionVariable.open();
                }
            }
        };
        synchronized (conditionVariable) {
            if (!handler.post(runnable)) {
                return true;
            }
            conditionVariable.block();
            return true;
        }
    }

    public void close() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [close] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [close] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(9, iIncrementAndGet, 0).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [close] Finish [" + iIncrementAndGet + "]");
    }

    public CameraCharacteristics getCameraCharacteristics() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [getCameraCharacteristics] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [getCameraCharacteristics] Fail [" + iIncrementAndGet + "]");
            return null;
        }
        CameraCharacteristics[] cameraCharacteristicsArr = new CameraCharacteristics[1];
        this.mRequestHandler.obtainMessage(8, iIncrementAndGet, 0, cameraCharacteristicsArr).sendToTarget();
        if (waitDone(this.mRequestHandler)) {
            Log.d(this.mTAG, "[INT] [getCameraCharacteristics] Finish [" + iIncrementAndGet + "]");
            return cameraCharacteristicsArr[0];
        }
        this.mEventCallBack.onError();
        Log.d(this.mTAG, "[INT] [getCameraCharacteristics] Finish (null) [" + iIncrementAndGet + "]");
        return null;
    }

    public void hideMe() {
        Log.d(this.mTAG, "[INT] [hideMe]");
    }

    public void open(String str) {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [open] Start, id : " + str + " [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [open] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(0, iIncrementAndGet, 0, str).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [open] Finish [" + iIncrementAndGet + "]");
    }

    public void release() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [release] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [release] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mIsWaitRelease = true;
        this.mRequestHandler.obtainMessage(10, iIncrementAndGet, 0).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        this.mRequestHandler.removeCallbacksAndMessages(null);
        this.mRequestThread.quitSafely();
        this.mRequestThread = null;
        Log.d(this.mTAG, "[INT] [release] Finish [" + iIncrementAndGet + "]");
    }

    public void restart() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [restart] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [restart] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(12, iIncrementAndGet, 0).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [restart] Finish [" + iIncrementAndGet + "]");
    }

    public void setDeviceOrientation(int i) {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [setDeviceOrientation] Start, degree : " + i + " [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [setDeviceOrientation] Fail");
            return;
        }
        this.mRequestHandler.obtainMessage(11, iIncrementAndGet, 0, Integer.valueOf(i)).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [setDeviceOrientation] Finish [" + iIncrementAndGet + "]");
    }

    public void setPreviewSurface(Surface surface) {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [setPreviewSurface] Start, surface:" + surface + " [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [setPreviewSurface] Fail");
            return;
        }
        if (surface == null) {
            this.mRequestHandler.obtainMessage(2, iIncrementAndGet, 0).sendToTarget();
        } else {
            Surface surface2 = this.mCachedPreviewSurface;
            if (surface2 != null) {
                String[] strArrSplit = surface2.toString().split("@");
                String[] strArrSplit2 = surface.toString().split("@");
                Log.d(this.mTAG, "[INT] [setPreviewSurface] oriSurfaceToken[1]:" + strArrSplit[1] + ", newSurfaceToken[1]:" + strArrSplit2[1]);
                if (strArrSplit2[1].equals(strArrSplit[1]) && !this.mVTProviderUtil.getImsOemCallUtil().alwaysSetPreviewSurface()) {
                    Log.d(this.mTAG, "[INT] [setPreviewSurface] surface not changed, ignore! [" + iIncrementAndGet + "]");
                    return;
                }
            }
            this.mRequestHandler.obtainMessage(1, iIncrementAndGet, 0, surface).sendToTarget();
        }
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [setPreviewSurface] Finish [" + iIncrementAndGet + "]");
    }

    public void setRecordSurface(Surface surface) {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [setRecordSurface] Start, surface:" + surface + " [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [setRecordSurface] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(3, iIncrementAndGet, 0, surface).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [setRecordSurface] Finish [" + iIncrementAndGet + "]");
    }

    public void setReplacePicture(Uri uri) {
        Log.d(this.mTAG, "[INT] [setReplacePicture] uri:" + uri);
    }

    public void setZoom(float f) {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [setZoom] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [setZoom] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(7, iIncrementAndGet, 0, Float.valueOf(f)).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [setZoom] Finish [" + iIncrementAndGet + "]");
    }

    public void showMe() {
        Log.d(this.mTAG, "[INT] [showMe]");
    }

    public void startRecording() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [startRecording] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [startRecording] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(4, iIncrementAndGet, 0).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [startRecording] Finish [" + iIncrementAndGet + "]");
    }

    public void stopRecording() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [stopRecording] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [stopRecording] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(5, iIncrementAndGet, 0).sendToTarget();
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [stopRecording] Finish [" + iIncrementAndGet + "]");
    }

    public void stopRecordingAndPreview() {
        int iIncrementAndGet = this.mMessageId.incrementAndGet();
        Log.d(this.mTAG, "[INT] [stopRecordingAndPreview] Start [" + iIncrementAndGet + "]");
        if (IsHandlerThreadUnavailable()) {
            Log.d(this.mTAG, "[INT] [stopRecordingAndPreview] Fail [" + iIncrementAndGet + "]");
            return;
        }
        this.mRequestHandler.obtainMessage(13, iIncrementAndGet, 0).sendToTarget();
        this.mStopPreviewAndRecord = true;
        if (!waitDone(this.mRequestHandler)) {
            this.mEventCallBack.onError();
        }
        Log.d(this.mTAG, "[INT] [stopRecordingAndPreview] Finish [" + iIncrementAndGet + "]");
    }
}

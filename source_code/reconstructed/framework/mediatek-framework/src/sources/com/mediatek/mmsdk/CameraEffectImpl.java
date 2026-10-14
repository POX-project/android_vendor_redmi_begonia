package com.mediatek.mmsdk;

import android.os.Handler;
import android.os.Looper;
import android.os.RemoteException;
import android.util.Log;
import android.util.SparseArray;
import android.view.Surface;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class CameraEffectImpl extends CameraEffect {
    private static final boolean DEBUG = true;
    private static final int SUCCESS_VALUE = 0;
    private static final String TAG = "CameraEffectImpl";
    private BaseParameters mBaseParameters;
    private CameraEffectSessionImpl mCurrentSession;
    private Handler mEffectHalHandler;
    private CameraEffect.StateCallback mEffectStateCallback;
    private IEffectHalClient mIEffectHalClient;
    private DeviceStateCallback mSessionStateCallback;
    private boolean mInError = false;
    private final Object mInterfaceLock = new Object();
    private final Runnable mCallOnActive = new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.2
        @Override // java.lang.Runnable
        public void run() {
            synchronized (CameraEffectImpl.this.mInterfaceLock) {
                if (CameraEffectImpl.this.mIEffectHalClient == null) {
                    return;
                }
                DeviceStateCallback deviceStateCallback = CameraEffectImpl.this.mSessionStateCallback;
                if (deviceStateCallback != null) {
                    deviceStateCallback.onActive(CameraEffectImpl.this);
                }
            }
        }
    };
    private final Runnable mCallOnBusy = new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.3
        @Override // java.lang.Runnable
        public void run() {
            synchronized (CameraEffectImpl.this.mInterfaceLock) {
                if (CameraEffectImpl.this.mIEffectHalClient == null) {
                    return;
                }
                DeviceStateCallback deviceStateCallback = CameraEffectImpl.this.mSessionStateCallback;
                if (deviceStateCallback != null) {
                    deviceStateCallback.onBusy(CameraEffectImpl.this);
                }
            }
        }
    };
    private final Runnable mCallOnClosed = new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.4
        private boolean isClosedOnce = false;

        @Override // java.lang.Runnable
        public void run() {
            DeviceStateCallback deviceStateCallback;
            if (this.isClosedOnce) {
                throw new AssertionError("Don't post #onClosed more than once");
            }
            synchronized (CameraEffectImpl.this.mInterfaceLock) {
                deviceStateCallback = CameraEffectImpl.this.mSessionStateCallback;
            }
            if (deviceStateCallback != null) {
                deviceStateCallback.onClosed(CameraEffectImpl.this);
            }
            CameraEffectImpl.this.mEffectStateCallback.onClosed(CameraEffectImpl.this);
            this.isClosedOnce = CameraEffectImpl.DEBUG;
        }
    };
    private final Runnable mCallOnIdle = new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.5
        @Override // java.lang.Runnable
        public void run() {
            synchronized (CameraEffectImpl.this.mInterfaceLock) {
                if (CameraEffectImpl.this.mIEffectHalClient == null) {
                    return;
                }
                DeviceStateCallback deviceStateCallback = CameraEffectImpl.this.mSessionStateCallback;
                if (deviceStateCallback != null) {
                    deviceStateCallback.onIdle(CameraEffectImpl.this);
                }
            }
        }
    };
    private SparseArray<CaptureCallbackHolder> mCaptureCallbackHolderMap = new SparseArray<>();
    private long mCurrentStartId = -1;
    private CameraEffectStatus mEffectHalStatus = new CameraEffectStatus();

    public static abstract class CaptureCallback {
        public void onCaptureFailed(CameraEffectSession cameraEffectSession, BaseParameters baseParameters) {
        }

        public void onCaptureSequenceAborted(CameraEffectSession cameraEffectSession, BaseParameters baseParameters) {
        }

        public void onCaptureSequenceCompleted(CameraEffectSession cameraEffectSession, BaseParameters baseParameters, long j) {
        }

        public void onInputFrameProcessed(CameraEffectSession cameraEffectSession, BaseParameters baseParameters, BaseParameters baseParameters2) {
        }

        public void onOutputFrameProcessed(CameraEffectSession cameraEffectSession, BaseParameters baseParameters, BaseParameters baseParameters2) {
        }
    }

    private class CaptureCallbackHolder {
        private final CaptureCallback mCaptureCallback;
        private final Handler mHandler;

        CaptureCallbackHolder(CaptureCallback captureCallback, Handler handler) {
            this.mCaptureCallback = captureCallback;
            this.mHandler = handler;
        }

        public CaptureCallback getCaptureCallback() {
            return this.mCaptureCallback;
        }

        public Handler getHandler() {
            return this.mHandler;
        }
    }

    public static abstract class DeviceStateCallback extends CameraEffect.StateCallback {
        public void onActive(CameraEffect cameraEffect) {
        }

        public void onBusy(CameraEffect cameraEffect) {
        }

        public void onIdle(CameraEffect cameraEffect) {
        }

        public void onUnconfigured(CameraEffect cameraEffect) {
        }
    }

    public class EffectHalClientListener extends IEffectListener.Stub {
        public EffectHalClientListener() {
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onAborted(IEffectHalClient iEffectHalClient, final BaseParameters baseParameters) throws RemoteException {
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2] + "]++++");
            final CaptureCallbackHolder captureCallbackHolder = CameraEffectImpl.this.mCurrentStartId > 0 ? (CaptureCallbackHolder) CameraEffectImpl.this.mCaptureCallbackHolderMap.get((int) CameraEffectImpl.this.mCurrentStartId) : null;
            if (baseParameters != null) {
                Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "] ++++,effect = " + iEffectHalClient + ",result = " + baseParameters.flatten());
            }
            if (captureCallbackHolder != null) {
                captureCallbackHolder.getHandler().post(new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.EffectHalClientListener.4
                    @Override // java.lang.Runnable
                    public void run() {
                        captureCallbackHolder.getCaptureCallback().onCaptureSequenceAborted(CameraEffectImpl.this.mCurrentSession, baseParameters);
                    }
                });
            }
            CameraEffectImpl.this.mCaptureCallbackHolderMap.removeAt((int) CameraEffectImpl.this.mCurrentStartId);
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "] ----");
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onCompleted(IEffectHalClient iEffectHalClient, final BaseParameters baseParameters, long j) throws RemoteException {
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]++++");
            final int i = (int) j;
            final CaptureCallbackHolder captureCallbackHolder = i > 0 ? (CaptureCallbackHolder) CameraEffectImpl.this.mCaptureCallbackHolderMap.get(i) : null;
            if (baseParameters != null) {
                Log.i(CameraEffectImpl.TAG, "[onCompleted]++++, effect = ,partialResult = " + baseParameters.flatten() + ",uid = " + j + ",compleateId = " + i + ",mCurrentStartId = " + CameraEffectImpl.this.mCurrentStartId + ",callbackHolder = " + captureCallbackHolder);
            }
            if (captureCallbackHolder != null) {
                captureCallbackHolder.getHandler().post(new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.EffectHalClientListener.3
                    @Override // java.lang.Runnable
                    public void run() {
                        captureCallbackHolder.getCaptureCallback().onCaptureSequenceCompleted(CameraEffectImpl.this.mCurrentSession, baseParameters, i);
                    }
                });
            }
            CameraEffectImpl.this.mIEffectHalClient.abort(null);
            CameraEffectImpl.this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED);
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]----");
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onFailed(IEffectHalClient iEffectHalClient, final BaseParameters baseParameters) throws RemoteException {
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2] + "]++++");
            final CaptureCallbackHolder captureCallbackHolder = CameraEffectImpl.this.mCurrentStartId > 0 ? (CaptureCallbackHolder) CameraEffectImpl.this.mCaptureCallbackHolderMap.get((int) CameraEffectImpl.this.mCurrentStartId) : null;
            if (baseParameters != null) {
                Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "] ++++,effect = " + iEffectHalClient + ",result = " + baseParameters.flatten());
            }
            if (captureCallbackHolder != null) {
                captureCallbackHolder.getHandler().post(new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.EffectHalClientListener.5
                    @Override // java.lang.Runnable
                    public void run() {
                        captureCallbackHolder.getCaptureCallback().onCaptureFailed(CameraEffectImpl.this.mCurrentSession, baseParameters);
                    }
                });
            }
            CameraEffectImpl.this.mCaptureCallbackHolderMap.removeAt((int) CameraEffectImpl.this.mCurrentStartId);
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "] ----");
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onInputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, final BaseParameters baseParameters2) throws RemoteException {
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]++++");
            final CaptureCallbackHolder captureCallbackHolder = CameraEffectImpl.this.mCurrentStartId > 0 ? (CaptureCallbackHolder) CameraEffectImpl.this.mCaptureCallbackHolderMap.valueAt((int) CameraEffectImpl.this.mCurrentStartId) : null;
            if (baseParameters != null && baseParameters2 != null) {
                Log.i(CameraEffectImpl.TAG, "[onInputFrameProcessed] effect = " + iEffectHalClient + ",parameter = " + baseParameters.flatten() + ",partialResult = " + baseParameters2.flatten() + ",callbackHolder = " + captureCallbackHolder);
            }
            if (captureCallbackHolder != null) {
                captureCallbackHolder.getHandler().post(new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.EffectHalClientListener.1
                    @Override // java.lang.Runnable
                    public void run() {
                        captureCallbackHolder.getCaptureCallback().onInputFrameProcessed(CameraEffectImpl.this.mCurrentSession, baseParameters2, baseParameters2);
                    }
                });
            }
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]----");
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onOutputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, final BaseParameters baseParameters2) throws RemoteException {
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2] + "]++++");
            final CaptureCallbackHolder captureCallbackHolder = CameraEffectImpl.this.mCurrentStartId > 0 ? (CaptureCallbackHolder) CameraEffectImpl.this.mCaptureCallbackHolderMap.get((int) CameraEffectImpl.this.mCurrentStartId) : null;
            if (baseParameters != null && baseParameters2 != null) {
                Log.i(CameraEffectImpl.TAG, "[onOutputFrameProcessed]++++, effect = " + iEffectHalClient + ",parameter = " + baseParameters.flatten() + ",partialResult = " + baseParameters2.flatten() + ",mCurrentStartId = " + CameraEffectImpl.this.mCurrentStartId + ",callbackHolder = " + captureCallbackHolder);
            }
            if (captureCallbackHolder != null) {
                captureCallbackHolder.getHandler().post(new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.EffectHalClientListener.2
                    @Override // java.lang.Runnable
                    public void run() {
                        captureCallbackHolder.getCaptureCallback().onOutputFrameProcessed(CameraEffectImpl.this.mCurrentSession, baseParameters2, baseParameters2);
                    }
                });
            }
            Log.i(CameraEffectImpl.TAG, "[" + Thread.currentThread().getStackTrace()[2] + "]----");
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onPrepared(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
            Log.i(CameraEffectImpl.TAG, "[onPrepared] effect = " + iEffectHalClient + ",result = " + baseParameters.flatten());
        }
    }

    public CameraEffectImpl(CameraEffect.StateCallback stateCallback, Handler handler) {
        this.mEffectStateCallback = stateCallback;
        this.mEffectHalHandler = handler;
    }

    private Handler checkHandler(Handler handler) {
        if (handler != null) {
            return handler;
        }
        Looper looperMyLooper = Looper.myLooper();
        if (looperMyLooper != null) {
            return new Handler(looperMyLooper);
        }
        throw new IllegalArgumentException("No handler given, and current thread has no looper!");
    }

    private <T> Handler checkHandler(Handler handler, T t) {
        return t != null ? checkHandler(handler) : handler;
    }

    private void checkIfCameraClosedOrInError() throws CameraEffectHalException {
        if (this.mInError) {
            throw new CameraEffectHalRuntimeException(CameraEffectHalException.EFFECT_HAL_FACTORY_ERROR, "The camera device has encountered a serious error");
        }
        if (this.mIEffectHalClient == null) {
            throw new IllegalStateException("effect hal client have closed");
        }
    }

    private void unConfigureEffectHal() {
        Log.i(TAG, "[unConfigureEffectHal]");
        if (CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED == this.mEffectHalStatus.getEffectHalStatus()) {
            try {
                this.mIEffectHalClient.unconfigure();
                this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_INITIALIZED);
            } catch (RemoteException e) {
                Log.e(TAG, "RemoteException during unconfigure", e);
            }
        }
    }

    private void unInitEffectHal() {
        Log.i(TAG, "[unInitEffectHal]");
        if (CameraEffectStatus.CameraEffectHalStatus.STATUS_INITIALIZED == this.mEffectHalStatus.getEffectHalStatus()) {
            try {
                this.mIEffectHalClient.uninit();
                this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_UNINITIALIZED);
            } catch (RemoteException e) {
                Log.e(TAG, "RemoteException during uninit", e);
            }
        }
    }

    public void abortCapture(BaseParameters baseParameters) {
        try {
            if (CameraEffectStatus.CameraEffectHalStatus.STATUS_RUNNING == this.mEffectHalStatus.getEffectHalStatus()) {
                this.mIEffectHalClient.abort(this.mBaseParameters);
                this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED);
            }
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during abort", e);
        }
        this.mBaseParameters = baseParameters;
    }

    public void addOutputParameter(int i, BaseParameters baseParameters, long j, boolean z) {
        try {
            this.mIEffectHalClient.addOutputParameter(i, baseParameters, j, z);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during addOutputParameter", e);
        }
    }

    @Override // com.mediatek.mmsdk.CameraEffect, java.lang.AutoCloseable
    public void close() {
        Log.i(TAG, "[close]");
        if (this.mIEffectHalClient != null || this.mInError) {
            this.mEffectHalHandler.post(this.mCallOnClosed);
        }
        this.mIEffectHalClient = null;
        this.mInError = false;
    }

    @Override // com.mediatek.mmsdk.CameraEffect
    public void closeEffect() {
        Log.i(TAG, "[closeEffect] +++,mIEffectHalClient = " + this.mIEffectHalClient);
        abortCapture(null);
        unConfigureEffectHal();
        unInitEffectHal();
        Log.i(TAG, "[closeEffect] ---");
    }

    public boolean configureOutputs(List<Surface> list, List<BaseParameters> list2) throws CameraEffectHalException {
        Log.i(TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]++++,current status = " + this.mEffectHalStatus.getEffectHalStatus());
        if (list == null) {
            list = new ArrayList();
        }
        boolean z = false;
        synchronized (this.mInterfaceLock) {
            checkIfCameraClosedOrInError();
            this.mEffectHalHandler.post(this.mCallOnBusy);
            try {
                z = this.mIEffectHalClient.setOutputSurfaces(list, list2) == 0 ? DEBUG : false;
            } catch (RemoteException e) {
                Log.e(TAG, "RemoteException during setOutputSurfaces", e);
            }
        }
        Log.i(TAG, "[configureOutputs]----, success = " + z);
        return z;
    }

    @Override // com.mediatek.mmsdk.CameraEffect
    public CameraEffectSession createCaptureSession(List<Surface> list, List<BaseParameters> list2, CameraEffectSession.SessionStateCallback sessionStateCallback, Handler handler) throws CameraEffectHalException {
        boolean zConfigureOutputs;
        CameraEffectHalException cameraEffectHalException;
        Log.i(TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]");
        checkIfCameraClosedOrInError();
        if (list == null) {
            throw new IllegalArgumentException("createEffectSession: the outputSurface must not be null");
        }
        Handler handlerCheckHandler = checkHandler(handler);
        CameraEffectSessionImpl cameraEffectSessionImpl = this.mCurrentSession;
        if (cameraEffectSessionImpl != null) {
            cameraEffectSessionImpl.replaceSessionClose();
        }
        try {
            zConfigureOutputs = configureOutputs(list, list2);
            cameraEffectHalException = null;
        } catch (CameraEffectHalException e) {
            zConfigureOutputs = false;
            Log.v(TAG, "createCaptureSession- failed with exception ", e);
            cameraEffectHalException = e;
        }
        CameraEffectSessionImpl cameraEffectSessionImpl2 = new CameraEffectSessionImpl(sessionStateCallback, handlerCheckHandler, this, this.mEffectHalHandler, zConfigureOutputs);
        this.mCurrentSession = cameraEffectSessionImpl2;
        if (cameraEffectHalException != null) {
            throw cameraEffectHalException;
        }
        this.mSessionStateCallback = cameraEffectSessionImpl2.getDeviceStateCallback();
        this.mEffectHalHandler.post(this.mCallOnIdle);
        return this.mCurrentSession;
    }

    @Override // com.mediatek.mmsdk.CameraEffect
    public List<BaseParameters> getCaputreRequirement(BaseParameters baseParameters) throws RemoteException {
        int captureRequirement = -1;
        ArrayList arrayList = new ArrayList();
        CameraEffectStatus.CameraEffectHalStatus effectHalStatus = this.mEffectHalStatus.getEffectHalStatus();
        Log.i(TAG, "[getCaputreRequirement] currentStatus = " + effectHalStatus);
        try {
            if (CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED != effectHalStatus) {
                this.mIEffectHalClient.configure();
                this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED);
            }
            captureRequirement = this.mIEffectHalClient.getCaptureRequirement(baseParameters, arrayList);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during getCaptureRequirement", e);
        }
        Log.i(TAG, "[getCaputreRequirement] return value from native : " + captureRequirement + ",parameters = " + arrayList.toString());
        return arrayList;
    }

    public EffectHalClientListener getEffectHalListener() {
        return new EffectHalClientListener();
    }

    public boolean getFrameSyncMode(boolean z, int i) {
        boolean inputsyncMode = false;
        try {
            inputsyncMode = this.mIEffectHalClient.getInputsyncMode(i);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
        Log.i(TAG, "[getInputsyncMode] value = " + inputsyncMode);
        return inputsyncMode;
    }

    @Override // com.mediatek.mmsdk.CameraEffect
    public List<Surface> getInputSurface() {
        Log.d(TAG, "[getInputSurface],current status = " + this.mEffectHalStatus.getEffectHalStatus());
        ArrayList arrayList = new ArrayList();
        try {
            this.mIEffectHalClient.configure();
            this.mIEffectHalClient.prepare();
            this.mIEffectHalClient.getInputSurfaces(arrayList);
            this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during configure or prepare or getInputSurfaces", e);
        }
        return arrayList;
    }

    public boolean getOutputsyncMode(int i) throws RemoteException {
        boolean outputsyncMode = false;
        try {
            outputsyncMode = this.mIEffectHalClient.getOutputsyncMode(i);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
        Log.i(TAG, "[getOutputsyncMode] value = " + outputsyncMode);
        return outputsyncMode;
    }

    public void setFrameParameters(boolean z, int i, BaseParameters baseParameters, long j, boolean z2) {
        try {
            if (z) {
                this.mIEffectHalClient.addInputParameter(i, baseParameters, j, z2);
            } else {
                this.mIEffectHalClient.addOutputParameter(i, baseParameters, j, z2);
            }
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during addInputParameter or addOutputParameter", e);
        }
    }

    public int setFrameSyncMode(boolean z, int i, boolean z2) {
        int inputsyncMode = -1;
        try {
            inputsyncMode = z ? this.mIEffectHalClient.setInputsyncMode(i, z2) : this.mIEffectHalClient.setOutputsyncMode(i, z2);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
        Log.i(TAG, "[setFrameSyncMode] status_t = " + inputsyncMode + ",isInput = " + z);
        return inputsyncMode;
    }

    public int setOutputsyncMode(int i, boolean z) throws RemoteException {
        int outputsyncMode = -1;
        try {
            outputsyncMode = this.mIEffectHalClient.setOutputsyncMode(i, z);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
        Log.i(TAG, "[setOutputsyncMode] status_t = " + outputsyncMode);
        return outputsyncMode;
    }

    @Override // com.mediatek.mmsdk.CameraEffect
    public void setParamters(BaseParameters baseParameters) {
        try {
            this.mIEffectHalClient.setParameters(baseParameters);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during setParameters [BaseParameters]", e);
        }
    }

    public void setRemoteCameraEffect(IEffectHalClient iEffectHalClient) {
        synchronized (this.mInterfaceLock) {
            if (this.mInError) {
                return;
            }
            this.mIEffectHalClient = iEffectHalClient;
            this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_INITIALIZED);
        }
    }

    public void setRemoteCameraEffectFail(CameraEffectHalRuntimeException cameraEffectHalRuntimeException) {
        int i = 4;
        boolean z = DEBUG;
        switch (cameraEffectHalRuntimeException.getReason()) {
            case CameraEffectHalException.EFFECT_HAL_SERVICE_ERROR /* 101 */:
                i = 3;
                break;
            case CameraEffectHalException.EFFECT_HAL_FEATUREMANAGER_ERROR /* 102 */:
                z = false;
                break;
            case CameraEffectHalException.EFFECT_HAL_FACTORY_ERROR /* 103 */:
                i = 4;
                break;
            case CameraEffectHalException.EFFECT_HAL_ERROR /* 104 */:
            case 105:
            default:
                Log.wtf(TAG, "Unknown failure in opening camera device: " + cameraEffectHalRuntimeException.getReason());
                break;
            case CameraEffectHalException.EFFECT_HAL_LISTENER_ERROR /* 106 */:
                i = 6;
                break;
            case CameraEffectHalException.EFFECT_HAL_IN_USE /* 107 */:
                i = 1;
                break;
        }
        final int i2 = i;
        final boolean z2 = z;
        synchronized (this.mInterfaceLock) {
            this.mInError = DEBUG;
            this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_INITIALIZED);
            this.mEffectHalHandler.post(new Runnable() { // from class: com.mediatek.mmsdk.CameraEffectImpl.1
                @Override // java.lang.Runnable
                public void run() {
                    if (z2) {
                        CameraEffectImpl.this.mEffectStateCallback.onError(CameraEffectImpl.this, i2);
                    } else {
                        CameraEffectImpl.this.mEffectStateCallback.onDisconnected(CameraEffectImpl.this);
                    }
                }
            });
        }
    }

    public void startEffectHal(Handler handler, CaptureCallback captureCallback) {
        Log.i(TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]++++,status = " + this.mEffectHalStatus.getEffectHalStatus());
        Handler handlerCheckHandler = checkHandler(handler, captureCallback);
        try {
            if (CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED != this.mEffectHalStatus.getEffectHalStatus()) {
                this.mIEffectHalClient.configure();
                this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_CONFINGURED);
            }
            this.mIEffectHalClient.prepare();
            this.mCurrentStartId = this.mIEffectHalClient.start();
            this.mEffectHalStatus.setEffectHalStatus(CameraEffectStatus.CameraEffectHalStatus.STATUS_RUNNING);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during prepare or start", e);
        }
        this.mCaptureCallbackHolderMap.put((int) this.mCurrentStartId, new CaptureCallbackHolder(captureCallback, handlerCheckHandler));
        this.mEffectHalHandler.post(this.mCallOnActive);
        Log.i(TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "]----, mCurrentStartId = " + this.mCurrentStartId + ",callback = " + captureCallback + ",get the map's callback = " + this.mCaptureCallbackHolderMap.get((int) this.mCurrentStartId));
    }
}

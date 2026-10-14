package com.mediatek.mmsdk;

import android.content.Context;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.util.Log;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class CameraEffectManager {
    private static final String CAMERA_MM_SERVICE_BINDER_NAME = "media.mmsdk";
    private static final String TAG = "CameraEffectManager";
    private final Context mContext;
    private IEffectFactory mIEffectFactory;
    private IFeatureManager mIFeatureManager;
    private IMMSdkService mIMmsdkService;

    public CameraEffectManager(Context context) {
        this.mContext = context;
    }

    private IEffectHalClient createEffectHalClient(EffectHalVersion effectHalVersion) throws CameraEffectHalException {
        getEffectFactory();
        BinderHolder binderHolder = new BinderHolder();
        try {
            this.mIEffectFactory.createEffectHalClient(effectHalVersion, binderHolder);
            return IEffectHalClient.Stub.asInterface(binderHolder.getBinder());
        } catch (RemoteException e) {
            throw new CameraEffectHalException(105);
        }
    }

    private IEffectFactory getEffectFactory() throws CameraEffectHalException {
        getFeatureManager();
        if (this.mIEffectFactory == null) {
            BinderHolder binderHolder = new BinderHolder();
            try {
                this.mIFeatureManager.getEffectFactory(binderHolder);
                this.mIEffectFactory = IEffectFactory.Stub.asInterface(binderHolder.getBinder());
            } catch (RemoteException e) {
                throw new CameraEffectHalException(CameraEffectHalException.EFFECT_HAL_FACTORY_ERROR);
            }
        }
        return this.mIEffectFactory;
    }

    private IFeatureManager getFeatureManager() throws CameraEffectHalException {
        getMmSdkService();
        if (this.mIFeatureManager == null) {
            BinderHolder binderHolder = new BinderHolder();
            try {
                this.mIMmsdkService.connectFeatureManager(binderHolder);
                this.mIFeatureManager = IFeatureManager.Stub.asInterface(binderHolder.getBinder());
            } catch (RemoteException e) {
                throw new CameraEffectHalException(CameraEffectHalException.EFFECT_HAL_FEATUREMANAGER_ERROR);
            }
        }
        return this.mIFeatureManager;
    }

    private IMMSdkService getMmSdkService() throws CameraEffectHalException {
        if (this.mIMmsdkService == null) {
            IBinder service = ServiceManager.getService("media.mmsdk");
            if (service == null) {
                throw new CameraEffectHalException(CameraEffectHalException.EFFECT_HAL_SERVICE_ERROR);
            }
            this.mIMmsdkService = IMMSdkService.Stub.asInterface(service);
        }
        return this.mIMmsdkService;
    }

    private CameraEffect openEffect(EffectHalVersion effectHalVersion, CameraEffect.StateCallback stateCallback, Handler handler) throws CameraEffectHalException {
        getMmSdkService();
        getFeatureManager();
        getEffectFactory();
        IEffectHalClient iEffectHalClientCreateEffectHalClient = createEffectHalClient(effectHalVersion);
        try {
            int iInit = iEffectHalClientCreateEffectHalClient.init();
            CameraEffectImpl cameraEffectImpl = new CameraEffectImpl(stateCallback, handler);
            try {
                int effectListener = iEffectHalClientCreateEffectHalClient.setEffectListener(cameraEffectImpl.getEffectHalListener());
                cameraEffectImpl.setRemoteCameraEffect(iEffectHalClientCreateEffectHalClient);
                Log.i(TAG, "[openEffect],version = " + effectHalVersion + ",initValue = " + iInit + ",setListenerValue = " + effectListener + ",cameraEffect = " + cameraEffectImpl);
                return cameraEffectImpl;
            } catch (RemoteException e) {
                Log.e(TAG, "RemoteException during setEffectListener", e);
                CameraEffectHalRuntimeException cameraEffectHalRuntimeException = new CameraEffectHalRuntimeException(CameraEffectHalException.EFFECT_HAL_LISTENER_ERROR);
                cameraEffectImpl.setRemoteCameraEffectFail(cameraEffectHalRuntimeException);
                throw cameraEffectHalRuntimeException.asChecked();
            }
        } catch (RemoteException e2) {
            Log.e(TAG, "RemoteException during init", e2);
            throw new CameraEffectHalException(CameraEffectHalException.EFFECT_INITIAL_ERROR);
        }
    }

    public List<EffectHalVersion> getSupportedVersion(String str) throws CameraEffectHalException {
        ArrayList arrayList = new ArrayList();
        getEffectFactory();
        try {
            this.mIEffectFactory.getSupportedVersion(str, arrayList);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException during getSupportedVersion", e);
        }
        return arrayList;
    }

    public CameraEffect openEffectHal(EffectHalVersion effectHalVersion, CameraEffect.StateCallback stateCallback, Handler handler) throws CameraEffectHalException {
        if (effectHalVersion == null) {
            throw new IllegalArgumentException("effect version is null");
        }
        if (handler == null) {
            if (Looper.myLooper() == null) {
                throw new IllegalArgumentException("Looper doesn't exist in the calling thread");
            }
            handler = new Handler();
        }
        return openEffect(effectHalVersion, stateCallback, handler);
    }
}

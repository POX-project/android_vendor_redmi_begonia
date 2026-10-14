package com.mediatek.ims.internal;

import android.content.Context;
import android.hardware.camera2.CameraCharacteristics;
import android.net.Uri;
import android.util.Log;
import android.view.Surface;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class VTDummySource extends VTSource {
    private static final String TAG = "VT SRC_Dummy";

    public VTDummySource() {
        Log.d(TAG, "[INT] [VTDummySource] Finish");
    }

    public static VTSource.Resolution[] getAllCameraResolutions() {
        Log.d(TAG, "[STC] [getAllCameraResolutions] Start");
        if (sCameraResolutions == null) {
            ArrayList arrayList = new ArrayList();
            try {
                VTSource.Resolution resolution = new VTSource.Resolution();
                resolution.mId = 0;
                resolution.mMaxWidth = 5344;
                resolution.mMaxHeight = 5344;
                resolution.mDegree = 90;
                resolution.mFacing = 1;
                Log.w(TAG, "[getAllCameraResolutions] " + resolution);
                arrayList.add(resolution);
                VTSource.Resolution resolution2 = new VTSource.Resolution();
                resolution2.mId = 1;
                resolution2.mMaxWidth = 3264;
                resolution2.mMaxHeight = 3264;
                resolution2.mDegree = 270;
                resolution2.mFacing = 0;
                Log.w(TAG, "[getAllCameraResolutions] " + resolution2);
                arrayList.add(resolution2);
            } catch (Exception e) {
                Log.e(TAG, "[STC] [getAllCameraResolutions] getCameraIdList with exception:" + e);
            }
            if (arrayList.size() > 0) {
                sCameraResolutions = new VTSource.Resolution[arrayList.size()];
                sCameraResolutions = (VTSource.Resolution[]) arrayList.toArray(sCameraResolutions);
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

    @Override // com.mediatek.ims.internal.VTSource
    public void close() {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public CameraCharacteristics getCameraCharacteristics() {
        return null;
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void hideMe() {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void open(String str) {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void release() {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void setDeviceOrientation(int i) {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void setPreviewSurface(Surface surface) {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void setRecordSurface(Surface surface) {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void setReplacePicture(Uri uri) {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void setZoom(float f) {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void showMe() {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void startRecording() {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void stopRecording() {
    }

    @Override // com.mediatek.ims.internal.VTSource
    public void stopRecordingAndPreview() {
    }
}

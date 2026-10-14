package com.mediatek.media;

import android.media.MediaRecorder;
import android.util.Log;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes.dex */
public class MediaRecorderEx {
    private static final String CLASS_NAME = "android.media.MediaRecorder";
    private static final String METHOD_NAME = "setParameter";
    private static final Class[] METHOD_TYPES = {String.class};
    private static final String TAG = "MediaRecorderEx";
    private static Method sSetParameter;

    public final class HDRecordMode {
        public static final int INDOOR = 1;
        public static final int NORMAL = 0;
        public static final int OUTDOOR = 2;

        private HDRecordMode() {
        }
    }

    static {
        try {
            Method declaredMethod = Class.forName(CLASS_NAME).getDeclaredMethod(METHOD_NAME, METHOD_TYPES);
            sSetParameter = declaredMethod;
            if (declaredMethod != null) {
                declaredMethod.setAccessible(true);
            }
        } catch (ClassNotFoundException e) {
            Log.e("@M_MediaRecorderEx", "ClassNotFoundException: android.media.MediaRecorder");
        } catch (NoSuchMethodException e2) {
            Log.e("@M_MediaRecorderEx", "NoSuchMethodException: setParameter");
        }
    }

    public static void pause(MediaRecorder mediaRecorder) throws IllegalStateException {
        if (mediaRecorder == null) {
            Log.e("@M_MediaRecorderEx", "Null MediaRecorder!");
        }
    }

    public static void setAlbumTag(MediaRecorder mediaRecorder, String str) throws IllegalStateException {
        setParameter(mediaRecorder, "media-param-tag-album=" + str);
    }

    public static void setArtistTag(MediaRecorder mediaRecorder, String str) throws IllegalStateException {
        setParameter(mediaRecorder, "media-param-tag-artist=" + str);
    }

    public static void setHDRecordMode(MediaRecorder mediaRecorder, int i, boolean z) throws IllegalStateException, IllegalArgumentException {
        if (i < 0 || i > 2) {
            throw new IllegalArgumentException("Illegal HDRecord mode:" + i);
        }
        if (z) {
            setParameter(mediaRecorder, "audio-param-hdrecvideomode=" + i);
            return;
        }
        setParameter(mediaRecorder, "audio-param-hdrecvoicemode=" + i);
    }

    public static void setLivePhotoTag(MediaRecorder mediaRecorder, int i) {
    }

    private static void setParameter(MediaRecorder mediaRecorder, String str) {
        Method method = sSetParameter;
        if (method == null) {
            Log.e("@M_MediaRecorderEx", "setParameter: Null method!");
            return;
        }
        try {
            method.invoke(mediaRecorder, str);
        } catch (IllegalAccessException e) {
            Log.e("@M_MediaRecorderEx", "IllegalAccessException!", e);
        } catch (IllegalArgumentException e2) {
            Log.e("@M_MediaRecorderEx", "IllegalArgumentException!", e2);
        } catch (NullPointerException e3) {
            Log.e("@M_MediaRecorderEx", "NullPointerException!", e3);
        } catch (InvocationTargetException e4) {
            Log.e("@M_MediaRecorderEx", "InvocationTargetException!", e4);
        }
    }

    public static void setPreprocessEffect(MediaRecorder mediaRecorder, int i) throws IllegalStateException {
        setParameter(mediaRecorder, "audio-param-preprocesseffect=" + i);
    }

    public static void setVideoBitOffSet(MediaRecorder mediaRecorder, int i, boolean z) {
        if (z) {
            setParameter(mediaRecorder, "param-use-64bit-offset=" + i);
            Log.v("@M_MediaRecorderEx", "setVideoBitOffSet is true,offset= " + i);
        }
    }

    public static void startLivePhotoMode(MediaRecorder mediaRecorder) {
    }

    public static void stopLivePhotoMode(MediaRecorder mediaRecorder) {
    }
}

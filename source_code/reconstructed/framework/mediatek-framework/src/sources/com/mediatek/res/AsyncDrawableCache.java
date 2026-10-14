package com.mediatek.res;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.os.AsyncTask;
import android.os.SystemProperties;
import android.os.UserManager;
import android.util.ArrayMap;
import android.util.Log;
import com.mediatek.custom.CustomProperties;
import java.util.Map;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes.dex */
class AsyncDrawableCache {
    private static final String TAG = "AsyncDrawableCache";
    private static final long sClearCacheTime = 10000;
    private static final String sDefResolution = "720";
    private static final String sPerfName = "perf_img_scale";
    private static final String sResolutionEnableProp = "ro.vendor.pref_scale_enable_cfg";
    private static final String sResolutionProp = "ro.vendor.pref_scale_resolution";
    private static boolean isDEBUG = false;
    private static AsyncDrawableCache mAsyncDrawableCache = null;
    private static final ArrayMap<Long, Drawable.ConstantState> sDrawableCache = new ArrayMap<>();
    private static ArrayMap<String, Integer> sResolutionList = new ArrayMap<>();
    private static boolean isPreloaded = false;
    private static Object lock = new Object();

    AsyncDrawableCache() {
        sResolutionList.put("480", 307200);
        sResolutionList.put(sDefResolution, 921600);
        sResolutionList.put("1080", 2073600);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearCache() {
        ArrayMap<Long, Drawable.ConstantState> arrayMap = sDrawableCache;
        if (arrayMap != null && arrayMap.size() != 0) {
            synchronized (lock) {
                sDrawableCache.clear();
            }
        }
        if (isDEBUG) {
            Log.d(TAG, "clearCache, cache size:" + sDrawableCache.size());
        }
    }

    private void clearCacheAfterPreload() {
        if (isPreloaded) {
            new Timer().schedule(new TimerTask() { // from class: com.mediatek.res.AsyncDrawableCache.1
                @Override // java.util.TimerTask, java.lang.Runnable
                public void run() {
                    AsyncDrawableCache.this.clearCache();
                    boolean unused = AsyncDrawableCache.isPreloaded = false;
                }
            }, sClearCacheTime);
        }
    }

    static AsyncDrawableCache getInstance() {
        if (mAsyncDrawableCache == null) {
            synchronized (AsyncDrawableCache.class) {
                if (mAsyncDrawableCache == null) {
                    mAsyncDrawableCache = new AsyncDrawableCache();
                }
            }
        }
        return mAsyncDrawableCache;
    }

    private boolean isEnableFeature() {
        String str = SystemProperties.get(sResolutionEnableProp, "1");
        if (str.equals("0")) {
            isDEBUG = false;
            return false;
        }
        if (str.equals("1")) {
            isDEBUG = false;
            return true;
        }
        if (!str.equals("2")) {
            return true;
        }
        isDEBUG = true;
        return true;
    }

    private boolean isUserUnlocked(Context context) {
        return ((UserManager) context.getSystemService("user")).isUserUnlocked();
    }

    static /* synthetic */ void lambda$preloadRes$0(SharedPreferences sharedPreferences, Context context) {
        for (Map.Entry<String, ?> entry : sharedPreferences.getAll().entrySet()) {
            entry.getKey();
            int iIntValue = ((Integer) entry.getValue()).intValue();
            if (isDEBUG) {
                Log.d(TAG, "resource=" + iIntValue + ", res obj=" + context.getResources().getImpl());
            }
            try {
                context.getDrawable(iIntValue);
            } catch (Resources.NotFoundException e) {
                Log.w(TAG, "can not found res: " + iIntValue + ", maybe dynamic res id.");
            }
        }
        if (isDEBUG) {
            Log.d(TAG, "preloadRes, end of preloadRes");
        }
    }

    private boolean needCacheDrawable(Drawable drawable) {
        Integer num = sResolutionList.get(SystemProperties.get(sResolutionProp, sDefResolution));
        int minimumWidth = drawable.getMinimumWidth() * drawable.getMinimumHeight();
        if (minimumWidth < num.intValue()) {
            return false;
        }
        if (isDEBUG) {
            Log.d(TAG, "computeResolution, drResolution:" + minimumWidth + ", scaleResolution:" + num);
        }
        return true;
    }

    private void storeDrawableId(int i, Context context) {
        SharedPreferences sharedPreferences;
        if (context == null) {
            Log.w(TAG, "storeDrawableId got the context is null, id:" + i + " cannot save");
            return;
        }
        if (!isUserUnlocked(context) || (sharedPreferences = context.getSharedPreferences(sPerfName, 0)) == null || sharedPreferences.contains(String.valueOf(i))) {
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putInt(String.valueOf(i), i);
        editorEdit.commit();
        if (isDEBUG) {
            Log.d(TAG, "storeDrawableId, id:" + i);
        }
    }

    Drawable getCachedDrawable(Resources resources, long j, int i) {
        Drawable.ConstantState constantState;
        if (!isEnableFeature()) {
            return null;
        }
        synchronized (lock) {
            constantState = sDrawableCache.get(Long.valueOf(j));
        }
        if (constantState != null) {
            return constantState.newDrawable(resources);
        }
        return null;
    }

    void preloadRes(final Context context, Resources resources) {
        final SharedPreferences sharedPreferences;
        if (isEnableFeature() && isUserUnlocked(context) && (sharedPreferences = context.getSharedPreferences(sPerfName, 0)) != null && sharedPreferences.getAll().size() != 0) {
            isPreloaded = true;
            AsyncTask.execute(new Runnable() { // from class: com.mediatek.res.-$$Lambda$AsyncDrawableCache$3JyH3qE3xjQu1pUmG-rc6C2rUcw
                @Override // java.lang.Runnable
                public final void run() {
                    AsyncDrawableCache.lambda$preloadRes$0(sharedPreferences, context);
                }
            });
            clearCacheAfterPreload();
        }
    }

    void putCacheList(long j, Drawable drawable, int i, Context context) {
        Drawable.ConstantState constantState;
        if (!isEnableFeature() || context.getApplicationInfo().processName.equals(CustomProperties.MODULE_SYSTEM) || context.getApplicationInfo().isSystemApp()) {
            return;
        }
        synchronized (lock) {
            constantState = sDrawableCache.get(Long.valueOf(j));
        }
        if (constantState == null && context != null && needCacheDrawable(drawable)) {
            if (isPreloaded) {
                synchronized (lock) {
                    sDrawableCache.put(Long.valueOf(j), drawable.getConstantState());
                }
                if (isDEBUG) {
                    Log.d(TAG, "putCacheList, put cache, size:" + sDrawableCache.size());
                }
            }
            if (isDEBUG) {
                Log.d(TAG, "putCacheList, key:" + j + ", origResId:" + i);
            }
            storeDrawableId(i, context);
        }
    }
}

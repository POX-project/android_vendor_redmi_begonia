package androidx.core.content.res;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.util.SparseArray;
import android.util.TypedValue;
import androidx.core.graphics.TypefaceCompat;
import androidx.core.util.Preconditions;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.WeakHashMap;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
public final class ResourcesCompat {
    public static final int ID_NULL = 0;
    private static final String TAG = "ResourcesCompat";
    private static final ThreadLocal<TypedValue> sTempTypedValue = new ThreadLocal<>();
    private static final WeakHashMap<Resources, SparseArray<ColorStateListCacheEntry>> sColorStateCaches = new WeakHashMap<>(0);
    private static final Object sColorStateCacheLock = new Object();

    private static class ColorStateListCacheEntry {
        final Configuration mConfiguration;
        final ColorStateList mValue;

        ColorStateListCacheEntry(ColorStateList colorStateList, Configuration configuration) {
            this.mValue = colorStateList;
            this.mConfiguration = configuration;
        }
    }

    public static abstract class FontCallback {
        public final void callbackFailAsync(final int i, Handler handler) {
            if (handler == null) {
                handler = new Handler(Looper.getMainLooper());
            }
            handler.post(new Runnable() { // from class: androidx.core.content.res.ResourcesCompat.FontCallback.2
                @Override // java.lang.Runnable
                public void run() {
                    FontCallback.this.onFontRetrievalFailed(i);
                }
            });
        }

        public final void callbackSuccessAsync(final Typeface typeface, Handler handler) {
            if (handler == null) {
                handler = new Handler(Looper.getMainLooper());
            }
            handler.post(new Runnable() { // from class: androidx.core.content.res.ResourcesCompat.FontCallback.1
                @Override // java.lang.Runnable
                public void run() {
                    FontCallback.this.onFontRetrieved(typeface);
                }
            });
        }

        public abstract void onFontRetrievalFailed(int i);

        public abstract void onFontRetrieved(Typeface typeface);
    }

    public static final class ThemeCompat {

        static class ImplApi23 {
            private static Method sRebaseMethod;
            private static boolean sRebaseMethodFetched;
            private static final Object sRebaseMethodLock = new Object();

            private ImplApi23() {
            }

            /* JADX WARN: Code duplicated, block: B:26:0x0027 A[EXC_TOP_SPLITTER, SYNTHETIC] */
            static void rebase(Resources.Theme theme) {
                synchronized (sRebaseMethodLock) {
                    if (!sRebaseMethodFetched) {
                        try {
                            Method declaredMethod = Resources.Theme.class.getDeclaredMethod("rebase", new Class[0]);
                            sRebaseMethod = declaredMethod;
                            declaredMethod.setAccessible(true);
                        } catch (NoSuchMethodException e) {
                            Log.i(ResourcesCompat.TAG, "Failed to retrieve rebase() method", e);
                        }
                        sRebaseMethodFetched = true;
                        if (sRebaseMethod != null) {
                            try {
                                sRebaseMethod.invoke(theme, new Object[0]);
                            } catch (IllegalAccessException | InvocationTargetException e2) {
                                Log.i(ResourcesCompat.TAG, "Failed to invoke rebase() method via reflection", e2);
                                sRebaseMethod = null;
                            }
                        }
                    } else if (sRebaseMethod != null) {
                        sRebaseMethod.invoke(theme, new Object[0]);
                    }
                    throw th;
                }
            }
        }

        static class ImplApi29 {
            private ImplApi29() {
            }

            static void rebase(Resources.Theme theme) {
                theme.rebase();
            }
        }

        private ThemeCompat() {
        }

        public static void rebase(Resources.Theme theme) {
            if (Build.VERSION.SDK_INT >= 29) {
                ImplApi29.rebase(theme);
            } else if (Build.VERSION.SDK_INT >= 23) {
                ImplApi23.rebase(theme);
            }
        }
    }

    private ResourcesCompat() {
    }

    private static void addColorStateListToCache(Resources resources, int i, ColorStateList colorStateList) {
        synchronized (sColorStateCacheLock) {
            SparseArray<ColorStateListCacheEntry> sparseArray = sColorStateCaches.get(resources);
            if (sparseArray == null) {
                sparseArray = new SparseArray<>();
                sColorStateCaches.put(resources, sparseArray);
            }
            sparseArray.append(i, new ColorStateListCacheEntry(colorStateList, resources.getConfiguration()));
        }
    }

    private static ColorStateList getCachedColorStateList(Resources resources, int i) {
        ColorStateListCacheEntry colorStateListCacheEntry;
        synchronized (sColorStateCacheLock) {
            SparseArray<ColorStateListCacheEntry> sparseArray = sColorStateCaches.get(resources);
            if (sparseArray != null && sparseArray.size() > 0 && (colorStateListCacheEntry = sparseArray.get(i)) != null) {
                if (colorStateListCacheEntry.mConfiguration.equals(resources.getConfiguration())) {
                    return colorStateListCacheEntry.mValue;
                }
                sparseArray.remove(i);
            }
            return null;
        }
    }

    public static int getColor(Resources resources, int i, Resources.Theme theme) throws Resources.NotFoundException {
        return Build.VERSION.SDK_INT >= 23 ? resources.getColor(i, theme) : resources.getColor(i);
    }

    public static ColorStateList getColorStateList(Resources resources, int i, Resources.Theme theme) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT >= 23) {
            return resources.getColorStateList(i, theme);
        }
        ColorStateList cachedColorStateList = getCachedColorStateList(resources, i);
        if (cachedColorStateList != null) {
            return cachedColorStateList;
        }
        ColorStateList colorStateListInflateColorStateList = inflateColorStateList(resources, i, theme);
        if (colorStateListInflateColorStateList == null) {
            return resources.getColorStateList(i);
        }
        addColorStateListToCache(resources, i, colorStateListInflateColorStateList);
        return colorStateListInflateColorStateList;
    }

    public static Drawable getDrawable(Resources resources, int i, Resources.Theme theme) throws Resources.NotFoundException {
        return Build.VERSION.SDK_INT >= 21 ? resources.getDrawable(i, theme) : resources.getDrawable(i);
    }

    public static Drawable getDrawableForDensity(Resources resources, int i, int i2, Resources.Theme theme) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT >= 21) {
            return resources.getDrawableForDensity(i, i2, theme);
        }
        return Build.VERSION.SDK_INT >= 15 ? resources.getDrawableForDensity(i, i2) : resources.getDrawable(i);
    }

    public static float getFloat(Resources resources, int i) {
        TypedValue typedValue = new TypedValue();
        resources.getValue(i, typedValue, true);
        if (typedValue.type == 4) {
            return typedValue.getFloat();
        }
        throw new Resources.NotFoundException("Resource ID #0x" + Integer.toHexString(i) + " type #0x" + Integer.toHexString(typedValue.type) + " is not valid");
    }

    public static Typeface getFont(Context context, int i) throws Resources.NotFoundException {
        if (context.isRestricted()) {
            return null;
        }
        return loadFont(context, i, new TypedValue(), 0, null, null, false);
    }

    public static Typeface getFont(Context context, int i, TypedValue typedValue, int i2, FontCallback fontCallback) throws Resources.NotFoundException {
        if (context.isRestricted()) {
            return null;
        }
        return loadFont(context, i, typedValue, i2, fontCallback, null, true);
    }

    public static void getFont(Context context, int i, FontCallback fontCallback, Handler handler) throws Resources.NotFoundException {
        Preconditions.checkNotNull(fontCallback);
        if (context.isRestricted()) {
            fontCallback.callbackFailAsync(-4, handler);
        } else {
            loadFont(context, i, new TypedValue(), 0, fontCallback, handler, false);
        }
    }

    private static TypedValue getTypedValue() {
        TypedValue typedValue = sTempTypedValue.get();
        if (typedValue != null) {
            return typedValue;
        }
        TypedValue typedValue2 = new TypedValue();
        sTempTypedValue.set(typedValue2);
        return typedValue2;
    }

    private static ColorStateList inflateColorStateList(Resources resources, int i, Resources.Theme theme) {
        if (isColorInt(resources, i)) {
            return null;
        }
        try {
            return ColorStateListInflaterCompat.createFromXml(resources, resources.getXml(i), theme);
        } catch (Exception e) {
            Log.e(TAG, "Failed to inflate ColorStateList, leaving it to the framework", e);
            return null;
        }
    }

    private static boolean isColorInt(Resources resources, int i) {
        TypedValue typedValue = getTypedValue();
        resources.getValue(i, typedValue, true);
        return typedValue.type >= 28 && typedValue.type <= 31;
    }

    private static Typeface loadFont(Context context, int i, TypedValue typedValue, int i2, FontCallback fontCallback, Handler handler, boolean z) {
        Resources resources = context.getResources();
        resources.getValue(i, typedValue, true);
        Typeface typefaceLoadFont = loadFont(context, resources, typedValue, i, i2, fontCallback, handler, z);
        if (typefaceLoadFont != null || fontCallback != null) {
            return typefaceLoadFont;
        }
        throw new Resources.NotFoundException("Font resource ID #0x" + Integer.toHexString(i) + " could not be retrieved.");
    }

    /* JADX WARN: Code duplicated, block: B:62:0x00f0  */
    private static Typeface loadFont(Context context, Resources resources, TypedValue typedValue, int i, int i2, FontCallback fontCallback, Handler handler, boolean z) {
        String str;
        Typeface typeface;
        if (typedValue.string == null) {
            throw new Resources.NotFoundException("Resource \"" + resources.getResourceName(i) + "\" (" + Integer.toHexString(i) + ") is not a Font: " + typedValue);
        }
        String string = typedValue.string.toString();
        if (!string.startsWith("res/")) {
            if (fontCallback != null) {
                fontCallback.callbackFailAsync(-3, handler);
            }
            return null;
        }
        Typeface typefaceFindFromCache = TypefaceCompat.findFromCache(resources, i, i2);
        if (typefaceFindFromCache != null) {
            if (fontCallback != null) {
                fontCallback.callbackSuccessAsync(typefaceFindFromCache, handler);
            }
            return typefaceFindFromCache;
        }
        try {
            if (!string.toLowerCase().endsWith(".xml")) {
                typeface = typefaceFindFromCache;
                str = string;
                try {
                    Typeface typefaceCreateFromResourcesFontFile = TypefaceCompat.createFromResourcesFontFile(context, resources, i, str, i2);
                    if (fontCallback != null) {
                        try {
                            if (typefaceCreateFromResourcesFontFile != null) {
                                fontCallback.callbackSuccessAsync(typefaceCreateFromResourcesFontFile, handler);
                            } else {
                                fontCallback.callbackFailAsync(-3, handler);
                            }
                        } catch (IOException e) {
                            e = e;
                            Log.e(TAG, "Failed to read xml resource " + str, e);
                            if (fontCallback != null) {
                                fontCallback.callbackFailAsync(-3, handler);
                            }
                            return null;
                        } catch (XmlPullParserException e2) {
                            e = e2;
                            Log.e(TAG, "Failed to parse xml resource " + str, e);
                            if (fontCallback != null) {
                                fontCallback.callbackFailAsync(-3, handler);
                            }
                            return null;
                        }
                    }
                    return typefaceCreateFromResourcesFontFile;
                } catch (IOException e3) {
                    e = e3;
                    Log.e(TAG, "Failed to read xml resource " + str, e);
                    if (fontCallback != null) {
                        fontCallback.callbackFailAsync(-3, handler);
                    }
                    return null;
                } catch (XmlPullParserException e4) {
                    e = e4;
                    Log.e(TAG, "Failed to parse xml resource " + str, e);
                    if (fontCallback != null) {
                        fontCallback.callbackFailAsync(-3, handler);
                    }
                    return null;
                }
            }
            try {
                FontResourcesParserCompat.FamilyResourceEntry familyResourceEntry = FontResourcesParserCompat.parse(resources.getXml(i), resources);
                if (familyResourceEntry != null) {
                    typeface = typefaceFindFromCache;
                    str = string;
                    try {
                        return TypefaceCompat.createFromResourcesFamilyXml(context, familyResourceEntry, resources, i, i2, fontCallback, handler, z);
                    } catch (IOException e5) {
                        e = e5;
                        Log.e(TAG, "Failed to read xml resource " + str, e);
                        if (fontCallback != null) {
                            fontCallback.callbackFailAsync(-3, handler);
                        }
                        return null;
                    } catch (XmlPullParserException e6) {
                        e = e6;
                        Log.e(TAG, "Failed to parse xml resource " + str, e);
                        if (fontCallback != null) {
                            fontCallback.callbackFailAsync(-3, handler);
                        }
                        return null;
                    }
                }
                try {
                    Log.e(TAG, "Failed to find font-family tag");
                    if (fontCallback != null) {
                        fontCallback.callbackFailAsync(-3, handler);
                    }
                    return null;
                } catch (IOException e7) {
                    e = e7;
                    str = string;
                    Log.e(TAG, "Failed to read xml resource " + str, e);
                    if (fontCallback != null) {
                        fontCallback.callbackFailAsync(-3, handler);
                    }
                    return null;
                } catch (XmlPullParserException e8) {
                    e = e8;
                    str = string;
                    Log.e(TAG, "Failed to parse xml resource " + str, e);
                    if (fontCallback != null) {
                        fontCallback.callbackFailAsync(-3, handler);
                    }
                    return null;
                }
            } catch (IOException e9) {
                e = e9;
                str = string;
            } catch (XmlPullParserException e10) {
                e = e10;
                str = string;
            }
        } catch (IOException e11) {
            e = e11;
            str = string;
        } catch (XmlPullParserException e12) {
            e = e12;
            str = string;
        }
        if (fontCallback != null) {
            fontCallback.callbackFailAsync(-3, handler);
        }
        return null;
    }
}

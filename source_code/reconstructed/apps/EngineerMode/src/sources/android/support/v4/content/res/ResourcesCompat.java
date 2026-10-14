package android.support.v4.content.res;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.support.v4.graphics.TypefaceCompat;
import android.support.v4.util.Preconditions;
import android.util.Log;
import android.util.TypedValue;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes2.dex */
public final class ResourcesCompat {
    private static final String TAG = "ResourcesCompat";

    public static abstract class FontCallback {
        public final void callbackFailAsync(final int i, Handler handler) {
            if (handler == null) {
                handler = new Handler(Looper.getMainLooper());
            }
            handler.post(new Runnable() { // from class: android.support.v4.content.res.ResourcesCompat.FontCallback.2
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
            handler.post(new Runnable() { // from class: android.support.v4.content.res.ResourcesCompat.FontCallback.1
                @Override // java.lang.Runnable
                public void run() {
                    FontCallback.this.onFontRetrieved(typeface);
                }
            });
        }

        public abstract void onFontRetrievalFailed(int i);

        public abstract void onFontRetrieved(Typeface typeface);
    }

    private ResourcesCompat() {
    }

    public static int getColor(Resources resources, int i, Resources.Theme theme) throws Resources.NotFoundException {
        return Build.VERSION.SDK_INT >= 23 ? resources.getColor(i, theme) : resources.getColor(i);
    }

    public static ColorStateList getColorStateList(Resources resources, int i, Resources.Theme theme) throws Resources.NotFoundException {
        return Build.VERSION.SDK_INT >= 23 ? resources.getColorStateList(i, theme) : resources.getColorStateList(i);
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

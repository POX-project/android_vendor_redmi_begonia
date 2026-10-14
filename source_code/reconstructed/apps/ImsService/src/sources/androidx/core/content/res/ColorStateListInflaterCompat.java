package androidx.core.content.res;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.util.AttributeSet;
import android.util.Log;
import android.util.StateSet;
import android.util.TypedValue;
import android.util.Xml;
import androidx.core.R;
import com.mediatek.ims.config.ImsConfigContract;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
public final class ColorStateListInflaterCompat {
    private static final ThreadLocal<TypedValue> sTempTypedValue = new ThreadLocal<>();

    private ColorStateListInflaterCompat() {
    }

    public static ColorStateList createFromXml(Resources resources, XmlPullParser xmlPullParser, Resources.Theme theme) throws XmlPullParserException, IOException {
        int next;
        AttributeSet attributeSetAsAttributeSet = Xml.asAttributeSet(xmlPullParser);
        do {
            next = xmlPullParser.next();
            if (next == 2) {
                break;
            }
        } while (next != 1);
        if (next == 2) {
            return createFromXmlInner(resources, xmlPullParser, attributeSetAsAttributeSet, theme);
        }
        throw new XmlPullParserException("No start tag found");
    }

    public static ColorStateList createFromXmlInner(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet, Resources.Theme theme) throws XmlPullParserException, IOException {
        String name = xmlPullParser.getName();
        if (name.equals("selector")) {
            return inflate(resources, xmlPullParser, attributeSet, theme);
        }
        throw new XmlPullParserException(xmlPullParser.getPositionDescription() + ": invalid color state list tag " + name);
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

    public static ColorStateList inflate(Resources resources, int i, Resources.Theme theme) {
        try {
            return createFromXml(resources, resources.getXml(i), theme);
        } catch (Exception e) {
            Log.e("CSLCompat", "Failed to inflate ColorStateList.", e);
            return null;
        }
    }

    private static ColorStateList inflate(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet, Resources.Theme theme) throws XmlPullParserException, IOException {
        int depth;
        int color;
        resources = resources;
        theme = theme;
        int i = 1;
        int depth2 = xmlPullParser.getDepth() + 1;
        int[][] iArr = new int[20][];
        int i2 = 0;
        int[] iArrAppend = new int[iArr.length];
        int[][] iArr2 = iArr;
        while (true) {
            int next = xmlPullParser.next();
            if (next == i || ((depth = xmlPullParser.getDepth()) < depth2 && next == 3)) {
                break;
            }
            if (next == 2 && depth <= depth2 && xmlPullParser.getName().equals(ImsConfigContract.EXTRA_CHANGED_ITEM)) {
                TypedArray typedArrayObtainAttributes = obtainAttributes(resources, theme, attributeSet, R.styleable.ColorStateListItem);
                int resourceId = typedArrayObtainAttributes.getResourceId(R.styleable.ColorStateListItem_android_color, -1);
                if (resourceId == -1 || isColorInt(resources, resourceId)) {
                    color = typedArrayObtainAttributes.getColor(R.styleable.ColorStateListItem_android_color, -65281);
                } else {
                    try {
                        color = createFromXml(resources, resources.getXml(resourceId), theme).getDefaultColor();
                    } catch (Exception e) {
                        color = typedArrayObtainAttributes.getColor(R.styleable.ColorStateListItem_android_color, -65281);
                    }
                }
                float f = 1.0f;
                if (typedArrayObtainAttributes.hasValue(R.styleable.ColorStateListItem_android_alpha)) {
                    f = typedArrayObtainAttributes.getFloat(R.styleable.ColorStateListItem_android_alpha, 1.0f);
                } else if (typedArrayObtainAttributes.hasValue(R.styleable.ColorStateListItem_alpha)) {
                    f = typedArrayObtainAttributes.getFloat(R.styleable.ColorStateListItem_alpha, 1.0f);
                }
                typedArrayObtainAttributes.recycle();
                int i3 = 0;
                int attributeCount = attributeSet.getAttributeCount();
                int[] iArr3 = new int[attributeCount];
                int i4 = 0;
                while (i4 < attributeCount) {
                    int attributeNameResource = attributeSet.getAttributeNameResource(i4);
                    int i5 = attributeCount;
                    if (attributeNameResource != 16843173 && attributeNameResource != 16843551 && attributeNameResource != R.attr.alpha) {
                        int i6 = i3 + 1;
                        iArr3[i3] = attributeSet.getAttributeBooleanValue(i4, false) ? attributeNameResource : -attributeNameResource;
                        i3 = i6;
                    }
                    i4++;
                    attributeCount = i5;
                }
                int[] iArrTrimStateSet = StateSet.trimStateSet(iArr3, i3);
                iArrAppend = GrowingArrayUtils.append(iArrAppend, i2, modulateColorAlpha(color, f));
                iArr2 = (int[][]) GrowingArrayUtils.append(iArr2, i2, iArrTrimStateSet);
                i2++;
                i = 1;
            } else {
                i = 1;
            }
        }
        int[] iArr4 = new int[i2];
        int[][] iArr5 = new int[i2][];
        System.arraycopy(iArrAppend, 0, iArr4, 0, i2);
        System.arraycopy(iArr2, 0, iArr5, 0, i2);
        return new ColorStateList(iArr5, iArr4);
    }

    private static boolean isColorInt(Resources resources, int i) {
        TypedValue typedValue = getTypedValue();
        resources.getValue(i, typedValue, true);
        return typedValue.type >= 28 && typedValue.type <= 31;
    }

    private static int modulateColorAlpha(int i, float f) {
        return (16777215 & i) | (Math.round(Color.alpha(i) * f) << 24);
    }

    private static TypedArray obtainAttributes(Resources resources, Resources.Theme theme, AttributeSet attributeSet, int[] iArr) {
        return theme == null ? resources.obtainAttributes(attributeSet, iArr) : theme.obtainStyledAttributes(attributeSet, iArr, 0, 0);
    }
}

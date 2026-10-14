package android.support.v7.content.res;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.support.v4.graphics.ColorUtils;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.util.StateSet;
import android.util.Xml;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
final class AppCompatColorStateListInflater {
    private static final int DEFAULT_COLOR = -65536;

    private AppCompatColorStateListInflater() {
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

    private static ColorStateList createFromXmlInner(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet, Resources.Theme theme) throws XmlPullParserException, IOException {
        String name = xmlPullParser.getName();
        if (name.equals("selector")) {
            return inflate(resources, xmlPullParser, attributeSet, theme);
        }
        throw new XmlPullParserException(xmlPullParser.getPositionDescription() + ": invalid color state list tag " + name);
    }

    private static ColorStateList inflate(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet, Resources.Theme theme) throws XmlPullParserException, IOException {
        int depth;
        int i = 1;
        int depth2 = xmlPullParser.getDepth() + 1;
        int i2 = -65536;
        int[][] iArr = new int[20][];
        int[] iArrAppend = new int[iArr.length];
        int i3 = 0;
        while (true) {
            int next = xmlPullParser.next();
            if (next == i || ((depth = xmlPullParser.getDepth()) < depth2 && next == 3)) {
                break;
                break;
            }
            if (next == 2 && depth <= depth2 && xmlPullParser.getName().equals("item")) {
                TypedArray typedArrayObtainAttributes = obtainAttributes(resources, theme, attributeSet, R.styleable.ColorStateListItem);
                int color = typedArrayObtainAttributes.getColor(R.styleable.ColorStateListItem_android_color, -65281);
                float f = 1.0f;
                if (typedArrayObtainAttributes.hasValue(R.styleable.ColorStateListItem_android_alpha)) {
                    f = typedArrayObtainAttributes.getFloat(R.styleable.ColorStateListItem_android_alpha, 1.0f);
                } else if (typedArrayObtainAttributes.hasValue(R.styleable.ColorStateListItem_alpha)) {
                    f = typedArrayObtainAttributes.getFloat(R.styleable.ColorStateListItem_alpha, 1.0f);
                }
                typedArrayObtainAttributes.recycle();
                int i4 = 0;
                int attributeCount = attributeSet.getAttributeCount();
                int[] iArr2 = new int[attributeCount];
                int i5 = depth2;
                int i6 = 0;
                while (i6 < attributeCount) {
                    int i7 = attributeCount;
                    int attributeNameResource = attributeSet.getAttributeNameResource(i6);
                    int i8 = i2;
                    if (attributeNameResource != 16843173 && attributeNameResource != 16843551 && attributeNameResource != R.attr.alpha) {
                        int i9 = i4 + 1;
                        iArr2[i4] = attributeSet.getAttributeBooleanValue(i6, false) ? attributeNameResource : -attributeNameResource;
                        i4 = i9;
                    }
                    i6++;
                    attributeCount = i7;
                    i2 = i8;
                }
                int i10 = i2;
                int[] iArrTrimStateSet = StateSet.trimStateSet(iArr2, i4);
                int iModulateColorAlpha = modulateColorAlpha(color, f);
                i2 = (i3 == 0 || iArrTrimStateSet.length == 0) ? iModulateColorAlpha : i10;
                iArrAppend = GrowingArrayUtils.append(iArrAppend, i3, iModulateColorAlpha);
                iArr = (int[][]) GrowingArrayUtils.append(iArr, i3, iArrTrimStateSet);
                i3++;
                depth2 = i5;
                i = 1;
            } else {
                depth2 = depth2;
                i2 = i2;
                i = 1;
            }
        }
        int[] iArr3 = new int[i3];
        int[][] iArr4 = new int[i3][];
        System.arraycopy(iArrAppend, 0, iArr3, 0, i3);
        System.arraycopy(iArr, 0, iArr4, 0, i3);
        return new ColorStateList(iArr4, iArr3);
    }

    private static int modulateColorAlpha(int i, float f) {
        return ColorUtils.setAlphaComponent(i, Math.round(Color.alpha(i) * f));
    }

    private static TypedArray obtainAttributes(Resources resources, Resources.Theme theme, AttributeSet attributeSet, int[] iArr) {
        return theme == null ? resources.obtainAttributes(attributeSet, iArr) : theme.obtainStyledAttributes(attributeSet, iArr, 0, 0);
    }
}

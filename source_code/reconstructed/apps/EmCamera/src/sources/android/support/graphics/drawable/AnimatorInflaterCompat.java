package android.support.graphics.drawable;

import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.animation.AnimatorSet;
import android.animation.Keyframe;
import android.animation.ObjectAnimator;
import android.animation.PropertyValuesHolder;
import android.animation.TypeEvaluator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.os.Build;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v4.graphics.PathParser;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.util.Xml;
import android.view.InflateException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
public class AnimatorInflaterCompat {
    private static final boolean DBG_ANIMATOR_INFLATER = false;
    private static final int MAX_NUM_POINTS = 100;
    private static final String TAG = "AnimatorInflater";
    private static final int TOGETHER = 0;
    private static final int VALUE_TYPE_COLOR = 3;
    private static final int VALUE_TYPE_FLOAT = 0;
    private static final int VALUE_TYPE_INT = 1;
    private static final int VALUE_TYPE_PATH = 2;
    private static final int VALUE_TYPE_UNDEFINED = 4;

    private static class PathDataEvaluator implements TypeEvaluator<PathParser.PathDataNode[]> {
        private PathParser.PathDataNode[] mNodeArray;

        private PathDataEvaluator() {
        }

        PathDataEvaluator(PathParser.PathDataNode[] pathDataNodeArr) {
            this.mNodeArray = pathDataNodeArr;
        }

        @Override // android.animation.TypeEvaluator
        public PathParser.PathDataNode[] evaluate(float f, PathParser.PathDataNode[] pathDataNodeArr, PathParser.PathDataNode[] pathDataNodeArr2) {
            if (!PathParser.canMorph(pathDataNodeArr, pathDataNodeArr2)) {
                throw new IllegalArgumentException("Can't interpolate between two incompatible pathData");
            }
            PathParser.PathDataNode[] pathDataNodeArr3 = this.mNodeArray;
            if (pathDataNodeArr3 == null || !PathParser.canMorph(pathDataNodeArr3, pathDataNodeArr)) {
                this.mNodeArray = PathParser.deepCopyNodes(pathDataNodeArr);
            }
            for (int i = 0; i < pathDataNodeArr.length; i++) {
                this.mNodeArray[i].interpolatePathDataNode(pathDataNodeArr[i], pathDataNodeArr2[i], f);
            }
            return this.mNodeArray;
        }
    }

    private AnimatorInflaterCompat() {
    }

    private static Animator createAnimatorFromXml(Context context, Resources resources, Resources.Theme theme, XmlPullParser xmlPullParser, float f) throws XmlPullParserException, IOException {
        return createAnimatorFromXml(context, resources, theme, xmlPullParser, Xml.asAttributeSet(xmlPullParser), null, 0, f);
    }

    private static Animator createAnimatorFromXml(Context context, Resources resources, Resources.Theme theme, XmlPullParser xmlPullParser, AttributeSet attributeSet, AnimatorSet animatorSet, int i, float f) throws XmlPullParserException, IOException {
        int depth = xmlPullParser.getDepth();
        Animator animatorLoadAnimator = null;
        ArrayList arrayList = null;
        while (true) {
            int next = xmlPullParser.next();
            if ((next == 3 && xmlPullParser.getDepth() <= depth) || next == 1) {
                break;
                break;
            }
            if (next == 2) {
                String name = xmlPullParser.getName();
                boolean z = DBG_ANIMATOR_INFLATER;
                if (name.equals("objectAnimator")) {
                    animatorLoadAnimator = loadObjectAnimator(context, resources, theme, attributeSet, f, xmlPullParser);
                } else if (name.equals("animator")) {
                    animatorLoadAnimator = loadAnimator(context, resources, theme, attributeSet, null, f, xmlPullParser);
                } else if (name.equals("set")) {
                    AnimatorSet animatorSet2 = new AnimatorSet();
                    TypedArray typedArrayObtainAttributes = TypedArrayUtils.obtainAttributes(resources, theme, attributeSet, AndroidResources.STYLEABLE_ANIMATOR_SET);
                    createAnimatorFromXml(context, resources, theme, xmlPullParser, attributeSet, animatorSet2, TypedArrayUtils.getNamedInt(typedArrayObtainAttributes, xmlPullParser, "ordering", 0, 0), f);
                    typedArrayObtainAttributes.recycle();
                    animatorLoadAnimator = animatorSet2;
                } else {
                    if (!name.equals("propertyValuesHolder")) {
                        throw new RuntimeException("Unknown animator name: " + xmlPullParser.getName());
                    }
                    PropertyValuesHolder[] propertyValuesHolderArrLoadValues = loadValues(context, resources, theme, xmlPullParser, Xml.asAttributeSet(xmlPullParser));
                    if (propertyValuesHolderArrLoadValues != null && animatorLoadAnimator != null && (animatorLoadAnimator instanceof ValueAnimator)) {
                        ((ValueAnimator) animatorLoadAnimator).setValues(propertyValuesHolderArrLoadValues);
                    }
                    z = true;
                }
                if (animatorSet != null && !z) {
                    if (arrayList == null) {
                        arrayList = new ArrayList();
                    }
                    arrayList.add(animatorLoadAnimator);
                }
            }
        }
        if (animatorSet != null && arrayList != null) {
            Animator[] animatorArr = new Animator[arrayList.size()];
            int i2 = 0;
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                animatorArr[i2] = (Animator) it.next();
                i2++;
            }
            if (i == 0) {
                animatorSet.playTogether(animatorArr);
            } else {
                animatorSet.playSequentially(animatorArr);
            }
        }
        return animatorLoadAnimator;
    }

    private static Keyframe createNewKeyframe(Keyframe keyframe, float f) {
        if (keyframe.getType() == Float.TYPE) {
            return Keyframe.ofFloat(f);
        }
        return keyframe.getType() == Integer.TYPE ? Keyframe.ofInt(f) : Keyframe.ofObject(f);
    }

    private static void distributeKeyframes(Keyframe[] keyframeArr, float f, int i, int i2) {
        float f2 = f / ((i2 - i) + 2);
        for (int i3 = i; i3 <= i2; i3++) {
            keyframeArr[i3].setFraction(keyframeArr[i3 - 1].getFraction() + f2);
        }
    }

    private static void dumpKeyframes(Object[] objArr, String str) {
        if (objArr == null || objArr.length == 0) {
            return;
        }
        Log.d(TAG, str);
        int length = objArr.length;
        for (int i = 0; i < length; i++) {
            Keyframe keyframe = (Keyframe) objArr[i];
            StringBuilder sb = new StringBuilder();
            sb.append("Keyframe ");
            sb.append(i);
            sb.append(": fraction ");
            Object value = "null";
            sb.append(keyframe.getFraction() < 0.0f ? "null" : Float.valueOf(keyframe.getFraction()));
            sb.append(", ");
            sb.append(", value : ");
            if (keyframe.hasValue()) {
                value = keyframe.getValue();
            }
            sb.append(value);
            Log.d(TAG, sb.toString());
        }
    }

    private static PropertyValuesHolder getPVH(TypedArray typedArray, int i, int i2, int i3, String str) {
        int i4;
        PropertyValuesHolder propertyValuesHolderOfInt;
        char c;
        int color;
        int color2;
        char c2;
        int color3;
        int i5;
        TypedValue typedValuePeekValue = typedArray.peekValue(i2);
        boolean z = typedValuePeekValue != null ? true : DBG_ANIMATOR_INFLATER;
        int i6 = z ? typedValuePeekValue.type : 0;
        TypedValue typedValuePeekValue2 = typedArray.peekValue(i3);
        boolean z2 = typedValuePeekValue2 != null ? true : DBG_ANIMATOR_INFLATER;
        int i7 = z2 ? typedValuePeekValue2.type : 0;
        if (i == 4) {
            i4 = ((z && isColorType(i6)) || (z2 && isColorType(i7))) ? 3 : 0;
        } else {
            i4 = i;
        }
        boolean z3 = i4 == 0 ? true : DBG_ANIMATOR_INFLATER;
        if (i4 == 2) {
            String string = typedArray.getString(i2);
            String string2 = typedArray.getString(i3);
            PathParser.PathDataNode[] pathDataNodeArrCreateNodesFromPathData = PathParser.createNodesFromPathData(string);
            PathParser.PathDataNode[] pathDataNodeArrCreateNodesFromPathData2 = PathParser.createNodesFromPathData(string2);
            if (pathDataNodeArrCreateNodesFromPathData == null && pathDataNodeArrCreateNodesFromPathData2 == null) {
                i5 = i7;
            } else {
                if (pathDataNodeArrCreateNodesFromPathData != null) {
                    PathDataEvaluator pathDataEvaluator = new PathDataEvaluator();
                    if (pathDataNodeArrCreateNodesFromPathData2 == null) {
                        i5 = i7;
                        propertyValuesHolderOfInt = PropertyValuesHolder.ofObject(str, pathDataEvaluator, pathDataNodeArrCreateNodesFromPathData);
                    } else {
                        if (!PathParser.canMorph(pathDataNodeArrCreateNodesFromPathData, pathDataNodeArrCreateNodesFromPathData2)) {
                            throw new InflateException(" Can't morph from " + string + " to " + string2);
                        }
                        propertyValuesHolderOfInt = PropertyValuesHolder.ofObject(str, pathDataEvaluator, pathDataNodeArrCreateNodesFromPathData, pathDataNodeArrCreateNodesFromPathData2);
                        i5 = i7;
                    }
                } else {
                    i5 = i7;
                    if (pathDataNodeArrCreateNodesFromPathData2 != null) {
                        propertyValuesHolderOfInt = PropertyValuesHolder.ofObject(str, new PathDataEvaluator(), pathDataNodeArrCreateNodesFromPathData2);
                    }
                }
            }
            propertyValuesHolderOfInt = null;
        } else {
            int i8 = i7;
            ArgbEvaluator argbEvaluator = i4 == 3 ? ArgbEvaluator.getInstance() : null;
            if (z3) {
                if (z) {
                    float dimension = i6 == 5 ? typedArray.getDimension(i2, 0.0f) : typedArray.getFloat(i2, 0.0f);
                    if (z2) {
                        propertyValuesHolderOfInt = PropertyValuesHolder.ofFloat(str, dimension, i8 == 5 ? typedArray.getDimension(i3, 0.0f) : typedArray.getFloat(i3, 0.0f));
                    } else {
                        propertyValuesHolderOfInt = PropertyValuesHolder.ofFloat(str, dimension);
                    }
                } else {
                    propertyValuesHolderOfInt = PropertyValuesHolder.ofFloat(str, i8 == 5 ? typedArray.getDimension(i3, 0.0f) : typedArray.getFloat(i3, 0.0f));
                }
            } else if (z) {
                if (i6 == 5) {
                    color2 = (int) typedArray.getDimension(i2, 0.0f);
                } else {
                    color2 = isColorType(i6) ? typedArray.getColor(i2, 0) : typedArray.getInt(i2, 0);
                }
                if (z2) {
                    if (i8 == 5) {
                        color3 = (int) typedArray.getDimension(i3, 0.0f);
                        c2 = 0;
                    } else if (isColorType(i8)) {
                        c2 = 0;
                        color3 = typedArray.getColor(i3, 0);
                    } else {
                        c2 = 0;
                        color3 = typedArray.getInt(i3, 0);
                    }
                    int[] iArr = new int[2];
                    iArr[c2] = color2;
                    iArr[1] = color3;
                    propertyValuesHolderOfInt = PropertyValuesHolder.ofInt(str, iArr);
                } else {
                    propertyValuesHolderOfInt = PropertyValuesHolder.ofInt(str, color2);
                }
            } else if (z2) {
                if (i8 == 5) {
                    color = (int) typedArray.getDimension(i3, 0.0f);
                    c = 0;
                } else if (isColorType(i8)) {
                    c = 0;
                    color = typedArray.getColor(i3, 0);
                } else {
                    c = 0;
                    color = typedArray.getInt(i3, 0);
                }
                int[] iArr2 = new int[1];
                iArr2[c] = color;
                propertyValuesHolderOfInt = PropertyValuesHolder.ofInt(str, iArr2);
            } else {
                propertyValuesHolderOfInt = null;
            }
            if (propertyValuesHolderOfInt != null && argbEvaluator != null) {
                propertyValuesHolderOfInt.setEvaluator(argbEvaluator);
            }
        }
        return propertyValuesHolderOfInt;
    }

    private static int inferValueTypeFromValues(TypedArray typedArray, int i, int i2) {
        TypedValue typedValuePeekValue = typedArray.peekValue(i);
        boolean z = typedValuePeekValue != null;
        int i3 = z ? typedValuePeekValue.type : 0;
        TypedValue typedValuePeekValue2 = typedArray.peekValue(i2);
        boolean z2 = typedValuePeekValue2 != null;
        return ((z && isColorType(i3)) || (z2 && isColorType(z2 ? typedValuePeekValue2.type : 0))) ? 3 : 0;
    }

    private static int inferValueTypeOfKeyframe(Resources resources, Resources.Theme theme, AttributeSet attributeSet, XmlPullParser xmlPullParser) {
        TypedArray typedArrayObtainAttributes = TypedArrayUtils.obtainAttributes(resources, theme, attributeSet, AndroidResources.STYLEABLE_KEYFRAME);
        boolean z = DBG_ANIMATOR_INFLATER;
        TypedValue typedValuePeekNamedValue = TypedArrayUtils.peekNamedValue(typedArrayObtainAttributes, xmlPullParser, "value", 0);
        if (typedValuePeekNamedValue != null) {
            z = true;
        }
        int i = (z && isColorType(typedValuePeekNamedValue.type)) ? 3 : 0;
        typedArrayObtainAttributes.recycle();
        return i;
    }

    private static boolean isColorType(int i) {
        if (i < 28 || i > 31) {
            return DBG_ANIMATOR_INFLATER;
        }
        return true;
    }

    public static Animator loadAnimator(Context context, int i) throws Resources.NotFoundException {
        return Build.VERSION.SDK_INT >= 24 ? AnimatorInflater.loadAnimator(context, i) : loadAnimator(context, context.getResources(), context.getTheme(), i);
    }

    public static Animator loadAnimator(Context context, Resources resources, Resources.Theme theme, int i) throws Resources.NotFoundException {
        return loadAnimator(context, resources, theme, i, 1.0f);
    }

    public static Animator loadAnimator(Context context, Resources resources, Resources.Theme theme, int i, float f) throws Resources.NotFoundException {
        XmlResourceParser animation = null;
        try {
            try {
                try {
                    animation = resources.getAnimation(i);
                    Animator animatorCreateAnimatorFromXml = createAnimatorFromXml(context, resources, theme, animation, f);
                    if (animation != null) {
                        animation.close();
                    }
                    return animatorCreateAnimatorFromXml;
                } catch (IOException e) {
                    Resources.NotFoundException notFoundException = new Resources.NotFoundException("Can't load animation resource ID #0x" + Integer.toHexString(i));
                    notFoundException.initCause(e);
                    throw notFoundException;
                }
            } catch (XmlPullParserException e2) {
                Resources.NotFoundException notFoundException2 = new Resources.NotFoundException("Can't load animation resource ID #0x" + Integer.toHexString(i));
                notFoundException2.initCause(e2);
                throw notFoundException2;
            }
        } catch (Throwable th) {
            if (animation != null) {
                animation.close();
            }
            throw th;
        }
    }

    private static ValueAnimator loadAnimator(Context context, Resources resources, Resources.Theme theme, AttributeSet attributeSet, ValueAnimator valueAnimator, float f, XmlPullParser xmlPullParser) throws Resources.NotFoundException {
        TypedArray typedArrayObtainAttributes = TypedArrayUtils.obtainAttributes(resources, theme, attributeSet, AndroidResources.STYLEABLE_ANIMATOR);
        TypedArray typedArrayObtainAttributes2 = TypedArrayUtils.obtainAttributes(resources, theme, attributeSet, AndroidResources.STYLEABLE_PROPERTY_ANIMATOR);
        if (valueAnimator == null) {
            valueAnimator = new ValueAnimator();
        }
        parseAnimatorFromTypeArray(valueAnimator, typedArrayObtainAttributes, typedArrayObtainAttributes2, f, xmlPullParser);
        int namedResourceId = TypedArrayUtils.getNamedResourceId(typedArrayObtainAttributes, xmlPullParser, "interpolator", 0, 0);
        if (namedResourceId > 0) {
            valueAnimator.setInterpolator(AnimationUtilsCompat.loadInterpolator(context, namedResourceId));
        }
        typedArrayObtainAttributes.recycle();
        if (typedArrayObtainAttributes2 != null) {
            typedArrayObtainAttributes2.recycle();
        }
        return valueAnimator;
    }

    private static Keyframe loadKeyframe(Context context, Resources resources, Resources.Theme theme, AttributeSet attributeSet, int i, XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        TypedArray typedArrayObtainAttributes = TypedArrayUtils.obtainAttributes(resources, theme, attributeSet, AndroidResources.STYLEABLE_KEYFRAME);
        Keyframe keyframeOfFloat = null;
        float namedFloat = TypedArrayUtils.getNamedFloat(typedArrayObtainAttributes, xmlPullParser, "fraction", 3, -1.0f);
        TypedValue typedValuePeekNamedValue = TypedArrayUtils.peekNamedValue(typedArrayObtainAttributes, xmlPullParser, "value", 0);
        boolean z = typedValuePeekNamedValue != null;
        if (i == 4) {
            i = (z && isColorType(typedValuePeekNamedValue.type)) ? 3 : 0;
        }
        if (!z) {
            keyframeOfFloat = i == 0 ? Keyframe.ofFloat(namedFloat) : Keyframe.ofInt(namedFloat);
        } else if (i == 0) {
            keyframeOfFloat = Keyframe.ofFloat(namedFloat, TypedArrayUtils.getNamedFloat(typedArrayObtainAttributes, xmlPullParser, "value", 0, 0.0f));
        } else if (i == 1 || i == 3) {
            keyframeOfFloat = Keyframe.ofInt(namedFloat, TypedArrayUtils.getNamedInt(typedArrayObtainAttributes, xmlPullParser, "value", 0, 0));
        }
        int namedResourceId = TypedArrayUtils.getNamedResourceId(typedArrayObtainAttributes, xmlPullParser, "interpolator", 1, 0);
        if (namedResourceId > 0) {
            keyframeOfFloat.setInterpolator(AnimationUtilsCompat.loadInterpolator(context, namedResourceId));
        }
        typedArrayObtainAttributes.recycle();
        return keyframeOfFloat;
    }

    private static ObjectAnimator loadObjectAnimator(Context context, Resources resources, Resources.Theme theme, AttributeSet attributeSet, float f, XmlPullParser xmlPullParser) throws Resources.NotFoundException {
        ObjectAnimator objectAnimator = new ObjectAnimator();
        loadAnimator(context, resources, theme, attributeSet, objectAnimator, f, xmlPullParser);
        return objectAnimator;
    }

    private static PropertyValuesHolder loadPvh(Context context, Resources resources, Resources.Theme theme, XmlPullParser xmlPullParser, String str, int i) throws XmlPullParserException, IOException {
        int i2;
        int i3;
        float f;
        Object obj = null;
        ArrayList arrayList = null;
        int iInferValueTypeOfKeyframe = i;
        while (true) {
            int next = xmlPullParser.next();
            i2 = next;
            if (next == 3 || i2 == 1) {
                break;
            }
            if (xmlPullParser.getName().equals("keyframe")) {
                if (iInferValueTypeOfKeyframe == 4) {
                    iInferValueTypeOfKeyframe = inferValueTypeOfKeyframe(resources, theme, Xml.asAttributeSet(xmlPullParser), xmlPullParser);
                }
                Keyframe keyframeLoadKeyframe = loadKeyframe(context, resources, theme, Xml.asAttributeSet(xmlPullParser), iInferValueTypeOfKeyframe, xmlPullParser);
                if (keyframeLoadKeyframe != null) {
                    if (arrayList == null) {
                        arrayList = new ArrayList();
                    }
                    arrayList.add(keyframeLoadKeyframe);
                }
                xmlPullParser.next();
            }
        }
        if (arrayList != null) {
            int size = arrayList.size();
            int i4 = size;
            if (size > 0) {
                Keyframe keyframe = (Keyframe) arrayList.get(0);
                Keyframe keyframe2 = (Keyframe) arrayList.get(i4 - 1);
                float fraction = keyframe2.getFraction();
                float f2 = 0.0f;
                if (fraction < 1.0f) {
                    if (fraction < 0.0f) {
                        keyframe2.setFraction(1.0f);
                    } else {
                        arrayList.add(arrayList.size(), createNewKeyframe(keyframe2, 1.0f));
                        i4++;
                    }
                }
                float fraction2 = keyframe.getFraction();
                if (fraction2 != 0.0f) {
                    if (fraction2 < 0.0f) {
                        keyframe.setFraction(0.0f);
                    } else {
                        arrayList.add(0, createNewKeyframe(keyframe, 0.0f));
                        i4++;
                    }
                }
                Keyframe[] keyframeArr = new Keyframe[i4];
                arrayList.toArray(keyframeArr);
                int i5 = 0;
                while (i5 < i4) {
                    Keyframe keyframe3 = keyframeArr[i5];
                    if (keyframe3.getFraction() >= f2) {
                        i3 = i2;
                        f = f2;
                    } else if (i5 == 0) {
                        keyframe3.setFraction(f2);
                        i3 = i2;
                        f = f2;
                    } else if (i5 == i4 - 1) {
                        keyframe3.setFraction(1.0f);
                        i3 = i2;
                        f = 0.0f;
                    } else {
                        int i6 = i5;
                        int i7 = i6 + 1;
                        int i8 = i5;
                        while (true) {
                            i3 = i2;
                            if (i7 >= i4 - 1) {
                                f = 0.0f;
                                break;
                            }
                            f = 0.0f;
                            if (keyframeArr[i7].getFraction() >= 0.0f) {
                                break;
                            }
                            i8 = i7;
                            i7++;
                            i2 = i3;
                        }
                        distributeKeyframes(keyframeArr, keyframeArr[i8 + 1].getFraction() - keyframeArr[i6 - 1].getFraction(), i6, i8);
                    }
                    i5++;
                    arrayList = arrayList;
                    f2 = f;
                    i2 = i3;
                    obj = obj;
                }
                PropertyValuesHolder propertyValuesHolderOfKeyframe = PropertyValuesHolder.ofKeyframe(str, keyframeArr);
                if (iInferValueTypeOfKeyframe != 3) {
                    return propertyValuesHolderOfKeyframe;
                }
                propertyValuesHolderOfKeyframe.setEvaluator(ArgbEvaluator.getInstance());
                return propertyValuesHolderOfKeyframe;
            }
        }
        return null;
    }

    private static PropertyValuesHolder[] loadValues(Context context, Resources resources, Resources.Theme theme, XmlPullParser xmlPullParser, AttributeSet attributeSet) throws XmlPullParserException, IOException {
        ArrayList arrayList = null;
        while (true) {
            int eventType = xmlPullParser.getEventType();
            if (eventType == 3 || eventType == 1) {
                break;
            }
            if (eventType != 2) {
                xmlPullParser.next();
            } else {
                if (xmlPullParser.getName().equals("propertyValuesHolder")) {
                    TypedArray typedArrayObtainAttributes = TypedArrayUtils.obtainAttributes(resources, theme, attributeSet, AndroidResources.STYLEABLE_PROPERTY_VALUES_HOLDER);
                    String namedString = TypedArrayUtils.getNamedString(typedArrayObtainAttributes, xmlPullParser, "propertyName", 3);
                    int namedInt = TypedArrayUtils.getNamedInt(typedArrayObtainAttributes, xmlPullParser, "valueType", 2, 4);
                    PropertyValuesHolder propertyValuesHolderLoadPvh = loadPvh(context, resources, theme, xmlPullParser, namedString, namedInt);
                    if (propertyValuesHolderLoadPvh == null) {
                        propertyValuesHolderLoadPvh = getPVH(typedArrayObtainAttributes, namedInt, 0, 1, namedString);
                    }
                    if (propertyValuesHolderLoadPvh != null) {
                        if (arrayList == null) {
                            arrayList = new ArrayList();
                        }
                        arrayList.add(propertyValuesHolderLoadPvh);
                    }
                    typedArrayObtainAttributes.recycle();
                }
                xmlPullParser.next();
            }
        }
        PropertyValuesHolder[] propertyValuesHolderArr = null;
        if (arrayList != null) {
            int size = arrayList.size();
            propertyValuesHolderArr = new PropertyValuesHolder[size];
            for (int i = 0; i < size; i++) {
                propertyValuesHolderArr[i] = (PropertyValuesHolder) arrayList.get(i);
            }
        }
        return propertyValuesHolderArr;
    }

    private static void parseAnimatorFromTypeArray(ValueAnimator valueAnimator, TypedArray typedArray, TypedArray typedArray2, float f, XmlPullParser xmlPullParser) {
        long namedInt = TypedArrayUtils.getNamedInt(typedArray, xmlPullParser, "duration", 1, 300);
        long namedInt2 = TypedArrayUtils.getNamedInt(typedArray, xmlPullParser, "startOffset", 2, 0);
        int namedInt3 = TypedArrayUtils.getNamedInt(typedArray, xmlPullParser, "valueType", 7, 4);
        if (TypedArrayUtils.hasAttribute(xmlPullParser, "valueFrom") && TypedArrayUtils.hasAttribute(xmlPullParser, "valueTo")) {
            if (namedInt3 == 4) {
                namedInt3 = inferValueTypeFromValues(typedArray, 5, 6);
            }
            PropertyValuesHolder pvh = getPVH(typedArray, namedInt3, 5, 6, "");
            if (pvh != null) {
                valueAnimator.setValues(pvh);
            }
        }
        valueAnimator.setDuration(namedInt);
        valueAnimator.setStartDelay(namedInt2);
        valueAnimator.setRepeatCount(TypedArrayUtils.getNamedInt(typedArray, xmlPullParser, "repeatCount", 3, 0));
        valueAnimator.setRepeatMode(TypedArrayUtils.getNamedInt(typedArray, xmlPullParser, "repeatMode", 4, 1));
        if (typedArray2 != null) {
            setupObjectAnimator(valueAnimator, typedArray2, namedInt3, f, xmlPullParser);
        }
    }

    private static void setupObjectAnimator(ValueAnimator valueAnimator, TypedArray typedArray, int i, float f, XmlPullParser xmlPullParser) {
        ObjectAnimator objectAnimator = (ObjectAnimator) valueAnimator;
        String namedString = TypedArrayUtils.getNamedString(typedArray, xmlPullParser, "pathData", 1);
        if (namedString == null) {
            objectAnimator.setPropertyName(TypedArrayUtils.getNamedString(typedArray, xmlPullParser, "propertyName", 0));
            return;
        }
        String namedString2 = TypedArrayUtils.getNamedString(typedArray, xmlPullParser, "propertyXName", 2);
        String namedString3 = TypedArrayUtils.getNamedString(typedArray, xmlPullParser, "propertyYName", 3);
        if (i == 2 || i == 4) {
        }
        if (namedString2 != null || namedString3 != null) {
            setupPathMotion(PathParser.createPathFromPathData(namedString), objectAnimator, 0.5f * f, namedString2, namedString3);
            return;
        }
        throw new InflateException(typedArray.getPositionDescription() + " propertyXName or propertyYName is needed for PathData");
    }

    private static void setupPathMotion(Path path, ObjectAnimator objectAnimator, float f, String str, String str2) {
        Path path2 = path;
        PathMeasure pathMeasure = new PathMeasure(path2, DBG_ANIMATOR_INFLATER);
        float length = 0.0f;
        ArrayList arrayList = new ArrayList();
        arrayList.add(Float.valueOf(0.0f));
        while (true) {
            length += pathMeasure.getLength();
            arrayList.add(Float.valueOf(length));
            if (!pathMeasure.nextContour()) {
                break;
            } else {
                path2 = path;
            }
        }
        PathMeasure pathMeasure2 = new PathMeasure(path2, DBG_ANIMATOR_INFLATER);
        int iMin = Math.min(100, ((int) (length / f)) + 1);
        float[] fArr = new float[iMin];
        float[] fArr2 = new float[iMin];
        float[] fArr3 = new float[2];
        int i = 0;
        float f2 = length / (iMin - 1);
        float f3 = 0.0f;
        for (int i2 = 0; i2 < iMin; i2++) {
            pathMeasure2.getPosTan(f3 - ((Float) arrayList.get(i)).floatValue(), fArr3, null);
            fArr[i2] = fArr3[0];
            fArr2[i2] = fArr3[1];
            f3 += f2;
            if (i + 1 < arrayList.size() && f3 > ((Float) arrayList.get(i + 1)).floatValue()) {
                i++;
                pathMeasure2.nextContour();
            }
        }
        PropertyValuesHolder propertyValuesHolderOfFloat = str != null ? PropertyValuesHolder.ofFloat(str, fArr) : null;
        PropertyValuesHolder propertyValuesHolderOfFloat2 = str2 != null ? PropertyValuesHolder.ofFloat(str2, fArr2) : null;
        if (propertyValuesHolderOfFloat == null) {
            objectAnimator.setValues(propertyValuesHolderOfFloat2);
        } else if (propertyValuesHolderOfFloat2 == null) {
            objectAnimator.setValues(propertyValuesHolderOfFloat);
        } else {
            objectAnimator.setValues(propertyValuesHolderOfFloat, propertyValuesHolderOfFloat2);
        }
    }
}

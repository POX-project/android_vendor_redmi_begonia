package android.support.v7.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.InputDeviceCompat;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes.dex */
public class LinearLayoutCompat extends ViewGroup {
    public static final int HORIZONTAL = 0;
    private static final int INDEX_BOTTOM = 2;
    private static final int INDEX_CENTER_VERTICAL = 0;
    private static final int INDEX_FILL = 3;
    private static final int INDEX_TOP = 1;
    public static final int SHOW_DIVIDER_BEGINNING = 1;
    public static final int SHOW_DIVIDER_END = 4;
    public static final int SHOW_DIVIDER_MIDDLE = 2;
    public static final int SHOW_DIVIDER_NONE = 0;
    public static final int VERTICAL = 1;
    private static final int VERTICAL_GRAVITY_COUNT = 4;
    private boolean mBaselineAligned;
    private int mBaselineAlignedChildIndex;
    private int mBaselineChildTop;
    private Drawable mDivider;
    private int mDividerHeight;
    private int mDividerPadding;
    private int mDividerWidth;
    private int mGravity;
    private int[] mMaxAscent;
    private int[] mMaxDescent;
    private int mOrientation;
    private int mShowDividers;
    private int mTotalLength;
    private boolean mUseLargestChild;
    private float mWeightSum;

    @Retention(RetentionPolicy.SOURCE)
    public @interface DividerMode {
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        public int gravity;
        public float weight;

        public LayoutParams(int i, int i2) {
            super(i, i2);
            this.gravity = -1;
            this.weight = 0.0f;
        }

        public LayoutParams(int i, int i2, float f) {
            super(i, i2);
            this.gravity = -1;
            this.weight = f;
        }

        public LayoutParams(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
            this.gravity = -1;
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.LinearLayoutCompat_Layout);
            this.weight = typedArrayObtainStyledAttributes.getFloat(R.styleable.LinearLayoutCompat_Layout_android_layout_weight, 0.0f);
            this.gravity = typedArrayObtainStyledAttributes.getInt(R.styleable.LinearLayoutCompat_Layout_android_layout_gravity, -1);
            typedArrayObtainStyledAttributes.recycle();
        }

        public LayoutParams(LayoutParams layoutParams) {
            super((ViewGroup.MarginLayoutParams) layoutParams);
            this.gravity = -1;
            this.weight = layoutParams.weight;
            this.gravity = layoutParams.gravity;
        }

        public LayoutParams(ViewGroup.LayoutParams layoutParams) {
            super(layoutParams);
            this.gravity = -1;
        }

        public LayoutParams(ViewGroup.MarginLayoutParams marginLayoutParams) {
            super(marginLayoutParams);
            this.gravity = -1;
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface OrientationMode {
    }

    public LinearLayoutCompat(Context context) {
        this(context, null);
    }

    public LinearLayoutCompat(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public LinearLayoutCompat(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mBaselineAligned = true;
        this.mBaselineAlignedChildIndex = -1;
        this.mBaselineChildTop = 0;
        this.mGravity = 8388659;
        TintTypedArray tintTypedArrayObtainStyledAttributes = TintTypedArray.obtainStyledAttributes(context, attributeSet, R.styleable.LinearLayoutCompat, i, 0);
        int i2 = tintTypedArrayObtainStyledAttributes.getInt(R.styleable.LinearLayoutCompat_android_orientation, -1);
        if (i2 >= 0) {
            setOrientation(i2);
        }
        int i3 = tintTypedArrayObtainStyledAttributes.getInt(R.styleable.LinearLayoutCompat_android_gravity, -1);
        if (i3 >= 0) {
            setGravity(i3);
        }
        boolean z = tintTypedArrayObtainStyledAttributes.getBoolean(R.styleable.LinearLayoutCompat_android_baselineAligned, true);
        if (!z) {
            setBaselineAligned(z);
        }
        this.mWeightSum = tintTypedArrayObtainStyledAttributes.getFloat(R.styleable.LinearLayoutCompat_android_weightSum, -1.0f);
        this.mBaselineAlignedChildIndex = tintTypedArrayObtainStyledAttributes.getInt(R.styleable.LinearLayoutCompat_android_baselineAlignedChildIndex, -1);
        this.mUseLargestChild = tintTypedArrayObtainStyledAttributes.getBoolean(R.styleable.LinearLayoutCompat_measureWithLargestChild, false);
        setDividerDrawable(tintTypedArrayObtainStyledAttributes.getDrawable(R.styleable.LinearLayoutCompat_divider));
        this.mShowDividers = tintTypedArrayObtainStyledAttributes.getInt(R.styleable.LinearLayoutCompat_showDividers, 0);
        this.mDividerPadding = tintTypedArrayObtainStyledAttributes.getDimensionPixelSize(R.styleable.LinearLayoutCompat_dividerPadding, 0);
        tintTypedArrayObtainStyledAttributes.recycle();
    }

    private void forceUniformHeight(int i, int i2) {
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 1073741824);
        for (int i3 = 0; i3 < i; i3++) {
            View virtualChildAt = getVirtualChildAt(i3);
            if (virtualChildAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) virtualChildAt.getLayoutParams();
                if (layoutParams.height == -1) {
                    int i4 = layoutParams.width;
                    layoutParams.width = virtualChildAt.getMeasuredWidth();
                    measureChildWithMargins(virtualChildAt, i2, 0, iMakeMeasureSpec, 0);
                    layoutParams.width = i4;
                }
            }
        }
    }

    private void forceUniformWidth(int i, int i2) {
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 1073741824);
        for (int i3 = 0; i3 < i; i3++) {
            View virtualChildAt = getVirtualChildAt(i3);
            if (virtualChildAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) virtualChildAt.getLayoutParams();
                if (layoutParams.width == -1) {
                    int i4 = layoutParams.height;
                    layoutParams.height = virtualChildAt.getMeasuredHeight();
                    measureChildWithMargins(virtualChildAt, iMakeMeasureSpec, 0, i2, 0);
                    layoutParams.height = i4;
                }
            }
        }
    }

    private void setChildFrame(View view, int i, int i2, int i3, int i4) {
        view.layout(i, i2, i + i3, i2 + i4);
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof LayoutParams;
    }

    void drawDividersHorizontal(Canvas canvas) {
        int left;
        int virtualChildCount = getVirtualChildCount();
        boolean zIsLayoutRtl = ViewUtils.isLayoutRtl(this);
        for (int i = 0; i < virtualChildCount; i++) {
            View virtualChildAt = getVirtualChildAt(i);
            if (virtualChildAt != null && virtualChildAt.getVisibility() != 8 && hasDividerBeforeChildAt(i)) {
                LayoutParams layoutParams = (LayoutParams) virtualChildAt.getLayoutParams();
                drawVerticalDivider(canvas, zIsLayoutRtl ? virtualChildAt.getRight() + layoutParams.rightMargin : (virtualChildAt.getLeft() - layoutParams.leftMargin) - this.mDividerWidth);
            }
        }
        if (hasDividerBeforeChildAt(virtualChildCount)) {
            View virtualChildAt2 = getVirtualChildAt(virtualChildCount - 1);
            if (virtualChildAt2 == null) {
                left = zIsLayoutRtl ? getPaddingLeft() : (getWidth() - getPaddingRight()) - this.mDividerWidth;
            } else {
                LayoutParams layoutParams2 = (LayoutParams) virtualChildAt2.getLayoutParams();
                left = zIsLayoutRtl ? (virtualChildAt2.getLeft() - layoutParams2.leftMargin) - this.mDividerWidth : virtualChildAt2.getRight() + layoutParams2.rightMargin;
            }
            drawVerticalDivider(canvas, left);
        }
    }

    void drawDividersVertical(Canvas canvas) {
        int virtualChildCount = getVirtualChildCount();
        for (int i = 0; i < virtualChildCount; i++) {
            View virtualChildAt = getVirtualChildAt(i);
            if (virtualChildAt != null && virtualChildAt.getVisibility() != 8 && hasDividerBeforeChildAt(i)) {
                drawHorizontalDivider(canvas, (virtualChildAt.getTop() - ((LayoutParams) virtualChildAt.getLayoutParams()).topMargin) - this.mDividerHeight);
            }
        }
        if (hasDividerBeforeChildAt(virtualChildCount)) {
            View virtualChildAt2 = getVirtualChildAt(virtualChildCount - 1);
            drawHorizontalDivider(canvas, virtualChildAt2 == null ? (getHeight() - getPaddingBottom()) - this.mDividerHeight : virtualChildAt2.getBottom() + ((LayoutParams) virtualChildAt2.getLayoutParams()).bottomMargin);
        }
    }

    void drawHorizontalDivider(Canvas canvas, int i) {
        this.mDivider.setBounds(getPaddingLeft() + this.mDividerPadding, i, (getWidth() - getPaddingRight()) - this.mDividerPadding, this.mDividerHeight + i);
        this.mDivider.draw(canvas);
    }

    void drawVerticalDivider(Canvas canvas, int i) {
        this.mDivider.setBounds(i, getPaddingTop() + this.mDividerPadding, this.mDividerWidth + i, (getHeight() - getPaddingBottom()) - this.mDividerPadding);
        this.mDivider.draw(canvas);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.view.ViewGroup
    public LayoutParams generateDefaultLayoutParams() {
        int i = this.mOrientation;
        if (i == 0) {
            return new LayoutParams(-2, -2);
        }
        if (i == 1) {
            return new LayoutParams(-1, -2);
        }
        return null;
    }

    @Override // android.view.ViewGroup
    public LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new LayoutParams(getContext(), attributeSet);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.view.ViewGroup
    public LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return new LayoutParams(layoutParams);
    }

    @Override // android.view.View
    public int getBaseline() {
        int i;
        if (this.mBaselineAlignedChildIndex < 0) {
            return super.getBaseline();
        }
        int childCount = getChildCount();
        int i2 = this.mBaselineAlignedChildIndex;
        if (childCount <= i2) {
            throw new RuntimeException("mBaselineAlignedChildIndex of LinearLayout set to an index that is out of bounds.");
        }
        View childAt = getChildAt(i2);
        int baseline = childAt.getBaseline();
        if (baseline == -1) {
            if (this.mBaselineAlignedChildIndex == 0) {
                return -1;
            }
            throw new RuntimeException("mBaselineAlignedChildIndex of LinearLayout points to a View that doesn't know how to get its baseline.");
        }
        int bottom = this.mBaselineChildTop;
        if (this.mOrientation == 1 && (i = this.mGravity & 112) != 48) {
            if (i == 16) {
                bottom += ((((getBottom() - getTop()) - getPaddingTop()) - getPaddingBottom()) - this.mTotalLength) / 2;
            } else if (i == 80) {
                bottom = ((getBottom() - getTop()) - getPaddingBottom()) - this.mTotalLength;
            }
        }
        return ((LayoutParams) childAt.getLayoutParams()).topMargin + bottom + baseline;
    }

    public int getBaselineAlignedChildIndex() {
        return this.mBaselineAlignedChildIndex;
    }

    int getChildrenSkipCount(View view, int i) {
        return 0;
    }

    public Drawable getDividerDrawable() {
        return this.mDivider;
    }

    public int getDividerPadding() {
        return this.mDividerPadding;
    }

    public int getDividerWidth() {
        return this.mDividerWidth;
    }

    public int getGravity() {
        return this.mGravity;
    }

    int getLocationOffset(View view) {
        return 0;
    }

    int getNextLocationOffset(View view) {
        return 0;
    }

    public int getOrientation() {
        return this.mOrientation;
    }

    public int getShowDividers() {
        return this.mShowDividers;
    }

    View getVirtualChildAt(int i) {
        return getChildAt(i);
    }

    int getVirtualChildCount() {
        return getChildCount();
    }

    public float getWeightSum() {
        return this.mWeightSum;
    }

    protected boolean hasDividerBeforeChildAt(int i) {
        if (i == 0) {
            return (this.mShowDividers & 1) != 0;
        }
        if (i == getChildCount()) {
            return (this.mShowDividers & 4) != 0;
        }
        if ((this.mShowDividers & 2) == 0) {
            return false;
        }
        for (int i2 = i - 1; i2 >= 0; i2--) {
            if (getChildAt(i2).getVisibility() != 8) {
                return true;
            }
        }
        return false;
    }

    public boolean isBaselineAligned() {
        return this.mBaselineAligned;
    }

    public boolean isMeasureWithLargestChildEnabled() {
        return this.mUseLargestChild;
    }

    /* JADX WARN: Code duplicated, block: B:29:0x00c5  */
    /* JADX WARN: Code duplicated, block: B:30:0x00c9  */
    /* JADX WARN: Code duplicated, block: B:33:0x00d3  */
    /* JADX WARN: Code duplicated, block: B:35:0x00d7  */
    /* JADX WARN: Code duplicated, block: B:37:0x00db  */
    /* JADX WARN: Code duplicated, block: B:38:0x00de  */
    /* JADX WARN: Code duplicated, block: B:40:0x00e6  */
    /* JADX WARN: Code duplicated, block: B:41:0x00f3  */
    /* JADX WARN: Code duplicated, block: B:42:0x00f5  */
    /* JADX WARN: Code duplicated, block: B:44:0x00fb  */
    /* JADX WARN: Code duplicated, block: B:45:0x0104  */
    /* JADX WARN: Code duplicated, block: B:46:0x0107  */
    /* JADX WARN: Code duplicated, block: B:49:0x011a  */
    void layoutHorizontal(int i, int i2, int i3, int i4) {
        int paddingLeft;
        int i5;
        int i6;
        int i7;
        int i8;
        int baseline;
        int i9;
        int i10;
        int i11;
        int measuredHeight;
        int i12;
        int i13;
        boolean zIsLayoutRtl = ViewUtils.isLayoutRtl(this);
        int paddingTop = getPaddingTop();
        int i14 = i4 - i2;
        int paddingBottom = i14 - getPaddingBottom();
        int paddingBottom2 = (i14 - paddingTop) - getPaddingBottom();
        int virtualChildCount = getVirtualChildCount();
        int i15 = this.mGravity;
        int i16 = i15 & GravityCompat.RELATIVE_HORIZONTAL_GRAVITY_MASK;
        int i17 = i15 & 112;
        boolean z = this.mBaselineAligned;
        int[] iArr = this.mMaxAscent;
        int[] iArr2 = this.mMaxDescent;
        int layoutDirection = ViewCompat.getLayoutDirection(this);
        int absoluteGravity = GravityCompat.getAbsoluteGravity(i16, layoutDirection);
        if (absoluteGravity != 1) {
            paddingLeft = absoluteGravity != 5 ? getPaddingLeft() : ((getPaddingLeft() + i3) - i) - this.mTotalLength;
        } else {
            paddingLeft = getPaddingLeft() + (((i3 - i) - this.mTotalLength) / 2);
        }
        if (zIsLayoutRtl) {
            i5 = virtualChildCount - 1;
            i6 = -1;
        } else {
            i5 = 0;
            i6 = 1;
        }
        int childrenSkipCount = 0;
        while (childrenSkipCount < virtualChildCount) {
            int i18 = i5 + (i6 * childrenSkipCount);
            boolean z2 = zIsLayoutRtl;
            View virtualChildAt = getVirtualChildAt(i18);
            if (virtualChildAt == null) {
                paddingLeft += measureNullChild(i18);
                i7 = layoutDirection;
                i8 = i14;
            } else {
                int i19 = childrenSkipCount;
                i7 = layoutDirection;
                if (virtualChildAt.getVisibility() != 8) {
                    int measuredWidth = virtualChildAt.getMeasuredWidth();
                    int measuredHeight2 = virtualChildAt.getMeasuredHeight();
                    LayoutParams layoutParams = (LayoutParams) virtualChildAt.getLayoutParams();
                    if (z) {
                        i8 = i14;
                        if (layoutParams.height != -1) {
                            baseline = virtualChildAt.getBaseline();
                        }
                        i9 = layoutParams.gravity;
                        if (i9 < 0) {
                            i10 = i17;
                        } else {
                            i10 = i9;
                        }
                        i11 = i10 & 112;
                        if (i11 != 16) {
                            measuredHeight = ((((paddingBottom2 - measuredHeight2) / 2) + paddingTop) + layoutParams.topMargin) - layoutParams.bottomMargin;
                        } else if (i11 != 48) {
                            i12 = layoutParams.topMargin + paddingTop;
                            if (baseline != -1) {
                                measuredHeight = i12 + (iArr[1] - baseline);
                            } else {
                                measuredHeight = i12;
                            }
                        } else if (i11 != 80) {
                            measuredHeight = paddingTop;
                        } else {
                            i13 = (paddingBottom - measuredHeight2) - layoutParams.bottomMargin;
                            if (baseline != -1) {
                                measuredHeight = i13 - (iArr2[2] - (virtualChildAt.getMeasuredHeight() - baseline));
                            } else {
                                measuredHeight = i13;
                            }
                        }
                        if (hasDividerBeforeChildAt(i18)) {
                            paddingLeft += this.mDividerWidth;
                        }
                        int i20 = paddingLeft + layoutParams.leftMargin;
                        setChildFrame(virtualChildAt, i20 + getLocationOffset(virtualChildAt), measuredHeight, measuredWidth, measuredHeight2);
                        int nextLocationOffset = i20 + measuredWidth + layoutParams.rightMargin + getNextLocationOffset(virtualChildAt);
                        childrenSkipCount = i19 + getChildrenSkipCount(virtualChildAt, i18);
                        paddingLeft = nextLocationOffset;
                    } else {
                        i8 = i14;
                    }
                    baseline = -1;
                    i9 = layoutParams.gravity;
                    if (i9 < 0) {
                        i10 = i17;
                    } else {
                        i10 = i9;
                    }
                    i11 = i10 & 112;
                    if (i11 != 16) {
                        measuredHeight = ((((paddingBottom2 - measuredHeight2) / 2) + paddingTop) + layoutParams.topMargin) - layoutParams.bottomMargin;
                    } else if (i11 != 48) {
                        i12 = layoutParams.topMargin + paddingTop;
                        if (baseline != -1) {
                            measuredHeight = i12 + (iArr[1] - baseline);
                        } else {
                            measuredHeight = i12;
                        }
                    } else if (i11 != 80) {
                        measuredHeight = paddingTop;
                    } else {
                        i13 = (paddingBottom - measuredHeight2) - layoutParams.bottomMargin;
                        if (baseline != -1) {
                            measuredHeight = i13 - (iArr2[2] - (virtualChildAt.getMeasuredHeight() - baseline));
                        } else {
                            measuredHeight = i13;
                        }
                    }
                    if (hasDividerBeforeChildAt(i18)) {
                        paddingLeft += this.mDividerWidth;
                    }
                    int i21 = paddingLeft + layoutParams.leftMargin;
                    setChildFrame(virtualChildAt, i21 + getLocationOffset(virtualChildAt), measuredHeight, measuredWidth, measuredHeight2);
                    int nextLocationOffset2 = i21 + measuredWidth + layoutParams.rightMargin + getNextLocationOffset(virtualChildAt);
                    childrenSkipCount = i19 + getChildrenSkipCount(virtualChildAt, i18);
                    paddingLeft = nextLocationOffset2;
                } else {
                    i8 = i14;
                    childrenSkipCount = i19;
                }
            }
            childrenSkipCount++;
            zIsLayoutRtl = z2;
            layoutDirection = i7;
            i14 = i8;
            virtualChildCount = virtualChildCount;
            paddingTop = paddingTop;
            iArr2 = iArr2;
            iArr = iArr;
        }
    }

    void layoutVertical(int i, int i2, int i3, int i4) {
        int paddingTop;
        int i5;
        int paddingLeft = getPaddingLeft();
        int i6 = i3 - i;
        int paddingRight = i6 - getPaddingRight();
        int paddingRight2 = (i6 - paddingLeft) - getPaddingRight();
        int virtualChildCount = getVirtualChildCount();
        int i7 = this.mGravity;
        int i8 = i7 & 112;
        int i9 = i7 & GravityCompat.RELATIVE_HORIZONTAL_GRAVITY_MASK;
        if (i8 != 16) {
            paddingTop = i8 != 80 ? getPaddingTop() : ((getPaddingTop() + i4) - i2) - this.mTotalLength;
        } else {
            paddingTop = getPaddingTop() + (((i4 - i2) - this.mTotalLength) / 2);
        }
        int childrenSkipCount = 0;
        while (childrenSkipCount < virtualChildCount) {
            View virtualChildAt = getVirtualChildAt(childrenSkipCount);
            if (virtualChildAt == null) {
                paddingTop += measureNullChild(childrenSkipCount);
            } else if (virtualChildAt.getVisibility() != 8) {
                int measuredWidth = virtualChildAt.getMeasuredWidth();
                int measuredHeight = virtualChildAt.getMeasuredHeight();
                LayoutParams layoutParams = (LayoutParams) virtualChildAt.getLayoutParams();
                int i10 = layoutParams.gravity;
                int absoluteGravity = GravityCompat.getAbsoluteGravity(i10 < 0 ? i9 : i10, ViewCompat.getLayoutDirection(this)) & 7;
                if (absoluteGravity != 1) {
                    i5 = absoluteGravity != 5 ? layoutParams.leftMargin + paddingLeft : (paddingRight - measuredWidth) - layoutParams.rightMargin;
                } else {
                    i5 = ((((paddingRight2 - measuredWidth) / 2) + paddingLeft) + layoutParams.leftMargin) - layoutParams.rightMargin;
                }
                if (hasDividerBeforeChildAt(childrenSkipCount)) {
                    paddingTop += this.mDividerHeight;
                }
                int i11 = paddingTop + layoutParams.topMargin;
                setChildFrame(virtualChildAt, i5, i11 + getLocationOffset(virtualChildAt), measuredWidth, measuredHeight);
                int nextLocationOffset = i11 + measuredHeight + layoutParams.bottomMargin + getNextLocationOffset(virtualChildAt);
                childrenSkipCount += getChildrenSkipCount(virtualChildAt, childrenSkipCount);
                paddingTop = nextLocationOffset;
            }
            childrenSkipCount++;
            paddingLeft = paddingLeft;
        }
    }

    void measureChildBeforeLayout(View view, int i, int i2, int i3, int i4, int i5) {
        measureChildWithMargins(view, i2, i3, i4, i5);
    }

    /* JADX WARN: Code duplicated, block: B:206:0x0553  */
    /* JADX WARN: Code duplicated, block: B:208:0x055c  */
    /* JADX WARN: Code duplicated, block: B:210:0x0560  */
    /* JADX WARN: Code duplicated, block: B:211:0x0563  */
    /* JADX WARN: Code duplicated, block: B:213:0x0586  */
    /* JADX WARN: Code duplicated, block: B:214:0x058b  */
    void measureHorizontal(int i, int i2) {
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        int iMax;
        int i8;
        int i9;
        int i10;
        int i11;
        boolean z;
        int i12;
        int i13;
        boolean z2;
        int baseline;
        int i14;
        int i15;
        int i16;
        int i17;
        int childrenSkipCount;
        int i18;
        int i19;
        int iMax2;
        int i20;
        int i21;
        int i22;
        boolean z3;
        int i23;
        int i24;
        LayoutParams layoutParams;
        int iMax3;
        int iMax4;
        int baseline2;
        this.mTotalLength = 0;
        int virtualChildCount = getVirtualChildCount();
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        if (this.mMaxAscent == null || this.mMaxDescent == null) {
            this.mMaxAscent = new int[4];
            this.mMaxDescent = new int[4];
        }
        int[] iArr = this.mMaxAscent;
        int[] iArr2 = this.mMaxDescent;
        iArr[3] = -1;
        iArr[2] = -1;
        iArr[1] = -1;
        iArr[0] = -1;
        iArr2[3] = -1;
        iArr2[2] = -1;
        iArr2[1] = -1;
        iArr2[0] = -1;
        boolean z4 = this.mBaselineAligned;
        boolean z5 = this.mUseLargestChild;
        boolean z6 = mode == 1073741824;
        int childrenSkipCount2 = 0;
        int i25 = 0;
        float f = 0.0f;
        int i26 = 0;
        int i27 = 0;
        boolean z7 = false;
        boolean z8 = false;
        boolean z9 = true;
        int i28 = 0;
        int i29 = 0;
        while (childrenSkipCount2 < virtualChildCount) {
            View virtualChildAt = getVirtualChildAt(childrenSkipCount2);
            if (virtualChildAt == null) {
                this.mTotalLength += measureNullChild(childrenSkipCount2);
                z3 = z4;
                i23 = virtualChildCount;
                i27 = i27;
                i21 = mode;
            } else {
                int i30 = i27;
                int i31 = i29;
                if (virtualChildAt.getVisibility() == 8) {
                    childrenSkipCount2 += getChildrenSkipCount(virtualChildAt, childrenSkipCount2);
                    z3 = z4;
                    i27 = i30;
                    i29 = i31;
                    i23 = virtualChildCount;
                    i21 = mode;
                } else {
                    if (hasDividerBeforeChildAt(childrenSkipCount2)) {
                        this.mTotalLength += this.mDividerWidth;
                    }
                    LayoutParams layoutParams2 = (LayoutParams) virtualChildAt.getLayoutParams();
                    float f2 = f + layoutParams2.weight;
                    if (mode == 1073741824 && layoutParams2.width == 0 && layoutParams2.weight > 0.0f) {
                        if (z6) {
                            this.mTotalLength += layoutParams2.leftMargin + layoutParams2.rightMargin;
                        } else {
                            int i32 = this.mTotalLength;
                            this.mTotalLength = Math.max(i32, layoutParams2.leftMargin + i32 + layoutParams2.rightMargin);
                        }
                        if (z4) {
                            int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
                            virtualChildAt.measure(iMakeMeasureSpec, iMakeMeasureSpec);
                            layoutParams = layoutParams2;
                            i20 = i26;
                            z3 = z4;
                            iMax3 = i30;
                            i19 = i31;
                            iMax2 = i28;
                            i23 = virtualChildCount;
                            i21 = mode;
                            i24 = -1;
                            i22 = i25;
                        } else {
                            z7 = true;
                            layoutParams = layoutParams2;
                            i20 = i26;
                            z3 = z4;
                            iMax3 = i30;
                            i19 = i31;
                            iMax2 = i28;
                            i23 = virtualChildCount;
                            i21 = mode;
                            i24 = -1;
                            i22 = i25;
                        }
                    } else {
                        int i33 = i28;
                        if (layoutParams2.width != 0 || layoutParams2.weight <= 0.0f) {
                            i18 = Integer.MIN_VALUE;
                        } else {
                            layoutParams2.width = -2;
                            i18 = 0;
                        }
                        i19 = i31;
                        int i34 = i18;
                        iMax2 = i33;
                        i20 = i26;
                        i21 = mode;
                        i22 = i25;
                        z3 = z4;
                        i23 = virtualChildCount;
                        i24 = -1;
                        measureChildBeforeLayout(virtualChildAt, childrenSkipCount2, i, f2 == 0.0f ? this.mTotalLength : 0, i2, 0);
                        if (i34 != Integer.MIN_VALUE) {
                            layoutParams = layoutParams2;
                            layoutParams.width = i34;
                        } else {
                            layoutParams = layoutParams2;
                        }
                        int measuredWidth = virtualChildAt.getMeasuredWidth();
                        if (z6) {
                            this.mTotalLength += layoutParams.leftMargin + measuredWidth + layoutParams.rightMargin + getNextLocationOffset(virtualChildAt);
                        } else {
                            int i35 = this.mTotalLength;
                            this.mTotalLength = Math.max(i35, i35 + measuredWidth + layoutParams.leftMargin + layoutParams.rightMargin + getNextLocationOffset(virtualChildAt));
                        }
                        iMax3 = z5 ? Math.max(measuredWidth, i30) : i30;
                    }
                    boolean z10 = false;
                    if (mode2 != 1073741824 && layoutParams.height == i24) {
                        z8 = true;
                        z10 = true;
                    }
                    int i36 = layoutParams.topMargin + layoutParams.bottomMargin;
                    int measuredHeight = virtualChildAt.getMeasuredHeight() + i36;
                    int iCombineMeasuredStates = View.combineMeasuredStates(i20, virtualChildAt.getMeasuredState());
                    if (z3 && (baseline2 = virtualChildAt.getBaseline()) != i24) {
                        int i37 = ((((layoutParams.gravity < 0 ? this.mGravity : layoutParams.gravity) & 112) >> 4) & (-2)) >> 1;
                        iArr[i37] = Math.max(iArr[i37], baseline2);
                        iArr2[i37] = Math.max(iArr2[i37], measuredHeight - baseline2);
                    }
                    int iMax5 = Math.max(i22, measuredHeight);
                    boolean z11 = z9 && layoutParams.height == -1;
                    if (layoutParams.weight > 0.0f) {
                        iMax4 = Math.max(i19, z10 ? i36 : measuredHeight);
                    } else {
                        int i38 = i19;
                        iMax2 = Math.max(iMax2, z10 ? i36 : measuredHeight);
                        iMax4 = i38;
                    }
                    childrenSkipCount2 += getChildrenSkipCount(virtualChildAt, childrenSkipCount2);
                    z9 = z11;
                    i26 = iCombineMeasuredStates;
                    f = f2;
                    i27 = iMax3;
                    i28 = iMax2;
                    i25 = iMax5;
                    i29 = iMax4;
                }
            }
            childrenSkipCount2++;
            z4 = z3;
            mode = i21;
            virtualChildCount = i23;
        }
        boolean z12 = z4;
        int i39 = virtualChildCount;
        int i40 = mode;
        int i41 = i29;
        int i42 = i28;
        int i43 = i26;
        int i44 = i25;
        int i45 = i27;
        if (this.mTotalLength > 0) {
            i3 = i39;
            if (hasDividerBeforeChildAt(i3)) {
                this.mTotalLength += this.mDividerWidth;
            }
        } else {
            i3 = i39;
        }
        int iMax6 = (iArr[1] == -1 && iArr[0] == -1 && iArr[2] == -1 && iArr[3] == -1) ? i44 : Math.max(i44, Math.max(iArr[3], Math.max(iArr[0], Math.max(iArr[1], iArr[2]))) + Math.max(iArr2[3], Math.max(iArr2[0], Math.max(iArr2[1], iArr2[2]))));
        if (z5) {
            i5 = i40;
            if (i5 == Integer.MIN_VALUE || i5 == 0) {
                this.mTotalLength = 0;
                int i46 = 0;
                while (i46 < i3) {
                    View virtualChildAt2 = getVirtualChildAt(i46);
                    if (virtualChildAt2 == null) {
                        this.mTotalLength += measureNullChild(i46);
                    } else {
                        if (virtualChildAt2.getVisibility() == 8) {
                            childrenSkipCount = i46 + getChildrenSkipCount(virtualChildAt2, i46);
                            iMax6 = iMax6;
                        } else {
                            LayoutParams layoutParams3 = (LayoutParams) virtualChildAt2.getLayoutParams();
                            if (z6) {
                                this.mTotalLength += layoutParams3.leftMargin + i45 + layoutParams3.rightMargin + getNextLocationOffset(virtualChildAt2);
                            } else {
                                int i47 = this.mTotalLength;
                                this.mTotalLength = Math.max(i47, i47 + i45 + layoutParams3.leftMargin + layoutParams3.rightMargin + getNextLocationOffset(virtualChildAt2));
                            }
                        }
                        i46 = childrenSkipCount + 1;
                        iMax6 = iMax6;
                    }
                    childrenSkipCount = i46;
                    i46 = childrenSkipCount + 1;
                    iMax6 = iMax6;
                }
                i4 = iMax6;
            } else {
                i4 = iMax6;
            }
        } else {
            i4 = iMax6;
            i5 = i40;
        }
        this.mTotalLength += getPaddingLeft() + getPaddingRight();
        int iResolveSizeAndState = View.resolveSizeAndState(Math.max(this.mTotalLength, getSuggestedMinimumWidth()), i, 0);
        int i48 = iResolveSizeAndState & ViewCompat.MEASURED_SIZE_MASK;
        int i49 = i48 - this.mTotalLength;
        if (z7 || (i49 != 0 && f > 0.0f)) {
            float f3 = this.mWeightSum;
            if (f3 <= 0.0f) {
                f3 = f;
            }
            iArr[3] = -1;
            iArr[2] = -1;
            iArr[1] = -1;
            iArr[0] = -1;
            iArr2[3] = -1;
            iArr2[2] = -1;
            iArr2[1] = -1;
            iArr2[0] = -1;
            this.mTotalLength = 0;
            int i50 = 0;
            int i51 = i49;
            int iMax7 = -1;
            int iCombineMeasuredStates2 = i43;
            while (i50 < i3) {
                int i52 = i41;
                View virtualChildAt3 = getVirtualChildAt(i50);
                if (virtualChildAt3 != null) {
                    z = z5;
                    i10 = i3;
                    if (virtualChildAt3.getVisibility() == 8) {
                        i5 = i5;
                        iResolveSizeAndState = iResolveSizeAndState;
                        i11 = i51;
                    } else {
                        LayoutParams layoutParams4 = (LayoutParams) virtualChildAt3.getLayoutParams();
                        float f4 = layoutParams4.weight;
                        if (f4 > 0.0f) {
                            int i53 = (int) ((i51 * f4) / f3);
                            float f5 = f3 - f4;
                            int i54 = i51 - i53;
                            int childMeasureSpec = getChildMeasureSpec(i2, getPaddingTop() + getPaddingBottom() + layoutParams4.topMargin + layoutParams4.bottomMargin, layoutParams4.height);
                            if (layoutParams4.width == 0 && i5 == 1073741824) {
                                virtualChildAt3.measure(View.MeasureSpec.makeMeasureSpec(i53 > 0 ? i53 : 0, 1073741824), childMeasureSpec);
                            } else {
                                int measuredWidth2 = virtualChildAt3.getMeasuredWidth() + i53;
                                if (measuredWidth2 < 0) {
                                    measuredWidth2 = 0;
                                }
                                virtualChildAt3.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth2, 1073741824), childMeasureSpec);
                            }
                            iCombineMeasuredStates2 = View.combineMeasuredStates(iCombineMeasuredStates2, virtualChildAt3.getMeasuredState() & ViewCompat.MEASURED_STATE_MASK);
                            f3 = f5;
                            i12 = i54;
                        } else {
                            i5 = i5;
                            i12 = i51;
                        }
                        if (z6) {
                            this.mTotalLength += virtualChildAt3.getMeasuredWidth() + layoutParams4.leftMargin + layoutParams4.rightMargin + getNextLocationOffset(virtualChildAt3);
                        } else {
                            int i55 = this.mTotalLength;
                            this.mTotalLength = Math.max(i55, virtualChildAt3.getMeasuredWidth() + i55 + layoutParams4.leftMargin + layoutParams4.rightMargin + getNextLocationOffset(virtualChildAt3));
                        }
                        boolean z13 = mode2 != 1073741824 && layoutParams4.height == -1;
                        int i56 = layoutParams4.topMargin + layoutParams4.bottomMargin;
                        int measuredHeight2 = virtualChildAt3.getMeasuredHeight() + i56;
                        iMax7 = Math.max(iMax7, measuredHeight2);
                        float f6 = f3;
                        int iMax8 = Math.max(i42, z13 ? i56 : measuredHeight2);
                        if (z9) {
                            i13 = iMax8;
                            z2 = layoutParams4.height == -1;
                            if (z12) {
                                baseline = virtualChildAt3.getBaseline();
                                z9 = z2;
                                if (baseline == -1) {
                                    if (layoutParams4.gravity < 0) {
                                        i14 = this.mGravity;
                                    } else {
                                        i14 = layoutParams4.gravity;
                                    }
                                    int i57 = (((i14 & 112) >> 4) & (-2)) >> 1;
                                    iArr[i57] = Math.max(iArr[i57], baseline);
                                    iArr2[i57] = Math.max(iArr2[i57], measuredHeight2 - baseline);
                                }
                            } else {
                                z9 = z2;
                            }
                            f3 = f6;
                            i42 = i13;
                            i11 = i12;
                        } else {
                            i13 = iMax8;
                        }
                        if (z12) {
                            baseline = virtualChildAt3.getBaseline();
                            z9 = z2;
                            if (baseline == -1) {
                                if (layoutParams4.gravity < 0) {
                                    i14 = this.mGravity;
                                } else {
                                    i14 = layoutParams4.gravity;
                                }
                                int i58 = (((i14 & 112) >> 4) & (-2)) >> 1;
                                iArr[i58] = Math.max(iArr[i58], baseline);
                                iArr2[i58] = Math.max(iArr2[i58], measuredHeight2 - baseline);
                            }
                        } else {
                            z9 = z2;
                        }
                        f3 = f6;
                        i42 = i13;
                        i11 = i12;
                    }
                } else {
                    i10 = i3;
                    i5 = i5;
                    iResolveSizeAndState = iResolveSizeAndState;
                    i11 = i51;
                    z = z5;
                }
                i50++;
                i51 = i11;
                iResolveSizeAndState = iResolveSizeAndState;
                z5 = z;
                i3 = i10;
                i41 = i52;
                i5 = i5;
            }
            i6 = i3;
            i7 = iResolveSizeAndState;
            this.mTotalLength += getPaddingLeft() + getPaddingRight();
            i9 = i42;
            i8 = iCombineMeasuredStates2;
            iMax = (iArr[1] == -1 && iArr[0] == -1 && iArr[2] == -1 && iArr[3] == -1) ? iMax7 : Math.max(iMax7, Math.max(iArr[3], Math.max(iArr[0], Math.max(iArr[1], iArr[2]))) + Math.max(iArr2[3], Math.max(iArr2[0], Math.max(iArr2[1], iArr2[2]))));
        } else {
            int iMax9 = Math.max(i42, i41);
            if (!z5 || i5 == 1073741824) {
                i15 = iMax9;
            } else {
                int i59 = 0;
                while (i59 < i3) {
                    float f7 = f;
                    View virtualChildAt4 = getVirtualChildAt(i59);
                    if (virtualChildAt4 != null) {
                        i16 = iMax9;
                        i17 = i48;
                        if (virtualChildAt4.getVisibility() != 8 && ((LayoutParams) virtualChildAt4.getLayoutParams()).weight > 0.0f) {
                            virtualChildAt4.measure(View.MeasureSpec.makeMeasureSpec(i45, 1073741824), View.MeasureSpec.makeMeasureSpec(virtualChildAt4.getMeasuredHeight(), 1073741824));
                        }
                    } else {
                        i16 = iMax9;
                        i17 = i48;
                    }
                    i59++;
                    iMax9 = i16;
                    f = f7;
                    i48 = i17;
                    i45 = i45;
                }
                i15 = iMax9;
            }
            i6 = i3;
            i7 = iResolveSizeAndState;
            i9 = i15;
            iMax = i4;
            i8 = i43;
        }
        if (!z9 && mode2 != 1073741824) {
            iMax = i9;
        }
        setMeasuredDimension(i7 | ((-16777216) & i8), View.resolveSizeAndState(Math.max(iMax + getPaddingTop() + getPaddingBottom(), getSuggestedMinimumHeight()), i2, i8 << 16));
        if (z8) {
            forceUniformHeight(i6, i);
        }
    }

    int measureNullChild(int i) {
        return 0;
    }

    /* JADX WARN: Code duplicated, block: B:159:0x03da  */
    /* JADX WARN: Code duplicated, block: B:160:0x03dc  */
    void measureVertical(int i, int i2) {
        int i3;
        int i4;
        int i5;
        int iCombineMeasuredStates;
        int i6;
        float f;
        boolean z;
        int i7;
        int i8;
        int i9;
        int i10;
        int i11;
        int i12;
        int i13;
        LayoutParams layoutParams;
        int i14;
        int i15;
        int i16;
        int iMax;
        int i17;
        View view;
        int iMax2;
        int i18;
        int iMax3;
        this.mTotalLength = 0;
        int virtualChildCount = getVirtualChildCount();
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int i19 = this.mBaselineAlignedChildIndex;
        boolean z2 = this.mUseLargestChild;
        boolean z3 = false;
        int iMax4 = 0;
        float f2 = 0.0f;
        int i20 = 0;
        int childrenSkipCount = 0;
        boolean z4 = false;
        int i21 = 0;
        int i22 = 0;
        int i23 = 0;
        boolean z5 = true;
        while (true) {
            int i24 = i22;
            if (childrenSkipCount >= virtualChildCount) {
                int i25 = i23;
                int i26 = virtualChildCount;
                int i27 = mode2;
                int i28 = i24;
                int i29 = 8;
                int i30 = i20;
                if (this.mTotalLength > 0) {
                    i3 = i26;
                    if (hasDividerBeforeChildAt(i3)) {
                        this.mTotalLength += this.mDividerHeight;
                    }
                } else {
                    i3 = i26;
                }
                if (z2) {
                    i5 = i27;
                    if (i5 == Integer.MIN_VALUE || i5 == 0) {
                        this.mTotalLength = 0;
                        int childrenSkipCount2 = 0;
                        while (childrenSkipCount2 < i3) {
                            View virtualChildAt = getVirtualChildAt(childrenSkipCount2);
                            if (virtualChildAt == null) {
                                this.mTotalLength += measureNullChild(childrenSkipCount2);
                            } else if (virtualChildAt.getVisibility() == i29) {
                                childrenSkipCount2 += getChildrenSkipCount(virtualChildAt, childrenSkipCount2);
                            } else {
                                LayoutParams layoutParams2 = (LayoutParams) virtualChildAt.getLayoutParams();
                                int i31 = this.mTotalLength;
                                this.mTotalLength = Math.max(i31, i31 + i25 + layoutParams2.topMargin + layoutParams2.bottomMargin + getNextLocationOffset(virtualChildAt));
                            }
                            childrenSkipCount2++;
                            i21 = i21;
                            i29 = 8;
                        }
                        i4 = i21;
                    } else {
                        i4 = i21;
                    }
                } else {
                    i4 = i21;
                    i5 = i27;
                }
                this.mTotalLength += getPaddingTop() + getPaddingBottom();
                int i32 = i25;
                int iResolveSizeAndState = View.resolveSizeAndState(Math.max(this.mTotalLength, getSuggestedMinimumHeight()), i2, 0);
                int i33 = iResolveSizeAndState & ViewCompat.MEASURED_SIZE_MASK;
                int i34 = i33 - this.mTotalLength;
                if (z3 || (i34 != 0 && f2 > 0.0f)) {
                    float f3 = this.mWeightSum;
                    if (f3 <= 0.0f) {
                        f3 = f2;
                    }
                    this.mTotalLength = 0;
                    int i35 = 0;
                    int i36 = i34;
                    iCombineMeasuredStates = i4;
                    while (i35 < i3) {
                        View virtualChildAt2 = getVirtualChildAt(i35);
                        int i37 = i32;
                        boolean z6 = z2;
                        if (virtualChildAt2.getVisibility() == 8) {
                            i5 = i5;
                            i6 = i36;
                            i19 = i19;
                        } else {
                            LayoutParams layoutParams3 = (LayoutParams) virtualChildAt2.getLayoutParams();
                            float f4 = layoutParams3.weight;
                            if (f4 > 0.0f) {
                                int i38 = (int) ((i36 * f4) / f3);
                                float f5 = f3 - f4;
                                i6 = i36 - i38;
                                int childMeasureSpec = getChildMeasureSpec(i, getPaddingLeft() + getPaddingRight() + layoutParams3.leftMargin + layoutParams3.rightMargin, layoutParams3.width);
                                if (layoutParams3.height == 0 && i5 == 1073741824) {
                                    i5 = i5;
                                    virtualChildAt2.measure(childMeasureSpec, View.MeasureSpec.makeMeasureSpec(i38 > 0 ? i38 : 0, 1073741824));
                                } else {
                                    int measuredHeight = virtualChildAt2.getMeasuredHeight() + i38;
                                    if (measuredHeight < 0) {
                                        measuredHeight = 0;
                                    }
                                    virtualChildAt2.measure(childMeasureSpec, View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824));
                                }
                                iCombineMeasuredStates = View.combineMeasuredStates(iCombineMeasuredStates, virtualChildAt2.getMeasuredState() & InputDeviceCompat.SOURCE_ANY);
                                f3 = f5;
                            } else {
                                i5 = i5;
                                i6 = i36;
                            }
                            int i39 = layoutParams3.leftMargin + layoutParams3.rightMargin;
                            int measuredWidth = virtualChildAt2.getMeasuredWidth() + i39;
                            iMax4 = Math.max(iMax4, measuredWidth);
                            if (mode != 1073741824) {
                                f = f3;
                                z = layoutParams3.width == -1;
                                if (z) {
                                    i7 = i39;
                                } else {
                                    i7 = measuredWidth;
                                }
                                int iMax5 = Math.max(i30, i7);
                                boolean z7 = !z5 && layoutParams3.width == -1;
                                int i40 = this.mTotalLength;
                                this.mTotalLength = Math.max(i40, i40 + virtualChildAt2.getMeasuredHeight() + layoutParams3.topMargin + layoutParams3.bottomMargin + getNextLocationOffset(virtualChildAt2));
                                z5 = z7;
                                f3 = f;
                                i30 = iMax5;
                            } else {
                                f = f3;
                            }
                            if (z) {
                                i7 = i39;
                            } else {
                                i7 = measuredWidth;
                            }
                            int iMax6 = Math.max(i30, i7);
                            if (z5) {
                            }
                            int i41 = this.mTotalLength;
                            this.mTotalLength = Math.max(i41, i41 + virtualChildAt2.getMeasuredHeight() + layoutParams3.topMargin + layoutParams3.bottomMargin + getNextLocationOffset(virtualChildAt2));
                            z5 = z7;
                            f3 = f;
                            i30 = iMax6;
                        }
                        i35++;
                        i32 = i37;
                        z2 = z6;
                        i19 = i19;
                        i36 = i6;
                        i5 = i5;
                    }
                    this.mTotalLength += getPaddingTop() + getPaddingBottom();
                } else {
                    int iMax7 = Math.max(i30, i28);
                    if (!z2 || i5 == 1073741824) {
                        i8 = iMax7;
                    } else {
                        int i42 = 0;
                        while (i42 < i3) {
                            float f6 = f2;
                            View virtualChildAt3 = getVirtualChildAt(i42);
                            if (virtualChildAt3 != null) {
                                i9 = iMax7;
                                i10 = i33;
                                if (virtualChildAt3.getVisibility() != 8 && ((LayoutParams) virtualChildAt3.getLayoutParams()).weight > 0.0f) {
                                    virtualChildAt3.measure(View.MeasureSpec.makeMeasureSpec(virtualChildAt3.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(i32, 1073741824));
                                }
                            } else {
                                i9 = iMax7;
                                i10 = i33;
                            }
                            i42++;
                            iMax7 = i9;
                            f2 = f6;
                            i33 = i10;
                            i28 = i28;
                        }
                        i8 = iMax7;
                    }
                    i30 = i8;
                    iCombineMeasuredStates = i4;
                }
                if (!z5 && mode != 1073741824) {
                    iMax4 = i30;
                }
                setMeasuredDimension(View.resolveSizeAndState(Math.max(iMax4 + getPaddingLeft() + getPaddingRight(), getSuggestedMinimumWidth()), i, iCombineMeasuredStates), iResolveSizeAndState);
                if (z4) {
                    forceUniformWidth(i3, i2);
                    return;
                }
                return;
            }
            View virtualChildAt4 = getVirtualChildAt(childrenSkipCount);
            if (virtualChildAt4 == null) {
                this.mTotalLength += measureNullChild(childrenSkipCount);
                i14 = virtualChildCount;
                i13 = mode2;
                i22 = i24;
            } else {
                int i43 = i23;
                if (virtualChildAt4.getVisibility() == 8) {
                    childrenSkipCount += getChildrenSkipCount(virtualChildAt4, childrenSkipCount);
                    i14 = virtualChildCount;
                    i22 = i24;
                    i23 = i43;
                    i13 = mode2;
                } else {
                    if (hasDividerBeforeChildAt(childrenSkipCount)) {
                        this.mTotalLength += this.mDividerHeight;
                    }
                    LayoutParams layoutParams4 = (LayoutParams) virtualChildAt4.getLayoutParams();
                    float f7 = f2 + layoutParams4.weight;
                    if (mode2 == 1073741824 && layoutParams4.height == 0 && layoutParams4.weight > 0.0f) {
                        int i44 = this.mTotalLength;
                        int i45 = childrenSkipCount;
                        this.mTotalLength = Math.max(i44, layoutParams4.topMargin + i44 + layoutParams4.bottomMargin);
                        z3 = true;
                        iMax = i20;
                        i17 = i21;
                        i14 = virtualChildCount;
                        i16 = i24;
                        iMax2 = i43;
                        i12 = i45;
                        i15 = 1073741824;
                        i13 = mode2;
                        layoutParams = layoutParams4;
                        view = virtualChildAt4;
                    } else {
                        int i46 = childrenSkipCount;
                        if (layoutParams4.height != 0 || layoutParams4.weight <= 0.0f) {
                            i11 = Integer.MIN_VALUE;
                        } else {
                            layoutParams4.height = -2;
                            i11 = 0;
                        }
                        int i47 = i11;
                        i12 = i46;
                        i13 = mode2;
                        layoutParams = layoutParams4;
                        i14 = virtualChildCount;
                        i15 = 1073741824;
                        i16 = i24;
                        iMax = i20;
                        i17 = i21;
                        measureChildBeforeLayout(virtualChildAt4, i12, i, 0, i2, f7 == 0.0f ? this.mTotalLength : 0);
                        if (i47 != Integer.MIN_VALUE) {
                            layoutParams.height = i47;
                        }
                        int measuredHeight2 = virtualChildAt4.getMeasuredHeight();
                        int i48 = this.mTotalLength;
                        view = virtualChildAt4;
                        this.mTotalLength = Math.max(i48, i48 + measuredHeight2 + layoutParams.topMargin + layoutParams.bottomMargin + getNextLocationOffset(view));
                        iMax2 = z2 ? Math.max(measuredHeight2, i43) : i43;
                    }
                    if (i19 >= 0) {
                        i18 = i12;
                        if (i19 == i18 + 1) {
                            this.mBaselineChildTop = this.mTotalLength;
                        }
                    } else {
                        i18 = i12;
                    }
                    if (i18 < i19 && layoutParams.weight > 0.0f) {
                        throw new RuntimeException("A child of LinearLayout with index less than mBaselineAlignedChildIndex has weight > 0, which won't work.  Either remove the weight, or don't set mBaselineAlignedChildIndex.");
                    }
                    boolean z8 = false;
                    if (mode != i15 && layoutParams.width == -1) {
                        z4 = true;
                        z8 = true;
                    }
                    int i49 = layoutParams.leftMargin + layoutParams.rightMargin;
                    int measuredWidth2 = view.getMeasuredWidth() + i49;
                    int iMax8 = Math.max(iMax4, measuredWidth2);
                    int iCombineMeasuredStates2 = View.combineMeasuredStates(i17, view.getMeasuredState());
                    boolean z9 = z5 && layoutParams.width == -1;
                    if (layoutParams.weight > 0.0f) {
                        iMax3 = Math.max(i16, z8 ? i49 : measuredWidth2);
                    } else {
                        iMax3 = i16;
                        iMax = Math.max(iMax, z8 ? i49 : measuredWidth2);
                    }
                    int childrenSkipCount3 = getChildrenSkipCount(view, i18) + i18;
                    i23 = iMax2;
                    z5 = z9;
                    i22 = iMax3;
                    f2 = f7;
                    i20 = iMax;
                    childrenSkipCount = childrenSkipCount3;
                    iMax4 = iMax8;
                    i21 = iCombineMeasuredStates2;
                }
            }
            childrenSkipCount++;
            mode2 = i13;
            virtualChildCount = i14;
        }
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        if (this.mDivider == null) {
            return;
        }
        if (this.mOrientation == 1) {
            drawDividersVertical(canvas);
        } else {
            drawDividersHorizontal(canvas);
        }
    }

    @Override // android.view.View
    public void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        accessibilityEvent.setClassName(LinearLayoutCompat.class.getName());
    }

    @Override // android.view.View
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName(LinearLayoutCompat.class.getName());
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (this.mOrientation == 1) {
            layoutVertical(i, i2, i3, i4);
        } else {
            layoutHorizontal(i, i2, i3, i4);
        }
    }

    @Override // android.view.View
    protected void onMeasure(int i, int i2) {
        if (this.mOrientation == 1) {
            measureVertical(i, i2);
        } else {
            measureHorizontal(i, i2);
        }
    }

    public void setBaselineAligned(boolean z) {
        this.mBaselineAligned = z;
    }

    public void setBaselineAlignedChildIndex(int i) {
        if (i >= 0 && i < getChildCount()) {
            this.mBaselineAlignedChildIndex = i;
            return;
        }
        throw new IllegalArgumentException("base aligned child index out of range (0, " + getChildCount() + ")");
    }

    public void setDividerDrawable(Drawable drawable) {
        if (drawable == this.mDivider) {
            return;
        }
        this.mDivider = drawable;
        if (drawable != null) {
            this.mDividerWidth = drawable.getIntrinsicWidth();
            this.mDividerHeight = drawable.getIntrinsicHeight();
        } else {
            this.mDividerWidth = 0;
            this.mDividerHeight = 0;
        }
        setWillNotDraw(drawable == null);
        requestLayout();
    }

    public void setDividerPadding(int i) {
        this.mDividerPadding = i;
    }

    public void setGravity(int i) {
        if (this.mGravity != i) {
            if ((8388615 & i) == 0) {
                i |= GravityCompat.START;
            }
            if ((i & 112) == 0) {
                i |= 48;
            }
            this.mGravity = i;
            requestLayout();
        }
    }

    public void setHorizontalGravity(int i) {
        int i2 = i & GravityCompat.RELATIVE_HORIZONTAL_GRAVITY_MASK;
        int i3 = this.mGravity;
        if ((8388615 & i3) != i2) {
            this.mGravity = ((-8388616) & i3) | i2;
            requestLayout();
        }
    }

    public void setMeasureWithLargestChildEnabled(boolean z) {
        this.mUseLargestChild = z;
    }

    public void setOrientation(int i) {
        if (this.mOrientation != i) {
            this.mOrientation = i;
            requestLayout();
        }
    }

    public void setShowDividers(int i) {
        if (i != this.mShowDividers) {
            requestLayout();
        }
        this.mShowDividers = i;
    }

    public void setVerticalGravity(int i) {
        int i2 = i & 112;
        int i3 = this.mGravity;
        if ((i3 & 112) != i2) {
            this.mGravity = (i3 & (-113)) | i2;
            requestLayout();
        }
    }

    public void setWeightSum(float f) {
        this.mWeightSum = Math.max(0.0f, f);
    }

    @Override // android.view.ViewGroup
    public boolean shouldDelayChildPressedState() {
        return false;
    }
}

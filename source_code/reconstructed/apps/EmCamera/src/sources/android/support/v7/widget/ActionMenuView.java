package android.support.v7.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.Drawable;
import android.support.v7.view.menu.ActionMenuItemView;
import android.support.v7.view.menu.MenuBuilder;
import android.support.v7.view.menu.MenuItemImpl;
import android.support.v7.view.menu.MenuPresenter;
import android.support.v7.view.menu.MenuView;
import android.util.AttributeSet;
import android.view.ContextThemeWrapper;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewDebug;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;

/* JADX INFO: loaded from: classes.dex */
public class ActionMenuView extends LinearLayoutCompat implements MenuBuilder.ItemInvoker, MenuView {
    static final int GENERATED_ITEM_PADDING = 4;
    static final int MIN_CELL_SIZE = 56;
    private static final String TAG = "ActionMenuView";
    private MenuPresenter.Callback mActionMenuPresenterCallback;
    private boolean mFormatItems;
    private int mFormatItemsWidth;
    private int mGeneratedItemPadding;
    private MenuBuilder mMenu;
    MenuBuilder.Callback mMenuBuilderCallback;
    private int mMinCellSize;
    OnMenuItemClickListener mOnMenuItemClickListener;
    private Context mPopupContext;
    private int mPopupTheme;
    private ActionMenuPresenter mPresenter;
    private boolean mReserveOverflow;

    public interface ActionMenuChildView {
        boolean needsDividerAfter();

        boolean needsDividerBefore();
    }

    private static class ActionMenuPresenterCallback implements MenuPresenter.Callback {
        ActionMenuPresenterCallback() {
        }

        @Override // android.support.v7.view.menu.MenuPresenter.Callback
        public void onCloseMenu(MenuBuilder menuBuilder, boolean z) {
        }

        @Override // android.support.v7.view.menu.MenuPresenter.Callback
        public boolean onOpenSubMenu(MenuBuilder menuBuilder) {
            return false;
        }
    }

    public static class LayoutParams extends LinearLayoutCompat.LayoutParams {

        @ViewDebug.ExportedProperty
        public int cellsUsed;

        @ViewDebug.ExportedProperty
        public boolean expandable;
        boolean expanded;

        @ViewDebug.ExportedProperty
        public int extraPixels;

        @ViewDebug.ExportedProperty
        public boolean isOverflowButton;

        @ViewDebug.ExportedProperty
        public boolean preventEdgeOffset;

        public LayoutParams(int i, int i2) {
            super(i, i2);
            this.isOverflowButton = false;
        }

        LayoutParams(int i, int i2, boolean z) {
            super(i, i2);
            this.isOverflowButton = z;
        }

        public LayoutParams(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
        }

        public LayoutParams(LayoutParams layoutParams) {
            super((ViewGroup.LayoutParams) layoutParams);
            this.isOverflowButton = layoutParams.isOverflowButton;
        }

        public LayoutParams(ViewGroup.LayoutParams layoutParams) {
            super(layoutParams);
        }
    }

    private class MenuBuilderCallback implements MenuBuilder.Callback {
        MenuBuilderCallback() {
        }

        @Override // android.support.v7.view.menu.MenuBuilder.Callback
        public boolean onMenuItemSelected(MenuBuilder menuBuilder, MenuItem menuItem) {
            return ActionMenuView.this.mOnMenuItemClickListener != null && ActionMenuView.this.mOnMenuItemClickListener.onMenuItemClick(menuItem);
        }

        @Override // android.support.v7.view.menu.MenuBuilder.Callback
        public void onMenuModeChange(MenuBuilder menuBuilder) {
            if (ActionMenuView.this.mMenuBuilderCallback != null) {
                ActionMenuView.this.mMenuBuilderCallback.onMenuModeChange(menuBuilder);
            }
        }
    }

    public interface OnMenuItemClickListener {
        boolean onMenuItemClick(MenuItem menuItem);
    }

    public ActionMenuView(Context context) {
        this(context, null);
    }

    public ActionMenuView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setBaselineAligned(false);
        float f = context.getResources().getDisplayMetrics().density;
        this.mMinCellSize = (int) (56.0f * f);
        this.mGeneratedItemPadding = (int) (4.0f * f);
        this.mPopupContext = context;
        this.mPopupTheme = 0;
    }

    static int measureChildForCells(View view, int i, int i2, int i3, int i4) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(View.MeasureSpec.getSize(i3) - i4, View.MeasureSpec.getMode(i3));
        ActionMenuItemView actionMenuItemView = view instanceof ActionMenuItemView ? (ActionMenuItemView) view : null;
        boolean z = false;
        boolean z2 = actionMenuItemView != null && actionMenuItemView.hasText();
        int i5 = 0;
        if (i2 > 0 && (!z2 || i2 >= 2)) {
            view.measure(View.MeasureSpec.makeMeasureSpec(i * i2, Integer.MIN_VALUE), iMakeMeasureSpec);
            int measuredWidth = view.getMeasuredWidth();
            i5 = measuredWidth / i;
            if (measuredWidth % i != 0) {
                i5++;
            }
            if (z2 && i5 < 2) {
                i5 = 2;
            }
        }
        if (!layoutParams.isOverflowButton && z2) {
            z = true;
        }
        layoutParams.expandable = z;
        layoutParams.cellsUsed = i5;
        view.measure(View.MeasureSpec.makeMeasureSpec(i5 * i, 1073741824), iMakeMeasureSpec);
        return i5;
    }

    /* JADX WARN: Code duplicated, block: B:136:0x0282  */
    /* JADX WARN: Code duplicated, block: B:138:0x0285  */
    /* JADX WARN: Code duplicated, block: B:140:0x0293  */
    /* JADX WARN: Code duplicated, block: B:141:0x0296  */
    /* JADX WARN: Code duplicated, block: B:144:0x02af  */
    /* JADX WARN: Code duplicated, block: B:147:0x02b7  */
    /* JADX WARN: Code duplicated, block: B:148:0x02b9  */
    /* JADX WARN: Type inference failed for: r3v11 */
    /* JADX WARN: Type inference failed for: r3v12, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r3v29 */
    private void onMeasureExactFormat(int i, int i2) {
        boolean z;
        boolean z2;
        int i3;
        int i4;
        View childAt;
        LayoutParams layoutParams;
        int i5;
        ?? r3;
        int mode = View.MeasureSpec.getMode(i2);
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int paddingLeft = getPaddingLeft() + getPaddingRight();
        int paddingTop = getPaddingTop() + getPaddingBottom();
        int childMeasureSpec = getChildMeasureSpec(i2, paddingTop, -2);
        int i6 = size - paddingLeft;
        int i7 = this.mMinCellSize;
        int i8 = i6 / i7;
        int i9 = i6 % i7;
        if (i8 == 0) {
            setMeasuredDimension(i6, 0);
            return;
        }
        int i10 = i7 + (i9 / i8);
        int i11 = i8;
        int i12 = 0;
        int iMax = 0;
        int i13 = 0;
        boolean z3 = false;
        long j = 0;
        int childCount = getChildCount();
        int i14 = 0;
        int i15 = 0;
        while (i15 < childCount) {
            View childAt2 = getChildAt(i15);
            int i16 = i8;
            int i17 = i9;
            if (childAt2.getVisibility() != 8) {
                boolean z4 = childAt2 instanceof ActionMenuItemView;
                int i18 = i14 + 1;
                if (z4) {
                    int i19 = this.mGeneratedItemPadding;
                    r3 = 0;
                    childAt2.setPadding(i19, 0, i19, 0);
                } else {
                    r3 = 0;
                }
                LayoutParams layoutParams2 = (LayoutParams) childAt2.getLayoutParams();
                layoutParams2.expanded = r3;
                layoutParams2.extraPixels = r3;
                layoutParams2.cellsUsed = r3;
                layoutParams2.expandable = r3;
                layoutParams2.leftMargin = r3;
                layoutParams2.rightMargin = r3;
                layoutParams2.preventEdgeOffset = z4 && ((ActionMenuItemView) childAt2).hasText();
                int iMeasureChildForCells = measureChildForCells(childAt2, i10, layoutParams2.isOverflowButton ? 1 : i11, childMeasureSpec, paddingTop);
                iMax = Math.max(iMax, iMeasureChildForCells);
                if (layoutParams2.expandable) {
                    i13++;
                }
                if (layoutParams2.isOverflowButton) {
                    z3 = true;
                }
                i11 -= iMeasureChildForCells;
                int iMax2 = Math.max(i12, childAt2.getMeasuredHeight());
                if (iMeasureChildForCells == 1) {
                    i12 = iMax2;
                    j |= (long) (1 << i15);
                    i14 = i18;
                } else {
                    i12 = iMax2;
                    i14 = i18;
                }
            }
            i15++;
            i8 = i16;
            i9 = i17;
        }
        boolean z5 = z3 && i14 == 2;
        boolean z6 = false;
        while (true) {
            if (i13 <= 0 || i11 <= 0) {
                z = z6;
                break;
            }
            int i20 = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
            long j2 = 0;
            int i21 = 0;
            int i22 = paddingTop;
            int i23 = 0;
            while (i23 < childCount) {
                boolean z7 = z6;
                LayoutParams layoutParams3 = (LayoutParams) getChildAt(i23).getLayoutParams();
                int i24 = i13;
                if (layoutParams3.expandable) {
                    if (layoutParams3.cellsUsed < i20) {
                        i20 = layoutParams3.cellsUsed;
                        j2 = 1 << i23;
                        i21 = 1;
                    } else if (layoutParams3.cellsUsed == i20) {
                        j2 |= 1 << i23;
                        i21++;
                    }
                }
                i23++;
                i13 = i24;
                z6 = z7;
            }
            z = z6;
            int i25 = i13;
            j |= j2;
            if (i21 > i11) {
                break;
            }
            int i26 = i20 + 1;
            int i27 = 0;
            while (i27 < childCount) {
                View childAt3 = getChildAt(i27);
                LayoutParams layoutParams4 = (LayoutParams) childAt3.getLayoutParams();
                int i28 = i21;
                int i29 = mode;
                int i30 = i6;
                if ((j2 & ((long) (1 << i27))) != 0) {
                    if (z5 && layoutParams4.preventEdgeOffset && i11 == 1) {
                        int i31 = this.mGeneratedItemPadding;
                        childAt3.setPadding(i31 + i10, 0, i31, 0);
                    }
                    layoutParams4.cellsUsed++;
                    layoutParams4.expanded = true;
                    i11--;
                } else if (layoutParams4.cellsUsed == i26) {
                    j |= (long) (1 << i27);
                }
                i27++;
                i21 = i28;
                mode = i29;
                i6 = i30;
            }
            z6 = true;
            paddingTop = i22;
            i13 = i25;
        }
        boolean z8 = !z3 && i14 == 1;
        if (i11 > 0 && j != 0) {
            if (i11 < i14 - 1 || z8 || iMax > 1) {
                float fBitCount = Long.bitCount(j);
                if (z8) {
                    i5 = 0;
                } else {
                    if ((j & 1) != 0) {
                        i5 = 0;
                        if (!((LayoutParams) getChildAt(0).getLayoutParams()).preventEdgeOffset) {
                            fBitCount -= 0.5f;
                        }
                    } else {
                        i5 = 0;
                    }
                    if ((j & ((long) (1 << (childCount - 1)))) != 0 && !((LayoutParams) getChildAt(childCount - 1).getLayoutParams()).preventEdgeOffset) {
                        fBitCount -= 0.5f;
                    }
                }
                if (fBitCount > 0.0f) {
                    i5 = (int) ((i11 * i10) / fBitCount);
                }
                int i32 = 0;
                z2 = z;
                while (i32 < childCount) {
                    boolean z9 = z8;
                    float f = fBitCount;
                    if ((j & ((long) (1 << i32))) != 0) {
                        View childAt4 = getChildAt(i32);
                        LayoutParams layoutParams5 = (LayoutParams) childAt4.getLayoutParams();
                        if (childAt4 instanceof ActionMenuItemView) {
                            layoutParams5.extraPixels = i5;
                            layoutParams5.expanded = true;
                            if (i32 == 0 && !layoutParams5.preventEdgeOffset) {
                                layoutParams5.leftMargin = (-i5) / 2;
                            }
                            z2 = true;
                        } else if (layoutParams5.isOverflowButton) {
                            layoutParams5.extraPixels = i5;
                            layoutParams5.expanded = true;
                            layoutParams5.rightMargin = (-i5) / 2;
                            z2 = true;
                        } else {
                            if (i32 != 0) {
                                layoutParams5.leftMargin = i5 / 2;
                            }
                            if (i32 != childCount - 1) {
                                layoutParams5.rightMargin = i5 / 2;
                            }
                        }
                    }
                    i32++;
                    z8 = z9;
                    fBitCount = f;
                }
            }
            if (z2) {
                i4 = 0;
                while (i4 < childCount) {
                    childAt = getChildAt(i4);
                    layoutParams = (LayoutParams) childAt.getLayoutParams();
                    if (!layoutParams.expanded) {
                        childAt.measure(View.MeasureSpec.makeMeasureSpec((layoutParams.cellsUsed * i10) + layoutParams.extraPixels, 1073741824), childMeasureSpec);
                    }
                    i4++;
                    i14 = i14;
                }
            }
            if (mode != 1073741824) {
                i3 = i12;
            } else {
                i3 = size2;
            }
            setMeasuredDimension(i6, i3);
        }
        z2 = z;
        if (z2) {
            i4 = 0;
            while (i4 < childCount) {
                childAt = getChildAt(i4);
                layoutParams = (LayoutParams) childAt.getLayoutParams();
                if (!layoutParams.expanded) {
                    childAt.measure(View.MeasureSpec.makeMeasureSpec((layoutParams.cellsUsed * i10) + layoutParams.extraPixels, 1073741824), childMeasureSpec);
                }
                i4++;
                i14 = i14;
            }
        }
        if (mode != 1073741824) {
            i3 = i12;
        } else {
            i3 = size2;
        }
        setMeasuredDimension(i6, i3);
    }

    @Override // android.support.v7.widget.LinearLayoutCompat, android.view.ViewGroup
    protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams != null && (layoutParams instanceof LayoutParams);
    }

    public void dismissPopupMenus() {
        ActionMenuPresenter actionMenuPresenter = this.mPresenter;
        if (actionMenuPresenter != null) {
            actionMenuPresenter.dismissPopupMenus();
        }
    }

    @Override // android.view.View
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return false;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.support.v7.widget.LinearLayoutCompat, android.view.ViewGroup
    public LayoutParams generateDefaultLayoutParams() {
        LayoutParams layoutParams = new LayoutParams(-2, -2);
        layoutParams.gravity = 16;
        return layoutParams;
    }

    @Override // android.support.v7.widget.LinearLayoutCompat, android.view.ViewGroup
    public LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new LayoutParams(getContext(), attributeSet);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.support.v7.widget.LinearLayoutCompat, android.view.ViewGroup
    public LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams == null) {
            return generateDefaultLayoutParams();
        }
        LayoutParams layoutParams2 = layoutParams instanceof LayoutParams ? new LayoutParams((LayoutParams) layoutParams) : new LayoutParams(layoutParams);
        if (layoutParams2.gravity <= 0) {
            layoutParams2.gravity = 16;
        }
        return layoutParams2;
    }

    public LayoutParams generateOverflowButtonLayoutParams() {
        LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        layoutParamsGenerateDefaultLayoutParams.isOverflowButton = true;
        return layoutParamsGenerateDefaultLayoutParams;
    }

    public Menu getMenu() {
        if (this.mMenu == null) {
            Context context = getContext();
            MenuBuilder menuBuilder = new MenuBuilder(context);
            this.mMenu = menuBuilder;
            menuBuilder.setCallback(new MenuBuilderCallback());
            ActionMenuPresenter actionMenuPresenter = new ActionMenuPresenter(context);
            this.mPresenter = actionMenuPresenter;
            actionMenuPresenter.setReserveOverflow(true);
            ActionMenuPresenter actionMenuPresenter2 = this.mPresenter;
            MenuPresenter.Callback actionMenuPresenterCallback = this.mActionMenuPresenterCallback;
            if (actionMenuPresenterCallback == null) {
                actionMenuPresenterCallback = new ActionMenuPresenterCallback();
            }
            actionMenuPresenter2.setCallback(actionMenuPresenterCallback);
            this.mMenu.addMenuPresenter(this.mPresenter, this.mPopupContext);
            this.mPresenter.setMenuView(this);
        }
        return this.mMenu;
    }

    public Drawable getOverflowIcon() {
        getMenu();
        return this.mPresenter.getOverflowIcon();
    }

    public int getPopupTheme() {
        return this.mPopupTheme;
    }

    @Override // android.support.v7.view.menu.MenuView
    public int getWindowAnimations() {
        return 0;
    }

    protected boolean hasSupportDividerBeforeChildAt(int i) {
        if (i == 0) {
            return false;
        }
        KeyEvent.Callback childAt = getChildAt(i - 1);
        KeyEvent.Callback childAt2 = getChildAt(i);
        boolean zNeedsDividerAfter = false;
        if (i < getChildCount() && (childAt instanceof ActionMenuChildView)) {
            zNeedsDividerAfter = false | ((ActionMenuChildView) childAt).needsDividerAfter();
        }
        return (i <= 0 || !(childAt2 instanceof ActionMenuChildView)) ? zNeedsDividerAfter : zNeedsDividerAfter | ((ActionMenuChildView) childAt2).needsDividerBefore();
    }

    public boolean hideOverflowMenu() {
        ActionMenuPresenter actionMenuPresenter = this.mPresenter;
        return actionMenuPresenter != null && actionMenuPresenter.hideOverflowMenu();
    }

    @Override // android.support.v7.view.menu.MenuView
    public void initialize(MenuBuilder menuBuilder) {
        this.mMenu = menuBuilder;
    }

    @Override // android.support.v7.view.menu.MenuBuilder.ItemInvoker
    public boolean invokeItem(MenuItemImpl menuItemImpl) {
        return this.mMenu.performItemAction(menuItemImpl, 0);
    }

    public boolean isOverflowMenuShowPending() {
        ActionMenuPresenter actionMenuPresenter = this.mPresenter;
        return actionMenuPresenter != null && actionMenuPresenter.isOverflowMenuShowPending();
    }

    public boolean isOverflowMenuShowing() {
        ActionMenuPresenter actionMenuPresenter = this.mPresenter;
        return actionMenuPresenter != null && actionMenuPresenter.isOverflowMenuShowing();
    }

    public boolean isOverflowReserved() {
        return this.mReserveOverflow;
    }

    @Override // android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        ActionMenuPresenter actionMenuPresenter = this.mPresenter;
        if (actionMenuPresenter != null) {
            actionMenuPresenter.updateMenuView(false);
            if (this.mPresenter.isOverflowMenuShowing()) {
                this.mPresenter.hideOverflowMenu();
                this.mPresenter.showOverflowMenu();
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        dismissPopupMenus();
    }

    @Override // android.support.v7.widget.LinearLayoutCompat, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5;
        int width;
        int paddingLeft;
        ActionMenuView actionMenuView = this;
        if (!actionMenuView.mFormatItems) {
            super.onLayout(z, i, i2, i3, i4);
            return;
        }
        int childCount = getChildCount();
        int i6 = (i4 - i2) / 2;
        int dividerWidth = getDividerWidth();
        int measuredWidth = 0;
        int i7 = 0;
        int i8 = 0;
        int paddingRight = ((i3 - i) - getPaddingRight()) - getPaddingLeft();
        int i9 = 0;
        boolean zIsLayoutRtl = ViewUtils.isLayoutRtl(this);
        int i10 = 0;
        while (true) {
            i5 = 8;
            if (i10 >= childCount) {
                break;
            }
            View childAt = actionMenuView.getChildAt(i10);
            if (childAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
                if (layoutParams.isOverflowButton) {
                    measuredWidth = childAt.getMeasuredWidth();
                    if (actionMenuView.hasSupportDividerBeforeChildAt(i10)) {
                        measuredWidth += dividerWidth;
                    }
                    int measuredHeight = childAt.getMeasuredHeight();
                    if (zIsLayoutRtl) {
                        paddingLeft = getPaddingLeft() + layoutParams.leftMargin;
                        width = paddingLeft + measuredWidth;
                    } else {
                        width = (getWidth() - getPaddingRight()) - layoutParams.rightMargin;
                        paddingLeft = width - measuredWidth;
                    }
                    int i11 = i6 - (measuredHeight / 2);
                    childAt.layout(paddingLeft, i11, width, i11 + measuredHeight);
                    paddingRight -= measuredWidth;
                    i9 = 1;
                } else {
                    int measuredWidth2 = childAt.getMeasuredWidth() + layoutParams.leftMargin + layoutParams.rightMargin;
                    i7 += measuredWidth2;
                    paddingRight -= measuredWidth2;
                    if (actionMenuView.hasSupportDividerBeforeChildAt(i10)) {
                        i7 += dividerWidth;
                    }
                    i8++;
                }
            }
            i10++;
            i6 = i6;
            zIsLayoutRtl = zIsLayoutRtl;
        }
        int i12 = i6;
        boolean z2 = zIsLayoutRtl;
        if (childCount == 1 && i9 == 0) {
            View childAt2 = actionMenuView.getChildAt(0);
            int measuredWidth3 = childAt2.getMeasuredWidth();
            int measuredHeight2 = childAt2.getMeasuredHeight();
            int i13 = ((i3 - i) / 2) - (measuredWidth3 / 2);
            int i14 = i12 - (measuredHeight2 / 2);
            childAt2.layout(i13, i14, i13 + measuredWidth3, i14 + measuredHeight2);
            return;
        }
        int i15 = i8 - (i9 ^ 1);
        int iMax = Math.max(0, i15 > 0 ? paddingRight / i15 : 0);
        if (!z2) {
            int paddingLeft2 = getPaddingLeft();
            int i16 = 0;
            while (i16 < childCount) {
                View childAt3 = actionMenuView.getChildAt(i16);
                LayoutParams layoutParams2 = (LayoutParams) childAt3.getLayoutParams();
                if (childAt3.getVisibility() != 8 && !layoutParams2.isOverflowButton) {
                    int i17 = paddingLeft2 + layoutParams2.leftMargin;
                    int measuredWidth4 = childAt3.getMeasuredWidth();
                    int measuredHeight3 = childAt3.getMeasuredHeight();
                    int i18 = i12 - (measuredHeight3 / 2);
                    childAt3.layout(i17, i18, i17 + measuredWidth4, i18 + measuredHeight3);
                    paddingLeft2 = i17 + layoutParams2.rightMargin + measuredWidth4 + iMax;
                }
                i16++;
                actionMenuView = this;
            }
            return;
        }
        int width2 = getWidth() - getPaddingRight();
        int i19 = 0;
        while (i19 < childCount) {
            View childAt4 = actionMenuView.getChildAt(i19);
            LayoutParams layoutParams3 = (LayoutParams) childAt4.getLayoutParams();
            if (childAt4.getVisibility() != i5 && !layoutParams3.isOverflowButton) {
                int i20 = width2 - layoutParams3.rightMargin;
                int measuredWidth5 = childAt4.getMeasuredWidth();
                int measuredHeight4 = childAt4.getMeasuredHeight();
                int i21 = i12 - (measuredHeight4 / 2);
                childAt4.layout(i20 - measuredWidth5, i21, i20, i21 + measuredHeight4);
                width2 = i20 - ((layoutParams3.leftMargin + measuredWidth5) + iMax);
            }
            i19++;
            dividerWidth = dividerWidth;
            measuredWidth = measuredWidth;
            i5 = 8;
        }
    }

    @Override // android.support.v7.widget.LinearLayoutCompat, android.view.View
    protected void onMeasure(int i, int i2) {
        MenuBuilder menuBuilder;
        boolean z = this.mFormatItems;
        boolean z2 = View.MeasureSpec.getMode(i) == 1073741824;
        this.mFormatItems = z2;
        if (z != z2) {
            this.mFormatItemsWidth = 0;
        }
        int size = View.MeasureSpec.getSize(i);
        if (this.mFormatItems && (menuBuilder = this.mMenu) != null && size != this.mFormatItemsWidth) {
            this.mFormatItemsWidth = size;
            menuBuilder.onItemsChanged(true);
        }
        int childCount = getChildCount();
        if (this.mFormatItems && childCount > 0) {
            onMeasureExactFormat(i, i2);
            return;
        }
        for (int i3 = 0; i3 < childCount; i3++) {
            LayoutParams layoutParams = (LayoutParams) getChildAt(i3).getLayoutParams();
            layoutParams.rightMargin = 0;
            layoutParams.leftMargin = 0;
        }
        super.onMeasure(i, i2);
    }

    public MenuBuilder peekMenu() {
        return this.mMenu;
    }

    public void setExpandedActionViewsExclusive(boolean z) {
        this.mPresenter.setExpandedActionViewsExclusive(z);
    }

    public void setMenuCallbacks(MenuPresenter.Callback callback, MenuBuilder.Callback callback2) {
        this.mActionMenuPresenterCallback = callback;
        this.mMenuBuilderCallback = callback2;
    }

    public void setOnMenuItemClickListener(OnMenuItemClickListener onMenuItemClickListener) {
        this.mOnMenuItemClickListener = onMenuItemClickListener;
    }

    public void setOverflowIcon(Drawable drawable) {
        getMenu();
        this.mPresenter.setOverflowIcon(drawable);
    }

    public void setOverflowReserved(boolean z) {
        this.mReserveOverflow = z;
    }

    public void setPopupTheme(int i) {
        if (this.mPopupTheme != i) {
            this.mPopupTheme = i;
            if (i == 0) {
                this.mPopupContext = getContext();
            } else {
                this.mPopupContext = new ContextThemeWrapper(getContext(), i);
            }
        }
    }

    public void setPresenter(ActionMenuPresenter actionMenuPresenter) {
        this.mPresenter = actionMenuPresenter;
        actionMenuPresenter.setMenuView(this);
    }

    public boolean showOverflowMenu() {
        ActionMenuPresenter actionMenuPresenter = this.mPresenter;
        return actionMenuPresenter != null && actionMenuPresenter.showOverflowMenu();
    }
}

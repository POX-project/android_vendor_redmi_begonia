package com.mediatek.engineermode.iotconfig;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.ListAdapter;
import android.widget.ListView;

/* JADX INFO: loaded from: classes.dex */
public class IotConfigListView extends ListView implements View.OnTouchListener, AbsListView.OnScrollListener {
    private static final int MAXIMUM_LIST_ITEMS_VIEWABLE = 99;
    private int listViewTouchAction;

    public IotConfigListView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.listViewTouchAction = -1;
        setOnScrollListener(this);
        setOnTouchListener(this);
    }

    @Override // android.widget.ListView, android.widget.AbsListView, android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        int measuredHeight = 0;
        int mode = View.MeasureSpec.getMode(i2);
        int size = View.MeasureSpec.getSize(i2);
        if (mode != 1073741824) {
            ListAdapter adapter = getAdapter();
            if (adapter != null && !adapter.isEmpty()) {
                int i3 = 0;
                while (i3 < adapter.getCount() && i3 < MAXIMUM_LIST_ITEMS_VIEWABLE) {
                    View view = adapter.getView(i3, null, this);
                    if (view instanceof ViewGroup) {
                        view.setLayoutParams(new AbsListView.LayoutParams(-2, -2));
                    }
                    view.measure(i, i2);
                    measuredHeight += view.getMeasuredHeight();
                    i3++;
                }
                measuredHeight += getDividerHeight() * i3;
            }
            if (mode == Integer.MIN_VALUE && measuredHeight > size && measuredHeight > size) {
                measuredHeight = size;
            }
        } else {
            measuredHeight = getMeasuredHeight();
        }
        setMeasuredDimension(getMeasuredWidth(), measuredHeight);
    }

    @Override // android.widget.AbsListView.OnScrollListener
    public void onScroll(AbsListView absListView, int i, int i2, int i3) {
        if (getAdapter() == null || getAdapter().getCount() <= MAXIMUM_LIST_ITEMS_VIEWABLE || this.listViewTouchAction != 2) {
            return;
        }
        scrollBy(0, -1);
    }

    @Override // android.widget.AbsListView.OnScrollListener
    public void onScrollStateChanged(AbsListView absListView, int i) {
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        if (getAdapter() != null && getAdapter().getCount() > MAXIMUM_LIST_ITEMS_VIEWABLE && this.listViewTouchAction == 2) {
            scrollBy(0, 1);
        }
        return false;
    }
}

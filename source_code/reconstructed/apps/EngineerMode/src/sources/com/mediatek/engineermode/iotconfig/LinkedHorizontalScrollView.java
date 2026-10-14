package com.mediatek.engineermode.iotconfig;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.HorizontalScrollView;

/* JADX INFO: loaded from: classes.dex */
public class LinkedHorizontalScrollView extends HorizontalScrollView {
    private LinkScrollChangeListener listener;

    public interface LinkScrollChangeListener {
        void onscroll(LinkedHorizontalScrollView linkedHorizontalScrollView, int i, int i2, int i3, int i4);
    }

    public LinkedHorizontalScrollView(Context context) {
        super(context);
    }

    public LinkedHorizontalScrollView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public LinkedHorizontalScrollView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override // android.widget.HorizontalScrollView
    public void fling(int i) {
        super.fling(i / 2);
    }

    @Override // android.view.View
    protected void onScrollChanged(int i, int i2, int i3, int i4) {
        super.onScrollChanged(i, i2, i3, i4);
        LinkScrollChangeListener linkScrollChangeListener = this.listener;
        if (linkScrollChangeListener != null) {
            linkScrollChangeListener.onscroll(this, i, i2, i3, i4);
        }
    }

    public void setMyScrollChangeListener(LinkScrollChangeListener linkScrollChangeListener) {
        this.listener = linkScrollChangeListener;
    }
}

package com.mediatek.engineermode.iotconfig;

import android.content.Context;
import android.support.v4.view.ViewPager;
import android.util.AttributeSet;
import android.view.MotionEvent;

/* JADX INFO: loaded from: classes.dex */
public class IotViewPager extends ViewPager {
    public IotViewPager(Context context) {
        super(context);
    }

    public IotViewPager(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override // android.support.v4.view.ViewPager, android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        try {
            return super.onInterceptTouchEvent(motionEvent);
        } catch (IllegalArgumentException e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override // android.support.v4.view.ViewPager, android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        try {
            return super.onTouchEvent(motionEvent);
        } catch (IllegalArgumentException e) {
            e.printStackTrace();
            return false;
        }
    }
}

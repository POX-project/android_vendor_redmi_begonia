package com.mediatek.ygps;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
public class CnrBarView extends View {
    private static Paint sTextPaint;
    private Paint mBarInUsedPaint;
    private Paint mBarNotInUsedPaint;
    private float mCnr;
    private boolean mInUsed;

    public CnrBarView(Context context) {
        this(context, null);
    }

    public CnrBarView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Paint paint = new Paint();
        this.mBarInUsedPaint = paint;
        paint.setStyle(Paint.Style.FILL);
        if (sTextPaint == null) {
            Paint paint2 = new Paint();
            sTextPaint = paint2;
            paint2.setTextSize(30.0f);
        }
        Paint paint3 = new Paint();
        this.mBarNotInUsedPaint = paint3;
        paint3.setStyle(Paint.Style.STROKE);
        this.mBarNotInUsedPaint.setStrokeWidth(3.0f);
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawRect(0.0f, 3.0f, (getWidth() * this.mCnr) / 100.0f, getHeight() - 3, this.mInUsed ? this.mBarInUsedPaint : this.mBarNotInUsedPaint);
        canvas.drawText(String.format("%3.1f", Float.valueOf(this.mCnr)), 5.0f, (float) ((((double) getHeight()) * 1.5d) / 2.0d), sTextPaint);
    }

    void setValue(float f, int i, boolean z) {
        this.mCnr = f;
        if (z) {
            this.mBarInUsedPaint.setColor(i);
        } else {
            this.mBarNotInUsedPaint.setColor(i);
        }
        this.mInUsed = z;
    }
}

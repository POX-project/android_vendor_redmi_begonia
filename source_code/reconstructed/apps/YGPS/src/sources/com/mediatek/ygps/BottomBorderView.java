package com.mediatek.ygps;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.widget.TextView;

/* JADX INFO: loaded from: classes.dex */
public class BottomBorderView extends TextView {
    private Paint mBottomPaint;

    public BottomBorderView(Context context, int i) {
        this(context, (AttributeSet) null);
        Paint paint = new Paint();
        this.mBottomPaint = paint;
        paint.setColor(i);
        this.mBottomPaint.setStrokeWidth(2.0f);
        setTextSize(10.0f);
        setGravity(17);
    }

    public BottomBorderView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override // android.widget.TextView, android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawLine(0.0f, getHeight() - 2, getWidth(), getHeight() - 2, this.mBottomPaint);
    }
}

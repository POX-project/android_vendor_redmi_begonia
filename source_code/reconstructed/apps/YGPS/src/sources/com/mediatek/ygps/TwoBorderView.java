package com.mediatek.ygps;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;

/* JADX INFO: compiled from: BottomBorderView.java */
/* JADX INFO: loaded from: classes.dex */
class TwoBorderView extends BottomBorderView {
    private static Paint sPaint;

    public TwoBorderView(Context context, int i) {
        super(context, i);
        if (sPaint == null) {
            Paint paint = new Paint();
            sPaint = paint;
            paint.setColor(-16776961);
            sPaint.setStrokeWidth(2.0f);
        }
    }

    @Override // com.mediatek.ygps.BottomBorderView, android.widget.TextView, android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawLine(getWidth() - 2, 0.0f, getWidth() - 2, getHeight(), sPaint);
    }
}

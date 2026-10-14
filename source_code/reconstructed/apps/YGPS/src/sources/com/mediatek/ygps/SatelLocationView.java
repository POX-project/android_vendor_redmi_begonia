package com.mediatek.ygps;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.drawable.BitmapDrawable;
import android.util.AttributeSet;

/* JADX INFO: loaded from: classes.dex */
public class SatelLocationView extends SatelliteBaseView {
    private Paint mBgPaint;
    private Paint mCircleBorderPaint;
    private Paint mGraphicPaint;
    private Paint mTextPaint;
    private Bitmap mUnfixedBmp;
    private Bitmap mUnusedInFixBmp;
    private Bitmap mUsedInFixBmp;

    private static class Point {
        float mCoX;
        float mCoY;

        Point() {
        }

        Point(float f, float f2) {
            this.mCoX = f;
            this.mCoY = f2;
        }
    }

    public SatelLocationView(Context context) {
        this(context, null, 0);
    }

    public SatelLocationView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public SatelLocationView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mGraphicPaint = null;
        this.mTextPaint = null;
        this.mBgPaint = null;
        this.mCircleBorderPaint = null;
        this.mUnfixedBmp = null;
        this.mUsedInFixBmp = null;
        this.mUnusedInFixBmp = null;
        onCreateView();
    }

    private Point computeViewPostion(SatelliteInfo satelliteInfo, Point point, float f) {
        Point point2 = new Point();
        double d = (f * (90.0f - satelliteInfo.mElevation)) / 90.0f;
        double d2 = (float) ((((double) satelliteInfo.mAzimuth) * 3.141592653589793d) / 180.0d);
        point2.mCoX = point.mCoX + ((float) (Math.sin(d2) * d));
        point2.mCoY = point.mCoY - ((float) (d * Math.cos(d2)));
        return point2;
    }

    private Bitmap getBmpFromRes(int i) {
        return ((BitmapDrawable) getResources().getDrawable(i)).getBitmap();
    }

    private void onCreateView() {
        Paint paint = new Paint();
        this.mGraphicPaint = paint;
        paint.setStyle(Paint.Style.STROKE);
        this.mGraphicPaint.setAntiAlias(true);
        this.mGraphicPaint.setColor(getResources().getColor(R.color.grid));
        this.mGraphicPaint.setStrokeWidth(1.0f);
        Paint paint2 = new Paint();
        this.mTextPaint = paint2;
        paint2.setTextAlign(Paint.Align.CENTER);
        this.mTextPaint.setTextSize(12.0f);
        this.mTextPaint.setColor(getResources().getColor(R.color.skyview_text_color));
        Paint paint3 = new Paint();
        this.mBgPaint = paint3;
        paint3.setColor(getResources().getColor(R.color.skyview_background));
        Paint paint4 = new Paint();
        this.mCircleBorderPaint = paint4;
        paint4.setStyle(Paint.Style.STROKE);
        this.mCircleBorderPaint.setAntiAlias(true);
        this.mCircleBorderPaint.setStrokeWidth(3.0f);
        this.mUnfixedBmp = getBmpFromRes(R.drawable.satred);
        this.mUnusedInFixBmp = getBmpFromRes(R.drawable.satyellow);
        this.mUsedInFixBmp = getBmpFromRes(R.drawable.satgreen);
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        Point point = new Point(getWidth() / 2.0f, getHeight() / 2.0f);
        int iFloor = (int) Math.floor(Math.min(point.mCoX, point.mCoY) - 12.0f);
        canvas.drawPaint(this.mBgPaint);
        float f = iFloor >> 2;
        float f2 = iFloor;
        float[] fArr = {f, iFloor >> 1, 0.75f * f2, f2};
        for (int i = 0; i < 4; i++) {
            canvas.drawCircle(point.mCoX, point.mCoY, fArr[i], this.mGraphicPaint);
        }
        float f3 = point.mCoX;
        float f4 = point.mCoY;
        canvas.drawLine(f3 - f2, f4, f3 - f, f4, this.mGraphicPaint);
        float f5 = point.mCoX;
        float f6 = point.mCoY;
        canvas.drawLine(f5 + f2, f6, f5 + f, f6, this.mGraphicPaint);
        float f7 = point.mCoX;
        float f8 = point.mCoY;
        canvas.drawLine(f7, f8 - f2, f7, f8 - f, this.mGraphicPaint);
        float f9 = point.mCoX;
        float f10 = point.mCoY;
        canvas.drawLine(f9, f10 + f2, f9, f10 + f, this.mGraphicPaint);
        SatelliteInfoManager satelliteInfoManager = getSatelliteInfoManager();
        if (satelliteInfoManager != null) {
            for (SatelliteInfo satelliteInfo : satelliteInfoManager.getSatelInfoList()) {
                if (satelliteInfo.mPrn > 0 && satelliteInfo.mElevation > 0.0f && satelliteInfo.mAzimuth >= 0.0f) {
                    Point pointComputeViewPostion = computeViewPostion(satelliteInfo, point, f2);
                    Bitmap bitmap = (!satelliteInfoManager.isUsedInFix(-1) || satelliteInfo.mSnr <= 0.0f) ? this.mUnfixedBmp : satelliteInfo.mUsedInFix ? this.mUsedInFixBmp : this.mUnusedInFixBmp;
                    float height = bitmap.getHeight() / 2.0f;
                    float f11 = pointComputeViewPostion.mCoX - height;
                    float f12 = pointComputeViewPostion.mCoY - height;
                    canvas.drawBitmap(bitmap, f11, f12, this.mGraphicPaint);
                    this.mCircleBorderPaint.setColor(satelliteInfo.getColor());
                    canvas.drawCircle(pointComputeViewPostion.mCoX, pointComputeViewPostion.mCoY, height - 1.5f, this.mCircleBorderPaint);
                    canvas.drawText(String.valueOf(satelliteInfo.mPrn), f11, f12, this.mTextPaint);
                }
            }
        }
    }
}

package com.mediatek.lbs.em2.ui;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.location.GpsSatellite;
import android.location.GpsStatus;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class ViewGps extends View {
    private Paint mBackground;
    private Paint mColoredText;
    private Paint mGreen;
    private Paint mLine;
    int mPage;
    private Paint mRed;
    int mSatInView;
    ArrayList<SvData> mSvList;
    private Paint mText;
    float mTextSize;

    class SvData {
        float azi;
        int color;
        float ele;
        float snr;
        int svid;
        int type;
        boolean used;

        SvData(ViewGps viewGps) {
        }
    }

    public ViewGps(Context context) {
        this(context, null, 0);
    }

    public ViewGps(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public ViewGps(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mTextSize = 20.0f;
        this.mSatInView = 0;
        this.mSvList = new ArrayList<>();
        this.mPage = 0;
        Paint paint = new Paint();
        this.mBackground = paint;
        paint.setColor(-13421773);
        Paint paint2 = new Paint();
        this.mLine = paint2;
        paint2.setColor(-1);
        this.mLine.setAntiAlias(true);
        this.mLine.setStyle(Paint.Style.STROKE);
        this.mLine.setStrokeWidth(1.0f);
        Paint paint3 = new Paint();
        this.mColoredText = paint3;
        paint3.setColor(-1);
        this.mColoredText.setAntiAlias(true);
        this.mColoredText.setStyle(Paint.Style.STROKE);
        this.mColoredText.setStrokeWidth(2.0f);
        Paint paint4 = new Paint();
        this.mRed = paint4;
        paint4.setColor(-268500992);
        this.mRed.setAntiAlias(true);
        this.mRed.setStyle(Paint.Style.FILL_AND_STROKE);
        this.mRed.setStrokeWidth(1.0f);
        Paint paint5 = new Paint();
        this.mGreen = paint5;
        paint5.setColor(-1157580032);
        this.mGreen.setAntiAlias(true);
        this.mGreen.setStyle(Paint.Style.FILL);
        this.mGreen.setStrokeWidth(1.0f);
        Paint paint6 = new Paint();
        this.mText = paint6;
        paint6.setColor(-1);
        this.mText.setAntiAlias(true);
        this.mText.setStyle(Paint.Style.FILL);
        this.mText.setStrokeWidth(1.0f);
        this.mText.setTextAlign(Paint.Align.CENTER);
        this.mText.setTextSize(20.0f);
    }

    private static float checkCn(float f) {
        if (f > 50.0f) {
            return 50.0f;
        }
        return f;
    }

    private static float checkEle(float f) {
        if (f > 90.0f) {
            return 90.0f;
        }
        if (f < 0.0f) {
            return 0.0f;
        }
        return f;
    }

    private void draw(Canvas canvas, float f, float f2) {
        float f3 = f > f2 ? f2 : f;
        float f4 = (f3 / 1000.0f) * 30.0f;
        this.mTextSize = f4;
        this.mText.setTextSize(f4);
        log("w=" + f + " h=" + f2 + " min=" + f3 + " mTextSize=" + this.mTextSize);
        float f5 = (3.0f * f2) / 4.0f;
        drawSignals(canvas, 0.0f, f5, f, f2);
        float f6 = this.mTextSize;
        drawGpsView(canvas, f6, f6, f - f6, f5 - f6);
    }

    private static void drawCircleAndText(Canvas canvas, String str, float f, float f2, Paint paint, Paint paint2) {
        canvas.drawCircle(f, f2, getHeight(paint2) * 1.2f, paint);
        drawTextInCenter(canvas, str, f, f2, paint2);
    }

    private void drawGpsView(Canvas canvas, float f, float f2, float f3, float f4) {
        float f5 = f3 - f;
        float f6 = f4 - f2;
        float f7 = f5 < f6 ? f5 : f6;
        float f8 = (f5 / 2.0f) + f;
        float f9 = (f6 / 2.0f) + f2;
        float f10 = f7 / 6.0f;
        canvas.drawCircle(f8, f9, 3.0f * f10, this.mLine);
        canvas.drawCircle(f8, f9, f10 * 2.0f, this.mLine);
        canvas.drawCircle(f8, f9, f10 * 1.0f, this.mLine);
        float f11 = f7 / 2.0f;
        canvas.drawLine(f8 - f11, f9, f8 + f11, f9, this.mLine);
        canvas.drawLine(f8, f9 - f11, f8, f9 + f11, this.mLine);
        for (int i = 0; i < this.mSatInView; i++) {
            SvData svData = this.mSvList.get(i);
            String str = "" + svData.svid;
            float fCheckEle = checkEle(svData.ele);
            float f12 = svData.azi;
            boolean z = svData.used;
            this.mColoredText.setColor(svData.color);
            float f13 = (1.0f - (fCheckEle / 90.0f)) * f11;
            double d = (((double) f12) * 3.141592653589793d) / 180.0d;
            float fSin = ((float) Math.sin(d)) * f13;
            float f14 = (-((float) Math.cos(d))) * f13;
            float f15 = f8 + fSin;
            float f16 = f14 + f9;
            drawCircleAndText(canvas, str, f15, f16, z ? this.mGreen : this.mRed, this.mText);
            canvas.drawCircle(f15, f16, getHeight(this.mText) * 1.2f, this.mColoredText);
        }
    }

    private void drawSignals(Canvas canvas, float f, float f2, float f3, float f4) {
        float f5 = (f3 - f) / 16.0f;
        float f6 = this.mTextSize;
        float f7 = ((f4 - f2) - f6) / 50.0f;
        float f8 = f4 - f6;
        int i = this.mSatInView;
        int i2 = this.mPage;
        int i3 = 16;
        int i4 = i > (i2 + 1) * 16 ? 16 : i - (i2 * 16);
        int i5 = i4 < 0 ? 0 : i4;
        canvas.drawLine(f, f8, f3, f8, this.mLine);
        int i6 = 0;
        while (i6 < i5) {
            SvData svData = this.mSvList.get((this.mPage * i3) + i6);
            String str = "" + svData.svid;
            float f9 = svData.snr;
            boolean z = svData.used;
            this.mColoredText.setColor(svData.color);
            float f10 = i6 * f5;
            float f11 = f10 + (f5 / 2.0f);
            int i7 = i6 + 1;
            float f12 = i7 * f5;
            canvas.drawRect(f10, f8 - (checkCn(f9) * f7), f12, f8, z ? this.mGreen : this.mRed);
            canvas.drawRect(f10, f8 - (checkCn(f9) * f7), f12, f8, this.mColoredText);
            drawTextInCenter(canvas, str, f11, (this.mTextSize / 2.0f) + f8, this.mText);
            drawTextInCenter(canvas, String.format("%.01f", Float.valueOf(f9)), f11, f8 - (this.mTextSize / 2.0f), this.mText);
            i6 = i7;
            i3 = 16;
        }
    }

    private static void drawTextInCenter(Canvas canvas, String str, float f, float f2, Paint paint) {
        canvas.drawText(str, f, f2 + (getHeight(paint) / 2.0f), paint);
    }

    private static float getHeight(Paint paint) {
        return -(paint.ascent() + paint.descent());
    }

    private int getSvColor(int i) {
        if (i > 200) {
            return -16776961;
        }
        if (i > 64) {
            return -256;
        }
        return i > 0 ? -16711681 : -65536;
    }

    private int getSvType(int i) {
        if (i > 200) {
            return 5;
        }
        if (i > 64) {
            return 3;
        }
        if (i > 0) {
        }
        return 1;
    }

    private void log(String str) {
        Log.d("LocationEM", str);
    }

    private void sortByTypeAndSvidInView() {
        int i = this.mSatInView;
        int i2 = i / 16;
        if (i % 16 != 0) {
            i2++;
        }
        int i3 = 0;
        while (i3 < i2) {
            int i4 = this.mSatInView;
            int i5 = i3 + 1;
            int i6 = i4 > i5 * 16 ? 16 : i4 - (i3 * 16);
            int i7 = i3 * 16;
            for (int i8 = i7; i8 < i7 + i6; i8++) {
                SvData svDataRemove = this.mSvList.remove(i8);
                int i9 = i7;
                while (i9 < i8) {
                    SvData svData = this.mSvList.get(i9);
                    int i10 = svDataRemove.type;
                    int i11 = svData.type;
                    if (i10 < i11 || (i10 == i11 && svDataRemove.svid < svData.svid)) {
                        break;
                    } else {
                        i9++;
                    }
                }
                this.mSvList.add(i9, svDataRemove);
            }
            i3 = i5;
        }
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawPaint(this.mBackground);
        draw(canvas, getWidth(), getHeight());
    }

    public void resetGpsView() {
        this.mSatInView = 0;
        invalidate();
    }

    public void setDisplayPage(int i) {
        this.mPage = i;
        invalidate();
    }

    public void setGpsStatus(GpsStatus gpsStatus) {
        Iterable<GpsSatellite> satellites = gpsStatus.getSatellites();
        this.mSvList.clear();
        int i = 0;
        for (GpsSatellite gpsSatellite : satellites) {
            if (i >= 32) {
                log("ERR: the number of satellite is over 32");
                break;
            }
            SvData svData = new SvData(this);
            svData.svid = gpsSatellite.getPrn();
            svData.snr = gpsSatellite.getSnr();
            svData.ele = gpsSatellite.getElevation();
            svData.azi = gpsSatellite.getAzimuth();
            svData.used = gpsSatellite.usedInFix();
            svData.type = getSvType(svData.svid);
            svData.color = getSvColor(svData.svid);
            int i2 = 0;
            while (i2 < i) {
                if (svData.snr > this.mSvList.get(i2).snr) {
                    break;
                } else {
                    i2++;
                }
            }
            this.mSvList.add(i2, svData);
            i++;
        }
        this.mSatInView = i;
        sortByTypeAndSvidInView();
        invalidate();
    }
}

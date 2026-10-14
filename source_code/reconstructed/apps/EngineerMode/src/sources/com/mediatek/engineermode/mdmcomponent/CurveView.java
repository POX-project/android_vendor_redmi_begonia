package com.mediatek.engineermode.mdmcomponent;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.DashPathEffect;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.ScaleGestureDetector;
import android.view.View;
import com.mediatek.engineermode.Elog;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class CurveView extends View {
    private static final int BOTTOM_GAP = 20;
    private static final int FONT_SIZE = 10;
    private static final int LEFT_GAP = 5;
    private static final int LINE_LENGTH = 5;
    private static final int MAX_COUNT = 20;
    private static final int RIGHT_GAP = 10;
    private static final String TAG = "EmInfo/CurveView";
    private static final int TEXT_OFFSET_X = 5;
    private static final int TEXT_OFFSET_Y = 10;
    private static final int TOP_GAP = 70;
    int drawIndex;
    private boolean mAutoScroll;
    private Paint mBoldPaint;
    private ArrayList<Config> mConfigs;
    private ArrayList<float[]> mData;
    private GestureDetector mGestureDetector;
    private int mHeight;
    private Paint mLightPaint;
    private Matrix mMatrix;
    private Paint mPaint;
    private ScaleGestureDetector mScaleDetector;
    private boolean mScaling;
    private Paint mTextPaint;
    private Paint mTextPaint2;
    private RectF mViewRect;
    private int mWidth;
    Axis mXAxis;
    AxisConfig mXAxisConfig;
    AxisLabel mXAxisLabel;
    float mXMax;
    float mXMin;
    Axis mYAxis;
    AxisConfig mYAxisConfig;
    AxisLabel mYAxisLabel;
    float mYMax;
    float mYMin;
    boolean test;

    class Axis {
        long base;
        long min = 0;
        long max = 0;
        long step = 0;
        long count = 0;
        long lastMax = -1;

        Axis() {
        }

        void set(float f, float f2, AxisConfig axisConfig) {
            long j;
            if (axisConfig.configMin) {
                f = axisConfig.fixedMin ? axisConfig.min : Math.min(axisConfig.min, f);
            }
            if (axisConfig.configMax) {
                f2 = axisConfig.fixedMax ? axisConfig.max : Math.max(axisConfig.max, f2);
            }
            if (axisConfig.configStep) {
                long j2 = axisConfig.step;
                this.step = j2;
                long jFloor = (long) Math.floor(f / j2);
                long j3 = this.step;
                this.min = jFloor * j3;
                long jCeil = (long) Math.ceil(f2 / j3);
                long j4 = this.step;
                long j5 = jCeil * j4;
                this.max = j5;
                this.count = (j5 - this.min) / j4;
                if (axisConfig.configMaxCount && this.count > axisConfig.maxCount) {
                    while (this.count > axisConfig.maxCount) {
                        long jIncrease = CurveView.this.increase(this.step);
                        this.step = jIncrease;
                        long jFloor2 = (long) Math.floor(f / jIncrease);
                        long j6 = this.step;
                        this.min = jFloor2 * j6;
                        long jCeil2 = (long) Math.ceil(f2 / j6);
                        long j7 = this.step;
                        long j8 = jCeil2 * j7;
                        this.max = j8;
                        this.count = (j8 - this.min) / j7;
                    }
                }
            } else {
                this.step = 0L;
                this.count = 21L;
                while (true) {
                    j = this.count;
                    if (j <= 20) {
                        break;
                    }
                    long jIncrease2 = CurveView.this.increase(this.step);
                    this.step = jIncrease2;
                    long jFloor3 = (long) Math.floor(f / jIncrease2);
                    long j9 = this.step;
                    this.min = jFloor3 * j9;
                    long jCeil3 = (long) Math.ceil(f2 / j9);
                    long j10 = this.step;
                    long j11 = jCeil3 * j10;
                    this.max = j11;
                    this.count = (j11 - this.min) / j10;
                }
                if (j == 0) {
                    this.count = 1L;
                    this.min = this.max - this.step;
                }
            }
            this.base = axisConfig.base;
            Elog.d(CurveView.TAG, "[CurveView][Axis][set] min: " + this.min + " max: " + this.max + " step: " + this.step + " count: " + this.count);
        }
    }

    public static class AxisConfig {
        long base;
        boolean configMax;
        boolean configMaxCount = false;
        boolean configMin;
        boolean configStep;
        HashMap<Integer, String> customLabel;
        boolean fixedMax;
        boolean fixedMin;
        boolean fixedStep;
        long max;
        long maxCount;
        long min;
        long step;
        int type;
        static int TYPE_NORMAL = 0;
        static int TYPE_TIME = 1;
        static int TYPE_AUTO_SCALE = 3;
    }

    class AxisLabel {
        int type;
        long min = 0;
        long max = 0;
        long step = 0;
        long count = 0;

        AxisLabel() {
        }

        void set(Axis axis, AxisConfig axisConfig) {
            this.step = axis.step;
            this.min = axis.min;
            this.max = axis.max;
            this.count = axis.count;
            int i = axisConfig.type;
            this.type = i;
            if (i == AxisConfig.TYPE_TIME) {
                Rect rect = new Rect();
                CurveView.this.mTextPaint.getTextBounds("HH:mm:ss", 0, "HH:mm:ss".length(), rect);
                int iWidth = rect.width() * 2 > 0 ? rect.width() * 2 : 0;
                while (CurveView.this.mViewRect.width() / this.count < iWidth) {
                    long jIncrease = CurveView.this.increase(this.step);
                    this.step = jIncrease;
                    long jFloor = (long) Math.floor(this.min / jIncrease);
                    long j = this.step;
                    this.min = jFloor * j;
                    long jCeil = (long) Math.ceil(this.max / j);
                    long j2 = this.step;
                    long j3 = jCeil * j2;
                    this.max = j3;
                    this.count = (j3 - this.min) / j2;
                }
            }
            if (this.type == AxisConfig.TYPE_AUTO_SCALE) {
                Rect rect2 = new Rect();
                CurveView.this.mTextPaint.getTextBounds("100000", 0, "100000".length(), rect2);
                int iHeight = rect2.height() * 5 > 0 ? rect2.height() * 5 : 0;
                while (CurveView.this.mViewRect.height() / this.count < iHeight) {
                    long jIncrease2 = CurveView.this.increase(this.step);
                    this.step = jIncrease2;
                    long jFloor2 = (long) Math.floor(this.min / jIncrease2);
                    long j4 = this.step;
                    this.min = jFloor2 * j4;
                    long jCeil2 = (long) Math.ceil(this.max / j4);
                    long j5 = this.step;
                    long j6 = jCeil2 * j5;
                    this.max = j6;
                    this.count = (j6 - this.min) / j5;
                }
            }
            Elog.d(CurveView.TAG, "[CurveView][AxisLabel][set] minAxisLabel: " + this.min + " maxAxisLabel: " + this.max + " step: " + this.step + " count: " + this.count);
        }
    }

    public static class Config {
        int color = -16776961;
        int lineType;
        int lineWidth;
        String name;
        int newLineThreadshold;
        int nodeType;
        static int TYPE_CIRCLE = 0;
        static int TYPE_CROSS = 1;
        static int LINE_SOLID = 0;
        static int LINE_DASH = 1;
    }

    class GestureListener implements GestureDetector.OnGestureListener, GestureDetector.OnDoubleTapListener, ScaleGestureDetector.OnScaleGestureListener {
        private static final int DIRECTION_HORIZONTAL = 1;
        private static final int DIRECTION_UNKNOWN = 0;
        private static final int DIRECTION_VERTICAL = 2;
        private int mScaleDirection;
        private int mScrollDirection;
        private float[] mValues = new float[9];

        GestureListener() {
        }

        private void doScale(float f, float f2, float f3, float f4) {
            if (CurveView.this.mMatrix != null) {
                CurveView.this.mMatrix.postScale(f, f2, f3, f4);
            }
        }

        private void doTranslate(float f, float f2) {
            if (CurveView.this.mMatrix != null) {
                CurveView.this.mMatrix.postTranslate(-f, -f2);
            }
        }

        private void snapBack() {
            if (CurveView.this.mMatrix == null) {
                return;
            }
            float[] fArr = {CurveView.this.mXAxis.min, CurveView.this.mYAxis.min};
            float[] fArr2 = {CurveView.this.mXAxis.max, CurveView.this.mYAxis.max};
            CurveView.this.mMatrix.mapPoints(fArr);
            CurveView.this.mMatrix.mapPoints(fArr2);
            CurveView.this.mMatrix.postScale(Math.abs(fArr[0] - fArr2[0]) < CurveView.this.mViewRect.width() ? CurveView.this.mViewRect.width() / Math.abs(fArr[0] - fArr2[0]) : 1.0f, Math.abs(fArr[1] - fArr2[1]) < CurveView.this.mViewRect.height() ? CurveView.this.mViewRect.height() / Math.abs(fArr[1] - fArr2[1]) : 1.0f);
            float f = 0.0f;
            float f2 = 0.0f;
            float[] fArr3 = {CurveView.this.mXAxis.min, CurveView.this.mYAxis.min};
            float[] fArr4 = {CurveView.this.mXAxis.max, CurveView.this.mYAxis.max};
            CurveView.this.mMatrix.mapPoints(fArr3);
            CurveView.this.mMatrix.mapPoints(fArr4);
            if (fArr3[0] > CurveView.this.mViewRect.left) {
                f = -(fArr3[0] - CurveView.this.mViewRect.left);
            } else if (fArr4[0] < CurveView.this.mViewRect.right) {
                f = -(fArr4[0] - CurveView.this.mViewRect.right);
            }
            if (fArr3[1] < CurveView.this.mViewRect.bottom) {
                f2 = -(fArr3[1] - CurveView.this.mViewRect.bottom);
            } else if (fArr4[1] > CurveView.this.mViewRect.top) {
                f2 = -(fArr4[1] - CurveView.this.mViewRect.top);
            }
            CurveView.this.mMatrix.postTranslate(f, f2);
        }

        @Override // android.view.GestureDetector.OnDoubleTapListener
        public boolean onDoubleTap(MotionEvent motionEvent) {
            return true;
        }

        @Override // android.view.GestureDetector.OnDoubleTapListener
        public boolean onDoubleTapEvent(MotionEvent motionEvent) {
            return true;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public boolean onDown(MotionEvent motionEvent) {
            this.mScrollDirection = 0;
            return true;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
            return true;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public void onLongPress(MotionEvent motionEvent) {
        }

        @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
        public boolean onScale(ScaleGestureDetector scaleGestureDetector) {
            float scaleFactor = scaleGestureDetector.getScaleFactor();
            float width = scaleFactor < ((float) CurveView.this.getWidth()) / CurveView.this.mViewRect.width() ? scaleFactor : CurveView.this.getWidth() / CurveView.this.mViewRect.width();
            float height = scaleFactor < ((float) CurveView.this.getHeight()) / CurveView.this.mViewRect.height() ? scaleFactor : CurveView.this.getHeight() / CurveView.this.mViewRect.height();
            if (this.mScaleDirection == 0) {
                if (scaleGestureDetector.getCurrentSpanX() > scaleGestureDetector.getCurrentSpanY()) {
                    this.mScaleDirection = 1;
                    height = 1.0f;
                } else {
                    this.mScaleDirection = 2;
                    width = 1.0f;
                }
            }
            doScale(width, height, scaleGestureDetector.getFocusX(), scaleGestureDetector.getFocusY());
            snapBack();
            CurveView.this.updateAxisLabel();
            CurveView.this.invalidate();
            return true;
        }

        @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
        public boolean onScaleBegin(ScaleGestureDetector scaleGestureDetector) {
            CurveView.this.mScaling = true;
            return true;
        }

        @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
        public void onScaleEnd(ScaleGestureDetector scaleGestureDetector) {
            CurveView.this.mScaling = false;
            this.mScaleDirection = 0;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
            if (CurveView.this.mScaling) {
                return false;
            }
            if (this.mScrollDirection == 0) {
                if (Math.abs(f) > Math.abs(f2)) {
                    this.mScrollDirection = 1;
                } else {
                    this.mScrollDirection = 2;
                }
            }
            if (this.mScrollDirection == 1) {
                f2 = 0.0f;
            }
            if (this.mScrollDirection == 2) {
                f = 0.0f;
            }
            doTranslate(f, f2);
            snapBack();
            CurveView.this.invalidate();
            return true;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public void onShowPress(MotionEvent motionEvent) {
        }

        @Override // android.view.GestureDetector.OnDoubleTapListener
        public boolean onSingleTapConfirmed(MotionEvent motionEvent) {
            return true;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public boolean onSingleTapUp(MotionEvent motionEvent) {
            return true;
        }
    }

    public CurveView(Context context) {
        super(context);
        this.mXAxis = new Axis();
        this.mYAxis = new Axis();
        this.mXAxisLabel = new AxisLabel();
        this.mYAxisLabel = new AxisLabel();
        this.mXAxisConfig = null;
        this.mYAxisConfig = null;
        this.test = false;
        this.mData = null;
        this.mXMin = Float.POSITIVE_INFINITY;
        this.mYMin = Float.POSITIVE_INFINITY;
        this.mXMax = Float.NEGATIVE_INFINITY;
        this.mYMax = Float.NEGATIVE_INFINITY;
        this.drawIndex = 0;
        this.mWidth = 0;
        this.mHeight = 0;
        this.mAutoScroll = true;
        this.mViewRect = new RectF();
        init(context);
    }

    public CurveView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mXAxis = new Axis();
        this.mYAxis = new Axis();
        this.mXAxisLabel = new AxisLabel();
        this.mYAxisLabel = new AxisLabel();
        this.mXAxisConfig = null;
        this.mYAxisConfig = null;
        this.test = false;
        this.mData = null;
        this.mXMin = Float.POSITIVE_INFINITY;
        this.mYMin = Float.POSITIVE_INFINITY;
        this.mXMax = Float.NEGATIVE_INFINITY;
        this.mYMax = Float.NEGATIVE_INFINITY;
        this.drawIndex = 0;
        this.mWidth = 0;
        this.mHeight = 0;
        this.mAutoScroll = true;
        this.mViewRect = new RectF();
        init(context);
    }

    private void checkData() {
        for (float[] fArr : this.mData) {
            if (fArr != null) {
                for (int i = this.drawIndex; i < fArr.length; i += 2) {
                    float f = fArr[i];
                    float f2 = fArr[i + 1];
                    if (f < this.mXMin) {
                        this.mXMin = f;
                    }
                    if (f2 < this.mYMin) {
                        this.mYMin = f2;
                    }
                    if (f > this.mXMax) {
                        this.mXMax = f;
                    }
                    if (f2 > this.mYMax) {
                        this.mYMax = f2;
                    }
                }
                this.drawIndex = fArr.length;
            }
        }
    }

    private void drawSeries(Canvas canvas, RectF rectF) {
        canvas.save();
        canvas.clipRect(rectF);
        float[] fArr = {rectF.left, (rectF.top + rectF.bottom) / 2.0f};
        for (int i = 0; i < this.mConfigs.size(); i++) {
            fArr[0] = fArr[0] + 10.0f;
            this.mPaint.setColor(this.mConfigs.get(i).color);
            this.mPaint.setStrokeWidth(this.mConfigs.get(i).lineWidth);
            if (this.mConfigs.get(i).lineType == Config.LINE_DASH) {
                this.mPaint.setPathEffect(new DashPathEffect(new float[]{4.0f, 2.0f}, 0.0f));
            } else {
                this.mPaint.setPathEffect(null);
            }
            canvas.drawLine(fArr[0], fArr[1], 100.0f + fArr[0], fArr[1], this.mPaint);
            fArr[0] = fArr[0] + 50.0f;
            int i2 = this.mConfigs.get(i).nodeType;
            if (i2 == Config.TYPE_CIRCLE) {
                canvas.drawCircle(fArr[0], fArr[1], 5.0f, this.mPaint);
            } else if (i2 == Config.TYPE_CROSS) {
                canvas.drawLine(fArr[0] - 5.0f, fArr[1] - 5.0f, fArr[0] + 5.0f, fArr[1] + 5.0f, this.mPaint);
                canvas.drawLine(fArr[0] + 5.0f, fArr[1] - 5.0f, fArr[0] - 5.0f, fArr[1] + 5.0f, this.mPaint);
            }
            fArr[0] = fArr[0] + 60.0f;
            String str = this.mConfigs.get(i).name;
            canvas.drawText(str, fArr[0], fArr[1], this.mTextPaint2);
            Rect rect = new Rect();
            this.mTextPaint2.getTextBounds(str, 0, str.length(), rect);
            fArr[0] = fArr[0] + rect.width();
        }
        canvas.restore();
    }

    private String formatTime(long j) {
        return new SimpleDateFormat("HH:mm:ss").format(new Date(j));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long increase(long j) {
        if (j == 0) {
            return 1L;
        }
        return (String.valueOf(j).startsWith("1") || String.valueOf(j).startsWith("5")) ? j * 2 : (j / 2) * 5;
    }

    private void init(Context context) {
        GestureListener gestureListener = new GestureListener();
        this.mGestureDetector = new GestureDetector(context, gestureListener, null, true);
        this.mScaleDetector = new ScaleGestureDetector(context, gestureListener);
        Paint paint = new Paint();
        this.mPaint = paint;
        paint.setStyle(Paint.Style.STROKE);
        this.mPaint.setAntiAlias(true);
        Paint paint2 = new Paint();
        this.mBoldPaint = paint2;
        paint2.setStyle(Paint.Style.STROKE);
        this.mBoldPaint.setAntiAlias(false);
        this.mBoldPaint.setColor(ViewCompat.MEASURED_STATE_MASK);
        Paint paint3 = new Paint();
        this.mLightPaint = paint3;
        paint3.setStyle(Paint.Style.STROKE);
        this.mLightPaint.setAntiAlias(false);
        this.mLightPaint.setColor(-3355444);
        Paint paint4 = new Paint();
        this.mTextPaint = paint4;
        paint4.setStyle(Paint.Style.STROKE);
        this.mTextPaint.setAntiAlias(true);
        this.mTextPaint.setColor(ViewCompat.MEASURED_STATE_MASK);
        this.mTextPaint.setTextSize(10.0f);
        Paint paint5 = new Paint();
        this.mTextPaint2 = paint5;
        paint5.setStyle(Paint.Style.STROKE);
        this.mTextPaint2.setAntiAlias(true);
        this.mTextPaint2.setColor(ViewCompat.MEASURED_STATE_MASK);
        this.mTextPaint2.setTextSize(12.0f);
    }

    private void makeLastVisible() {
        float[] fArr = {this.mXMax, this.mYMax};
        this.mMatrix.mapPoints(fArr);
        this.mMatrix.postTranslate(fArr[0] > this.mViewRect.right ? -(fArr[0] - this.mViewRect.right) : 0.0f, 0.0f);
        this.mXAxisLabel.set(this.mXAxis, this.mXAxisConfig);
    }

    private void setMatrix() {
        this.mMatrix.postScale(this.mViewRect.width() / (this.mXAxis.max - this.mXAxis.min), (-this.mViewRect.height()) / (this.mYAxis.max - this.mYAxis.min), this.mXAxis.min, this.mYAxis.min);
        this.mMatrix.postTranslate(this.mViewRect.left - this.mXAxis.min, this.mViewRect.bottom - this.mYAxis.min);
    }

    private void updateAxis() {
        this.mXAxis.set(this.mXMin, this.mXMax, this.mXAxisConfig);
        this.mYAxis.set(this.mYMin, this.mYMax, this.mYAxisConfig);
        if (this.mYAxis.lastMax >= this.mYAxis.max) {
            return;
        }
        int iWidth = 0;
        Rect rect = new Rect();
        if (this.mYAxisConfig.customLabel != null) {
            for (String str : this.mYAxisConfig.customLabel.values()) {
                this.mTextPaint.getTextBounds(str, 0, str.length(), rect);
                if (rect.width() > iWidth) {
                    iWidth = rect.width();
                }
            }
        } else {
            String strValueOf = String.valueOf(this.mYMax);
            this.mTextPaint.getTextBounds(strValueOf, 0, strValueOf.length(), rect);
            iWidth = rect.width() > 0 ? rect.width() : 0;
            Axis axis = this.mYAxis;
            axis.lastMax = axis.max;
        }
        this.mViewRect.set(iWidth + 5, 70.0f, this.mWidth - 10, this.mHeight - 20);
        if (this.mMatrix == null || this.mYAxisConfig.type == AxisConfig.TYPE_AUTO_SCALE) {
            this.mMatrix = new Matrix();
            setMatrix();
        }
        updateAxisLabel();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateAxisLabel() {
        this.mXAxisLabel.set(this.mXAxis, this.mXAxisConfig);
        this.mYAxisLabel.set(this.mYAxis, this.mYAxisConfig);
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        int i;
        int i2;
        Matrix matrix;
        int i3;
        int i4;
        int i5;
        String str;
        boolean z;
        float[] fArr;
        String string;
        super.onDraw(canvas);
        if (this.mXAxisConfig == null || this.mYAxisConfig == null) {
            return;
        }
        if (this.test) {
            updateAxis();
            this.test = false;
        }
        int width = getWidth();
        int height = getHeight();
        Matrix matrix2 = this.mMatrix;
        RectF rectF = this.mViewRect;
        int i6 = 2;
        char c = 1;
        float f = 0.0f;
        float[] fArr2 = {this.mXMax, 0.0f};
        matrix2.mapPoints(fArr2);
        if (fArr2[0] <= width) {
            this.mAutoScroll = true;
        } else {
            this.mAutoScroll = false;
        }
        canvas.drawColor(-1);
        canvas.drawLine(rectF.left, rectF.bottom, rectF.right, rectF.bottom, this.mBoldPaint);
        canvas.drawLine(rectF.left, rectF.top, rectF.left, rectF.bottom, this.mBoldPaint);
        canvas.save();
        canvas.clipRect(rectF.left, 0.0f, this.mWidth, this.mHeight);
        long j = this.mXAxisLabel.min;
        while (j <= this.mXAxisLabel.max) {
            float[] fArr3 = new float[2];
            fArr3[0] = j;
            fArr3[c] = 0.0f;
            matrix2.mapPoints(fArr3);
            if (Math.abs(fArr3[0] - rectF.left) > 1.0f) {
                canvas.drawLine(fArr3[0], rectF.top, fArr3[0], rectF.bottom, this.mLightPaint);
            }
            j += this.mXAxisLabel.step;
            c = 1;
        }
        long j2 = this.mXAxis.min;
        while (j2 <= this.mXAxis.max) {
            float[] fArr4 = {j2, 0.0f};
            matrix2.mapPoints(fArr4);
            canvas.drawLine(fArr4[0], rectF.bottom, fArr4[0], rectF.bottom - 5.0f, this.mBoldPaint);
            j2 += this.mXAxis.step;
        }
        canvas.restore();
        long j3 = this.mXAxisLabel.min;
        while (j3 <= this.mXAxisLabel.max) {
            float[] fArr5 = {j3, f};
            matrix2.mapPoints(fArr5);
            if (this.mXAxisLabel.type == AxisConfig.TYPE_TIME) {
                String time = formatTime((this.mXAxis.base + j3) * 1000);
                Rect rect = new Rect();
                this.mTextPaint.getTextBounds(time, 0, time.length(), rect);
                canvas.drawText(time, fArr5[0] - (rect.width() / 2), rectF.bottom + 10.0f, this.mTextPaint);
            } else {
                canvas.drawText(Long.toString(j3), fArr5[0], rectF.bottom + 10.0f, this.mTextPaint);
            }
            j3 += this.mXAxisLabel.step;
            f = 0.0f;
        }
        canvas.save();
        canvas.clipRect(0.0f, rectF.top, this.mWidth, rectF.bottom);
        long j4 = this.mYAxisLabel.min;
        while (j4 <= this.mYAxisLabel.max) {
            float[] fArr6 = {0.0f, j4};
            matrix2.mapPoints(fArr6);
            if (Math.abs(fArr6[1] - rectF.bottom) > 1.0f) {
                canvas.drawLine(rectF.left, fArr6[1], rectF.right, fArr6[1], this.mLightPaint);
            }
            if (this.mYAxisConfig.customLabel != null) {
                string = this.mYAxisConfig.customLabel.get(Integer.valueOf((int) j4));
                if (string == null) {
                    string = "";
                }
            } else {
                string = Long.toString(j4);
            }
            canvas.drawText(string, 5.0f, r5[1], this.mTextPaint);
            j4 += this.mYAxisLabel.step;
        }
        long j5 = this.mYAxisConfig.type == AxisConfig.TYPE_AUTO_SCALE ? this.mYAxisLabel.step / 5 : this.mYAxis.step;
        for (long j6 = this.mYAxis.min; j6 <= this.mYAxis.max; j6 += j5) {
            float[] fArr7 = {0.0f, j6};
            matrix2.mapPoints(fArr7);
            canvas.drawLine(rectF.left, fArr7[1], rectF.left + 5.0f, fArr7[1], this.mBoldPaint);
        }
        canvas.restore();
        drawSeries(canvas, new RectF(10.0f, 10.0f, this.mWidth, 80.0f));
        ArrayList<float[]> arrayList = this.mData;
        if (arrayList != null && arrayList.size() >= 1) {
            canvas.save();
            canvas.clipRect(rectF.left, rectF.top, this.mWidth, rectF.bottom);
            int i7 = 0;
            while (i7 < this.mData.size()) {
                float[] fArr8 = this.mData.get(i7);
                if (fArr8 == null) {
                    i = width;
                    i2 = height;
                    matrix = matrix2;
                    i3 = i6;
                } else {
                    this.mPaint.setColor(this.mConfigs.get(i7).color);
                    this.mPaint.setStrokeWidth(this.mConfigs.get(i7).lineWidth);
                    String str2 = this.mConfigs.get(i7).name;
                    this.mConfigs.get(i7).name = str2.replaceAll("\\([0-9]+\\.[0-9]+\\)", "(" + fArr8[fArr8.length - 1] + ")");
                    if (this.mConfigs.get(i7).lineType == Config.LINE_DASH) {
                        float[] fArr9 = new float[i6];
                        // fill-array-data instruction
                        fArr9[0] = 4.0f;
                        fArr9[1] = 2.0f;
                        this.mPaint.setPathEffect(new DashPathEffect(fArr9, 0.0f));
                    } else {
                        this.mPaint.setPathEffect(null);
                    }
                    int i8 = this.mConfigs.get(i7).nodeType;
                    float[] fArr10 = new float[fArr8.length];
                    matrix2.mapPoints(fArr10, fArr8);
                    int i9 = 0;
                    while (i9 < fArr10.length) {
                        if (i8 == Config.TYPE_CIRCLE) {
                            i4 = width;
                            canvas.drawCircle(fArr10[i9], fArr10[i9 + 1], 5.0f, this.mPaint);
                            i5 = i9;
                            str = str2;
                            z = false;
                            fArr = fArr10;
                        } else {
                            String str3 = str2;
                            i4 = width;
                            if (i8 == Config.TYPE_CROSS) {
                                i5 = i9;
                                fArr = fArr10;
                                z = false;
                                str = str3;
                                canvas.drawLine(fArr10[i9] - 5.0f, fArr10[i9 + 1] - 5.0f, fArr10[i9] + 5.0f, fArr10[i9 + 1] + 5.0f, this.mPaint);
                                canvas.drawLine(fArr[i5] + 5.0f, fArr[i5 + 1] - 5.0f, fArr[i5] - 5.0f, fArr[i5 + 1] + 5.0f, this.mPaint);
                            } else {
                                i5 = i9;
                                str = str3;
                                z = false;
                                fArr = fArr10;
                            }
                        }
                        i9 = i5 + 2;
                        fArr10 = fArr;
                        fArr8 = fArr8;
                        str2 = str;
                        matrix2 = matrix2;
                        width = i4;
                        height = height;
                        i8 = i8;
                    }
                    i = width;
                    i2 = height;
                    matrix = matrix2;
                    float[] fArr11 = fArr10;
                    float[] fArr12 = fArr8;
                    if (fArr12.length <= 2) {
                        i3 = 2;
                    } else if (this.mConfigs.get(i7).newLineThreadshold == 0) {
                        canvas.drawLines(fArr11, this.mPaint);
                        canvas.drawLines(fArr11, 2, fArr11.length - 2, this.mPaint);
                        i3 = 2;
                    } else {
                        int i10 = 2;
                        int i11 = 0;
                        while (i11 < fArr12.length - i10) {
                            if (Math.abs(fArr12[i11 + 2] - fArr12[i11]) < 11.0f) {
                                canvas.drawLine(fArr11[i11], fArr11[i11 + 1], fArr11[i11 + 2], fArr11[i11 + 3], this.mPaint);
                            }
                            i11 += 2;
                            i10 = i10;
                        }
                        i3 = i10;
                    }
                }
                i7++;
                matrix2 = matrix;
                i6 = i3;
                width = i;
                height = i2;
            }
            canvas.restore();
        }
    }

    @Override // android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        this.mWidth = View.MeasureSpec.getSize(i);
        this.mHeight = View.MeasureSpec.getSize(i2);
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        this.mGestureDetector.onTouchEvent(motionEvent);
        this.mScaleDetector.onTouchEvent(motionEvent);
        return true;
    }

    public void setAxisConfig(AxisConfig axisConfig, AxisConfig axisConfig2) {
        this.mXAxisConfig = axisConfig;
        this.mYAxisConfig = axisConfig2;
        this.test = true;
        invalidate();
    }

    public void setConfig(Config[] configArr) {
        this.mConfigs = new ArrayList<>();
        for (Config config : configArr) {
            this.mConfigs.add(config);
        }
    }

    public void setData(int i, float[] fArr) {
        if (fArr == null || fArr.length <= 1 || this.mWidth == 0 || this.mHeight == 0) {
            return;
        }
        if (this.mData == null) {
            this.mData = new ArrayList<>();
            for (int i2 = 0; i2 < this.mConfigs.size(); i2++) {
                this.mData.add(null);
            }
        }
        this.mData.set(i, fArr);
        checkData();
        updateAxis();
        if (this.mAutoScroll) {
            makeLastVisible();
        }
        if (this.mScaling) {
            return;
        }
        invalidate();
    }
}

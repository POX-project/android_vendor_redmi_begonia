package com.mediatek.engineermode.mdmcomponent;

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.support.v4.media.subtitle.Cea708CCParser;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.ScaleGestureDetector;
import android.view.View;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class CurveViewEx extends View {
    private static final int BOTTOM_GAP = 20;
    private static final String COMPONENT_RSRPSINR_CONFIG_SHAREPRE = "telephony_rsrpsinr_config_settings";
    private static final int FONT_SIZE = 18;
    private static final int LEFT_GAP = 5;
    private static final int LINE_LENGTH = 5;
    private static final int MAX_COUNT = 20;
    private static final int MEDIUMWEAK_POINT1_X_DEFAULT = -140;
    private static final int MEDIUMWEAK_POINT1_Y_DEFAULT = 10;
    private static final int MEDIUMWEAK_POINT2_X_DEFAULT = -90;
    private static final int MEDIUMWEAK_POINT2_Y_DEFAULT = 10;
    private static final int MEDIUMWEAK_POINT3_X_DEFAULT = -90;
    private static final int MEDIUMWEAK_POINT3_Y_DEFAULT = -20;
    private static final int RIGHT_GAP = 10;
    private static final int STRONG_POINT1_X_DEFAULT = -80;
    private static final int STRONG_POINT1_Y_DEFAULT = 30;
    private static final int STRONG_POINT2_X_DEFAULT = -80;
    private static final int STRONG_POINT2_Y_DEFAULT = 20;
    private static final int STRONG_POINT3_Y_DEFAULT = 20;
    private static final String TAG = "EmInfo/CurveViewEx";
    private static final int TEXT_OFFSET_X = 16;
    private static final int TEXT_OFFSET_Y = 16;
    private static final int TOP_GAP = 70;
    private static final int WEAK_POINT1_X_DEFAULT = -140;
    private static final int WEAK_POINT1_Y_DEFAULT = 5;
    private static final int WEAK_POINT2_X_DEFAULT = -100;
    private static final int WEAK_POINT2_Y_DEFAULT = 5;
    private static final int WEAK_POINT3_X_DEFAULT = -100;
    private static final int WEAK_POINT3_Y_DEFAULT = -20;
    private boolean mAutoScroll;
    private Paint mBoldPaint;
    private ArrayList<Config> mConfigs;
    Context mContext;
    private ArrayList<float[]> mData;
    private GestureDetector mGestureDetector;
    private int mHeight;
    private Paint mLightPaint;
    private Matrix mMatrix;
    private int mMediumWeakEndX;
    private int mMediumWeakEndY;
    private int mMediumWeakStartX;
    private int mMediumWeakStartY;
    private int mOffsetY;
    private Paint mPaint;
    private int[] mRegionColor;
    private Paint mRegionPaint;
    private ScaleGestureDetector mScaleDetector;
    private boolean mScaling;
    private int mStrongX;
    private int mStrongY;
    private Paint mTextPaint;
    private Paint mTextPaint2;
    private RectF mViewRect;
    private int mWeakEndX;
    private int mWeakEndY;
    private int mWeakStartX;
    private int mWeakStartY;
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
    private static int strongPoint1X = -80;
    private static int strongPoint1Y = 30;
    private static int strongPoint2X = -80;
    private static int strongPoint2Y = 20;
    private static final int STRONG_POINT3_X_DEFAULT = -30;
    private static int strongPoint3X = STRONG_POINT3_X_DEFAULT;
    private static int strongPoint3Y = 20;
    private static int mediumWeakPoint1X = -140;
    private static int mediumWeakPoint1Y = 10;
    private static int mediumWeakPoint2X = -90;
    private static int mediumWeakPoint2Y = 10;
    private static int mediumWeakPoint3X = -90;
    private static int mediumWeakPoint3Y = -20;
    private static int weakPoint1X = -140;
    private static int weakPoint1Y = 5;
    private static int weakPoint2X = -100;
    private static int weakPoint2Y = 5;
    private static int weakPoint3X = -100;
    private static int weakPoint3Y = -20;

    class Axis {
        long base;
        long min = 0;
        long max = 0;
        long step = 0;
        long count = 0;

        Axis() {
        }

        void set(float f, float f2, AxisConfig axisConfig) {
            if (axisConfig.configMin) {
                f = axisConfig.fixedMin ? axisConfig.min : Math.min(axisConfig.min, f);
            }
            if (axisConfig.configMax) {
                f2 = axisConfig.fixedMax ? axisConfig.max : Math.max(axisConfig.max, f2);
            }
            if (axisConfig.configStep) {
                long j = axisConfig.step;
                this.step = j;
                long jFloor = (long) Math.floor(f / j);
                long j2 = this.step;
                this.min = jFloor * j2;
                long jCeil = (long) Math.ceil(f2 / j2);
                long j3 = this.step;
                long j4 = jCeil * j3;
                this.max = j4;
                this.count = (j4 - this.min) / j3;
            }
            this.base = axisConfig.base;
        }
    }

    public static class AxisConfig {
        static int TYPE_NORMAL = 0;
        static int TYPE_TIME = 1;
        long base;
        boolean configMax;
        boolean configMin;
        boolean configStep;
        HashMap<Integer, String> customLabel;
        boolean fixedMax;
        boolean fixedMin;
        boolean fixedStep;
        long max;
        long min;
        long step;
        int type;
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
            this.type = axisConfig.type;
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
        static int TYPE_RHOMBUS = 2;
        static int TYPE_SQUARE = 3;
        static int TYPE_TRIANGLE = 4;
        static int TYPE_NONE = 5;
        static int LINE_SOLID = 0;
        static int LINE_DASH = 1;
    }

    class GestureListenerEx implements GestureDetector.OnGestureListener, GestureDetector.OnDoubleTapListener, ScaleGestureDetector.OnScaleGestureListener {
        private static final int DIRECTION_HORIZONTAL = 1;
        private static final int DIRECTION_UNKNOWN = 0;
        private static final int DIRECTION_VERTICAL = 2;
        private int mScaleDirection;
        private int mScrollDirection;
        private float[] mValues = new float[9];

        GestureListenerEx() {
        }

        private void doScale(float f, float f2, float f3, float f4) {
            if (CurveViewEx.this.mMatrix != null) {
                CurveViewEx.this.mMatrix.postScale(f, f2, f3, f4);
            }
        }

        private void doTranslate(float f, float f2) {
            if (CurveViewEx.this.mMatrix != null) {
                CurveViewEx.this.mMatrix.postTranslate(-f, -f2);
            }
        }

        private void snapBack() {
            if (CurveViewEx.this.mMatrix == null) {
                return;
            }
            float[] fArr = {CurveViewEx.this.mXAxis.min, CurveViewEx.this.mYAxis.min};
            float[] fArr2 = {CurveViewEx.this.mXAxis.max, CurveViewEx.this.mYAxis.max};
            CurveViewEx.this.mMatrix.mapPoints(fArr);
            CurveViewEx.this.mMatrix.mapPoints(fArr2);
            CurveViewEx.this.mMatrix.postScale(Math.abs(fArr[0] - fArr2[0]) < CurveViewEx.this.mViewRect.width() ? CurveViewEx.this.mViewRect.width() / Math.abs(fArr[0] - fArr2[0]) : 1.0f, Math.abs(fArr[1] - fArr2[1]) < CurveViewEx.this.mViewRect.height() ? CurveViewEx.this.mViewRect.height() / Math.abs(fArr[1] - fArr2[1]) : 1.0f);
            float f = 0.0f;
            float f2 = 0.0f;
            float[] fArr3 = {CurveViewEx.this.mXAxis.min, CurveViewEx.this.mYAxis.min};
            float[] fArr4 = {CurveViewEx.this.mXAxis.max, CurveViewEx.this.mYAxis.max};
            CurveViewEx.this.mMatrix.mapPoints(fArr3);
            CurveViewEx.this.mMatrix.mapPoints(fArr4);
            if (fArr3[0] > CurveViewEx.this.mViewRect.left) {
                f = -(fArr3[0] - CurveViewEx.this.mViewRect.left);
            } else if (fArr4[0] < CurveViewEx.this.mViewRect.right) {
                f = -(fArr4[0] - CurveViewEx.this.mViewRect.right);
            }
            if (fArr3[1] < CurveViewEx.this.mViewRect.bottom) {
                f2 = -(fArr3[1] - CurveViewEx.this.mViewRect.bottom);
            } else if (fArr4[1] > CurveViewEx.this.mViewRect.top) {
                f2 = -(fArr4[1] - CurveViewEx.this.mViewRect.top);
            }
            CurveViewEx.this.mMatrix.postTranslate(f, f2);
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
            float f = scaleFactor;
            float f2 = scaleFactor;
            if (this.mScaleDirection == 0) {
                if (scaleGestureDetector.getCurrentSpanX() > scaleGestureDetector.getCurrentSpanY()) {
                    this.mScaleDirection = 1;
                } else {
                    this.mScaleDirection = 2;
                }
            }
            if (this.mScaleDirection == 1) {
                f2 = 1.0f;
            }
            if (this.mScaleDirection == 2) {
                f = 1.0f;
            }
            doScale(f, f2, scaleGestureDetector.getFocusX(), scaleGestureDetector.getFocusY());
            snapBack();
            CurveViewEx.this.invalidate();
            return true;
        }

        @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
        public boolean onScaleBegin(ScaleGestureDetector scaleGestureDetector) {
            CurveViewEx.this.mScaling = true;
            return true;
        }

        @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
        public void onScaleEnd(ScaleGestureDetector scaleGestureDetector) {
            CurveViewEx.this.mScaling = false;
            this.mScaleDirection = 0;
        }

        @Override // android.view.GestureDetector.OnGestureListener
        public boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
            if (CurveViewEx.this.mScaling) {
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
            CurveViewEx.this.invalidate();
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

    public CurveViewEx(Context context) {
        super(context);
        this.mContext = null;
        this.mXAxis = new Axis();
        this.mYAxis = new Axis();
        this.mXAxisLabel = new AxisLabel();
        this.mYAxisLabel = new AxisLabel();
        this.mXAxisConfig = null;
        this.mYAxisConfig = null;
        this.test = false;
        this.mData = null;
        this.mXMin = 0.0f;
        this.mYMin = 0.0f;
        this.mXMax = -30.0f;
        this.mYMax = 0.0f;
        this.mWidth = 0;
        this.mHeight = 0;
        this.mAutoScroll = true;
        this.mViewRect = new RectF();
        this.mRegionColor = new int[]{Color.rgb(43, 101, 171), Color.rgb(NfcCommand.CommandType.MTK_NFC_EM_MSG_END, Cea708CCParser.Const.CODE_C1_DF1, 0), Color.rgb(Cea708CCParser.Const.CODE_C1_DF0, Cea708CCParser.Const.CODE_C1_DF0, 186)};
        this.mOffsetY = 100;
        this.mStrongX = -80;
        this.mStrongY = 20;
        this.mMediumWeakStartX = -140;
        this.mMediumWeakEndX = -90;
        this.mMediumWeakStartY = -20;
        this.mMediumWeakEndY = 10;
        this.mWeakStartX = -140;
        this.mWeakEndX = -100;
        this.mWeakStartY = -20;
        this.mWeakEndY = 5;
        init(context);
        this.mContext = context;
    }

    public CurveViewEx(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mContext = null;
        this.mXAxis = new Axis();
        this.mYAxis = new Axis();
        this.mXAxisLabel = new AxisLabel();
        this.mYAxisLabel = new AxisLabel();
        this.mXAxisConfig = null;
        this.mYAxisConfig = null;
        this.test = false;
        this.mData = null;
        this.mXMin = 0.0f;
        this.mYMin = 0.0f;
        this.mXMax = -30.0f;
        this.mYMax = 0.0f;
        this.mWidth = 0;
        this.mHeight = 0;
        this.mAutoScroll = true;
        this.mViewRect = new RectF();
        this.mRegionColor = new int[]{Color.rgb(43, 101, 171), Color.rgb(NfcCommand.CommandType.MTK_NFC_EM_MSG_END, Cea708CCParser.Const.CODE_C1_DF1, 0), Color.rgb(Cea708CCParser.Const.CODE_C1_DF0, Cea708CCParser.Const.CODE_C1_DF0, 186)};
        this.mOffsetY = 100;
        this.mStrongX = -80;
        this.mStrongY = 20;
        this.mMediumWeakStartX = -140;
        this.mMediumWeakEndX = -90;
        this.mMediumWeakStartY = -20;
        this.mMediumWeakEndY = 10;
        this.mWeakStartX = -140;
        this.mWeakEndX = -100;
        this.mWeakStartY = -20;
        this.mWeakEndY = 5;
        init(context);
        this.mContext = context;
    }

    private void checkData() {
        for (float[] fArr : this.mData) {
            if (fArr != null) {
                for (int i = 0; i < fArr.length; i += 4) {
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
            }
        }
    }

    private void drawSeries(Canvas canvas, RectF rectF) {
        canvas.save();
        canvas.clipRect(rectF);
        float[] fArr = {rectF.left, ((rectF.top + rectF.bottom) / 2.0f) - 28.0f};
        this.mPaint.setStyle(Paint.Style.FILL);
        for (int i = 0; i < this.mConfigs.size(); i++) {
            Elog.v(TAG, "[CurveViewEx] drawSeries i " + i);
            fArr[0] = fArr[0] + 10.0f;
            this.mPaint.setColor(this.mConfigs.get(i).color);
            this.mPaint.setStrokeWidth((float) this.mConfigs.get(i).lineWidth);
            this.mPaint.setPathEffect(null);
            int i2 = this.mConfigs.get(i).nodeType;
            if (i2 == Config.TYPE_NONE) {
                canvas.drawLine(fArr[0], fArr[1], fArr[0] + 100.0f, fArr[1], this.mPaint);
            }
            fArr[0] = fArr[0] + 50.0f;
            if (i2 == Config.TYPE_CIRCLE) {
                canvas.drawCircle(fArr[0], fArr[1], 5.0f, this.mPaint);
            } else if (i2 != Config.TYPE_NONE) {
                if (i2 == Config.TYPE_TRIANGLE) {
                    Path path = new Path();
                    path.moveTo(fArr[0], fArr[1] - 5.0f);
                    path.lineTo(fArr[0] - 5.0f, fArr[1] + 5.0f);
                    path.lineTo(fArr[0] + 5.0f, fArr[1] + 5.0f);
                    path.close();
                    canvas.drawPath(path, this.mPaint);
                } else if (i2 == Config.TYPE_CROSS) {
                    canvas.drawLine(fArr[0] - 5.0f, fArr[1] - 5.0f, fArr[0] + 5.0f, fArr[1] + 5.0f, this.mPaint);
                    canvas.drawLine(fArr[0] + 5.0f, fArr[1] - 5.0f, fArr[0] - 5.0f, fArr[1] + 5.0f, this.mPaint);
                } else if (i2 == Config.TYPE_RHOMBUS) {
                    Path path2 = new Path();
                    path2.moveTo(fArr[0], fArr[1] + 5.0f);
                    path2.lineTo(fArr[0] - 5.0f, fArr[1]);
                    path2.lineTo(fArr[0], fArr[1] - 5.0f);
                    path2.lineTo(fArr[0] + 5.0f, fArr[1]);
                    path2.close();
                    canvas.drawPath(path2, this.mPaint);
                } else if (i2 == Config.TYPE_SQUARE) {
                    canvas.drawRect(fArr[0] - 5.0f, fArr[1] - 5.0f, fArr[0] + 5.0f, fArr[1] + 5.0f, this.mPaint);
                }
            }
            fArr[0] = fArr[0] + 60.0f;
            String str = this.mConfigs.get(i).name;
            if (i2 == Config.TYPE_CIRCLE || i2 == Config.TYPE_TRIANGLE) {
                canvas.drawText(str, fArr[0] - 40.0f, fArr[1], this.mTextPaint2);
            } else {
                canvas.drawText(str, fArr[0], fArr[1], this.mTextPaint2);
            }
            Rect rect = new Rect();
            this.mTextPaint2.getTextBounds(str, 0, str.length(), rect);
            fArr[0] = fArr[0] + rect.width();
        }
        canvas.restore();
    }

    private long increase(long j) {
        if (j == 0) {
            return 1L;
        }
        return (String.valueOf(j).startsWith("1") || String.valueOf(j).startsWith("5")) ? j * 2 : (j / 2) * 5;
    }

    private void init(Context context) {
        GestureListenerEx gestureListenerEx = new GestureListenerEx();
        this.mGestureDetector = new GestureDetector(context, gestureListenerEx, null, true);
        this.mScaleDetector = new ScaleGestureDetector(context, gestureListenerEx);
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
        this.mTextPaint.setTextSize(18.0f);
        Paint paint5 = new Paint();
        this.mTextPaint2 = paint5;
        paint5.setStyle(Paint.Style.STROKE);
        this.mTextPaint2.setAntiAlias(true);
        this.mTextPaint2.setColor(ViewCompat.MEASURED_STATE_MASK);
        this.mTextPaint2.setTextSize(18.0f);
        Paint paint6 = new Paint();
        this.mRegionPaint = paint6;
        paint6.setStyle(Paint.Style.STROKE);
        this.mRegionPaint.setAntiAlias(false);
        this.mRegionPaint.setTextSize(12.0f);
        this.mRegionPaint.setStrokeWidth(5.0f);
    }

    private void makeLastVisible() {
        float[] fArr = {this.mXMax, this.mYMax};
        this.mMatrix.mapPoints(fArr);
        this.mMatrix.postTranslate(fArr[0] > this.mViewRect.right ? -(fArr[0] - this.mViewRect.right) : 0.0f, 0.0f);
    }

    private void updateAxis() {
        this.mXAxis.set(this.mXMin, this.mXMax, this.mXAxisConfig);
        this.mYAxis.set(this.mYMin, this.mYMax, this.mYAxisConfig);
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
            long j = this.mYAxis.min;
            while (j <= this.mYAxis.max) {
                String strValueOf = String.valueOf(j);
                this.mTextPaint.getTextBounds(strValueOf, 0, strValueOf.length(), rect);
                if (rect.width() > iWidth) {
                    iWidth = rect.width();
                }
                j += this.mYAxis.step;
            }
        }
        this.mViewRect.set(iWidth + 5, 70.0f, this.mWidth - 10, this.mHeight - 20);
        if (this.mMatrix == null) {
            Matrix matrix = new Matrix();
            this.mMatrix = matrix;
            matrix.postScale(this.mViewRect.width() / (this.mXAxis.max - this.mXAxis.min), (-this.mViewRect.height()) / (this.mYAxis.max - this.mYAxis.min), this.mXAxis.min, this.mYAxis.min);
            this.mMatrix.postTranslate(this.mViewRect.left - this.mXAxis.min, this.mViewRect.bottom - this.mYAxis.min);
        }
        updateAxisLabel();
    }

    private void updateAxisLabel() {
        this.mXAxisLabel.set(this.mXAxis, this.mXAxisConfig);
        this.mYAxisLabel.set(this.mYAxis, this.mYAxisConfig);
    }

    public void getRSRPSINRConfig() {
        SharedPreferences sharedPreferences = this.mContext.getSharedPreferences(COMPONENT_RSRPSINR_CONFIG_SHAREPRE, 0);
        strongPoint1X = sharedPreferences.getInt(this.mContext.getString(R.string.strong_point_1x), -80);
        strongPoint1Y = sharedPreferences.getInt(this.mContext.getString(R.string.strong_point_1y), 30);
        strongPoint2X = sharedPreferences.getInt(this.mContext.getString(R.string.strong_point_2x), -80);
        strongPoint2Y = sharedPreferences.getInt(this.mContext.getString(R.string.strong_point_2y), 20);
        strongPoint3X = sharedPreferences.getInt(this.mContext.getString(R.string.strong_point_3x), STRONG_POINT3_X_DEFAULT);
        strongPoint3Y = sharedPreferences.getInt(this.mContext.getString(R.string.strong_point_3y), 20);
        mediumWeakPoint1X = sharedPreferences.getInt(this.mContext.getString(R.string.mediumweak_point_1x), -140);
        mediumWeakPoint1Y = sharedPreferences.getInt(this.mContext.getString(R.string.mediumweak_point_1y), 10);
        mediumWeakPoint2X = sharedPreferences.getInt(this.mContext.getString(R.string.mediumweak_point_2x), -90);
        mediumWeakPoint2Y = sharedPreferences.getInt(this.mContext.getString(R.string.mediumweak_point_2y), 10);
        mediumWeakPoint3X = sharedPreferences.getInt(this.mContext.getString(R.string.mediumweak_point_3x), -90);
        mediumWeakPoint3Y = sharedPreferences.getInt(this.mContext.getString(R.string.mediumweak_point_3y), -20);
        weakPoint1X = sharedPreferences.getInt(this.mContext.getString(R.string.weak_point_1x), -140);
        weakPoint1Y = sharedPreferences.getInt(this.mContext.getString(R.string.weak_point_1y), 5);
        weakPoint2X = sharedPreferences.getInt(this.mContext.getString(R.string.weak_point_2x), -100);
        weakPoint2Y = sharedPreferences.getInt(this.mContext.getString(R.string.weak_point_2y), 5);
        weakPoint3X = sharedPreferences.getInt(this.mContext.getString(R.string.weak_point_3x), -100);
        weakPoint3Y = sharedPreferences.getInt(this.mContext.getString(R.string.weak_point_3y), -20);
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        int i;
        float f;
        float[] fArr;
        char c;
        float[] fArr2;
        char c2;
        int i2;
        float[] fArr3;
        int i3;
        float f2;
        float f3;
        String string;
        super.onDraw(canvas);
        if (this.mXAxisConfig == null || this.mYAxisConfig == null) {
            return;
        }
        char c3 = 0;
        if (this.test) {
            updateAxis();
            this.test = false;
        }
        int width = getWidth();
        getHeight();
        Matrix matrix = this.mMatrix;
        RectF rectF = this.mViewRect;
        int i4 = 2;
        char c4 = 1;
        float[] fArr4 = {this.mXMax, 0.0f};
        matrix.mapPoints(fArr4);
        if (fArr4[0] <= width) {
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
            float[] fArr5 = new float[2];
            fArr5[0] = j;
            fArr5[c4] = 0.0f;
            matrix.mapPoints(fArr5);
            if (Math.abs(fArr5[0] - rectF.left) > 1.0f) {
                canvas.drawLine(fArr5[0], rectF.top, fArr5[0], rectF.bottom, this.mBoldPaint);
            }
            j += this.mXAxisLabel.step;
            c4 = 1;
        }
        canvas.restore();
        long j2 = this.mXAxisLabel.min;
        while (j2 <= this.mXAxisLabel.max) {
            float[] fArr6 = {j2, 0.0f};
            matrix.mapPoints(fArr6);
            canvas.drawText(Long.toString(j2), fArr6[0] - 16.0f, rectF.bottom + 16.0f, this.mTextPaint);
            j2 += this.mXAxisLabel.step;
        }
        canvas.save();
        canvas.clipRect(0.0f, rectF.top - this.mOffsetY, this.mWidth, rectF.bottom);
        long j3 = this.mYAxisLabel.min;
        while (j3 <= this.mYAxisLabel.max) {
            float[] fArr7 = new float[i4];
            fArr7[c3] = 0.0f;
            fArr7[1] = j3;
            matrix.mapPoints(fArr7);
            if (Math.abs(fArr7[1] - rectF.bottom) > 1.0f) {
                f3 = 5.0f;
                canvas.drawLine(rectF.left, fArr7[1], rectF.right, fArr7[1], this.mBoldPaint);
            } else {
                f3 = 5.0f;
            }
            if (this.mYAxisConfig.customLabel != null) {
                string = this.mYAxisConfig.customLabel.get(Integer.valueOf((int) j3));
                if (string == null) {
                    string = "";
                }
            } else {
                string = Long.toString(j3);
            }
            if (j3 == this.mYAxisLabel.max) {
                canvas.drawText(string, f3, fArr7[1] + 20.0f, this.mTextPaint);
            } else {
                canvas.drawText(string, f3, r2[1] - 16.0f, this.mTextPaint);
            }
            j3 += this.mYAxisLabel.step;
            width = width;
            c3 = 0;
            i4 = 2;
        }
        canvas.restore();
        canvas.save();
        canvas.clipRect(rectF.left, 0.0f, this.mWidth, this.mHeight);
        int i5 = strongPoint2X;
        int i6 = strongPoint2Y;
        float[] fArr8 = {strongPoint1X, strongPoint1Y, i5, i6, i5, i6, strongPoint3X, strongPoint3Y};
        matrix.mapPoints(fArr8);
        this.mRegionPaint.setColor(this.mRegionColor[0]);
        canvas.drawLines(fArr8, this.mRegionPaint);
        int i7 = mediumWeakPoint2X;
        int i8 = mediumWeakPoint2Y;
        float[] fArr9 = {mediumWeakPoint1X, mediumWeakPoint1Y, i7, i8, i7, i8, mediumWeakPoint3X, mediumWeakPoint3Y};
        matrix.mapPoints(fArr9);
        this.mRegionPaint.setColor(this.mRegionColor[1]);
        canvas.drawLines(fArr9, this.mRegionPaint);
        int i9 = weakPoint2X;
        int i10 = weakPoint2Y;
        float[] fArr10 = {weakPoint1X, weakPoint1Y, i9, i10, i9, i10, weakPoint3X, weakPoint3Y};
        matrix.mapPoints(fArr10);
        this.mRegionPaint.setColor(this.mRegionColor[2]);
        canvas.drawLines(fArr10, this.mRegionPaint);
        canvas.restore();
        drawSeries(canvas, new RectF(50.0f, 0.0f, this.mWidth, 86.0f));
        ArrayList<float[]> arrayList = this.mData;
        if (arrayList != null && arrayList.size() >= 1) {
            canvas.save();
            canvas.clipRect(rectF.left, 0.0f, this.mWidth, rectF.bottom);
            float[] fArr11 = {rectF.left, 100.0f};
            float f4 = 10.0f;
            canvas.drawText("PCI", fArr11[0] + 10.0f, fArr11[1] - 60.0f, this.mTextPaint2);
            char c5 = 0;
            canvas.drawText("EARFCN", fArr11[0] + 10.0f, fArr11[1] - 40.0f, this.mTextPaint2);
            int i11 = 0;
            while (i11 < this.mData.size()) {
                float[] fArr12 = this.mData.get(i11);
                if (fArr12 == null) {
                    f = f4;
                    fArr = fArr10;
                    c = c5;
                    i = i11;
                } else {
                    this.mPaint.setColor(this.mConfigs.get(i11).color);
                    this.mPaint.setStyle(Paint.Style.FILL);
                    int i12 = this.mConfigs.get(i11).nodeType;
                    float[] fArr13 = new float[fArr12.length];
                    matrix.mapPoints(fArr13, fArr12);
                    int i13 = 0;
                    while (i13 < fArr13.length) {
                        if (i12 == Config.TYPE_CIRCLE) {
                            fArr2 = fArr10;
                            canvas.drawCircle(fArr13[i13], fArr13[i13 + 1], f4, this.mPaint);
                            canvas.drawText(Float.toString(fArr12[i13 + 2]), fArr11[0] + 100.0f, fArr11[1] - 60.0f, this.mTextPaint2);
                            canvas.drawText(Float.toString(fArr12[i13 + 3]), fArr11[0] + 100.0f, fArr11[1] - 40.0f, this.mTextPaint2);
                            i2 = i13;
                            fArr3 = fArr13;
                            i3 = i11;
                            f2 = 10.0f;
                            c2 = 0;
                        } else {
                            int i14 = i11;
                            fArr2 = fArr10;
                            if (i12 == Config.TYPE_TRIANGLE) {
                                Path path = new Path();
                                path.moveTo(fArr13[i13], fArr13[i13 + 1] - 14.0f);
                                path.lineTo(fArr13[i13] - 14.0f, fArr13[i13 + 1] + 14.0f);
                                path.lineTo(fArr13[i13] + 14.0f, fArr13[i13 + 1] + 14.0f);
                                path.close();
                                canvas.drawPath(path, this.mPaint);
                                canvas.drawText(Float.toString(fArr12[i13 + 2]), fArr11[0] + 250.0f, fArr11[1] - 60.0f, this.mTextPaint2);
                                c2 = 0;
                                canvas.drawText(Float.toString(fArr12[i13 + 3]), fArr11[0] + 250.0f, fArr11[1] - 40.0f, this.mTextPaint2);
                                i2 = i13;
                                fArr3 = fArr13;
                                i3 = i14;
                                f2 = 10.0f;
                            } else {
                                c2 = 0;
                                if (i12 == Config.TYPE_CROSS) {
                                    i2 = i13;
                                    fArr3 = fArr13;
                                    i3 = i14;
                                    f2 = 10.0f;
                                    canvas.drawLine(fArr13[i13] - 5.0f, fArr13[i13 + 1] - 5.0f, fArr13[i13] + 5.0f, fArr13[i13 + 1] + 5.0f, this.mPaint);
                                    canvas.drawLine(fArr3[i2] + 5.0f, fArr3[i2 + 1] - 5.0f, fArr3[i2] - 5.0f, fArr3[i2 + 1] + 5.0f, this.mPaint);
                                } else {
                                    i2 = i13;
                                    fArr3 = fArr13;
                                    i3 = i14;
                                    f2 = 10.0f;
                                }
                            }
                        }
                        i13 = i2 + 4;
                        i11 = i3;
                        f4 = f2;
                        fArr10 = fArr2;
                        fArr13 = fArr3;
                        i12 = i12;
                        fArr12 = fArr12;
                    }
                    i = i11;
                    f = f4;
                    fArr = fArr10;
                    c = 0;
                }
                i11 = i + 1;
                f4 = f;
                c5 = c;
                fArr10 = fArr;
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

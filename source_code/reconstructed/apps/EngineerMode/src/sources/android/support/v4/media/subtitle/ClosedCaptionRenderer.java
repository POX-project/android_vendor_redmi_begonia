package android.support.v4.media.subtitle;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.Typeface;
import android.media.MediaFormat;
import android.support.mediacompat.R;
import android.support.v4.media.SubtitleData2;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.text.Spannable;
import android.text.SpannableStringBuilder;
import android.text.TextPaint;
import android.util.AttributeSet;
import android.view.View;
import android.view.accessibility.CaptioningManager;
import android.widget.LinearLayout;
import android.widget.TextView;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class ClosedCaptionRenderer extends SubtitleController.Renderer {
    private Cea608CCWidget mCCWidget;
    private final Context mContext;

    class Cea608CCWidget extends ClosedCaptionWidget implements Cea608CCParser.DisplayListener {
        private static final String DUMMY_TEXT = "1234567890123456789012345678901234";
        private final Rect mTextBounds;

        private class CCLayout extends LinearLayout implements ClosedCaptionWidget.ClosedCaptionLayout {
            private static final int MAX_ROWS = 15;
            private static final float SAFE_AREA_RATIO = 0.9f;
            private final CCLineBox[] mLineBoxes;

            CCLayout(Context context) {
                super(context);
                this.mLineBoxes = new CCLineBox[15];
                setGravity(GravityCompat.START);
                setOrientation(1);
                for (int i = 0; i < 15; i++) {
                    this.mLineBoxes[i] = Cea608CCWidget.this.new CCLineBox(getContext());
                    addView(this.mLineBoxes[i], -2, -2);
                }
            }

            @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
            protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
                int i5;
                int i6;
                int i7 = i3 - i;
                int i8 = i4 - i2;
                if (i7 * 3 >= i8 * 4) {
                    i5 = (i8 * 4) / 3;
                    i6 = i8;
                } else {
                    i5 = i7;
                    i6 = (i7 * 3) / 4;
                }
                int i9 = (int) (i5 * SAFE_AREA_RATIO);
                int i10 = (int) (i6 * SAFE_AREA_RATIO);
                int i11 = (i7 - i9) / 2;
                int i12 = (i8 - i10) / 2;
                for (int i13 = 0; i13 < 15; i13++) {
                    this.mLineBoxes[i13].layout(i11, ((i10 * i13) / 15) + i12, i11 + i9, (((i13 + 1) * i10) / 15) + i12);
                }
            }

            @Override // android.widget.LinearLayout, android.view.View
            protected void onMeasure(int i, int i2) {
                super.onMeasure(i, i2);
                int measuredWidth = getMeasuredWidth();
                int measuredHeight = getMeasuredHeight();
                if (measuredWidth * 3 >= measuredHeight * 4) {
                    measuredWidth = (measuredHeight * 4) / 3;
                } else {
                    measuredHeight = (measuredWidth * 3) / 4;
                }
                int i3 = (int) (measuredWidth * SAFE_AREA_RATIO);
                int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(((int) (measuredHeight * SAFE_AREA_RATIO)) / 15, 1073741824);
                int iMakeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(i3, 1073741824);
                for (int i4 = 0; i4 < 15; i4++) {
                    this.mLineBoxes[i4].measure(iMakeMeasureSpec2, iMakeMeasureSpec);
                }
            }

            @Override // android.support.v4.media.subtitle.ClosedCaptionWidget.ClosedCaptionLayout
            public void setCaptionStyle(CaptioningManager.CaptionStyle captionStyle) {
                for (int i = 0; i < 15; i++) {
                    this.mLineBoxes[i].setCaptionStyle(captionStyle);
                }
            }

            @Override // android.support.v4.media.subtitle.ClosedCaptionWidget.ClosedCaptionLayout
            public void setFontScale(float f) {
            }

            void update(SpannableStringBuilder[] spannableStringBuilderArr) {
                for (int i = 0; i < 15; i++) {
                    if (spannableStringBuilderArr[i] != null) {
                        this.mLineBoxes[i].setText(spannableStringBuilderArr[i], TextView.BufferType.SPANNABLE);
                        this.mLineBoxes[i].setVisibility(0);
                    } else {
                        this.mLineBoxes[i].setVisibility(4);
                    }
                }
            }
        }

        private class CCLineBox extends TextView {
            private static final float EDGE_OUTLINE_RATIO = 0.1f;
            private static final float EDGE_SHADOW_RATIO = 0.05f;
            private static final float FONT_PADDING_RATIO = 0.75f;
            private int mBgColor;
            private int mEdgeColor;
            private int mEdgeType;
            private float mOutlineWidth;
            private float mShadowOffset;
            private float mShadowRadius;
            private int mTextColor;

            CCLineBox(Context context) {
                super(context);
                this.mTextColor = -1;
                this.mBgColor = ViewCompat.MEASURED_STATE_MASK;
                this.mEdgeType = 0;
                this.mEdgeColor = 0;
                setGravity(17);
                setBackgroundColor(0);
                setTextColor(-1);
                setTypeface(Typeface.MONOSPACE);
                setVisibility(4);
                Resources resources = getContext().getResources();
                this.mOutlineWidth = resources.getDimensionPixelSize(R.dimen.subtitle_outline_width);
                this.mShadowRadius = resources.getDimensionPixelSize(R.dimen.subtitle_shadow_radius);
                this.mShadowOffset = resources.getDimensionPixelSize(R.dimen.subtitle_shadow_offset);
            }

            private void drawEdgeOutline(Canvas canvas) {
                TextPaint paint = getPaint();
                Paint.Style style = paint.getStyle();
                Paint.Join strokeJoin = paint.getStrokeJoin();
                float strokeWidth = paint.getStrokeWidth();
                setTextColor(this.mEdgeColor);
                paint.setStyle(Paint.Style.FILL_AND_STROKE);
                paint.setStrokeJoin(Paint.Join.ROUND);
                paint.setStrokeWidth(this.mOutlineWidth);
                super.onDraw(canvas);
                setTextColor(this.mTextColor);
                paint.setStyle(style);
                paint.setStrokeJoin(strokeJoin);
                paint.setStrokeWidth(strokeWidth);
                setBackgroundSpans(0);
                super.onDraw(canvas);
                setBackgroundSpans(this.mBgColor);
            }

            private void drawEdgeRaisedOrDepressed(Canvas canvas) {
                TextPaint paint = getPaint();
                Paint.Style style = paint.getStyle();
                paint.setStyle(Paint.Style.FILL);
                boolean z = this.mEdgeType == 3;
                int i = z ? -1 : this.mEdgeColor;
                int i2 = z ? this.mEdgeColor : -1;
                float f = this.mShadowRadius;
                float f2 = f / 2.0f;
                setShadowLayer(f, -f2, -f2, i);
                super.onDraw(canvas);
                setBackgroundSpans(0);
                setShadowLayer(this.mShadowRadius, f2, f2, i2);
                super.onDraw(canvas);
                paint.setStyle(style);
                setBackgroundSpans(this.mBgColor);
            }

            private void setBackgroundSpans(int i) {
                CharSequence text = getText();
                if (text instanceof Spannable) {
                    Spannable spannable = (Spannable) text;
                    for (Cea608CCParser.MutableBackgroundColorSpan mutableBackgroundColorSpan : (Cea608CCParser.MutableBackgroundColorSpan[]) spannable.getSpans(0, spannable.length(), Cea608CCParser.MutableBackgroundColorSpan.class)) {
                        mutableBackgroundColorSpan.setBackgroundColor(i);
                    }
                }
            }

            @Override // android.widget.TextView, android.view.View
            protected void onDraw(Canvas canvas) {
                int i = this.mEdgeType;
                if (i == -1 || i == 0 || i == 2) {
                    super.onDraw(canvas);
                } else if (i == 1) {
                    drawEdgeOutline(canvas);
                } else {
                    drawEdgeRaisedOrDepressed(canvas);
                }
            }

            @Override // android.widget.TextView, android.view.View
            protected void onMeasure(int i, int i2) {
                float size = View.MeasureSpec.getSize(i2) * FONT_PADDING_RATIO;
                setTextSize(0, size);
                this.mOutlineWidth = (EDGE_OUTLINE_RATIO * size) + 1.0f;
                float f = (EDGE_SHADOW_RATIO * size) + 1.0f;
                this.mShadowRadius = f;
                this.mShadowOffset = f;
                setScaleX(1.0f);
                getPaint().getTextBounds(Cea608CCWidget.DUMMY_TEXT, 0, Cea608CCWidget.DUMMY_TEXT.length(), Cea608CCWidget.this.mTextBounds);
                setScaleX(View.MeasureSpec.getSize(i) / Cea608CCWidget.this.mTextBounds.width());
                super.onMeasure(i, i2);
            }

            void setCaptionStyle(CaptioningManager.CaptionStyle captionStyle) {
                this.mTextColor = captionStyle.foregroundColor;
                this.mBgColor = captionStyle.backgroundColor;
                this.mEdgeType = captionStyle.edgeType;
                this.mEdgeColor = captionStyle.edgeColor;
                setTextColor(this.mTextColor);
                if (this.mEdgeType == 2) {
                    float f = this.mShadowRadius;
                    float f2 = this.mShadowOffset;
                    setShadowLayer(f, f2, f2, this.mEdgeColor);
                } else {
                    setShadowLayer(0.0f, 0.0f, 0.0f, 0);
                }
                invalidate();
            }
        }

        Cea608CCWidget(ClosedCaptionRenderer closedCaptionRenderer, Context context) {
            this(closedCaptionRenderer, context, null);
        }

        Cea608CCWidget(ClosedCaptionRenderer closedCaptionRenderer, Context context, AttributeSet attributeSet) {
            this(closedCaptionRenderer, context, attributeSet, 0);
        }

        Cea608CCWidget(ClosedCaptionRenderer closedCaptionRenderer, Context context, AttributeSet attributeSet, int i) {
            this(context, attributeSet, i, 0);
        }

        Cea608CCWidget(Context context, AttributeSet attributeSet, int i, int i2) {
            super(context, attributeSet, i, i2);
            this.mTextBounds = new Rect();
        }

        @Override // android.support.v4.media.subtitle.ClosedCaptionWidget
        public ClosedCaptionWidget.ClosedCaptionLayout createCaptionLayout(Context context) {
            return new CCLayout(context);
        }

        @Override // android.support.v4.media.subtitle.Cea608CCParser.DisplayListener
        public CaptioningManager.CaptionStyle getCaptionStyle() {
            return this.mCaptionStyle;
        }

        @Override // android.support.v4.media.subtitle.Cea608CCParser.DisplayListener
        public void onDisplayChanged(SpannableStringBuilder[] spannableStringBuilderArr) {
            ((CCLayout) this.mClosedCaptionLayout).update(spannableStringBuilderArr);
            if (this.mListener != null) {
                this.mListener.onChanged(this);
            }
        }
    }

    static class Cea608CaptionTrack extends SubtitleTrack {
        private final Cea608CCParser mCCParser;
        private final Cea608CCWidget mRenderingWidget;

        Cea608CaptionTrack(Cea608CCWidget cea608CCWidget, MediaFormat mediaFormat) {
            super(mediaFormat);
            this.mRenderingWidget = cea608CCWidget;
            this.mCCParser = new Cea608CCParser(this.mRenderingWidget);
        }

        @Override // android.support.v4.media.subtitle.SubtitleTrack
        public SubtitleTrack.RenderingWidget getRenderingWidget() {
            return this.mRenderingWidget;
        }

        @Override // android.support.v4.media.subtitle.SubtitleTrack
        public void onData(byte[] bArr, boolean z, long j) {
            this.mCCParser.parse(bArr);
        }

        @Override // android.support.v4.media.subtitle.SubtitleTrack
        public void updateView(ArrayList<SubtitleTrack.Cue> arrayList) {
        }
    }

    public ClosedCaptionRenderer(Context context) {
        this.mContext = context;
    }

    @Override // android.support.v4.media.subtitle.SubtitleController.Renderer
    public SubtitleTrack createTrack(MediaFormat mediaFormat) {
        if (SubtitleData2.MIMETYPE_TEXT_CEA_608.equals(mediaFormat.getString("mime"))) {
            if (this.mCCWidget == null) {
                this.mCCWidget = new Cea608CCWidget(this, this.mContext);
            }
            return new Cea608CaptionTrack(this.mCCWidget, mediaFormat);
        }
        throw new RuntimeException("No matching format: " + mediaFormat.toString());
    }

    @Override // android.support.v4.media.subtitle.SubtitleController.Renderer
    public boolean supports(MediaFormat mediaFormat) {
        if (mediaFormat.containsKey("mime")) {
            return SubtitleData2.MIMETYPE_TEXT_CEA_608.equals(mediaFormat.getString("mime"));
        }
        return false;
    }
}

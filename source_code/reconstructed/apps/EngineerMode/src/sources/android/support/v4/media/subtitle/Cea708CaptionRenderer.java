package android.support.v4.media.subtitle;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.media.MediaFormat;
import android.os.Handler;
import android.os.Message;
import android.support.v4.media.SubtitleData2;
import android.text.Layout;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import android.text.style.CharacterStyle;
import android.text.style.RelativeSizeSpan;
import android.text.style.StyleSpan;
import android.text.style.SubscriptSpan;
import android.text.style.SuperscriptSpan;
import android.text.style.UnderlineSpan;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.CaptioningManager;
import android.widget.RelativeLayout;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class Cea708CaptionRenderer extends SubtitleController.Renderer {
    private Cea708CCWidget mCCWidget;
    private final Context mContext;

    class Cea708CCWidget extends ClosedCaptionWidget implements Cea708CCParser.DisplayListener {
        private final CCHandler mCCHandler;

        class CCHandler implements Handler.Callback {
            private static final int CAPTION_ALL_WINDOWS_BITMAP = 255;
            private static final long CAPTION_CLEAR_INTERVAL_MS = 60000;
            private static final int CAPTION_WINDOWS_MAX = 8;
            private static final boolean DEBUG = false;
            private static final int MSG_CAPTION_CLEAR = 2;
            private static final int MSG_DELAY_CANCEL = 1;
            private static final String TAG = "CCHandler";
            private static final int TENTHS_OF_SECOND_IN_MILLIS = 100;
            private final CCLayout mCCLayout;
            private CCWindowLayout mCurrentWindowLayout;
            private boolean mIsDelayed = false;
            private final CCWindowLayout[] mCaptionWindowLayouts = new CCWindowLayout[8];
            private final ArrayList<Cea708CCParser.CaptionEvent> mPendingCaptionEvents = new ArrayList<>();
            private final Handler mHandler = new Handler(this);

            CCHandler(CCLayout cCLayout) {
                this.mCCLayout = cCLayout;
            }

            private void clearWindows(int i) {
                if (i == 0) {
                    return;
                }
                Iterator<CCWindowLayout> it = getWindowsFromBitmap(i).iterator();
                while (it.hasNext()) {
                    it.next().clear();
                }
            }

            private void defineWindow(Cea708CCParser.CaptionWindow captionWindow) {
                int i;
                if (captionWindow != null && (i = captionWindow.id) >= 0) {
                    CCWindowLayout[] cCWindowLayoutArr = this.mCaptionWindowLayouts;
                    if (i >= cCWindowLayoutArr.length) {
                        return;
                    }
                    CCWindowLayout cCWindowLayout = cCWindowLayoutArr[i];
                    if (cCWindowLayout == null) {
                        cCWindowLayout = new CCWindowLayout(Cea708CCWidget.this, this.mCCLayout.getContext());
                    }
                    cCWindowLayout.initWindow(this.mCCLayout, captionWindow);
                    this.mCaptionWindowLayouts[i] = cCWindowLayout;
                    this.mCurrentWindowLayout = cCWindowLayout;
                }
            }

            private void delay(int i) {
                if (i < 0 || i > 255) {
                    return;
                }
                this.mIsDelayed = true;
                Handler handler = this.mHandler;
                handler.sendMessageDelayed(handler.obtainMessage(1), i * 100);
            }

            private void delayCancel() {
                this.mIsDelayed = false;
                processPendingBuffer();
            }

            private void deleteWindows(int i) {
                if (i == 0) {
                    return;
                }
                for (CCWindowLayout cCWindowLayout : getWindowsFromBitmap(i)) {
                    cCWindowLayout.removeFromCaptionView();
                    this.mCaptionWindowLayouts[cCWindowLayout.getCaptionWindowId()] = null;
                }
            }

            private void displayWindows(int i) {
                if (i == 0) {
                    return;
                }
                Iterator<CCWindowLayout> it = getWindowsFromBitmap(i).iterator();
                while (it.hasNext()) {
                    it.next().show();
                }
            }

            private ArrayList<CCWindowLayout> getWindowsFromBitmap(int i) {
                CCWindowLayout cCWindowLayout;
                ArrayList<CCWindowLayout> arrayList = new ArrayList<>();
                for (int i2 = 0; i2 < 8; i2++) {
                    if (((1 << i2) & i) != 0 && (cCWindowLayout = this.mCaptionWindowLayouts[i2]) != null) {
                        arrayList.add(cCWindowLayout);
                    }
                }
                return arrayList;
            }

            private void hideWindows(int i) {
                if (i == 0) {
                    return;
                }
                Iterator<CCWindowLayout> it = getWindowsFromBitmap(i).iterator();
                while (it.hasNext()) {
                    it.next().hide();
                }
            }

            private void processPendingBuffer() {
                Iterator<Cea708CCParser.CaptionEvent> it = this.mPendingCaptionEvents.iterator();
                while (it.hasNext()) {
                    processCaptionEvent(it.next());
                }
                this.mPendingCaptionEvents.clear();
            }

            private void sendBufferToCurrentWindow(String str) {
                CCWindowLayout cCWindowLayout = this.mCurrentWindowLayout;
                if (cCWindowLayout != null) {
                    cCWindowLayout.sendBuffer(str);
                    this.mHandler.removeMessages(2);
                    Handler handler = this.mHandler;
                    handler.sendMessageDelayed(handler.obtainMessage(2), CAPTION_CLEAR_INTERVAL_MS);
                }
            }

            private void sendControlToCurrentWindow(char c) {
                CCWindowLayout cCWindowLayout = this.mCurrentWindowLayout;
                if (cCWindowLayout != null) {
                    cCWindowLayout.sendControl(c);
                }
            }

            private void setCurrentWindowLayout(int i) {
                CCWindowLayout cCWindowLayout;
                if (i >= 0) {
                    CCWindowLayout[] cCWindowLayoutArr = this.mCaptionWindowLayouts;
                    if (i < cCWindowLayoutArr.length && (cCWindowLayout = cCWindowLayoutArr[i]) != null) {
                        this.mCurrentWindowLayout = cCWindowLayout;
                    }
                }
            }

            private void setPenAttr(Cea708CCParser.CaptionPenAttr captionPenAttr) {
                CCWindowLayout cCWindowLayout = this.mCurrentWindowLayout;
                if (cCWindowLayout != null) {
                    cCWindowLayout.setPenAttr(captionPenAttr);
                }
            }

            private void setPenColor(Cea708CCParser.CaptionPenColor captionPenColor) {
                CCWindowLayout cCWindowLayout = this.mCurrentWindowLayout;
                if (cCWindowLayout != null) {
                    cCWindowLayout.setPenColor(captionPenColor);
                }
            }

            private void setPenLocation(Cea708CCParser.CaptionPenLocation captionPenLocation) {
                CCWindowLayout cCWindowLayout = this.mCurrentWindowLayout;
                if (cCWindowLayout != null) {
                    cCWindowLayout.setPenLocation(captionPenLocation.row, captionPenLocation.column);
                }
            }

            private void setWindowAttr(Cea708CCParser.CaptionWindowAttr captionWindowAttr) {
                CCWindowLayout cCWindowLayout = this.mCurrentWindowLayout;
                if (cCWindowLayout != null) {
                    cCWindowLayout.setWindowAttr(captionWindowAttr);
                }
            }

            private void toggleWindows(int i) {
                if (i == 0) {
                    return;
                }
                for (CCWindowLayout cCWindowLayout : getWindowsFromBitmap(i)) {
                    if (cCWindowLayout.isShown()) {
                        cCWindowLayout.hide();
                    } else {
                        cCWindowLayout.show();
                    }
                }
            }

            @Override // android.os.Handler.Callback
            public boolean handleMessage(Message message) {
                int i = message.what;
                if (i == 1) {
                    delayCancel();
                    return true;
                }
                if (i != 2) {
                    return false;
                }
                clearWindows(255);
                return true;
            }

            public void processCaptionEvent(Cea708CCParser.CaptionEvent captionEvent) {
                if (this.mIsDelayed) {
                    this.mPendingCaptionEvents.add(captionEvent);
                }
                switch (captionEvent.type) {
                    case 1:
                        sendBufferToCurrentWindow((String) captionEvent.obj);
                        break;
                    case 2:
                        sendControlToCurrentWindow(((Character) captionEvent.obj).charValue());
                        break;
                    case 3:
                        setCurrentWindowLayout(((Integer) captionEvent.obj).intValue());
                        break;
                    case 4:
                        clearWindows(((Integer) captionEvent.obj).intValue());
                        break;
                    case 5:
                        displayWindows(((Integer) captionEvent.obj).intValue());
                        break;
                    case 6:
                        hideWindows(((Integer) captionEvent.obj).intValue());
                        break;
                    case 7:
                        toggleWindows(((Integer) captionEvent.obj).intValue());
                        break;
                    case 8:
                        deleteWindows(((Integer) captionEvent.obj).intValue());
                        break;
                    case 9:
                        delay(((Integer) captionEvent.obj).intValue());
                        break;
                    case 10:
                        delayCancel();
                        break;
                    case 11:
                        reset();
                        break;
                    case 12:
                        setPenAttr((Cea708CCParser.CaptionPenAttr) captionEvent.obj);
                        break;
                    case 13:
                        setPenColor((Cea708CCParser.CaptionPenColor) captionEvent.obj);
                        break;
                    case 14:
                        setPenLocation((Cea708CCParser.CaptionPenLocation) captionEvent.obj);
                        break;
                    case 15:
                        setWindowAttr((Cea708CCParser.CaptionWindowAttr) captionEvent.obj);
                        break;
                    case 16:
                        defineWindow((Cea708CCParser.CaptionWindow) captionEvent.obj);
                        break;
                }
            }

            public void reset() {
                this.mCurrentWindowLayout = null;
                this.mIsDelayed = false;
                this.mPendingCaptionEvents.clear();
                for (int i = 0; i < 8; i++) {
                    CCWindowLayout[] cCWindowLayoutArr = this.mCaptionWindowLayouts;
                    if (cCWindowLayoutArr[i] != null) {
                        cCWindowLayoutArr[i].removeFromCaptionView();
                    }
                    this.mCaptionWindowLayouts[i] = null;
                }
                this.mCCLayout.setVisibility(4);
                this.mHandler.removeMessages(2);
            }
        }

        class CCLayout extends ScaledLayout implements ClosedCaptionWidget.ClosedCaptionLayout {
            private static final float SAFE_TITLE_AREA_SCALE_END_X = 0.9f;
            private static final float SAFE_TITLE_AREA_SCALE_END_Y = 0.9f;
            private static final float SAFE_TITLE_AREA_SCALE_START_X = 0.1f;
            private static final float SAFE_TITLE_AREA_SCALE_START_Y = 0.1f;
            private final ScaledLayout mSafeTitleAreaLayout;

            CCLayout(Context context) {
                super(context);
                ScaledLayout scaledLayout = Cea708CCWidget.this.new ScaledLayout(context);
                this.mSafeTitleAreaLayout = scaledLayout;
                addView(scaledLayout, new ScaledLayout.ScaledLayoutParams(0.1f, 0.9f, 0.1f, 0.9f));
            }

            public void addOrUpdateViewToSafeTitleArea(CCWindowLayout cCWindowLayout, ScaledLayout.ScaledLayoutParams scaledLayoutParams) {
                if (this.mSafeTitleAreaLayout.indexOfChild(cCWindowLayout) < 0) {
                    this.mSafeTitleAreaLayout.addView(cCWindowLayout, scaledLayoutParams);
                } else {
                    this.mSafeTitleAreaLayout.updateViewLayout(cCWindowLayout, scaledLayoutParams);
                }
            }

            public void removeViewFromSafeTitleArea(CCWindowLayout cCWindowLayout) {
                this.mSafeTitleAreaLayout.removeView(cCWindowLayout);
            }

            @Override // android.support.v4.media.subtitle.ClosedCaptionWidget.ClosedCaptionLayout
            public void setCaptionStyle(CaptioningManager.CaptionStyle captionStyle) {
                int childCount = this.mSafeTitleAreaLayout.getChildCount();
                for (int i = 0; i < childCount; i++) {
                    ((CCWindowLayout) this.mSafeTitleAreaLayout.getChildAt(i)).setCaptionStyle(captionStyle);
                }
            }

            @Override // android.support.v4.media.subtitle.ClosedCaptionWidget.ClosedCaptionLayout
            public void setFontScale(float f) {
                int childCount = this.mSafeTitleAreaLayout.getChildCount();
                for (int i = 0; i < childCount; i++) {
                    ((CCWindowLayout) this.mSafeTitleAreaLayout.getChildAt(i)).setFontScale(f);
                }
            }
        }

        class CCView extends SubtitleView {
            CCView(Cea708CCWidget cea708CCWidget, Context context) {
                this(cea708CCWidget, context, null);
            }

            CCView(Cea708CCWidget cea708CCWidget, Context context, AttributeSet attributeSet) {
                this(cea708CCWidget, context, attributeSet, 0);
            }

            CCView(Cea708CCWidget cea708CCWidget, Context context, AttributeSet attributeSet, int i) {
                this(context, attributeSet, i, 0);
            }

            CCView(Context context, AttributeSet attributeSet, int i, int i2) {
                super(context, attributeSet, i, i2);
            }

            void setCaptionStyle(CaptioningManager.CaptionStyle captionStyle) {
                if (captionStyle.hasForegroundColor()) {
                    setForegroundColor(captionStyle.foregroundColor);
                }
                if (captionStyle.hasBackgroundColor()) {
                    setBackgroundColor(captionStyle.backgroundColor);
                }
                if (captionStyle.hasEdgeType()) {
                    setEdgeType(captionStyle.edgeType);
                }
                if (captionStyle.hasEdgeColor()) {
                    setEdgeColor(captionStyle.edgeColor);
                }
                setTypeface(captionStyle.getTypeface());
            }
        }

        private class CCWindowLayout extends RelativeLayout implements View.OnLayoutChangeListener {
            private static final int ANCHOR_HORIZONTAL_16_9_MAX = 209;
            private static final int ANCHOR_HORIZONTAL_MODE_CENTER = 1;
            private static final int ANCHOR_HORIZONTAL_MODE_LEFT = 0;
            private static final int ANCHOR_HORIZONTAL_MODE_RIGHT = 2;
            private static final int ANCHOR_MODE_DIVIDER = 3;
            private static final int ANCHOR_RELATIVE_POSITIONING_MAX = 99;
            private static final int ANCHOR_VERTICAL_MAX = 74;
            private static final int ANCHOR_VERTICAL_MODE_BOTTOM = 2;
            private static final int ANCHOR_VERTICAL_MODE_CENTER = 1;
            private static final int ANCHOR_VERTICAL_MODE_TOP = 0;
            private static final int MAX_COLUMN_COUNT_16_9 = 42;
            private static final float PROPORTION_PEN_SIZE_LARGE = 1.25f;
            private static final float PROPORTION_PEN_SIZE_SMALL = 0.75f;
            private static final String TAG = "CCWindowLayout";
            private final SpannableStringBuilder mBuilder;
            private CCLayout mCCLayout;
            private CCView mCCView;
            private CaptioningManager.CaptionStyle mCaptionStyle;
            private int mCaptionWindowId;
            private final List<CharacterStyle> mCharacterStyles;
            private float mFontScale;
            private int mLastCaptionLayoutHeight;
            private int mLastCaptionLayoutWidth;
            private int mRow;
            private int mRowLimit;
            private float mTextSize;
            private String mWidestChar;

            CCWindowLayout(Cea708CCWidget cea708CCWidget, Context context) {
                this(cea708CCWidget, context, null);
            }

            CCWindowLayout(Cea708CCWidget cea708CCWidget, Context context, AttributeSet attributeSet) {
                this(cea708CCWidget, context, attributeSet, 0);
            }

            CCWindowLayout(Cea708CCWidget cea708CCWidget, Context context, AttributeSet attributeSet, int i) {
                this(context, attributeSet, i, 0);
            }

            CCWindowLayout(Context context, AttributeSet attributeSet, int i, int i2) {
                super(context, attributeSet, i, i2);
                this.mRowLimit = 0;
                this.mBuilder = new SpannableStringBuilder();
                this.mCharacterStyles = new ArrayList();
                this.mRow = -1;
                this.mCCView = new CCView(Cea708CCWidget.this, context);
                addView(this.mCCView, new RelativeLayout.LayoutParams(-2, -2));
                CaptioningManager captioningManager = (CaptioningManager) context.getSystemService("captioning");
                this.mFontScale = captioningManager.getFontScale();
                setCaptionStyle(captioningManager.getUserStyle());
                this.mCCView.setText("");
                updateWidestChar();
            }

            private int getScreenColumnCount() {
                return 42;
            }

            private void updateText(String str, boolean z) {
                if (!z) {
                    this.mBuilder.clear();
                }
                if (str != null && str.length() > 0) {
                    int length = this.mBuilder.length();
                    this.mBuilder.append((CharSequence) str);
                    for (CharacterStyle characterStyle : this.mCharacterStyles) {
                        SpannableStringBuilder spannableStringBuilder = this.mBuilder;
                        spannableStringBuilder.setSpan(characterStyle, length, spannableStringBuilder.length(), 33);
                    }
                }
                String[] strArrSplit = TextUtils.split(this.mBuilder.toString(), "\n");
                String strJoin = TextUtils.join("\n", Arrays.copyOfRange(strArrSplit, Math.max(0, strArrSplit.length - (this.mRowLimit + 1)), strArrSplit.length));
                SpannableStringBuilder spannableStringBuilder2 = this.mBuilder;
                spannableStringBuilder2.delete(0, spannableStringBuilder2.length() - strJoin.length());
                int i = 0;
                int length2 = this.mBuilder.length() - 1;
                int i2 = length2;
                while (i <= i2 && this.mBuilder.charAt(i) <= ' ') {
                    i++;
                }
                while (i2 >= i && this.mBuilder.charAt(i2) <= ' ') {
                    i2--;
                }
                if (i == 0 && i2 == length2) {
                    this.mCCView.setText(this.mBuilder);
                    return;
                }
                SpannableStringBuilder spannableStringBuilder3 = new SpannableStringBuilder();
                spannableStringBuilder3.append((CharSequence) this.mBuilder);
                if (i2 < length2) {
                    spannableStringBuilder3.delete(i2 + 1, length2 + 1);
                }
                if (i > 0) {
                    spannableStringBuilder3.delete(0, i);
                }
                this.mCCView.setText(spannableStringBuilder3);
            }

            private void updateTextSize() {
                if (this.mCCLayout == null) {
                    return;
                }
                StringBuilder sb = new StringBuilder();
                int screenColumnCount = getScreenColumnCount();
                for (int i = 0; i < screenColumnCount; i++) {
                    sb.append(this.mWidestChar);
                }
                String string = sb.toString();
                Paint paint = new Paint();
                paint.setTypeface(this.mCaptionStyle.getTypeface());
                float f = 0.0f;
                float f2 = 255.0f;
                while (f < f2) {
                    float f3 = (f + f2) / 2.0f;
                    paint.setTextSize(f3);
                    if (this.mCCLayout.getWidth() * 0.8f > paint.measureText(string)) {
                        f = 0.01f + f3;
                    } else {
                        f2 = f3 - 0.01f;
                    }
                }
                float f4 = this.mFontScale * f2;
                this.mTextSize = f4;
                this.mCCView.setTextSize(f4);
            }

            private void updateWidestChar() {
                Paint paint = new Paint();
                paint.setTypeface(this.mCaptionStyle.getTypeface());
                Charset charsetForName = Charset.forName("ISO-8859-1");
                float f = 0.0f;
                for (int i = 0; i < 256; i++) {
                    String str = new String(new byte[]{(byte) i}, charsetForName);
                    float fMeasureText = paint.measureText(str);
                    if (f < fMeasureText) {
                        f = fMeasureText;
                        this.mWidestChar = str;
                    }
                }
                updateTextSize();
            }

            public void appendText(String str) {
                updateText(str, true);
            }

            public void clear() {
                clearText();
                hide();
            }

            public void clearText() {
                this.mBuilder.clear();
                this.mCCView.setText("");
            }

            public int getCaptionWindowId() {
                return this.mCaptionWindowId;
            }

            public void hide() {
                setVisibility(4);
                requestLayout();
            }

            public void initWindow(CCLayout cCLayout, Cea708CCParser.CaptionWindow captionWindow) {
                CCLayout cCLayout2 = this.mCCLayout;
                if (cCLayout2 != cCLayout) {
                    if (cCLayout2 != null) {
                        cCLayout2.removeOnLayoutChangeListener(this);
                    }
                    this.mCCLayout = cCLayout;
                    cCLayout.addOnLayoutChangeListener(this);
                    updateWidestChar();
                }
                float f = captionWindow.anchorVertical;
                boolean z = captionWindow.relativePositioning;
                int i = ANCHOR_RELATIVE_POSITIONING_MAX;
                float fMax = f / (z ? ANCHOR_RELATIVE_POSITIONING_MAX : 74);
                float f2 = captionWindow.anchorHorizontal;
                if (!captionWindow.relativePositioning) {
                    i = ANCHOR_HORIZONTAL_16_9_MAX;
                }
                float fMax2 = f2 / i;
                if (fMax < 0.0f || fMax > 1.0f) {
                    Log.i(TAG, "The vertical position of the anchor point should be at the range of 0 and 1 but " + fMax);
                    fMax = Math.max(0.0f, Math.min(fMax, 1.0f));
                }
                if (fMax2 < 0.0f || fMax2 > 1.0f) {
                    Log.i(TAG, "The horizontal position of the anchor point should be at the range of 0 and 1 but " + fMax2);
                    fMax2 = Math.max(0.0f, Math.min(fMax2, 1.0f));
                }
                int i2 = 17;
                int i3 = captionWindow.anchorId % 3;
                int i4 = captionWindow.anchorId / 3;
                float f3 = 0.0f;
                float f4 = 1.0f;
                float f5 = 0.0f;
                float f6 = 1.0f;
                if (i3 == 0) {
                    i2 = 3;
                    this.mCCView.setAlignment(Layout.Alignment.ALIGN_NORMAL);
                    f5 = fMax2;
                } else if (i3 == 1) {
                    float fMin = Math.min(1.0f - fMax2, fMax2);
                    int iMin = Math.min(getScreenColumnCount(), captionWindow.columnCount + 1);
                    StringBuilder sb = new StringBuilder();
                    for (int i5 = 0; i5 < iMin; i5++) {
                        sb.append(this.mWidestChar);
                    }
                    Paint paint = new Paint();
                    paint.setTypeface(this.mCaptionStyle.getTypeface());
                    paint.setTextSize(this.mTextSize);
                    float fMeasureText = this.mCCLayout.getWidth() > 0 ? (paint.measureText(sb.toString()) / 2.0f) / (this.mCCLayout.getWidth() * 0.8f) : 0.0f;
                    if (fMeasureText <= 0.0f || fMeasureText >= fMax2) {
                        i2 = 1;
                        this.mCCView.setAlignment(Layout.Alignment.ALIGN_CENTER);
                        f5 = fMax2 - fMin;
                        f6 = fMax2 + fMin;
                    } else {
                        this.mCCView.setAlignment(Layout.Alignment.ALIGN_NORMAL);
                        f5 = fMax2 - fMeasureText;
                        f6 = 1.0f;
                        i2 = 3;
                    }
                } else if (i3 == 2) {
                    i2 = 5;
                    f6 = fMax2;
                }
                if (i4 == 0) {
                    i2 |= 48;
                    f3 = fMax;
                } else if (i4 == 1) {
                    i2 |= 16;
                    float fMin2 = Math.min(1.0f - fMax, fMax);
                    f3 = fMax - fMin2;
                    f4 = fMax + fMin2;
                } else if (i4 == 2) {
                    i2 |= 80;
                    f4 = fMax;
                }
                CCLayout cCLayout3 = this.mCCLayout;
                CCLayout cCLayout4 = this.mCCLayout;
                cCLayout4.getClass();
                cCLayout3.addOrUpdateViewToSafeTitleArea(this, new ScaledLayout.ScaledLayoutParams(f3, f4, f5, f6));
                setCaptionWindowId(captionWindow.id);
                setRowLimit(captionWindow.rowCount);
                setGravity(i2);
                if (captionWindow.visible) {
                    show();
                } else {
                    hide();
                }
            }

            @Override // android.view.View.OnLayoutChangeListener
            public void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
                int i9 = i3 - i;
                int i10 = i4 - i2;
                if (i9 == this.mLastCaptionLayoutWidth && i10 == this.mLastCaptionLayoutHeight) {
                    return;
                }
                this.mLastCaptionLayoutWidth = i9;
                this.mLastCaptionLayoutHeight = i10;
                updateTextSize();
            }

            public void removeFromCaptionView() {
                CCLayout cCLayout = this.mCCLayout;
                if (cCLayout != null) {
                    cCLayout.removeViewFromSafeTitleArea(this);
                    this.mCCLayout.removeOnLayoutChangeListener(this);
                    this.mCCLayout = null;
                }
            }

            public void sendBuffer(String str) {
                appendText(str);
            }

            public void sendControl(char c) {
            }

            public void setCaptionStyle(CaptioningManager.CaptionStyle captionStyle) {
                this.mCaptionStyle = captionStyle;
                this.mCCView.setCaptionStyle(captionStyle);
            }

            public void setCaptionWindowId(int i) {
                this.mCaptionWindowId = i;
            }

            public void setFontScale(float f) {
                this.mFontScale = f;
                updateTextSize();
            }

            public void setPenAttr(Cea708CCParser.CaptionPenAttr captionPenAttr) {
                this.mCharacterStyles.clear();
                if (captionPenAttr.italic) {
                    this.mCharacterStyles.add(new StyleSpan(2));
                }
                if (captionPenAttr.underline) {
                    this.mCharacterStyles.add(new UnderlineSpan());
                }
                int i = captionPenAttr.penSize;
                if (i == 0) {
                    this.mCharacterStyles.add(new RelativeSizeSpan(PROPORTION_PEN_SIZE_SMALL));
                } else if (i == 2) {
                    this.mCharacterStyles.add(new RelativeSizeSpan(PROPORTION_PEN_SIZE_LARGE));
                }
                int i2 = captionPenAttr.penOffset;
                if (i2 == 0) {
                    this.mCharacterStyles.add(new SubscriptSpan());
                } else {
                    if (i2 != 2) {
                        return;
                    }
                    this.mCharacterStyles.add(new SuperscriptSpan());
                }
            }

            public void setPenColor(Cea708CCParser.CaptionPenColor captionPenColor) {
            }

            public void setPenLocation(int i, int i2) {
                if (this.mRow >= 0) {
                    for (int i3 = this.mRow; i3 < i; i3++) {
                        appendText("\n");
                    }
                }
                this.mRow = i;
            }

            public void setRowLimit(int i) {
                if (i < 0) {
                    throw new IllegalArgumentException("A rowLimit should have a positive number");
                }
                this.mRowLimit = i;
            }

            public void setText(String str) {
                updateText(str, false);
            }

            public void setWindowAttr(Cea708CCParser.CaptionWindowAttr captionWindowAttr) {
            }

            public void show() {
                setVisibility(0);
                requestLayout();
            }
        }

        class ScaledLayout extends ViewGroup {
            private static final boolean DEBUG = false;
            private static final String TAG = "ScaledLayout";
            private Rect[] mRectArray;
            private final Comparator<Rect> mRectTopLeftSorter;

            class ScaledLayoutParams extends ViewGroup.LayoutParams {
                public static final float SCALE_UNSPECIFIED = -1.0f;
                public float scaleEndCol;
                public float scaleEndRow;
                public float scaleStartCol;
                public float scaleStartRow;

                ScaledLayoutParams(float f, float f2, float f3, float f4) {
                    super(-1, -1);
                    this.scaleStartRow = f;
                    this.scaleEndRow = f2;
                    this.scaleStartCol = f3;
                    this.scaleEndCol = f4;
                }

                ScaledLayoutParams(Context context, AttributeSet attributeSet) {
                    super(-1, -1);
                }
            }

            ScaledLayout(Context context) {
                super(context);
                this.mRectTopLeftSorter = new Comparator<Rect>() { // from class: android.support.v4.media.subtitle.Cea708CaptionRenderer.Cea708CCWidget.ScaledLayout.1
                    @Override // java.util.Comparator
                    public int compare(Rect rect, Rect rect2) {
                        return rect.top != rect2.top ? rect.top - rect2.top : rect.left - rect2.left;
                    }
                };
            }

            @Override // android.view.ViewGroup
            protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
                return layoutParams instanceof ScaledLayoutParams;
            }

            @Override // android.view.ViewGroup, android.view.View
            public void dispatchDraw(Canvas canvas) {
                int paddingLeft = getPaddingLeft();
                int paddingTop = getPaddingTop();
                int childCount = getChildCount();
                for (int i = 0; i < childCount; i++) {
                    View childAt = getChildAt(i);
                    if (childAt.getVisibility() != 8) {
                        Rect[] rectArr = this.mRectArray;
                        if (i >= rectArr.length) {
                            return;
                        }
                        int i2 = rectArr[i].left + paddingLeft;
                        int i3 = this.mRectArray[i].top + paddingTop;
                        int iSave = canvas.save();
                        canvas.translate(i2, i3);
                        childAt.draw(canvas);
                        canvas.restoreToCount(iSave);
                    }
                }
            }

            @Override // android.view.ViewGroup
            public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
                return new ScaledLayoutParams(getContext(), attributeSet);
            }

            @Override // android.view.ViewGroup, android.view.View
            protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
                int paddingLeft = getPaddingLeft();
                int paddingTop = getPaddingTop();
                int childCount = getChildCount();
                for (int i5 = 0; i5 < childCount; i5++) {
                    View childAt = getChildAt(i5);
                    if (childAt.getVisibility() != 8) {
                        childAt.layout(this.mRectArray[i5].left + paddingLeft, this.mRectArray[i5].top + paddingTop, this.mRectArray[i5].right + paddingTop, this.mRectArray[i5].bottom + paddingLeft);
                    }
                }
            }

            @Override // android.view.View
            protected void onMeasure(int i, int i2) {
                int size = View.MeasureSpec.getSize(i);
                int size2 = View.MeasureSpec.getSize(i2);
                int paddingLeft = (size - getPaddingLeft()) - getPaddingRight();
                int paddingTop = (size2 - getPaddingTop()) - getPaddingBottom();
                int childCount = getChildCount();
                this.mRectArray = new Rect[childCount];
                int i3 = 0;
                while (i3 < childCount) {
                    View childAt = getChildAt(i3);
                    ViewGroup.LayoutParams layoutParams = childAt.getLayoutParams();
                    if (!(layoutParams instanceof ScaledLayoutParams)) {
                        throw new RuntimeException("A child of ScaledLayout cannot have the UNSPECIFIED scale factors");
                    }
                    float f = ((ScaledLayoutParams) layoutParams).scaleStartRow;
                    float f2 = ((ScaledLayoutParams) layoutParams).scaleEndRow;
                    float f3 = ((ScaledLayoutParams) layoutParams).scaleStartCol;
                    float f4 = ((ScaledLayoutParams) layoutParams).scaleEndCol;
                    if (f < 0.0f || f > 1.0f) {
                        throw new RuntimeException("A child of ScaledLayout should have a range of scaleStartRow between 0 and 1");
                    }
                    if (f2 < f || f > 1.0f) {
                        throw new RuntimeException("A child of ScaledLayout should have a range of scaleEndRow between scaleStartRow and 1");
                    }
                    if (f4 < 0.0f || f4 > 1.0f) {
                        throw new RuntimeException("A child of ScaledLayout should have a range of scaleStartCol between 0 and 1");
                    }
                    if (f4 < f3 || f4 > 1.0f) {
                        throw new RuntimeException("A child of ScaledLayout should have a range of scaleEndCol between scaleStartCol and 1");
                    }
                    int i4 = size;
                    int i5 = size2;
                    this.mRectArray[i3] = new Rect((int) (paddingLeft * f3), (int) (paddingTop * f), (int) (paddingLeft * f4), (int) (paddingTop * f2));
                    int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec((int) (paddingLeft * (f4 - f3)), 1073741824);
                    childAt.measure(iMakeMeasureSpec, View.MeasureSpec.makeMeasureSpec(0, 0));
                    if (childAt.getMeasuredHeight() > this.mRectArray[i3].height()) {
                        int measuredHeight = ((childAt.getMeasuredHeight() - this.mRectArray[i3].height()) + 1) / 2;
                        this.mRectArray[i3].bottom += measuredHeight;
                        this.mRectArray[i3].top -= measuredHeight;
                        if (this.mRectArray[i3].top < 0) {
                            this.mRectArray[i3].bottom -= this.mRectArray[i3].top;
                            this.mRectArray[i3].top = 0;
                        }
                        if (this.mRectArray[i3].bottom > paddingTop) {
                            this.mRectArray[i3].top -= this.mRectArray[i3].bottom - paddingTop;
                            this.mRectArray[i3].bottom = paddingTop;
                        }
                    }
                    childAt.measure(iMakeMeasureSpec, View.MeasureSpec.makeMeasureSpec((int) (paddingTop * (f2 - f)), 1073741824));
                    i3++;
                    size = i4;
                    size2 = i5;
                }
                int i6 = size;
                int i7 = size2;
                int i8 = 0;
                int[] iArr = new int[childCount];
                Rect[] rectArr = new Rect[childCount];
                for (int i9 = 0; i9 < childCount; i9++) {
                    if (getChildAt(i9).getVisibility() == 0) {
                        iArr[i8] = i8;
                        rectArr[i8] = this.mRectArray[i9];
                        i8++;
                    }
                }
                Arrays.sort(rectArr, 0, i8, this.mRectTopLeftSorter);
                for (int i10 = 0; i10 < i8 - 1; i10++) {
                    for (int i11 = i10 + 1; i11 < i8; i11++) {
                        if (Rect.intersects(rectArr[i10], rectArr[i11])) {
                            iArr[i11] = iArr[i10];
                            rectArr[i11].set(rectArr[i11].left, rectArr[i10].bottom, rectArr[i11].right, rectArr[i10].bottom + rectArr[i11].height());
                        }
                    }
                }
                for (int i12 = i8 - 1; i12 >= 0; i12--) {
                    if (rectArr[i12].bottom > paddingTop) {
                        int i13 = rectArr[i12].bottom - paddingTop;
                        for (int i14 = 0; i14 <= i12; i14++) {
                            if (iArr[i12] == iArr[i14]) {
                                rectArr[i14].set(rectArr[i14].left, rectArr[i14].top - i13, rectArr[i14].right, rectArr[i14].bottom - i13);
                            }
                        }
                    }
                }
                setMeasuredDimension(i6, i7);
            }
        }

        Cea708CCWidget(Cea708CaptionRenderer cea708CaptionRenderer, Context context) {
            this(cea708CaptionRenderer, context, null);
        }

        Cea708CCWidget(Cea708CaptionRenderer cea708CaptionRenderer, Context context, AttributeSet attributeSet) {
            this(cea708CaptionRenderer, context, attributeSet, 0);
        }

        Cea708CCWidget(Cea708CaptionRenderer cea708CaptionRenderer, Context context, AttributeSet attributeSet, int i) {
            this(context, attributeSet, i, 0);
        }

        Cea708CCWidget(Context context, AttributeSet attributeSet, int i, int i2) {
            super(context, attributeSet, i, i2);
            this.mCCHandler = new CCHandler((CCLayout) this.mClosedCaptionLayout);
        }

        @Override // android.support.v4.media.subtitle.ClosedCaptionWidget
        public ClosedCaptionWidget.ClosedCaptionLayout createCaptionLayout(Context context) {
            return new CCLayout(context);
        }

        @Override // android.support.v4.media.subtitle.Cea708CCParser.DisplayListener
        public void emitEvent(Cea708CCParser.CaptionEvent captionEvent) {
            this.mCCHandler.processCaptionEvent(captionEvent);
            setSize(getWidth(), getHeight());
            if (this.mListener != null) {
                this.mListener.onChanged(this);
            }
        }

        @Override // android.view.View
        public void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            ((ViewGroup) this.mClosedCaptionLayout).draw(canvas);
        }
    }

    static class Cea708CaptionTrack extends SubtitleTrack {
        private final Cea708CCParser mCCParser;
        private final Cea708CCWidget mRenderingWidget;

        Cea708CaptionTrack(Cea708CCWidget cea708CCWidget, MediaFormat mediaFormat) {
            super(mediaFormat);
            this.mRenderingWidget = cea708CCWidget;
            this.mCCParser = new Cea708CCParser(this.mRenderingWidget);
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

    public Cea708CaptionRenderer(Context context) {
        this.mContext = context;
    }

    @Override // android.support.v4.media.subtitle.SubtitleController.Renderer
    public SubtitleTrack createTrack(MediaFormat mediaFormat) {
        if (SubtitleData2.MIMETYPE_TEXT_CEA_708.equals(mediaFormat.getString("mime"))) {
            if (this.mCCWidget == null) {
                this.mCCWidget = new Cea708CCWidget(this, this.mContext);
            }
            return new Cea708CaptionTrack(this.mCCWidget, mediaFormat);
        }
        throw new RuntimeException("No matching format: " + mediaFormat.toString());
    }

    @Override // android.support.v4.media.subtitle.SubtitleController.Renderer
    public boolean supports(MediaFormat mediaFormat) {
        if (mediaFormat.containsKey("mime")) {
            return SubtitleData2.MIMETYPE_TEXT_CEA_708.equals(mediaFormat.getString("mime"));
        }
        return false;
    }
}

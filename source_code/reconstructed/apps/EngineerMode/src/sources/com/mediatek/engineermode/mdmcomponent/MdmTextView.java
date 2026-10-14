package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.TextView;

/* JADX INFO: loaded from: classes.dex */
public class MdmTextView extends TextView {
    private Context mContext;

    public MdmTextView(Context context) {
        super(context);
        this.mContext = context;
    }

    public MdmTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mContext = context;
    }

    public MdmTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mContext = context;
    }

    private float dip2px(float f) {
        return f * this.mContext.getResources().getDisplayMetrics().density;
    }

    private float getMaxLineHeight(String str, int i, int i2) {
        boolean z = false;
        float width = ((Activity) this.mContext).getWindowManager().getDefaultDisplay().getWidth();
        float paddingLeft = ((LinearLayout) getParent()).getPaddingLeft();
        float paddingRight = ((LinearLayout) getParent()).getPaddingRight();
        float f = this.mContext.getResources().getDisplayMetrics().widthPixels;
        int i3 = 0;
        int childCount = ((LinearLayout) getParent()).getChildCount();
        for (int i4 = 0; i4 < childCount; i4 += 2) {
            if (((LinearLayout) getParent()).getChildAt(i4).getVisibility() == 0 && i4 % 2 == 0) {
                i3++;
            }
        }
        String[] strArrSplit = str.replace("\\r", "\n").replace("\\n", "\n").replace("\\t", "        ").split("\n");
        int iCeil = 0;
        int length = strArrSplit.length;
        int i5 = 0;
        while (i5 < length) {
            String str2 = strArrSplit[i5];
            iCeil += (int) (i2 == 0 ? Math.ceil(getPaint().measureText(str2) / (((((f - getPaddingLeft()) - paddingLeft) - paddingRight) - getPaddingRight()) / i3)) : Math.ceil(getPaint().measureText(str2) / (((width - getPaddingLeft()) - getPaddingRight()) / i3)));
            i5++;
            z = z;
        }
        return ((getPaint().getFontMetrics().descent - getPaint().getFontMetrics().ascent) * iCeil) + dip2px(3.0f);
    }

    @Override // android.widget.TextView, android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
    }

    @Override // android.widget.TextView, android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        int mode = View.MeasureSpec.getMode(i2);
        if (getLayout() != null) {
            setMeasuredDimension(getMeasuredWidth(), ((int) Math.ceil(getMaxLineHeight(getText().toString(), View.MeasureSpec.getSize(i), mode))) + getCompoundPaddingTop() + getCompoundPaddingBottom());
        }
    }
}

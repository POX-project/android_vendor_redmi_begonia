package com.mediatek.engineermode.iotconfig;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.EditText;

/* JADX INFO: loaded from: classes.dex */
public class IotConfigEditText extends EditText {
    public IotConfigEditText(Context context) {
        super(context, null);
    }

    public IotConfigEditText(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public IotConfigEditText(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override // android.widget.EditText, android.widget.TextView
    public boolean onTextContextMenuItem(int i) {
        if (i == 16908322) {
            return true;
        }
        return super.onTextContextMenuItem(i);
    }
}

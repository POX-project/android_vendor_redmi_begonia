package com.mediatek.engineermode;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

/* JADX INFO: loaded from: classes2.dex */
public class AutoAnswer extends Activity implements View.OnClickListener {
    private Button mDisableButton;
    private Button mEnableButton;
    private final String TAG = "AutoAnswer";
    private final String AUTO_ANSWER_PROPERTY = "persist.vendor.em.hidl.auto_answer";
    private String mStatus = "0";
    private int mResult = -1;

    private void queryAutoAnswerStatus() {
        Elog.v("AutoAnswer", "queryAutoAnswerStatus");
        this.mStatus = EmUtils.systemPropertyGet("persist.vendor.em.hidl.auto_answer", "0");
        Elog.v("AutoAnswer", "The autoanswer flag is : " + this.mStatus);
    }

    private void setAutoAnswer(int i) {
        Elog.i("AutoAnswer", "setAutoAnswer to " + i);
        try {
            EmUtils.getEmHidlService().setEmConfigure("persist.vendor.em.hidl.auto_answer", String.valueOf(i));
        } catch (Exception e) {
            e.printStackTrace();
            Elog.e("AutoAnswer", "set property failed ...");
        }
    }

    private void updateButtonStatus() {
        if (this.mStatus.equals("0")) {
            this.mEnableButton.setEnabled(true);
            this.mDisableButton.setEnabled(false);
        } else {
            this.mEnableButton.setEnabled(false);
            this.mDisableButton.setEnabled(true);
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == R.id.autoanswer_enable) {
            setAutoAnswer(1);
        } else if (view.getId() == R.id.autoanswer_disable) {
            setAutoAnswer(0);
        }
        queryAutoAnswerStatus();
        updateButtonStatus();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.auto_answer);
        this.mEnableButton = (Button) findViewById(R.id.autoanswer_enable);
        this.mDisableButton = (Button) findViewById(R.id.autoanswer_disable);
        this.mEnableButton.setOnClickListener(this);
        this.mDisableButton.setOnClickListener(this);
        queryAutoAnswerStatus();
        updateButtonStatus();
    }
}

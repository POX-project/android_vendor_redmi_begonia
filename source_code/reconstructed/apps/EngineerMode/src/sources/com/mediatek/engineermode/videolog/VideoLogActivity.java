package com.mediatek.engineermode.videolog;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.CheckBox;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class VideoLogActivity extends Activity implements View.OnClickListener {
    protected static final String TAG = "VideoLog";
    private List<CheckBox> mCheckBoxList;

    private void initUI() {
        CheckBox checkBox = (CheckBox) findViewById(R.id.cbOmxVenc);
        checkBox.setTag(new OmxVenc());
        checkBox.setOnClickListener(this);
        this.mCheckBoxList.add(checkBox);
        CheckBox checkBox2 = (CheckBox) findViewById(R.id.cbOmxVdec);
        checkBox2.setTag(new OmxVdec());
        checkBox2.setOnClickListener(this);
        this.mCheckBoxList.add(checkBox2);
        CheckBox checkBox3 = (CheckBox) findViewById(R.id.cbVdecDriver);
        checkBox3.setTag(new VdecDriver());
        checkBox3.setOnClickListener(this);
        this.mCheckBoxList.add(checkBox3);
        CheckBox checkBox4 = (CheckBox) findViewById(R.id.cbSvp);
        checkBox4.setTag(new Svp());
        checkBox4.setOnClickListener(this);
        this.mCheckBoxList.add(checkBox4);
        CheckBox checkBox5 = (CheckBox) findViewById(R.id.cbOmxCore);
        checkBox5.setTag(new OmxCore());
        checkBox5.setOnClickListener(this);
        this.mCheckBoxList.add(checkBox5);
        CheckBox checkBox6 = (CheckBox) findViewById(R.id.cbVencDriver);
        checkBox6.setTag(new VencDriver());
        checkBox6.setOnClickListener(this);
        this.mCheckBoxList.add(checkBox6);
    }

    private void updateUI() {
        for (CheckBox checkBox : this.mCheckBoxList) {
            checkBox.setChecked(((VideoLogItem) checkBox.getTag()).getStatus());
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int i = 0;
        Iterator<CheckBox> it = this.mCheckBoxList.iterator();
        while (it.hasNext()) {
            if (((VideoLogItem) it.next().getTag()).getStatus()) {
                i++;
            }
        }
        VideoLogItem videoLogItem = (VideoLogItem) view.getTag();
        boolean zSwitchLogMuchDetect = true;
        if (!videoLogItem.getStatus() && i == 0) {
            zSwitchLogMuchDetect = VideoLogItem.switchLogMuchDetect(false);
        } else if (videoLogItem.getStatus() && i == 1) {
            zSwitchLogMuchDetect = VideoLogItem.switchLogMuchDetect(true);
        }
        Elog.i(TAG, "logMuchSwitchResult: " + zSwitchLogMuchDetect);
        if (zSwitchLogMuchDetect) {
            videoLogItem.switchStatus();
            ((CheckBox) view).setChecked(videoLogItem.getStatus());
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.video_log);
        this.mCheckBoxList = new ArrayList();
        initUI();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        updateUI();
    }
}

package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class AudioVolumeTypeScene {
    private static final String CATEGORY_SPEECHVOL = "SpeechVol";
    private static final String PARAM2 = "Scene,%1$s,%2$s";
    public static final String TAG = "Audio/VolumnTypeScene";
    private static final String TYPE_SCENE = "Scene";
    private String mCurrentScene;
    private boolean mIsSupportScene;
    private Listener mListener;
    private Spinner mSceneSpinner;

    public interface Listener {
        void onSceneChanged();
    }

    AudioVolumeTypeScene(Listener listener) {
        this.mListener = listener;
    }

    public String getPara2String(String str) {
        return this.mIsSupportScene ? String.format(PARAM2, this.mCurrentScene, str) : str;
    }

    public boolean initSceneSpinner(Activity activity, String str) {
        this.mSceneSpinner = (Spinner) activity.findViewById(R.id.audio_volume_scene_spinner);
        String category = AudioTuningJni.getCategory(str, TYPE_SCENE);
        Elog.d(TAG, "strSpinnerScene:" + category);
        if (category == null) {
            this.mIsSupportScene = false;
            return false;
        }
        String[] strArrSplit = category.split(",");
        int length = strArrSplit.length / 2;
        if (length <= 0) {
            this.mIsSupportScene = false;
            return false;
        }
        String[] strArr = new String[length];
        final String[] strArr2 = new String[length];
        for (int i = 0; i < length; i++) {
            strArr2[i] = strArrSplit[i * 2];
            strArr[i] = strArrSplit[(i * 2) + 1];
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(activity, android.R.layout.simple_spinner_item, strArr);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSceneSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mCurrentScene = strArr2[0];
        this.mSceneSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeTypeScene.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                String str2 = AudioVolumeTypeScene.this.mCurrentScene;
                String[] strArr3 = strArr2;
                if (str2 != strArr3[i2]) {
                    AudioVolumeTypeScene.this.mCurrentScene = strArr3[i2];
                    Elog.d(AudioVolumeTypeScene.TAG, "onSceneChanged");
                    AudioVolumeTypeScene.this.mListener.onSceneChanged();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mSceneSpinner.setVisibility(0);
        this.mIsSupportScene = true;
        return true;
    }
}

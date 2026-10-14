package com.mediatek.engineermode.voicesettings;

import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ListActivity;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.media.AudioManager;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class VoiceList extends ListActivity {
    private static final int DIALOG_NOT_SUPPORT = 0;
    private static final String MTK_VOW_SUPPORT = "MTK_VOW_SUPPORT";
    private static final String MTK_VOW_SUPPORT_ON = "MTK_VOW_SUPPORT=true";
    private static final String MTK_VOW_TRIGGER_SUPPORT = "MTK_VOW_2E2K_SUPPORT";
    private static final String MTK_VOW_TRIGGER_SUPPORT_ON = "MTK_VOW_2E2K_SUPPORT=true";
    private ArrayList<String> mModuleList = null;

    public static boolean isVoiceTriggerSupported(Context context) {
        String parameters;
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        if (audioManager == null || (parameters = audioManager.getParameters(MTK_VOW_TRIGGER_SUPPORT)) == null) {
            return false;
        }
        return parameters.equalsIgnoreCase(MTK_VOW_TRIGGER_SUPPORT_ON);
    }

    private static boolean isVoiceWakeupSupported(Context context) {
        String parameters;
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        if (audioManager == null || (parameters = audioManager.getParameters(MTK_VOW_SUPPORT)) == null) {
            return false;
        }
        return parameters.equalsIgnoreCase(MTK_VOW_SUPPORT_ON);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.voice_list);
        if (!isVoiceWakeupSupported(this)) {
            showDialog(0);
            return;
        }
        this.mModuleList = new ArrayList<>();
        if (isVoiceWakeupSupported(this)) {
            this.mModuleList.add(getString(R.string.voice_wakeup_detector));
            this.mModuleList.add(getString(R.string.voice_wakeup_recognition));
        }
        setListAdapter(new ArrayAdapter(this, android.R.layout.simple_list_item_1, this.mModuleList));
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 0) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle(R.string.voice_settings_warning).setCancelable(false).setMessage(getString(R.string.voice_settings_not_support)).setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.voicesettings.VoiceList.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                VoiceList.this.finish();
            }
        }).create();
    }

    @Override // android.app.ListActivity
    protected void onListItemClick(ListView listView, View view, int i, long j) {
        if (this.mModuleList.get(i).equals(getString(R.string.voice_settings_wakeup))) {
            startActivity(new Intent(this, (Class<?>) VoiceWakeup.class));
        } else if (this.mModuleList.get(i).equals(getString(R.string.voice_wakeup_detector))) {
            startActivity(new Intent(this, (Class<?>) VoiceWakeupDetector.class));
        } else if (this.mModuleList.get(i).equals(getString(R.string.voice_wakeup_recognition))) {
            startActivity(new Intent(this, (Class<?>) VoiceWakeupRecognition.class));
        }
    }
}

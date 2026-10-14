package com.mediatek.engineermode.audio;

import android.app.ListActivity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class AudioVolume extends ListActivity {
    public static final String TAG = "Audio/Volume";

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_volume);
        ArrayList arrayList = new ArrayList();
        arrayList.add(getString(R.string.audio_volume_voice));
        arrayList.add(getString(R.string.audio_volume_voip));
        arrayList.add(getString(R.string.audio_volume_playback));
        arrayList.add(getString(R.string.audio_volume_record));
        setListAdapter(new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList));
    }

    @Override // android.app.ListActivity
    protected void onListItemClick(ListView listView, View view, int i, long j) {
        if (i == 0) {
            startActivity(new Intent(this, (Class<?>) AudioVolumeVoice.class));
            return;
        }
        if (i == 1) {
            startActivity(new Intent(this, (Class<?>) AudioVolumeVoIP.class));
        } else if (i == 2) {
            startActivity(new Intent(this, (Class<?>) AudioVolumePlayback.class));
        } else {
            if (i != 3) {
                return;
            }
            startActivity(new Intent(this, (Class<?>) AudioVolumeRecord.class));
        }
    }
}

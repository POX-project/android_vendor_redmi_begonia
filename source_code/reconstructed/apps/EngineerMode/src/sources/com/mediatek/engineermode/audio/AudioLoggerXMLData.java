package com.mediatek.engineermode.audio;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class AudioLoggerXMLData {
    ArrayList<DumpOptions> mAudioDumpOperation = new ArrayList<>();
    ArrayList<String> mAudioCommandSetOperation = new ArrayList<>();
    ArrayList<String> mAudioCommandGetOperation = new ArrayList<>();
    ArrayList<String> mParametersSetOperationItems = new ArrayList<>();
    ArrayList<String> mParametersGetOperationItems = new ArrayList<>();

    public void setAudioCommandGetOperation(String str) {
        this.mAudioCommandGetOperation.add(str);
    }

    public void setAudioCommandSetOperation(String str) {
        this.mAudioCommandSetOperation.add(str);
    }

    public void setParametersGetOperation(String str) {
        this.mParametersGetOperationItems.add(str);
    }

    public void setParametersSetOperation(String str) {
        this.mParametersSetOperationItems.add(str);
    }
}

package com.mediatek.ims;

import android.content.Context;
import android.telephony.Rlog;
import android.telephony.ims.ImsConferenceState;

/* JADX INFO: loaded from: classes.dex */
public class DefaultConferenceHandler {
    private static final String LOG_TAG = "ImsConferenceHandler";

    public static abstract class Listener {
        public void onAutoTerminate() {
        }

        public void onParticipantsUpdate(ImsConferenceState imsConferenceState) {
        }
    }

    public DefaultConferenceHandler() {
        Rlog.d(LOG_TAG, "DefaultConferenceHandler()");
    }

    public void addFirstMergeParticipant(String str) {
    }

    public void addLocalCache(String[] strArr) {
    }

    public void closeConference(String str) {
    }

    public void firstMerge(String str, String str2, String str3, String str4) {
    }

    public String getConfParticipantUri(String str, boolean z) {
        return str;
    }

    public boolean isConferenceActive() {
        return true;
    }

    public void modifyParticipantComplete() {
    }

    public void modifyParticipantFailed() {
    }

    public void startConference(Context context, Listener listener, String str, int i) {
    }

    public void tryAddParticipant(String str) {
    }

    public void tryRemoveParticipant(String str) {
    }
}

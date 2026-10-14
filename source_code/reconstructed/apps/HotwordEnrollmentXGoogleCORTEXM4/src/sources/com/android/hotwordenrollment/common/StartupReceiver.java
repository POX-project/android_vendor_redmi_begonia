package com.android.hotwordenrollment.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.hardware.soundtrigger.SoundTrigger;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class StartupReceiver extends BroadcastReceiver {
    /* JADX INFO: Access modifiers changed from: private */
    public static void updateSoundModel(Context context) {
        EnrollmentUtil enrollmentUtil = new EnrollmentUtil(context);
        SharedPreferences sharedPreferences = context.getSharedPreferences("enrollment_prefs", 0);
        int i = sharedPreferences.getInt("key_enrolled_version", 0);
        if (i == enrollmentUtil.getCurrentVersion()) {
            Log.v("EnrollmentStartupRcv", "KeyphraseSoundModel id " + enrollmentUtil.getKeyphraseId() + " is fresh at version " + i);
            return;
        }
        Log.i("EnrollmentStartupRcv", "KeyphraseSoundModel id " + enrollmentUtil.getKeyphraseId() + "is out of date: current=" + i + ", new=" + enrollmentUtil.getCurrentVersion());
        boolean z = true;
        for (String str : enrollmentUtil.getSupportedLocales()) {
            SoundTrigger.KeyphraseSoundModel soundModel = enrollmentUtil.getSoundModel(str);
            if (soundModel != null && soundModel.getKeyphrases() != null && soundModel.getKeyphrases().length != 0) {
                boolean zAddOrUpdateSoundModel = enrollmentUtil.addOrUpdateSoundModel(new SoundTrigger.KeyphraseSoundModel(soundModel.getUuid(), enrollmentUtil.getVendorUUID(), enrollmentUtil.readHotwordResource(str), soundModel.getKeyphrases(), enrollmentUtil.getCurrentVersion()));
                if (!zAddOrUpdateSoundModel) {
                    Log.e("EnrollmentStartupRcv", "Failed to update out-of-date KeyphraseSoundModel id " + enrollmentUtil.getKeyphraseId());
                }
                z &= zAddOrUpdateSoundModel;
            }
        }
        if (z) {
            sharedPreferences.edit().putInt("key_enrolled_version", enrollmentUtil.getCurrentVersion()).commit();
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(final Context context, Intent intent) {
        if ("android.intent.action.BOOT_COMPLETED".equals(intent.getAction()) || "android.intent.action.MY_PACKAGE_REPLACED".equals(intent.getAction())) {
            final BroadcastReceiver.PendingResult pendingResultGoAsync = goAsync();
            new Thread(this) { // from class: com.android.hotwordenrollment.common.StartupReceiver.1
                @Override // java.lang.Thread, java.lang.Runnable
                public void run() {
                    StartupReceiver.updateSoundModel(context);
                    pendingResultGoAsync.finish();
                }
            }.start();
        }
    }
}

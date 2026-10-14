package com.android.hotwordenrollment.common;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class EnrollmentIntentHandler {
    public static boolean handleIntent(Context context, Intent intent) {
        EnrollmentUtil enrollmentUtil = new EnrollmentUtil(context);
        int intExtra = intent.getIntExtra("com.android.intent.extra.VOICE_KEYPHRASE_ACTION", -1);
        String stringExtra = intent.getStringExtra("com.android.intent.extra.VOICE_KEYPHRASE_HINT_TEXT");
        String stringExtra2 = intent.getStringExtra("com.android.intent.extra.VOICE_KEYPHRASE_LOCALE");
        boolean zStartAction = enrollmentUtil.startAction(intExtra, stringExtra, stringExtra2);
        if (zStartAction) {
            Log.i("EnrollmentIntentHandler", "action " + intExtra + ", keyphrase " + stringExtra + ", operation succeeded for " + stringExtra2);
        } else {
            Log.i("EnrollmentIntentHandler", "action " + intExtra + ", keyphrase " + stringExtra + ", operation failed for " + stringExtra2);
        }
        return zStartAction;
    }

    public static boolean isValidIntent(Intent intent) {
        if (!"com.android.intent.action.MANAGE_VOICE_KEYPHRASES".equals(intent.getAction())) {
            Log.e("EnrollmentIntentHandler", "Enrollment should be started only to manage keyphrases");
            return false;
        }
        if (intent.hasExtra("com.android.intent.extra.VOICE_KEYPHRASE_ACTION") && !TextUtils.isEmpty(intent.getStringExtra("com.android.intent.extra.VOICE_KEYPHRASE_HINT_TEXT")) && !TextUtils.isEmpty(intent.getStringExtra("com.android.intent.extra.VOICE_KEYPHRASE_LOCALE"))) {
            return true;
        }
        Log.e("EnrollmentIntentHandler", "Invalid enrollment intent: " + intent);
        return false;
    }
}

package com.android.hotwordenrollment.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class EnrollmentDelegateReceiver extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Log.i("EnrollmentDelegateRcv", "received broadcast: " + intent);
        EnrollmentIntentHandler.handleIntent(context, intent);
    }
}

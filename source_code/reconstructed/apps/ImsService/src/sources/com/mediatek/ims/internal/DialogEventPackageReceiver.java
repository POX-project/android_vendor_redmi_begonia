package com.mediatek.ims.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.telephony.Rlog;
import android.telephony.ims.ImsExternalCallState;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ImsConstants;
import com.mediatek.ims.ImsServiceCallTracker;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
public class DialogEventPackageReceiver {
    private static final String TAG = "DialogEventPackageReceiver";
    private Listener mListener;
    private DialogEventPackageParser mParser;
    private BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.internal.DialogEventPackageReceiver.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals(ImsConstants.ACTION_IMS_DIALOG_EVENT_PACKAGE)) {
                if (!ImsCommonUtil.supportMdAutoSetupIms()) {
                    DialogEventPackageReceiver.this.processDepIntent(intent);
                    return;
                }
                ArrayList parcelableArrayListExtra = intent.getParcelableArrayListExtra(ImsConstants.EXTRA_DEP_CONTENT);
                Iterator it = parcelableArrayListExtra.iterator();
                while (it.hasNext()) {
                    Rlog.d(DialogEventPackageReceiver.TAG, "ACTION_IMS_DIALOG_EVENT_PACKAGE content:" + ((ImsExternalCallState) it.next()).toString());
                }
                DialogEventPackageReceiver.this.mListener.onStateChanged(parcelableArrayListExtra);
            }
        }
    };

    public interface Listener {
        void onStateChanged(List<ImsExternalCallState> list);
    }

    public static abstract class ListenerBase implements Listener {
        @Override // com.mediatek.ims.internal.DialogEventPackageReceiver.Listener
        public void onStateChanged(List<ImsExternalCallState> list) {
        }
    }

    public DialogEventPackageReceiver(Context context, Listener listener) {
        registerForBroadcast(context);
        this.mParser = new DepXmlPullParser();
        this.mListener = listener;
        Rlog.d(TAG, TAG);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void processDepIntent(Intent intent) {
        String stringExtra = intent.getStringExtra(ImsConstants.EXTRA_DEP_CONTENT);
        Rlog.d(TAG, "ACTION_IMS_DIALOG_EVENT_PACKAGE " + stringExtra);
        try {
            this.mListener.onStateChanged(ExternalCallStateFactory.getInstance().makeExternalCallStates(this.mParser.parse(new ByteArrayInputStream(stringExtra.getBytes(StandardCharsets.UTF_8)))));
        } catch (IOException e) {
            StringBuilder sb = new StringBuilder();
            sb.append("processDepIntent has IOException ");
            sb.append(ImsServiceCallTracker.sensitiveEncode("" + e));
            Rlog.d(TAG, sb.toString());
        } catch (XmlPullParserException e2) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append("processDepIntent has XmlPullParserException ");
            sb2.append(ImsServiceCallTracker.sensitiveEncode("" + e2));
            Rlog.d(TAG, sb2.toString());
        }
    }

    private void registerForBroadcast(Context context) {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ImsConstants.ACTION_IMS_DIALOG_EVENT_PACKAGE);
        LocalBroadcastManager.getInstance(context).registerReceiver(this.mReceiver, intentFilter);
    }
}

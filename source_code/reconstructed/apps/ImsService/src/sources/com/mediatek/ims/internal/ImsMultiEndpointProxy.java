package com.mediatek.ims.internal;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.telephony.Rlog;
import android.telephony.ims.ImsExternalCallState;
import android.telephony.ims.stub.ImsMultiEndpointImplBase;
import com.android.ims.internal.IImsExternalCallStateListener;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ImsMultiEndpointProxy extends ImsMultiEndpointImplBase {
    private static final int MSG_UPDATE = 1;
    private static final String TAG = "ImsMultiEndpointProxy";
    private final DialogEventPackageReceiver.Listener mDepListener;
    private List<ImsExternalCallState> mExternalCallStateList;
    private Handler mHandler;
    private IImsExternalCallStateListener mListener = null;
    private DialogEventPackageReceiver mReceiver;

    public ImsMultiEndpointProxy(Context context) {
        DialogEventPackageReceiver.ListenerBase listenerBase = new DialogEventPackageReceiver.ListenerBase() { // from class: com.mediatek.ims.internal.ImsMultiEndpointProxy.2
            @Override // com.mediatek.ims.internal.DialogEventPackageReceiver.ListenerBase, com.mediatek.ims.internal.DialogEventPackageReceiver.Listener
            public void onStateChanged(List<ImsExternalCallState> list) {
                ImsMultiEndpointProxy.this.update(list);
            }
        };
        this.mDepListener = listenerBase;
        this.mReceiver = new DialogEventPackageReceiver(context, listenerBase);
        this.mHandler = new Handler(Looper.getMainLooper()) { // from class: com.mediatek.ims.internal.ImsMultiEndpointProxy.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                if (message.what != 1) {
                    return;
                }
                ImsMultiEndpointProxy imsMultiEndpointProxy = ImsMultiEndpointProxy.this;
                imsMultiEndpointProxy.update(imsMultiEndpointProxy.mExternalCallStateList);
            }
        };
        Rlog.d(TAG, TAG);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void update(List<ImsExternalCallState> list) {
        this.mExternalCallStateList = list;
        onImsExternalCallStateUpdate(list);
    }

    public void requestImsExternalCallStateInfo() {
        this.mHandler.sendEmptyMessage(1);
    }
}

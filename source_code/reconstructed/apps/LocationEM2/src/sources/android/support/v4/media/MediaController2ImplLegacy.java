package android.support.v4.media;

import android.annotation.TargetApi;
import android.os.Bundle;
import android.os.HandlerThread;
import android.os.ResultReceiver;
import android.support.v4.media.session.MediaControllerCompat$Callback;
import android.util.Log;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
@TargetApi(16)
class MediaController2ImplLegacy implements AutoCloseable {
    static final Bundle sDefaultRootExtras;
    private final MediaController2.ControllerCallback mCallback;
    private final Executor mCallbackExecutor;
    private final HandlerThread mHandlerThread;
    private MediaController2 mInstance;

    /* JADX INFO: renamed from: android.support.v4.media.MediaController2ImplLegacy$3, reason: invalid class name */
    class AnonymousClass3 extends ResultReceiver {
        final /* synthetic */ MediaController2ImplLegacy this$0;

        @Override // android.os.ResultReceiver
        protected void onReceiveResult(int i, Bundle bundle) {
            if (this.this$0.mHandlerThread.isAlive()) {
                if (i == -1) {
                    this.this$0.mCallbackExecutor.execute(new Runnable() { // from class: android.support.v4.media.MediaController2ImplLegacy.3.1
                        @Override // java.lang.Runnable
                        public void run() {
                            AnonymousClass3.this.this$0.mCallback.onDisconnected(AnonymousClass3.this.this$0.mInstance);
                        }
                    });
                    this.this$0.close();
                } else {
                    if (i != 0) {
                        return;
                    }
                    this.this$0.onConnectedNotLocked(bundle);
                }
            }
        }
    }

    private final class ControllerCompatCallback extends MediaControllerCompat$Callback {
        final /* synthetic */ MediaController2ImplLegacy this$0;

        /* JADX INFO: renamed from: android.support.v4.media.MediaController2ImplLegacy$ControllerCompatCallback$1, reason: invalid class name */
        class AnonymousClass1 extends ResultReceiver {
            final /* synthetic */ ControllerCompatCallback this$1;

            @Override // android.os.ResultReceiver
            protected void onReceiveResult(int i, Bundle bundle) {
                if (this.this$1.this$0.mHandlerThread.isAlive()) {
                    if (i == -1) {
                        this.this$1.this$0.mCallbackExecutor.execute(new Runnable() { // from class: android.support.v4.media.MediaController2ImplLegacy.ControllerCompatCallback.1.1
                            @Override // java.lang.Runnable
                            public void run() {
                                AnonymousClass1.this.this$1.this$0.mCallback.onDisconnected(AnonymousClass1.this.this$1.this$0.mInstance);
                            }
                        });
                        this.this$1.this$0.close();
                    } else {
                        if (i != 0) {
                            return;
                        }
                        this.this$1.this$0.onConnectedNotLocked(bundle);
                    }
                }
            }
        }
    }

    static {
        Log.isLoggable("MC2ImplLegacy", 3);
        Bundle bundle = new Bundle();
        sDefaultRootExtras = bundle;
        bundle.putBoolean("android.support.v4.media.root_default_root", true);
    }

    @Override // java.lang.AutoCloseable
    public abstract void close();

    abstract void onConnectedNotLocked(Bundle bundle);
}

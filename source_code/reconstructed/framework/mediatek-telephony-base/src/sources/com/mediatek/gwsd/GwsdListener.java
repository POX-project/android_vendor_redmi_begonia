package com.mediatek.gwsd;

import android.telephony.Rlog;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes.dex */
public class GwsdListener {
    public IGwsdListener callback = new IGwsdListenerStub(this);

    private static class IGwsdListenerStub extends IGwsdListener.Stub {
        private String TAG = "IGwsdListenerStub";
        private WeakReference<GwsdListener> mGwsdListenerWeakRef;

        public IGwsdListenerStub(GwsdListener gwsdListener) {
            this.mGwsdListenerWeakRef = new WeakReference<>(gwsdListener);
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onAddListenered(int i, String str) {
            Rlog.d(this.TAG, "onAddListenered, status: " + i + " reason: " + str);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onAddListenered(i, str);
            }
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onAutoRejectModeChanged(int i, String str) {
            Rlog.d(this.TAG, "onAutoRejectModeChanged, status: " + i + " reason: " + str);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onAutoRejectModeChanged(i, str);
            }
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onCallValidTimerChanged(int i, String str) {
            Rlog.d(this.TAG, "onCallValidTimerChanged, status: " + i + " reason: " + str);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onCallValidTimerChanged(i, str);
            }
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onIgnoreSameNumberIntervalChanged(int i, String str) {
            Rlog.d(this.TAG, "onIgnoreSameNumberIntervalChanged, status: " + i + " reason: " + str);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onIgnoreSameNumberIntervalChanged(i, str);
            }
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onSyncGwsdInfoFinished(int i, String str) {
            Rlog.d(this.TAG, "onSyncGwsdInfoFinished, status: " + i + " reason: " + str);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onSyncGwsdInfoFinished(i, str);
            }
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onSystemStateChanged(int i) {
            Rlog.d(this.TAG, "onSystemStateChanged, state: " + i);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onSystemStateChanged(i);
            }
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onUserSelectionModeChanged(int i, String str) {
            Rlog.d(this.TAG, "onUserSelectionModeChanged, status: " + i + " reason: " + str);
            GwsdListener gwsdListener = this.mGwsdListenerWeakRef.get();
            if (gwsdListener != null) {
                gwsdListener.onUserSelectionModeChanged(i, str);
            }
        }
    }

    public void onAddListenered(int i, String str) {
    }

    public void onAutoRejectModeChanged(int i, String str) {
    }

    public void onCallValidTimerChanged(int i, String str) {
    }

    public void onIgnoreSameNumberIntervalChanged(int i, String str) {
    }

    public void onSyncGwsdInfoFinished(int i, String str) {
    }

    public void onSystemStateChanged(int i) {
    }

    public void onUserSelectionModeChanged(int i, String str) {
    }
}

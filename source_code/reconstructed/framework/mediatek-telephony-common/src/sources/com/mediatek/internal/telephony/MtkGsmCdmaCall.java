package com.mediatek.internal.telephony;

import com.android.internal.telephony.Call;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.GsmCdmaCall;
import com.android.internal.telephony.GsmCdmaCallTracker;
import com.android.internal.telephony.GsmCdmaConnection;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmCdmaCall extends GsmCdmaCall {
    public MtkGsmCdmaCall(GsmCdmaCallTracker gsmCdmaCallTracker) {
        super(gsmCdmaCallTracker);
    }

    public boolean isMultiparty() {
        int i = 0;
        for (int size = this.mConnections.size() - 1; size >= 0; size--) {
            if (((GsmCdmaConnection) this.mConnections.get(size)).getState() == Call.State.DISCONNECTED) {
                i++;
            }
        }
        return this.mConnections.size() > 1 && this.mConnections.size() > 1 && this.mConnections.size() - i > 1 && getState() != Call.State.DIALING;
    }

    public void onHangupLocal() {
        Iterator it = getConnections().iterator();
        while (it.hasNext()) {
            ((Connection) it.next()).onHangupLocal();
        }
        if (getConnectionsCount() == 0 || !getState().isAlive()) {
            return;
        }
        this.mState = Call.State.DISCONNECTING;
    }
}

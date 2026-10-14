package com.mediatek.wfo.ril;

import android.content.Context;
import android.os.Handler;
import android.os.Registrant;
import android.os.RegistrantList;

/* JADX INFO: loaded from: classes.dex */
public abstract class MwiBaseCommands implements MwiCommandsInterface {
    protected Context mContext;
    protected int mPhoneId;
    protected RegistrantList mRssiThresholdChangedRegistrants = new RegistrantList();
    protected RegistrantList mWifiPdnActivatedRegistrants = new RegistrantList();
    protected RegistrantList mWifiPdnErrorRegistrants = new RegistrantList();
    protected RegistrantList mWifiPdnHandoverRegistrants = new RegistrantList();
    protected RegistrantList mWifiPdnRoveOutRegistrants = new RegistrantList();
    protected RegistrantList mRequestGeoLocationRegistrants = new RegistrantList();
    protected RegistrantList mWfcPdnStateChangedRegistrants = new RegistrantList();
    protected RegistrantList mWifiPingRequestRegistrants = new RegistrantList();
    protected RegistrantList mWifiPdnOosRegistrants = new RegistrantList();
    protected RegistrantList mNattKeepAliveChangedRegistrants = new RegistrantList();
    protected RegistrantList mWifiLockRegistrants = new RegistrantList();

    public MwiBaseCommands(Context context, int i) {
        this.mContext = context;
        this.mPhoneId = i;
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerNattKeepAliveChanged(Handler handler, int i, Object obj) {
        this.mNattKeepAliveChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerRequestGeoLocation(Handler handler, int i, Object obj) {
        this.mRequestGeoLocationRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerRssiThresholdChanged(Handler handler, int i, Object obj) {
        this.mRssiThresholdChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWfcPdnStateChanged(Handler handler, int i, Object obj) {
        this.mWfcPdnStateChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiLock(Handler handler, int i, Object obj) {
        this.mWifiLockRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiPdnActivated(Handler handler, int i, Object obj) {
        this.mWifiPdnActivatedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiPdnError(Handler handler, int i, Object obj) {
        this.mWifiPdnErrorRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiPdnHandover(Handler handler, int i, Object obj) {
        this.mWifiPdnHandoverRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiPdnOos(Handler handler, int i, Object obj) {
        this.mWifiPdnOosRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiPdnRoveOut(Handler handler, int i, Object obj) {
        this.mWifiPdnRoveOutRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void registerWifiPingRequest(Handler handler, int i, Object obj) {
        this.mWifiPingRequestRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterRequestGeoLocation(Handler handler) {
        this.mRequestGeoLocationRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterRssiThresholdChanged(Handler handler) {
        this.mRssiThresholdChangedRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWfcPdnStateChanged(Handler handler) {
        this.mWfcPdnStateChangedRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiLock(Handler handler) {
        this.mWifiLockRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiPdnActivate(Handler handler) {
        this.mWifiPdnActivatedRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiPdnError(Handler handler) {
        this.mWifiPdnErrorRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiPdnHandover(Handler handler) {
        this.mWifiPdnHandoverRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiPdnOos(Handler handler) {
        this.mWifiPdnOosRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiPdnRoveOut(Handler handler) {
        this.mWifiPdnRoveOutRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unregisterWifiPingRequest(Handler handler) {
        this.mWifiPingRequestRegistrants.remove(handler);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void unrgisterNattKeepAliveChanged(Handler handler) {
        this.mNattKeepAliveChangedRegistrants.remove(handler);
    }
}

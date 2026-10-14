package com.mediatek.ims;

import android.content.Context;
import android.os.Build;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.aidl.IImsCallSessionListener;
import android.telephony.ims.aidl.IImsSmsListener;
import android.telephony.ims.feature.CapabilityChangeRequest;
import com.android.ims.internal.IImsCallSession;
import com.android.ims.internal.IImsRegistrationListener;
import com.mediatek.gba.NafSessionKey;
import com.mediatek.ims.internal.IMtkImsCallSession;
import com.mediatek.ims.internal.IMtkImsConfig;
import com.mediatek.ims.internal.IMtkImsRegistrationListener;
import com.mediatek.ims.internal.IMtkImsService;
import com.mediatek.ims.internal.IMtkImsUt;
import com.mediatek.ims.internal.ImsVTProviderUtil;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsService extends IMtkImsService.Stub {
    private static final boolean DBG = true;
    private static final boolean ENGLOAD = "eng".equals(Build.TYPE);
    private static final String LOG_TAG = "MtkImsService";
    private ImsService mImsService;

    public MtkImsService(Context context, ImsService imsService) {
        this.mImsService = null;
        this.mImsService = imsService;
        log("init");
    }

    private void englog(String str) {
        if (ENGLOAD) {
            log(str);
        }
    }

    private void log(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private void logw(String str) {
        Rlog.w(LOG_TAG, str);
    }

    public void UpdateImsState(int i) {
        this.mImsService.onUpdateImsSate(i);
    }

    public void addImsSmsListener(int i, IImsSmsListener iImsSmsListener) {
        this.mImsService.onAddImsSmsListener(i, iImsSmsListener);
    }

    public void changeEnabledCapabilities(int i, CapabilityChangeRequest capabilityChangeRequest) {
        this.mImsService.changeEnabledCapabilities(i, capabilityChangeRequest);
    }

    public IMtkImsCallSession createMtkCallSession(int i, ImsCallProfile imsCallProfile, IImsCallSessionListener iImsCallSessionListener, IImsCallSession iImsCallSession) {
        return this.mImsService.onCreateMtkCallSession(i, imsCallProfile, iImsCallSessionListener, iImsCallSession);
    }

    public void deregisterIms(int i) {
        this.mImsService.deregisterIms(i);
    }

    public void fallBackAospMTFlow(int i) {
        this.mImsService.fallBackAospMTFlow(i);
    }

    public IMtkImsConfig getConfigInterfaceEx(int i) {
        this.mImsService.bindAndRegisterWifiOffloadService();
        return this.mImsService.getImsConfigManager().getEx(i);
    }

    public int getCurrentCallCount(int i) {
        return this.mImsService.getCurrentCallCount(i);
    }

    public int[] getImsNetworkState(int i) {
        return this.mImsService.getImsNetworkState(i);
    }

    public int getImsRegUriType(int i) {
        return this.mImsService.getImsRegUriType(i);
    }

    public int getImsState(int i) {
        return this.mImsService.getImsState(i);
    }

    public int getModemMultiImsCount() {
        return this.mImsService.getModemMultiImsCount();
    }

    public IMtkImsUt getMtkUtInterface(int i) {
        return this.mImsService.onGetMtkUtInterface(i);
    }

    public IMtkImsCallSession getPendingMtkCallSession(int i, String str) {
        return this.mImsService.onGetPendingMtkCallSession(i, str);
    }

    public int getWfcRegErrorCode(int i) {
        return this.mImsService.getWfcRegErrorCode(i);
    }

    public void hangupAllCall(int i) {
        this.mImsService.onHangupAllCall(i);
    }

    public boolean isCameraAvailable() {
        return ImsVTProviderUtil.isCameraAvailable();
    }

    public void registerProprietaryImsListener(int i, IImsRegistrationListener iImsRegistrationListener, IMtkImsRegistrationListener iMtkImsRegistrationListener, boolean z) {
        this.mImsService.onAddRegistrationListener(i, 1, iImsRegistrationListener, iMtkImsRegistrationListener, z);
    }

    public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z, int i, int i2) {
        return this.mImsService.onRunGbaAuthentication(str, bArr, z, i, i2);
    }

    public void sendSms(int i, int i2, int i3, String str, String str2, boolean z, byte[] bArr) {
        this.mImsService.sendSms(i, i2, i3, str, str2, z, bArr);
    }

    public void setCallIndication(int i, String str, String str2, int i2, String str3, boolean z, int i3) {
        this.mImsService.onSetCallIndication(i, str, str2, i2, str3, z, i3);
    }

    public void setImsPreCallInfo(int i, int i2, String str, String str2, Map map, String[] strArr) {
        this.mImsService.setImsPreCallInfo(i, i2, str, str2, (HashMap) map, strArr);
    }

    public void setMTRedirect(int i, boolean z) {
        this.mImsService.setMTRedirect(i, z);
    }

    public void setSipHeader(int i, Map map, String str) {
        this.mImsService.setSipHeader(i, (HashMap) map, str);
    }

    public void setWfcRegErrorCode(int i, int i2) {
        this.mImsService.setWfcRegErrorCode(i, i2);
    }

    public void updateRadioState(int i, int i2) {
        this.mImsService.updateRadioState(i, i2);
    }
}

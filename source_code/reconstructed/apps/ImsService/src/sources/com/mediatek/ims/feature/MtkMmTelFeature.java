package com.mediatek.ims.feature;

import android.annotation.SystemApi;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.os.Message;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.feature.CapabilityChangeRequest;
import android.telephony.ims.feature.ImsFeature;
import android.telephony.ims.feature.MmTelFeature;
import android.telephony.ims.stub.ImsCallSessionImplBase;
import android.telephony.ims.stub.ImsEcbmImplBase;
import android.telephony.ims.stub.ImsMultiEndpointImplBase;
import android.telephony.ims.stub.ImsSmsImplBase;
import android.telephony.ims.stub.ImsUtImplBase;
import android.text.TextUtils;
import com.android.ims.ImsConfigListener;
import com.android.ims.internal.IImsCallSession;
import com.android.ims.internal.IImsConfig;
import com.android.ims.internal.IImsEcbm;
import com.android.ims.internal.IImsMultiEndpoint;
import com.android.ims.internal.IImsUt;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.ImsUtImpl;
import com.mediatek.ims.plugin.ExtensionFactory;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class MtkMmTelFeature extends MmTelFeature {
    private static final boolean DEBUG;
    private static final int DELAY_IMS_SERVICE_IMPL_QUERY_MS = 5000;
    public static final int FEATURE_DISABLED = 0;
    public static final int FEATURE_ENABLED = 1;
    public static final int FEATURE_TYPE_UNKNOWN = -1;
    public static final int FEATURE_TYPE_UT_OVER_LTE = 4;
    public static final int FEATURE_TYPE_UT_OVER_WIFI = 5;
    public static final int FEATURE_TYPE_VIDEO_OVER_LTE = 1;
    public static final int FEATURE_TYPE_VIDEO_OVER_WIFI = 3;
    public static final int FEATURE_TYPE_VOICE_OVER_LTE = 0;
    public static final int FEATURE_TYPE_VOICE_OVER_WIFI = 2;
    public static final int FEATURE_UNKNOWN = -1;
    private static final String LOG_TAG = "MtkMmTelFeature";
    private static final int MAXMUIM_IMS_SERVICE_IMPL_RETRY = 3;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final Map<Integer, Integer> REG_TECH_TO_NET_TYPE;
    private static final int WAIT_TIMEOUT_MS = 2000;
    private Context mContext;
    private final ImsService.IMtkMmTelFeatureCallback mImsServiceCallback = new ImsService.IMtkMmTelFeatureCallback() { // from class: com.mediatek.ims.feature.MtkMmTelFeature.1
        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void newImsSmsInd(byte[] bArr, String str) {
            MtkImsSmsImpl mtkImsSmsImpl = (MtkImsSmsImpl) MtkMmTelFeature.this.getSmsImplementation();
            if (mtkImsSmsImpl != null) {
                mtkImsSmsImpl.newImsSmsInd(bArr, str);
            }
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void newStatusReportInd(byte[] bArr, String str) {
            MtkImsSmsImpl mtkImsSmsImpl = (MtkImsSmsImpl) MtkMmTelFeature.this.getSmsImplementation();
            if (mtkImsSmsImpl != null) {
                mtkImsSmsImpl.newStatusReportInd(bArr, str);
            }
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void notifyCapabilitiesChanged(MmTelFeature.MmTelCapabilities mmTelCapabilities) {
            MtkMmTelFeature.this.log("notifyCapabilitiesStatusChanged " + mmTelCapabilities);
            MtkMmTelFeature.this.onCapabilitiesStatusChanged(mmTelCapabilities);
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void notifyContextChanged(Context context) {
            MtkMmTelFeature.this.mContext = context;
            MtkMmTelFeature.this.log("Set context to " + MtkMmTelFeature.this.mContext);
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void notifyIncomingCall(ImsCallSessionImplBase imsCallSessionImplBase, Bundle bundle) {
            MtkMmTelFeature.this.log("notifyIncomingCall ImsCallSessionImplBase " + imsCallSessionImplBase + " extras " + Rlog.pii(MtkMmTelFeature.LOG_TAG, bundle));
            MtkMmTelFeature.this.onNotifyIncomingCall(imsCallSessionImplBase, bundle);
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void notifyIncomingCallSession(IImsCallSession iImsCallSession, Bundle bundle) {
            MtkMmTelFeature.this.log("notifyIncomingCallSession IImsCallSession " + iImsCallSession + " extras " + Rlog.pii(MtkMmTelFeature.LOG_TAG, bundle));
            MtkMmTelFeature.this.onNotifyIncomingCallSession(iImsCallSession, bundle);
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void sendSmsRsp(int i, int i2, int i3, int i4) {
            MtkMmTelFeature.this.log("sendSmsRsp, token " + i + ", messageRef " + i2 + ", status " + i3 + ", reason " + i4);
            MtkImsSmsImpl mtkImsSmsImpl = (MtkImsSmsImpl) MtkMmTelFeature.this.getSmsImplementation();
            if (mtkImsSmsImpl != null) {
                mtkImsSmsImpl.sendSmsRsp(i, i2, i3, i4);
            }
        }

        @Override // com.mediatek.ims.ImsService.IMtkMmTelFeatureCallback
        public void updateCapbilities(CapabilityChangeRequest capabilityChangeRequest) {
            MtkMmTelFeature.this.log("updateCapbilities " + capabilityChangeRequest);
            MtkMmTelFeature.this.changeEnabledCapabilities(capabilityChangeRequest, null);
        }
    };
    private ImsService mImsServiceImpl;
    private int mSlotId;

    private static class ConfigListener extends ImsConfigListener.Stub {
        private final int mCapability;
        private final CountDownLatch mLatch;
        private final int mTech;

        public ConfigListener(int i, int i2, CountDownLatch countDownLatch) {
            this.mCapability = i;
            this.mTech = i2;
            this.mLatch = countDownLatch;
        }

        public void getFeatureValueReceived(int i) {
        }

        public void onGetFeatureResponse(int i, int i2, int i3, int i4) throws RemoteException {
            if (i == this.mCapability && i2 == this.mTech) {
                this.mLatch.countDown();
                getFeatureValueReceived(i3);
                return;
            }
            Rlog.e(MtkMmTelFeature.LOG_TAG, "onGetFeatureResponse: response different than requested: feature=" + i + " and network=" + i2);
        }

        public void onGetVideoQuality(int i, int i2) throws RemoteException {
        }

        public void onSetFeatureResponse(int i, int i2, int i3, int i4) throws RemoteException {
            if (i == this.mCapability && i2 == this.mTech) {
                this.mLatch.countDown();
                setFeatureValueReceived(i3);
                return;
            }
            Rlog.e(MtkMmTelFeature.LOG_TAG, "onSetFeatureResponse: response different than requested: feature=" + i + " and network=" + i2);
        }

        public void onSetVideoQuality(int i) throws RemoteException {
        }

        public void setFeatureValueReceived(int i) {
        }
    }

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        HashMap map = new HashMap(2);
        REG_TECH_TO_NET_TYPE = map;
        map.put(0, 13);
        REG_TECH_TO_NET_TYPE.put(1, 18);
    }

    public MtkMmTelFeature(int i) {
        this.mImsServiceImpl = null;
        this.mSlotId = i;
        int i2 = 0;
        while (this.mImsServiceImpl == null && i2 < 3) {
            ImsService imsService = ImsService.getInstance(null);
            this.mImsServiceImpl = imsService;
            if (imsService == null) {
                try {
                    log("ImsService is not initialized yet. Query later - " + i2);
                    Thread.sleep(5000L);
                    i2++;
                } catch (InterruptedException e) {
                    loge("Fail to get ImsService " + e);
                }
            }
        }
        ImsService imsService2 = this.mImsServiceImpl;
        if (imsService2 != null) {
            imsService2.setMmTelFeatureCallback(i, this.mImsServiceCallback);
            log("initialize mContext " + this.mContext + " slotId " + i);
            initialize(this.mContext, i);
            setFeatureState(2);
        }
        log("[" + this.mSlotId + "] MtkMmTelFeature created");
    }

    private MmTelFeature.MmTelCapabilities convertCapabilities(int[] iArr) {
        boolean[] zArr = new boolean[iArr.length];
        for (int i = 0; i <= 5 && i < iArr.length; i++) {
            if (iArr[i] == i) {
                zArr[i] = true;
            } else if (iArr[i] == -1) {
                zArr[i] = false;
            }
        }
        MmTelFeature.MmTelCapabilities mmTelCapabilities = new MmTelFeature.MmTelCapabilities();
        if (zArr[0] || zArr[2]) {
            mmTelCapabilities.addCapabilities(1);
        }
        if (zArr[1] || zArr[3]) {
            mmTelCapabilities.addCapabilities(2);
        }
        if (zArr[4] || zArr[5]) {
            mmTelCapabilities.addCapabilities(4);
        }
        log("convertCapabilities - capabilities: " + mmTelCapabilities);
        return mmTelCapabilities;
    }

    private int convertCapability(int i, int i2) {
        if (i2 == 0) {
            if (i == 1) {
                return 0;
            }
            if (i != 2) {
                return i != 4 ? -1 : 4;
            }
            return 1;
        }
        if (i2 != 1) {
            return -1;
        }
        if (i == 1) {
            return 2;
        }
        if (i != 2) {
            return i != 4 ? -1 : 5;
        }
        return 3;
    }

    private String getSmsFormat() {
        return getSmsImplementation().getSmsFormat();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Rlog.d(LOG_TAG, "[" + this.mSlotId + "] " + str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, "[" + this.mSlotId + "] " + str);
    }

    private void logi(String str) {
        Rlog.i(LOG_TAG, "[" + this.mSlotId + "] " + str);
    }

    public void changeEnabledCapabilities(CapabilityChangeRequest capabilityChangeRequest, final ImsFeature.CapabilityCallbackProxy capabilityCallbackProxy) {
        int i;
        int i2;
        if (capabilityChangeRequest == null) {
            return;
        }
        try {
            IImsConfig configInterface = getConfigInterface();
            Iterator it = capabilityChangeRequest.getCapabilitiesToDisable().iterator();
            while (true) {
                i = -1;
                i2 = 1;
                if (!it.hasNext()) {
                    break;
                }
                final CapabilityChangeRequest.CapabilityPair capabilityPair = (CapabilityChangeRequest.CapabilityPair) it.next();
                CountDownLatch countDownLatch = new CountDownLatch(1);
                int iConvertCapability = convertCapability(capabilityPair.getCapability(), capabilityPair.getRadioTech());
                int iIntValue = REG_TECH_TO_NET_TYPE.getOrDefault(Integer.valueOf(capabilityPair.getRadioTech()), -1).intValue();
                if (DEBUG) {
                    log("changeEnabledCapabilities - cap: " + iConvertCapability + " radioTech: " + iIntValue + " disabled");
                }
                configInterface.setFeatureValue(iConvertCapability, iIntValue, 0, new ConfigListener(iConvertCapability, iIntValue, countDownLatch) { // from class: com.mediatek.ims.feature.MtkMmTelFeature.3
                    @Override // com.mediatek.ims.feature.MtkMmTelFeature.ConfigListener
                    public void setFeatureValueReceived(int i3) {
                        if (i3 != 0) {
                            ImsFeature.CapabilityCallbackProxy capabilityCallbackProxy2 = capabilityCallbackProxy;
                            if (capabilityCallbackProxy2 == null) {
                                return;
                            } else {
                                capabilityCallbackProxy2.onChangeCapabilityConfigurationError(capabilityPair.getCapability(), capabilityPair.getRadioTech(), -1);
                            }
                        }
                        if (MtkMmTelFeature.DEBUG) {
                            MtkMmTelFeature.this.log("changeEnabledCapabilities - setFeatureValueReceived with value " + i3);
                        }
                    }
                });
                countDownLatch.await(2000L, TimeUnit.MILLISECONDS);
            }
            for (final CapabilityChangeRequest.CapabilityPair capabilityPair2 : capabilityChangeRequest.getCapabilitiesToEnable()) {
                CountDownLatch countDownLatch2 = new CountDownLatch(i2);
                int iConvertCapability2 = convertCapability(capabilityPair2.getCapability(), capabilityPair2.getRadioTech());
                int iIntValue2 = REG_TECH_TO_NET_TYPE.getOrDefault(Integer.valueOf(capabilityPair2.getRadioTech()), Integer.valueOf(i)).intValue();
                if (DEBUG) {
                    log("changeEnabledCapabilities - cap: " + iConvertCapability2 + " radioTech: " + iIntValue2 + " enabled");
                }
                configInterface.setFeatureValue(iConvertCapability2, iIntValue2, 1, new ConfigListener(iConvertCapability2, iIntValue2, countDownLatch2) { // from class: com.mediatek.ims.feature.MtkMmTelFeature.4
                    @Override // com.mediatek.ims.feature.MtkMmTelFeature.ConfigListener
                    public void setFeatureValueReceived(int i3) {
                        if (i3 != 1) {
                            ImsFeature.CapabilityCallbackProxy capabilityCallbackProxy2 = capabilityCallbackProxy;
                            if (capabilityCallbackProxy2 == null) {
                                return;
                            } else {
                                capabilityCallbackProxy2.onChangeCapabilityConfigurationError(capabilityPair2.getCapability(), capabilityPair2.getRadioTech(), -1);
                            }
                        }
                        if (MtkMmTelFeature.DEBUG) {
                            MtkMmTelFeature.this.log("changeEnabledCapabilities - setFeatureValueReceived with value " + i3);
                        }
                    }
                });
                countDownLatch2.await(2000L, TimeUnit.MILLISECONDS);
                i2 = 1;
                i = -1;
            }
        } catch (RemoteException | InterruptedException e) {
            log("changeEnabledCapabilities: Error processing: " + e.getMessage());
        }
    }

    public void close() {
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            imsService.setMmTelFeatureCallback(this.mSlotId, null);
            logi("Unregister callback from ImsService");
        }
    }

    public ImsCallProfile createCallProfile(int i, int i2) {
        log("createCallProfile: callSessionType = " + i + ",  callType = " + i2);
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            return imsService.onCreateCallProfile(this.mSlotId, i, i2);
        }
        return null;
    }

    public ImsCallSessionImplBase createCallSession(ImsCallProfile imsCallProfile) {
        log("createCallSession");
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            return imsService.onCreateCallSessionProxy(this.mSlotId, imsCallProfile, null);
        }
        return null;
    }

    public void disableIms(int i) {
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            imsService.disableIms(i);
        }
    }

    public void enableIms(int i) {
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            imsService.enableIms(i);
        }
    }

    public IImsConfig getConfigInterface() {
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            return imsService.onGetConfigInterface(this.mSlotId);
        }
        return null;
    }

    public ImsEcbmImplBase getEcbm() {
        log("getEcbm");
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            return imsService.onGetEcbmProxy(this.mSlotId);
        }
        return null;
    }

    protected IImsEcbm getEcbmInterface() throws RemoteException {
        log("getEcbmInterface");
        ImsEcbmImplBase ecbm = getEcbm();
        if (ecbm != null) {
            return ecbm.getImsEcbm();
        }
        return null;
    }

    public ImsMultiEndpointImplBase getMultiEndpoint() {
        log("getMultiEndpoint");
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            return imsService.onGetMultiEndpointProxy(this.mSlotId);
        }
        return null;
    }

    public IImsMultiEndpoint getMultiEndpointInterface() throws RemoteException {
        log("getMultiEndpointInterface");
        ImsMultiEndpointImplBase multiEndpoint = getMultiEndpoint();
        if (multiEndpoint != null) {
            return multiEndpoint.getIImsMultiEndpoint();
        }
        return null;
    }

    public ImsSmsImplBase getSmsImplementation() {
        return MtkImsSmsImpl.getInstance(this.mContext, this.mSlotId, this.mImsServiceImpl);
    }

    public ImsUtImplBase getUt() {
        return ImsCommonUtil.supportMdAutoSetupIms() ? ImsUtImpl.getInstance(this.mContext, this.mSlotId, this.mImsServiceImpl) : ExtensionFactory.makeLegacyComponentFactory(this.mContext).makeImsUt(this.mContext, this.mSlotId, this.mImsServiceImpl);
    }

    protected IImsUt getUtInterface() throws RemoteException {
        ImsUtImplBase ut = getUt();
        if (ut != null) {
            return ut.getInterface();
        }
        return null;
    }

    public final void onCapabilitiesStatusChanged(MmTelFeature.MmTelCapabilities mmTelCapabilities) {
        try {
            super.notifyCapabilitiesStatusChanged(mmTelCapabilities);
        } catch (IllegalStateException e) {
            loge("onCapabilitiesStatusChanged error. msg " + e.getMessage());
        }
    }

    public void onFeatureReady() {
        log("onFeatureReady called!");
    }

    public void onFeatureRemoved() {
    }

    public void onNotifyIncomingCall(ImsCallSessionImplBase imsCallSessionImplBase, Bundle bundle) {
        super.notifyIncomingCall(imsCallSessionImplBase, bundle);
    }

    public void onNotifyIncomingCallSession(IImsCallSession iImsCallSession, Bundle bundle) {
        super.notifyIncomingCallSession(iImsCallSession, bundle);
    }

    public boolean queryCapabilityConfiguration(final int i, final int i2) {
        int iConvertCapability = convertCapability(i, i2);
        CountDownLatch countDownLatch = new CountDownLatch(1);
        final int[] iArr = {-1};
        int iIntValue = REG_TECH_TO_NET_TYPE.getOrDefault(Integer.valueOf(i2), -1).intValue();
        try {
            getConfigInterface().getFeatureValue(iConvertCapability, iIntValue, new ConfigListener(iConvertCapability, iIntValue, countDownLatch) { // from class: com.mediatek.ims.feature.MtkMmTelFeature.2
                @Override // com.mediatek.ims.feature.MtkMmTelFeature.ConfigListener
                public void getFeatureValueReceived(int i3) {
                    iArr[0] = i3;
                    MtkMmTelFeature.this.log("Feature " + i + " tech " + i2 + "enable? " + iArr[0]);
                }
            });
        } catch (RemoteException e) {
            loge("Fail to queryCapabilityConfiguration " + e.getMessage());
        }
        try {
            countDownLatch.await(2000L, TimeUnit.MILLISECONDS);
        } catch (InterruptedException e2) {
            loge("queryCapabilityConfiguration - error waiting: " + e2.getMessage());
        }
        return iArr[0] == 1;
    }

    public void setUiTtyMode(int i, Message message) {
    }

    public int shouldProcessCall(String[] strArr) {
        log("shouldProcessCall");
        return 0;
    }
}

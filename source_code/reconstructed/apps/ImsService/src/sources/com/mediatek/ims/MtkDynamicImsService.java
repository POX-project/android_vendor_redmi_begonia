package com.mediatek.ims;

import android.annotation.SystemApi;
import android.content.Intent;
import android.os.IBinder;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.ims.feature.MmTelFeature;
import android.telephony.ims.stub.ImsConfigImplBase;
import android.telephony.ims.stub.ImsFeatureConfiguration;
import android.telephony.ims.stub.ImsRegistrationImplBase;
import android.util.SparseArray;
import com.mediatek.ims.config.MtkImsConfigImpl;
import com.mediatek.ims.feature.MtkMmTelFeature;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class MtkDynamicImsService extends android.telephony.ims.ImsService {
    private static final String LOG_TAG = "MtkDynamicImsService";
    protected final SparseArray<MmTelFeature> mMmTel = new SparseArray<>();
    protected final SparseArray<ImsConfigImplBase> mImsConfig = new SparseArray<>();
    protected final SparseArray<ImsRegistrationImplBase> mImsReg = new SparseArray<>();

    private static void log(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private static void logi(String str) {
        Rlog.i(LOG_TAG, str);
    }

    public MmTelFeature createMmTelFeature(int i) {
        MmTelFeature mtkMmTelFeature = this.mMmTel.get(i);
        if (mtkMmTelFeature == null && SubscriptionManager.isValidPhoneId(i)) {
            mtkMmTelFeature = new MtkMmTelFeature(i);
            this.mMmTel.put(i, mtkMmTelFeature);
        }
        log("[" + i + "] createMmTelFeature " + mtkMmTelFeature);
        return mtkMmTelFeature;
    }

    public void disableIms(int i) {
        MtkMmTelFeature mtkMmTelFeature = (MtkMmTelFeature) this.mMmTel.get(i);
        if (mtkMmTelFeature == null || !SubscriptionManager.isValidPhoneId(i)) {
            return;
        }
        mtkMmTelFeature.disableIms(i);
    }

    public void enableIms(int i) {
        MtkMmTelFeature mtkMmTelFeature = (MtkMmTelFeature) this.mMmTel.get(i);
        if (mtkMmTelFeature == null || !SubscriptionManager.isValidPhoneId(i)) {
            return;
        }
        mtkMmTelFeature.enableIms(i);
    }

    public ImsConfigImplBase getConfig(int i) {
        MtkMmTelFeature mtkMmTelFeature;
        ImsConfigImplBase mtkImsConfigImpl = this.mImsConfig.get(i);
        if (mtkImsConfigImpl == null && SubscriptionManager.isValidPhoneId(i) && (mtkMmTelFeature = (MtkMmTelFeature) this.mMmTel.get(i)) != null) {
            mtkImsConfigImpl = new MtkImsConfigImpl(mtkMmTelFeature.getConfigInterface());
            this.mImsConfig.put(i, mtkImsConfigImpl);
        }
        log("[" + i + "] getConfig " + mtkImsConfigImpl);
        return mtkImsConfigImpl;
    }

    public ImsRegistrationImplBase getRegistration(int i) {
        ImsRegistrationImplBase mtkImsRegistrationImpl = this.mImsReg.get(i);
        if (mtkImsRegistrationImpl == null && SubscriptionManager.isValidPhoneId(i)) {
            mtkImsRegistrationImpl = new MtkImsRegistrationImpl(i);
            this.mImsReg.put(i, mtkImsRegistrationImpl);
        }
        log("[" + i + "] getRegistration " + mtkImsRegistrationImpl);
        return mtkImsRegistrationImpl;
    }

    public IBinder onBind(Intent intent) {
        if (!"android.telephony.ims.ImsService".equals(intent.getAction())) {
            return null;
        }
        log("MtkDynamicImsService Bound.");
        return this.mImsServiceController;
    }

    public boolean onUnbind(Intent intent) {
        logi("onUnbind...");
        for (int i = 0; i < TelephonyManager.getDefault().getPhoneCount(); i++) {
            MtkMmTelFeature mtkMmTelFeature = (MtkMmTelFeature) this.mMmTel.get(i);
            if (mtkMmTelFeature != null) {
                mtkMmTelFeature.close();
                this.mMmTel.delete(i);
            }
            MtkImsRegistrationImpl mtkImsRegistrationImpl = (MtkImsRegistrationImpl) this.mImsReg.get(i);
            if (mtkImsRegistrationImpl != null) {
                mtkImsRegistrationImpl.close();
                this.mImsReg.delete(i);
            }
        }
        return super.onUnbind(intent);
    }

    public ImsFeatureConfiguration querySupportedImsFeatures() {
        ImsFeatureConfiguration.Builder builder = new ImsFeatureConfiguration.Builder();
        for (int i = 0; i < TelephonyManager.getDefault().getPhoneCount(); i++) {
            builder.addFeature(i, 1);
            builder.addFeature(i, 0);
        }
        log("Supported Ims Features: " + builder.build());
        return builder.build();
    }

    public void readyForFeatureCreation() {
    }
}

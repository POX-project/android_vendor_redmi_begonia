package com.mediatek.ims;

import android.annotation.SystemApi;
import android.telephony.Rlog;
import android.telephony.ims.stub.ImsRegistrationImplBase;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class MtkImsRegistrationImpl extends ImsRegistrationImplBase {
    private static final int DELAY_IMS_SERVICE_IMPL_QUERY_MS = 5000;
    private static final String LOG_TAG = "MtkImsRegImpl";
    private static final int MAXMUIM_IMS_SERVICE_IMPL_RETRY = 3;
    public static final int REGISTRATION_STATE_DEREGISTERED = 3;
    public static final int REGISTRATION_STATE_REGISTERED = 2;
    public static final int REGISTRATION_STATE_REGISTERING = 1;
    public static final int REGISTRATION_STATE_UNKNOWN = 0;
    private ImsService mImsServiceImpl;
    private int mSlotId;

    @Retention(RetentionPolicy.SOURCE)
    public @interface ImsRegistrationState {
    }

    public MtkImsRegistrationImpl(int i) {
        this.mSlotId = -1;
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
            imsService2.setImsRegistration(this.mSlotId, this);
        }
        log("[" + this.mSlotId + "] MtkImsRegistrationImpl created");
    }

    private static void log(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private void logi(String str) {
        Rlog.i(LOG_TAG, str);
    }

    public void close() {
        ImsService imsService = this.mImsServiceImpl;
        if (imsService != null) {
            imsService.setImsRegistration(this.mSlotId, null);
        }
        logi("[" + this.mSlotId + "] MtkImsRegistrationImpl closed");
    }
}

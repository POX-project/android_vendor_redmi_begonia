package com.mediatek.internal.telephony;

import android.app.AppOpsManager;
import android.content.Context;
import android.os.Binder;
import android.os.Message;
import android.os.ServiceManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.TelephonyPermissions;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IsimRecords;
import com.android.internal.telephony.uicc.UiccCard;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UsimServiceTable;
import com.mediatek.internal.telephony.uicc.MtkIsimUiccRecords;

/* JADX INFO: loaded from: classes.dex */
public class MtkPhoneSubInfoControllerEx extends IMtkPhoneSubInfoEx.Stub {
    private static final boolean DBG = true;
    private static final String TAG = "MtkPhoneSubInfoCtlEx";
    private static final boolean VDBG = false;
    private final AppOpsManager mAppOps;
    private final Context mContext;
    private final Phone[] mPhone;

    /* JADX WARN: Multi-variable type inference failed */
    public MtkPhoneSubInfoControllerEx(Context context, Phone[] phoneArr) {
        this.mPhone = phoneArr;
        if (ServiceManager.getService("iphonesubinfoEx") == null) {
            ServiceManager.addService("iphonesubinfoEx", this);
        }
        this.mContext = context;
        this.mAppOps = (AppOpsManager) context.getSystemService("appops");
    }

    private boolean checkReadPhoneState(String str, String str2) {
        try {
            this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", str2);
            return true;
        } catch (SecurityException e) {
            this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PHONE_STATE", str2);
            return this.mAppOps.noteOp(51, Binder.getCallingUid(), str) == 0;
        }
    }

    private int getDefaultSubscription() {
        return PhoneFactory.getDefaultSubscription();
    }

    private IccRecords getIccRecords(int i) {
        Phone phone = getPhone(i);
        if (phone != null) {
            UiccCard uiccCard = phone.getUiccCard();
            UiccCardApplication application = uiccCard != null ? uiccCard.getApplication(1) : null;
            if (application != null) {
                return application.getIccRecords();
            }
            return null;
        }
        loge("getIccRecords phone is null for Subscription:" + i);
        return null;
    }

    private Phone getPhone(int i) {
        int phoneId = SubscriptionManager.getPhoneId(i);
        if (!SubscriptionManager.isValidPhoneId(phoneId)) {
            phoneId = 0;
        }
        return this.mPhone[phoneId];
    }

    private void log(String str) {
        Rlog.d(TAG, str);
    }

    private void loge(String str) {
        Rlog.e(TAG, str);
    }

    public String getIsimDomainForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return isimRecords.getIsimDomain();
            }
            return null;
        }
        loge("getIsimDomain phone is null for Subscription:" + i);
        return null;
    }

    public String getIsimGbabp() {
        return getIsimGbabpForSubscriber(getDefaultSubscription());
    }

    public String getIsimGbabpForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return ((MtkIsimUiccRecords) isimRecords).getIsimGbabp();
            }
            return null;
        }
        loge("getIsimGbabp phone is null for Subscription:" + i);
        return null;
    }

    public String getIsimImpiForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return isimRecords.getIsimImpi();
            }
            return null;
        }
        loge("getIsimImpi phone is null for Subscription:" + i);
        return null;
    }

    public String[] getIsimImpuForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return isimRecords.getIsimImpu();
            }
            return null;
        }
        loge("getIsimImpu phone is null for Subscription:" + i);
        return null;
    }

    public String getIsimIstForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return isimRecords.getIsimIst();
            }
            return null;
        }
        loge("getIsimIst phone is null for Subscription:" + i);
        return null;
    }

    public String[] getIsimPcscfForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return isimRecords.getIsimPcscf();
            }
            return null;
        }
        loge("getIsimPcscf phone is null for Subscription:" + i);
        return null;
    }

    public byte[] getIsimPsismsc() {
        return getIsimPsismscForSubscriber(getDefaultSubscription());
    }

    public byte[] getIsimPsismscForSubscriber(int i) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone != null) {
            IsimRecords isimRecords = phone.getIsimRecords();
            if (isimRecords != null) {
                return ((MtkIsimUiccRecords) isimRecords).getEfPsismsc();
            }
            return null;
        }
        loge("getIsimPsismsc phone is null for Subscription:" + i);
        return null;
    }

    public String getLine1PhoneNumberForSubscriber(int i, String str, String str2) {
        MtkGsmCdmaPhone phone = getPhone(i);
        if (phone == null) {
            loge("getLine1PhoneNumber phone is null for Subscription:" + i);
            return null;
        }
        if (TelephonyPermissions.checkCallingOrSelfReadPhoneNumber(this.mContext, i, str, str2, "getLine1PhoneNumber")) {
            return phone.getLine1PhoneNumber();
        }
        loge("getLine1PhoneNumber permission check fail:" + i);
        return null;
    }

    public int getMncLength() {
        return getMncLengthForSubscriber(getDefaultSubscription());
    }

    public int getMncLengthForSubscriber(int i) {
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        IccRecords iccRecords = getIccRecords(i);
        if (iccRecords != null) {
            return iccRecords.getMncLength();
        }
        loge("getMncLength iccRecords is null for Subscription:" + i);
        return 0;
    }

    public String getUsimGbabp() {
        return getUsimGbabpForSubscriber(getDefaultSubscription());
    }

    public String getUsimGbabpForSubscriber(int i) {
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        IccRecords iccRecords = getIccRecords(i);
        if (iccRecords != null) {
            return iccRecords.getEfGbabp();
        }
        loge("getUsimGbabp iccRecords is null for Subscription:" + i);
        return null;
    }

    public byte[] getUsimPsismsc() {
        return getUsimPsismscForSubscriber(getDefaultSubscription());
    }

    public byte[] getUsimPsismscForSubscriber(int i) {
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        IccRecords iccRecords = getIccRecords(i);
        if (iccRecords != null) {
            return iccRecords.getEfPsismsc();
        }
        loge("getUsimPsismsc iccRecords is null for Subscription:" + i);
        return null;
    }

    public boolean getUsimService(int i, String str) {
        return getUsimServiceForSubscriber(getDefaultSubscription(), i, str);
    }

    public boolean getUsimServiceForSubscriber(int i, int i2, String str) {
        Phone phone = getPhone(i);
        if (phone == null) {
            loge("getUsimService phone is null for Subscription:" + i);
            return false;
        }
        if (!checkReadPhoneState(str, "getUsimService")) {
            return false;
        }
        UsimServiceTable usimServiceTable = phone.getUsimServiceTable();
        if (usimServiceTable != null) {
            return usimServiceTable.isAvailable(i2);
        }
        log("getUsimService fail due to UST is null.");
        return false;
    }

    public byte[] getUsimSmsp() {
        return getUsimSmspForSubscriber(getDefaultSubscription());
    }

    public byte[] getUsimSmspForSubscriber(int i) {
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        IccRecords iccRecords = getIccRecords(i);
        if (iccRecords != null) {
            return iccRecords.getEfSmsp();
        }
        loge("getUsimSmsp iccRecords is null for Subscription:" + i);
        return null;
    }

    public void setIsimGbabp(String str, Message message) {
        setIsimGbabpForSubscriber(getDefaultSubscription(), str, message);
    }

    public void setIsimGbabpForSubscriber(int i, String str, Message message) {
        Phone phone = getPhone(i);
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        if (phone == null) {
            loge("setIsimGbabp phone is null for Subscription:" + i);
            return;
        }
        IsimRecords isimRecords = phone.getIsimRecords();
        if (isimRecords != null) {
            ((MtkIsimUiccRecords) isimRecords).setIsimGbabp(str, message);
            return;
        }
        loge("setIsimGbabp isim is null for Subscription:" + i);
    }

    public void setUsimGbabp(String str, Message message) {
        setUsimGbabpForSubscriber(getDefaultSubscription(), str, message);
    }

    public void setUsimGbabpForSubscriber(int i, String str, Message message) {
        this.mContext.enforceCallingOrSelfPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", "Requires READ_PRIVILEGED_PHONE_STATE");
        IccRecords iccRecords = getIccRecords(i);
        if (iccRecords != null) {
            iccRecords.setEfGbabp(str, message);
            return;
        }
        loge("setUsimGbabp iccRecords is null for Subscription:" + i);
    }
}

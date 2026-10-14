package com.mediatek.internal.telephony.phb;

import android.os.AsyncResult;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.IccPhoneBookInterfaceManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.IccRecords;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.uicc.MtkRuimRecords;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkIccPhoneBookInterfaceManager extends IccPhoneBookInterfaceManager {
    protected static final boolean DBG = !SystemProperties.get("ro.build.type").equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    static final String LOG_TAG = "MtkIccPhoneBookIM";
    private volatile MtkAdnRecordCache mAdnCache;
    private int mErrorCause;
    private IccRecords mIccRecords;
    protected Handler mMtkBaseHandler;
    private List<MtkAdnRecord> mRecords;
    private int mSlotId;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.phb.MtkIccPhoneBookInterfaceManager$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$CommandException$Error;

        static {
            int[] iArr = new int[CommandException.Error.values().length];
            $SwitchMap$com$android$internal$telephony$CommandException$Error = iArr;
            try {
                iArr[CommandException.Error.GENERIC_FAILURE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_1.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.SIM_PUK2.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.PASSWORD_INCORRECT.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_2.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_3.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_4.ordinal()] = 7;
            } catch (NoSuchFieldError e7) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_5.ordinal()] = 8;
            } catch (NoSuchFieldError e8) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_6.ordinal()] = 9;
            } catch (NoSuchFieldError e9) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.RADIO_NOT_AVAILABLE.ordinal()] = 10;
            } catch (NoSuchFieldError e10) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_7.ordinal()] = 11;
            } catch (NoSuchFieldError e11) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_8.ordinal()] = 12;
            } catch (NoSuchFieldError e12) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_9.ordinal()] = 13;
            } catch (NoSuchFieldError e13) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_10.ordinal()] = 14;
            } catch (NoSuchFieldError e14) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_11.ordinal()] = 15;
            } catch (NoSuchFieldError e15) {
            }
        }
    }

    public MtkIccPhoneBookInterfaceManager(Phone phone) {
        super(phone);
        this.mSlotId = -1;
        this.mMtkBaseHandler = new Handler() { // from class: com.mediatek.internal.telephony.phb.MtkIccPhoneBookInterfaceManager.1
            private void notifyPending(IccPhoneBookInterfaceManager.Request request, Object obj) {
                if (request != null) {
                    synchronized (request) {
                        request.mResult = obj;
                        request.mStatus.set(true);
                        request.notifyAll();
                    }
                }
            }

            @Override // android.os.Handler
            public void handleMessage(Message message) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                IccPhoneBookInterfaceManager.Request request = (IccPhoneBookInterfaceManager.Request) asyncResult.userObj;
                int i = message.what;
                if (i == 1) {
                    MtkIccPhoneBookInterfaceManager.this.mBaseHandler.handleMessage(message);
                    return;
                }
                if (i == 2) {
                    List list = null;
                    if (asyncResult.exception == null) {
                        list = (List) asyncResult.result;
                    } else {
                        MtkIccPhoneBookInterfaceManager.this.loge("EVENT_LOAD_DONE: Cannot load ADN records; ex=" + asyncResult.exception);
                    }
                    notifyPending(request, list);
                    return;
                }
                if (i != 3) {
                    return;
                }
                MtkIccPhoneBookInterfaceManager.this.logd("EVENT_UPDATE_DONE");
                AsyncResult asyncResult2 = (AsyncResult) message.obj;
                boolean z = asyncResult2.exception == null;
                MtkIccPhoneBookInterfaceManager.this.logd("EVENT_UPDATE_DONE success:" + z);
                if (z) {
                    MtkIccPhoneBookInterfaceManager.this.mErrorCause = 1;
                } else if (asyncResult2.exception instanceof CommandException) {
                    MtkIccPhoneBookInterfaceManager mtkIccPhoneBookInterfaceManager = MtkIccPhoneBookInterfaceManager.this;
                    mtkIccPhoneBookInterfaceManager.mErrorCause = mtkIccPhoneBookInterfaceManager.getErrorCauseFromException(asyncResult2.exception);
                } else {
                    MtkIccPhoneBookInterfaceManager.this.loge("Error : Unknow exception instance");
                    MtkIccPhoneBookInterfaceManager.this.mErrorCause = -10;
                }
                MtkIccPhoneBookInterfaceManager.this.logi("update done result: " + MtkIccPhoneBookInterfaceManager.this.mErrorCause);
                notifyPending(request, Boolean.valueOf(z));
            }
        };
    }

    private String getAdnEFPath(int i) {
        if (i == 28474) {
            return "3F007F10";
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getErrorCauseFromException(CommandException commandException) {
        if (commandException == null) {
            return 1;
        }
        switch (AnonymousClass2.$SwitchMap$com$android$internal$telephony$CommandException$Error[commandException.getCommandError().ordinal()]) {
            case 1:
                return -10;
            case 2:
                return -1;
            case 3:
            case 4:
                return -5;
            case 5:
                return -2;
            case 6:
                return -3;
            case 7:
                return -4;
            case 8:
                return -6;
            case 9:
                return -14;
            case 10:
            case 11:
                return -11;
            case 12:
                return -12;
            case 13:
                return -13;
            case 14:
                return -16;
            case 15:
                return -17;
            default:
                return 0;
        }
    }

    public boolean addContactToGroup(int i, int i2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.addContactToGroup(i, i2);
    }

    protected void checkThread() {
        if (this.mMtkBaseHandler.getLooper().equals(Looper.myLooper())) {
            loge("query() called on the main UI thread!");
            throw new IllegalStateException("You cannot call query on this provder from the main UI thread.");
        }
    }

    public int[] getAdnRecordsCapacity() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return null;
        }
        return mtkAdnRecordCache.getAdnRecordsCapacity();
    }

    public synchronized List<MtkAdnRecord> getAdnRecordsInEf(int i, Object obj) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        int iUpdateEfForIccType = updateEfForIccType(i);
        if (DBG) {
            logd("getAdnRecordsInEF: efid=0x" + Integer.toHexString(iUpdateEfForIccType).toUpperCase());
        }
        if (this.mAdnCache == null) {
            loge("getAdnRecordsInEF mAdnCache is null");
            return null;
        }
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        synchronized (request) {
            Message messageObtainMessage = this.mMtkBaseHandler.obtainMessage(2, request);
            if (this.mAdnCache != null) {
                this.mAdnCache.requestLoadAllAdnLike(iUpdateEfForIccType, this.mAdnCache.extensionEfForEf(iUpdateEfForIccType), messageObtainMessage);
                waitForResult(request);
            } else {
                loge("Failure while trying to load from SIM due to uninitialised adncache");
            }
        }
        return (List) request.mResult;
    }

    public synchronized int[] getAdnRecordsSize(int i) {
        IccPhoneBookInterfaceManager.Request request;
        if (DBG) {
            logd("getAdnRecordsSize: efid=" + i);
        }
        checkThread();
        request = new IccPhoneBookInterfaceManager.Request();
        synchronized (request) {
            Message messageObtainMessage = this.mMtkBaseHandler.obtainMessage(1, request);
            IccFileHandler iccFileHandler = this.mPhone.getIccFileHandler();
            if (iccFileHandler != null) {
                if (getAdnEFPath(i) != null) {
                    iccFileHandler.getEFLinearRecordSize(i, getAdnEFPath(i), messageObtainMessage);
                } else {
                    iccFileHandler.getEFLinearRecordSize(i, messageObtainMessage);
                }
                waitForResult(request);
            }
        }
        return request.mResult == null ? new int[3] : (int[]) request.mResult;
    }

    public int getAnrCount() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return 0;
        }
        return mtkAdnRecordCache.getAnrCount();
    }

    public int getEmailCount() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return 0;
        }
        return mtkAdnRecordCache.getEmailCount();
    }

    public synchronized UsimPBMemInfo[] getPhonebookMemStorageExt() {
        MtkAdnRecordCache mtkAdnRecordCache;
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        mtkAdnRecordCache = this.mAdnCache;
        return mtkAdnRecordCache == null ? null : mtkAdnRecordCache.getPhonebookMemStorageExt();
    }

    public int getSneRecordLen() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.getSneRecordLen();
    }

    public int getUpbDone() {
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.getUpbDone();
    }

    public String getUsimAasById(int i) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return null;
        }
        return mtkAdnRecordCache.getUsimAasById(i);
    }

    public List<AlphaTag> getUsimAasList() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return null;
        }
        return mtkAdnRecordCache.getUsimAasList();
    }

    public int getUsimAasMaxCount() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.getUsimAasMaxCount();
    }

    public int getUsimAasMaxNameLen() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.getUsimAasMaxNameLen();
    }

    public String getUsimGroupById(int i) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return null;
        }
        return mtkAdnRecordCache.getUsimGroupById(i);
    }

    public List<UsimGroup> getUsimGroups() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return null;
        }
        return mtkAdnRecordCache.getUsimGroups();
    }

    public int getUsimGrpMaxCount() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.getUsimGrpMaxCount();
    }

    public int getUsimGrpMaxNameLen() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.getUsimGrpMaxNameLen();
    }

    public int hasExistGroup(String str) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.hasExistGroup(str);
    }

    public boolean hasSne() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.hasSne();
    }

    public int insertUsimAas(String str) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.insertUsimAas(str);
    }

    public int insertUsimGroup(String str) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.insertUsimGroup(str);
    }

    public boolean isAdnAccessible() {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.READ_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.READ_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.isAdnAccessible();
    }

    public boolean isPhbReady() {
        IccRecords iccRecords;
        if (this.mAdnCache == null || !SubscriptionManager.isValidSlotIndex(this.mSlotId) || (iccRecords = this.mIccRecords) == null) {
            return false;
        }
        if (iccRecords instanceof MtkSIMRecords) {
            return ((MtkSIMRecords) iccRecords).isPhbReady();
        }
        if (iccRecords instanceof MtkRuimRecords) {
            return ((MtkRuimRecords) iccRecords).isPhbReady();
        }
        return false;
    }

    protected void logd(String str) {
        Rlog.d(LOG_TAG, "[IccPbInterfaceManager] " + str + "(slot " + this.mSlotId + ")");
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, "[IccPbInterfaceManager] " + str + "(slot " + this.mSlotId + ")");
    }

    protected void logi(String str) {
        Rlog.i(LOG_TAG, "[IccPbInterfaceManager] " + str + "(slot " + this.mSlotId + ")");
    }

    public boolean moveContactFromGroupsToGroups(int i, int[] iArr, int[] iArr2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.moveContactFromGroupsToGroups(i, iArr, iArr2);
    }

    public void onPhbReady() {
        if (this.mAdnCache != null) {
            this.mAdnCache.requestLoadAllAdnLike(28474, this.mAdnCache.extensionEfForEf(28474), null);
        }
    }

    public boolean removeContactFromGroup(int i, int i2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.removeContactFromGroup(i, i2);
    }

    public boolean removeUsimAasById(int i, int i2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.removeUsimAasById(i, i2);
    }

    public boolean removeUsimGroupById(int i) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.removeUsimGroupById(i);
    }

    public boolean updateAdnAas(int i, int i2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.updateAdnAas(i, i2);
    }

    public boolean updateAdnRecordsInEfByIndex(int i, String str, String str2, int i2, String str3) {
        return updateAdnRecordsInEfByIndexWithError(i, str, str2, i2, str3) == 1;
    }

    public synchronized int updateAdnRecordsInEfByIndexWithError(int i, String str, String str2, int i2, String str3) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        if (this.mAdnCache == null) {
            loge("updateAdnRecordsInEfByIndex mAdnCache is null");
            return 0;
        }
        if (DBG) {
            logd("updateAdnRecordsInEfByIndex: efid=0x" + Integer.toHexString(i).toUpperCase() + " Index=" + i2);
        }
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        synchronized (request) {
            Message messageObtainMessage = this.mMtkBaseHandler.obtainMessage(3, request);
            if (str2 == null) {
                str2 = "";
            }
            if (str == null) {
                str = "";
            }
            MtkAdnRecord mtkAdnRecord = new MtkAdnRecord(str, str2);
            if (this.mAdnCache != null) {
                this.mAdnCache.updateAdnByIndex(i, mtkAdnRecord, i2, str3, messageObtainMessage);
                waitForResult(request);
            } else {
                loge("Failure while trying to update by index due to uninitialised adncache");
            }
        }
        return this.mErrorCause;
    }

    public boolean updateAdnRecordsInEfBySearch(int i, String str, String str2, String str3, String str4, String str5) {
        return updateAdnRecordsInEfBySearchWithError(i, str, str2, str3, str4, str5) == 1;
    }

    public synchronized int updateAdnRecordsInEfBySearchWithError(int i, String str, String str2, String str3, String str4, String str5) {
        int iUpdateAdnBySearch = -1;
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        if (this.mAdnCache == null) {
            loge("updateAdnRecordsInEfBySearchWithError mAdnCache is null");
            return 0;
        }
        if (DBG) {
            logd("updateAdnRecordsInEfBySearch: efid=0x" + Integer.toHexString(i).toUpperCase());
        }
        int iUpdateEfForIccType = updateEfForIccType(i);
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        synchronized (request) {
            Message messageObtainMessage = this.mMtkBaseHandler.obtainMessage(3, request);
            MtkAdnRecord mtkAdnRecord = new MtkAdnRecord(str, str2);
            if (str4 == null) {
                str4 = "";
            }
            if (str3 == null) {
                str3 = "";
            }
            MtkAdnRecord mtkAdnRecord2 = new MtkAdnRecord(str3, str4);
            if (this.mAdnCache != null) {
                iUpdateAdnBySearch = this.mAdnCache.updateAdnBySearch(iUpdateEfForIccType, mtkAdnRecord, mtkAdnRecord2, str5, messageObtainMessage, null);
                waitForResult(request);
            } else {
                loge("Failure while trying to update by search due to uninitialised adncache");
            }
        }
        if (this.mErrorCause != 1) {
            return this.mErrorCause;
        }
        logi("updateAdnRecordsInEfBySearchWithError success index is " + iUpdateAdnBySearch);
        return iUpdateAdnBySearch;
    }

    public boolean updateContactToGroups(int i, int[] iArr) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.updateContactToGroups(i, iArr);
    }

    public void updateIccRecords(IccRecords iccRecords) {
        this.mIccRecords = iccRecords;
        if (iccRecords == null) {
            this.mAdnCache = null;
            logi("[updateIccRecords] Set mAdnCache value to null");
            this.mSlotId = -1;
        } else {
            this.mAdnCache = (MtkAdnRecordCache) iccRecords.getAdnCache();
            if (this.mAdnCache != null) {
                this.mSlotId = this.mAdnCache.getSlotId();
            } else {
                this.mSlotId = -1;
            }
            logi("[updateIccRecords] Set mAdnCache value");
        }
    }

    public boolean updateUsimAas(int i, int i2, String str) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return false;
        }
        return mtkAdnRecordCache.updateUsimAas(i, i2, str);
    }

    public int updateUsimGroup(int i, String str) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        if (mtkAdnRecordCache == null) {
            return -1;
        }
        return mtkAdnRecordCache.updateUsimGroup(i, str);
    }

    public synchronized int updateUsimPBRecordsByIndexWithError(int i, MtkAdnRecord mtkAdnRecord, int i2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        if (this.mAdnCache == null) {
            loge("updateUsimPBRecordsByIndexWithError mAdnCache is null");
            return 0;
        }
        if (DBG) {
            logd("updateUsimPBRecordsByIndexWithError: efid=" + i + " Index=" + i2 + " ==> " + mtkAdnRecord);
        }
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        synchronized (request) {
            this.mAdnCache.updateAdnByIndex(i, mtkAdnRecord, i2, null, this.mMtkBaseHandler.obtainMessage(3, request));
            waitForResult(request);
        }
        return this.mErrorCause;
    }

    public synchronized int updateUsimPBRecordsBySearchWithError(int i, MtkAdnRecord mtkAdnRecord, MtkAdnRecord mtkAdnRecord2) {
        int iUpdateAdnBySearch;
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        if (this.mAdnCache == null) {
            loge("updateUsimPBRecordsBySearchWithError mAdnCache is null");
            return 0;
        }
        if (DBG) {
            logd("updateUsimPBRecordsBySearchWithError: efid=" + i + " (" + mtkAdnRecord + ")==>(" + mtkAdnRecord2 + ")");
        }
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        synchronized (request) {
            Message messageObtainMessage = this.mMtkBaseHandler.obtainMessage(3, request);
            if (mtkAdnRecord2.getNumber() == null) {
                mtkAdnRecord2.setNumber("");
            }
            iUpdateAdnBySearch = this.mAdnCache.updateAdnBySearch(i, mtkAdnRecord, mtkAdnRecord2, null, messageObtainMessage, null);
            waitForResult(request);
        }
        if (this.mErrorCause != 1) {
            return this.mErrorCause;
        }
        logi("updateUsimPBRecordsBySearchWithError success index is " + iUpdateAdnBySearch);
        return iUpdateAdnBySearch;
    }

    /* JADX WARN: Unreachable blocks removed: 2, instructions: 3 */
    /* JADX WARN: Unreachable blocks removed: 2, instructions: 4 */
    public synchronized int updateUsimPBRecordsInEfByIndexWithError(int i, String str, String str2, String str3, String str4, String[] strArr, int i2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        if (this.mAdnCache == null) {
            loge("updateUsimPBRecordsInEfByIndexWithError mAdnCache is null");
            return 0;
        }
        if (DBG) {
            logd("updateUsimPBRecordsInEfByIndexWithError: efid=" + i + " Index=" + i2 + " ==>  newAnr= " + str3 + " newGrpIds = " + str4);
        }
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        try {
            synchronized (request) {
                try {
                    try {
                        this.mAdnCache.updateAdnByIndex(i, new MtkAdnRecord(i, i2, str == null ? "" : str, str2 == null ? "" : str2, str3, strArr, str4), i2, null, this.mMtkBaseHandler.obtainMessage(3, request));
                        waitForResult(request);
                        return this.mErrorCause;
                    } catch (Throwable th) {
                        th = th;
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    /* JADX WARN: Unreachable blocks removed: 2, instructions: 3 */
    /* JADX WARN: Unreachable blocks removed: 2, instructions: 4 */
    public synchronized int updateUsimPBRecordsInEfBySearchWithError(int i, String str, String str2, String str3, String str4, String[] strArr, String str5, String str6, String str7, String str8, String[] strArr2) {
        if (this.mPhone.getContext().checkCallingOrSelfPermission("android.permission.WRITE_CONTACTS") != 0) {
            throw new SecurityException("Requires android.permission.WRITE_CONTACTS permission");
        }
        if (this.mAdnCache == null) {
            loge("updateUsimPBRecordsInEfBySearchWithError mAdnCache is null");
            return 0;
        }
        if (DBG) {
            logd("updateUsimPBRecordsInEfBySearchWithError: efid=" + i + "oldAnr" + str3 + " oldGrpIds " + str4 + "==> newAnr= " + str7 + " newGrpIds = " + str8);
        }
        checkThread();
        IccPhoneBookInterfaceManager.Request request = new IccPhoneBookInterfaceManager.Request();
        try {
            synchronized (request) {
                try {
                    try {
                        int iUpdateAdnBySearch = this.mAdnCache.updateAdnBySearch(i, new MtkAdnRecord(str, str2), new MtkAdnRecord(0, 0, str5 == null ? "" : str5, str6 == null ? "" : str6, str7, strArr2, str8), null, this.mMtkBaseHandler.obtainMessage(3, request), null);
                        waitForResult(request);
                        if (this.mErrorCause != 1) {
                            return this.mErrorCause;
                        }
                        logi("updateUsimPBRecordsInEfBySearchWithError success index is " + iUpdateAdnBySearch);
                        return iUpdateAdnBySearch;
                    } catch (Throwable th) {
                        th = th;
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }
}

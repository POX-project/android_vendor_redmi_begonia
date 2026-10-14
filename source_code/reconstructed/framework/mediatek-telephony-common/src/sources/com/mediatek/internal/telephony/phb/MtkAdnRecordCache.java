package com.mediatek.internal.telephony.phb;

import android.os.AsyncResult;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.util.SparseArray;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.uicc.AdnRecordCache;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.uicc.MtkUiccCardApplication;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkAdnRecordCache extends AdnRecordCache {
    private static final int ADN_FILE_SIZE = 250;
    private static final boolean DBG;
    private static final String LOG_TAG = "MtkAdnRecordCache";
    public static final int MAX_PHB_NAME_LENGTH = 60;
    public static final int MAX_PHB_NUMBER_ANR_COUNT = 1;
    public static final int MAX_PHB_NUMBER_ANR_LENGTH = 20;
    public static final int MAX_PHB_NUMBER_LENGTH = 40;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private CommandsInterface mCi;
    private UiccCardApplication mCurrentApp;
    private final Object mLock;
    protected SparseArray<ArrayList<MtkAdnRecord>> mMtkAdnLikeFiles;
    private boolean mNeedToWait;
    private int mSlotId;
    private boolean mSuccess;
    private MtkUsimPhoneBookManager mUsimPhoneBookManager;

    static {
        boolean z = false;
        if (SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1 && !SystemProperties.get("ro.build.type").equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)) {
            z = true;
        }
        DBG = z;
    }

    public MtkAdnRecordCache(IccFileHandler iccFileHandler, CommandsInterface commandsInterface, UiccCardApplication uiccCardApplication) {
        super(iccFileHandler);
        this.mSlotId = -1;
        this.mMtkAdnLikeFiles = new SparseArray<>();
        this.mLock = new Object();
        this.mSuccess = false;
        this.mNeedToWait = false;
        this.mCi = commandsInterface;
        this.mCurrentApp = uiccCardApplication;
        this.mUsimPhoneBookManager = new MtkUsimPhoneBookManager(this.mFh, this, commandsInterface, uiccCardApplication);
        if (uiccCardApplication != null) {
            this.mSlotId = ((MtkUiccCardApplication) uiccCardApplication).getPhoneId();
        }
    }

    private void clearUserWriters() {
        logi("clearUserWriters");
        synchronized (this.mLock) {
            logi("mNeedToWait " + this.mNeedToWait);
            if (this.mNeedToWait) {
                this.mNeedToWait = false;
                this.mLock.notifyAll();
            }
        }
        int size = this.mUserWriteResponse.size();
        for (int i = 0; i < size; i++) {
            sendErrorResponse((Message) this.mUserWriteResponse.valueAt(i), "AdnCace reset " + this.mUserWriteResponse.valueAt(i));
        }
        this.mUserWriteResponse.clear();
    }

    private void dumpAdnLikeFile() {
        int size = this.mMtkAdnLikeFiles.size();
        logd("dumpAdnLikeFile size " + size);
        for (int i = 0; i < size; i++) {
            int iKeyAt = this.mMtkAdnLikeFiles.keyAt(i);
            ArrayList<MtkAdnRecord> arrayList = this.mMtkAdnLikeFiles.get(iKeyAt);
            logd("dumpAdnLikeFile index " + i + " key " + iKeyAt + "records size " + arrayList.size());
            for (int i2 = 0; i2 < arrayList.size(); i2++) {
                logd("mMtkAdnLikeFiles[" + i2 + "]=" + arrayList.get(i2));
            }
        }
    }

    private void sendErrorResponse(Message message, String str) {
        sendErrorResponse(message, str, 2);
    }

    private void sendErrorResponse(Message message, String str, int i) {
        CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(i);
        if (message != null) {
            logw(str);
            AsyncResult.forMessage(message).exception = commandExceptionFromRilErrno;
            message.sendToTarget();
        }
    }

    public boolean addContactToGroup(int i, int i2) {
        return this.mUsimPhoneBookManager.addContactToGroup(i, i2);
    }

    public int[] getAdnRecordsCapacity() {
        return this.mUsimPhoneBookManager.getAdnRecordsCapacity();
    }

    public int getAnrCount() {
        return this.mUsimPhoneBookManager.getAnrCount();
    }

    public int getEmailCount() {
        return this.mUsimPhoneBookManager.getEmailCount();
    }

    public UsimPBMemInfo[] getPhonebookMemStorageExt() {
        return this.mUsimPhoneBookManager.getPhonebookMemStorageExt();
    }

    public ArrayList<MtkAdnRecord> getRecordsIfLoaded(int i, Object obj) {
        return this.mMtkAdnLikeFiles.get(i);
    }

    public int getSlotId() {
        return this.mSlotId;
    }

    public int getSneRecordLen() {
        return this.mUsimPhoneBookManager.getSneRecordLen();
    }

    public int getUpbDone() {
        return this.mUsimPhoneBookManager.getUpbDone();
    }

    public String getUsimAasById(int i) {
        return this.mUsimPhoneBookManager.getUsimAasById(i, 0);
    }

    public ArrayList<AlphaTag> getUsimAasList() {
        return this.mUsimPhoneBookManager.getUsimAasList();
    }

    public int getUsimAasMaxCount() {
        return this.mUsimPhoneBookManager.getUsimAasMaxCount();
    }

    public int getUsimAasMaxNameLen() {
        return this.mUsimPhoneBookManager.getUsimAasMaxNameLen();
    }

    public String getUsimGroupById(int i) {
        return this.mUsimPhoneBookManager.getUsimGroupById(i);
    }

    public List<UsimGroup> getUsimGroups() {
        return this.mUsimPhoneBookManager.getUsimGroups();
    }

    public int getUsimGrpMaxCount() {
        return this.mUsimPhoneBookManager.getUsimGrpMaxCount();
    }

    public int getUsimGrpMaxNameLen() {
        return this.mUsimPhoneBookManager.getUsimGrpMaxNameLen();
    }

    public void handleMessage(Message message) {
        ArrayList<Message> arrayList;
        int i = message.what;
        boolean z = true;
        if (i == 1) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i2 = message.arg1;
            synchronized (this.mAdnLikeWaiters) {
                arrayList = (ArrayList) this.mAdnLikeWaiters.get(i2);
                this.mAdnLikeWaiters.delete(i2);
            }
            if (asyncResult.exception == null) {
                this.mMtkAdnLikeFiles.put(i2, (ArrayList) asyncResult.result);
            } else {
                Rlog.w(LOG_TAG, "EVENT_LOAD_ALL_ADN_LIKE_DONE exception(slot " + this.mSlotId + ")", asyncResult.exception);
            }
            notifyWaiters(arrayList, asyncResult);
            return;
        }
        if (i != 2) {
            return;
        }
        logd("EVENT_UPDATE_ADN_DONE");
        synchronized (this.mLock) {
            if (this.mNeedToWait) {
                AsyncResult asyncResult2 = (AsyncResult) message.obj;
                int i3 = message.arg1;
                int i4 = message.arg2;
                MtkAdnRecord mtkAdnRecord = (MtkAdnRecord) asyncResult2.userObj;
                if (asyncResult2.exception == null && mtkAdnRecord != null) {
                    mtkAdnRecord.setRecordIndex(i4);
                    if (mtkAdnRecord.mEfid <= 0) {
                        mtkAdnRecord.mEfid = i3;
                    }
                    logd("mMtkAdnLikeFiles changed index:" + i4 + ",adn:" + mtkAdnRecord + "  efid:" + i3);
                    if (this.mMtkAdnLikeFiles != null && this.mMtkAdnLikeFiles.get(i3) != null) {
                        if (i3 == 20283 && !CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
                            i4 -= 250;
                        }
                        this.mMtkAdnLikeFiles.get(i3).set(i4 - 1, mtkAdnRecord);
                        logd(" index:" + i4 + "   efid:" + i3);
                    }
                    if (this.mUsimPhoneBookManager != null && i3 != 28475) {
                        if (i3 == 20283) {
                            i4 += ADN_FILE_SIZE;
                            logd(" index2:" + i4);
                        }
                        this.mUsimPhoneBookManager.updateUsimPhonebookRecordsList(i4 - 1, mtkAdnRecord);
                    }
                }
                Message message2 = (Message) this.mUserWriteResponse.get(i3);
                this.mUserWriteResponse.delete(i3);
                logi("MtkAdnRecordCache: " + asyncResult2.exception);
                if (asyncResult2.exception != null && message2 != null) {
                    AsyncResult.forMessage(message2, (Object) null, asyncResult2.exception);
                    message2.sendToTarget();
                }
                if (asyncResult2.exception != null) {
                    z = false;
                }
                this.mSuccess = z;
                this.mNeedToWait = false;
                this.mLock.notifyAll();
            }
        }
    }

    public int hasExistGroup(String str) {
        return this.mUsimPhoneBookManager.hasExistGroup(str);
    }

    public boolean hasSne() {
        return this.mUsimPhoneBookManager.hasSne();
    }

    public int insertUsimAas(String str) {
        return this.mUsimPhoneBookManager.insertUsimAas(str);
    }

    public int insertUsimGroup(String str) {
        return this.mUsimPhoneBookManager.insertUsimGroup(str);
    }

    public boolean isAdnAccessible() {
        return this.mUsimPhoneBookManager.isAdnAccessible();
    }

    public boolean isUsimPhbEfAndNeedReset(int i) {
        return this.mUsimPhoneBookManager.isUsimPhbEfAndNeedReset(i);
    }

    protected void logd(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str + "(slot " + this.mSlotId + ")");
        }
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, str + "(slot " + this.mSlotId + ")");
    }

    protected void logi(String str) {
        Rlog.i(LOG_TAG, str + "(slot " + this.mSlotId + ")");
    }

    protected void logw(String str) {
        Rlog.w(LOG_TAG, str + "(slot " + this.mSlotId + ")");
    }

    public boolean moveContactFromGroupsToGroups(int i, int[] iArr, int[] iArr2) {
        return this.mUsimPhoneBookManager.moveContactFromGroupsToGroups(i, iArr, iArr2);
    }

    protected void notifyWaiters(ArrayList<Message> arrayList, AsyncResult asyncResult) {
        if (arrayList == null) {
            return;
        }
        int size = arrayList.size();
        for (int i = 0; i < size; i++) {
            Message message = arrayList.get(i);
            if (message != null) {
                logi("NotifyWaiters: " + message);
                AsyncResult.forMessage(message, asyncResult.result, asyncResult.exception);
                message.sendToTarget();
            }
        }
    }

    public boolean removeContactFromGroup(int i, int i2) {
        return this.mUsimPhoneBookManager.removeContactFromGroup(i, i2);
    }

    public boolean removeUsimAasById(int i, int i2) {
        return this.mUsimPhoneBookManager.removeUsimAasById(i, i2);
    }

    public boolean removeUsimGroupById(int i) {
        return this.mUsimPhoneBookManager.removeUsimGroupById(i);
    }

    public void requestLoadAllAdnLike(int i, int i2, Message message) {
        logd("requestLoadAllAdnLike efid = " + i + ", extensionEf = " + i2);
        ArrayList<MtkAdnRecord> arrayListLoadEfFilesFromUsim = i == 20272 ? this.mUsimPhoneBookManager.loadEfFilesFromUsim(null) : getRecordsIfLoaded(i, null);
        StringBuilder sb = new StringBuilder();
        sb.append("requestLoadAllAdnLike efid = ");
        sb.append(i);
        sb.append(", result = null ?");
        sb.append(arrayListLoadEfFilesFromUsim == null);
        logi(sb.toString());
        if (arrayListLoadEfFilesFromUsim != null) {
            if (message != null) {
                AsyncResult.forMessage(message).result = arrayListLoadEfFilesFromUsim;
                message.sendToTarget();
                return;
            }
            return;
        }
        if (arrayListLoadEfFilesFromUsim == null && i == 20272) {
            sendErrorResponse(message, "Error occurs when query PBR", 2);
            return;
        }
        synchronized (this.mAdnLikeWaiters) {
            ArrayList arrayList = (ArrayList) this.mAdnLikeWaiters.get(i);
            if (arrayList != null) {
                arrayList.add(message);
                return;
            }
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(message);
            this.mAdnLikeWaiters.put(i, arrayList2);
            if (i2 >= 0) {
                new MtkAdnRecordLoader(this.mFh).loadAllFromEF(i, i2, obtainMessage(1, i, 0));
                return;
            }
            if (message != null) {
                AsyncResult.forMessage(message).exception = new RuntimeException("EF is not known ADN-like EF:0x" + Integer.toHexString(i).toUpperCase());
                message.sendToTarget();
            }
        }
    }

    public void reset() {
        logi("reset");
        this.mMtkAdnLikeFiles.clear();
        this.mUsimPhoneBookManager.reset();
        synchronized (this.mAdnLikeWaiters) {
            clearWaiters();
        }
        clearUserWriters();
        if (CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
            return;
        }
        CsimPhbUtil.clearAdnRecordSize();
    }

    public boolean updateAdnAas(int i, int i2) {
        return this.mUsimPhoneBookManager.updateAdnAas(i, i2);
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0305 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized void updateAdnByIndex(int i, MtkAdnRecord mtkAdnRecord, int i2, String str, Message message) {
        int i3;
        int i4;
        MtkAdnRecord mtkAdnRecord2;
        Object obj;
        logd("updateAdnByIndex efid:" + i + ", recordIndex:" + i2 + ", adn [" + mtkAdnRecord + "]");
        int iExtensionEfForEf = extensionEfForEf(i);
        String additionalNumber = null;
        if (iExtensionEfForEf < 0) {
            sendErrorResponse(message, "EF is not known ADN-like EF:0x" + Integer.toHexString(i).toUpperCase());
            return;
        }
        if (mtkAdnRecord.mAlphaTag == null) {
            mtkAdnRecord.mAlphaTag = "";
        }
        if (mtkAdnRecord.mAlphaTag.length() > 60) {
            sendErrorResponse(message, "the input length of mAlphaTag is too long: " + mtkAdnRecord.mAlphaTag, 502);
            return;
        }
        if (mtkAdnRecord.mNumber == null) {
            mtkAdnRecord.mNumber = "";
        }
        int length = mtkAdnRecord.mNumber.length();
        if (mtkAdnRecord.mNumber.indexOf(43) != -1) {
            length--;
        }
        if (length > 40) {
            sendErrorResponse(message, "the input length of phoneNumber is too long: " + mtkAdnRecord.mNumber, 501);
            return;
        }
        for (int i5 = 0; i5 < 1; i5++) {
            additionalNumber = mtkAdnRecord.getAdditionalNumber(i5);
            if (additionalNumber != null) {
                int length2 = additionalNumber.length();
                if (additionalNumber.indexOf(43) != -1) {
                    length2--;
                }
                if (length2 > 20) {
                    sendErrorResponse(message, "the input length of additional number is too long: " + additionalNumber, 505);
                    return;
                }
            }
        }
        if (!this.mUsimPhoneBookManager.checkEmailLength(mtkAdnRecord.mEmails)) {
            sendErrorResponse(message, "the email string is too long", 509);
            return;
        }
        if (i == 20272) {
            ArrayList<MtkAdnRecord> arrayListLoadEfFilesFromUsim = this.mUsimPhoneBookManager.loadEfFilesFromUsim(null);
            if (arrayListLoadEfFilesFromUsim == null) {
                sendErrorResponse(message, "Adn list not exist for EF:" + i, 507);
                return;
            }
            MtkAdnRecord mtkAdnRecord3 = arrayListLoadEfFilesFromUsim.get(i2 - 1);
            int i6 = mtkAdnRecord3.mEfid;
            int i7 = mtkAdnRecord3.mExtRecord;
            mtkAdnRecord.mEfid = i6;
            i3 = i6;
            i4 = i7;
            mtkAdnRecord2 = mtkAdnRecord3;
        } else {
            i3 = i;
            i4 = iExtensionEfForEf;
            mtkAdnRecord2 = null;
        }
        if (!this.mUsimPhoneBookManager.checkEmailCapacityFree(i2, mtkAdnRecord.mEmails, mtkAdnRecord2)) {
            sendErrorResponse(message, "drop the email for the limitation of the SIM card", 508);
            return;
        }
        for (int i8 = 0; i8 < 1; i8++) {
            String additionalNumber2 = mtkAdnRecord.getAdditionalNumber(i8);
            if (!this.mUsimPhoneBookManager.isAnrCapacityFree(additionalNumber2, i2, i8, mtkAdnRecord2)) {
                sendErrorResponse(message, "drop the additional number for the update fail: " + additionalNumber2, 506);
                return;
            }
        }
        if (!this.mUsimPhoneBookManager.checkSneCapacityFree(i2, mtkAdnRecord.mSne, mtkAdnRecord2)) {
            sendErrorResponse(message, "drop the sne for the limitation of the SIM card", 510);
            return;
        }
        if (((Message) this.mUserWriteResponse.get(i3)) != null) {
            sendErrorResponse(message, "Have pending update for EF:0x" + Integer.toHexString(i3).toUpperCase());
            return;
        }
        this.mUserWriteResponse.put(i3, message);
        if ((i3 == 28474 || i3 == 20272 || i3 == 20282 || i3 == 20283 || i3 == 20284 || i3 == 20285) && mtkAdnRecord.mAlphaTag.length() == 0 && mtkAdnRecord.mNumber.length() == 0) {
            this.mUsimPhoneBookManager.removeContactGroup(i2);
        }
        if (this.mUserWriteResponse.size() == 0) {
            return;
        }
        Object obj2 = this.mLock;
        synchronized (obj2) {
            try {
                this.mSuccess = false;
                this.mNeedToWait = true;
                obj = obj2;
                MtkAdnRecord mtkAdnRecord4 = mtkAdnRecord2;
                int i9 = i3;
                try {
                    new MtkAdnRecordLoader(this.mFh).updateEF(mtkAdnRecord, i3, i4, i2, str, obtainMessage(2, i3, i2, mtkAdnRecord));
                    while (this.mNeedToWait) {
                        try {
                            try {
                                this.mLock.wait();
                            } catch (InterruptedException e) {
                                try {
                                    return;
                                } catch (Throwable th) {
                                    th = th;
                                    while (true) {
                                        throw th;
                                    }
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                while (true) {
                                    throw th;
                                }
                            }
                        } catch (InterruptedException e2) {
                        }
                    }
                    if (this.mSuccess) {
                        if (i9 == 28474 || i9 == 20272 || i9 == 20282 || i9 == 20283 || i9 == 20284 || i9 == 20285) {
                            Throwable th3 = null;
                            try {
                                try {
                                    int iUpdateSneByAdnIndex = this.mUsimPhoneBookManager.updateSneByAdnIndex(mtkAdnRecord.mSne, i2, mtkAdnRecord4);
                                    if (-30 == iUpdateSneByAdnIndex) {
                                        sendErrorResponse(message, "drop the SNE for the limitation of the SIM card", 510);
                                    } else if (-40 == iUpdateSneByAdnIndex) {
                                        sendErrorResponse(message, "the sne string is too long", 511);
                                    } else {
                                        for (int i10 = 0; i10 < 1; i10++) {
                                            try {
                                                try {
                                                    this.mUsimPhoneBookManager.updateAnrByAdnIndex(mtkAdnRecord.getAdditionalNumber(i10), i2, i10, mtkAdnRecord4);
                                                } catch (Exception e3) {
                                                    e = e3;
                                                    e.printStackTrace();
                                                    return;
                                                }
                                            } catch (Exception e4) {
                                                e = e4;
                                            }
                                        }
                                        int iUpdateEmailsByAdnIndex = this.mUsimPhoneBookManager.updateEmailsByAdnIndex(mtkAdnRecord.mEmails, i2, mtkAdnRecord4);
                                        if (-30 == iUpdateEmailsByAdnIndex) {
                                            sendErrorResponse(message, "drop the email for the limitation of the SIM card", 508);
                                        } else if (-40 == iUpdateEmailsByAdnIndex) {
                                            sendErrorResponse(message, "the email string is too long", 509);
                                        } else if (-50 == iUpdateEmailsByAdnIndex) {
                                            sendErrorResponse(message, "Unkown error occurs when update email", 2);
                                        } else {
                                            AsyncResult.forMessage(message, th3, th3);
                                            message.sendToTarget();
                                        }
                                    }
                                } catch (Exception e5) {
                                    e = e5;
                                }
                            } catch (Exception e6) {
                                e = e6;
                            }
                        } else if (i9 == 28475) {
                            AsyncResult.forMessage(message, (Object) null, (Throwable) null);
                            message.sendToTarget();
                        }
                    }
                } catch (Throwable th4) {
                    th = th4;
                }
            } catch (Throwable th5) {
                th = th5;
                obj = obj2;
            }
        }
    }

    public synchronized int updateAdnBySearch(int i, MtkAdnRecord mtkAdnRecord, MtkAdnRecord mtkAdnRecord2, String str, Message message, Object obj) {
        int i2;
        int i3;
        int i4;
        Object obj2;
        logd("updateAdnBySearch efid:" + i + ", oldAdn [" + mtkAdnRecord + "], new Adn[" + mtkAdnRecord2 + "]");
        int i5 = -1;
        String additionalNumber = null;
        int iExtensionEfForEf = extensionEfForEf(i);
        if (iExtensionEfForEf < 0) {
            sendErrorResponse(message, "EF is not known ADN-like EF:0x" + Integer.toHexString(i).toUpperCase());
            return -1;
        }
        if (mtkAdnRecord2.mAlphaTag == null) {
            mtkAdnRecord2.mAlphaTag = "";
        }
        if (mtkAdnRecord2.mAlphaTag.length() > 60) {
            sendErrorResponse(message, "the input length of mAlphaTag is too long: " + mtkAdnRecord2.mAlphaTag, 502);
            return -1;
        }
        if (mtkAdnRecord2.mNumber == null) {
            mtkAdnRecord2.mNumber = "";
        }
        int length = mtkAdnRecord2.mNumber.length();
        if (mtkAdnRecord2.mNumber.indexOf(43) != -1) {
            length--;
        }
        if (length > 40) {
            sendErrorResponse(message, "the input length of phoneNumber is too long: " + mtkAdnRecord2.mNumber, 501);
            return -1;
        }
        for (int i6 = 0; i6 < 1; i6++) {
            additionalNumber = mtkAdnRecord2.getAdditionalNumber(i6);
            if (additionalNumber != null) {
                int length2 = additionalNumber.length();
                if (additionalNumber.indexOf(43) != -1) {
                    length2--;
                }
                if (length2 > 20) {
                    sendErrorResponse(message, "the input length of additional number is too long: " + additionalNumber, 505);
                    return -1;
                }
            }
        }
        if (!this.mUsimPhoneBookManager.checkEmailLength(mtkAdnRecord2.mEmails)) {
            sendErrorResponse(message, "the email string is too long", 509);
            return -1;
        }
        ArrayList<MtkAdnRecord> arrayListLoadEfFilesFromUsim = i == 20272 ? this.mUsimPhoneBookManager.loadEfFilesFromUsim(null) : getRecordsIfLoaded(i, null);
        if (arrayListLoadEfFilesFromUsim == null) {
            sendErrorResponse(message, "Adn list not exist for EF:" + i, 507);
            return -1;
        }
        int i7 = 1;
        Iterator<MtkAdnRecord> it = arrayListLoadEfFilesFromUsim.iterator();
        while (it.hasNext()) {
            if (mtkAdnRecord.isEqual(it.next())) {
                i5 = i7;
                break;
            }
            i7++;
        }
        logi("updateAdnBySearch index " + i5);
        if (i5 == -1) {
            if (mtkAdnRecord.mAlphaTag.length() == 0 && mtkAdnRecord.mNumber.length() == 0) {
                sendErrorResponse(message, "Adn record don't exist for " + mtkAdnRecord, 503);
            } else {
                sendErrorResponse(message, "Adn record don't exist for " + mtkAdnRecord);
            }
            return i5;
        }
        MtkAdnRecord mtkAdnRecord3 = null;
        if (i == 20272) {
            mtkAdnRecord3 = arrayListLoadEfFilesFromUsim.get(i5 - 1);
            int i8 = mtkAdnRecord3.mEfid;
            int i9 = mtkAdnRecord3.mExtRecord;
            int i10 = mtkAdnRecord3.mRecordNumber;
            mtkAdnRecord2.mEfid = i8;
            mtkAdnRecord2.mExtRecord = i9;
            mtkAdnRecord2.mRecordNumber = i10;
            i2 = i8;
            i3 = i10;
            i4 = i9;
        } else {
            i2 = i;
            i3 = i5;
            i4 = iExtensionEfForEf;
        }
        if (((Message) this.mUserWriteResponse.get(i2)) != null) {
            sendErrorResponse(message, "Have pending update for EF:0x" + Integer.toHexString(i2).toUpperCase());
            return i3;
        }
        if (i2 == 0) {
            sendErrorResponse(message, "Abnormal efid: " + i2);
            return i3;
        }
        if (!this.mUsimPhoneBookManager.checkEmailCapacityFree(i3, mtkAdnRecord2.mEmails, mtkAdnRecord3)) {
            sendErrorResponse(message, "drop the email for the limitation of the SIM card", 508);
            return i3;
        }
        for (int i11 = 0; i11 < 1; i11++) {
            String additionalNumber2 = mtkAdnRecord2.getAdditionalNumber(i11);
            if (!this.mUsimPhoneBookManager.isAnrCapacityFree(additionalNumber2, i3, i11, mtkAdnRecord3)) {
                sendErrorResponse(message, "drop the additional number for the write fail: " + additionalNumber2, 506);
                return i3;
            }
        }
        if (!this.mUsimPhoneBookManager.checkSneCapacityFree(i3, mtkAdnRecord2.mSne, mtkAdnRecord3)) {
            sendErrorResponse(message, "drop the sne for the limitation of the SIM card", 510);
            return i3;
        }
        this.mUserWriteResponse.put(i2, message);
        Object obj3 = this.mLock;
        synchronized (obj3) {
            try {
                try {
                    this.mSuccess = false;
                    this.mNeedToWait = true;
                    obj2 = obj3;
                    MtkAdnRecord mtkAdnRecord4 = mtkAdnRecord3;
                    try {
                        new MtkAdnRecordLoader(this.mFh).updateEF(mtkAdnRecord2, i2, i4, i3, str, obtainMessage(2, i2, i3, mtkAdnRecord2));
                        while (this.mNeedToWait) {
                            try {
                                this.mLock.wait();
                            } catch (InterruptedException e) {
                                return i3;
                            }
                        }
                        if (!this.mSuccess) {
                            loge("updateAdnBySearch mSuccess:" + this.mSuccess);
                            return i3;
                        }
                        if (i2 == 28474 || i2 == 20272 || i2 == 20282 || i2 == 20283 || i2 == 20284 || i2 == 20285) {
                            int iUpdateSneByAdnIndex = this.mUsimPhoneBookManager.updateSneByAdnIndex(mtkAdnRecord2.mSne, i3, mtkAdnRecord4);
                            if (-30 == iUpdateSneByAdnIndex) {
                                sendErrorResponse(message, "drop the SNE for the limitation of the SIM card", 510);
                            } else if (-40 == iUpdateSneByAdnIndex) {
                                sendErrorResponse(message, "the sne string is too long", 511);
                            } else {
                                for (int i12 = 0; i12 < 1; i12++) {
                                    this.mUsimPhoneBookManager.updateAnrByAdnIndex(mtkAdnRecord2.getAdditionalNumber(i12), i3, i12, mtkAdnRecord4);
                                }
                                int iUpdateEmailsByAdnIndex = this.mUsimPhoneBookManager.updateEmailsByAdnIndex(mtkAdnRecord2.mEmails, i3, mtkAdnRecord4);
                                if (-30 == iUpdateEmailsByAdnIndex) {
                                    sendErrorResponse(message, "drop the email for the limitation of the SIM card", 508);
                                } else if (-40 == iUpdateEmailsByAdnIndex) {
                                    sendErrorResponse(message, "the email string is too long", 509);
                                } else if (-50 == iUpdateEmailsByAdnIndex) {
                                    sendErrorResponse(message, "Unkown error occurs when update email", 2);
                                } else {
                                    logd("updateAdnBySearch response:" + message);
                                    AsyncResult.forMessage(message, (Object) null, (Throwable) null);
                                    message.sendToTarget();
                                }
                            }
                        } else if (i2 == 28475) {
                            logd("updateAdnBySearch FDN response:" + message);
                            AsyncResult.forMessage(message, (Object) null, (Throwable) null);
                            message.sendToTarget();
                        }
                        return i3;
                    } catch (Throwable th) {
                        th = th;
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Throwable th3) {
                th = th3;
                obj2 = obj3;
            }
        }
    }

    public boolean updateContactToGroups(int i, int[] iArr) {
        return this.mUsimPhoneBookManager.updateContactToGroups(i, iArr);
    }

    public boolean updateUsimAas(int i, int i2, String str) {
        return this.mUsimPhoneBookManager.updateUsimAas(i, i2, str);
    }

    public int updateUsimGroup(int i, String str) {
        return this.mUsimPhoneBookManager.updateUsimGroup(i, str);
    }
}

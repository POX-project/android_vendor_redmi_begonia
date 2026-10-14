package com.mediatek.internal.telephony.uicc;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.IsimUiccRecords;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UiccController;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkIsimUiccRecords extends IsimUiccRecords implements MtkIsimRecords {
    private static final int EVENT_GET_GBABP_DONE = 200;
    private static final int EVENT_GET_GBANL_DONE = 201;
    private static final int EVENT_GET_PSISMSC_DONE = 202;
    protected static final String LOG_TAG = "MtkIsimUiccRecords";
    ArrayList<byte[]> mEfGbanlList;
    byte[] mEfPsismsc;
    private int mIsimChannel;
    private String mIsimGbabp;
    IsimServiceTable mIsimServiceTable;
    private int mSlotId;
    protected UiccController mUiccController;

    private class MtkEfIsimIstLoaded implements IccRecords.IccRecordLoaded {
        private MtkEfIsimIstLoaded() {
        }

        public String getEfName() {
            return "EF_ISIM_IST";
        }

        public void onRecordLoaded(AsyncResult asyncResult) {
            byte[] bArr = (byte[]) asyncResult.result;
            MtkIsimUiccRecords.this.mIsimIst = IccUtils.bytesToHexString(bArr);
            MtkIsimUiccRecords.this.mIsimServiceTable = new IsimServiceTable(bArr);
            MtkIsimUiccRecords.this.log("IST: " + MtkIsimUiccRecords.this.mIsimServiceTable);
            if (MtkIsimUiccRecords.this.mIsimServiceTable.isAvailable(IsimServiceTable.IsimService.PCSCF_ADDRESS) || MtkIsimUiccRecords.this.mIsimServiceTable.isAvailable(IsimServiceTable.IsimService.PCSCF_DISCOVERY)) {
                MtkIsimUiccRecords.this.mFh.loadEFLinearFixedAll(28425, MtkIsimUiccRecords.this.obtainMessage(100, new IsimUiccRecords.EfIsimPcscfLoaded(MtkIsimUiccRecords.this)));
                MtkIsimUiccRecords.access$308(MtkIsimUiccRecords.this);
            }
            if (MtkIsimUiccRecords.this.mIsimServiceTable.isAvailable(IsimServiceTable.IsimService.SM_OVER_IP)) {
                MtkIsimUiccRecords.this.mFh.loadEFLinearFixed(MtkIccConstants.EF_PSISMSC, 1, MtkIsimUiccRecords.this.obtainMessage(202));
                MtkIsimUiccRecords.access$508(MtkIsimUiccRecords.this);
            }
            MtkIsimUiccRecords.this.fetchGbaParam();
        }
    }

    public MtkIsimUiccRecords(UiccCardApplication uiccCardApplication, Context context, CommandsInterface commandsInterface) {
        super(uiccCardApplication, context, commandsInterface);
        this.mEfPsismsc = null;
        log("MtkIsimUiccRecords X ctor this=" + this);
        this.mSlotId = ((MtkUiccCardApplication) uiccCardApplication).getPhoneId();
        this.mUiccController = UiccController.getInstance();
    }

    static /* synthetic */ int access$308(MtkIsimUiccRecords mtkIsimUiccRecords) {
        int i = mtkIsimUiccRecords.mRecordsToLoad;
        mtkIsimUiccRecords.mRecordsToLoad = i + 1;
        return i;
    }

    static /* synthetic */ int access$508(MtkIsimUiccRecords mtkIsimUiccRecords) {
        int i = mtkIsimUiccRecords.mRecordsToLoad;
        mtkIsimUiccRecords.mRecordsToLoad = i + 1;
        return i;
    }

    protected void fetchGbaParam() {
        if (this.mIsimServiceTable.isAvailable(IsimServiceTable.IsimService.GBA)) {
            this.mFh.loadEFTransparent(MtkIccConstants.EF_ISIM_GBABP, obtainMessage(EVENT_GET_GBABP_DONE));
            this.mRecordsToLoad++;
            this.mFh.loadEFLinearFixedAll(MtkIccConstants.EF_ISIM_GBANL, obtainMessage(201));
            this.mRecordsToLoad++;
        }
    }

    protected void fetchIsimRecords() {
        this.mRecordsRequested = true;
        this.mFh.loadEFTransparent(28418, obtainMessage(100, new IsimUiccRecords.EfIsimImpiLoaded(this)));
        this.mRecordsToLoad++;
        this.mFh.loadEFLinearFixedAll(28420, obtainMessage(100, new IsimUiccRecords.EfIsimImpuLoaded(this)));
        this.mRecordsToLoad++;
        this.mFh.loadEFTransparent(28419, obtainMessage(100, new IsimUiccRecords.EfIsimDomainLoaded(this)));
        this.mRecordsToLoad++;
        this.mFh.loadEFTransparent(MtkIccConstants.EF_IMSI, obtainMessage(100, new MtkEfIsimIstLoaded()));
        this.mRecordsToLoad++;
        log("fetchIsimRecords " + this.mRecordsToLoad + " requested: " + this.mRecordsRequested);
    }

    @Override // com.mediatek.internal.telephony.uicc.MtkIsimRecords
    public byte[] getEfPsismsc() {
        log("PSISMSC = " + IccUtils.bytesToHexString(this.mEfPsismsc));
        return this.mEfPsismsc;
    }

    @Override // com.mediatek.internal.telephony.uicc.MtkIsimRecords
    public String getIsimGbabp() {
        log("ISIM GBABP = " + this.mIsimGbabp);
        return this.mIsimGbabp;
    }

    public void handleMessage(Message message) {
        boolean z = false;
        if (this.mDestroyed.get()) {
            Rlog.e(LOG_TAG, "Received message " + message + "[" + message.what + "] while being destroyed. Ignoring.");
            return;
        }
        loge("IsimUiccRecords: handleMessage " + message + "[" + message.what + "] ");
        try {
            try {
                switch (message.what) {
                    case EVENT_GET_GBABP_DONE /* 200 */:
                        z = true;
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception != null) {
                            loge("Error on GET_ISIM_GBABP with exp " + asyncResult.exception);
                        } else {
                            this.mIsimGbabp = IccUtils.bytesToHexString((byte[]) asyncResult.result);
                        }
                        break;
                    case 201:
                        z = true;
                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                        if (asyncResult2.exception != null) {
                            loge("Error on GET_ISIM_GBANL with exp " + asyncResult2.exception);
                        } else {
                            this.mEfGbanlList = (ArrayList) asyncResult2.result;
                            log("GET_ISIM_GBANL record count: " + this.mEfGbanlList.size());
                        }
                        break;
                    case 202:
                        z = true;
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        byte[] bArr = (byte[]) asyncResult3.result;
                        if (asyncResult3.exception == null) {
                            log("EF_PSISMSC: " + IccUtils.bytesToHexString(bArr));
                            if (bArr != null) {
                                this.mEfPsismsc = bArr;
                            }
                        }
                        break;
                    default:
                        super.handleMessage(message);
                        break;
                }
            } catch (RuntimeException e) {
                Rlog.w(LOG_TAG, "Exception parsing SIM record", e);
            }
        } finally {
            if (0 != 0) {
                onRecordLoaded();
            }
        }
    }

    protected void log(String str) {
        Rlog.d(LOG_TAG, "[ISIM] " + str + " (slot " + this.mSlotId + ")");
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, "[ISIM] " + str + " (slot " + this.mSlotId + ")");
    }

    public void registerForRecordsLoaded(Handler handler, int i, Object obj) {
        if (this.mDestroyed.get()) {
            return;
        }
        Registrant registrant = new Registrant(handler, i, obj);
        this.mRecordsLoadedRegistrants.add(registrant);
        if (this.mRecordsToLoad == 0 && this.mRecordsRequested) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.uicc.MtkIsimRecords
    public void setIsimGbabp(String str, Message message) {
        this.mFh.updateEFTransparent(MtkIccConstants.EF_ISIM_GBABP, IccUtils.hexStringToBytes(str), message);
    }

    public void unregisterForRecordsLoaded(Handler handler) {
        this.mRecordsLoadedRegistrants.remove(handler);
    }
}

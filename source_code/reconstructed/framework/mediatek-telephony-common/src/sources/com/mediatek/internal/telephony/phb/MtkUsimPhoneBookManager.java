package com.mediatek.internal.telephony.phb;

import android.os.AsyncResult;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.SparseArray;
import android.util.SparseIntArray;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.gsm.SimTlv;
import com.android.internal.telephony.gsm.UsimPhoneBookManager;
import com.android.internal.telephony.uicc.AdnRecordCache;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.IccIoResult;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.mediatek.internal.telephony.MtkPhoneNumberUtils;
import com.mediatek.internal.telephony.MtkRIL;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.uicc.EFResponseData;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimConstants;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class MtkUsimPhoneBookManager extends UsimPhoneBookManager {
    private static final boolean DBG;
    private static final int EVENT_AAS_LOAD_DONE = 5;
    private static final int EVENT_AAS_LOAD_DONE_OPTMZ = 28;
    private static final int EVENT_AAS_UPDATE_DONE = 10;
    private static final int EVENT_ANR_RECORD_LOAD_DONE = 16;
    private static final int EVENT_ANR_RECORD_LOAD_OPTMZ_DONE = 23;
    private static final int EVENT_ANR_UPDATE_DONE = 9;
    private static final int EVENT_EMAIL_RECORD_LOAD_DONE = 15;
    private static final int EVENT_EMAIL_RECORD_LOAD_OPTMZ_DONE = 22;
    private static final int EVENT_EMAIL_UPDATE_DONE = 8;
    private static final int EVENT_EXT1_LOAD_DONE = 1001;
    private static final int EVENT_GAS_LOAD_DONE = 6;
    private static final int EVENT_GAS_UPDATE_DONE = 13;
    private static final int EVENT_GET_RECORDS_SIZE_DONE = 1000;
    private static final int EVENT_GRP_RECORD_LOAD_DONE = 17;
    private static final int EVENT_GRP_UPDATE_DONE = 12;
    private static final int EVENT_IAP_RECORD_LOAD_DONE = 14;
    private static final int EVENT_IAP_UPDATE_DONE = 7;
    private static final int EVENT_QUERY_ANR_AVAILABLE_OPTMZ_DONE = 26;
    private static final int EVENT_QUERY_EMAIL_AVAILABLE_OPTMZ_DONE = 25;
    private static final int EVENT_QUERY_PHB_ADN_INFO = 21;
    private static final int EVENT_QUERY_SNE_AVAILABLE_OPTMZ_DONE = 27;
    private static final int EVENT_SELECT_EF_FILE_DONE = 20;
    private static final int EVENT_SNE_RECORD_LOAD_DONE = 18;
    private static final int EVENT_SNE_RECORD_LOAD_OPTMZ_DONE = 24;
    private static final int EVENT_SNE_UPDATE_DONE = 11;
    private static final int EVENT_UPB_CAPABILITY_QUERY_DONE = 19;
    private static final String LOG_TAG = "MtkUsimPhoneBookManager";
    private static final int PBR_NOT_NEED_NOTIFY = -1;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final int UPB_EF_AAS = 3;
    private static final int UPB_EF_ANR = 0;
    private static final int UPB_EF_EMAIL = 1;
    private static final int UPB_EF_GAS = 4;
    private static final int UPB_EF_GRP = 5;
    private static final int UPB_EF_SNE = 2;
    private static final int USIM_DEFAULT_MAX_ADN_FILE_SIZE = 250;
    private static final int USIM_DEFAULT_MAX_EMAIL_FILE_SIZE = 100;
    public static final int USIM_ERROR_CAPACITY_FULL = -30;
    public static final int USIM_ERROR_GROUP_COUNT = -20;
    public static final int USIM_ERROR_NAME_LEN = -10;
    public static final int USIM_ERROR_OTHERS = -50;
    public static final int USIM_ERROR_STRING_TOOLONG = -40;
    private static final int USIM_MAX_AAS_ENTRIES_COUNT = 5;
    public static final int USIM_MAX_ANR_COUNT = 3;
    private static final int USIM_TYPE2_CONDITIONAL_LENGTH = 2;
    private ArrayList<String> mAasForAnr;
    private final Object mAasLock;
    private MtkAdnRecordCache mAdnCache;
    private int mAdnFileSize;
    private int[] mAdnRecordSize;
    private ArrayList<int[]> mAnrInfo;
    private int mAnrRecordSize;
    private MtkRIL mCi;
    private UiccCardApplication mCurrentApp;
    protected EFResponseData mEfData;
    private int mEmailFileSize;
    private int[] mEmailInfo;
    private int[] mEmailRecTable;
    private int mEmailRecordSize;
    private ArrayList<ArrayList<byte[]>> mExt1FileList;
    private ArrayList<UsimGroup> mGasForGrp;
    private final Object mGasLock;
    private ArrayList<ArrayList<byte[]>> mIapFileList;
    private boolean mIsReset;
    private AtomicBoolean mNeedNotify;
    private int mPbrNeedNotify;
    private ArrayList<PbrRecord> mPbrRecords;
    private ArrayList<MtkAdnRecord> mPhoneBookRecords;
    private int mReadEFLinerRecordSizeNum;
    private AtomicInteger mReadingAnrNum;
    private AtomicInteger mReadingEmailNum;
    private AtomicInteger mReadingGrpNum;
    private AtomicInteger mReadingIapNum;
    private AtomicInteger mReadingSneNum;
    private SparseArray<int[]> mRecordSize;
    private boolean mRefreshAdnInfo;
    private boolean mRefreshAnrInfo;
    private boolean mRefreshEmailInfo;
    private int mResult;
    private int mSliceCount;
    private int mSlotId;
    private int[] mSneInfo;
    private final Object mUPBCapabilityLock;
    private int[] mUpbCap;
    private int mUpbDone;

    private class File {
        public int mAnrIndex;
        private final int mEfid;
        private final int mIndex;
        private final int mParentTag;
        public int mPbrRecord;
        private final int mSfi;
        public int mTag;

        File(int i, int i2, int i3, int i4) {
            this.mParentTag = i;
            this.mEfid = i2;
            this.mSfi = i3;
            this.mIndex = i4;
        }

        public int getEfid() {
            return this.mEfid;
        }

        public int getIndex() {
            return this.mIndex;
        }

        public int getParentTag() {
            return this.mParentTag;
        }

        public int getSfi() {
            return this.mSfi;
        }

        public String toString() {
            return "mParentTag:" + Integer.toHexString(this.mParentTag).toUpperCase() + ",mEfid:" + Integer.toHexString(this.mEfid).toUpperCase() + ",mSfi:" + Integer.toHexString(this.mSfi).toUpperCase() + ",mIndex:" + this.mIndex + ",mPbrRecord:" + this.mPbrRecord + ",mAnrIndex" + this.mAnrIndex + ",mTag:" + Integer.toHexString(this.mTag).toUpperCase();
        }
    }

    private class PbrRecord {
        private int mAnrIndex = 0;
        private SparseArray<File> mFileIds = new SparseArray<>();
        private int mMasterFileRecordNum;

        PbrRecord(byte[] bArr) {
            MtkUsimPhoneBookManager.this.logi("PBR rec: " + IccUtils.bytesToHexString(bArr));
            parseTag(new SimTlv(bArr, 0, bArr.length));
        }

        void parseEfAndSFI(SimTlv simTlv, int i) {
            int i2;
            int i3 = 0;
            do {
                int tag = simTlv.getTag();
                switch (tag) {
                    case 192:
                    case 193:
                    case 194:
                    case 195:
                    case 196:
                    case 197:
                    case 198:
                    case 199:
                    case 200:
                    case ExternalSimConstants.EVENT_TYPE_SEND_RSIM_AUTH_IND /* 201 */:
                    case ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP /* 202 */:
                    case ExternalSimConstants.EVENT_TYPE_RSIM_AUTH_DONE /* 203 */:
                        byte[] data = simTlv.getData();
                        if (data.length >= 2 && data.length <= 3) {
                            int i4 = data.length == 3 ? data[2] & PplMessageManager.Type.INVALID : -1;
                            int i5 = ((data[0] & PplMessageManager.Type.INVALID) << 8) | (data[1] & PplMessageManager.Type.INVALID);
                            if (tag == 196) {
                                int i6 = this.mAnrIndex;
                                this.mAnrIndex = i6 + 1;
                                i2 = tag + (i6 * 256);
                            } else {
                                i2 = tag;
                            }
                            File file = MtkUsimPhoneBookManager.this.new File(i, i5, i4, i3);
                            file.mTag = i2;
                            file.mPbrRecord = MtkUsimPhoneBookManager.this.mSliceCount;
                            MtkUsimPhoneBookManager.this.logi("pbr " + file);
                            this.mFileIds.put(i2, file);
                        } else {
                            Rlog.w(MtkUsimPhoneBookManager.LOG_TAG, "Invalid TLV length: " + data.length);
                        }
                        break;
                }
                i3++;
            } while (simTlv.nextObject());
        }

        void parseTag(SimTlv simTlv) {
            do {
                int tag = simTlv.getTag();
                switch (tag) {
                    case 168:
                    case 169:
                    case 170:
                        byte[] data = simTlv.getData();
                        parseEfAndSFI(new SimTlv(data, 0, data.length), tag);
                        break;
                }
            } while (simTlv.nextObject());
            MtkUsimPhoneBookManager.access$408(MtkUsimPhoneBookManager.this);
        }
    }

    static {
        boolean z = false;
        if (SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1 && !SystemProperties.get("ro.build.type").equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)) {
            z = true;
        }
        DBG = z;
    }

    public MtkUsimPhoneBookManager(IccFileHandler iccFileHandler, AdnRecordCache adnRecordCache) {
        super(iccFileHandler, adnRecordCache);
        this.mSlotId = -1;
        this.mGasLock = new Object();
        this.mUPBCapabilityLock = new Object();
        this.mAasLock = new Object();
        this.mEmailRecordSize = -1;
        this.mEmailFileSize = 100;
        this.mAdnFileSize = USIM_DEFAULT_MAX_ADN_FILE_SIZE;
        this.mAnrRecordSize = -1;
        this.mSliceCount = 0;
        this.mUpbDone = -1;
        this.mIsReset = false;
        this.mPbrNeedNotify = -1;
        this.mReadEFLinerRecordSizeNum = 0;
        this.mIapFileList = null;
        this.mRefreshEmailInfo = false;
        this.mRefreshAnrInfo = false;
        this.mRefreshAdnInfo = false;
        this.mEmailRecTable = new int[400];
        this.mUpbCap = new int[8];
        this.mResult = -1;
        this.mReadingAnrNum = new AtomicInteger(0);
        this.mReadingEmailNum = new AtomicInteger(0);
        this.mReadingGrpNum = new AtomicInteger(0);
        this.mReadingSneNum = new AtomicInteger(0);
        this.mReadingIapNum = new AtomicInteger(0);
        this.mNeedNotify = new AtomicBoolean(false);
        this.mEfData = null;
    }

    public MtkUsimPhoneBookManager(IccFileHandler iccFileHandler, AdnRecordCache adnRecordCache, CommandsInterface commandsInterface, UiccCardApplication uiccCardApplication) {
        super(iccFileHandler, adnRecordCache);
        this.mSlotId = -1;
        this.mGasLock = new Object();
        this.mUPBCapabilityLock = new Object();
        this.mAasLock = new Object();
        this.mEmailRecordSize = -1;
        this.mEmailFileSize = 100;
        this.mAdnFileSize = USIM_DEFAULT_MAX_ADN_FILE_SIZE;
        this.mAnrRecordSize = -1;
        this.mSliceCount = 0;
        this.mUpbDone = -1;
        this.mIsReset = false;
        this.mPbrNeedNotify = -1;
        this.mReadEFLinerRecordSizeNum = 0;
        this.mIapFileList = null;
        this.mRefreshEmailInfo = false;
        this.mRefreshAnrInfo = false;
        this.mRefreshAdnInfo = false;
        this.mEmailRecTable = new int[400];
        this.mUpbCap = new int[8];
        this.mResult = -1;
        this.mReadingAnrNum = new AtomicInteger(0);
        this.mReadingEmailNum = new AtomicInteger(0);
        this.mReadingGrpNum = new AtomicInteger(0);
        this.mReadingSneNum = new AtomicInteger(0);
        this.mReadingIapNum = new AtomicInteger(0);
        this.mNeedNotify = new AtomicBoolean(false);
        this.mEfData = null;
        this.mFh = iccFileHandler;
        this.mPhoneBookRecords = new ArrayList<>();
        this.mGasForGrp = new ArrayList<>();
        this.mIapFileList = new ArrayList<>();
        this.mPbrRecords = null;
        this.mIsPbrPresent = true;
        this.mAdnCache = (MtkAdnRecordCache) adnRecordCache;
        this.mCi = (MtkRIL) commandsInterface;
        this.mCurrentApp = uiccCardApplication;
        this.mSlotId = uiccCardApplication == null ? -1 : uiccCardApplication.getPhoneId();
        this.mEmailsForAdnRec = new SparseArray();
        this.mSfiEfidTable = new SparseIntArray();
        for (int i = 0; i < 8; i++) {
            this.mUpbCap[i] = -1;
        }
        logi("constructor finished. ");
    }

    static /* synthetic */ int access$408(MtkUsimPhoneBookManager mtkUsimPhoneBookManager) {
        int i = mtkUsimPhoneBookManager.mSliceCount;
        mtkUsimPhoneBookManager.mSliceCount = i + 1;
        return i;
    }

    private byte[] buildAnrRecord(String str, int i, int i2) {
        log("buildAnrRecord anr:" + str + ",recordSize:" + i + ",aas:" + i2);
        if (i <= 0) {
            readAnrRecordSize();
        }
        byte[] bArr = new byte[i];
        for (int i3 = 0; i3 < i; i3++) {
            bArr[i3] = -1;
        }
        String strConvertPreDial = MtkPhoneNumberUtils.convertPreDial(str);
        if (TextUtils.isEmpty(strConvertPreDial)) {
            Rlog.w(LOG_TAG, "[buildAnrRecord] Empty dialing number");
            return bArr;
        }
        if (strConvertPreDial.length() > 20) {
            Rlog.w(LOG_TAG, "[buildAnrRecord] Max length of dialing number is 20");
            return null;
        }
        byte[] bArrNumberToCalledPartyBCD = MtkPhoneNumberUtils.numberToCalledPartyBCD(strConvertPreDial);
        if (bArrNumberToCalledPartyBCD != null) {
            bArr[0] = (byte) i2;
            System.arraycopy(bArrNumberToCalledPartyBCD, 0, bArr, 2, bArrNumberToCalledPartyBCD.length);
            bArr[1] = (byte) bArrNumberToCalledPartyBCD.length;
        }
        return bArr;
    }

    private String[] buildAnrRecordOptmz(String str, int i) {
        int i2 = 129;
        if (str.indexOf(43) != -1) {
            if (str.indexOf(43) != str.lastIndexOf(43)) {
                Rlog.w(LOG_TAG, "There are multiple '+' in the number: " + str);
            }
            i2 = 145;
            str = str.replace("+", "");
        }
        return new String[]{str.replace('N', '?').replace(',', 'p').replace(';', 'w'), Integer.toString(i2), Integer.toString(i)};
    }

    private byte[] buildEmailRecord(String str, int i, int i2, boolean z) {
        ArrayList<PbrRecord> arrayList;
        byte[] bArr = new byte[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            bArr[i3] = -1;
        }
        if (str != null && !str.equals("")) {
            byte[] bArrStringToGsm8BitPacked = GsmAlphabet.stringToGsm8BitPacked(str);
            int length = (this.mEmailRecordSize == -1 || !z) ? bArr.length : bArr.length - 2;
            log("buildEmailRecord eMailData.length=" + bArrStringToGsm8BitPacked.length + ", maxDataLength=" + length);
            if (bArrStringToGsm8BitPacked.length > length) {
                return null;
            }
            System.arraycopy(bArrStringToGsm8BitPacked, 0, bArr, 0, bArrStringToGsm8BitPacked.length);
            if (z && (arrayList = this.mPbrRecords) != null) {
                int i4 = this.mAdnFileSize;
                int i5 = (i - 1) / i4;
                int i6 = (i % i4) & 255;
                File file = (File) arrayList.get(i5).mFileIds.get(192);
                bArr[i2 - 2] = (byte) file.getSfi();
                bArr[i2 - 1] = (byte) i6;
                log("buildEmailRecord x+1=" + file.getSfi() + ", x+2=" + i6);
            }
        }
        return bArr;
    }

    private ArrayList<MtkAdnRecord> changeAdnRecordNumber(int i, ArrayList<MtkAdnRecord> arrayList) {
        int size = arrayList.size();
        for (int i2 = 0; i2 < size; i2++) {
            MtkAdnRecord mtkAdnRecord = arrayList.get(i2);
            if (mtkAdnRecord != null) {
                mtkAdnRecord.setRecordIndex(mtkAdnRecord.getRecId() + i);
            }
        }
        return arrayList;
    }

    private boolean checkIsPhbReady() {
        String str = "";
        if (!SubscriptionManager.isValidSlotIndex(this.mSlotId)) {
            log("[isPhbReady] InvalidSlotId slotId: " + this.mSlotId);
            return false;
        }
        String telephonyProperty = TelephonyManager.getTelephonyProperty(this.mSlotId, "vendor.gsm.sim.ril.phbready", "false");
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild")) {
            logi("[isPhbReady] isPhbReady: " + telephonyProperty);
            return telephonyProperty.equals("true");
        }
        String str2 = SystemProperties.get("gsm.sim.state");
        if (str2 != null && str2.length() > 0) {
            String[] strArrSplit = str2.split(",");
            int i = this.mSlotId;
            if (i >= 0 && i < strArrSplit.length && strArrSplit[i] != null) {
                str = strArrSplit[i];
            }
        }
        boolean z = str.equals("NETWORK_LOCKED") || str.equals("PIN_REQUIRED");
        logi("[isPhbReady] isPhbReady: " + telephonyProperty + ",strSimState: " + str2);
        return telephonyProperty.equals("true") && !z;
    }

    private int countEmailCapacity(int i) {
        String[] emails;
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0) {
            return -1;
        }
        int i2 = this.mAdnFileSize;
        int i3 = (i - 1) / i2;
        int i4 = i2 * i3;
        int size = this.mPhoneBookRecords.size();
        int i5 = this.mAdnFileSize + i4;
        int i6 = size < i5 ? size : i5;
        int i7 = 0;
        if (((File) this.mPbrRecords.get(i3).mFileIds.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP)) == null) {
            return -1;
        }
        MtkAdnRecord mtkAdnRecord = null;
        for (int i8 = i4; i8 < i6; i8++) {
            try {
                mtkAdnRecord = this.mPhoneBookRecords.get(i8);
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "countEmailCapacity: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i8);
            }
            if (mtkAdnRecord != null && (emails = mtkAdnRecord.getEmails()) != null && emails.length > 0 && emails[0].length() > 0) {
                i7++;
            }
        }
        log("countEmailCapacity: email used: " + i7);
        return i7;
    }

    private int countEmailFileSize() {
        int size = this.mPhoneBookRecords.size();
        int i = this.mAdnFileSize;
        int i2 = size / i;
        if (size % i > 0) {
            i2++;
        }
        int[] iArr = this.mEmailInfo;
        if (iArr == null || iArr.length != 3 || i2 <= 0) {
            return 100;
        }
        return iArr[0] / i2;
    }

    private void createPbrFile(ArrayList<byte[]> arrayList) {
        int sfi;
        if (arrayList == null || arrayList.size() == 0) {
            this.mPbrRecords = null;
            this.mIsPbrPresent = false;
            return;
        }
        this.mPbrRecords = new ArrayList<>();
        this.mSliceCount = 0;
        for (int i = 0; i < arrayList.size(); i++) {
            if (arrayList.get(i) != null && arrayList.get(i).length > 0 && arrayList.get(i)[0] != -1) {
                this.mPbrRecords.add(new PbrRecord(arrayList.get(i)));
            }
        }
        for (PbrRecord pbrRecord : this.mPbrRecords) {
            File file = (File) pbrRecord.mFileIds.get(192);
            if (file != null && (sfi = file.getSfi()) != -1) {
                this.mSfiEfidTable.put(sfi, ((File) pbrRecord.mFileIds.get(192)).getEfid());
            }
        }
    }

    private String decodeGas(String str) {
        StringBuilder sb = new StringBuilder();
        sb.append("[decodeGas] gas string is ");
        sb.append(str == null ? "null" : str);
        log(sb.toString());
        if (str == null || TextUtils.isEmpty(str) || str.length() % 2 != 0) {
            return null;
        }
        try {
            byte[] bArrHexStringToBytes = IccUtils.hexStringToBytes(str);
            if (bArrHexStringToBytes != null) {
                return new String(bArrHexStringToBytes, 0, str.length() / 2, "utf-16be");
            }
            Rlog.w(LOG_TAG, "gas string is null");
            return null;
        } catch (UnsupportedEncodingException e) {
            Rlog.e(LOG_TAG, "[decodeGas] implausible UnsupportedEncodingException", e);
            return null;
        } catch (RuntimeException e2) {
            Rlog.e(LOG_TAG, "[decodeGas] RuntimeException", e2);
            return null;
        }
    }

    private String encodeToUcs2(String str) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            String hexString = Integer.toHexString(str.charAt(i));
            for (int i2 = 0; i2 < 4 - hexString.length(); i2++) {
                sb.append("0");
            }
            sb.append(hexString);
        }
        return sb.toString();
    }

    private int[] getAdnStorageInfo() {
        logi("getAdnStorageInfo");
        MtkRIL mtkRIL = this.mCi;
        if (mtkRIL == null) {
            Rlog.w(LOG_TAG, "GetAdnStorageInfo: filehandle is null.");
            return null;
        }
        mtkRIL.queryPhbStorageInfo(0, obtainMessage(21));
        synchronized (this.mLock) {
            try {
                this.mLock.wait();
            } catch (InterruptedException e) {
                Rlog.e(LOG_TAG, "Interrupted Exception in getAdnStorageInfo");
            }
        }
        return this.mAdnRecordSize;
    }

    private int getEmailRecNum(String[] strArr, int i, int i2, byte[] bArr, int i3) {
        boolean z = false;
        int i4 = bArr[i3] & PplMessageManager.Type.INVALID;
        log("getEmailRecNum recNum:" + i4);
        if (strArr == null) {
            if (i4 < 255 && i4 > 0) {
                this.mEmailRecTable[i4 - 1] = 0;
            }
            return -1;
        }
        for (int i5 = 0; i5 < strArr.length; i5++) {
            if (strArr[i5] != null && !strArr[i5].equals("")) {
                z = true;
                break;
            }
        }
        if (!z) {
            if (i4 < 255 && i4 > 0) {
                this.mEmailRecTable[i4 - 1] = 0;
            }
            return -1;
        }
        if (i4 > this.mEmailFileSize || i4 >= 255 || i4 <= 0) {
            int i6 = this.mEmailFileSize * i;
            for (int i7 = i6; i7 < this.mEmailFileSize + i6; i7++) {
                log("updateEmailsByAdnIndex: mEmailRecTable[" + i7 + "] is " + this.mEmailRecTable[i7]);
                int[] iArr = this.mEmailRecTable;
                if (iArr[i7] == 0) {
                    i4 = (i7 + 1) - i6;
                    iArr[i7] = i2;
                    break;
                }
            }
        }
        if (i4 > this.mEmailFileSize) {
            i4 = 255;
        }
        if (i4 == -1) {
            return -2;
        }
        return i4;
    }

    private int getUsimEfType(int i) {
        SparseArray sparseArray;
        File file;
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || (file = (File) sparseArray.get(i)) == null) {
            return 0;
        }
        Rlog.d(LOG_TAG, "[getUsimEfType] efTag: " + i + ", type: " + file.getParentTag());
        return file.getParentTag();
    }

    private boolean loadAasFiles() {
        synchronized (this.mLock) {
            if (this.mAasForAnr == null || this.mAasForAnr.size() == 0) {
                if (!this.mIsPbrPresent.booleanValue()) {
                    Rlog.e(LOG_TAG, "No PBR files");
                    return false;
                }
                loadPBRFiles();
                if (this.mPbrRecords != null && this.mPbrRecords.size() != 0) {
                    int size = this.mPbrRecords.size();
                    if (this.mAasForAnr == null) {
                        this.mAasForAnr = new ArrayList<>();
                    }
                    this.mAasForAnr.clear();
                    logi("loadAasFiles read num:" + size + ", " + this.mPbrNeedNotify);
                    if (CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
                        readAasFileAndWaitOptmz();
                    } else {
                        for (int i = 0; i < size; i++) {
                            readAASFileAndWait(i);
                        }
                    }
                }
                return false;
            }
            return true;
        }
    }

    private void log(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str + "(slot " + this.mSlotId + ")");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logi(String str) {
        Rlog.i(LOG_TAG, str + "(slot " + this.mSlotId + ")");
    }

    private void queryUpbCapablityAndWait() {
        logi("queryUpbCapablityAndWait begin");
        synchronized (this.mUPBCapabilityLock) {
            for (int i = 0; i < 8; i++) {
                this.mUpbCap[i] = -1;
            }
            if (checkIsPhbReady()) {
                this.mCi.queryUPBCapability(obtainMessage(19));
                try {
                    this.mUPBCapabilityLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in queryUpbCapablityAndWait");
                }
            }
        }
        logi("queryUpbCapablityAndWait done:N_Anr :" + this.mUpbCap[0] + ",N_Email:" + this.mUpbCap[1] + ",N_Sne:" + this.mUpbCap[2] + ",N_Aas:" + this.mUpbCap[3] + ",L_Aas:" + this.mUpbCap[4] + ",N_Gas:" + this.mUpbCap[5] + ",L_Gas:" + this.mUpbCap[6] + ",N_Grp:" + this.mUpbCap[7]);
    }

    private void readAASFileAndWait(int i) {
        SparseArray sparseArray;
        File file;
        logi("readAASFileAndWait " + i);
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(i).mFileIds) == null || (file = (File) sparseArray.get(199)) == null) {
            return;
        }
        int efid = file.getEfid();
        log("readAASFileAndWait-get AAS EFID " + efid);
        if (this.mAasForAnr != null) {
            logi("AAS has been loaded for Pbr number " + i);
        }
        if (this.mFh == null) {
            Rlog.e(LOG_TAG, "readAASFileAndWait-IccFileHandler is null");
            return;
        }
        Message messageObtainMessage = obtainMessage(5);
        messageObtainMessage.arg1 = i;
        this.mFh.loadEFLinearFixedAll(efid, messageObtainMessage);
        try {
            this.mLock.wait();
        } catch (InterruptedException e) {
            Rlog.e(LOG_TAG, "Interrupted Exception in readAASFileAndWait");
        }
    }

    private void readAasFileAndWaitOptmz() {
        SparseArray sparseArray;
        File file;
        logi("readAasFileAndWaitOptmz begin");
        ArrayList<String> arrayList = this.mAasForAnr;
        if (arrayList == null || arrayList.size() == 0) {
            int i = 0;
            int[] iArr = this.mUpbCap;
            if (iArr[3] < 0) {
                ArrayList<PbrRecord> arrayList2 = this.mPbrRecords;
                if (arrayList2 == null || arrayList2.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || (file = (File) sparseArray.get(199)) == null) {
                    return;
                }
                int[] eFLinearRecordSize = readEFLinearRecordSize(file.getEfid());
                if (eFLinearRecordSize != null && eFLinearRecordSize.length == 3) {
                    i = eFLinearRecordSize[2];
                }
            } else {
                i = iArr[3];
            }
            if (i > 5) {
                i = 5;
            }
            this.mCi.readUPBAasList(1, i, obtainMessage(28));
            try {
                this.mLock.wait();
            } catch (InterruptedException e) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readAasFileAndWaitOptmz");
            }
        }
        logi("readAasFileAndWaitOptmz end");
    }

    private boolean readAdnFileAndWait(int i) {
        logi("readAdnFileAndWait begin: recId is " + i + ",mIsReset:" + this.mIsReset);
        int size = this.mPhoneBookRecords.size();
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        mtkAdnRecordCache.requestLoadAllAdnLike(28474, mtkAdnRecordCache.extensionEfForEf(28474), obtainMessage(2));
        try {
            this.mLock.wait();
        } catch (InterruptedException e) {
            Rlog.e(LOG_TAG, "Interrupted Exception in readAdnFileAndWait");
        }
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList != null && arrayList.size() > i) {
            this.mPbrRecords.get(i).mMasterFileRecordNum = this.mPhoneBookRecords.size() - size;
        }
        logi("readAdnFileAndWait end: recId is " + i + ",mIsReset:" + this.mIsReset);
        return !this.mIsReset;
    }

    private void readAdnFileAndWaitForUICC(int i) {
        SparseArray sparseArray;
        logi("readAdnFileAndWaitForUICC begin" + i);
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(i).mFileIds) == null || sparseArray.size() == 0) {
            return;
        }
        if (sparseArray.get(192) == null) {
            Rlog.e(LOG_TAG, "readAdnFileAndWaitForUICC: No ADN tag in pbr record " + i);
            return;
        }
        int efid = ((File) sparseArray.get(192)).getEfid();
        log("readAdnFileAndWaitForUICC: EFADN id is " + efid);
        log("UiccPhoneBookManager readAdnFileAndWaitForUICC: recId is " + i + "");
        MtkAdnRecordCache mtkAdnRecordCache = this.mAdnCache;
        mtkAdnRecordCache.requestLoadAllAdnLike(efid, mtkAdnRecordCache.extensionEfForEf(28474), obtainMessage(2));
        try {
            this.mLock.wait();
        } catch (InterruptedException e) {
            Rlog.e(LOG_TAG, "Interrupted Exception in readAdnFileAndWait");
        }
        int size = this.mPhoneBookRecords.size();
        ArrayList<PbrRecord> arrayList2 = this.mPbrRecords;
        if (arrayList2 != null && arrayList2.size() > i) {
            this.mPbrRecords.get(i).mMasterFileRecordNum = this.mPhoneBookRecords.size() - size;
        }
        logi("readAdnFileAndWaitForUICC end" + i);
    }

    private void readAnrFileAndWait(int i) {
        logi("readAnrFileAndWait: recId is " + i);
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0) {
            return;
        }
        SparseArray sparseArray = this.mPbrRecords.get(i).mFileIds;
        if (sparseArray == null) {
            log("readAnrFileAndWait: No anr tag in pbr record " + i);
            return;
        }
        for (int i2 = 0; i2 < this.mPbrRecords.get(i).mAnrIndex; i2++) {
            File file = (File) sparseArray.get((i2 * 256) + 196);
            if (file != null) {
                if (file.getParentTag() == 169) {
                    file.mAnrIndex = i2;
                    readType2Ef(file);
                    return;
                } else {
                    if (file.getParentTag() == 168) {
                        file.mAnrIndex = i2;
                        readType1Ef(file, i2);
                        return;
                    }
                    return;
                }
            }
        }
    }

    private void readAnrFileAndWaitOptmz() {
        SparseArray sparseArray;
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || ((File) sparseArray.get((0 * 256) + 196)) == null) {
            return;
        }
        int i = 0;
        int size = this.mPhoneBookRecords.size();
        for (int i2 = 0; i2 < size; i2++) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i2);
                if (mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) {
                    this.mReadingAnrNum.addAndGet(1);
                    this.mCi.readUPBAnrEntry(i2 + 1, 0 + 1, obtainMessage(23, new int[]{0, i2, 0}));
                    i++;
                }
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "readAnrFileAndWaitOptmz: mPhoneBookRecords IndexOutOfBoundsnumAdnRecs is " + size + "index is " + i2);
            }
        }
        if (this.mReadingAnrNum.get() == 0) {
            this.mNeedNotify.set(false);
            return;
        }
        this.mNeedNotify.set(true);
        logi("readAnrFileAndWaitOptmz before mLock.wait " + this.mNeedNotify.get() + " total:" + i);
        synchronized (this.mLock) {
            try {
                this.mLock.wait();
            } catch (InterruptedException e2) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readAnrFileAndWaitOptmz");
            }
        }
        logi("readAnrFileAndWaitOptmz after mLock.wait:" + this.mNeedNotify.get());
        if (true == this.mNeedNotify.get()) {
            this.mNeedNotify.set(false);
        }
    }

    private void readAnrRecordSize() {
        logi("readAnrRecordSize");
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0) {
            Rlog.w(LOG_TAG, "readAnrRecordSize: PBR null ");
            return;
        }
        SparseArray sparseArray = this.mPbrRecords.get(0).mFileIds;
        if (sparseArray == null) {
            Rlog.w(LOG_TAG, "readAnrRecordSize: fileIds null ");
            return;
        }
        File file = (File) sparseArray.get(196);
        if (sparseArray.size() == 0 || file == null) {
            this.mAnrRecordSize = 0;
            Rlog.w(LOG_TAG, "readAnrRecordSize: No anr tag in pbr file ");
            return;
        }
        int[] eFLinearRecordSize = readEFLinearRecordSize(file.getEfid());
        if (eFLinearRecordSize == null || eFLinearRecordSize.length != 3) {
            Rlog.e(LOG_TAG, "readAnrRecordSize: read record size error.");
            return;
        }
        this.mAnrRecordSize = eFLinearRecordSize[0];
        logi("readAnrRecordSize end size = " + this.mAnrRecordSize);
    }

    private void readEmailFileAndWait(int i) {
        SparseArray sparseArray;
        File file;
        logi("readEmailFileAndWait " + i);
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(i).mFileIds) == null || (file = (File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP)) == null) {
            return;
        }
        file.getEfid();
        if (file.getParentTag() == 168) {
            readType1Ef(file, 0);
        } else if (file.getParentTag() == 169) {
            readType2Ef(file);
        }
    }

    private void readEmailFileAndWaitOptmz() {
        SparseArray sparseArray;
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || ((File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP)) == null) {
            return;
        }
        int i = 0;
        int size = this.mPhoneBookRecords.size();
        for (int i2 = 0; i2 < size; i2++) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i2);
                if (mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) {
                    this.mReadingEmailNum.incrementAndGet();
                    this.mCi.readUPBEmailEntry(i2 + 1, 1, obtainMessage(22, new int[]{0, i2}));
                    i++;
                }
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "readEmailFileAndWaitOptmz: mPhoneBookRecords IndexOutOfBoundsnumAdnRecs is " + size + "index is " + i2);
            }
        }
        if (this.mReadingEmailNum.get() == 0) {
            this.mNeedNotify.set(false);
            return;
        }
        this.mNeedNotify.set(true);
        logi("readEmailFileAndWaitOptmz before mLock.wait " + this.mNeedNotify.get() + " total:" + i);
        synchronized (this.mLock) {
            try {
                this.mLock.wait();
            } catch (InterruptedException e2) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readEmailFileAndWaitOptmz");
            }
        }
        logi("readEmailFileAndWaitOptmz after mLock.wait: " + this.mNeedNotify.get());
        if (true == this.mNeedNotify.get()) {
            this.mNeedNotify.set(false);
        }
    }

    private void readEmailRecordSize() {
        logi("readEmailRecordSize");
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0) {
            Rlog.w(LOG_TAG, "readEmailRecordSize: PBR null");
            return;
        }
        SparseArray sparseArray = this.mPbrRecords.get(0).mFileIds;
        if (sparseArray == null) {
            Rlog.w(LOG_TAG, "readEmailRecordSize: fileId null");
            return;
        }
        File file = (File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP);
        if (sparseArray.size() == 0 || file == null) {
            this.mEmailRecordSize = 0;
            Rlog.w(LOG_TAG, "readEmailRecordSize: No email tag in pbr file ");
            return;
        }
        int[] eFLinearRecordSize = readEFLinearRecordSize(file.getEfid());
        if (eFLinearRecordSize == null || eFLinearRecordSize.length != 3) {
            Rlog.e(LOG_TAG, "readEmailRecordSize: read record size error.");
            return;
        }
        this.mEmailFileSize = eFLinearRecordSize[2];
        this.mEmailRecordSize = eFLinearRecordSize[0];
        logi("readEmailRecordSize Size:" + this.mEmailFileSize + "," + this.mEmailRecordSize);
    }

    private void readExt1FileAndWait(int i) {
        logi("readExt1FileAndWait " + i);
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || this.mPbrRecords.get(i) == null) {
            return;
        }
        SparseArray sparseArray = this.mPbrRecords.get(i).mFileIds;
        if (sparseArray == null || sparseArray.get(194) == null) {
            Rlog.e(LOG_TAG, "readExt1FileAndWait-PBR have no Ext1 record");
            return;
        }
        int efid = ((File) sparseArray.get(194)).getEfid();
        log("readExt1FileAndWait-get EXT1 EFID " + efid);
        ArrayList<ArrayList<byte[]>> arrayList2 = this.mExt1FileList;
        if (arrayList2 != null && i < arrayList2.size()) {
            log("EXT1 has been loaded for Pbr number " + i);
            return;
        }
        if (this.mFh == null) {
            Rlog.e(LOG_TAG, "readExt1FileAndWait-IccFileHandler is null");
            return;
        }
        Message messageObtainMessage = obtainMessage(1001);
        messageObtainMessage.arg1 = i;
        this.mFh.loadEFLinearFixedAll(efid, messageObtainMessage);
        try {
            this.mLock.wait();
        } catch (InterruptedException e) {
            Rlog.e(LOG_TAG, "Interrupted Exception in readExt1FileAndWait");
        }
    }

    private void readGasListAndWait() {
        logi("readGasListAndWait begin");
        synchronized (this.mGasLock) {
            if (this.mUpbCap[5] <= 0) {
                log("readGasListAndWait no need to read. return");
                return;
            }
            this.mCi.readUPBGasList(1, this.mUpbCap[5], obtainMessage(6));
            try {
                this.mGasLock.wait();
            } catch (InterruptedException e) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readGasListAndWait");
            }
            logi("readGasListAndWait end");
        }
    }

    private void readGrpIdsAndWait() {
        SparseArray sparseArray;
        logi("readGrpIdsAndWait begin");
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || ((File) sparseArray.get(198)) == null) {
            return;
        }
        int i = 0;
        int size = this.mPhoneBookRecords.size();
        for (int i2 = 0; i2 < size; i2++) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i2);
                if (mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) {
                    this.mReadingGrpNum.incrementAndGet();
                    int recId = mtkAdnRecord.getRecId();
                    this.mCi.readUPBGrpEntry(recId, obtainMessage(17, new int[]{i2, recId}));
                    i++;
                }
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "readGrpIdsAndWait: mPhoneBookRecords IndexOutOfBoundsException numAdnRecs is " + size + "index is " + i2);
            }
        }
        if (this.mReadingGrpNum.get() == 0) {
            this.mNeedNotify.set(false);
            return;
        }
        this.mNeedNotify.set(true);
        logi("readGrpIdsAndWait before mLock.wait " + this.mNeedNotify.get() + " total:" + i);
        try {
            this.mLock.wait();
        } catch (InterruptedException e2) {
            Rlog.e(LOG_TAG, "Interrupted Exception in readGrpIdsAndWait");
        }
        logi("readGrpIdsAndWait after mLock.wait after mLock.wait " + this.mNeedNotify.get());
        if (true == this.mNeedNotify.get()) {
            this.mNeedNotify.set(false);
        }
    }

    private void readIapFileAndWait(int i, int i2, boolean z) {
        logi("readIapFileAndWait pbrIndex :" + i + ",efid:" + i2 + ",forceRefresh:" + z);
        if (i2 <= 0) {
            return;
        }
        if (this.mIapFileList == null) {
            logi("readIapFileAndWait IapFileList is null !!!! recreate it !");
            this.mIapFileList = new ArrayList<>();
        }
        SparseArray<int[]> sparseArray = this.mRecordSize;
        int[] eFLinearRecordSize = (sparseArray == null || sparseArray.get(i2) == null) ? readEFLinearRecordSize(i2) : this.mRecordSize.get(i2);
        if (eFLinearRecordSize == null || eFLinearRecordSize.length != 3) {
            Rlog.e(LOG_TAG, "readIapFileAndWait: read record size error.");
            this.mIapFileList.add(i, new ArrayList<>());
            return;
        }
        char c = 0;
        if (this.mIapFileList.size() <= i) {
            log("Create IAP first!");
            ArrayList<byte[]> arrayList = new ArrayList<>();
            for (int i3 = 0; i3 < this.mAdnFileSize; i3++) {
                byte[] bArr = new byte[eFLinearRecordSize[0]];
                for (byte b : bArr) {
                }
                arrayList.add(bArr);
            }
            this.mIapFileList.add(i, arrayList);
        } else {
            log("This IAP has been loaded!");
            if (!z) {
                return;
            }
        }
        int size = this.mPhoneBookRecords.size();
        int i4 = this.mAdnFileSize;
        int i5 = i * i4;
        int i6 = i4 + i5;
        int i7 = size < i6 ? size : i6;
        log("readIapFileAndWait nOffset " + i5 + ", nMax " + i7);
        int i8 = i5;
        int i9 = 0;
        while (i8 < i7) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i8);
                if (mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) {
                    this.mReadingIapNum.addAndGet(1);
                    int[] iArr = new int[2];
                    iArr[c] = i;
                    iArr[1] = i8 - i5;
                    this.mFh.readEFLinearFixed(i2, (i8 + 1) - i5, eFLinearRecordSize[c], obtainMessage(14, iArr));
                    i9++;
                }
                i8++;
                c = 0;
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "readIapFileAndWait: mPhoneBookRecords IndexOutOfBoundsException numAdnRecs is " + size + "index is " + i8);
            }
        }
        if (this.mReadingIapNum.get() == 0) {
            this.mNeedNotify.set(false);
            return;
        }
        this.mNeedNotify.set(true);
        logi("readIapFileAndWait before mLock.wait " + this.mNeedNotify.get() + " total:" + i9);
        synchronized (this.mLock) {
            try {
                this.mLock.wait();
            } catch (InterruptedException e2) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readIapFileAndWait");
            }
        }
        logi("readIapFileAndWait after mLock.wait after mLock.wait:" + this.mNeedNotify.get());
        if (true == this.mNeedNotify.get()) {
            this.mNeedNotify.set(false);
        }
    }

    private void readSneFileAndWait(int i) {
        SparseArray sparseArray;
        File file;
        logi("readSneFileAndWait " + i);
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(i).mFileIds) == null || (file = (File) sparseArray.get(195)) == null) {
            return;
        }
        log("readSneFileAndWait: EFSNE id is " + file.getEfid());
        if (file.getParentTag() == 169) {
            readType2Ef(file);
        } else if (file.getParentTag() == 168) {
            readType1Ef(file, 0);
        }
    }

    private void readSneFileAndWaitOptmz() {
        SparseArray sparseArray;
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || ((File) sparseArray.get(195)) == null) {
            return;
        }
        int i = 0;
        int size = this.mPhoneBookRecords.size();
        for (int i2 = 0; i2 < size; i2++) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i2);
                if (mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) {
                    this.mReadingSneNum.incrementAndGet();
                    this.mCi.readUPBSneEntry(i2 + 1, 1, obtainMessage(24, new int[]{0, i2}));
                    i++;
                }
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "readSneFileAndWaitOptmz: mPhoneBookRecords IndexOutOfBoundsnumAdnRecs is " + size + "index is " + i2);
            }
        }
        if (this.mReadingSneNum.get() == 0) {
            this.mNeedNotify.set(false);
            return;
        }
        this.mNeedNotify.set(true);
        logi("readSneFileAndWaitOptmz before mLock.wait " + this.mNeedNotify.get() + " total:" + i);
        synchronized (this.mLock) {
            try {
                this.mLock.wait();
            } catch (InterruptedException e2) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readSneFileAndWaitOptmz");
            }
        }
        logi("readSneFileAndWaitOptmz after mLock.wait: " + this.mNeedNotify.get());
        if (true == this.mNeedNotify.get()) {
            this.mNeedNotify.set(false);
        }
    }

    private void readType1Ef(File file, int i) {
        log("readType1Ef:" + file);
        if (file.getParentTag() != 168) {
            return;
        }
        int i2 = file.mPbrRecord;
        int size = this.mPhoneBookRecords.size();
        int i3 = this.mAdnFileSize;
        int i4 = i2 * i3;
        int i5 = i3 + i4;
        int i6 = size < i5 ? size : i5;
        SparseArray<int[]> sparseArray = this.mRecordSize;
        int[] eFLinearRecordSize = (sparseArray == null || sparseArray.get(file.getEfid()) == null) ? readEFLinearRecordSize(file.getEfid()) : this.mRecordSize.get(file.getEfid());
        if (eFLinearRecordSize != null) {
            int i7 = 3;
            if (eFLinearRecordSize.length == 3) {
                int i8 = eFLinearRecordSize[0];
                int i9 = file.mTag % 256;
                int i10 = file.mTag / 256;
                log("readType1Ef: RecordSize = " + i8);
                if (i9 == 202) {
                    for (int i11 = i4; i11 < this.mEmailFileSize + i4; i11++) {
                        try {
                            this.mEmailRecTable[i11] = 0;
                        } catch (ArrayIndexOutOfBoundsException e) {
                            Rlog.e(LOG_TAG, "init RecTable error " + e.getMessage());
                        }
                    }
                }
                if (i8 == 0) {
                    Rlog.w(LOG_TAG, "readType1Ef: recordSize is 0. ");
                    return;
                }
                int i12 = i4;
                int i13 = 0;
                while (i12 < i6) {
                    try {
                        MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i12);
                        if (mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) {
                            int[] iArr = new int[i7];
                            iArr[0] = file.mPbrRecord;
                            iArr[1] = i12;
                            iArr[2] = i;
                            int i14 = 0;
                            if (i9 == 195) {
                                i14 = 18;
                                this.mReadingSneNum.incrementAndGet();
                            } else if (i9 == 196) {
                                i14 = 16;
                                this.mReadingAnrNum.addAndGet(1);
                            } else if (i9 != 202) {
                                Rlog.e(LOG_TAG, "not support tag " + file.mTag);
                            } else {
                                iArr[0] = ((i12 + 1) - i4) + (this.mEmailFileSize * i4);
                                i14 = 15;
                                this.mReadingEmailNum.incrementAndGet();
                            }
                            this.mFh.readEFLinearFixed(file.getEfid(), (i12 + 1) - i4, i8, obtainMessage(i14, iArr));
                            i13++;
                        }
                        i12++;
                        i2 = i2;
                        i6 = i6;
                        i4 = i4;
                        i7 = 3;
                    } catch (IndexOutOfBoundsException e2) {
                        Rlog.e(LOG_TAG, "readType1Ef: mPhoneBookRecords IndexOutOfBoundsException numAdnRecs is " + size + "index is " + i12);
                    }
                }
                if (i9 == 195) {
                    if (this.mReadingSneNum.get() == 0) {
                        this.mNeedNotify.set(false);
                        return;
                    }
                    this.mNeedNotify.set(true);
                } else if (i9 == 196) {
                    if (this.mReadingAnrNum.get() == 0) {
                        this.mNeedNotify.set(false);
                        return;
                    }
                    this.mNeedNotify.set(true);
                } else if (i9 != 202) {
                    Rlog.e(LOG_TAG, "not support tag " + Integer.toHexString(file.mTag).toUpperCase());
                } else {
                    if (this.mReadingEmailNum.get() == 0) {
                        this.mNeedNotify.set(false);
                        return;
                    }
                    this.mNeedNotify.set(true);
                }
                logi("readType1Ef before mLock.wait " + this.mNeedNotify.get() + " total:" + i13);
                synchronized (this.mLock) {
                    try {
                        this.mLock.wait();
                    } catch (InterruptedException e3) {
                        Rlog.e(LOG_TAG, "Interrupted Exception in readType1Ef");
                    }
                }
                logi("readType1Ef after mLock.wait " + this.mNeedNotify.get());
                return;
            }
        }
        Rlog.e(LOG_TAG, "readType1Ef: read record size error.");
    }

    private void readType2Ef(File file) {
        int i;
        int i2;
        log("readType2Ef:" + file);
        if (file.getParentTag() != 169) {
            return;
        }
        int i3 = file.mPbrRecord;
        SparseArray sparseArray = this.mPbrRecords.get(file.mPbrRecord).mFileIds;
        if (sparseArray == null) {
            Rlog.e(LOG_TAG, "Error: no fileIds");
            return;
        }
        File file2 = (File) sparseArray.get(193);
        if (file2 == null) {
            Rlog.e(LOG_TAG, "Can't locate EF_IAP in EF_PBR.");
            return;
        }
        readIapFileAndWait(i3, file2.getEfid(), false);
        ArrayList<ArrayList<byte[]>> arrayList = this.mIapFileList;
        if (arrayList == null || arrayList.size() <= i3 || this.mIapFileList.get(i3).size() == 0) {
            Rlog.e(LOG_TAG, "Error: IAP file is empty");
            return;
        }
        int size = this.mPhoneBookRecords.size();
        int i4 = this.mAdnFileSize;
        int i5 = i3 * i4;
        int i6 = i4 + i5;
        int i7 = size < i6 ? size : i6;
        int i8 = file.mTag;
        if (i8 != 195 && i8 != 196) {
            if (i8 != 202) {
                Rlog.e(LOG_TAG, "no implement type2 EF " + file.mTag);
                return;
            }
            for (int i9 = i5; i9 < this.mEmailFileSize + i5; i9++) {
                try {
                    this.mEmailRecTable[i9] = 0;
                } catch (ArrayIndexOutOfBoundsException e) {
                    Rlog.e(LOG_TAG, "init RecTable error " + e.getMessage());
                }
            }
        }
        int efid = file.getEfid();
        SparseArray<int[]> sparseArray2 = this.mRecordSize;
        int[] eFLinearRecordSize = (sparseArray2 == null || sparseArray2.get(efid) == null) ? readEFLinearRecordSize(efid) : this.mRecordSize.get(efid);
        if (eFLinearRecordSize == null || eFLinearRecordSize.length != 3) {
            Rlog.e(LOG_TAG, "readType2: read record size error.");
            return;
        }
        log("readType2: RecordSize = " + eFLinearRecordSize[0]);
        ArrayList<byte[]> arrayList2 = this.mIapFileList.get(i3);
        if (arrayList2.size() == 0) {
            Rlog.e(LOG_TAG, "Warning: IAP size is 0");
            return;
        }
        int index = file.getIndex();
        int i10 = 0;
        int i11 = i5;
        while (i11 < i7) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i11);
                if ((mtkAdnRecord.getAlphaTag().length() > 0 || mtkAdnRecord.getNumber().length() > 0) && (i = arrayList2.get(i11 - i5)[index] & PplMessageManager.Type.INVALID) > 0 && i < 255) {
                    log("Type2 iap[" + (i11 - i5) + "]=" + i);
                    int[] iArr = new int[3];
                    iArr[0] = i3;
                    iArr[1] = i11;
                    int i12 = file.mTag;
                    i3 = i3;
                    if (i12 == 195) {
                        this.mReadingSneNum.incrementAndGet();
                        i2 = 18;
                    } else if (i12 == 196) {
                        iArr[2] = file.mAnrIndex;
                        this.mReadingAnrNum.addAndGet(1);
                        i2 = 16;
                    } else if (i12 != 202) {
                        Rlog.e(LOG_TAG, "not support tag " + file.mTag);
                        i2 = 0;
                    } else {
                        iArr[0] = ((i11 + 1) - i5) + (this.mEmailFileSize * i5);
                        this.mReadingEmailNum.incrementAndGet();
                        i2 = 15;
                    }
                    sparseArray = sparseArray;
                    file2 = file2;
                    this.mFh.readEFLinearFixed(efid, i, eFLinearRecordSize[0], obtainMessage(i2, iArr));
                    i10++;
                } else {
                    i10 = i10;
                }
                i11++;
                sparseArray = sparseArray;
                i3 = i3;
                file2 = file2;
            } catch (IndexOutOfBoundsException e2) {
                Rlog.e(LOG_TAG, "readType2Ef: mPhoneBookRecords IndexOutOfBoundsException numAdnRecs is " + size + "index is " + i11);
            }
        }
        int i13 = file.mTag;
        if (i13 == 195) {
            if (this.mReadingSneNum.get() == 0) {
                this.mNeedNotify.set(false);
                return;
            }
            this.mNeedNotify.set(true);
        } else if (i13 == 196) {
            if (this.mReadingAnrNum.get() == 0) {
                this.mNeedNotify.set(false);
                return;
            }
            this.mNeedNotify.set(true);
        } else if (i13 != 202) {
            Rlog.e(LOG_TAG, "not support tag " + file.mTag);
        } else {
            if (this.mReadingEmailNum.get() == 0) {
                this.mNeedNotify.set(false);
                return;
            }
            this.mNeedNotify.set(true);
        }
        logi("readType2Ef before mLock.wait " + this.mNeedNotify.get() + " total:" + i10);
        synchronized (this.mLock) {
            try {
                this.mLock.wait();
            } catch (InterruptedException e3) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readType2Ef");
            }
        }
        logi("readType2Ef after mLock.wait " + this.mNeedNotify.get());
    }

    private void updatePhoneAdnRecordWithAnrByIndex(int i, int i2, int i3, byte[] bArr) {
        String strCalledPartyBCDToString;
        ArrayList<String> arrayList;
        log("updatePhoneAdnRecordWithAnrByIndex the " + i2 + "th anr record is " + IccUtils.bytesToHexString(bArr));
        byte b = bArr[1];
        byte b2 = bArr[0];
        if (b <= 0 || b > 11 || (strCalledPartyBCDToString = MtkPhoneNumberUtils.calledPartyBCDToString(bArr, 2, bArr[1])) == null || strCalledPartyBCDToString.equals("")) {
            return;
        }
        String str = null;
        if (b2 > 0 && b2 != 255 && this.mAasForAnr != null && (arrayList = this.mAasForAnr) != null && b2 <= arrayList.size()) {
            str = arrayList.get(b2 - 1);
        }
        logi(" updatePhoneAdnRecordWithAnrByIndex " + i2 + " th anr is " + strCalledPartyBCDToString + " the anrIndex is " + i3);
        try {
            MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i2);
            mtkAdnRecord.setAnr(strCalledPartyBCDToString, i3);
            if (str != null && str.length() > 0) {
                mtkAdnRecord.setAasIndex(b2);
            }
            this.mPhoneBookRecords.set(i2, mtkAdnRecord);
        } catch (IndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "updatePhoneAdnRecordWithAnrByIndex: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i2);
        }
    }

    private void updatePhoneAdnRecordWithAnrByIndexOptmz(int i, int i2, int i3, PhbEntry phbEntry) {
        ArrayList<String> arrayList;
        log("updatePhoneAdnRecordWithAnrByIndexOptmz the " + i2 + " anr record:" + phbEntry);
        if (phbEntry == null || phbEntry.number == null || phbEntry.number.equals("")) {
            return;
        }
        String strReplace = (phbEntry.ton == 145 ? MtkPhoneNumberUtils.prependPlusToNumber(phbEntry.number) : phbEntry.number).replace('?', 'N').replace('p', ',').replace('w', ';');
        int i4 = phbEntry.index;
        if (strReplace == null || strReplace.equals("")) {
            return;
        }
        String str = null;
        if (i4 > 0 && i4 != 255 && (arrayList = this.mAasForAnr) != null && i4 <= arrayList.size()) {
            str = this.mAasForAnr.get(i4 - 1);
        }
        log(" updatePhoneAdnRecordWithAnrByIndex " + i2 + " th anr is " + strReplace + " the anrIndex is " + i3);
        try {
            MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i2);
            mtkAdnRecord.setAnr(strReplace, i3);
            if (str != null && str.length() > 0) {
                mtkAdnRecord.setAasIndex(i4);
            }
            this.mPhoneBookRecords.set(i2, mtkAdnRecord);
        } catch (IndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "updatePhoneAdnRecordWithAnrByIndex: mPhoneBookRecords IndexOutOfBoundsException size: " + this.mPhoneBookRecords.size() + "index: " + i2);
        }
    }

    private void updatePhoneAdnRecordWithEmailByIndex(int i, int i2, byte[] bArr) {
        ArrayList<PbrRecord> arrayList;
        log("updatePhoneAdnRecordWithEmailByIndex emailIndex = " + i + ",adnIndex = " + i2);
        if (bArr == null || (arrayList = this.mPbrRecords) == null || arrayList.size() == 0) {
            return;
        }
        boolean z = ((File) this.mPbrRecords.get(0).mFileIds.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP)).getParentTag() == 169;
        log("updatePhoneAdnRecordWithEmailByIndex: Type2: " + z + " emailData: " + IccUtils.bytesToHexString(bArr));
        int length = bArr.length;
        if (z && bArr.length >= 2) {
            length = bArr.length - 2;
        }
        log("updatePhoneAdnRecordWithEmailByIndex length = " + length);
        byte[] bArr2 = new byte[length];
        for (int i3 = 0; i3 < length; i3++) {
            bArr2[i3] = -1;
        }
        System.arraycopy(bArr, 0, bArr2, 0, length);
        try {
            String strAdnStringFieldToString = IccUtils.adnStringFieldToString(bArr2, 0, length);
            if (strAdnStringFieldToString != null && !strAdnStringFieldToString.equals("")) {
                this.mPhoneBookRecords.get(i2).setEmails(new String[]{strAdnStringFieldToString});
            }
            this.mEmailRecTable[i - 1] = i2 + 1;
        } catch (IndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "[JE]updatePhoneAdnRecordWithEmailByIndex " + e.getMessage());
        }
    }

    private void updatePhoneAdnRecordWithEmailByIndexOptmz(int i, int i2, String str) {
        log("updatePhoneAdnRecordWithEmailByIndex emailIndex = " + i + ",adnIndex = " + i2);
        if (str == null || str == null) {
            return;
        }
        try {
            if (str.equals("")) {
                return;
            }
            this.mPhoneBookRecords.get(i2).setEmails(new String[]{str});
        } catch (IndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "[JE]updatePhoneAdnRecordWithEmailByIndex " + e.getMessage());
        }
    }

    private void updatePhoneAdnRecordWithGrpByIndex(int i, int i2, int[] iArr) {
        int length;
        log("updatePhoneAdnRecordWithGrpByIndex the " + i + "th grp ");
        if (i <= this.mPhoneBookRecords.size() && (length = iArr.length) > 0) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i);
                log("updatePhoneAdnRecordWithGrpByIndex the adnIndex is " + i2 + "; the original index is " + mtkAdnRecord.getRecId());
                StringBuilder sb = new StringBuilder();
                for (int i3 = 0; i3 < length - 1; i3++) {
                    sb.append(iArr[i3]);
                    sb.append(",");
                }
                sb.append(iArr[length - 1]);
                mtkAdnRecord.setGrpIds(sb.toString());
                log("updatePhoneAdnRecordWithGrpByIndex grpIds is " + sb.toString());
                this.mPhoneBookRecords.set(i, mtkAdnRecord);
                log("updatePhoneAdnRecordWithGrpByIndex the rec:" + mtkAdnRecord);
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "updatePhoneAdnRecordWithGrpByIndex: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i);
            }
        }
    }

    private void updatePhoneAdnRecordWithSneByIndex(int i, int i2, byte[] bArr) {
        if (bArr == null) {
            return;
        }
        String strAdnStringFieldToString = IccUtils.adnStringFieldToString(bArr, 0, bArr.length);
        log("updatePhoneAdnRecordWithSneByIndex index " + i2 + " recData file is " + strAdnStringFieldToString);
        if (strAdnStringFieldToString == null || strAdnStringFieldToString.equals("")) {
            return;
        }
        try {
            this.mPhoneBookRecords.get(i2).setSne(strAdnStringFieldToString);
        } catch (IndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "updatePhoneAdnRecordWithSneByIndex: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i2);
        }
    }

    private void updatePhoneAdnRecordWithSneByIndexOptmz(int i, String str) {
        if (str == null) {
            return;
        }
        log("updatePhoneAdnRecordWithSneByIndex index " + i + " recData file is " + str);
        if (str == null || str.equals("")) {
            return;
        }
        try {
            this.mPhoneBookRecords.get(i).setSne(str);
        } catch (IndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "updatePhoneAdnRecordWithSneByIndex: mPhoneBookRecords IndexOutOfBoundsException size() is " + this.mPhoneBookRecords.size() + "index is " + i);
        }
    }

    private void updateType2Anr(String str, int i, File file) {
        ArrayList<PbrRecord> arrayList;
        SparseArray sparseArray;
        boolean z;
        ArrayList<byte[]> arrayList2;
        int i2;
        int i3;
        ArrayList<byte[]> arrayList3;
        MtkAdnRecord mtkAdnRecord;
        logi("updateType2Ef anr:" + str + ",adnIndex:" + i + ",file:" + file);
        int i4 = this.mAdnFileSize;
        int i5 = (i + (-1)) / i4;
        int i6 = (i + (-1)) % i4;
        log("updateType2Ef pbrRecNum:" + i5 + ",iapRecNum:" + i6);
        if (this.mIapFileList == null || file == null || (arrayList = this.mPbrRecords) == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(file.mPbrRecord).mFileIds) == null) {
            return;
        }
        try {
            ArrayList<byte[]> arrayList4 = this.mIapFileList.get(file.mPbrRecord);
            if (arrayList4 == null) {
                return;
            }
            if (arrayList4.size() == 0) {
                Rlog.e(LOG_TAG, "Warning: IAP size is 0");
                return;
            }
            byte[] bArr = arrayList4.get(i6);
            if (bArr == null) {
                return;
            }
            int i7 = bArr[file.getIndex()] & 255;
            log("updateType2Ef orignal index :" + i7);
            if (str == null || str.length() == 0) {
                if (i7 > 0) {
                    bArr[file.getIndex()] = -1;
                    if (sparseArray.get(193) != null) {
                        this.mFh.updateEFLinearFixed(((File) sparseArray.get(193)).getEfid(), i6 + 1, bArr, (String) null, obtainMessage(7));
                        return;
                    } else {
                        Rlog.e(LOG_TAG, "updateType2Anr Error: No IAP file!");
                        return;
                    }
                }
                return;
            }
            int i8 = this.mRecordSize.get(file.getEfid())[2];
            log("updateType2Anr size :" + i8);
            if (i7 <= 0 || i7 > i8) {
                int[] iArr = new int[i8 + 1];
                for (int i9 = 1; i9 <= i8; i9++) {
                    iArr[i9] = 0;
                }
                int i10 = 0;
                while (i10 < arrayList4.size()) {
                    byte[] bArr2 = arrayList4.get(i10);
                    if (bArr2 != null) {
                        i3 = i5;
                        arrayList3 = arrayList4;
                        int i11 = bArr2[file.getIndex()] & PplMessageManager.Type.INVALID;
                        if (i11 > 0 && i11 < 255 && i11 <= i8) {
                            iArr[i11] = 1;
                        }
                    } else {
                        i3 = i5;
                        arrayList3 = arrayList4;
                    }
                    i10++;
                    arrayList4 = arrayList3;
                    i5 = i3;
                }
                boolean z2 = false;
                File file2 = null;
                int i12 = 0;
                while (true) {
                    if (i12 >= this.mPbrRecords.size()) {
                        z = z2;
                        break;
                    }
                    if (i12 != file.mPbrRecord) {
                        z = z2;
                        file2 = (File) this.mPbrRecords.get(i12).mFileIds.get((i * 256) + 196);
                        if (file2 != null) {
                            if (file2.getEfid() != file.getEfid()) {
                                break;
                            }
                            z = true;
                            break;
                        }
                    } else {
                        z = z2;
                    }
                    i12++;
                    z2 = z;
                }
                if (z) {
                    try {
                        ArrayList<byte[]> arrayList5 = this.mIapFileList.get(file2.mPbrRecord);
                        if (arrayList5 != null && arrayList5.size() > 0) {
                            int i13 = 0;
                            while (i13 < arrayList5.size()) {
                                byte[] bArr3 = arrayList5.get(i13);
                                if (bArr3 != null) {
                                    arrayList2 = arrayList5;
                                    int i14 = bArr3[file2.getIndex()] & PplMessageManager.Type.INVALID;
                                    if (i14 > 0 && i14 < 255 && i14 <= i8) {
                                        iArr[i14] = 1;
                                    }
                                } else {
                                    arrayList2 = arrayList5;
                                }
                                i13++;
                                arrayList5 = arrayList2;
                            }
                        }
                    } catch (IndexOutOfBoundsException e) {
                        Rlog.e(LOG_TAG, "Index out of bounds.");
                        return;
                    }
                }
                int i15 = 1;
                while (true) {
                    if (i15 > i8) {
                        i2 = 0;
                        break;
                    } else {
                        if (iArr[i15] == 0) {
                            i2 = i15;
                            break;
                        }
                        i15++;
                    }
                }
            } else {
                i2 = i7;
            }
            log("updateType2Anr final index :" + i2);
            if (i2 == 0) {
                return;
            }
            try {
                mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
            } catch (IndexOutOfBoundsException e2) {
                StringBuilder sb = new StringBuilder();
                sb.append("updateType2Anr: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is ");
                sb.append(this.mPhoneBookRecords.size());
                sb.append("index is ");
                sb.append(i - 1);
                Rlog.e(LOG_TAG, sb.toString());
                mtkAdnRecord = null;
            }
            if (mtkAdnRecord == null) {
                return;
            }
            byte[] bArrBuildAnrRecord = buildAnrRecord(str, this.mAnrRecordSize, mtkAdnRecord.getAasIndex());
            int efid = file.getEfid();
            if (bArrBuildAnrRecord != null) {
                this.mFh.updateEFLinearFixed(efid, i2, bArrBuildAnrRecord, (String) null, obtainMessage(9));
                if (i2 != i7) {
                    bArr[file.getIndex()] = (byte) i2;
                    if (sparseArray.get(193) != null) {
                        this.mFh.updateEFLinearFixed(((File) sparseArray.get(193)).getEfid(), i6 + 1, bArr, (String) null, obtainMessage(7));
                    } else {
                        Rlog.e(LOG_TAG, "updateType2Anr Error: No IAP file!");
                    }
                }
            }
        } catch (IndexOutOfBoundsException e3) {
            Rlog.e(LOG_TAG, "Index out of bounds.");
        }
    }

    private int updateType2Email(String[] strArr, int i, File file) {
        int i2 = this.mAdnFileSize;
        int i3 = (i - 1) / i2;
        int i4 = (i - 1) % i2;
        int index = file.getIndex();
        try {
            ArrayList<byte[]> arrayList = this.mIapFileList.get(i3);
            if (arrayList.size() <= 0) {
                Rlog.w(LOG_TAG, "Warning: IAP size is 0");
                return -50;
            }
            byte[] bArr = arrayList.get(i4);
            int emailRecNum = getEmailRecNum(strArr, i3, i4 + 1, bArr, index);
            if (-2 == emailRecNum) {
                log("updateType2Email: Email recNum is " + emailRecNum);
                return -30;
            }
            log("updateType2Email: found Email recNum is " + emailRecNum);
            bArr[index] = (byte) emailRecNum;
            SparseArray sparseArray = this.mPbrRecords.get(i3).mFileIds;
            if (sparseArray.get(193) == null) {
                Rlog.e(LOG_TAG, "updateType2Email Error: No IAP file!");
                return -50;
            }
            this.mFh.updateEFLinearFixed(((File) sparseArray.get(193)).getEfid(), i4 + 1, bArr, (String) null, obtainMessage(7));
            if (emailRecNum != 255 && emailRecNum != -1) {
                String str = null;
                if (strArr != null) {
                    try {
                        str = strArr[0];
                    } catch (IndexOutOfBoundsException e) {
                        Rlog.e(LOG_TAG, "Error: updateType2Email no email address, continuing");
                    }
                    int i5 = this.mEmailRecordSize;
                    if (i5 <= 0) {
                        return -50;
                    }
                    byte[] bArrBuildEmailRecord = buildEmailRecord(str, i, i5, true);
                    if (bArrBuildEmailRecord == null) {
                        return -40;
                    }
                    this.mFh.updateEFLinearFixed(((File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP)).getEfid(), emailRecNum, bArrBuildEmailRecord, (String) null, obtainMessage(8));
                }
            }
            return 0;
        } catch (IndexOutOfBoundsException e2) {
            Rlog.e(LOG_TAG, "Index out of bounds.");
            return -50;
        }
    }

    public boolean addContactToGroup(int i, int i2) {
        boolean z = false;
        logi("addContactToGroup begin adnIndex is " + i + " to grp " + i2);
        ArrayList<MtkAdnRecord> arrayList = this.mPhoneBookRecords;
        if (arrayList == null || i <= 0 || i > arrayList.size()) {
            Rlog.e(LOG_TAG, "addContactToGroup no records or invalid index.");
            return false;
        }
        synchronized (this.mLock) {
            try {
                MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
                if (mtkAdnRecord != null) {
                    log(" addContactToGroup the adn index is " + mtkAdnRecord.getRecId() + " old grpList is " + mtkAdnRecord.getGrpIds());
                    String grpIds = mtkAdnRecord.getGrpIds();
                    boolean z2 = false;
                    int i3 = -1;
                    int i4 = this.mUpbCap[7];
                    int i5 = this.mUpbCap[7] > this.mUpbCap[5] ? this.mUpbCap[5] : this.mUpbCap[7];
                    int[] iArr = new int[i4];
                    for (int i6 = 0; i6 < i4; i6++) {
                        iArr[i6] = 0;
                    }
                    if (grpIds != null) {
                        String[] strArrSplit = mtkAdnRecord.getGrpIds().split(",");
                        for (int i7 = 0; i7 < i5; i7++) {
                            iArr[i7] = Integer.parseInt(strArrSplit[i7]);
                            if (i2 == iArr[i7]) {
                                z2 = true;
                                log(" addContactToGroup the adn is already in the group. i is " + i7);
                                break;
                            }
                            if (i3 < 0 && (iArr[i7] == 0 || iArr[i7] == 255)) {
                                i3 = i7;
                                log(" addContactToGroup found an unsed position in the group list. i is " + i7);
                            }
                        }
                    } else {
                        i3 = 0;
                    }
                    if (!z2 && i3 >= 0) {
                        iArr[i3] = i2;
                        this.mCi.writeUPBGrpEntry(i, iArr, obtainMessage(12));
                        try {
                            this.mLock.wait();
                        } catch (InterruptedException e) {
                            Rlog.e(LOG_TAG, "Interrupted Exception in addContactToGroup");
                        }
                        if (this.mResult == 0) {
                            z = true;
                            updatePhoneAdnRecordWithGrpByIndex(i - 1, i, iArr);
                            logi(" addContactToGroup the adn index is " + mtkAdnRecord.getRecId());
                            this.mResult = -1;
                        }
                    }
                }
            } catch (IndexOutOfBoundsException e2) {
                StringBuilder sb = new StringBuilder();
                sb.append("addContactToGroup: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is ");
                sb.append(this.mPhoneBookRecords.size());
                sb.append("index is ");
                sb.append(i - 1);
                Rlog.e(LOG_TAG, sb.toString());
                return false;
            }
        }
        logi("addContactToGroup end adnIndex is " + i + " to grp " + i2);
        return z;
    }

    public boolean checkEmailCapacityFree(int i, String[] strArr, MtkAdnRecord mtkAdnRecord) {
        boolean z;
        if (strArr == null || getUsimEfType(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP) == 168 || !(mtkAdnRecord == null || mtkAdnRecord.getEmails() == null)) {
            return true;
        }
        int i2 = 0;
        while (true) {
            if (i2 >= strArr.length) {
                z = false;
                break;
            }
            if (strArr[i2] != null && !strArr[i2].equals("")) {
                z = true;
                break;
            }
            i2++;
        }
        if (!z) {
            return true;
        }
        if (!CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
            int i3 = this.mEmailFileSize * ((i - 1) / this.mAdnFileSize);
            for (int i4 = i3; i4 < this.mEmailFileSize + i3; i4++) {
                if (this.mEmailRecTable[i4] == 0) {
                    return true;
                }
            }
            return false;
        }
        synchronized (this.mLock) {
            if (this.mEmailInfo == null || this.mEmailInfo.length != 3) {
                this.mCi.queryUPBAvailable(1, 1, obtainMessage(25));
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in CheckEmailCapacityFree");
                }
                if (this.mUpbDone == -1) {
                    return true;
                }
                this.mEmailFileSize = countEmailFileSize();
            }
            int iCountEmailCapacity = countEmailCapacity(i);
            logi("CheckEmailCapacityFree: mEmailFileSize: " + this.mEmailFileSize + " used: " + iCountEmailCapacity + " adnIndex: " + i);
            return iCountEmailCapacity < this.mEmailFileSize;
        }
    }

    public boolean checkEmailLength(String[] strArr) {
        ArrayList<PbrRecord> arrayList;
        SparseArray sparseArray;
        File file;
        if (strArr == null || strArr[0] == null || (arrayList = this.mPbrRecords) == null || arrayList.size() == 0 || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null || (file = (File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP)) == null) {
            return true;
        }
        boolean z = file.getParentTag() == 169;
        int i = this.mEmailRecordSize;
        int i2 = (i == -1 || !z) ? this.mEmailRecordSize : i - 2;
        byte[] bArrStringToGsm8BitPacked = GsmAlphabet.stringToGsm8BitPacked(strArr[0]);
        logi("checkEmailLength eMailData.length=" + bArrStringToGsm8BitPacked.length + ", maxDataLength=" + i2);
        return i2 == -1 || bArrStringToGsm8BitPacked.length <= i2;
    }

    public boolean checkSneCapacityFree(int i, String str, MtkAdnRecord mtkAdnRecord) {
        String sne = mtkAdnRecord != null ? mtkAdnRecord.getSne() : null;
        if (str == null || str.equals("") || getUsimEfType(195) == 168 || !((sne == null || sne.equals("")) && CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh))) {
            return true;
        }
        synchronized (this.mLock) {
            if (this.mSneInfo == null) {
                this.mCi.queryUPBAvailable(2, 1, obtainMessage(27));
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in checkSneCapacityFree");
                }
            }
        }
        int[] iArr = this.mSneInfo;
        return iArr != null && iArr[1] > 0;
    }

    public int[] getAdnRecordsCapacity() {
        ArrayList<int[]> arrayList;
        int[] iArr;
        int[] iArr2;
        int[] iArr3 = new int[6];
        if (this.mRefreshAdnInfo || this.mRefreshEmailInfo || this.mRefreshAnrInfo || (iArr2 = this.mAdnRecordSize) == null || iArr2.length != 4) {
            getAdnStorageInfo();
            this.mRefreshAdnInfo = false;
        }
        int[] iArr4 = this.mAdnRecordSize;
        if (iArr4 == null || iArr4.length != 4) {
            return null;
        }
        iArr3[0] = iArr4[1];
        iArr3[1] = iArr4[0];
        if (this.mRefreshEmailInfo || (iArr = this.mEmailInfo) == null || iArr.length != 3) {
            this.mCi.queryUPBAvailable(1, 1, obtainMessage(25));
            synchronized (this.mLock) {
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in getAdnRecordsCapacity");
                }
            }
            this.mRefreshEmailInfo = false;
        }
        int[] iArr5 = this.mEmailInfo;
        if (iArr5 == null || iArr5.length != 3) {
            return null;
        }
        iArr3[2] = iArr5[0];
        iArr3[3] = iArr5[0] - iArr5[1];
        if (this.mRefreshAnrInfo || (arrayList = this.mAnrInfo) == null || arrayList.get(0) == null || this.mAnrInfo.get(0).length != 3) {
            this.mCi.queryUPBAvailable(0, 1, obtainMessage(26));
            synchronized (this.mLock) {
                try {
                    this.mLock.wait();
                } catch (InterruptedException e2) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in getAdnRecordsCapacity");
                }
            }
            this.mRefreshAnrInfo = false;
        }
        ArrayList<int[]> arrayList2 = this.mAnrInfo;
        if (arrayList2 == null || arrayList2.get(0) == null || this.mAnrInfo.get(0).length != 3) {
            return null;
        }
        iArr3[4] = this.mAnrInfo.get(0)[0];
        iArr3[5] = this.mAnrInfo.get(0)[0] - this.mAnrInfo.get(0)[1];
        logi("getAdnRecordsCapacity: max adn=" + iArr3[0] + ", used adn=" + iArr3[1] + ", max email=" + iArr3[2] + ", used email=" + iArr3[3] + ", max anr=" + iArr3[4] + ", used anr=" + iArr3[5]);
        return iArr3;
    }

    public int getAnrCount() {
        logi("getAnrCount begin");
        synchronized (this.mUPBCapabilityLock) {
            if (this.mUpbCap[0] < 0 && checkIsPhbReady()) {
                this.mCi.queryUPBCapability(obtainMessage(19));
                try {
                    this.mUPBCapabilityLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in getAnrCount");
                }
            }
        }
        if (this.mAnrRecordSize <= 0) {
            logi("getAnrCount end mAnrRecordSize:" + this.mAnrRecordSize);
            return this.mAnrRecordSize;
        }
        logi("getAnrCount done: N_ANR is " + this.mUpbCap[0]);
        return this.mUpbCap[0] > 0 ? 1 : 0;
    }

    public int getEmailCount() {
        logi("getEmailCount begin");
        synchronized (this.mUPBCapabilityLock) {
            if (this.mUpbCap[1] < 0 && checkIsPhbReady()) {
                this.mCi.queryUPBCapability(obtainMessage(19));
                try {
                    this.mUPBCapabilityLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in getEmailCount");
                }
            }
        }
        if (this.mEmailRecordSize <= 0) {
            logi("getEmailCount end mEmailRecordSize:" + this.mEmailRecordSize);
            return this.mEmailRecordSize;
        }
        logi("getEmailCount done: N_EMAIL is " + this.mUpbCap[1]);
        return this.mUpbCap[1] > 0 ? 1 : 0;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x03c9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public UsimPBMemInfo[] getPhonebookMemStorageExt() throws Throwable {
        char c;
        int[] iArr;
        ArrayList<byte[]> arrayList;
        char c2 = 0;
        boolean z = this.mCurrentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_USIM;
        logi("getPhonebookMemStorageExt isUsim " + z);
        if (!z) {
            return getPhonebookMemStorageExt2G();
        }
        ArrayList<PbrRecord> arrayList2 = this.mPbrRecords;
        if (arrayList2 == null || arrayList2.size() == 0) {
            loadPBRFiles();
        }
        ArrayList<PbrRecord> arrayList3 = this.mPbrRecords;
        if (arrayList3 != null && arrayList3.size() != 0) {
            log("getPhonebookMemStorageExt slice " + this.mPbrRecords.size());
            UsimPBMemInfo[] usimPBMemInfoArr = new UsimPBMemInfo[this.mPbrRecords.size()];
            for (int i = 0; i < this.mPbrRecords.size(); i++) {
                usimPBMemInfoArr[i] = new UsimPBMemInfo();
            }
            if (this.mPhoneBookRecords.isEmpty()) {
                Rlog.w(LOG_TAG, "mPhoneBookRecords has not been loaded.");
                return usimPBMemInfoArr;
            }
            int i2 = 0;
            while (i2 < this.mPbrRecords.size()) {
                SparseArray sparseArray = this.mPbrRecords.get(i2).mFileIds;
                int size = this.mPhoneBookRecords.size();
                int i3 = this.mAdnFileSize;
                int i4 = i2 * i3;
                int i5 = i3 + i4;
                int i6 = size < i5 ? size : i5;
                File file = (File) sparseArray.get(192);
                if (file != null) {
                    int[] eFLinearRecordSize = readEFLinearRecordSize(file.getEfid());
                    if (eFLinearRecordSize != null) {
                        usimPBMemInfoArr[i2].setAdnLength(eFLinearRecordSize[c2]);
                        if (0 > 0) {
                            usimPBMemInfoArr[i2].setAdnTotal(eFLinearRecordSize[2] + 0);
                        } else {
                            usimPBMemInfoArr[i2].setAdnTotal(eFLinearRecordSize[2]);
                        }
                    }
                    usimPBMemInfoArr[i2].setAdnType(file.getParentTag());
                    usimPBMemInfoArr[i2].setSliceIndex(i2 + 1);
                    MtkAdnRecord mtkAdnRecord = null;
                    int i7 = 0;
                    for (int i8 = i4; i8 < i6; i8++) {
                        try {
                            mtkAdnRecord = this.mPhoneBookRecords.get(i8);
                        } catch (IndexOutOfBoundsException e) {
                            Rlog.e(LOG_TAG, "getPhonebookMemStorageExt: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i8);
                        }
                        if (mtkAdnRecord != null && ((mtkAdnRecord.getAlphaTag() != null && mtkAdnRecord.getAlphaTag().length() > 0) || (mtkAdnRecord.getNumber() != null && mtkAdnRecord.getNumber().length() > 0))) {
                            log("Adn: " + mtkAdnRecord.toString());
                            i7++;
                            mtkAdnRecord = null;
                        }
                    }
                    log("adn used " + i7);
                    usimPBMemInfoArr[i2].setAdnUsed(i7);
                }
                File file2 = (File) sparseArray.get(196);
                if (file2 != null) {
                    int[] eFLinearRecordSize2 = readEFLinearRecordSize(file2.getEfid());
                    if (eFLinearRecordSize2 != null) {
                        usimPBMemInfoArr[i2].setAnrLength(eFLinearRecordSize2[0]);
                        usimPBMemInfoArr[i2].setAnrTotal(eFLinearRecordSize2[2]);
                    }
                    usimPBMemInfoArr[i2].setAnrType(file2.getParentTag());
                    int i9 = i4;
                    MtkAdnRecord mtkAdnRecord2 = null;
                    int i10 = 0;
                    while (i9 < i6) {
                        try {
                            mtkAdnRecord2 = this.mPhoneBookRecords.get(i9);
                        } catch (IndexOutOfBoundsException e2) {
                            Rlog.e(LOG_TAG, "getPhonebookMemStorageExt: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i9);
                        }
                        if (mtkAdnRecord2 == null) {
                            log("null anr rec ");
                        } else {
                            String additionalNumber = mtkAdnRecord2.getAdditionalNumber();
                            if (additionalNumber != null && additionalNumber.length() > 0) {
                                log("anrStr: " + additionalNumber);
                                i10++;
                            }
                        }
                        i9++;
                        file2 = file2;
                    }
                    log("anr used: " + i10);
                    usimPBMemInfoArr[i2].setAnrUsed(i10);
                }
                File file3 = (File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP);
                if (file3 != null) {
                    int[] eFLinearRecordSize3 = readEFLinearRecordSize(file3.getEfid());
                    if (eFLinearRecordSize3 != null) {
                        usimPBMemInfoArr[i2].setEmailLength(eFLinearRecordSize3[0]);
                        usimPBMemInfoArr[i2].setEmailTotal(eFLinearRecordSize3[2]);
                    }
                    usimPBMemInfoArr[i2].setEmailType(file3.getParentTag());
                    MtkAdnRecord mtkAdnRecord3 = null;
                    int i11 = i4;
                    int i12 = 0;
                    while (i11 < i6) {
                        try {
                            mtkAdnRecord3 = this.mPhoneBookRecords.get(i11);
                        } catch (IndexOutOfBoundsException e3) {
                            Rlog.e(LOG_TAG, "getPhonebookMemStorageExt: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is " + this.mPhoneBookRecords.size() + "index is " + i11);
                        }
                        if (mtkAdnRecord3 == null) {
                            log("null email rec ");
                        } else {
                            String[] emails = mtkAdnRecord3.getEmails();
                            if (emails != null && emails.length > 0 && emails[0].length() > 0) {
                                log("email: " + emails[0]);
                                i12++;
                            }
                        }
                        i11++;
                        eFLinearRecordSize3 = eFLinearRecordSize3;
                        file3 = file3;
                    }
                    log("email used: " + i12);
                    usimPBMemInfoArr[i2].setEmailUsed(i12);
                }
                File file4 = (File) sparseArray.get(194);
                if (file4 != null) {
                    int[] eFLinearRecordSize4 = readEFLinearRecordSize(file4.getEfid());
                    if (eFLinearRecordSize4 != null) {
                        usimPBMemInfoArr[i2].setExt1Length(eFLinearRecordSize4[0]);
                        usimPBMemInfoArr[i2].setExt1Total(eFLinearRecordSize4[2]);
                    }
                    usimPBMemInfoArr[i2].setExt1Type(file4.getParentTag());
                    synchronized (this.mLock) {
                        try {
                            readExt1FileAndWait(i2);
                        } catch (Throwable th) {
                            th = th;
                            while (true) {
                                throw th;
                            }
                        }
                    }
                    int i13 = 0;
                    ArrayList<ArrayList<byte[]>> arrayList4 = this.mExt1FileList;
                    if (arrayList4 == null || i2 >= arrayList4.size() || (arrayList = this.mExt1FileList.get(i2)) == null) {
                        iArr = eFLinearRecordSize4;
                    } else {
                        int size2 = arrayList.size();
                        int i14 = 0;
                        while (i14 < size2) {
                            byte[] bArr = arrayList.get(i14);
                            File file5 = file4;
                            StringBuilder sb = new StringBuilder();
                            int[] iArr2 = eFLinearRecordSize4;
                            sb.append("ext1[");
                            sb.append(i14);
                            sb.append("]=");
                            sb.append(IccUtils.bytesToHexString(bArr));
                            log(sb.toString());
                            if (bArr != null && bArr.length > 0 && (bArr[0] == 1 || bArr[0] == 2)) {
                                i13++;
                            }
                            i14++;
                            file4 = file5;
                            eFLinearRecordSize4 = iArr2;
                        }
                        iArr = eFLinearRecordSize4;
                    }
                    usimPBMemInfoArr[i2].setExt1Used(i13);
                }
                File file6 = (File) sparseArray.get(200);
                if (file6 != null) {
                    int[] eFLinearRecordSize5 = readEFLinearRecordSize(file6.getEfid());
                    if (eFLinearRecordSize5 != null) {
                        usimPBMemInfoArr[i2].setGasLength(eFLinearRecordSize5[0]);
                        usimPBMemInfoArr[i2].setGasTotal(eFLinearRecordSize5[2]);
                    }
                    usimPBMemInfoArr[i2].setGasType(file6.getParentTag());
                }
                File file7 = (File) sparseArray.get(199);
                if (file7 != null) {
                    int[] eFLinearRecordSize6 = readEFLinearRecordSize(file7.getEfid());
                    if (eFLinearRecordSize6 != null) {
                        usimPBMemInfoArr[i2].setAasLength(eFLinearRecordSize6[0]);
                        usimPBMemInfoArr[i2].setAasTotal(eFLinearRecordSize6[2]);
                    }
                    usimPBMemInfoArr[i2].setAasType(file7.getParentTag());
                }
                File file8 = (File) sparseArray.get(195);
                if (file8 != null) {
                    int[] eFLinearRecordSize7 = readEFLinearRecordSize(file8.getEfid());
                    if (eFLinearRecordSize7 != null) {
                        usimPBMemInfoArr[i2].setSneLength(eFLinearRecordSize7[0]);
                        usimPBMemInfoArr[i2].setSneTotal(eFLinearRecordSize7[0]);
                    }
                    usimPBMemInfoArr[i2].setSneType(file8.getParentTag());
                }
                File file9 = (File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RSIM_AUTH_DONE);
                if (file9 != null) {
                    int[] eFLinearRecordSize8 = readEFLinearRecordSize(file9.getEfid());
                    if (eFLinearRecordSize8 != null) {
                        c = 0;
                        usimPBMemInfoArr[i2].setCcpLength(eFLinearRecordSize8[0]);
                        usimPBMemInfoArr[i2].setCcpTotal(eFLinearRecordSize8[0]);
                    } else {
                        c = 0;
                    }
                    usimPBMemInfoArr[i2].setCcpType(file9.getParentTag());
                } else {
                    c = 0;
                }
                i2++;
                c2 = c;
                z = z;
            }
            for (int i15 = 0; i15 < this.mPbrRecords.size(); i15++) {
                log("getPhonebookMemStorageExt[" + i15 + "]:" + usimPBMemInfoArr[i15]);
            }
            return usimPBMemInfoArr;
        }
        return null;
    }

    public UsimPBMemInfo[] getPhonebookMemStorageExt2G() {
        ArrayList<byte[]> arrayList;
        UsimPBMemInfo[] usimPBMemInfoArr = {new UsimPBMemInfo()};
        int[] eFLinearRecordSize = readEFLinearRecordSize(28474);
        if (eFLinearRecordSize != null) {
            usimPBMemInfoArr[0].setAdnLength(eFLinearRecordSize[0]);
            if (isAdnAccessible()) {
                usimPBMemInfoArr[0].setAdnTotal(eFLinearRecordSize[2]);
            } else {
                usimPBMemInfoArr[0].setAdnTotal(0);
            }
        }
        usimPBMemInfoArr[0].setAdnType(168);
        usimPBMemInfoArr[0].setSliceIndex(1);
        int[] eFLinearRecordSize2 = readEFLinearRecordSize(28490);
        if (eFLinearRecordSize2 != null) {
            usimPBMemInfoArr[0].setExt1Length(eFLinearRecordSize2[0]);
            usimPBMemInfoArr[0].setExt1Total(eFLinearRecordSize2[2]);
        }
        usimPBMemInfoArr[0].setExt1Type(170);
        synchronized (this.mLock) {
            if (this.mFh == null) {
                Rlog.e(LOG_TAG, "readExt1FileAndWait-IccFileHandler is null");
                return usimPBMemInfoArr;
            }
            Message messageObtainMessage = obtainMessage(1001);
            messageObtainMessage.arg1 = 0;
            this.mFh.loadEFLinearFixedAll(28490, messageObtainMessage);
            try {
                this.mLock.wait();
            } catch (InterruptedException e) {
                Rlog.e(LOG_TAG, "Interrupted Exception in readExt1FileAndWait");
            }
            int i = 0;
            ArrayList<ArrayList<byte[]>> arrayList2 = this.mExt1FileList;
            if (arrayList2 != null && arrayList2.size() > 0 && (arrayList = this.mExt1FileList.get(0)) != null) {
                int size = arrayList.size();
                for (int i2 = 0; i2 < size; i2++) {
                    byte[] bArr = arrayList.get(i2);
                    log("ext1[" + i2 + "]=" + IccUtils.bytesToHexString(bArr));
                    if (bArr != null && bArr.length > 0 && (bArr[0] == 1 || bArr[0] == 2)) {
                        i++;
                    }
                }
            }
            usimPBMemInfoArr[0].setExt1Used(i);
            logi("getPhonebookMemStorageExt2G:" + usimPBMemInfoArr[0]);
            return usimPBMemInfoArr;
        }
    }

    public int getSneRecordLen() {
        SparseArray sparseArray;
        if (!hasSne()) {
            return 0;
        }
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0 || this.mPbrRecords.get(0) == null || (sparseArray = this.mPbrRecords.get(0).mFileIds) == null) {
            return -1;
        }
        File file = (File) sparseArray.get(195);
        if (file == null) {
            return 0;
        }
        int efid = file.getEfid();
        boolean z = file.getParentTag() == 169;
        logi("getSneRecordLen: EFSNE id is " + efid);
        SparseArray<int[]> sparseArray2 = this.mRecordSize;
        int[] eFLinearRecordSize = (sparseArray2 == null || sparseArray2.get(efid) == null) ? readEFLinearRecordSize(efid) : this.mRecordSize.get(efid);
        if (eFLinearRecordSize != null) {
            return z ? eFLinearRecordSize[0] - 2 : eFLinearRecordSize[0];
        }
        return 0;
    }

    public int getUpbDone() {
        return this.mUpbDone;
    }

    public String getUsimAasById(int i, int i2) {
        logi("getUsimAasById by id " + i + ",pbrIndex " + i2 + ",mPbrNeedNotify " + this.mPbrNeedNotify);
        if (!loadAasFiles()) {
            return null;
        }
        ArrayList<String> arrayList = this.mAasForAnr;
        if (arrayList != null) {
            logi("getUsimAasById NonNULL by id " + i + ",pbrIndex " + i2);
            return arrayList.get(i - 1);
        }
        logi("getUsimAasById NULL by id " + i + ",pbrIndex " + i2);
        return null;
    }

    public ArrayList<AlphaTag> getUsimAasList() {
        ArrayList<String> arrayList;
        logi("getUsimAasList start mPbrNeedNotify:" + this.mPbrNeedNotify);
        ArrayList<AlphaTag> arrayList2 = new ArrayList<>();
        if (!loadAasFiles() || (arrayList = this.mAasForAnr) == null) {
            return arrayList2;
        }
        for (int i = 0; i < 1; i++) {
            for (int i2 = 0; i2 < arrayList.size(); i2++) {
                String str = arrayList.get(i2);
                logi("aasIndex:" + (i2 + 1) + ",pbrIndex:" + i + ",value:" + str);
                arrayList2.add(new AlphaTag(i2 + 1, str, i));
            }
        }
        return arrayList2;
    }

    public int getUsimAasMaxCount() {
        logi("getUsimAasMaxCount begin");
        synchronized (this.mUPBCapabilityLock) {
            if (this.mUpbCap[3] < 0 && checkIsPhbReady()) {
                this.mCi.queryUPBCapability(obtainMessage(19));
                try {
                    this.mUPBCapabilityLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in getUsimAasMaxCount");
                }
            }
        }
        logi("getUsimAasMaxCount done: N_AAS is " + this.mUpbCap[3]);
        return this.mUpbCap[3];
    }

    public int getUsimAasMaxNameLen() {
        logi("getUsimAasMaxNameLen begin");
        synchronized (this.mUPBCapabilityLock) {
            if (this.mUpbCap[4] < 0 && checkIsPhbReady()) {
                this.mCi.queryUPBCapability(obtainMessage(19));
                try {
                    this.mUPBCapabilityLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in getUsimAasMaxNameLen");
                }
            }
        }
        logi("getUsimAasMaxNameLen done: L_AAS is " + this.mUpbCap[4]);
        return this.mUpbCap[4];
    }

    public String getUsimGroupById(int i) {
        UsimGroup usimGroup;
        String alphaTag = null;
        logi("getUsimGroupById nGasId is " + i);
        ArrayList<UsimGroup> arrayList = this.mGasForGrp;
        if (arrayList != null && i <= arrayList.size() && (usimGroup = this.mGasForGrp.get(i - 1)) != null) {
            alphaTag = usimGroup.getAlphaTag();
            log("getUsimGroupById index is " + usimGroup.getRecordIndex() + ", name is " + alphaTag);
        }
        logi("getUsimGroupById grpName is " + alphaTag);
        return alphaTag;
    }

    public ArrayList<UsimGroup> getUsimGroups() {
        logi("getUsimGroups begin");
        synchronized (this.mGasLock) {
            if (!this.mGasForGrp.isEmpty()) {
                return this.mGasForGrp;
            }
            queryUpbCapablityAndWait();
            readGasListAndWait();
            logi("getUsimGroups end");
            return this.mGasForGrp;
        }
    }

    public int getUsimGrpMaxCount() {
        int i;
        logi("getUsimGrpMaxCount begin");
        synchronized (this.mUPBCapabilityLock) {
            if (checkIsPhbReady()) {
                if (this.mUpbCap[5] < 0) {
                    queryUpbCapablityAndWait();
                }
                i = this.mUpbCap[5];
            } else {
                i = -1;
            }
            logi("getUsimGrpMaxCount done: N_Gas is " + i);
        }
        return i;
    }

    public int getUsimGrpMaxNameLen() {
        int i;
        logi("getUsimGrpMaxNameLen begin");
        synchronized (this.mUPBCapabilityLock) {
            if (checkIsPhbReady()) {
                if (this.mUpbCap[6] < 0) {
                    queryUpbCapablityAndWait();
                }
                i = this.mUpbCap[6];
            } else {
                i = -1;
            }
            logi("getUsimGrpMaxNameLen done: L_Gas is " + i);
        }
        return i;
    }

    public void handleMessage(Message message) {
        ArrayList<byte[]> arrayList;
        ArrayList arrayList2;
        String[] strArr;
        String[] strArr2;
        int i = message.what;
        if (i == EVENT_GET_RECORDS_SIZE_DONE) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i2 = message.arg1;
            logi("EVENT_GET_RECORDS_SIZE_DONE done, recNum:" + this.mReadEFLinerRecordSizeNum + ", ef_id:" + i2);
            if (asyncResult.exception == null) {
                int[] iArr = (int[]) asyncResult.result;
                if (iArr.length == 3) {
                    if (this.mRecordSize == null) {
                        this.mRecordSize = new SparseArray<>();
                    }
                    this.mRecordSize.put(i2, iArr);
                } else {
                    Rlog.e(LOG_TAG, "get wrong record size format" + asyncResult.exception);
                }
            } else {
                Rlog.e(LOG_TAG, "get EF record size failed" + asyncResult.exception);
            }
            if (this.mReadEFLinerRecordSizeNum > 0) {
                synchronized (this.mLock) {
                    this.mLock.notify();
                }
                return;
            }
            return;
        }
        if (i == 1001) {
            AsyncResult asyncResult2 = (AsyncResult) message.obj;
            logi("EVENT_EXT1_LOAD_DONE done pbr " + message.arg1);
            if (asyncResult2.exception == null && (arrayList = (ArrayList) asyncResult2.result) != null) {
                log("EVENT_EXT1_LOAD_DONE done size " + arrayList.size());
                if (this.mExt1FileList == null) {
                    this.mExt1FileList = new ArrayList<>();
                }
                this.mExt1FileList.add(arrayList);
            }
            synchronized (this.mLock) {
                this.mLock.notify();
            }
            return;
        }
        switch (i) {
            case 1:
                logi("handleMessage: EVENT_PBR_LOAD_DONE:" + this.mPbrNeedNotify);
                if (this.mPbrNeedNotify == -1) {
                    return;
                }
                AsyncResult asyncResult3 = (AsyncResult) message.obj;
                if (asyncResult3.exception == null) {
                    createPbrFile((ArrayList) asyncResult3.result);
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                this.mPbrNeedNotify--;
                return;
            case 2:
                logi("Loading USIM ADN records done");
                AsyncResult asyncResult4 = (AsyncResult) message.obj;
                if (asyncResult4.exception != null || this.mPhoneBookRecords == null) {
                    Rlog.w(LOG_TAG, "Loading USIM ADN records fail.");
                } else if (!CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh) && this.mPhoneBookRecords.size() > 0 && asyncResult4.result != null) {
                    ArrayList<MtkAdnRecord> arrayListChangeAdnRecordNumber = changeAdnRecordNumber(this.mPhoneBookRecords.size(), (ArrayList) asyncResult4.result);
                    this.mPhoneBookRecords.addAll(arrayListChangeAdnRecordNumber);
                    CsimPhbUtil.initPhbStorage(arrayListChangeAdnRecordNumber);
                } else if (asyncResult4.result != null) {
                    this.mPhoneBookRecords.addAll((ArrayList) asyncResult4.result);
                    if (!CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
                        CsimPhbUtil.initPhbStorage((ArrayList) asyncResult4.result);
                    }
                    log("Loading USIM ADN records " + this.mPhoneBookRecords.size());
                } else {
                    log("Loading USIM ADN records ar.result:" + asyncResult4.result);
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 3:
                logi("Loading USIM IAP records done");
                AsyncResult asyncResult5 = (AsyncResult) message.obj;
                if (asyncResult5.exception == null) {
                    this.mIapFileRecord = (ArrayList) asyncResult5.result;
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 4:
                logi("Loading USIM Email records done");
                AsyncResult asyncResult6 = (AsyncResult) message.obj;
                if (asyncResult6.exception == null) {
                    this.mEmailFileRecord = (ArrayList) asyncResult6.result;
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 5:
                AsyncResult asyncResult7 = (AsyncResult) message.obj;
                logi("EVENT_AAS_LOAD_DONE done pbr " + message.arg1);
                if (asyncResult7.exception == null && (arrayList2 = (ArrayList) asyncResult7.result) != null) {
                    int size = arrayList2.size();
                    ArrayList<String> arrayList3 = new ArrayList<>();
                    for (int i3 = 0; i3 < size; i3++) {
                        byte[] bArr = (byte[]) arrayList2.get(i3);
                        if (bArr == null) {
                            arrayList3.add(null);
                        } else {
                            arrayList3.add(IccUtils.adnStringFieldToString(bArr, 0, bArr.length));
                        }
                    }
                    this.mAasForAnr = arrayList3;
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 6:
                logi("Load UPB GAS done");
                AsyncResult asyncResult8 = (AsyncResult) message.obj;
                if (asyncResult8.exception == null && (strArr = (String[]) asyncResult8.result) != null && strArr.length > 0) {
                    this.mGasForGrp = new ArrayList<>();
                    for (int i4 = 0; i4 < strArr.length; i4++) {
                        String strDecodeGas = decodeGas(strArr[i4]);
                        this.mGasForGrp.add(new UsimGroup(i4 + 1, strDecodeGas));
                        log("Load UPB GAS done i is " + i4 + ", gas is " + strDecodeGas);
                    }
                }
                synchronized (this.mGasLock) {
                    this.mGasLock.notify();
                    break;
                }
                return;
            case 7:
                logi("Updating USIM IAP records done");
                if (((AsyncResult) message.obj).exception == null) {
                    log("Updating USIM IAP records successfully!");
                    return;
                }
                return;
            case 8:
                logi("Updating USIM Email records done");
                AsyncResult asyncResult9 = (AsyncResult) message.obj;
                if (asyncResult9.exception == null) {
                    log("Updating USIM Email records successfully!");
                    this.mRefreshEmailInfo = true;
                } else {
                    Rlog.e(LOG_TAG, "EVENT_EMAIL_UPDATE_DONE exception", asyncResult9.exception);
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 9:
                logi("Updating USIM ANR records done");
                AsyncResult asyncResult10 = (AsyncResult) message.obj;
                IccIoResult iccIoResult = (IccIoResult) asyncResult10.result;
                if (asyncResult10.exception != null) {
                    Rlog.e(LOG_TAG, "EVENT_ANR_UPDATE_DONE exception", asyncResult10.exception);
                } else if (iccIoResult == null) {
                    this.mRefreshAnrInfo = true;
                } else if (iccIoResult.getException() == null) {
                    log("Updating USIM ANR records successfully!");
                    this.mRefreshAnrInfo = true;
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 10:
                logi("EVENT_AAS_UPDATE_DONE done.");
                synchronized (this.mAasLock) {
                    this.mAasLock.notify();
                    break;
                }
                return;
            case 11:
                logi("update UPB SNE done");
                AsyncResult asyncResult11 = (AsyncResult) message.obj;
                if (asyncResult11.exception != null) {
                    Rlog.e(LOG_TAG, "EVENT_SNE_UPDATE_DONE exception", asyncResult11.exception);
                    CommandException commandException = asyncResult11.exception;
                    if (commandException.getCommandError() == CommandException.Error.OEM_ERROR_2) {
                        this.mResult = -40;
                    } else if (commandException.getCommandError() == CommandException.Error.OEM_ERROR_3) {
                        this.mResult = -30;
                    } else {
                        this.mResult = -50;
                    }
                } else {
                    this.mResult = 0;
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 12:
                logi("update UPB GRP done");
                if (((AsyncResult) message.obj).exception == null) {
                    this.mResult = 0;
                } else {
                    this.mResult = -1;
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 13:
                logi("update UPB GAS done");
                AsyncResult asyncResult12 = (AsyncResult) message.obj;
                if (asyncResult12.exception == null) {
                    this.mResult = 0;
                } else {
                    CommandException commandException2 = asyncResult12.exception;
                    if (commandException2.getCommandError() == CommandException.Error.OEM_ERROR_2) {
                        this.mResult = -10;
                    } else if (commandException2.getCommandError() == CommandException.Error.OEM_ERROR_3) {
                        this.mResult = -20;
                    } else {
                        this.mResult = -1;
                    }
                }
                logi("update UPB GAS done mResult is " + this.mResult);
                synchronized (this.mGasLock) {
                    this.mGasLock.notify();
                    break;
                }
                return;
            case 14:
                AsyncResult asyncResult13 = (AsyncResult) message.obj;
                int[] iArr2 = (int[]) asyncResult13.userObj;
                IccIoResult iccIoResult2 = (IccIoResult) asyncResult13.result;
                boolean z = this.mNeedNotify.get();
                if (iccIoResult2 != null && this.mIapFileList != null && iccIoResult2.getException() == null) {
                    log("Loading USIM Iap record done result is " + IccUtils.bytesToHexString(iccIoResult2.payload));
                    try {
                        ArrayList<byte[]> arrayList4 = this.mIapFileList.get(iArr2[0]);
                        if (arrayList4.size() > 0) {
                            arrayList4.set(iArr2[1], iccIoResult2.payload);
                        } else {
                            Rlog.w(LOG_TAG, "Warning: IAP size is 0");
                        }
                    } catch (IndexOutOfBoundsException e) {
                        Rlog.e(LOG_TAG, "Index out of bounds.");
                    }
                    break;
                }
                this.mReadingIapNum.decrementAndGet();
                log("haman, mReadingIapNum when load done after minus: " + this.mReadingIapNum.get() + ",mNeedNotify " + this.mNeedNotify.get() + ", Iap pbr:" + iArr2[0] + ", adn i:" + iArr2[1]);
                if (this.mReadingIapNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_IAP_RECORD_LOAD_DONE end mLock.notify:" + z);
                    return;
                }
                return;
            case 15:
                AsyncResult asyncResult14 = (AsyncResult) message.obj;
                int[] iArr3 = (int[]) asyncResult14.userObj;
                IccIoResult iccIoResult3 = (IccIoResult) asyncResult14.result;
                log("Loading USIM email record done email index:" + iArr3[0] + ", adn i:" + iArr3[1]);
                if (iccIoResult3 != null && iccIoResult3.getException() == null) {
                    updatePhoneAdnRecordWithEmailByIndex(iArr3[0], iArr3[1], iccIoResult3.payload);
                }
                this.mReadingEmailNum.decrementAndGet();
                log("haman, mReadingEmailNum when load done after minus: " + this.mReadingEmailNum.get() + ", mNeedNotify:" + this.mNeedNotify.get());
                if (this.mReadingEmailNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_EMAIL_RECORD_LOAD_DONE end mLock.notify");
                    return;
                }
                return;
            case 16:
                AsyncResult asyncResult15 = (AsyncResult) message.obj;
                int[] iArr4 = (int[]) asyncResult15.userObj;
                IccIoResult iccIoResult4 = (IccIoResult) asyncResult15.result;
                if (iccIoResult4 != null && iccIoResult4.getException() == null) {
                    updatePhoneAdnRecordWithAnrByIndex(iArr4[0], iArr4[1], iArr4[2], iccIoResult4.payload);
                }
                this.mReadingAnrNum.decrementAndGet();
                log("haman, mReadingAnrNum when load done after minus: " + this.mReadingAnrNum.get() + ", mNeedNotify:" + this.mNeedNotify.get());
                if (this.mReadingAnrNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_ANR_RECORD_LOAD_DONE end mLock.notify");
                    return;
                }
                return;
            case 17:
                AsyncResult asyncResult16 = (AsyncResult) message.obj;
                int[] iArr5 = (int[]) asyncResult16.userObj;
                boolean z2 = this.mNeedNotify.get();
                if (asyncResult16.result != null) {
                    int[] iArr6 = (int[]) asyncResult16.result;
                    if (iArr6.length > 0) {
                        updatePhoneAdnRecordWithGrpByIndex(iArr5[0], iArr5[1], iArr6);
                    }
                }
                this.mReadingGrpNum.decrementAndGet();
                log("haman, mReadingGrpNum when load done after minus: " + this.mReadingGrpNum.get() + ",mNeedNotify:" + z2);
                if (this.mReadingGrpNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_GRP_RECORD_LOAD_DONE end mLock.notify:" + z2);
                    return;
                }
                return;
            case 18:
                logi("Loading USIM SNE record done");
                AsyncResult asyncResult17 = (AsyncResult) message.obj;
                int[] iArr7 = (int[]) asyncResult17.userObj;
                IccIoResult iccIoResult5 = (IccIoResult) asyncResult17.result;
                if (iccIoResult5 != null && iccIoResult5.getException() == null) {
                    log("Loading USIM SNE record done result is " + IccUtils.bytesToHexString(iccIoResult5.payload));
                    updatePhoneAdnRecordWithSneByIndex(iArr7[0], iArr7[1], iccIoResult5.payload);
                }
                this.mReadingSneNum.decrementAndGet();
                log("haman, mReadingSneNum when load done after minus: " + this.mReadingSneNum.get() + ",mNeedNotify:" + this.mNeedNotify.get());
                if (this.mReadingSneNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_SNE_RECORD_LOAD_DONE end mLock.notify");
                    return;
                }
                return;
            case 19:
                logi("Query UPB capability done");
                AsyncResult asyncResult18 = (AsyncResult) message.obj;
                if (asyncResult18.exception == null) {
                    this.mUpbCap = (int[]) asyncResult18.result;
                }
                synchronized (this.mUPBCapabilityLock) {
                    this.mUPBCapabilityLock.notify();
                    break;
                }
                return;
            case 20:
                AsyncResult asyncResult19 = (AsyncResult) message.obj;
                if (asyncResult19.exception == null) {
                    this.mEfData = (EFResponseData) asyncResult19.result;
                } else {
                    Rlog.w(LOG_TAG, "Select EF file fail" + asyncResult19.exception);
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 21:
                logi("EVENT_QUERY_PHB_ADN_INFO");
                AsyncResult asyncResult20 = (AsyncResult) message.obj;
                if (asyncResult20.exception == null) {
                    int[] iArr8 = (int[]) asyncResult20.result;
                    if (iArr8 == null || iArr8.length != 4) {
                        this.mAdnRecordSize = new int[]{0, 0, 0, 0};
                    } else {
                        this.mAdnRecordSize = new int[]{iArr8[0], iArr8[1], iArr8[2], iArr8[3]};
                        log("recordSize[0]=" + this.mAdnRecordSize[0] + ",recordSize[1]=" + this.mAdnRecordSize[1] + ",recordSize[2]=" + this.mAdnRecordSize[2] + ",recordSize[3]=" + this.mAdnRecordSize[3]);
                    }
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 22:
                AsyncResult asyncResult21 = (AsyncResult) message.obj;
                int[] iArr9 = (int[]) asyncResult21.userObj;
                String str = (String) asyncResult21.result;
                boolean z3 = this.mNeedNotify.get();
                if (str != null && asyncResult21.exception == null) {
                    log("Loading USIM Email record done result is " + str);
                    updatePhoneAdnRecordWithEmailByIndexOptmz(iArr9[0], iArr9[1], str);
                }
                this.mReadingEmailNum.decrementAndGet();
                log("haman, mReadingEmailNum when load done after minus: " + this.mReadingEmailNum.get() + ", mNeedNotify:" + this.mNeedNotify.get() + ", email index:" + iArr9[0] + ", adn i:" + iArr9[1]);
                if (this.mReadingEmailNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_EMAIL_RECORD_LOAD_OPTMZ_DONE end mLock.notify:" + z3);
                    return;
                }
                return;
            case 23:
                AsyncResult asyncResult22 = (AsyncResult) message.obj;
                int[] iArr10 = (int[]) asyncResult22.userObj;
                PhbEntry[] phbEntryArr = (PhbEntry[]) asyncResult22.result;
                boolean z4 = this.mNeedNotify.get();
                if (phbEntryArr != null && asyncResult22.exception == null) {
                    log("Loading USIM Anr record done result is " + phbEntryArr[0]);
                    updatePhoneAdnRecordWithAnrByIndexOptmz(iArr10[0], iArr10[1], iArr10[2], phbEntryArr[0]);
                }
                this.mReadingAnrNum.decrementAndGet();
                log("haman, mReadingAnrNum when load done after minus: " + this.mReadingAnrNum.get() + ", mNeedNotify:" + this.mNeedNotify.get() + ", anr index:" + iArr10[2] + ", adn i:" + iArr10[1]);
                if (this.mReadingAnrNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_ANR_RECORD_LOAD_OPTMZ_DONE end mLock.notify:" + z4);
                    return;
                }
                return;
            case 24:
                AsyncResult asyncResult23 = (AsyncResult) message.obj;
                int[] iArr11 = (int[]) asyncResult23.userObj;
                String str2 = (String) asyncResult23.result;
                boolean z5 = this.mNeedNotify.get();
                if (str2 != null && asyncResult23.exception == null) {
                    String strDecodeGas2 = decodeGas(str2);
                    log("Loading USIM Sne record done result is " + strDecodeGas2);
                    updatePhoneAdnRecordWithSneByIndexOptmz(iArr11[1], strDecodeGas2);
                }
                this.mReadingSneNum.decrementAndGet();
                log("haman, mReadingSneNum when load done after minus: " + this.mReadingSneNum.get() + ", mNeedNotify:" + this.mNeedNotify.get() + ", sne index:" + iArr11[0] + ", adn i:" + iArr11[1]);
                if (this.mReadingSneNum.get() == 0) {
                    if (this.mNeedNotify.get()) {
                        this.mNeedNotify.set(false);
                        synchronized (this.mLock) {
                            this.mLock.notify();
                            break;
                        }
                    }
                    logi("EVENT_SNE_RECORD_LOAD_OPTMZ_DONE end mLock.notify:" + z5);
                    return;
                }
                return;
            case 25:
                AsyncResult asyncResult24 = (AsyncResult) message.obj;
                if (asyncResult24.exception == null) {
                    int[] iArr12 = (int[]) asyncResult24.result;
                    this.mEmailInfo = iArr12;
                    if (iArr12 == null) {
                        log("mEmailInfo Null!");
                    } else {
                        logi("mEmailInfo = " + this.mEmailInfo[0] + " " + this.mEmailInfo[1] + " " + this.mEmailInfo[2]);
                    }
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 26:
                AsyncResult asyncResult25 = (AsyncResult) message.obj;
                int[] iArr13 = (int[]) asyncResult25.result;
                if (asyncResult25.exception == null) {
                    if (iArr13 == null) {
                        log("tmpAnrInfo Null!");
                    } else {
                        logi("tmpAnrInfo = " + iArr13[0] + " " + iArr13[1] + " " + iArr13[2]);
                        ArrayList<int[]> arrayList5 = this.mAnrInfo;
                        if (arrayList5 == null) {
                            this.mAnrInfo = new ArrayList<>();
                        } else if (arrayList5.size() > 0) {
                            this.mAnrInfo.clear();
                        }
                        this.mAnrInfo.add(iArr13);
                    }
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 27:
                AsyncResult asyncResult26 = (AsyncResult) message.obj;
                if (asyncResult26.exception == null) {
                    int[] iArr14 = (int[]) asyncResult26.result;
                    this.mSneInfo = iArr14;
                    if (iArr14 == null) {
                        log("mSneInfo Null!");
                    } else {
                        logi("mSneInfo = " + this.mSneInfo[0] + " " + this.mSneInfo[1] + " " + this.mSneInfo[2]);
                    }
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            case 28:
                logi("Load UPB AAS done");
                AsyncResult asyncResult27 = (AsyncResult) message.obj;
                if (asyncResult27.exception == null && (strArr2 = (String[]) asyncResult27.result) != null && strArr2.length > 0) {
                    this.mAasForAnr = new ArrayList<>();
                    for (int i5 = 0; i5 < strArr2.length; i5++) {
                        String strDecodeGas3 = decodeGas(strArr2[i5]);
                        this.mAasForAnr.add(strDecodeGas3);
                        log("Load UPB AAS done i is " + i5 + ", aas is " + strDecodeGas3);
                    }
                }
                synchronized (this.mLock) {
                    this.mLock.notify();
                    break;
                }
                return;
            default:
                Rlog.e(LOG_TAG, "UnRecognized Message : " + message.what);
                return;
        }
    }

    public int hasExistGroup(String str) {
        int recordIndex = -1;
        logi("hasExistGroup grpName is " + str);
        if (str == null) {
            return -1;
        }
        ArrayList<UsimGroup> arrayList = this.mGasForGrp;
        if (arrayList != null && arrayList.size() > 0) {
            for (int i = 0; i < this.mGasForGrp.size(); i++) {
                UsimGroup usimGroup = this.mGasForGrp.get(i);
                if (usimGroup != null && str.equals(usimGroup.getAlphaTag())) {
                    log("getUsimGroupById index is " + usimGroup.getRecordIndex() + ", name is " + str);
                    recordIndex = usimGroup.getRecordIndex();
                    break;
                }
            }
        }
        logi("hasExistGroup grpId is " + recordIndex);
        return recordIndex;
    }

    public boolean hasSne() {
        log("hasSne begin");
        synchronized (this.mUPBCapabilityLock) {
            if (this.mUpbCap[2] < 0 && checkIsPhbReady()) {
                this.mCi.queryUPBCapability(obtainMessage(19));
                try {
                    this.mUPBCapabilityLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in hasSne");
                }
            }
        }
        log("hasSne done: N_Sne is " + this.mUpbCap[2]);
        return this.mUpbCap[2] > 0;
    }

    public int insertUsimAas(String str) {
        int i;
        boolean z;
        int i2;
        logi("insertUsimAas begin" + str + ",mPbrNeedNotify " + this.mPbrNeedNotify);
        if (str == null || str.length() == 0) {
            return 0;
        }
        if (!loadAasFiles()) {
            return -1;
        }
        if (str.length() > getUsimAasMaxNameLen()) {
            return 0;
        }
        synchronized (this.mAasLock) {
            ArrayList<String> arrayList = this.mAasForAnr;
            while (true) {
                if (i >= arrayList.size()) {
                    z = false;
                    i2 = 0;
                    break;
                }
                String str2 = arrayList.get(i);
                i = (str2 == null || str2.length() == 0) ? 0 : i + 1;
                int i3 = i + 1;
                z = true;
                i2 = i3;
                break;
            }
            log("insertUsimAas aasIndex:" + i2 + ",found:" + z);
            if (!z) {
                return -2;
            }
            String strEncodeToUcs2 = encodeToUcs2(str);
            Message messageObtainMessage = obtainMessage(10);
            this.mCi.editUPBEntry(3, 0, i2, strEncodeToUcs2, null, messageObtainMessage);
            try {
                this.mAasLock.wait();
            } catch (InterruptedException e) {
                Rlog.e(LOG_TAG, "Interrupted Exception in insertUsimAas");
            }
            AsyncResult asyncResult = (AsyncResult) messageObtainMessage.obj;
            logi("insertUsimAas UPB_EF_AAS: ar " + asyncResult);
            if (asyncResult != null && asyncResult.exception != null) {
                Rlog.e(LOG_TAG, "insertUsimAas exception " + asyncResult.exception);
                return -1;
            }
            ArrayList<String> arrayList2 = this.mAasForAnr;
            if (arrayList2 != null) {
                arrayList2.set(i2 - 1, str);
                logi("insertUsimAas update mAasForAnr done");
            } else {
                logi("insertUsimAas mAasForAnr is null");
            }
            return i2;
        }
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x00a6 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized int insertUsimGroup(String str) {
        int recordIndex = -1;
        logi("insertUsimGroup grpName");
        synchronized (this.mGasLock) {
            try {
                if (this.mGasForGrp == null || this.mGasForGrp.size() == 0) {
                    Rlog.w(LOG_TAG, "insertUsimGroup fail ");
                } else {
                    UsimGroup usimGroup = null;
                    int i = 0;
                    while (i < this.mGasForGrp.size()) {
                        usimGroup = this.mGasForGrp.get(i);
                        if (usimGroup != null && usimGroup.getAlphaTag() == null) {
                            recordIndex = usimGroup.getRecordIndex();
                            log("insertUsimGroup index is " + recordIndex);
                            break;
                        }
                        i++;
                    }
                    if (recordIndex < 0) {
                        Rlog.w(LOG_TAG, "insertUsimGroup fail: gas file is full.");
                        return -20;
                    }
                    this.mCi.editUPBEntry(4, 0, recordIndex, encodeToUcs2(str), null, obtainMessage(13));
                    try {
                        this.mGasLock.wait();
                    } catch (InterruptedException e) {
                        Rlog.e(LOG_TAG, "Interrupted Exception in insertUsimGroup");
                    }
                    if (this.mResult < 0) {
                        Rlog.e(LOG_TAG, "result is negative. insertUsimGroup");
                        return this.mResult;
                    }
                    usimGroup.setAlphaTag(str);
                    this.mGasForGrp.set(i, usimGroup);
                }
                return recordIndex;
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
    }

    public boolean isAdnAccessible() {
        if (this.mFh != null && this.mCurrentApp.getType() == IccCardApplicationStatus.AppType.APPTYPE_SIM) {
            synchronized (this.mLock) {
                this.mFh.selectEFFile(28474, obtainMessage(20));
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in isAdnAccessible");
                }
            }
            EFResponseData eFResponseData = this.mEfData;
            return eFResponseData == null || (eFResponseData.getFileStatus() & 5) > 0;
        }
        return true;
    }

    public boolean isAnrCapacityFree(String str, int i, int i2, MtkAdnRecord mtkAdnRecord) {
        String additionalNumber = mtkAdnRecord != null ? mtkAdnRecord.getAdditionalNumber(i2) : null;
        if (str == null || str.equals("") || i2 < 0 || getUsimEfType(196) == 168 || !(additionalNumber == null || additionalNumber.equals(""))) {
            return true;
        }
        if (CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
            synchronized (this.mLock) {
                if (this.mAnrInfo == null || i2 >= this.mAnrInfo.size()) {
                    this.mCi.queryUPBAvailable(0, i2 + 1, obtainMessage(26));
                    try {
                        this.mLock.wait();
                    } catch (InterruptedException e) {
                        Rlog.e(LOG_TAG, "Interrupted Exception in isAnrCapacityFree");
                    }
                }
            }
            ArrayList<int[]> arrayList = this.mAnrInfo;
            return (arrayList == null || arrayList.get(i2) == null || this.mAnrInfo.get(i2)[1] <= 0) ? false : true;
        }
        int i3 = this.mAdnFileSize;
        int i4 = (i - 1) / i3;
        int i5 = (i - 1) % i3;
        try {
            log("isAnrCapacityFree anr: " + str);
            if (this.mRecordSize != null && this.mRecordSize.size() != 0) {
                File file = (File) this.mPbrRecords.get(i4).mFileIds.get((i2 * 256) + 196);
                if (file == null) {
                    return false;
                }
                int i6 = this.mRecordSize.get(file.getEfid())[2];
                log("isAnrCapacityFree size: " + i6);
                if (i6 >= i5 + 1) {
                    return true;
                }
                log("isAnrCapacityFree: anrRecNum out of size: " + i5);
                return false;
            }
            log("isAnrCapacityFree: mAnrFileSize is empty");
            return false;
        } catch (IndexOutOfBoundsException e2) {
            Rlog.e(LOG_TAG, "isAnrCapacityFree Index out of bounds.");
            return false;
        } catch (NullPointerException e3) {
            Rlog.e(LOG_TAG, "isAnrCapacityFree exception:" + e3.toString());
            return false;
        }
    }

    public boolean isUsimPhbEfAndNeedReset(int i) {
        logi("isUsimPhbEfAndNeedReset, fileId: " + Integer.toHexString(i).toUpperCase());
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0) {
            Rlog.e(LOG_TAG, "isUsimPhbEfAndNeedReset, No PBR files");
            return false;
        }
        int size = this.mPbrRecords.size();
        for (int i2 = 0; i2 < size; i2++) {
            SparseArray sparseArray = this.mPbrRecords.get(i2).mFileIds;
            for (int i3 = 192; i3 <= 203; i3++) {
                if (i3 == 197 || i3 == 201 || i3 == 203) {
                    logi("isUsimPhbEfAndNeedReset, not reset EF: " + i3);
                } else if (sparseArray.get(i3) != null && i == ((File) sparseArray.get(i3)).getEfid()) {
                    logi("isUsimPhbEfAndNeedReset, return true with EF: " + i3);
                    return true;
                }
            }
        }
        log("isUsimPhbEfAndNeedReset, return false.");
        return false;
    }

    public ArrayList<MtkAdnRecord> loadEfFilesFromUsim(Object obj) {
        int[] eFLinearRecordSize;
        long jCurrentTimeMillis = System.currentTimeMillis();
        synchronized (this.mLock) {
            this.mIsReset = false;
            if (!this.mPhoneBookRecords.isEmpty()) {
                if (this.mRefreshCache) {
                    this.mRefreshCache = false;
                    refreshCache();
                }
                return this.mPhoneBookRecords;
            }
            if (!this.mIsPbrPresent.booleanValue()) {
                return null;
            }
            logi("loadEfFilesFromUsim, mPbrNeedNotify =" + this.mPbrNeedNotify);
            if (this.mPbrRecords == null || this.mPbrRecords.size() == 0) {
                this.mPbrNeedNotify++;
                readPbrFileAndWait();
            }
            if (this.mPbrRecords != null && this.mPbrRecords.size() != 0) {
                logi("loadEfFilesFromUsim mPbrNeedNotify:" + this.mPbrNeedNotify);
                if (this.mEmailRecordSize < 0) {
                    readEmailRecordSize();
                }
                if (this.mAnrRecordSize < 0) {
                    readAnrRecordSize();
                }
                int efid = ((File) this.mPbrRecords.get(0).mFileIds.get(192)).getEfid();
                if (efid > 0 && (eFLinearRecordSize = readEFLinearRecordSize(efid)) != null && eFLinearRecordSize.length == 3) {
                    this.mAdnFileSize = eFLinearRecordSize[2];
                }
                if (this.mPbrRecords.get(0).mFileIds.get(195) != null) {
                    readEFLinearRecordSize(((File) this.mPbrRecords.get(0).mFileIds.get(195)).getEfid());
                }
                int size = this.mPbrRecords.size();
                if (CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
                    readAasFileAndWaitOptmz();
                    readAdnFileAndWait(0);
                } else {
                    for (int i = 0; i < size; i++) {
                        readAASFileAndWait(i);
                        readAdnFileAndWaitForUICC(i);
                    }
                }
                if (this.mPhoneBookRecords.isEmpty()) {
                    logi("loadEfFilesFromUsim mPhoneBookRecords Empty");
                    return this.mPhoneBookRecords;
                }
                if (CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
                    logi("loadEfFilesFromUsim Speed up read begin");
                    readSneFileAndWaitOptmz();
                    readAnrFileAndWaitOptmz();
                    readEmailFileAndWaitOptmz();
                    logi("loadEfFilesFromUsim Speed up read end");
                } else {
                    for (int i2 = 0; i2 < size; i2++) {
                        readSneFileAndWait(i2);
                        readAnrFileAndWait(i2);
                        readEmailFileAndWait(i2);
                    }
                }
                readGrpIdsAndWait();
                if (this.mPbrRecords != null) {
                    this.mUpbDone = 1;
                }
                if (this.mPbrRecords != null) {
                    logi("loadEfFilesFromUsim Time: " + (System.currentTimeMillis() - jCurrentTimeMillis) + " AppType: " + this.mCurrentApp.getType());
                } else {
                    logi("loadEfFilesFromUsim end");
                }
                return this.mPhoneBookRecords;
            }
            if (!checkIsPhbReady() || this.mIsReset) {
                logi("loadEfFilesFromUsim phb not ready and Reset");
                return null;
            }
            if (true == readAdnFileAndWait(0)) {
                this.mIsPbrPresent = false;
                this.mEmailRecordSize = 0;
                this.mAnrRecordSize = 0;
                this.mUpbDone = 1;
            }
            logi("loadEfFilesFromUsim getRecordIfLoaded EF_ADN pbrP:" + this.mIsPbrPresent);
            return this.mAdnCache.getRecordsIfLoaded(28474, null);
        }
    }

    public void loadPBRFiles() {
        if (this.mIsPbrPresent.booleanValue()) {
            synchronized (this.mLock) {
                if (this.mPbrRecords == null || this.mPbrRecords.size() == 0) {
                    this.mPbrNeedNotify++;
                    readPbrFileAndWait();
                }
            }
        }
    }

    public boolean moveContactFromGroupsToGroups(int i, int[] iArr, int[] iArr2) {
        int i2;
        boolean z = false;
        ArrayList<MtkAdnRecord> arrayList = this.mPhoneBookRecords;
        if (arrayList == null || i <= 0 || i > arrayList.size()) {
            Rlog.e(LOG_TAG, "moveContactFromGroupsToGroups no records or invalid index.");
            return false;
        }
        synchronized (this.mLock) {
            MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
            if (mtkAdnRecord != null) {
                int i3 = this.mUpbCap[7];
                int i4 = this.mUpbCap[7] > this.mUpbCap[5] ? this.mUpbCap[5] : this.mUpbCap[7];
                String grpIds = mtkAdnRecord.getGrpIds();
                StringBuilder sb = new StringBuilder();
                sb.append(" moveContactFromGroupsToGroups the adn index is ");
                sb.append(mtkAdnRecord.getRecId());
                sb.append(" original grpIds is ");
                sb.append(grpIds);
                sb.append(", fromGrpIdList: ");
                sb.append(iArr == null ? "null" : iArr);
                sb.append(", toGrpIdList: ");
                sb.append(iArr2 == null ? "null" : iArr2);
                logi(sb.toString());
                int[] iArr3 = new int[i3];
                for (int i5 = 0; i5 < i3; i5++) {
                    iArr3[i5] = 0;
                }
                if (grpIds != null) {
                    String[] strArrSplit = grpIds.split(",");
                    for (int i6 = 0; i6 < i4; i6++) {
                        iArr3[i6] = Integer.parseInt(strArrSplit[i6]);
                    }
                }
                if (iArr != null) {
                    for (int i7 : iArr) {
                        for (int i8 = 0; i8 < i4; i8++) {
                            if (iArr3[i8] == i7) {
                                iArr3[i8] = 0;
                            }
                        }
                    }
                }
                if (iArr2 != null) {
                    for (int i9 = 0; i9 < iArr2.length; i9++) {
                        boolean z2 = false;
                        boolean z3 = false;
                        for (int i10 = 0; i10 < i4; i10++) {
                            if (iArr3[i10] == iArr2[i9]) {
                                z3 = true;
                                break;
                            }
                        }
                        if (z3) {
                            Rlog.w(LOG_TAG, "moveContactFromGroupsToGroups the adn isalready in the group.");
                        } else {
                            while (i2 < i4) {
                                i2 = (iArr3[i2] == 0 || iArr3[i2] == 255) ? 0 : i2 + 1;
                                z2 = true;
                                iArr3[i2] = iArr2[i9];
                                break;
                            }
                            if (!z2) {
                                Rlog.e(LOG_TAG, "moveContactFromGroupsToGroups no empty to add.");
                                return false;
                            }
                        }
                    }
                }
                this.mCi.writeUPBGrpEntry(i, iArr3, obtainMessage(12));
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in moveContactFromGroupsToGroups");
                }
                if (this.mResult == 0) {
                    z = true;
                    updatePhoneAdnRecordWithGrpByIndex(i - 1, i, iArr3);
                    logi("moveContactFromGroupsToGroups the adn index is " + mtkAdnRecord.getRecId());
                    this.mResult = -1;
                }
            }
            return z;
        }
    }

    public int[] readEFLinearRecordSize(int i) {
        int[] iArr;
        logi("readEFLinearRecordSize fileid:" + Integer.toHexString(i).toUpperCase() + ",recordNum:" + this.mReadEFLinerRecordSizeNum);
        Message messageObtainMessage = obtainMessage(EVENT_GET_RECORDS_SIZE_DONE);
        messageObtainMessage.arg1 = i;
        synchronized (this.mLock) {
            if (this.mFh != null) {
                this.mReadEFLinerRecordSizeNum++;
                this.mFh.getEFLinearRecordSize(i, messageObtainMessage);
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in readEFLinearRecordSize");
                }
            } else {
                Rlog.e(LOG_TAG, "readEFLinearRecordSize-IccFileHandler is null");
            }
            if (this.mFh != null) {
                this.mReadEFLinerRecordSizeNum--;
            }
            iArr = this.mRecordSize != null ? this.mRecordSize.get(i) : null;
            if (iArr != null) {
                logi("readEFLinearRecordSize fileid:" + Integer.toHexString(i).toUpperCase() + ",len:" + iArr[0] + ",total:" + iArr[1] + ",count:" + iArr[2] + ",recordNum:" + this.mReadEFLinerRecordSizeNum);
            } else {
                logi("readEFLinearRecordSize fileid:" + Integer.toHexString(i).toUpperCase() + ",recordSize: null");
            }
        }
        return iArr;
    }

    public synchronized boolean removeContactFromGroup(int i, int i2) {
        boolean z = false;
        logi("removeContactFromGroup begin adnIndex is " + i + " to grp " + i2);
        if (this.mPhoneBookRecords != null && i > 0 && i <= this.mPhoneBookRecords.size()) {
            try {
                synchronized (this.mLock) {
                    try {
                        try {
                            MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
                            if (mtkAdnRecord != null) {
                                String grpIds = mtkAdnRecord.getGrpIds();
                                if (grpIds == null) {
                                    Rlog.e(LOG_TAG, " the adn is not in any group. ");
                                    return false;
                                }
                                String[] strArrSplit = grpIds.split(",");
                                boolean z2 = false;
                                int i3 = -1;
                                int[] iArr = new int[strArrSplit.length];
                                for (int i4 = 0; i4 < strArrSplit.length; i4++) {
                                    iArr[i4] = Integer.parseInt(strArrSplit[i4]);
                                    if (i2 == iArr[i4]) {
                                        z2 = true;
                                        i3 = i4;
                                        log(" removeContactFromGroup the adn is in the group. i is " + i4);
                                    }
                                }
                                if (!z2 || i3 < 0) {
                                    Rlog.e(LOG_TAG, " removeContactFromGroup the adn is not in the group. ");
                                } else {
                                    iArr[i3] = 0;
                                    this.mCi.writeUPBGrpEntry(i, iArr, obtainMessage(12));
                                    try {
                                        this.mLock.wait();
                                    } catch (InterruptedException e) {
                                        Rlog.e(LOG_TAG, "Interrupted Exception in removeContactFromGroup");
                                    }
                                    if (this.mResult == 0) {
                                        z = true;
                                        updatePhoneAdnRecordWithGrpByIndex(i - 1, i, iArr);
                                        this.mResult = -1;
                                    }
                                }
                            }
                            logi("removeContactFromGroup end adnIndex is " + i + " to grp " + i2);
                            return z;
                        } catch (Throwable th) {
                            th = th;
                            throw th;
                        }
                    } catch (IndexOutOfBoundsException e2) {
                        StringBuilder sb = new StringBuilder();
                        sb.append("removeContactFromGroup: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is ");
                        sb.append(this.mPhoneBookRecords.size());
                        sb.append("index is ");
                        sb.append(i - 1);
                        Rlog.e(LOG_TAG, sb.toString());
                        return false;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
        Rlog.e(LOG_TAG, "removeContactFromGroup no records or invalid index.");
        return false;
    }

    public boolean removeContactGroup(int i) {
        boolean z = false;
        logi("removeContactsGroup adnIndex is " + i);
        ArrayList<MtkAdnRecord> arrayList = this.mPhoneBookRecords;
        if (arrayList == null || arrayList.isEmpty()) {
            return false;
        }
        synchronized (this.mLock) {
            try {
                try {
                    MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
                    if (mtkAdnRecord == null) {
                        return false;
                    }
                    log("removeContactsGroup rec is " + mtkAdnRecord);
                    String grpIds = mtkAdnRecord.getGrpIds();
                    if (grpIds == null) {
                        return false;
                    }
                    String[] strArrSplit = grpIds.split(",");
                    boolean z2 = false;
                    for (String str : strArrSplit) {
                        int i2 = Integer.parseInt(str);
                        if (i2 > 0 && i2 < 255) {
                            z2 = true;
                            break;
                        }
                    }
                    if (z2) {
                        this.mCi.writeUPBGrpEntry(i, new int[0], obtainMessage(12));
                        try {
                            this.mLock.wait();
                        } catch (InterruptedException e) {
                            Rlog.e(LOG_TAG, "Interrupted Exception in removeContactGroup");
                        }
                        if (this.mResult == 0) {
                            z = true;
                            int[] iArr = new int[strArrSplit.length];
                            for (int i3 = 0; i3 < strArrSplit.length; i3++) {
                                iArr[i3] = 0;
                            }
                            updatePhoneAdnRecordWithGrpByIndex(i - 1, i, iArr);
                            logi(" removeContactGroup the adn index is " + mtkAdnRecord.getRecId());
                            this.mResult = -1;
                        }
                    }
                    return z;
                } catch (IndexOutOfBoundsException e2) {
                    StringBuilder sb = new StringBuilder();
                    sb.append("removeContactGroup: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is ");
                    sb.append(this.mPhoneBookRecords.size());
                    sb.append("index is ");
                    sb.append(i - 1);
                    Rlog.e(LOG_TAG, sb.toString());
                    return false;
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    public boolean removeUsimAasById(int i, int i2) {
        logi("removeUsimAasById by id " + i + ",pbrIndex " + i2 + ",mPbrNeedNotify " + this.mPbrNeedNotify);
        if (!loadAasFiles()) {
            return false;
        }
        SparseArray sparseArray = this.mPbrRecords.get(i2).mFileIds;
        if (sparseArray == null || sparseArray.get(199) == null) {
            Rlog.e(LOG_TAG, "removeUsimAasById-PBR have no AAS EF file");
            return false;
        }
        log("removeUsimAasById result,efid:" + ((File) sparseArray.get(199)).getEfid());
        if (this.mFh == null) {
            Rlog.e(LOG_TAG, "removeUsimAasById-IccFileHandler is null");
            return false;
        }
        Message messageObtainMessage = obtainMessage(10);
        int usimAasMaxNameLen = getUsimAasMaxNameLen();
        byte[] bArr = new byte[usimAasMaxNameLen];
        for (int i3 = 0; i3 < usimAasMaxNameLen; i3++) {
            bArr[i3] = -1;
        }
        synchronized (this.mAasLock) {
            this.mCi.deleteUPBEntry(3, 1, i, messageObtainMessage);
            try {
                this.mAasLock.wait();
            } catch (InterruptedException e) {
                Rlog.e(LOG_TAG, "Interrupted Exception in removesimAasById");
            }
        }
        AsyncResult asyncResult = (AsyncResult) messageObtainMessage.obj;
        if (asyncResult != null && asyncResult.exception != null) {
            Rlog.e(LOG_TAG, "removeUsimAasById exception " + asyncResult.exception);
            return false;
        }
        ArrayList<String> arrayList = this.mAasForAnr;
        if (arrayList != null) {
            log("remove aas done " + arrayList.get(i - 1));
            arrayList.set(i + (-1), null);
        } else {
            log("remove aas mAasForAnr is null ");
        }
        return true;
    }

    public synchronized boolean removeUsimGroupById(int i) {
        boolean z;
        z = false;
        logi("removeUsimGroupById nGasId is " + i);
        synchronized (this.mGasLock) {
            try {
                if (this.mGasForGrp != null) {
                    try {
                        if (i > this.mGasForGrp.size()) {
                            Rlog.e(LOG_TAG, "removeUsimGroupById fail ");
                        } else {
                            UsimGroup usimGroup = this.mGasForGrp.get(i - 1);
                            if (usimGroup != null) {
                                log(" removeUsimGroupById index is " + usimGroup.getRecordIndex());
                            }
                            if (usimGroup == null || usimGroup.getAlphaTag() == null) {
                                Rlog.w(LOG_TAG, "removeUsimGroupById fail: this gas doesn't exist ");
                            } else {
                                this.mCi.deleteUPBEntry(4, 0, i, obtainMessage(13));
                                try {
                                    this.mGasLock.wait();
                                } catch (InterruptedException e) {
                                    Rlog.e(LOG_TAG, "Interrupted Exception in removeUsimGroupById");
                                }
                                if (this.mResult == 0) {
                                    z = true;
                                    usimGroup.setAlphaTag(null);
                                    this.mGasForGrp.set(i - 1, usimGroup);
                                }
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        throw th;
                    }
                } else {
                    Rlog.e(LOG_TAG, "removeUsimGroupById fail ");
                }
                logi("removeUsimGroupById result is " + z);
            } catch (Throwable th2) {
                th = th2;
            }
        }
        return z;
    }

    public void reset() {
        this.mIsReset = true;
        this.mPhoneBookRecords.clear();
        this.mIapFileRecord = null;
        this.mEmailFileRecord = null;
        this.mPbrRecords = null;
        this.mIsPbrPresent = true;
        this.mRefreshCache = false;
        this.mEmailsForAdnRec.clear();
        this.mSfiEfidTable.clear();
        this.mGasForGrp.clear();
        this.mIapFileList = null;
        this.mAasForAnr = null;
        this.mExt1FileList = null;
        this.mSliceCount = 0;
        this.mEmailRecTable = new int[400];
        this.mEmailInfo = null;
        this.mSneInfo = null;
        this.mAnrInfo = null;
        for (int i = 0; i < 8; i++) {
            this.mUpbCap[i] = -1;
        }
        this.mEmailRecordSize = -1;
        this.mAnrRecordSize = -1;
        this.mUpbDone = -1;
        this.mAdnRecordSize = null;
        this.mRefreshEmailInfo = false;
        this.mRefreshAnrInfo = false;
        this.mRefreshAdnInfo = false;
        synchronized (this.mLock) {
            this.mLock.notifyAll();
        }
        this.mPbrNeedNotify = -1;
        logi("reset finished, mPbrNeedNotify = " + this.mPbrNeedNotify);
    }

    public boolean updateAdnAas(int i, int i2) throws Throwable {
        int i3 = this.mAdnFileSize;
        int i4 = (i - 1) / i3;
        int i5 = (i - 1) % i3;
        try {
            MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
            mtkAdnRecord.setAasIndex(i2);
            for (int i6 = 0; i6 < 3; i6++) {
                updateAnrByAdnIndex(mtkAdnRecord.getAdditionalNumber(i6), i, i6, mtkAdnRecord);
            }
            return true;
        } catch (IndexOutOfBoundsException e) {
            StringBuilder sb = new StringBuilder();
            sb.append("updateADNAAS: mPhoneBookRecords IndexOutOfBoundsException mPhoneBookRecords.size() is ");
            sb.append(this.mPhoneBookRecords.size());
            sb.append("index is ");
            sb.append(i - 1);
            Rlog.e(LOG_TAG, sb.toString());
            return false;
        }
    }

    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:78:0x01e8
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1478)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    public void updateAnrByAdnIndex(java.lang.String r27, int r28, int r29, com.mediatek.internal.telephony.phb.MtkAdnRecord r30) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 545
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mediatek.internal.telephony.phb.MtkUsimPhoneBookManager.updateAnrByAdnIndex(java.lang.String, int, int, com.mediatek.internal.telephony.phb.MtkAdnRecord):void");
    }

    public boolean updateContactToGroups(int i, int[] iArr) {
        boolean z = false;
        ArrayList<MtkAdnRecord> arrayList = this.mPhoneBookRecords;
        if (arrayList == null || i <= 0 || i > arrayList.size() || iArr == null) {
            Rlog.e(LOG_TAG, "updateContactToGroups no records or invalid index.");
            return false;
        }
        logi("updateContactToGroups begin grpIdList is " + i + " to grp list count " + iArr.length);
        synchronized (this.mLock) {
            MtkAdnRecord mtkAdnRecord = this.mPhoneBookRecords.get(i - 1);
            if (mtkAdnRecord != null) {
                log(" updateContactToGroups the adn index is " + mtkAdnRecord.getRecId() + " old grpList is " + mtkAdnRecord.getGrpIds());
                int i2 = this.mUpbCap[7];
                if (iArr.length > i2) {
                    Rlog.e(LOG_TAG, "updateContactToGroups length of grpIdList > grpCount.");
                    return false;
                }
                int[] iArr2 = new int[i2];
                int i3 = 0;
                while (i3 < i2) {
                    iArr2[i3] = i3 < iArr.length ? iArr[i3] : 0;
                    log("updateContactToGroups i:" + i3 + ",grpIdArray[" + i3 + "]:" + iArr2[i3]);
                    i3++;
                }
                this.mCi.writeUPBGrpEntry(i, iArr2, obtainMessage(12));
                try {
                    this.mLock.wait();
                } catch (InterruptedException e) {
                    Rlog.e(LOG_TAG, "Interrupted Exception in updateContactToGroups");
                }
                if (this.mResult == 0) {
                    z = true;
                    updatePhoneAdnRecordWithGrpByIndex(i - 1, i, iArr2);
                    logi(" updateContactToGroups the adn index is " + mtkAdnRecord.getRecId());
                    this.mResult = -1;
                }
            }
            logi("updateContactToGroups end grpIdList is " + i + " to grp list count " + iArr.length);
            return z;
        }
    }

    /* JADX WARN: Code duplicated, block: B:111:0x018a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:86:0x0182 A[Catch: all -> 0x0184, DONT_GENERATE, TRY_LEAVE, TryCatch #2 {all -> 0x0184, blocks: (B:86:0x0182, B:78:0x0159), top: B:110:0x0105 }] */
    /* JADX WARN: Not initialized variable reg: 18, insn: 0x0185: MOVE (r5 I:??[OBJECT, ARRAY]) = (r18 I:??[OBJECT, ARRAY]), block:B:89:0x0185 */
    /* JADX WARN: Not initialized variable reg: 19, insn: 0x0187: MOVE (r3 I:??[int, float, boolean, short, byte, char, OBJECT, ARRAY]) = (r19 I:??[int, float, boolean, short, byte, char, OBJECT, ARRAY]), block:B:89:0x0185 */
    public int updateEmailsByAdnIndex(String[] strArr, int i, MtkAdnRecord mtkAdnRecord) throws Throwable {
        SparseArray sparseArray;
        ArrayList<MtkAdnRecord> arrayList;
        int i2 = this.mAdnFileSize;
        int i3 = (i - 1) / i2;
        int i4 = (i - 1) % i2;
        ArrayList<PbrRecord> arrayList2 = this.mPbrRecords;
        if (arrayList2 == null || arrayList2.size() == 0 || (sparseArray = this.mPbrRecords.get(i3).mFileIds) == null || sparseArray.size() == 0 || (arrayList = this.mPhoneBookRecords) == null || arrayList.isEmpty()) {
            return 0;
        }
        File file = (File) sparseArray.get(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP);
        if (file == null) {
            log("updateEmailsByAdnIndex: No email tag in pbr record 0");
            return 0;
        }
        String[] emails = mtkAdnRecord != null ? mtkAdnRecord.getEmails() : null;
        String str = (emails == null || emails.length == 0 || TextUtils.isEmpty(emails[0])) ? null : emails[0];
        int efid = file.getEfid();
        boolean z = file.getParentTag() == 169;
        file.getIndex();
        logi("updateEmailsByAdnIndex: pbrrecNum is " + i3 + " EF_EMAIL id is " + Integer.toHexString(efid).toUpperCase());
        if (!CsimPhbUtil.hasModemPhbEnhanceCapability(this.mFh)) {
            if (z && this.mIapFileList != null) {
                return updateType2Email(strArr, i, file);
            }
            log("updateEmailsByAdnIndex file: " + file);
            String str2 = (strArr == null || strArr.length <= 0) ? null : strArr[0];
            int i5 = this.mEmailRecordSize;
            if (i5 <= 0) {
                return -50;
            }
            byte[] bArrBuildEmailRecord = buildEmailRecord(str2, i, i5, z);
            if (bArrBuildEmailRecord == null) {
                return -40;
            }
            this.mFh.updateEFLinearFixed(efid, i4 + 1, bArrBuildEmailRecord, (String) null, obtainMessage(8));
            return 0;
        }
        Message messageObtainMessage = obtainMessage(8);
        Object obj = this.mLock;
        synchronized (obj) {
            try {
                try {
                    if (strArr != null) {
                        try {
                            if (strArr.length == 0 || TextUtils.isEmpty(strArr[0])) {
                                if (str == null) {
                                    return 0;
                                }
                                try {
                                    this.mCi.deleteUPBEntry(1, 1, i, messageObtainMessage);
                                    try {
                                        this.mLock.wait();
                                    } catch (InterruptedException e) {
                                        Rlog.e(LOG_TAG, "Interrupted Exception in updateEmailsByAdnIndex");
                                    }
                                    return 0;
                                } catch (Throwable th) {
                                    th = th;
                                }
                            } else if (strArr[0].equals(str)) {
                                try {
                                    return 0;
                                } catch (Throwable th2) {
                                    th = th2;
                                    obj = obj;
                                }
                            } else {
                                obj = obj;
                                try {
                                    this.mCi.editUPBEntry(1, 1, i, encodeToUcs2(strArr[0]), null, messageObtainMessage);
                                    this.mLock.wait();
                                    return 0;
                                } catch (Throwable th3) {
                                    th = th3;
                                }
                            }
                        } catch (Throwable th4) {
                            th = th4;
                            obj = obj;
                        }
                        throw th;
                    }
                    if (str == null) {
                        return 0;
                    }
                    this.mCi.deleteUPBEntry(1, 1, i, messageObtainMessage);
                    this.mLock.wait();
                    return 0;
                } catch (Throwable th5) {
                    th = th5;
                }
            } catch (Throwable th6) {
                th = th6;
            }
        }
    }

    public int updateSneByAdnIndex(String str, int i, MtkAdnRecord mtkAdnRecord) throws Throwable {
        logi("updateSneByAdnIndex begin, adnIndex " + i);
        int i2 = this.mAdnFileSize;
        int i3 = (i + (-1)) / i2;
        int i4 = (i + (-1)) % i2;
        ArrayList<PbrRecord> arrayList = this.mPbrRecords;
        if (arrayList == null || arrayList.size() == 0) {
            return -1;
        }
        Message messageObtainMessage = obtainMessage(11);
        SparseArray sparseArray = this.mPbrRecords.get(i3).mFileIds;
        if (sparseArray == null || sparseArray.get(195) == null) {
            log("updateSneByAdnIndex: No SNE tag in pbr file 0");
            return -1;
        }
        ArrayList<MtkAdnRecord> arrayList2 = this.mPhoneBookRecords;
        if (arrayList2 == null || arrayList2.isEmpty()) {
            return -1;
        }
        String sne = mtkAdnRecord != null ? mtkAdnRecord.getSne() : null;
        log("updateSneByAdnIndex: EF_SNE id is " + Integer.toHexString(((File) sparseArray.get(195)).getEfid()).toUpperCase());
        log("updateSneByAdnIndex: efIndex is 1");
        Object obj = this.mLock;
        synchronized (obj) {
            try {
                if (str != null) {
                    try {
                        if (str.length() != 0) {
                            if (str.equals(sne)) {
                                try {
                                    return 0;
                                } catch (Throwable th) {
                                    th = th;
                                    obj = obj;
                                }
                            } else {
                                obj = obj;
                                this.mCi.editUPBEntry(2, 1, i, encodeToUcs2(str), null, messageObtainMessage);
                            }
                            throw th;
                        }
                        try {
                            this.mLock.wait();
                        } catch (InterruptedException e) {
                            Rlog.e(LOG_TAG, "Interrupted Exception in updateSneByAdnIndex");
                        }
                        logi("updateSneByAdnIndex end, adnIndex " + i);
                        return this.mResult;
                    } catch (Throwable th2) {
                        th = th2;
                        obj = obj;
                    }
                }
                if (sne != null && sne.length() != 0) {
                    this.mCi.deleteUPBEntry(2, 1, i, messageObtainMessage);
                    this.mLock.wait();
                    logi("updateSneByAdnIndex end, adnIndex " + i);
                    return this.mResult;
                }
                return 0;
            } catch (Throwable th3) {
                th = th3;
            }
        }
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0120 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean updateUsimAas(int i, int i2, String str) throws Throwable {
        Object obj;
        logi("updateUsimAas index " + i + ",pbrIndex " + i2 + ",aasName " + str + ",mPbrNeedNotify " + this.mPbrNeedNotify);
        if (!loadAasFiles()) {
            return false;
        }
        ArrayList<String> arrayList = this.mAasForAnr;
        if (i <= 0 || i > arrayList.size()) {
            Rlog.e(LOG_TAG, "updateUsimAas not found aas index " + i);
            return false;
        }
        log("updateUsimAas old aas " + arrayList.get(i - 1));
        if (str == null || str.length() == 0) {
            return removeUsimAasById(i, i2);
        }
        int usimAasMaxNameLen = getUsimAasMaxNameLen();
        int length = str.length();
        log("updateUsimAas aas limit " + usimAasMaxNameLen);
        if (length > usimAasMaxNameLen) {
            return false;
        }
        log("updateUsimAas offset 0");
        int i3 = i + 0;
        String strEncodeToUcs2 = encodeToUcs2(str);
        Message messageObtainMessage = obtainMessage(10);
        Object obj2 = this.mAasLock;
        synchronized (obj2) {
            try {
                obj = obj2;
                try {
                    this.mCi.editUPBEntry(3, 0, i3, strEncodeToUcs2, null, messageObtainMessage);
                    try {
                        this.mAasLock.wait();
                    } catch (InterruptedException e) {
                        Rlog.e(LOG_TAG, "Interrupted Exception in updateUsimAas");
                    } catch (Throwable th) {
                        th = th;
                        while (true) {
                            throw th;
                        }
                    }
                    AsyncResult asyncResult = (AsyncResult) messageObtainMessage.obj;
                    if (asyncResult != null && asyncResult.exception != null) {
                        Rlog.e(LOG_TAG, "updateUsimAas exception " + asyncResult.exception);
                        return false;
                    }
                    ArrayList<String> arrayList2 = this.mAasForAnr;
                    if (arrayList2 == null) {
                        logi("updateUsimAas mAasForAnr is null");
                        return true;
                    }
                    arrayList2.set(i - 1, str);
                    logi("updateUsimAas update mAasForAnr done");
                    return true;
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Throwable th3) {
                th = th3;
                obj = obj2;
            }
        }
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0092 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized int updateUsimGroup(int i, String str) {
        int i2;
        logi("updateUsimGroup nGasId is " + i);
        synchronized (this.mGasLock) {
            try {
                this.mResult = -1;
                if (this.mGasForGrp != null && i <= this.mGasForGrp.size()) {
                    if (str != null) {
                        this.mCi.editUPBEntry(4, 0, i, encodeToUcs2(str), null, obtainMessage(13));
                        try {
                            this.mGasLock.wait();
                        } catch (InterruptedException e) {
                            Rlog.e(LOG_TAG, "Interrupted Exception in updateUsimGroup");
                        }
                    }
                    throw th;
                }
                Rlog.w(LOG_TAG, "updateUsimGroup fail ");
                if (this.mResult == 0) {
                    i2 = i;
                    UsimGroup usimGroup = this.mGasForGrp.get(i - 1);
                    if (usimGroup != null) {
                        log("updateUsimGroup index is " + usimGroup.getRecordIndex());
                        usimGroup.setAlphaTag(str);
                    } else {
                        Rlog.w(LOG_TAG, "updateUsimGroup the entry doesn't exist ");
                    }
                } else {
                    i2 = this.mResult;
                }
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        return i2;
    }

    public void updateUsimPhonebookRecordsList(int i, MtkAdnRecord mtkAdnRecord) {
        logi("updateUsimPhonebookRecordsList update the " + i + "th record.");
        if (i < this.mPhoneBookRecords.size()) {
            MtkAdnRecord mtkAdnRecord2 = this.mPhoneBookRecords.get(i);
            if (mtkAdnRecord2 != null && mtkAdnRecord2.getGrpIds() != null) {
                mtkAdnRecord.setGrpIds(mtkAdnRecord2.getGrpIds());
            }
            this.mPhoneBookRecords.set(i, mtkAdnRecord);
            this.mRefreshAdnInfo = true;
        }
    }
}

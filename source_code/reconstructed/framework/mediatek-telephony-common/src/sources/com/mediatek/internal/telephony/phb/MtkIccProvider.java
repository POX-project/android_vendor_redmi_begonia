package com.mediatek.internal.telephony.phb;

import android.content.ContentValues;
import android.content.Context;
import android.content.UriMatcher;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.database.MergeCursor;
import android.net.Uri;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.text.TextUtils;
import com.android.internal.telephony.IccInternalInterface;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import java.io.UnsupportedEncodingException;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkIccProvider implements IccInternalInterface {
    private static final int ADDRESS_SUPPORT_AAS = 8;
    private static final int ADDRESS_SUPPORT_SNE = 9;
    protected static final int ADN = 1;
    protected static final int ADN_ALL = 9;
    protected static final int ADN_SUB = 2;
    protected static final int FDN = 3;
    protected static final int FDN_SUB = 4;
    protected static final int SDN = 5;
    protected static final int SDN_SUB = 6;
    protected static final String STR_ANR = "anr";
    protected static final String STR_NUMBER = "number";
    protected static final String STR_PIN2 = "pin2";
    protected static final String STR_TAG = "tag";
    private static final String TAG = "MtkIccProvider";
    protected static final int UPB = 7;
    protected static final int UPB_SUB = 8;
    private static UriMatcher URL_MATCHER;
    private Context mContext;
    private static final boolean DBG = !SystemProperties.get("ro.build.type").equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    protected static final String STR_INDEX = "index";
    protected static final String STR_EMAILS = "emails";
    private static final String[] ADDRESS_BOOK_COLUMN_NAMES = {STR_INDEX, "name", "number", STR_EMAILS, "additionalNumber", "groupIds", "_id", "aas", "sne"};

    public MtkIccProvider(UriMatcher uriMatcher, Context context) {
        logi("MtkIccProvider URL_MATCHER " + uriMatcher);
        uriMatcher.addURI("icc", "pbr", 7);
        uriMatcher.addURI("icc", "pbr/subId/#", 8);
        URL_MATCHER = uriMatcher;
        this.mContext = context;
    }

    private int addIccRecordToEf(int i, String str, String str2, String[] strArr, String str3, int i2) throws RemoteException {
        if (DBG) {
            StringBuilder sb = new StringBuilder();
            sb.append("addIccRecordToEf: efType=0x");
            sb.append(Integer.toHexString(i).toUpperCase());
            sb.append(", name=");
            sb.append(getMaskString(str));
            sb.append(", number=");
            sb.append(getMaskString(str2));
            sb.append(", emails=");
            sb.append(strArr == null ? "null" : getMaskString(strArr[0]));
            sb.append(", subscription=");
            sb.append(i2);
            log(sb.toString());
        }
        int iUpdateAdnRecordsInEfBySearchWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateAdnRecordsInEfBySearchWithError = iccPhbService.updateAdnRecordsInEfBySearchWithError(i2, i, "", "", str, str2, str3);
            }
        } catch (RemoteException e) {
            if (DBG) {
                log(e.toString());
            }
        } catch (SecurityException e2) {
            if (DBG) {
                log(e2.toString());
            }
        }
        if (DBG) {
            log("addIccRecordToEf: " + iUpdateAdnRecordsInEfBySearchWithError);
        }
        return iUpdateAdnRecordsInEfBySearchWithError;
    }

    private int addUsimRecordToEf(int i, String str, String str2, String str3, String str4, String str5, int i2) {
        int iUpdateUsimPBRecordsInEfBySearchWithError;
        if (DBG) {
            log("addUSIMRecordToEf: efType=" + i + ", name=" + getMaskString(str) + ", number=" + getMaskString(str2) + ", anr =" + getMaskString(str3) + ", emails=" + getMaskString(str4) + ", subId=" + i2);
        }
        String[] strArr = (str4 == null || str4.equals("")) ? null : new String[]{str4};
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            iUpdateUsimPBRecordsInEfBySearchWithError = iccPhbService != null ? iccPhbService.updateUsimPBRecordsInEfBySearchWithError(i2, i, "", "", "", null, null, str, str2, str3, null, strArr) : 0;
        } catch (RemoteException e) {
            log(e.toString());
            iUpdateUsimPBRecordsInEfBySearchWithError = 0;
        } catch (SecurityException e2) {
            log(e2.toString());
            iUpdateUsimPBRecordsInEfBySearchWithError = 0;
        }
        log("addUsimRecordToEf: " + iUpdateUsimPBRecordsInEfBySearchWithError);
        return iUpdateUsimPBRecordsInEfBySearchWithError;
    }

    private int deleteIccRecordFromEf(int i, String str, String str2, String[] strArr, String str3, int i2) throws RemoteException {
        if (DBG) {
            log("deleteIccRecordFromEf: efType=0x" + Integer.toHexString(i).toUpperCase() + ", name=" + getMaskString(str) + ", number=" + getMaskString(str2) + ", pin2=" + getMaskString(str3) + ", subscription=" + i2);
        }
        int iUpdateAdnRecordsInEfBySearchWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateAdnRecordsInEfBySearchWithError = iccPhbService.updateAdnRecordsInEfBySearchWithError(i2, i, str, str2, "", "", str3);
            }
        } catch (RemoteException e) {
            if (DBG) {
                log(e.toString());
            }
        } catch (SecurityException e2) {
            if (DBG) {
                log(e2.toString());
            }
        }
        if (DBG) {
            log("deleteIccRecordFromEf: " + iUpdateAdnRecordsInEfBySearchWithError);
        }
        return iUpdateAdnRecordsInEfBySearchWithError;
    }

    private int deleteIccRecordFromEfByIndex(int i, int i2, String str, int i3) throws RemoteException {
        if (DBG) {
            log("deleteIccRecordFromEfByIndex: efType=" + i + ", index=" + i2 + ", pin2=" + getMaskString(str));
        }
        int iUpdateAdnRecordsInEfByIndexWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateAdnRecordsInEfByIndexWithError = iccPhbService.updateAdnRecordsInEfByIndexWithError(i3, i, "", "", i2, str);
            }
        } catch (RemoteException e) {
            log(e.toString());
        } catch (SecurityException e2) {
            log(e2.toString());
        }
        log("deleteIccRecordFromEfByIndex: " + iUpdateAdnRecordsInEfByIndexWithError);
        return iUpdateAdnRecordsInEfByIndexWithError;
    }

    private int deleteUsimRecordFromEf(int i, String str, String str2, String[] strArr, int i2) {
        int iUpdateUsimPBRecordsInEfBySearchWithError;
        if (DBG) {
            log("deleteUsimRecordFromEf: efType=" + i + ", name=" + getMaskString(str) + ", number=" + getMaskString(str2));
        }
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            iUpdateUsimPBRecordsInEfBySearchWithError = iccPhbService != null ? iccPhbService.updateUsimPBRecordsInEfBySearchWithError(i2, i, str, str2, "", null, null, "", "", "", null, null) : 0;
        } catch (RemoteException e) {
            log(e.toString());
            iUpdateUsimPBRecordsInEfBySearchWithError = 0;
        } catch (SecurityException e2) {
            log(e2.toString());
            iUpdateUsimPBRecordsInEfBySearchWithError = 0;
        }
        log("deleteUsimRecordFromEf: " + iUpdateUsimPBRecordsInEfBySearchWithError);
        return iUpdateUsimPBRecordsInEfBySearchWithError;
    }

    private int deleteUsimRecordFromEfByIndex(int i, int i2, int i3) throws RemoteException {
        if (DBG) {
            log("deleteUsimRecordFromEfByIndex: efType=" + i + ", index=" + i2);
        }
        int iUpdateUsimPBRecordsInEfByIndexWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateUsimPBRecordsInEfByIndexWithError = iccPhbService.updateUsimPBRecordsInEfByIndexWithError(i3, i, "", "", "", null, null, i2);
            }
        } catch (RemoteException e) {
            log(e.toString());
        } catch (SecurityException e2) {
            log(e2.toString());
        }
        log("deleteUsimRecordFromEfByIndex: " + iUpdateUsimPBRecordsInEfByIndexWithError);
        return iUpdateUsimPBRecordsInEfByIndexWithError;
    }

    private IMtkIccPhoneBook getIccPhbService() {
        return IMtkIccPhoneBook.Stub.asInterface(ServiceManager.getService("mtksimphonebook"));
    }

    private String getMaskString(String str) {
        if (str == null) {
            return "null";
        }
        if (str.length() <= 2) {
            return "xx";
        }
        return str.substring(0, str.length() >> 1) + "xxxxx";
    }

    private int getRequestSubId(Uri uri) {
        if (DBG) {
            log("getRequestSubId url: " + uri);
        }
        try {
            return Integer.parseInt(uri.getLastPathSegment());
        } catch (NumberFormatException e) {
            throw new IllegalArgumentException("Unknown URL " + uri);
        }
    }

    private Cursor loadAllSimContacts(int i) {
        int[] activeSubscriptionIdList = SubscriptionManager.from(this.mContext).getActiveSubscriptionIdList();
        Cursor[] cursorArr = new Cursor[activeSubscriptionIdList.length];
        int i2 = 0;
        int length = activeSubscriptionIdList.length;
        int i3 = 0;
        while (i3 < length) {
            int i4 = activeSubscriptionIdList[i3];
            cursorArr[i2] = loadFromEf(i, i4);
            Rlog.i(TAG, "loadAllSimContacts: subId=" + i4);
            i3++;
            i2++;
        }
        return new MergeCursor(cursorArr);
    }

    private MatrixCursor loadFromEf(int i, int i2) throws RemoteException {
        if (DBG) {
            log("loadFromEf: efType=0x" + Integer.toHexString(i).toUpperCase() + ", subscription=" + i2);
        }
        List<MtkAdnRecord> adnRecordsInEfForSubscriber = null;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                adnRecordsInEfForSubscriber = iccPhbService.getAdnRecordsInEfForSubscriber(i2, i);
            }
        } catch (RemoteException e) {
            if (DBG) {
                log(e.toString());
            }
        } catch (SecurityException e2) {
            if (DBG) {
                log(e2.toString());
            }
        }
        if (adnRecordsInEfForSubscriber == null) {
            Rlog.w(TAG, "Cannot load ADN records");
            return new MatrixCursor(ADDRESS_BOOK_COLUMN_NAMES);
        }
        int size = adnRecordsInEfForSubscriber.size();
        MatrixCursor matrixCursor = new MatrixCursor(ADDRESS_BOOK_COLUMN_NAMES, size);
        if (DBG) {
            log("adnRecords.size=" + size);
        }
        for (int i3 = 0; i3 < size; i3++) {
            loadRecord(adnRecordsInEfForSubscriber.get(i3), matrixCursor, i3);
        }
        logi("query success, size = " + size);
        return matrixCursor;
    }

    private void loadRecord(MtkAdnRecord mtkAdnRecord, MatrixCursor matrixCursor, int i) {
        int length = ADDRESS_BOOK_COLUMN_NAMES.length;
        if (mtkAdnRecord.isEmpty()) {
            return;
        }
        Object[] objArr = new Object[length];
        String alphaTag = mtkAdnRecord.getAlphaTag();
        String number = mtkAdnRecord.getNumber();
        String[] emails = mtkAdnRecord.getEmails();
        String grpIds = mtkAdnRecord.getGrpIds();
        String string = Integer.toString(mtkAdnRecord.getRecId());
        if (length >= 8) {
            objArr[7] = Integer.valueOf(mtkAdnRecord.getAasIndex());
        }
        if (length >= 9) {
            objArr[8] = mtkAdnRecord.getSne();
        }
        if (DBG) {
            log("loadRecord: record:" + mtkAdnRecord);
        }
        objArr[0] = string;
        objArr[1] = alphaTag;
        objArr[2] = number;
        if (SystemProperties.get("ro.vendor.mtk_kor_customization").equals("1") && alphaTag.length() >= 2 && alphaTag.charAt(0) == 65278) {
            String str = "";
            try {
                str = new String(alphaTag.substring(1).getBytes("utf-16be"), "KSC5601");
            } catch (UnsupportedEncodingException e) {
                if (DBG) {
                    log("Implausible UnsupportedEncodingException : " + e);
                }
            }
            int length2 = str.length();
            while (length2 > 0 && str.charAt(length2 - 1) == 63735) {
                length2--;
            }
            objArr[1] = str.substring(0, length2);
            if (DBG) {
                log("Decode ADN using KSC5601 : " + objArr[1]);
            }
        }
        if (emails != null) {
            StringBuilder sb = new StringBuilder();
            for (String str2 : emails) {
                sb.append(str2);
                sb.append(",");
            }
            objArr[3] = sb.toString();
        }
        objArr[4] = mtkAdnRecord.getAdditionalNumber();
        objArr[5] = grpIds;
        objArr[6] = Integer.valueOf(i);
        matrixCursor.addRow(objArr);
    }

    private void log(String str) {
        Rlog.d(TAG, str);
    }

    private void logi(String str) {
        Rlog.i(TAG, str);
    }

    private String normalizeValue(String str) {
        int length = str.length();
        if (length != 0) {
            return (str.charAt(0) == '\'' && str.charAt(length + (-1)) == '\'') ? str.substring(1, length - 1) : str;
        }
        if (DBG) {
            log("len of input String is 0");
        }
        return str;
    }

    private int updateIccRecordInEf(int i, String str, String str2, String str3, String str4, String str5, int i2) throws RemoteException {
        if (DBG) {
            log("updateIccRecordInEf: efType=0x" + Integer.toHexString(i).toUpperCase() + ", oldname=" + getMaskString(str) + ", oldnumber=" + getMaskString(str2) + ", newname=" + getMaskString(str3) + ", newnumber=" + getMaskString(str4) + ", subscription=" + i2);
        }
        int iUpdateAdnRecordsInEfBySearchWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateAdnRecordsInEfBySearchWithError = iccPhbService.updateAdnRecordsInEfBySearchWithError(i2, i, str, str2, str3, str4, str5);
            }
        } catch (RemoteException e) {
            if (DBG) {
                log(e.toString());
            }
        } catch (SecurityException e2) {
            if (DBG) {
                log(e2.toString());
            }
        }
        if (DBG) {
            log("updateIccRecordInEf: " + iUpdateAdnRecordsInEfBySearchWithError);
        }
        return iUpdateAdnRecordsInEfBySearchWithError;
    }

    private int updateIccRecordInEfByIndex(int i, int i2, String str, String str2, String str3, int i3) throws RemoteException {
        if (DBG) {
            log("updateIccRecordInEfByIndex: efType=" + i + ", index=" + i2 + ", newname=" + getMaskString(str) + ", newnumber=" + getMaskString(str2));
        }
        int iUpdateAdnRecordsInEfByIndexWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateAdnRecordsInEfByIndexWithError = iccPhbService.updateAdnRecordsInEfByIndexWithError(i3, i, str, str2, i2, str3);
            }
        } catch (RemoteException e) {
            log(e.toString());
        } catch (SecurityException e2) {
            log(e2.toString());
        }
        log("updateIccRecordInEfByIndex: " + iUpdateAdnRecordsInEfByIndexWithError);
        return iUpdateAdnRecordsInEfByIndexWithError;
    }

    private void updatePhbStorageInfo(int i, int i2) {
        boolean zUpdatePhbStorageInfo = false;
        try {
            Phone phone = PhoneFactory.getPhone(SubscriptionManager.getPhoneId(i2));
            if (phone != null) {
                if (CsimPhbUtil.hasModemPhbEnhanceCapability(phone.getIccFileHandler())) {
                    log("[updatePhbStorageInfo] is not a csim card");
                    zUpdatePhbStorageInfo = false;
                } else {
                    zUpdatePhbStorageInfo = CsimPhbUtil.updatePhbStorageInfo(i);
                }
            }
        } catch (SecurityException e) {
            log(e.toString());
        }
        log("[updatePhbStorageInfo] res = " + zUpdatePhbStorageInfo);
    }

    private int updateUsimPBRecordsByIndexWithError(int i, MtkAdnRecord mtkAdnRecord, int i2, int i3) throws RemoteException {
        if (DBG) {
            log("updateUsimPBRecordsByIndexWithError subId:" + i3 + ",index:" + i2 + ",newAdn:" + mtkAdnRecord);
        }
        int iUpdateUsimPBRecordsByIndexWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateUsimPBRecordsByIndexWithError = iccPhbService.updateUsimPBRecordsByIndexWithError(i3, i, mtkAdnRecord, i2);
            }
        } catch (RemoteException e) {
            log(e.toString());
        } catch (SecurityException e2) {
            log(e2.toString());
        }
        log("updateUsimPBRecordsByIndexWithError: " + iUpdateUsimPBRecordsByIndexWithError);
        return iUpdateUsimPBRecordsByIndexWithError;
    }

    private int updateUsimPBRecordsBySearchWithError(int i, MtkAdnRecord mtkAdnRecord, MtkAdnRecord mtkAdnRecord2, int i2) throws RemoteException {
        if (DBG) {
            log("updateUsimPBRecordsBySearchWithError subId:" + i2 + ",oldAdn:" + mtkAdnRecord + ",newAdn:" + mtkAdnRecord2);
        }
        int iUpdateUsimPBRecordsBySearchWithError = 0;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            if (iccPhbService != null) {
                iUpdateUsimPBRecordsBySearchWithError = iccPhbService.updateUsimPBRecordsBySearchWithError(i2, i, mtkAdnRecord, mtkAdnRecord2);
            }
        } catch (RemoteException e) {
            log(e.toString());
        } catch (SecurityException e2) {
            log(e2.toString());
        }
        log("updateUsimPBRecordsBySearchWithError: " + iUpdateUsimPBRecordsBySearchWithError);
        return iUpdateUsimPBRecordsBySearchWithError;
    }

    private int updateUsimRecordInEf(int i, String str, String str2, String str3, String str4, String str5, String str6, int i2) {
        int iUpdateUsimPBRecordsInEfBySearchWithError;
        if (DBG) {
            log("updateUsimRecordInEf: efType=" + i + ", oldname=" + getMaskString(str) + ", oldnumber=" + getMaskString(str2) + ", newname=" + getMaskString(str3) + ", newnumber=" + getMaskString(str4) + ", anr =" + getMaskString(str5) + ", emails=" + getMaskString(str6));
        }
        String[] strArr = str6 != null ? new String[]{str6} : null;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            iUpdateUsimPBRecordsInEfBySearchWithError = iccPhbService != null ? iccPhbService.updateUsimPBRecordsInEfBySearchWithError(i2, i, str, str2, "", null, null, str3, str4, str5, null, strArr) : 0;
        } catch (RemoteException e) {
            log(e.toString());
            iUpdateUsimPBRecordsInEfBySearchWithError = 0;
        } catch (SecurityException e2) {
            log(e2.toString());
            iUpdateUsimPBRecordsInEfBySearchWithError = 0;
        }
        log("updateUsimRecordInEf: " + iUpdateUsimPBRecordsInEfBySearchWithError);
        return iUpdateUsimPBRecordsInEfBySearchWithError;
    }

    private int updateUsimRecordInEfByIndex(int i, int i2, String str, String str2, String str3, String str4, int i3) {
        int iUpdateUsimPBRecordsInEfByIndexWithError;
        if (DBG) {
            log("updateUsimRecordInEfByIndex: efType=" + i + ", Index=" + i2 + ", newname=" + getMaskString(str) + ", newnumber=" + getMaskString(str2) + ", anr =" + getMaskString(str3) + ", emails=" + getMaskString(str4));
        }
        String[] strArr = str4 != null ? new String[]{str4} : null;
        try {
            IMtkIccPhoneBook iccPhbService = getIccPhbService();
            iUpdateUsimPBRecordsInEfByIndexWithError = iccPhbService != null ? iccPhbService.updateUsimPBRecordsInEfByIndexWithError(i3, i, str, str2, str3, null, strArr, i2) : 0;
        } catch (RemoteException e) {
            log(e.toString());
            iUpdateUsimPBRecordsInEfByIndexWithError = 0;
        } catch (SecurityException e2) {
            log(e2.toString());
            iUpdateUsimPBRecordsInEfByIndexWithError = 0;
        }
        log("updateUsimRecordInEfByIndex: " + iUpdateUsimPBRecordsInEfByIndexWithError);
        return iUpdateUsimPBRecordsInEfByIndexWithError;
    }

    public int delete(Uri uri, String str, String[] strArr) throws RemoteException {
        int i;
        int defaultSubscriptionId;
        int iDeleteUsimRecordFromEf;
        int iDeleteUsimRecordFromEfByIndex;
        logi("delete " + uri);
        int iMatch = URL_MATCHER.match(uri);
        if (iMatch == 1) {
            i = 28474;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else if (iMatch == 2) {
            i = 28474;
            defaultSubscriptionId = getRequestSubId(uri);
        } else if (iMatch == 3) {
            i = 28475;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else if (iMatch == 4) {
            i = 28475;
            defaultSubscriptionId = getRequestSubId(uri);
        } else if (iMatch == 7) {
            i = 20272;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else {
            if (iMatch != 8) {
                throw new UnsupportedOperationException("Cannot insert into URL: " + uri);
            }
            i = 20272;
            defaultSubscriptionId = getRequestSubId(uri);
        }
        String[] strArrSplit = str.split(" AND ");
        String strNormalizeValue = "";
        String[] strArr2 = null;
        String strNormalizeValue2 = "";
        int length = strArrSplit.length;
        String strNormalizeValue3 = null;
        int i2 = -1;
        while (true) {
            length--;
            if (length < 0) {
                break;
            }
            String str2 = strArrSplit[length];
            int iIndexOf = str2.indexOf(61);
            if (iIndexOf == -1) {
                Rlog.e(TAG, "resolve: bad whereClause parameter: " + str2);
            } else {
                String strTrim = str2.substring(0, iIndexOf).trim();
                String strTrim2 = str2.substring(iIndexOf + 1).trim();
                if (STR_INDEX.equals(strTrim)) {
                    i2 = Integer.parseInt(strTrim2);
                } else if (STR_TAG.equals(strTrim)) {
                    strNormalizeValue2 = normalizeValue(strTrim2);
                } else if ("number".equals(strTrim)) {
                    strNormalizeValue = normalizeValue(strTrim2);
                } else if (STR_EMAILS.equals(strTrim)) {
                    strArr2 = null;
                } else if (STR_PIN2.equals(strTrim)) {
                    strNormalizeValue3 = normalizeValue(strTrim2);
                }
            }
        }
        String str3 = "delete result = ";
        if (i2 > 0) {
            logi("delete index is " + i2);
            if (7 == iMatch || 8 == iMatch) {
                logi("deleteUsimRecordFromEfByIndex ");
                iDeleteUsimRecordFromEfByIndex = deleteUsimRecordFromEfByIndex(i, i2, defaultSubscriptionId);
                if (iDeleteUsimRecordFromEfByIndex > 0) {
                    updatePhbStorageInfo(-1, defaultSubscriptionId);
                }
            } else {
                logi("deleteIccRecordFromEfByIndex ");
                iDeleteUsimRecordFromEfByIndex = deleteIccRecordFromEfByIndex(i, i2, strNormalizeValue3, defaultSubscriptionId);
            }
            logi("delete result = " + iDeleteUsimRecordFromEfByIndex);
            return iDeleteUsimRecordFromEfByIndex;
        }
        if (i == 28475 && TextUtils.isEmpty(strNormalizeValue3)) {
            return -5;
        }
        if (strNormalizeValue2.length() == 0 && strNormalizeValue.length() == 0) {
            return 0;
        }
        if (7 == iMatch || 8 == iMatch) {
            if (ADDRESS_BOOK_COLUMN_NAMES.length >= 8) {
                logi("updateUsimPBRecordsBySearchWithError ");
                iDeleteUsimRecordFromEf = updateUsimPBRecordsBySearchWithError(i, new MtkAdnRecord(strNormalizeValue2, strNormalizeValue, ""), new MtkAdnRecord("", "", ""), defaultSubscriptionId);
            } else {
                logi("deleteUsimRecordFromEf ");
                iDeleteUsimRecordFromEf = deleteUsimRecordFromEf(i, strNormalizeValue2, strNormalizeValue, strArr2, defaultSubscriptionId);
            }
            if (iDeleteUsimRecordFromEf > 0) {
                updatePhbStorageInfo(-1, defaultSubscriptionId);
            }
        } else {
            logi("deleteIccRecordFromEf ");
            str3 = "delete result = ";
            iDeleteUsimRecordFromEf = deleteIccRecordFromEf(i, strNormalizeValue2, strNormalizeValue, strArr2, strNormalizeValue3, defaultSubscriptionId);
        }
        logi(str3 + iDeleteUsimRecordFromEf);
        return iDeleteUsimRecordFromEf;
    }

    public Uri insert(Uri uri, ContentValues contentValues) throws RemoteException {
        String asString;
        int i;
        int defaultSubscriptionId;
        int i2;
        int iAddUsimRecordToEf;
        int i3;
        logi("insert " + uri);
        int iMatch = URL_MATCHER.match(uri);
        if (iMatch == 1) {
            asString = null;
            i = 28474;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else if (iMatch == 2) {
            asString = null;
            i = 28474;
            defaultSubscriptionId = getRequestSubId(uri);
        } else if (iMatch == 3) {
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
            asString = contentValues.getAsString(STR_PIN2);
            i = 28475;
        } else if (iMatch == 4) {
            defaultSubscriptionId = getRequestSubId(uri);
            asString = contentValues.getAsString(STR_PIN2);
            i = 28475;
        } else if (iMatch == 7) {
            asString = null;
            i = 20272;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else {
            if (iMatch != 8) {
                throw new UnsupportedOperationException("Cannot insert into URL: " + uri);
            }
            asString = null;
            i = 20272;
            defaultSubscriptionId = getRequestSubId(uri);
        }
        String asString2 = contentValues.getAsString(STR_TAG);
        String asString3 = contentValues.getAsString("number");
        if (7 == iMatch || 8 == iMatch) {
            String asString4 = contentValues.getAsString("gas");
            String asString5 = contentValues.getAsString(STR_ANR);
            String asString6 = contentValues.getAsString(STR_EMAILS);
            if (ADDRESS_BOOK_COLUMN_NAMES.length >= 8) {
                Integer asInteger = contentValues.getAsInteger("aas");
                String str = asString3 == null ? "" : asString3;
                String str2 = asString2 == null ? "" : asString2;
                MtkAdnRecord mtkAdnRecord = new MtkAdnRecord(i, 0, str2, str);
                mtkAdnRecord.setAnr(asString5);
                if (contentValues.containsKey("anr2")) {
                    String asString7 = contentValues.getAsString("anr2");
                    if (DBG) {
                        log("insert anr2: " + getMaskString(asString7));
                    }
                    mtkAdnRecord.setAnr(asString7, 1);
                }
                if (contentValues.containsKey("anr3")) {
                    String asString8 = contentValues.getAsString("anr3");
                    if (DBG) {
                        log("insert anr3: " + getMaskString(asString8));
                    }
                    mtkAdnRecord.setAnr(asString8, 2);
                }
                mtkAdnRecord.setGrpIds(asString4);
                String[] strArr = null;
                if (asString6 != null && !asString6.equals("")) {
                    strArr = new String[]{asString6};
                }
                mtkAdnRecord.setEmails(strArr);
                if (asInteger != null) {
                    mtkAdnRecord.setAasIndex(asInteger.intValue());
                }
                if (ADDRESS_BOOK_COLUMN_NAMES.length >= 9) {
                    mtkAdnRecord.setSne(contentValues.getAsString("sne"));
                }
                logi("updateUsimPBRecordsBySearchWithError ");
                i3 = defaultSubscriptionId;
                iAddUsimRecordToEf = updateUsimPBRecordsBySearchWithError(i, new MtkAdnRecord("", "", ""), mtkAdnRecord, i3);
                asString3 = str;
                asString2 = str2;
                i2 = 2;
            } else {
                i3 = defaultSubscriptionId;
                logi("addUsimRecordToEf ");
                i2 = 2;
                iAddUsimRecordToEf = addUsimRecordToEf(i, asString2, asString3, asString5, asString6, asString4, i3);
            }
            if (iAddUsimRecordToEf > 0) {
                updatePhbStorageInfo(1, i3);
            }
        } else {
            String str3 = asString3 == null ? "" : asString3;
            String str4 = asString2 == null ? "" : asString2;
            logi("addIccRecordToEf:" + getMaskString(str3) + ",tag:" + getMaskString(str4));
            iAddUsimRecordToEf = addIccRecordToEf(i, str4, str3, null, asString, defaultSubscriptionId);
            i2 = 2;
        }
        StringBuilder sb = new StringBuilder("content://icc/");
        if (iAddUsimRecordToEf <= 0) {
            sb.append("error/");
            sb.append(iAddUsimRecordToEf);
        } else {
            if (iMatch == 1) {
                sb.append("adn/");
            } else if (iMatch == i2) {
                sb.append("adn/subId/");
            } else if (iMatch == 3) {
                sb.append("fdn/");
            } else if (iMatch == 4) {
                sb.append("fdn/subId/");
            } else if (iMatch == 7) {
                sb.append("pbr/");
            } else {
                if (iMatch != 8) {
                    throw new UnsupportedOperationException("Cannot insert into URL: " + uri);
                }
                sb.append("pbr/subId/");
            }
            sb.append(iAddUsimRecordToEf);
        }
        Uri uri2 = Uri.parse(sb.toString());
        logi(uri2.toString());
        return uri2;
    }

    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        logi("query " + uri);
        switch (URL_MATCHER.match(uri)) {
            case 1:
                return loadFromEf(28474, SubscriptionManager.getDefaultSubscriptionId());
            case 2:
                return loadFromEf(28474, getRequestSubId(uri));
            case 3:
                return loadFromEf(28475, SubscriptionManager.getDefaultSubscriptionId());
            case 4:
                return loadFromEf(28475, getRequestSubId(uri));
            case 5:
                return loadFromEf(28489, SubscriptionManager.getDefaultSubscriptionId());
            case 6:
                return loadFromEf(28489, getRequestSubId(uri));
            case 7:
                return loadFromEf(20272, SubscriptionManager.getDefaultSubscriptionId());
            case 8:
                return loadFromEf(20272, getRequestSubId(uri));
            case 9:
                return loadAllSimContacts(28474);
            default:
                throw new IllegalArgumentException("Unknown URL " + uri);
        }
    }

    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) throws RemoteException {
        String asString;
        int i;
        int defaultSubscriptionId;
        int iUpdateUsimRecordInEf;
        String[] strArr2;
        String str2;
        logi("update " + uri);
        int iMatch = URL_MATCHER.match(uri);
        if (iMatch == 1) {
            asString = null;
            i = 28474;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else if (iMatch == 2) {
            asString = null;
            i = 28474;
            defaultSubscriptionId = getRequestSubId(uri);
        } else if (iMatch == 3) {
            int defaultSubscriptionId2 = SubscriptionManager.getDefaultSubscriptionId();
            asString = contentValues.getAsString(STR_PIN2);
            i = 28475;
            defaultSubscriptionId = defaultSubscriptionId2;
        } else if (iMatch == 4) {
            int requestSubId = getRequestSubId(uri);
            asString = contentValues.getAsString(STR_PIN2);
            i = 28475;
            defaultSubscriptionId = requestSubId;
        } else if (iMatch == 7) {
            asString = null;
            i = 20272;
            defaultSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        } else {
            if (iMatch != 8) {
                throw new IllegalArgumentException("Unknown URL " + iMatch);
            }
            asString = null;
            i = 20272;
            defaultSubscriptionId = getRequestSubId(uri);
        }
        String asString2 = contentValues.getAsString(STR_TAG);
        String asString3 = contentValues.getAsString("number");
        String asString4 = contentValues.getAsString("newTag");
        String asString5 = contentValues.getAsString("newNumber");
        Integer asInteger = contentValues.getAsInteger(STR_INDEX);
        int iIntValue = asInteger != null ? asInteger.intValue() : 0;
        logi("update: index=" + iIntValue);
        if (7 == iMatch || 8 == iMatch) {
            String asString6 = contentValues.getAsString("newAnr");
            String asString7 = contentValues.getAsString("newEmails");
            Integer asInteger2 = contentValues.getAsInteger("aas");
            String asString8 = contentValues.getAsString("sne");
            String str3 = asString5 == null ? "" : asString5;
            String str4 = asString4 == null ? "" : asString4;
            MtkAdnRecord mtkAdnRecord = new MtkAdnRecord(i, 0, str4, str3);
            mtkAdnRecord.setAnr(asString6);
            if (contentValues.containsKey("newAnr2")) {
                String asString9 = contentValues.getAsString("newAnr2");
                if (DBG) {
                    log("update newAnr2: " + asString9);
                }
                mtkAdnRecord.setAnr(asString9, 1);
            } else {
                str4 = str4;
            }
            if (contentValues.containsKey("newAnr3")) {
                String asString10 = contentValues.getAsString("newAnr3");
                if (DBG) {
                    log("update newAnr3: " + asString10);
                }
                mtkAdnRecord.setAnr(asString10, 2);
            }
            String[] strArr3 = (asString7 == null || asString7.equals("")) ? null : new String[]{asString7};
            mtkAdnRecord.setEmails(strArr3);
            if (asInteger2 != null) {
                mtkAdnRecord.setAasIndex(asInteger2.intValue());
            }
            if (asString8 != null) {
                mtkAdnRecord.setSne(asString8);
            }
            if (iIntValue <= 0) {
                String str5 = str3;
                strArr2 = strArr3;
                str2 = str4;
                if (ADDRESS_BOOK_COLUMN_NAMES.length >= 8) {
                    logi("updateUsimPBRecordsBySearchWithError");
                    iUpdateUsimRecordInEf = updateUsimPBRecordsBySearchWithError(i, new MtkAdnRecord(asString2, asString3, ""), mtkAdnRecord, defaultSubscriptionId);
                } else {
                    logi("updateUsimRecordInEf");
                    iUpdateUsimRecordInEf = updateUsimRecordInEf(i, asString2, asString3, str2, str5, asString6, asString7, defaultSubscriptionId);
                }
            } else if (ADDRESS_BOOK_COLUMN_NAMES.length >= 8) {
                logi("updateUsimPBRecordsByIndexWithError");
                iUpdateUsimRecordInEf = updateUsimPBRecordsByIndexWithError(i, mtkAdnRecord, iIntValue, defaultSubscriptionId);
                strArr2 = strArr3;
                str2 = str4;
            } else {
                logi("updateUsimRecordInEfByIndex");
                str2 = str4;
                strArr2 = strArr3;
                iUpdateUsimRecordInEf = updateUsimRecordInEfByIndex(i, iIntValue, str2, str3, asString6, asString7, defaultSubscriptionId);
            }
        } else if (iIntValue > 0) {
            logi("updateIccRecordInEfByIndex");
            iUpdateUsimRecordInEf = updateIccRecordInEfByIndex(i, iIntValue, asString4, asString5, asString, defaultSubscriptionId);
        } else {
            logi("updateIccRecordInEf");
            iUpdateUsimRecordInEf = updateIccRecordInEf(i, asString2, asString3, asString4, asString5, asString, defaultSubscriptionId);
        }
        logi("update result = " + iUpdateUsimRecordInEf);
        return iUpdateUsimRecordInEf;
    }
}

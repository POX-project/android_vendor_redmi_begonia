package mediatek.telephony;

import android.app.ActivityThread;
import android.app.PendingIntent;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.SmsManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.ArrayMap;
import com.android.internal.telephony.ISms;
import com.android.internal.telephony.SmsRawData;
import com.mediatek.internal.telephony.IMtkSms;
import com.mediatek.internal.telephony.MtkIccSmsStorageStatus;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class MtkSmsManager {
    public static final byte ERROR_CODE_GENERIC_ERROR = 1;
    public static final byte ERROR_CODE_NO_ERROR = 0;
    public static final byte ERROR_CODE_NO_SUPPORT_SC_ADDR = 2;
    public static final String EXTRA_PARAMS_ENCODING_TYPE = "encoding_type";
    public static final String EXTRA_PARAMS_VALIDITY_PERIOD = "validity_period";
    public static final String GET_SC_ADDRESS_KEY_ADDRESS = "scAddress";
    public static final String GET_SC_ADDRESS_KEY_RESULT = "errorCode";
    public static final int RESULT_ERROR_INVALID_ADDRESS = 8;
    public static final int RESULT_ERROR_SIM_MEM_FULL = 7;
    public static final int RESULT_ERROR_SUCCESS = 0;
    private static final int SMS_PICK = 2;
    private static final String TAG = "MtkSmsManager";
    public static final int VALIDITY_PERIOD_MAX_DURATION = 255;
    public static final int VALIDITY_PERIOD_NO_DURATION = -1;
    public static final int VALIDITY_PERIOD_ONE_DAY = 167;
    public static final int VALIDITY_PERIOD_ONE_HOUR = 11;
    public static final int VALIDITY_PERIOD_SIX_HOURS = 71;
    public static final int VALIDITY_PERIOD_TWELVE_HOURS = 143;
    private int mSubId;
    private static final int DEFAULT_SUBSCRIPTION_ID = -1002;
    private static final MtkSmsManager sInstance = new MtkSmsManager(DEFAULT_SUBSCRIPTION_ID);
    private static final Object sLockObject = new Object();
    private static final Map<Integer, MtkSmsManager> sSubInstances = new ArrayMap();
    private static String DIALOG_TYPE_KEY = "dialog_type";

    private MtkSmsManager(int i) {
        this.mSubId = i;
    }

    public static boolean checkSimPickActivityNeeded(boolean z) {
        return false;
    }

    private static MtkSmsMessage createFromEfRecordByMode(int i, int i2, byte[] bArr, int i3) {
        MtkSmsMessage mtkSmsMessageCreateFromEfRecord = i3 != 2 ? MtkSmsMessage.createFromEfRecord(i2, bArr, "3gpp") : null;
        if (mtkSmsMessageCreateFromEfRecord != null) {
            mtkSmsMessageCreateFromEfRecord.setSubId(i);
        }
        return mtkSmsMessageCreateFromEfRecord;
    }

    private ArrayList<MtkSmsMessage> createMessageListFromRawRecords(List<SmsRawData> list) {
        ArrayList<MtkSmsMessage> arrayList = new ArrayList<>();
        Rlog.d(TAG, "createMessageListFromRawRecords");
        if (list != null) {
            int size = list.size();
            for (int i = 0; i < size; i++) {
                SmsRawData smsRawData = list.get(i);
                if (smsRawData != null) {
                    String str = 2 == TelephonyManager.from(ActivityThread.currentApplication().getApplicationContext()).getCurrentPhoneType(this.mSubId) ? "3gpp2" : "3gpp";
                    Rlog.d(TAG, "phoneType: " + str);
                    MtkSmsMessage mtkSmsMessageCreateFromEfRecord = MtkSmsMessage.createFromEfRecord(i + 1, smsRawData.getBytes(), str);
                    if (mtkSmsMessageCreateFromEfRecord != null) {
                        arrayList.add(mtkSmsMessageCreateFromEfRecord);
                    }
                }
            }
            Rlog.d(TAG, "actual sms count is " + size);
        } else {
            Rlog.d(TAG, "fail to parse SIM sms, records is null");
        }
        return arrayList;
    }

    private static ArrayList<MtkSmsMessage> createMessageListFromRawRecordsByMode(int i, List<SmsRawData> list, int i2) {
        MtkSmsMessage mtkSmsMessageCreateFromEfRecordByMode;
        Rlog.d(TAG, "createMessageListFromRawRecordsByMode");
        ArrayList<MtkSmsMessage> arrayList = null;
        if (list != null) {
            int size = list.size();
            arrayList = new ArrayList<>();
            for (int i3 = 0; i3 < size; i3++) {
                SmsRawData smsRawData = list.get(i3);
                if (smsRawData != null && (mtkSmsMessageCreateFromEfRecordByMode = createFromEfRecordByMode(i, i3 + 1, smsRawData.getBytes(), i2)) != null) {
                    arrayList.add(mtkSmsMessageCreateFromEfRecordByMode);
                }
            }
            Rlog.d(TAG, "actual sms count is " + arrayList.size());
        } else {
            Rlog.d(TAG, "fail to parse SIM sms, records is null");
        }
        return arrayList;
    }

    public static MtkSmsManager getDefault() {
        return sInstance;
    }

    private static IMtkSms getIMtkSmsService() {
        return IMtkSms.Stub.asInterface(ServiceManager.getService("imtksms"));
    }

    private static IMtkSms getIMtkSmsServiceOrThrow() {
        IMtkSms iMtkSmsService = getIMtkSmsService();
        if (iMtkSmsService != null) {
            return iMtkSmsService;
        }
        throw new UnsupportedOperationException("SmsEx is not supported");
    }

    private static ISms getISmsService() {
        return ISms.Stub.asInterface(ServiceManager.getService("isms"));
    }

    private static ISms getISmsServiceOrThrow() {
        ISms iSmsService = getISmsService();
        if (iSmsService != null) {
            return iSmsService;
        }
        throw new UnsupportedOperationException("Sms is not supported");
    }

    public static MtkSmsManager getSmsManagerForSubscriptionId(int i) {
        MtkSmsManager mtkSmsManager;
        synchronized (sLockObject) {
            mtkSmsManager = sSubInstances.get(Integer.valueOf(i));
            if (mtkSmsManager == null) {
                mtkSmsManager = new MtkSmsManager(i);
                sSubInstances.put(Integer.valueOf(i), mtkSmsManager);
            }
        }
        return mtkSmsManager;
    }

    private static boolean isValidParameters(String str, String str2, PendingIntent pendingIntent) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        arrayList.add(pendingIntent);
        arrayList2.add(str2);
        return isValidParameters(str, (ArrayList<String>) arrayList2, (ArrayList<PendingIntent>) arrayList);
    }

    private static boolean isValidParameters(String str, ArrayList<String> arrayList, ArrayList<PendingIntent> arrayList2) {
        if (arrayList == null || arrayList.size() == 0) {
            return true;
        }
        if (isValidSmsDestinationAddress(str)) {
            if (TextUtils.isEmpty(str)) {
                throw new IllegalArgumentException("Invalid destinationAddress");
            }
            if (arrayList == null || arrayList.size() < 1) {
                throw new IllegalArgumentException("Invalid message body");
            }
            return true;
        }
        for (int i = 0; i < arrayList2.size(); i++) {
            PendingIntent pendingIntent = arrayList2.get(i);
            if (pendingIntent != null) {
                try {
                    pendingIntent.send(1);
                } catch (PendingIntent.CanceledException e) {
                }
            }
        }
        Rlog.d(TAG, "Invalid destinationAddress");
        return false;
    }

    private static boolean isValidSmsDestinationAddress(String str) {
        String strExtractNetworkPortion = PhoneNumberUtils.extractNetworkPortion(str);
        if (strExtractNetworkPortion == null) {
            return true;
        }
        return true ^ strExtractNetworkPortion.isEmpty();
    }

    private void sendTextMessageInternal(String str, String str2, String str3, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z, String str4, long j) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        try {
            getISmsService().sendTextForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str4, str, str2, str3, pendingIntent, pendingIntent2, z, j);
        } catch (RemoteException e) {
            Rlog.d(TAG, "sendTextMessage, RemoteException!");
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public boolean activateCellBroadcastSms(boolean z) {
        boolean z2;
        String str = "activateCellBroadcastSms activate : " + z + ", sub = " + getSubscriptionId();
        String str2 = TAG;
        Rlog.d(TAG, str);
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                boolean zActivateCellBroadcastSmsForSubscriber = iMtkSmsService.activateCellBroadcastSmsForSubscriber(getSubscriptionId(), z);
                z2 = zActivateCellBroadcastSmsForSubscriber;
                str2 = zActivateCellBroadcastSmsForSubscriber;
            } else {
                Rlog.d(TAG, "fail to get sms service, maybe phone is initializing");
                z2 = false;
                str2 = str2;
            }
            return z2;
        } catch (RemoteException e) {
            Rlog.d(str2, "fail to activate CB");
            return false;
        }
    }

    public int copySmsToIcc(byte[] bArr, byte[] bArr2, int i) throws RemoteException {
        int[] index;
        Rlog.d(TAG, "copySmsToIcc");
        MtkSimSmsInsertStatus mtkSimSmsInsertStatusInsertRawMessageToIccCard = insertRawMessageToIccCard(i, bArr2, bArr);
        if (mtkSimSmsInsertStatusInsertRawMessageToIccCard == null || (index = mtkSimSmsInsertStatusInsertRawMessageToIccCard.getIndex()) == null || index.length <= 0) {
            return -1;
        }
        return index[0];
    }

    public int copyTextMessageToIccCard(String str, String str2, List<String> list, int i, long j) {
        Rlog.d(TAG, "copyTextMessageToIccCard");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.copyTextMessageToIccCardForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, list, i, j);
            }
            return 1;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException!");
            return 1;
        }
    }

    public ArrayList<String> divideMessage(String str) {
        if (str != null) {
            return MtkSmsMessage.fragmentText(str);
        }
        throw new IllegalArgumentException("text is null");
    }

    public ArrayList<String> divideMessage(String str, int i) {
        Rlog.d(TAG, "divideMessage, encoding = " + i);
        ArrayList<String> arrayListFragmentText = MtkSmsMessage.fragmentText(str, i);
        Rlog.d(TAG, "divideMessage: size = " + arrayListFragmentText.size());
        return arrayListFragmentText;
    }

    public ArrayList<MtkSmsMessage> getAllMessagesFromIcc() {
        Rlog.d(TAG, "getAllMessagesFromIcc");
        List<SmsRawData> allMessagesFromIccEfForSubscriber = null;
        try {
            ISms iSmsService = getISmsService();
            if (iSmsService != null) {
                allMessagesFromIccEfForSubscriber = iSmsService.getAllMessagesFromIccEfForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName());
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "getAllMessagesFromIcc, RemoteException!");
        }
        return createMessageListFromRawRecords(allMessagesFromIccEfForSubscriber);
    }

    public ArrayList<MtkSmsMessage> getAllMessagesFromIccEfByMode(int i) throws RemoteException {
        Rlog.d(TAG, "getAllMessagesFromIcc, mode=" + i);
        List<SmsRawData> allMessagesFromIccEfByModeForSubscriber = null;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                allMessagesFromIccEfByModeForSubscriber = iMtkSmsService.getAllMessagesFromIccEfByModeForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), i);
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException!");
        }
        int size = allMessagesFromIccEfByModeForSubscriber != null ? allMessagesFromIccEfByModeForSubscriber.size() : 0;
        for (int i2 = 0; i2 < size; i2++) {
            SmsRawData smsRawData = allMessagesFromIccEfByModeForSubscriber.get(i2);
            if (smsRawData != null) {
                byte[] bytes = smsRawData.getBytes();
                int i3 = i2 + 1;
                if ((bytes[0] & 255) == 3) {
                    Rlog.d(TAG, "index[" + i3 + "] is STATUS_ON_ICC_READ");
                    if (SmsManager.getSmsManagerForSubscriptionId(this.mSubId).updateMessageOnIcc(i3, 1, bytes)) {
                        Rlog.d(TAG, "update index[" + i3 + "] to STATUS_ON_ICC_READ");
                    } else {
                        Rlog.d(TAG, "fail to update message status");
                    }
                }
            }
        }
        return createMessageListFromRawRecordsByMode(getSubscriptionId(), allMessagesFromIccEfByModeForSubscriber, i);
    }

    public String getCellBroadcastLang() {
        String str = "getCellBroadcastLang, subId=" + getSubscriptionId();
        String cellBroadcastLangsForSubscriber = TAG;
        Rlog.d(TAG, str);
        String str2 = "";
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                cellBroadcastLangsForSubscriber = iMtkSmsService.getCellBroadcastLangsForSubscriber(getSubscriptionId());
                str2 = cellBroadcastLangsForSubscriber;
            } else {
                Rlog.d(TAG, "fail to get sms service");
            }
        } catch (RemoteException e) {
            Rlog.d(cellBroadcastLangsForSubscriber, "RemoteException");
        }
        return str2;
    }

    public String getCellBroadcastRanges() {
        String str = "getCellBroadcastRanges, subId=" + getSubscriptionId();
        String cellBroadcastRangesForSubscriber = TAG;
        Rlog.d(TAG, str);
        String str2 = "";
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                cellBroadcastRangesForSubscriber = iMtkSmsService.getCellBroadcastRangesForSubscriber(getSubscriptionId());
                str2 = cellBroadcastRangesForSubscriber;
            } else {
                Rlog.d(TAG, "fail to get sms service");
            }
        } catch (RemoteException e) {
            Rlog.d(cellBroadcastRangesForSubscriber, "RemoteException");
        }
        return str2;
    }

    public String getImsSmsFormat() {
        String imsSmsFormatForSubscriber = "unknown";
        try {
            ISms iSmsService = getISmsService();
            if (iSmsService == null) {
                return "unknown";
            }
            imsSmsFormatForSubscriber = iSmsService.getImsSmsFormatForSubscriber(getSubscriptionId());
            Rlog.d(TAG, "getImsSmsFormat " + imsSmsFormatForSubscriber);
            return imsSmsFormatForSubscriber;
        } catch (RemoteException e) {
            return imsSmsFormatForSubscriber;
        }
    }

    public String getScAddress() {
        Rlog.d(TAG, "getScAddress");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.getScAddressForSubscriber(getSubscriptionId());
            }
            return null;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            return null;
        }
    }

    public Bundle getScAddressWithErroCode() {
        Rlog.d(TAG, "getScAddressWithErroCode");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.getScAddressWithErrorCodeForSubscriber(getSubscriptionId());
            }
            return null;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            return null;
        }
    }

    public MtkSmsParameters getSmsParameters() {
        Rlog.d(TAG, "getSmsParameters");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.getSmsParametersForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName());
            }
            return null;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            Rlog.d(TAG, "fail to get MtkSmsParameters");
            return null;
        }
    }

    public MtkIccSmsStorageStatus getSmsSimMemoryStatus() {
        Rlog.d(TAG, "getSmsSimMemoryStatus");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.getSmsSimMemoryStatusForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName());
            }
            return null;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            return null;
        }
    }

    public int getSubscriptionId() {
        int defaultSmsSubscriptionId = this.mSubId;
        if (defaultSmsSubscriptionId == DEFAULT_SUBSCRIPTION_ID) {
            defaultSmsSubscriptionId = SmsManager.getDefaultSmsSubscriptionId();
        }
        Context applicationContext = ActivityThread.currentApplication().getApplicationContext();
        try {
            ISms iSmsService = getISmsService();
            if (iSmsService != null) {
                iSmsService.isSmsSimPickActivityNeeded(defaultSmsSubscriptionId);
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "Exception in getSubscriptionId");
        }
        if (0 != 0) {
            Rlog.d(TAG, "getSubscriptionId isSmsSimPickActivityNeeded is true");
            Intent intent = new Intent();
            intent.setClassName("com.android.settings", "com.android.settings.sim.SimDialogActivity");
            intent.addFlags(268435456);
            intent.putExtra(DIALOG_TYPE_KEY, 2);
            try {
                applicationContext.startActivity(intent);
            } catch (ActivityNotFoundException e2) {
                Rlog.e(TAG, "Unable to launch Settings application.");
            }
        }
        return defaultSmsSubscriptionId;
    }

    public MtkSimSmsInsertStatus insertRawMessageToIccCard(int i, byte[] bArr, byte[] bArr2) throws RemoteException {
        String str;
        Rlog.d(TAG, "insertRawMessageToIccCard");
        MtkSimSmsInsertStatus mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber = null;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber = iMtkSmsService.insertRawMessageToIccCardForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), i, bArr, bArr2);
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
        }
        if (mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber != null) {
            str = "insert Raw " + mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber.indexInIcc;
        } else {
            str = "insert Raw null";
        }
        Rlog.d(TAG, str);
        return mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber;
    }

    public MtkSimSmsInsertStatus insertTextMessageToIccCard(String str, String str2, List<String> list, int i, long j) throws RemoteException {
        String str3;
        Rlog.d(TAG, "insertTextMessageToIccCard");
        MtkSimSmsInsertStatus mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber = null;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber = iMtkSmsService.insertTextMessageToIccCardForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, list, i, j);
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
        }
        if (mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber != null) {
            str3 = "insert Text " + mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber.indexInIcc;
        } else {
            str3 = "insert Text null";
        }
        Rlog.d(TAG, str3);
        return mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber;
    }

    public boolean isImsSmsSupported() {
        boolean zIsImsSmsSupportedForSubscriber = false;
        try {
            ISms iSmsService = getISmsService();
            if (iSmsService == null) {
                return false;
            }
            zIsImsSmsSupportedForSubscriber = iSmsService.isImsSmsSupportedForSubscriber(getSubscriptionId());
            Rlog.d(TAG, "isImsSmsSupported " + zIsImsSmsSupportedForSubscriber);
            return zIsImsSmsSupportedForSubscriber;
        } catch (RemoteException e) {
            return zIsImsSmsSupportedForSubscriber;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v5 */
    public boolean queryCellBroadcastSmsActivation() {
        ?? r0 = TAG;
        Rlog.d(TAG, "queryCellBroadcastSmsActivation");
        Rlog.d(TAG, "subId=" + getSubscriptionId());
        boolean z = false;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                boolean zQueryCellBroadcastSmsActivationForSubscriber = iMtkSmsService.queryCellBroadcastSmsActivationForSubscriber(getSubscriptionId());
                z = zQueryCellBroadcastSmsActivationForSubscriber;
                r0 = zQueryCellBroadcastSmsActivationForSubscriber;
            } else {
                Rlog.d(TAG, "fail to get sms service");
                r0 = 0;
                z = false;
            }
        } catch (RemoteException e) {
            Rlog.d((String) r0, "RemoteException!");
        }
        return z;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public boolean removeCellBroadcastMsg(int i, int i2) {
        String str = "RemoveCellBroadcastMsg, subId=" + getSubscriptionId();
        String str2 = TAG;
        Rlog.d(TAG, str);
        boolean z = false;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                boolean zRemoveCellBroadcastMsgForSubscriber = iMtkSmsService.removeCellBroadcastMsgForSubscriber(getSubscriptionId(), i, i2);
                z = zRemoveCellBroadcastMsgForSubscriber;
                str2 = zRemoveCellBroadcastMsgForSubscriber;
            } else {
                Rlog.d(TAG, "fail to get sms service");
                z = false;
                str2 = str2;
            }
        } catch (RemoteException e) {
            Rlog.d(str2, "RemoveCellBroadcastMsg, RemoteException!");
        }
        return z;
    }

    public void sendDataMessage(String str, String str2, short s, short s2, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        Rlog.d(TAG, "sendDataMessage");
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        if (isValidParameters(str, "send_data", pendingIntent)) {
            if (bArr == null || bArr.length == 0) {
                throw new IllegalArgumentException("Invalid message data");
            }
            try {
                IMtkSms iMtkSmsServiceOrThrow = getIMtkSmsServiceOrThrow();
                if (iMtkSmsServiceOrThrow != null) {
                    iMtkSmsServiceOrThrow.sendDataWithOriginalPortForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, s & 65535, s2 & 65535, bArr, pendingIntent, pendingIntent2);
                }
            } catch (RemoteException e) {
                Rlog.d(TAG, "RemoteException!");
            }
        }
    }

    public void sendDataMessage(String str, String str2, short s, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        if (bArr == null || bArr.length == 0) {
            throw new IllegalArgumentException("Invalid message data");
        }
        try {
            getISmsServiceOrThrow().sendDataForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), (String) null, str, str2, s & 65535, bArr, pendingIntent, pendingIntent2);
        } catch (RemoteException e) {
        }
    }

    public void sendMultipartTextMessageWithEncodingType(String str, String str2, ArrayList<String> arrayList, int i, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3) {
        Rlog.d(TAG, "sendMultipartTextMessageWithEncodingType, encoding=" + i);
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        if (!isValidParameters(str, arrayList, arrayList2)) {
            Rlog.d(TAG, "invalid parameters for multipart message");
            return;
        }
        if (arrayList != null && arrayList.size() > 1) {
            try {
                IMtkSms iMtkSmsServiceOrThrow = getIMtkSmsServiceOrThrow();
                if (iMtkSmsServiceOrThrow != null) {
                    iMtkSmsServiceOrThrow.sendMultipartTextWithEncodingTypeForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, arrayList, i, arrayList2, arrayList3, true);
                    return;
                }
                return;
            } catch (RemoteException e) {
                Rlog.d(TAG, "RemoteException");
                return;
            }
        }
        PendingIntent pendingIntent = null;
        if (arrayList2 != null && arrayList2.size() > 0) {
            pendingIntent = arrayList2.get(0);
        }
        Rlog.d(TAG, "get sentIntent: " + pendingIntent);
        PendingIntent pendingIntent2 = (arrayList3 == null || arrayList3.size() <= 0) ? null : arrayList3.get(0);
        Rlog.d(TAG, "send single message");
        if (arrayList != null) {
            Rlog.d(TAG, "parts.size = " + arrayList.size());
        }
        String str3 = (arrayList == null || arrayList.size() == 0) ? "" : arrayList.get(0);
        Rlog.d(TAG, "pass encoding type " + i);
        sendTextMessageWithEncodingType(str, str2, str3, i, pendingIntent, pendingIntent2);
    }

    public void sendMultipartTextMessageWithExtraParams(String str, String str2, ArrayList<String> arrayList, Bundle bundle, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3) {
        Rlog.d(TAG, "sendMultipartTextMessageWithExtraParams");
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        if (isValidParameters(str, arrayList, arrayList2)) {
            if (bundle == null) {
                Rlog.d(TAG, "bundle is null");
                return;
            }
            if (arrayList == null || arrayList.size() <= 1) {
                PendingIntent pendingIntent = null;
                if (arrayList2 != null && arrayList2.size() > 0) {
                    pendingIntent = arrayList2.get(0);
                }
                sendTextMessageWithExtraParams(str, str2, (arrayList == null || arrayList.size() == 0) ? "" : arrayList.get(0), bundle, pendingIntent, (arrayList3 == null || arrayList3.size() <= 0) ? null : arrayList3.get(0));
                return;
            }
            try {
                IMtkSms iMtkSmsServiceOrThrow = getIMtkSmsServiceOrThrow();
                if (iMtkSmsServiceOrThrow != null) {
                    iMtkSmsServiceOrThrow.sendMultipartTextWithExtraParamsForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, arrayList, bundle, arrayList2, arrayList3, true);
                }
            } catch (RemoteException e) {
                Rlog.d(TAG, "RemoteException");
            }
        }
    }

    public void sendTextMessage(String str, String str2, String str3, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        sendTextMessageInternal(str, str2, str3, pendingIntent, pendingIntent2, true, null, 0L);
    }

    public void sendTextMessageWithEncodingType(String str, String str2, String str3, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        Rlog.d(TAG, "sendTextMessageWithEncodingType, encoding=" + i);
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        if (!isValidParameters(str, str3, pendingIntent)) {
            Rlog.d(TAG, "the parameters are invalid");
            return;
        }
        try {
            IMtkSms iMtkSmsServiceOrThrow = getIMtkSmsServiceOrThrow();
            if (iMtkSmsServiceOrThrow != null) {
                iMtkSmsServiceOrThrow.sendTextWithEncodingTypeForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, str3, i, pendingIntent, pendingIntent2, true);
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
        }
    }

    public void sendTextMessageWithExtraParams(String str, String str2, String str3, Bundle bundle, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        Rlog.d(TAG, "sendTextMessageWithExtraParams");
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Invalid destinationAddress");
        }
        if (isValidParameters(str, str3, pendingIntent)) {
            if (bundle == null) {
                Rlog.d(TAG, "bundle is null");
                return;
            }
            try {
                IMtkSms iMtkSmsServiceOrThrow = getIMtkSmsServiceOrThrow();
                if (iMtkSmsServiceOrThrow != null) {
                    iMtkSmsServiceOrThrow.sendTextWithExtraParamsForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), str, str2, str3, bundle, pendingIntent, pendingIntent2, true);
                }
            } catch (RemoteException e) {
                Rlog.d(TAG, "RemoteException");
            }
        }
    }

    public void sendTextMessageWithoutPersisting(String str, String str2, String str3, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        sendTextMessageInternal(str, str2, str3, pendingIntent, pendingIntent2, false, null, 0L);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public boolean setCellBroadcastLang(String str) {
        String str2 = "setCellBroadcastLang, subId=" + getSubscriptionId();
        String str3 = TAG;
        Rlog.d(TAG, str2);
        boolean z = false;
        z = false;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                boolean cellBroadcastLangsForSubscriber = iMtkSmsService.setCellBroadcastLangsForSubscriber(getSubscriptionId(), str);
                z = cellBroadcastLangsForSubscriber;
                str3 = cellBroadcastLangsForSubscriber;
            } else {
                Rlog.d(TAG, "fail to get sms service");
                str3 = str3;
            }
        } catch (RemoteException e) {
            Rlog.d(str3, "RemoteException");
        }
        return z;
    }

    public boolean setEtwsConfig(int i) {
        Rlog.d(TAG, "setEtwsConfig, mode=" + i);
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.setEtwsConfigForSubscriber(getSubscriptionId(), i);
            }
            return false;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            return false;
        }
    }

    public boolean setScAddress(String str) {
        Rlog.d(TAG, "setScAddress");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.setScAddressForSubscriber(getSubscriptionId(), str);
            }
            return false;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            return false;
        }
    }

    public void setSmsMemoryStatus(boolean z) {
        Rlog.d(TAG, "setSmsMemoryStatus");
        try {
            IMtkSms iMtkSmsServiceOrThrow = getIMtkSmsServiceOrThrow();
            if (iMtkSmsServiceOrThrow != null) {
                iMtkSmsServiceOrThrow.setSmsMemoryStatusForSubscriber(getSubscriptionId(), z);
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
        }
    }

    public boolean setSmsParameters(MtkSmsParameters mtkSmsParameters) {
        Rlog.d(TAG, "setSmsParameters");
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                return iMtkSmsService.setSmsParametersForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), mtkSmsParameters);
            }
            return false;
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
            return false;
        }
    }

    public boolean updateSmsOnSimReadStatus(int i, boolean z) throws RemoteException {
        Rlog.d(TAG, "updateSmsOnSimReadStatus");
        SmsRawData messageFromIccEfForSubscriber = null;
        try {
            IMtkSms iMtkSmsService = getIMtkSmsService();
            if (iMtkSmsService != null) {
                messageFromIccEfForSubscriber = iMtkSmsService.getMessageFromIccEfForSubscriber(getSubscriptionId(), ActivityThread.currentPackageName(), i);
            }
        } catch (RemoteException e) {
            Rlog.d(TAG, "RemoteException");
        }
        if (messageFromIccEfForSubscriber == null) {
            Rlog.d(TAG, "record is null");
            return false;
        }
        byte[] bytes = messageFromIccEfForSubscriber.getBytes();
        int i2 = bytes[0] & 255;
        Rlog.d(TAG, "sms status is " + i2);
        if (i2 != 3 && i2 != 1) {
            Rlog.d(TAG, "non-delivery sms " + i2);
            return false;
        }
        if ((i2 == 3 && !z) || (i2 == 1 && z)) {
            Rlog.d(TAG, "no need to update status");
            return true;
        }
        Rlog.d(TAG, "update sms status as " + z);
        char c = z ? (char) 1 : (char) 3;
        return SmsManager.getSmsManagerForSubscriptionId(this.mSubId).updateMessageOnIcc(i, 1, bytes);
    }
}

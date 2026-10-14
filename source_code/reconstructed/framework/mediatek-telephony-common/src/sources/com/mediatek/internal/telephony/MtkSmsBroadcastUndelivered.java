package com.mediatek.internal.telephony;

import android.content.ContentResolver;
import android.content.Context;
import android.database.Cursor;
import android.database.SQLException;
import android.os.UserManager;
import android.telephony.Rlog;
import com.android.internal.telephony.InboundSmsHandler;
import com.android.internal.telephony.InboundSmsTracker;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.SmsBroadcastUndelivered;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.cdma.CdmaInboundSmsHandler;
import com.android.internal.telephony.gsm.GsmInboundSmsHandler;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsBroadcastUndelivered extends SmsBroadcastUndelivered {
    private static final int MAX_PHONE_COUNT = 4;
    private static final String TAG = "MtkSmsBroadcastUndelivered";
    private final Phone mPhone;
    private static final String[] PDU_PENDING_MESSAGE_PROJECTION = {"pdu", "sequence", "destination_port", "date", "reference_number", "count", "address", "_id", "message_body", "display_originating_addr", "sim_id"};
    private static MtkSmsBroadcastUndelivered[] instance = new MtkSmsBroadcastUndelivered[4];

    private static class SmsReferenceKey {
        final String mAddress;
        final int mMessageCount;
        final int mReferenceNumber;
        final long mSubId;

        SmsReferenceKey(MtkInboundSmsTracker mtkInboundSmsTracker) {
            this.mAddress = mtkInboundSmsTracker.getAddress();
            this.mReferenceNumber = mtkInboundSmsTracker.getReferenceNumber();
            this.mMessageCount = mtkInboundSmsTracker.getMessageCount();
            this.mSubId = mtkInboundSmsTracker.getSubId();
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof SmsReferenceKey)) {
                return false;
            }
            SmsReferenceKey smsReferenceKey = (SmsReferenceKey) obj;
            return smsReferenceKey.mAddress.equals(this.mAddress) && smsReferenceKey.mReferenceNumber == this.mReferenceNumber && smsReferenceKey.mMessageCount == this.mMessageCount && smsReferenceKey.mSubId == this.mSubId;
        }

        String[] getDeleteWhereArgs() {
            return new String[]{this.mAddress, Integer.toString(this.mReferenceNumber), Integer.toString(this.mMessageCount), Long.toString(this.mSubId)};
        }

        public int hashCode() {
            return (((((int) this.mSubId) * 63) + (this.mReferenceNumber * 31) + this.mMessageCount) * 31) + this.mAddress.hashCode();
        }
    }

    private MtkSmsBroadcastUndelivered(Context context, GsmInboundSmsHandler gsmInboundSmsHandler, CdmaInboundSmsHandler cdmaInboundSmsHandler) {
        super(context, gsmInboundSmsHandler, cdmaInboundSmsHandler);
        this.mPhone = gsmInboundSmsHandler.getPhone();
        if (((UserManager) context.getSystemService(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)).isUserUnlocked()) {
            return;
        }
        Rlog.d(TAG, "Phone " + this.mPhone.getPhoneId() + " register user unlock event");
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static void broadcastSms(InboundSmsTracker inboundSmsTracker, CdmaInboundSmsHandler cdmaInboundSmsHandler, GsmInboundSmsHandler gsmInboundSmsHandler) {
        InboundSmsHandler inboundSmsHandler = inboundSmsTracker.is3gpp2() ? cdmaInboundSmsHandler : gsmInboundSmsHandler;
        if (inboundSmsHandler != 0) {
            inboundSmsHandler.sendMessage(2, inboundSmsTracker);
            return;
        }
        Rlog.e(TAG, "null handler for " + inboundSmsTracker.getFormat() + " format, can't deliver.");
    }

    public static void initialize(Context context, GsmInboundSmsHandler gsmInboundSmsHandler, CdmaInboundSmsHandler cdmaInboundSmsHandler) {
        int phoneId = gsmInboundSmsHandler.getPhone().getPhoneId();
        if (instance[phoneId] == null) {
            Rlog.d(TAG, "Phone " + phoneId + " call initialize");
            instance[phoneId] = new MtkSmsBroadcastUndelivered(context, gsmInboundSmsHandler, cdmaInboundSmsHandler);
        }
        if (gsmInboundSmsHandler != null) {
            gsmInboundSmsHandler.sendMessage(6);
        }
        if (cdmaInboundSmsHandler != null) {
            cdmaInboundSmsHandler.sendMessage(6);
        }
    }

    public static void scanRawTable(Context context, CdmaInboundSmsHandler cdmaInboundSmsHandler, GsmInboundSmsHandler gsmInboundSmsHandler, long j) throws Throwable {
        scanRawTable(context, false, cdmaInboundSmsHandler, gsmInboundSmsHandler, j);
        scanRawTable(context, true, cdmaInboundSmsHandler, gsmInboundSmsHandler, j);
    }

    /* JADX WARN: Code duplicated, block: B:121:0x02cd  */
    /* JADX WARN: Code duplicated, block: B:126:0x02f2  */
    private static void scanRawTable(Context context, boolean z, CdmaInboundSmsHandler cdmaInboundSmsHandler, GsmInboundSmsHandler gsmInboundSmsHandler, long j) throws Throwable {
        HashSet hashSet;
        boolean z2 = z;
        Rlog.d(TAG, "scanning raw table for undelivered messages");
        long jNanoTime = System.nanoTime();
        ContentResolver contentResolver = context.getContentResolver();
        HashMap map = new HashMap(4);
        HashSet hashSet2 = new HashSet(4);
        Cursor cursor = null;
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("deleted = 0");
            sb.append(z2 ? MtkSmsCommonUtil.SQL_3GPP2_SMS : MtkSmsCommonUtil.SQL_3GPP_SMS);
            String string = sb.toString();
            ContentResolver contentResolver2 = contentResolver;
            HashSet hashSet3 = hashSet2;
            try {
                Cursor cursorQuery = contentResolver.query(InboundSmsHandler.sRawUri, PDU_PENDING_MESSAGE_PROJECTION, string, null, null);
                try {
                    if (cursorQuery == null) {
                        Rlog.e(TAG, "error getting pending message cursor");
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                        return;
                    }
                    while (cursorQuery.moveToNext()) {
                        try {
                            try {
                                try {
                                    MtkInboundSmsTracker mtkInboundSmsTracker = (MtkInboundSmsTracker) TelephonyComponentFactory.getInstance().inject(TelephonyComponentFactory.class.getName()).makeInboundSmsTracker(context, cursorQuery, z2);
                                    if (mtkInboundSmsTracker.getMessageCount() != 1) {
                                        SmsReferenceKey smsReferenceKey = new SmsReferenceKey(mtkInboundSmsTracker);
                                        Integer num = (Integer) map.get(smsReferenceKey);
                                        if (num == null) {
                                            try {
                                                map.put(smsReferenceKey, 1);
                                                if (mtkInboundSmsTracker.getTimestamp() < j) {
                                                    HashSet hashSet4 = hashSet3;
                                                    try {
                                                        hashSet4.add(smsReferenceKey);
                                                        hashSet = hashSet4;
                                                    } catch (SQLException e) {
                                                        e = e;
                                                        cursor = cursorQuery;
                                                        try {
                                                            Rlog.e(TAG, "error reading pending SMS messages", e);
                                                            if (cursor != null) {
                                                                cursor.close();
                                                            }
                                                            Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                                            return;
                                                        } catch (Throwable th) {
                                                            th = th;
                                                            if (cursor != null) {
                                                                cursor.close();
                                                            }
                                                            Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                                            throw th;
                                                        }
                                                    } catch (Throwable th2) {
                                                        th = th2;
                                                        cursor = cursorQuery;
                                                        if (cursor != null) {
                                                            cursor.close();
                                                        }
                                                        Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                                        throw th;
                                                    }
                                                } else {
                                                    hashSet = hashSet3;
                                                }
                                            } catch (SQLException e2) {
                                                e = e2;
                                                cursor = cursorQuery;
                                            } catch (Throwable th3) {
                                                th = th3;
                                                cursor = cursorQuery;
                                            }
                                        } else {
                                            HashSet hashSet5 = hashSet3;
                                            try {
                                                int iIntValue = num.intValue() + 1;
                                                if (iIntValue == mtkInboundSmsTracker.getMessageCount()) {
                                                    Rlog.d(TAG, "found complete multi-part message");
                                                    if (mtkInboundSmsTracker.getSubId() == gsmInboundSmsHandler.getPhone().getSubId()) {
                                                        try {
                                                            Rlog.d(TAG, "New sms on raw table, subId: " + mtkInboundSmsTracker.getSubId());
                                                            broadcastSms(mtkInboundSmsTracker, cdmaInboundSmsHandler, gsmInboundSmsHandler);
                                                        } catch (SQLException e3) {
                                                            e = e3;
                                                            cursor = cursorQuery;
                                                            Rlog.e(TAG, "error reading pending SMS messages", e);
                                                            if (cursor != null) {
                                                                cursor.close();
                                                            }
                                                            Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                                            return;
                                                        } catch (Throwable th4) {
                                                            th = th4;
                                                            cursor = cursorQuery;
                                                            if (cursor != null) {
                                                                cursor.close();
                                                            }
                                                            Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                                            throw th;
                                                        }
                                                    }
                                                    hashSet = hashSet5;
                                                    try {
                                                        hashSet.remove(smsReferenceKey);
                                                    } catch (SQLException e4) {
                                                        e = e4;
                                                        cursor = cursorQuery;
                                                    } catch (Throwable th5) {
                                                        th = th5;
                                                        cursor = cursorQuery;
                                                    }
                                                } else {
                                                    hashSet = hashSet5;
                                                    map.put(smsReferenceKey, Integer.valueOf(iIntValue));
                                                }
                                            } catch (SQLException e5) {
                                                e = e5;
                                                cursor = cursorQuery;
                                            } catch (Throwable th6) {
                                                th = th6;
                                                cursor = cursorQuery;
                                            }
                                        }
                                    } else if (mtkInboundSmsTracker.getSubId() == gsmInboundSmsHandler.getPhone().getSubId()) {
                                        Rlog.d(TAG, "New sms on raw table, subId: " + mtkInboundSmsTracker.getSubId());
                                        broadcastSms(mtkInboundSmsTracker, cdmaInboundSmsHandler, gsmInboundSmsHandler);
                                        hashSet = hashSet3;
                                    } else {
                                        hashSet = hashSet3;
                                    }
                                    string = string;
                                    hashSet3 = hashSet;
                                } catch (IllegalArgumentException e6) {
                                    HashSet hashSet6 = hashSet3;
                                    String str = string;
                                    Rlog.e(TAG, "error loading SmsTracker: " + e6);
                                    string = str;
                                    hashSet3 = hashSet6;
                                }
                            } catch (SQLException e7) {
                                e = e7;
                                cursor = cursorQuery;
                            } catch (Throwable th7) {
                                th = th7;
                                cursor = cursorQuery;
                            }
                        } catch (SQLException e8) {
                            e = e8;
                            cursor = cursorQuery;
                        } catch (Throwable th8) {
                            th = th8;
                            cursor = cursorQuery;
                        }
                    }
                    try {
                        Iterator it = hashSet3.iterator();
                        while (it.hasNext()) {
                            SmsReferenceKey smsReferenceKey2 = (SmsReferenceKey) it.next();
                            StringBuilder sb2 = new StringBuilder();
                            sb2.append(MtkSmsCommonUtil.SELECT_BY_REFERENCE);
                            sb2.append(z2 ? MtkSmsCommonUtil.SQL_3GPP2_SMS : MtkSmsCommonUtil.SQL_3GPP_SMS);
                            ContentResolver contentResolver3 = contentResolver2;
                            try {
                                int iDelete = contentResolver3.delete(InboundSmsHandler.sRawUriPermanentDelete, sb2.toString(), smsReferenceKey2.getDeleteWhereArgs());
                                if (iDelete == 0) {
                                    Rlog.e(TAG, "No rows were deleted from raw table!");
                                } else {
                                    Rlog.d(TAG, "Deleted " + iDelete + " rows from raw table for incomplete " + smsReferenceKey2.mMessageCount + " part message");
                                }
                                contentResolver2 = contentResolver3;
                                it = it;
                                z2 = z;
                            } catch (SQLException e9) {
                                e = e9;
                                cursor = cursorQuery;
                                Rlog.e(TAG, "error reading pending SMS messages", e);
                                if (cursor != null) {
                                    cursor.close();
                                }
                                Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                return;
                            } catch (Throwable th9) {
                                th = th9;
                                cursor = cursorQuery;
                                if (cursor != null) {
                                    cursor.close();
                                }
                                Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                                throw th;
                            }
                        }
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        Rlog.d(TAG, "finished scanning raw table in " + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
                    } catch (SQLException e10) {
                        e = e10;
                        cursor = cursorQuery;
                    } catch (Throwable th10) {
                        th = th10;
                        cursor = cursorQuery;
                    }
                } catch (SQLException e11) {
                    e = e11;
                    cursor = cursorQuery;
                } catch (Throwable th11) {
                    th = th11;
                    cursor = cursorQuery;
                }
            } catch (SQLException e12) {
                e = e12;
            } catch (Throwable th12) {
                th = th12;
            }
        } catch (SQLException e13) {
            e = e13;
        } catch (Throwable th13) {
            th = th13;
        }
    }
}

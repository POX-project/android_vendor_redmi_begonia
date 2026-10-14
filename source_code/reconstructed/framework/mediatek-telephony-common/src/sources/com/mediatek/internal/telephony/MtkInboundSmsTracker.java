package com.mediatek.internal.telephony;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.util.Pair;
import com.android.internal.telephony.InboundSmsTracker;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;
import java.util.ArrayList;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkInboundSmsTracker extends InboundSmsTracker {
    public static final int SUB_ID_COLUMN = 10;
    private long mRecvTime;
    private int mSubId;
    private int mUploadFlag;

    public MtkInboundSmsTracker(Context context, Cursor cursor, boolean z) {
        super(context, cursor, z);
        this.mSubId = cursor.getInt(10);
        if (cursor.getInt(5) != 1) {
            setDeleteWhere(this.mDeleteWhere, this.mDeleteWhereArgs);
        }
    }

    public MtkInboundSmsTracker(Context context, byte[] bArr, long j, int i, boolean z, String str, String str2, int i2, int i3, int i4, boolean z2, String str3, boolean z3, int i5) {
        super(context, bArr, j, i, z, str, str2, i2, i3, i4, z2, str3, z3, i5);
    }

    public MtkInboundSmsTracker(Context context, byte[] bArr, long j, int i, boolean z, boolean z2, String str, String str2, String str3, boolean z3, int i2) {
        super(context, bArr, j, i, z, z2, str, str2, str3, z3, i2);
    }

    private Pair<String, String[]> appendSubIdInQuery(Pair<String, String[]> pair) {
        if (pair == null) {
            return null;
        }
        return appendSubIdInQuery((String) pair.first, (String[]) pair.second);
    }

    private Pair<String, String[]> appendSubIdInQuery(String str, String[] strArr) {
        String string;
        if (str == null) {
            string = null;
        } else {
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            sb.append(" AND sim_id=?");
            sb.append(is3gpp2() ? MtkSmsCommonUtil.SQL_3GPP2_SMS : MtkSmsCommonUtil.SQL_3GPP_SMS);
            string = sb.toString();
        }
        ArrayList arrayList = new ArrayList(Arrays.asList(strArr));
        arrayList.add(Integer.toString(this.mSubId));
        String[] strArr2 = new String[arrayList.size()];
        arrayList.toArray(strArr2);
        return new Pair<>(string, strArr2);
    }

    public ContentValues getContentValues() {
        ContentValues contentValues = super.getContentValues();
        contentValues.put("sim_id", Integer.valueOf(this.mSubId));
        return contentValues;
    }

    public int getDestPort() {
        return this.mDestPort;
    }

    public Pair<String, String[]> getExactMatchDupDetectQuery() {
        return appendSubIdInQuery(super.getExactMatchDupDetectQuery());
    }

    public Pair<String, String[]> getInexactMatchDupDetectQuery() {
        return appendSubIdInQuery(super.getInexactMatchDupDetectQuery());
    }

    public String getQueryForSegments() {
        StringBuilder sb = new StringBuilder();
        sb.append(super.getQueryForSegments());
        sb.append(" AND sim_id=?");
        sb.append(is3gpp2() ? MtkSmsCommonUtil.SQL_3GPP2_SMS : MtkSmsCommonUtil.SQL_3GPP_SMS);
        return sb.toString();
    }

    public int getSubId() {
        return this.mSubId;
    }

    public boolean is3gpp2WapPdu() {
        return this.mIs3gpp2WapPdu;
    }

    public void setDeleteWhere(String str, String[] strArr) {
        if (getMessageCount() == 1) {
            super.setDeleteWhere(str, strArr);
        } else {
            super.setDeleteWhere(str, (String[]) appendSubIdInQuery(null, strArr).second);
        }
    }

    public void setSubId(int i) {
        this.mSubId = i;
    }
}

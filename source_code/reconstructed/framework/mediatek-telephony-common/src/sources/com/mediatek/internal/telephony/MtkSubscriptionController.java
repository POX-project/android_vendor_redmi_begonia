package com.mediatek.internal.telephony;

import android.R;
import android.content.ContentResolver;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Binder;
import android.os.Build;
import android.telecom.PhoneAccountHandle;
import android.telecom.TelecomManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyRegistryManager;
import android.telephony.UiccAccessRule;
import android.text.TextUtils;
import android.util.Log;
import com.android.internal.telephony.MultiSimSettingController;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.TelephonyPermissions;
import com.android.internal.telephony.metrics.TelephonyMetrics;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.UiccCard;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.uicc.MtkSpnOverride;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkSubscriptionController extends SubscriptionController {
    private static final String LOG_TAG = "MtkSubCtrl";
    private int lastPhoneId;
    private static final boolean ENGDEBUG = TextUtils.equals(Build.TYPE, "eng");
    private static Intent sStickyIntent = null;

    protected MtkSubscriptionController(Context context) {
        super(context);
        this.lastPhoneId = Integer.MAX_VALUE;
    }

    private void broadcastSimInfoContentChanged(Intent intent) {
        this.mContext.sendBroadcast(new Intent("android.intent.action.ACTION_SUBINFO_CONTENT_CHANGE"));
        Intent intent2 = new Intent("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        if (intent == null) {
            List activeSubscriptionInfoList = getActiveSubscriptionInfoList(this.mContext.getOpPackageName(), this.mContext.getAttributionTag());
            putSubinfoRecordUpdatedExtra(intent2, -1, 4, activeSubscriptionInfoList == null ? 0 : activeSubscriptionInfoList.size(), null);
        }
        synchronized (MtkSubscriptionController.class) {
            Intent intent3 = intent == null ? intent2 : intent;
            sStickyIntent = intent3;
            int intExtra = intent3.getIntExtra("simDetectStatus", 0);
            int intExtra2 = sStickyIntent.getIntExtra("phone", -1);
            if (ENGDEBUG) {
                logd("broadcast intent ACTION_SUBINFO_RECORD_UPDATED with detectType:" + intExtra + ", phoneId:" + intExtra2);
            }
            this.mContext.sendStickyBroadcast(sStickyIntent);
        }
    }

    public static MtkSubscriptionController getMtkInstance() {
        MtkSubscriptionController mtkSubscriptionController;
        synchronized (MtkSubscriptionController.class) {
            if (sInstance == null) {
                Log.wtf(LOG_TAG, "getMtkInstance null");
            }
            mtkSubscriptionController = (MtkSubscriptionController) sInstance;
        }
        return mtkSubscriptionController;
    }

    private void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private void logv(String str) {
        Rlog.v(LOG_TAG, str);
    }

    protected static MtkSubscriptionController mtkInit(Context context) {
        MtkSubscriptionController mtkSubscriptionController;
        synchronized (MtkSubscriptionController.class) {
            if (sInstance == null) {
                sInstance = new MtkSubscriptionController(context);
                Rlog.d(LOG_TAG, "mtkInit, sInstance = " + sInstance);
                MtkSubscriptionControllerEx.MtkInitStub(context);
            } else {
                Log.wtf(LOG_TAG, "init() called multiple times!  sInstance = " + sInstance);
            }
            mtkSubscriptionController = (MtkSubscriptionController) sInstance;
        }
        return mtkSubscriptionController;
    }

    protected static void mtkInvalidateActiveDataSubIdCaches() {
        invalidateActiveDataSubIdCaches();
    }

    /* JADX WARN: Code duplicated, block: B:103:0x0297 A[Catch: all -> 0x0301, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Code duplicated, block: B:105:0x02b2 A[Catch: all -> 0x0301, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Code duplicated, block: B:106:0x02d0 A[Catch: all -> 0x0301, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Code duplicated, block: B:108:0x02d4 A[Catch: all -> 0x0301, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Code duplicated, block: B:118:0x030b A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:121:0x0317 A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:122:0x031c A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:124:0x0326 A[Catch: all -> 0x040d, TRY_LEAVE, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:127:0x0340 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:128:0x0342 A[Catch: all -> 0x040d, TRY_ENTER, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:133:0x035f A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:136:0x036d A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:139:0x038f  */
    /* JADX WARN: Code duplicated, block: B:140:0x0391 A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:142:0x0397  */
    /* JADX WARN: Code duplicated, block: B:143:0x0399 A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:164:0x0215 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:27:0x00e4  */
    /* JADX WARN: Code duplicated, block: B:31:0x00f3 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:32:0x00f5  */
    /* JADX WARN: Code duplicated, block: B:37:0x0118  */
    /* JADX WARN: Code duplicated, block: B:42:0x0125  */
    /* JADX WARN: Code duplicated, block: B:44:0x0129  */
    /* JADX WARN: Code duplicated, block: B:49:0x0147  */
    /* JADX WARN: Code duplicated, block: B:53:0x016e  */
    /* JADX WARN: Code duplicated, block: B:55:0x017c  */
    /* JADX WARN: Code duplicated, block: B:74:0x01c8 A[Catch: all -> 0x011f, TRY_ENTER, TRY_LEAVE, TryCatch #8 {all -> 0x011f, blocks: (B:38:0x011a, B:54:0x0170, B:57:0x0184, B:59:0x018e, B:65:0x01ac, B:61:0x0198, B:63:0x01a2, B:68:0x01b7, B:71:0x01bf, B:74:0x01c8), top: B:176:0x00f1 }] */
    /* JADX WARN: Code duplicated, block: B:78:0x01d7 A[Catch: all -> 0x040d, TRY_ENTER, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:81:0x01ed A[Catch: all -> 0x040d, TryCatch #6 {all -> 0x040d, blocks: (B:78:0x01d7, B:79:0x01da, B:81:0x01ed, B:83:0x0203, B:118:0x030b, B:119:0x030e, B:121:0x0317, B:122:0x031c, B:124:0x0326, B:128:0x0342, B:130:0x0356, B:134:0x0369, B:136:0x036d, B:137:0x0389, B:144:0x03b0, B:140:0x0391, B:143:0x0399, B:133:0x035f, B:145:0x03d8, B:114:0x0304, B:116:0x0308, B:153:0x0408, B:155:0x040c, B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:173:0x00d3, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:82:0x0200  */
    /* JADX WARN: Code duplicated, block: B:88:0x021b A[Catch: all -> 0x0301, LOOP:0: B:88:0x021b->B:180:?, LOOP_START, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Code duplicated, block: B:90:0x0229 A[Catch: all -> 0x0301, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Code duplicated, block: B:92:0x0271 A[Catch: all -> 0x0301, TryCatch #1 {all -> 0x0301, blocks: (B:86:0x0215, B:88:0x021b, B:90:0x0229, B:92:0x0271, B:95:0x0279, B:97:0x027f, B:99:0x028b, B:101:0x0293, B:105:0x02b2, B:109:0x02d9, B:103:0x0297, B:106:0x02d0, B:108:0x02d4), top: B:164:0x0215, outer: #6 }] */
    /* JADX WARN: Instruction removed from duplicated block: B:103:0x0297, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:105:0x02b2, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:124:0x0326, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:136:0x036d, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:143:0x0399, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:90:0x0229, please report this as an issue */
    public int addSubInfo(String str, String str2, int i, int i2) throws Throwable {
        long j;
        String str3;
        String[] strArr;
        boolean z;
        int i3;
        int i4;
        String string;
        ContentValues contentValues;
        ContentValues contentValues2;
        UiccCard uiccCardForPhone;
        String cardId;
        boolean z2;
        String[] strArr2;
        boolean z3;
        String[] strArr3;
        String str4;
        boolean z4;
        Cursor cursorQuery;
        int i5;
        int activeSubInfoCountMax;
        int defaultSubId;
        int subIdUsingPhoneId;
        String simOperatorName;
        String simOperatorNumeric;
        String strLookupOperatorNameForDisplayName;
        String str5;
        int i6 = i;
        String strGivePrintableIccid = str;
        if (!isSubscriptionForRemoteSim(i2)) {
            strGivePrintableIccid = MtkSubscriptionInfo.givePrintableIccid(str);
        }
        logdl("[addSubInfoRecord]+ iccid: " + strGivePrintableIccid + ", slotIndex: " + i6 + ", subscriptionType: " + i2);
        enforceModifyPhoneState("addSubInfo");
        long jClearCallingIdentity = Binder.clearCallingIdentity();
        try {
            if (str == null) {
                logdl("[addSubInfo]- null iccId");
                Binder.restoreCallingIdentity(jClearCallingIdentity);
                return -1;
            }
            try {
                ContentResolver contentResolver = this.mContext.getContentResolver();
                if (isSubscriptionForRemoteSim(i2)) {
                    str3 = "icc_id=? AND subscription_type=?";
                    strArr = new String[]{str, Integer.toString(i2)};
                } else {
                    str3 = "icc_id=? OR icc_id=? OR icc_id=?";
                    strArr = new String[]{str, IccUtils.getDecimalSubstring(str), str.toLowerCase()};
                }
                Cursor cursorQuery2 = contentResolver.query(SubscriptionManager.CONTENT_URI, new String[]{"_id", "sim_id", "name_source", "icc_id", "card_id"}, str3, strArr, null);
                try {
                    if (cursorQuery2 == null) {
                        z = true;
                        j = jClearCallingIdentity;
                        if (isSubscriptionForRemoteSim(i2)) {
                            if (z) {
                                i6 = -1;
                                logd("[addSubInfoRecord] New record created: " + insertEmptySubInfoRecord(str, str2, -1, i2));
                                z2 = false;
                            } else {
                                logdl("[addSubInfoRecord] Record already exists");
                                z2 = false;
                            }
                        } else if (z) {
                            logdl("[addSubInfoRecord] New record created: " + insertEmptySubInfoRecord(str, i6));
                            z2 = true;
                        } else {
                            i3 = cursorQuery2.getInt(0);
                            i4 = cursorQuery2.getInt(1);
                            cursorQuery2.getInt(2);
                            string = cursorQuery2.getString(3);
                            String string2 = cursorQuery2.getString(4);
                            contentValues = new ContentValues();
                            if (i6 != i4) {
                                contentValues2 = contentValues;
                                contentValues2.put("sim_id", Integer.valueOf(i));
                            } else {
                                contentValues2 = contentValues;
                            }
                            if (string != null) {
                                contentValues2.put("icc_id", str);
                            }
                            uiccCardForPhone = this.mUiccController.getUiccCardForPhone(i6);
                            if (uiccCardForPhone != null) {
                                contentValues2.put("card_id", cardId);
                            }
                            if (contentValues2.size() > 0) {
                                contentResolver.update(SubscriptionManager.getUriForSubscriptionId(i3), contentValues2, null, null);
                            }
                            logdl("[addSubInfoRecord] Record already exists");
                            z2 = false;
                        }
                        if (cursorQuery2 != null) {
                            cursorQuery2.close();
                        }
                        strArr2 = new String[]{String.valueOf(i6)};
                        if (isSubscriptionForRemoteSim(i2)) {
                            z3 = true;
                            strArr3 = new String[]{str, Integer.toString(i2)};
                            str4 = "icc_id=? AND subscription_type=?";
                        } else {
                            z3 = true;
                            strArr3 = strArr2;
                            str4 = "sim_id=?";
                        }
                        z4 = z3;
                        cursorQuery = contentResolver.query(SubscriptionManager.CONTENT_URI, null, str4, strArr3, null);
                        if (cursorQuery != null) {
                            if (cursorQuery.moveToFirst()) {
                                do {
                                    i5 = cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow("_id"));
                                    if (addToSubIdList(i6, i5, i2)) {
                                        activeSubInfoCountMax = getActiveSubInfoCountMax();
                                        defaultSubId = getDefaultSubId();
                                        logdl("[addSubInfoRecord] sSlotIndexToSubIds.size=" + sSlotIndexToSubIds.size() + " slotIndex=" + i6 + " subId=" + i5 + " defaultSubId=" + defaultSubId + " simCount=" + activeSubInfoCountMax);
                                        if (isSubscriptionForRemoteSim(i2)) {
                                            updateDefaultSubIdsIfNeeded(i5, i2);
                                        } else {
                                            if (SubscriptionManager.isValidSubscriptionId(defaultSubId)) {
                                                logdl("setting default fallback subid to " + i5);
                                                setDefaultFallbackSubId(i5, i2);
                                                this.lastPhoneId = i6;
                                            } else {
                                                logdl("setting default fallback subid to " + i5);
                                                setDefaultFallbackSubId(i5, i2);
                                                this.lastPhoneId = i6;
                                            }
                                            if (activeSubInfoCountMax == z4) {
                                                logdl("[addSubInfoRecord] one sim set defaults to subId=" + i5);
                                                setDefaultDataSubId(i5);
                                                setDefaultSmsSubId(i5);
                                                setDefaultVoiceSubId(i5);
                                            }
                                        }
                                    } else {
                                        logdl("[addSubInfoRecord] current SubId is already known, IGNORE");
                                    }
                                    logdl("[addSubInfoRecord] hashmap(" + i6 + "," + i5 + ")");
                                } while (cursorQuery.moveToNext());
                            }
                        }
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        refreshCachedActiveSubscriptionInfoList();
                        if (isSubscriptionForRemoteSim(i2)) {
                            notifySubscriptionInfoChanged();
                        } else {
                            subIdUsingPhoneId = getSubIdUsingPhoneId(i6);
                            if (!SubscriptionManager.isValidSubscriptionId(subIdUsingPhoneId)) {
                                logdl("[addSubInfoRecord]- getSubId failed invalid subId = " + subIdUsingPhoneId);
                                Binder.restoreCallingIdentity(j);
                                return -1;
                            }
                            if (z2) {
                                simOperatorName = this.mTelephonyManager.getSimOperatorName(subIdUsingPhoneId);
                                simOperatorNumeric = this.mTelephonyManager.getSimOperatorNumeric(subIdUsingPhoneId);
                                if ("20404".equals(simOperatorNumeric)) {
                                    strLookupOperatorNameForDisplayName = MtkSpnOverride.getInstance().lookupOperatorNameForDisplayName(subIdUsingPhoneId, simOperatorNumeric, z4, this.mContext);
                                } else {
                                    strLookupOperatorNameForDisplayName = MtkSpnOverride.getInstance().lookupOperatorNameForDisplayName(subIdUsingPhoneId, simOperatorNumeric, z4, this.mContext);
                                }
                                if (ENGDEBUG) {
                                    logd("[addSubInfoRecord]- simNumeric: " + simOperatorNumeric + ", simMvnoName: " + strLookupOperatorNameForDisplayName);
                                }
                                if (!TextUtils.isEmpty(strLookupOperatorNameForDisplayName)) {
                                    str5 = strLookupOperatorNameForDisplayName;
                                } else if (TextUtils.isEmpty(simOperatorName)) {
                                    str5 = "CARD " + Integer.toString(i6 + 1);
                                } else {
                                    str5 = simOperatorName;
                                }
                                ContentValues contentValues3 = new ContentValues();
                                contentValues3.put("display_name", str5);
                                contentResolver.update(SubscriptionManager.getUriForSubscriptionId(subIdUsingPhoneId), contentValues3, null, null);
                                logdl("[addSubInfoRecord] sim name = " + str5);
                            }
                            refreshCachedActiveSubscriptionInfoList();
                            logdl("[addSubInfoRecord]- info size=" + sSlotIndexToSubIds.size());
                        }
                        Binder.restoreCallingIdentity(j);
                        return 0;
                    }
                    try {
                        if (cursorQuery2.moveToFirst()) {
                            z = false;
                        } else {
                            z = true;
                        }
                        try {
                            j = jClearCallingIdentity;
                            try {
                                if (isSubscriptionForRemoteSim(i2)) {
                                    if (z) {
                                        i6 = -1;
                                        try {
                                            logd("[addSubInfoRecord] New record created: " + insertEmptySubInfoRecord(str, str2, -1, i2));
                                            z2 = false;
                                        } catch (Throwable th) {
                                            th = th;
                                        }
                                    } else {
                                        logdl("[addSubInfoRecord] Record already exists");
                                        z2 = false;
                                    }
                                } else if (z) {
                                    try {
                                        logdl("[addSubInfoRecord] New record created: " + insertEmptySubInfoRecord(str, i6));
                                        z2 = true;
                                    } catch (Throwable th2) {
                                        th = th2;
                                    }
                                } else {
                                    try {
                                        i3 = cursorQuery2.getInt(0);
                                        i4 = cursorQuery2.getInt(1);
                                        cursorQuery2.getInt(2);
                                        string = cursorQuery2.getString(3);
                                        String string3 = cursorQuery2.getString(4);
                                        contentValues = new ContentValues();
                                        if (i6 != i4) {
                                            contentValues2 = contentValues;
                                            contentValues2.put("sim_id", Integer.valueOf(i));
                                        } else {
                                            contentValues2 = contentValues;
                                        }
                                        if (string != null && ((string.length() < str.length() && string.equals(IccUtils.getDecimalSubstring(str))) || (!str.toLowerCase().equals(str) && str.toLowerCase().equals(string)))) {
                                            contentValues2.put("icc_id", str);
                                        }
                                        uiccCardForPhone = this.mUiccController.getUiccCardForPhone(i6);
                                        if (uiccCardForPhone != null && (cardId = uiccCardForPhone.getCardId()) != null && cardId != string3) {
                                            contentValues2.put("card_id", cardId);
                                        }
                                        if (contentValues2.size() > 0) {
                                            contentResolver.update(SubscriptionManager.getUriForSubscriptionId(i3), contentValues2, null, null);
                                        }
                                        logdl("[addSubInfoRecord] Record already exists");
                                        z2 = false;
                                    } catch (Throwable th3) {
                                        th = th3;
                                    }
                                }
                                if (cursorQuery2 != null) {
                                    cursorQuery2.close();
                                }
                                strArr2 = new String[]{String.valueOf(i6)};
                                if (isSubscriptionForRemoteSim(i2)) {
                                    z3 = true;
                                    strArr3 = new String[]{str, Integer.toString(i2)};
                                    str4 = "icc_id=? AND subscription_type=?";
                                } else {
                                    z3 = true;
                                    strArr3 = strArr2;
                                    str4 = "sim_id=?";
                                }
                                z4 = z3;
                                cursorQuery = contentResolver.query(SubscriptionManager.CONTENT_URI, null, str4, strArr3, null);
                                if (cursorQuery != null) {
                                    try {
                                        if (cursorQuery.moveToFirst()) {
                                            do {
                                                i5 = cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow("_id"));
                                                if (addToSubIdList(i6, i5, i2)) {
                                                    activeSubInfoCountMax = getActiveSubInfoCountMax();
                                                    defaultSubId = getDefaultSubId();
                                                    logdl("[addSubInfoRecord] sSlotIndexToSubIds.size=" + sSlotIndexToSubIds.size() + " slotIndex=" + i6 + " subId=" + i5 + " defaultSubId=" + defaultSubId + " simCount=" + activeSubInfoCountMax);
                                                    if (isSubscriptionForRemoteSim(i2)) {
                                                        if (SubscriptionManager.isValidSubscriptionId(defaultSubId) || activeSubInfoCountMax == z4 || !isActiveSubId(defaultSubId) || !isActiveSubId(sDefaultFallbackSubId.get()) || (sDefaultFallbackSubId.get() == i5 && this.lastPhoneId != i6)) {
                                                            logdl("setting default fallback subid to " + i5);
                                                            setDefaultFallbackSubId(i5, i2);
                                                            this.lastPhoneId = i6;
                                                        }
                                                        if (activeSubInfoCountMax == z4) {
                                                            logdl("[addSubInfoRecord] one sim set defaults to subId=" + i5);
                                                            setDefaultDataSubId(i5);
                                                            setDefaultSmsSubId(i5);
                                                            setDefaultVoiceSubId(i5);
                                                        }
                                                    } else {
                                                        updateDefaultSubIdsIfNeeded(i5, i2);
                                                    }
                                                } else {
                                                    logdl("[addSubInfoRecord] current SubId is already known, IGNORE");
                                                }
                                                logdl("[addSubInfoRecord] hashmap(" + i6 + "," + i5 + ")");
                                            } while (cursorQuery.moveToNext());
                                        }
                                    } catch (Throwable th4) {
                                        if (cursorQuery != null) {
                                            cursorQuery.close();
                                        }
                                        throw th4;
                                    }
                                }
                                if (cursorQuery != null) {
                                    cursorQuery.close();
                                }
                                refreshCachedActiveSubscriptionInfoList();
                                if (isSubscriptionForRemoteSim(i2)) {
                                    notifySubscriptionInfoChanged();
                                } else {
                                    subIdUsingPhoneId = getSubIdUsingPhoneId(i6);
                                    if (!SubscriptionManager.isValidSubscriptionId(subIdUsingPhoneId)) {
                                        logdl("[addSubInfoRecord]- getSubId failed invalid subId = " + subIdUsingPhoneId);
                                        Binder.restoreCallingIdentity(j);
                                        return -1;
                                    }
                                    if (z2) {
                                        simOperatorName = this.mTelephonyManager.getSimOperatorName(subIdUsingPhoneId);
                                        simOperatorNumeric = this.mTelephonyManager.getSimOperatorNumeric(subIdUsingPhoneId);
                                        if ("20404".equals(simOperatorNumeric) || !TextUtils.isEmpty(simOperatorName)) {
                                            strLookupOperatorNameForDisplayName = MtkSpnOverride.getInstance().lookupOperatorNameForDisplayName(subIdUsingPhoneId, simOperatorNumeric, z4, this.mContext);
                                        } else {
                                            strLookupOperatorNameForDisplayName = "";
                                        }
                                        if (ENGDEBUG) {
                                            logd("[addSubInfoRecord]- simNumeric: " + simOperatorNumeric + ", simMvnoName: " + strLookupOperatorNameForDisplayName);
                                        }
                                        if (!TextUtils.isEmpty(strLookupOperatorNameForDisplayName)) {
                                            str5 = strLookupOperatorNameForDisplayName;
                                        } else if (TextUtils.isEmpty(simOperatorName)) {
                                            str5 = simOperatorName;
                                        } else {
                                            str5 = "CARD " + Integer.toString(i6 + 1);
                                        }
                                        ContentValues contentValues4 = new ContentValues();
                                        contentValues4.put("display_name", str5);
                                        contentResolver.update(SubscriptionManager.getUriForSubscriptionId(subIdUsingPhoneId), contentValues4, null, null);
                                        logdl("[addSubInfoRecord] sim name = " + str5);
                                    }
                                    refreshCachedActiveSubscriptionInfoList();
                                    logdl("[addSubInfoRecord]- info size=" + sSlotIndexToSubIds.size());
                                }
                                Binder.restoreCallingIdentity(j);
                                return 0;
                            } catch (Throwable th5) {
                                th = th5;
                            }
                        } catch (Throwable th6) {
                            th = th6;
                        }
                    } catch (Throwable th7) {
                        th = th7;
                    }
                    if (r15 != 0) {
                        cursorQuery2.close();
                    }
                    throw th;
                } catch (Throwable th8) {
                    th = th8;
                    Binder.restoreCallingIdentity(j);
                    throw th;
                }
            } catch (Throwable th9) {
                th = th9;
                j = jClearCallingIdentity;
            }
        } catch (Throwable th10) {
            th = th10;
            j = jClearCallingIdentity;
        }
    }

    public int getDefaultFallbackSubId() {
        return sDefaultFallbackSubId.get();
    }

    protected SubscriptionInfo getSubInfoRecord(Cursor cursor) {
        MtkSubscriptionController mtkSubscriptionController;
        String str;
        int i = cursor.getInt(cursor.getColumnIndexOrThrow("_id"));
        String string = cursor.getString(cursor.getColumnIndexOrThrow("icc_id"));
        int i2 = cursor.getInt(cursor.getColumnIndexOrThrow("sim_id"));
        String string2 = cursor.getString(cursor.getColumnIndexOrThrow("display_name"));
        String string3 = cursor.getString(cursor.getColumnIndexOrThrow("carrier_name"));
        int i3 = cursor.getInt(cursor.getColumnIndexOrThrow("name_source"));
        int i4 = cursor.getInt(cursor.getColumnIndexOrThrow("color"));
        String string4 = cursor.getString(cursor.getColumnIndexOrThrow(PplMessageManager.PendingMessage.KEY_NUMBER));
        int i5 = cursor.getInt(cursor.getColumnIndexOrThrow("data_roaming"));
        Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ic_menu_compose);
        String string5 = cursor.getString(cursor.getColumnIndexOrThrow("mcc_string"));
        String string6 = cursor.getString(cursor.getColumnIndexOrThrow("mnc_string"));
        String string7 = cursor.getString(cursor.getColumnIndexOrThrow("ehplmns"));
        String string8 = cursor.getString(cursor.getColumnIndexOrThrow("hplmns"));
        String[] strArrSplit = string7 == null ? null : string7.split(",");
        String[] strArrSplit2 = string8 == null ? null : string8.split(",");
        String string9 = cursor.getString(cursor.getColumnIndexOrThrow("card_id"));
        String[] strArr = strArrSplit2;
        String string10 = cursor.getString(cursor.getColumnIndexOrThrow("iso_country_code"));
        String[] strArr2 = strArrSplit;
        int iConvertToPublicCardId = this.mUiccController.convertToPublicCardId(string9);
        boolean z = cursor.getInt(cursor.getColumnIndexOrThrow("is_embedded")) == 1;
        int i6 = cursor.getInt(cursor.getColumnIndexOrThrow("carrier_id"));
        UiccAccessRule[] uiccAccessRuleArrDecodeRules = z ? UiccAccessRule.decodeRules(cursor.getBlob(cursor.getColumnIndexOrThrow("access_rules"))) : null;
        UiccAccessRule[] uiccAccessRuleArrDecodeRules2 = UiccAccessRule.decodeRules(cursor.getBlob(cursor.getColumnIndexOrThrow("access_rules_from_carrier_configs")));
        boolean z2 = cursor.getInt(cursor.getColumnIndexOrThrow("is_opportunistic")) == 1;
        String string11 = cursor.getString(cursor.getColumnIndexOrThrow("group_uuid"));
        int i7 = cursor.getInt(cursor.getColumnIndexOrThrow("profile_class"));
        int i8 = cursor.getInt(cursor.getColumnIndexOrThrow("subscription_type"));
        String optionalStringFromCursor = getOptionalStringFromCursor(cursor, "group_owner", null);
        boolean z3 = cursor.getInt(cursor.getColumnIndexOrThrow("uicc_applications_enabled")) == 1;
        if (VDBG) {
            String str2 = "[getSubInfoRecord] id:" + i + " iccid:" + MtkSubscriptionInfo.givePrintableIccid(string) + " simSlotIndex:" + i2 + " carrierid:" + i6 + " displayName:" + string2 + " nameSource:" + i3 + " iconTint:" + i4 + " dataRoaming:" + i5 + " mcc:" + string5 + " mnc:" + string6 + " countIso:" + string10 + " isEmbedded:" + z + " accessRules:" + Arrays.toString(uiccAccessRuleArrDecodeRules) + " carrierConfigAccessRules: " + Arrays.toString(uiccAccessRuleArrDecodeRules2) + " cardId:" + MtkSubscriptionInfo.givePrintableIccid(string9) + " publicCardId:" + iConvertToPublicCardId + " isOpportunistic:" + z2 + " groupUUID:" + string11 + " profileClass:" + i7 + " subscriptionType: " + i8 + " carrierConfigAccessRules:" + uiccAccessRuleArrDecodeRules2 + " areUiccApplicationsEnabled: " + z3;
            mtkSubscriptionController = this;
            mtkSubscriptionController.logd(str2);
        } else {
            mtkSubscriptionController = this;
        }
        if (TextUtils.isEmpty(string4)) {
            String line1Number = mtkSubscriptionController.mTelephonyManager.getLine1Number(i);
            if (TextUtils.isEmpty(line1Number)) {
                str = string4;
            } else {
                str = string4;
                if (!line1Number.equals(str)) {
                    str = line1Number;
                }
            }
        } else {
            str = string4;
        }
        MtkSubscriptionInfo mtkSubscriptionInfo = new MtkSubscriptionInfo(i, string, i2, string2, string3, i3, i4, str, i5, bitmapDecodeResource, string5, string6, string10, z, uiccAccessRuleArrDecodeRules, string9, iConvertToPublicCardId, z2, string11, false, i6, i7, i8, optionalStringFromCursor, uiccAccessRuleArrDecodeRules2, z3);
        mtkSubscriptionInfo.setAssociatedPlmns(strArr2, strArr);
        return mtkSubscriptionInfo;
    }

    public MtkSubscriptionInfo getSubscriptionInfo(String str, int i, String str2) {
        MtkSubscriptionInfo subInfoRecord;
        String opPackageName = str;
        if (str == null) {
            opPackageName = this.mContext.getOpPackageName();
        }
        if (!TelephonyPermissions.checkCallingOrSelfReadPhoneState(this.mContext, i, opPackageName, str2, "getSubscriptionInfo")) {
            return null;
        }
        if (!SubscriptionManager.isValidSubscriptionId(i)) {
            logd("[getSubscriptionInfo]- invalid subId, subId =" + i);
            return null;
        }
        long jClearCallingIdentity = Binder.clearCallingIdentity();
        try {
            Cursor cursorQuery = this.mContext.getContentResolver().query(SubscriptionManager.CONTENT_URI, null, "_id=?", new String[]{Long.toString(i)}, null);
            try {
                if (cursorQuery == null) {
                    logd("[getSubscriptionInfo]- Query fail");
                } else if (cursorQuery.moveToFirst() && (subInfoRecord = getSubInfoRecord(cursorQuery)) != null) {
                    logd("[getSubscriptionInfo]+ subId=" + i + ", subInfo=" + subInfoRecord);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    Binder.restoreCallingIdentity(jClearCallingIdentity);
                    return subInfoRecord;
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                Binder.restoreCallingIdentity(jClearCallingIdentity);
                logd("[getSubscriptionInfo]- subId=" + i + ",subInfo=null");
                return null;
            } catch (Throwable th) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                throw th;
            }
        } catch (Throwable th2) {
            Binder.restoreCallingIdentity(jClearCallingIdentity);
            throw th2;
        }
    }

    public MtkSubscriptionInfo getSubscriptionInfoForIccId(String str, String str2, String str3) {
        String opPackageName = str;
        if (str == null) {
            opPackageName = this.mContext.getOpPackageName();
        }
        if (!TelephonyPermissions.checkCallingOrSelfReadPhoneState(this.mContext, -1, opPackageName, str3, "getSubscriptionInfoForIccId")) {
            return null;
        }
        if (str2 == null) {
            logd("[getSubscriptionInfoForIccId]- null iccid");
            return null;
        }
        long jClearCallingIdentity = Binder.clearCallingIdentity();
        try {
            Cursor cursorQuery = this.mContext.getContentResolver().query(SubscriptionManager.CONTENT_URI, null, "icc_id=?", new String[]{str2}, null);
            try {
                if (cursorQuery != null) {
                    while (cursorQuery.moveToNext()) {
                        MtkSubscriptionInfo subInfoRecord = getSubInfoRecord(cursorQuery);
                        if (subInfoRecord != null) {
                            logd("[getSubscriptionInfoForIccId]+ iccId=" + MtkSubscriptionInfo.givePrintableIccid(str2) + ", subInfo=" + subInfoRecord);
                            if (cursorQuery != null) {
                                cursorQuery.close();
                            }
                            Binder.restoreCallingIdentity(jClearCallingIdentity);
                            return subInfoRecord;
                        }
                    }
                } else {
                    logd("[getSubscriptionInfoForIccId]- Query fail");
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                Binder.restoreCallingIdentity(jClearCallingIdentity);
                logd("[getSubscriptionInfoForIccId]- iccId=" + str2 + ",subInfo=null");
                return null;
            } catch (Throwable th) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                throw th;
            }
        } catch (Throwable th2) {
            Binder.restoreCallingIdentity(jClearCallingIdentity);
            throw th2;
        }
    }

    protected void logdl(String str) {
        logd(str);
        this.mLocalLog.log(str);
    }

    public void notifySubscriptionInfoChanged() {
        ArrayList arrayList;
        TelephonyRegistryManager telephonyRegistryManager = (TelephonyRegistryManager) this.mContext.getSystemService("telephony_registry");
        logd("notifySubscriptionInfoChanged:");
        telephonyRegistryManager.notifySubscriptionInfoChanged();
        broadcastSimInfoContentChanged(null);
        MultiSimSettingController.getInstance().notifySubscriptionInfoChanged();
        TelephonyMetrics telephonyMetrics = TelephonyMetrics.getInstance();
        synchronized (this.mSubInfoListLock) {
            arrayList = new ArrayList(this.mCacheActiveSubInfoList);
        }
        if (this.mOpptSubInfoListChangedDirtyBit.getAndSet(false)) {
            notifyOpportunisticSubscriptionInfoChanged();
        }
        telephonyMetrics.updateActiveSubscriptionInfoList(arrayList);
        for (Phone phone : PhoneFactory.getPhones()) {
            phone.getVoiceCallSessionStats().onActiveSubscriptionInfoChanged(arrayList);
        }
    }

    public void notifySubscriptionInfoChanged(Intent intent) {
        ArrayList arrayList;
        TelephonyRegistryManager telephonyRegistryManager = (TelephonyRegistryManager) this.mContext.getSystemService("telephony_registry");
        logd("notifySubscriptionInfoChanged:");
        telephonyRegistryManager.notifySubscriptionInfoChanged();
        broadcastSimInfoContentChanged(intent);
        MultiSimSettingController.getInstance().notifySubscriptionInfoChanged();
        TelephonyMetrics telephonyMetrics = TelephonyMetrics.getInstance();
        synchronized (this.mSubInfoListLock) {
            arrayList = new ArrayList(this.mCacheActiveSubInfoList);
        }
        if (this.mOpptSubInfoListChangedDirtyBit.getAndSet(false)) {
            notifyOpportunisticSubscriptionInfoChanged();
        }
        telephonyMetrics.updateActiveSubscriptionInfoList(arrayList);
        for (Phone phone : PhoneFactory.getPhones()) {
            phone.getVoiceCallSessionStats().onActiveSubscriptionInfoChanged(arrayList);
        }
    }

    public void putSubinfoRecordUpdatedExtra(Intent intent, int i, int i2, int i3, String str) {
        logd("putSubinfoRecordUpdatedExtra: phoneId = " + i + " detectedType = " + i2 + " subCount = " + i3 + " propKey = " + str);
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length <= 0) {
            logd("putSubinfoRecordUpdatedExtra: no valid subs");
            intent.putExtra("phone", i);
            intent.putExtra("slot", i);
        } else {
            SubscriptionManager.putPhoneIdAndSubIdExtra(intent, i, subId[0]);
        }
        intent.putExtra("simDetectStatus", i2);
        intent.putExtra("simCount", i3);
        if (str != null) {
            intent.putExtra("simPropKey", str);
        } else {
            intent.putExtra("simPropKey", "");
        }
    }

    public void setDefaultDataSubIdWithoutCapabilitySwitch(int i) {
        enforceModifyPhoneState("setDefaultDataSubId");
        long jClearCallingIdentity = Binder.clearCallingIdentity();
        try {
            if (i == Integer.MAX_VALUE) {
                throw new RuntimeException("setDefaultDataSubIdWithoutCapabilitySwitch called with DEFAULT_SUB_ID");
            }
            if (ENGDEBUG) {
                logd("[setDefaultDataSubIdWithoutCapabilitySwitch] subId=" + i + ", Binder.getCallingPid and Binder.getCallingUid are " + Binder.getCallingPid() + "," + Binder.getCallingUid());
            }
            int defaultSubId = getDefaultSubId();
            setGlobalSetting("multi_sim_data_call", i);
            MultiSimSettingController.getInstance().notifyDefaultDataSubChanged();
            broadcastDefaultDataSubIdChanged(i);
            if (defaultSubId != getDefaultSubId()) {
                sendDefaultChangedBroadcast(getDefaultSubId());
            }
            Binder.restoreCallingIdentity(jClearCallingIdentity);
        } catch (Throwable th) {
            Binder.restoreCallingIdentity(jClearCallingIdentity);
            throw th;
        }
    }

    public void setDefaultVoiceSubId(int i) {
        super.setDefaultVoiceSubId(i);
        PhoneAccountHandle phoneAccountHandleForSubscriptionId = i == -1 ? null : this.mTelephonyManager.getPhoneAccountHandleForSubscriptionId(i);
        TelecomManager telecomManager = (TelecomManager) this.mContext.getSystemService(TelecomManager.class);
        PhoneAccountHandle userSelectedOutgoingPhoneAccount = telecomManager.getUserSelectedOutgoingPhoneAccount();
        if (phoneAccountHandleForSubscriptionId == null && userSelectedOutgoingPhoneAccount == null) {
            telecomManager.setUserSelectedOutgoingPhoneAccount(null);
            logd("[setDefaultVoiceSubId] setUserSelectedOutgoingPhoneAccount(null) when SIM plug out");
        }
    }

    public int setSubscriptionProperty(int i, String str, String str2) {
        int subscriptionProperty = super.setSubscriptionProperty(i, str, str2);
        if (ENGDEBUG) {
            logdl("[setSubscriptionProperty] propKey=" + str + ", propValue = " + str2 + ", subId=" + i + ", Binder.getCallingPid and Binder.getCallingUid are " + Binder.getCallingPid() + "," + Binder.getCallingUid());
        }
        long jClearCallingIdentity = Binder.clearCallingIdentity();
        if (subscriptionProperty != 0) {
            try {
                Intent intent = new Intent("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
                int phoneId = getPhoneId(i);
                List activeSubscriptionInfoList = getActiveSubscriptionInfoList(this.mContext.getOpPackageName(), this.mContext.getAttributionTag());
                putSubinfoRecordUpdatedExtra(intent, phoneId, 4, activeSubscriptionInfoList == null ? 0 : activeSubscriptionInfoList.size(), str);
                notifySubscriptionInfoChanged(intent);
            } finally {
                Binder.restoreCallingIdentity(jClearCallingIdentity);
            }
        }
        return subscriptionProperty;
    }
}

package com.mediatek.internal.telephony;

import android.content.pm.Signature;
import android.telephony.Rlog;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkEmbmsUtils {
    private static final String TAG = "MtkEmbmsUtils";
    private static MtkEmbmsUtils mInstance = null;
    private ArrayList<Integer> CERTIFIED_SIGNATURE;
    private final int SIGNATURE_RJIO = 680336054;
    private final int SIGNATURE_EXPWAY_EBOX = -771910231;

    private MtkEmbmsUtils() {
        ArrayList<Integer> arrayList = new ArrayList<>();
        this.CERTIFIED_SIGNATURE = arrayList;
        arrayList.add(680336054);
        this.CERTIFIED_SIGNATURE.add(-771910231);
    }

    public static MtkEmbmsUtils getInstance() {
        MtkEmbmsUtils mtkEmbmsUtils = mInstance;
        if (mtkEmbmsUtils != null) {
            return mtkEmbmsUtils;
        }
        MtkEmbmsUtils mtkEmbmsUtils2 = new MtkEmbmsUtils();
        mInstance = mtkEmbmsUtils2;
        return mtkEmbmsUtils2;
    }

    public boolean isCertifiedMiddleware(Signature[] signatureArr) {
        for (Signature signature : signatureArr) {
            Rlog.i(TAG, "The signature hashcode of the middleware = " + signature.hashCode());
            if (this.CERTIFIED_SIGNATURE.contains(Integer.valueOf(signature.hashCode()))) {
                return true;
            }
        }
        return false;
    }
}

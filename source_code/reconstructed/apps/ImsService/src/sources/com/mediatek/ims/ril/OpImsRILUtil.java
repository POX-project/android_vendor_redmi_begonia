package com.mediatek.ims.ril;

import android.content.Context;
import android.telephony.Rlog;
import java.lang.reflect.Constructor;

/* JADX INFO: loaded from: classes.dex */
public class OpImsRILUtil {
    private static final String TAG = "OpImsRILUtil";
    private static Constructor<?> sConstructor;

    static {
        try {
            sConstructor = Class.forName("com.mediatek.op.ims.ril.OpImsRIL").getConstructor(Context.class, Integer.TYPE);
        } catch (ClassNotFoundException e) {
            Rlog.d(TAG, "OP packages classes are not found");
        } catch (Exception e2) {
            Rlog.d(TAG, "Load OP package fail");
        }
    }

    public static OpImsCommandsInterface makeCommandInterface(Context context, int i) {
        Constructor<?> constructor = sConstructor;
        if (constructor != null) {
            try {
                return (OpImsCommandsInterface) constructor.newInstance(context, Integer.valueOf(i));
            } catch (Exception e) {
                Rlog.d(TAG, "OP packages cannot be created");
            }
        }
        Rlog.d(TAG, "Load default OP packages");
        return new DefaultOpImsRIL(i);
    }
}

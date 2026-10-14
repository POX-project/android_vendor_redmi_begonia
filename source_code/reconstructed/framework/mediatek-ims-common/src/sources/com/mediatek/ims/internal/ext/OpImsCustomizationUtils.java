package com.mediatek.ims.internal.ext;

import android.content.Context;
import com.mediatek.common.util.OperatorCustomizationFactoryLoader;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class OpImsCustomizationUtils {
    static OpImsCustomizationFactoryBase sFactory;
    private static final List<OperatorCustomizationFactoryLoader.OperatorFactoryInfo> sOperatorFactoryInfoList;

    static {
        ArrayList arrayList = new ArrayList();
        sOperatorFactoryInfoList = arrayList;
        sFactory = null;
        arrayList.add(new OperatorCustomizationFactoryLoader.OperatorFactoryInfo("OP18Ims.jar", "com.mediatek.op18.ims.Op18ImsCustomizationFactory", (String) null, "OP18"));
        sOperatorFactoryInfoList.add(new OperatorCustomizationFactoryLoader.OperatorFactoryInfo("OP15Ims.jar", "com.mediatek.op15.ims.Op15ImsCustomizationFactory", (String) null, "OP15"));
        sOperatorFactoryInfoList.add(new OperatorCustomizationFactoryLoader.OperatorFactoryInfo("OP236Ims.jar", "com.mediatek.op236.ims.Op236ImsCustomizationFactory", (String) null, "OP236"));
    }

    public static synchronized OpImsCustomizationFactoryBase getOpFactory(Context context) {
        OpImsCustomizationFactoryBase opImsCustomizationFactoryBase = (OpImsCustomizationFactoryBase) OperatorCustomizationFactoryLoader.loadFactory(context, sOperatorFactoryInfoList);
        sFactory = opImsCustomizationFactoryBase;
        if (opImsCustomizationFactoryBase == null) {
            sFactory = new OpImsCustomizationFactoryBase();
        }
        return sFactory;
    }
}

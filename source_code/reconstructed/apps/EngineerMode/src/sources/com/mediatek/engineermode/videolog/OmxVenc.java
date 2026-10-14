package com.mediatek.engineermode.videolog;

import android.os.RemoteException;
import android.os.SystemProperties;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;

/* JADX INFO: compiled from: VideoLogItem.java */
/* JADX INFO: loaded from: classes3.dex */
class OmxVenc extends VideoLogItem {
    protected static final String LOG_PROP_1 = "vendor.mtk.omx.enable.venc.log";

    OmxVenc() {
    }

    @Override // com.mediatek.engineermode.videolog.VideoLogItem
    protected String getStatusProp() {
        return LOG_PROP_1;
    }

    @Override // com.mediatek.engineermode.videolog.VideoLogItem
    protected boolean switchLog(boolean z) {
        String str = z ? "1" : "0";
        try {
            EmUtils.getEmHidlService().setOmxVencLogEnable(str);
        } catch (RemoteException e) {
            e.printStackTrace();
            Elog.e("VideoLog", "set property failed ...");
        }
        return str.equals(SystemProperties.get(LOG_PROP_1));
    }
}

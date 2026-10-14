package com.mediatek.lbs.em2.utils;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class AgpsSetting {
    public boolean agpsEnable = false;
    public int agpsProtocol = 0;
    public boolean gpevt = false;
    public boolean e911GpsIconEnable = false;
    public boolean e911OpenGpsEnable = false;
    public boolean tc10IgnoreFwConfig = false;
    public boolean lppeHideWifiBtStatus = false;
    public boolean lppeNetworkLocationDisable = false;
    public boolean agpsNvramEnable = false;
    public boolean lbsLogEnable = false;
    public int lppeCrowdSourceConfident = 90;
    public boolean ignoreSiForE911 = false;
    public boolean useTc10Config = false;
    public boolean defaultNlpEnable = false;
    public int emergencyExtSecs = 0;

    protected static void loge(Object obj) {
        Log.d("LocationEM [agps] ERR:", obj.toString());
    }

    public boolean correctIfInvalid() {
        int i = this.agpsProtocol;
        if (i >= 0 && i <= 1) {
            return true;
        }
        loge("agpsProtocol=" + this.agpsProtocol);
        this.agpsProtocol = 0;
        return false;
    }

    public String toString() {
        String str;
        String str2 = "agpsEnable=[" + this.agpsEnable + "] ";
        int i = this.agpsProtocol;
        if (i == 0) {
            str = str2 + "agpsProtocol=[UP] ";
        } else if (i == 1) {
            str = str2 + "agpsProtocol=[CP] ";
        } else {
            str = str2 + "agpsProtocol=[UKNOWN " + this.agpsProtocol + "] ";
        }
        return ((((((((((((str + "gpevt=[" + this.gpevt + "] ") + "e911GpsIconEnable=[" + this.e911GpsIconEnable + "] ") + "e911OpenGpsEnable=[" + this.e911OpenGpsEnable + "] ") + "tc10IgnoreFwConfig=[" + this.tc10IgnoreFwConfig + "] ") + "lppeHideWifiBtStatus=[" + this.lppeHideWifiBtStatus + "] ") + "lppeNetworkLocationDisable=[" + this.lppeNetworkLocationDisable + "] ") + "agpsNvramEnable=[" + this.agpsNvramEnable + "] ") + "lbsLogEnable=[" + this.lbsLogEnable + "] ") + "lppeCrowdSourceConfident=[" + this.lppeCrowdSourceConfident + "] ") + "ignoreSiForE911=[" + this.ignoreSiForE911 + "] ") + "useTc10Config=[" + this.useTc10Config + "] ") + "defaultNlpEnable=[" + this.defaultNlpEnable + "] ") + "emergencyExtSecs=[" + this.emergencyExtSecs + "] ";
    }
}

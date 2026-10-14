package com.mediatek.internal.telephony;

import android.content.Context;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;
import com.mediatek.internal.telephony.dataconnection.DataConnectionExt;
import com.mediatek.internal.telephony.dataconnection.IDataConnectionExt;
import com.mediatek.internal.telephony.datasub.DataSubSelectorOpExt;
import com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt;
import com.mediatek.internal.telephony.datasub.ISimSwitchForDSSExt;
import com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt;
import com.mediatek.internal.telephony.datasub.SimSwitchForDSSExt;
import com.mediatek.internal.telephony.datasub.SmartDataSwitchAssistantOpExt;
import com.mediatek.internal.telephony.devreg.DefaultDeviceRegisterExt;
import com.mediatek.internal.telephony.devreg.DeviceRegisterController;
import com.mediatek.internal.telephony.devreg.IDeviceRegisterExt;
import com.mediatek.internal.telephony.digits.DigitsUssdManager;
import com.mediatek.internal.telephony.digits.DigitsUssdManagerBase;
import com.mediatek.internal.telephony.digits.DigitsUtil;
import com.mediatek.internal.telephony.digits.DigitsUtilBase;
import com.mediatek.internal.telephony.scbm.ISCBMManager;
import com.mediatek.internal.telephony.scbm.SCBMManagerDefault;
import com.mediatek.internal.telephony.selfactivation.ISelfActivation;
import com.mediatek.internal.telephony.selfactivation.SelfActivationDefault;
import com.mediatek.internal.telephony.uicc.IMtkRsuSml;
import com.mediatek.internal.telephony.uicc.IMtkSimHandler;
import com.mediatek.internal.telephony.uicc.MtkSimHandler;

/* JADX INFO: loaded from: classes.dex */
public class OpTelephonyCustomizationFactoryBase {
    public IDataConnectionExt makeDataConnectionExt(Context context) {
        return new DataConnectionExt(context);
    }

    public IDataSubSelectorOPExt makeDataSubSelectorOPExt(Context context) {
        return new DataSubSelectorOpExt(context);
    }

    public IDeviceRegisterExt makeDeviceRegisterExt(Context context, DeviceRegisterController deviceRegisterController) {
        return new DefaultDeviceRegisterExt(context, deviceRegisterController);
    }

    public DigitsUssdManager makeDigitsUssdManager() {
        return new DigitsUssdManagerBase();
    }

    public DigitsUtil makeDigitsUtil() {
        return new DigitsUtilBase();
    }

    public IMtkGsmCdmaCallTrackerExt makeMtkGsmCdmaCallTrackerExt(Context context) {
        return new MtkGsmCdmaCallTrackerExt(context);
    }

    public IMtkProxyControllerExt makeMtkProxyControllerExt(Context context) {
        return new MtkProxyControllerExt(context);
    }

    public IMtkSimHandler makeMtkSimHandler(Context context, CommandsInterface commandsInterface) {
        Rlog.d("makeMtkSimHandler", "[makeMtkSimHandler] ");
        return new MtkSimHandler(context, commandsInterface);
    }

    public IMtkRsuSml makeRsuSml(Context context, CommandsInterface[] commandsInterfaceArr) {
        return null;
    }

    public ISCBMManager makeSCBMManager(Context context, int i, CommandsInterface commandsInterface) {
        return new SCBMManagerDefault(context, i, commandsInterface);
    }

    public ISelfActivation makeSelfActivationInstance(int i) {
        return new SelfActivationDefault(i);
    }

    public IServiceStateTrackerExt makeServiceStateTrackerExt(Context context) {
        return new ServiceStateTrackerExt(context);
    }

    public ISimSwitchForDSSExt makeSimSwitchForDSSOPExt(Context context) {
        return new SimSwitchForDSSExt(context);
    }

    public ISmartDataSwitchAssistantOpExt makeSmartDataSwitchAssistantOpExt(Context context) {
        return new SmartDataSwitchAssistantOpExt(context);
    }

    public IDefaultTelephonyExt makeTelephonyExt(Context context) {
        return new DefaultTelephonyExt(context);
    }
}

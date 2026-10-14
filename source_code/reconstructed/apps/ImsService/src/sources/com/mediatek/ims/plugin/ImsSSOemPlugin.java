package com.mediatek.ims.plugin;

import android.telephony.ims.ImsReasonInfo;
import com.android.internal.telephony.CommandException;

/* JADX INFO: loaded from: classes.dex */
public interface ImsSSOemPlugin {
    ImsReasonInfo commandExceptionToReason(CommandException commandException, int i);

    int getVolteSubDisableConstant();

    int getVolteSubEnableConstant();

    int getVolteSubUnknownConstant();

    String getVolteSubscriptionKey();

    String getXCAPErrorMessageFromSysProp(CommandException.Error error, int i);

    String getXcapQueryCarrierConfigKey();
}

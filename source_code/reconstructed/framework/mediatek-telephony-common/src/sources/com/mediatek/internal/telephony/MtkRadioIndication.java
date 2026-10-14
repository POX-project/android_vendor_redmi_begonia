package com.mediatek.internal.telephony;

import android.content.Intent;
import android.hardware.radio.V1_2.CellIdentityOperatorNames;
import android.hardware.radio.V1_2.CellInfo;
import android.hardware.radio.V1_2.CellInfoGsm;
import android.hardware.radio.V1_2.CellInfoLte;
import android.hardware.radio.V1_2.CellInfoWcdma;
import android.hardware.radio.V1_2.NetworkScanResult;
import android.hardware.radio.V1_5.CellInfoNr;
import android.os.UserHandle;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.RadioIndication;
import com.mediatek.internal.telephony.ppl.IPplSmsFilter;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioIndication extends RadioIndication {
    private static final String TAG = "MtkRadioInd";
    private MtkRIL mMtkRil;

    MtkRadioIndication(RIL ril) {
        super(ril);
        this.mMtkRil = (MtkRIL) ril;
    }

    private int getSubId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length <= 0) {
            return -1;
        }
        return subId[0];
    }

    public void networkScanResult_1_2(int i, NetworkScanResult networkScanResult) {
        Iterator it = networkScanResult.networkInfos.iterator();
        while (it.hasNext()) {
            String str = null;
            CellInfo cellInfo = (CellInfo) it.next();
            int i2 = cellInfo.cellInfoType;
            if (i2 == 1) {
                CellInfoGsm cellInfoGsm = (CellInfoGsm) cellInfo.gsm.get(0);
                str = cellInfoGsm.cellIdentityGsm.base.mcc + cellInfoGsm.cellIdentityGsm.base.mnc;
                int i3 = cellInfoGsm.cellIdentityGsm.base.lac;
                CellIdentityOperatorNames cellIdentityOperatorNames = cellInfoGsm.cellIdentityGsm.operatorNames;
                MtkRIL mtkRIL = this.mMtkRil;
                cellIdentityOperatorNames.alphaLong = mtkRIL.lookupOperatorName(getSubId(mtkRIL.mInstanceId.intValue()), str, true, i3);
                CellIdentityOperatorNames cellIdentityOperatorNames2 = cellInfoGsm.cellIdentityGsm.operatorNames;
                MtkRIL mtkRIL2 = this.mMtkRil;
                cellIdentityOperatorNames2.alphaShort = mtkRIL2.lookupOperatorName(getSubId(mtkRIL2.mInstanceId.intValue()), str, false, i3);
                if (1 != 0) {
                    cellInfoGsm.cellIdentityGsm.operatorNames.alphaLong = cellInfoGsm.cellIdentityGsm.operatorNames.alphaLong.concat(" 2G");
                    cellInfoGsm.cellIdentityGsm.operatorNames.alphaShort = cellInfoGsm.cellIdentityGsm.operatorNames.alphaShort.concat(" 2G");
                }
            } else if (i2 != 2) {
                if (i2 == 3) {
                    CellInfoLte cellInfoLte = (CellInfoLte) cellInfo.lte.get(0);
                    str = cellInfoLte.cellIdentityLte.base.mcc + cellInfoLte.cellIdentityLte.base.mnc;
                    int i4 = cellInfoLte.cellIdentityLte.base.tac;
                    CellIdentityOperatorNames cellIdentityOperatorNames3 = cellInfoLte.cellIdentityLte.operatorNames;
                    MtkRIL mtkRIL3 = this.mMtkRil;
                    cellIdentityOperatorNames3.alphaLong = mtkRIL3.lookupOperatorName(getSubId(mtkRIL3.mInstanceId.intValue()), str, true, i4);
                    CellIdentityOperatorNames cellIdentityOperatorNames4 = cellInfoLte.cellIdentityLte.operatorNames;
                    MtkRIL mtkRIL4 = this.mMtkRil;
                    cellIdentityOperatorNames4.alphaShort = mtkRIL4.lookupOperatorName(getSubId(mtkRIL4.mInstanceId.intValue()), str, false, i4);
                    if (1 != 0) {
                        cellInfoLte.cellIdentityLte.operatorNames.alphaLong = cellInfoLte.cellIdentityLte.operatorNames.alphaLong.concat(" 4G");
                        cellInfoLte.cellIdentityLte.operatorNames.alphaShort = cellInfoLte.cellIdentityLte.operatorNames.alphaShort.concat(" 4G");
                    }
                } else {
                    if (i2 != 4) {
                        throw new RuntimeException("unexpected cellinfotype: " + cellInfo.cellInfoType);
                    }
                    CellInfoWcdma cellInfoWcdma = (CellInfoWcdma) cellInfo.wcdma.get(0);
                    str = cellInfoWcdma.cellIdentityWcdma.base.mcc + cellInfoWcdma.cellIdentityWcdma.base.mnc;
                    int i5 = cellInfoWcdma.cellIdentityWcdma.base.lac;
                    CellIdentityOperatorNames cellIdentityOperatorNames5 = cellInfoWcdma.cellIdentityWcdma.operatorNames;
                    MtkRIL mtkRIL5 = this.mMtkRil;
                    cellIdentityOperatorNames5.alphaLong = mtkRIL5.lookupOperatorName(getSubId(mtkRIL5.mInstanceId.intValue()), str, true, i5);
                    CellIdentityOperatorNames cellIdentityOperatorNames6 = cellInfoWcdma.cellIdentityWcdma.operatorNames;
                    MtkRIL mtkRIL6 = this.mMtkRil;
                    cellIdentityOperatorNames6.alphaShort = mtkRIL6.lookupOperatorName(getSubId(mtkRIL6.mInstanceId.intValue()), str, false, i5);
                    if (1 != 0) {
                        cellInfoWcdma.cellIdentityWcdma.operatorNames.alphaLong = cellInfoWcdma.cellIdentityWcdma.operatorNames.alphaLong.concat(" 3G");
                        cellInfoWcdma.cellIdentityWcdma.operatorNames.alphaShort = cellInfoWcdma.cellIdentityWcdma.operatorNames.alphaShort.concat(" 3G");
                    }
                }
            }
            if (this.mMtkRil.hidePLMN(str)) {
                it.remove();
                this.mMtkRil.mtkRiljLog("remove this one " + str);
            }
        }
        super.networkScanResult_1_2(i, networkScanResult);
    }

    public void networkScanResult_1_4(int i, android.hardware.radio.V1_4.NetworkScanResult networkScanResult) {
        Iterator it = networkScanResult.networkInfos.iterator();
        while (it.hasNext()) {
            String str = null;
            android.hardware.radio.V1_4.CellInfo cellInfo = (android.hardware.radio.V1_4.CellInfo) it.next();
            byte discriminator = cellInfo.info.getDiscriminator();
            if (discriminator == 0) {
                CellInfoGsm cellInfoGsmGsm = cellInfo.info.gsm();
                str = cellInfoGsmGsm.cellIdentityGsm.base.mcc + cellInfoGsmGsm.cellIdentityGsm.base.mnc;
                int i2 = cellInfoGsmGsm.cellIdentityGsm.base.lac;
                CellIdentityOperatorNames cellIdentityOperatorNames = cellInfoGsmGsm.cellIdentityGsm.operatorNames;
                MtkRIL mtkRIL = this.mMtkRil;
                cellIdentityOperatorNames.alphaLong = mtkRIL.lookupOperatorName(getSubId(mtkRIL.mInstanceId.intValue()), str, true, i2);
                CellIdentityOperatorNames cellIdentityOperatorNames2 = cellInfoGsmGsm.cellIdentityGsm.operatorNames;
                MtkRIL mtkRIL2 = this.mMtkRil;
                cellIdentityOperatorNames2.alphaShort = mtkRIL2.lookupOperatorName(getSubId(mtkRIL2.mInstanceId.intValue()), str, false, i2);
                if (1 != 0) {
                    cellInfoGsmGsm.cellIdentityGsm.operatorNames.alphaLong = cellInfoGsmGsm.cellIdentityGsm.operatorNames.alphaLong.concat(" 2G");
                    cellInfoGsmGsm.cellIdentityGsm.operatorNames.alphaShort = cellInfoGsmGsm.cellIdentityGsm.operatorNames.alphaShort.concat(" 2G");
                }
            } else if (discriminator != 1) {
                if (discriminator == 2) {
                    CellInfoWcdma cellInfoWcdmaWcdma = cellInfo.info.wcdma();
                    str = cellInfoWcdmaWcdma.cellIdentityWcdma.base.mcc + cellInfoWcdmaWcdma.cellIdentityWcdma.base.mnc;
                    int i3 = cellInfoWcdmaWcdma.cellIdentityWcdma.base.lac;
                    CellIdentityOperatorNames cellIdentityOperatorNames3 = cellInfoWcdmaWcdma.cellIdentityWcdma.operatorNames;
                    MtkRIL mtkRIL3 = this.mMtkRil;
                    cellIdentityOperatorNames3.alphaLong = mtkRIL3.lookupOperatorName(getSubId(mtkRIL3.mInstanceId.intValue()), str, true, i3);
                    CellIdentityOperatorNames cellIdentityOperatorNames4 = cellInfoWcdmaWcdma.cellIdentityWcdma.operatorNames;
                    MtkRIL mtkRIL4 = this.mMtkRil;
                    cellIdentityOperatorNames4.alphaShort = mtkRIL4.lookupOperatorName(getSubId(mtkRIL4.mInstanceId.intValue()), str, false, i3);
                    if (1 != 0) {
                        cellInfoWcdmaWcdma.cellIdentityWcdma.operatorNames.alphaLong = cellInfoWcdmaWcdma.cellIdentityWcdma.operatorNames.alphaLong.concat(" 3G");
                        cellInfoWcdmaWcdma.cellIdentityWcdma.operatorNames.alphaShort = cellInfoWcdmaWcdma.cellIdentityWcdma.operatorNames.alphaShort.concat(" 3G");
                    }
                } else {
                    if (discriminator != 4) {
                        throw new RuntimeException("unexpected cellinfotype: " + ((int) cellInfo.info.getDiscriminator()));
                    }
                    android.hardware.radio.V1_4.CellInfoLte cellInfoLteLte = cellInfo.info.lte();
                    str = cellInfoLteLte.base.cellIdentityLte.base.mcc + cellInfoLteLte.base.cellIdentityLte.base.mnc;
                    int i4 = cellInfoLteLte.base.cellIdentityLte.base.tac;
                    CellIdentityOperatorNames cellIdentityOperatorNames5 = cellInfoLteLte.base.cellIdentityLte.operatorNames;
                    MtkRIL mtkRIL5 = this.mMtkRil;
                    cellIdentityOperatorNames5.alphaLong = mtkRIL5.lookupOperatorName(getSubId(mtkRIL5.mInstanceId.intValue()), str, true, i4);
                    CellIdentityOperatorNames cellIdentityOperatorNames6 = cellInfoLteLte.base.cellIdentityLte.operatorNames;
                    MtkRIL mtkRIL6 = this.mMtkRil;
                    cellIdentityOperatorNames6.alphaShort = mtkRIL6.lookupOperatorName(getSubId(mtkRIL6.mInstanceId.intValue()), str, false, i4);
                    if (1 != 0) {
                        cellInfoLteLte.base.cellIdentityLte.operatorNames.alphaLong = cellInfoLteLte.base.cellIdentityLte.operatorNames.alphaLong.concat(" 4G");
                        cellInfoLteLte.base.cellIdentityLte.operatorNames.alphaShort = cellInfoLteLte.base.cellIdentityLte.operatorNames.alphaShort.concat(" 4G");
                    }
                }
            }
            if (this.mMtkRil.hidePLMN(str)) {
                it.remove();
                this.mMtkRil.mtkRiljLog("remove this one " + str);
            }
        }
        super.networkScanResult_1_4(i, networkScanResult);
    }

    public void networkScanResult_1_5(int i, android.hardware.radio.V1_5.NetworkScanResult networkScanResult) {
        Iterator it = networkScanResult.networkInfos.iterator();
        while (it.hasNext()) {
            String str = null;
            android.hardware.radio.V1_5.CellInfo cellInfo = (android.hardware.radio.V1_5.CellInfo) it.next();
            byte discriminator = cellInfo.ratSpecificInfo.getDiscriminator();
            if (discriminator == 0) {
                android.hardware.radio.V1_5.CellInfoGsm cellInfoGsmGsm = cellInfo.ratSpecificInfo.gsm();
                str = cellInfoGsmGsm.cellIdentityGsm.base.base.mcc + cellInfoGsmGsm.cellIdentityGsm.base.base.mnc;
                int i2 = cellInfoGsmGsm.cellIdentityGsm.base.base.lac;
                CellIdentityOperatorNames cellIdentityOperatorNames = cellInfoGsmGsm.cellIdentityGsm.base.operatorNames;
                MtkRIL mtkRIL = this.mMtkRil;
                cellIdentityOperatorNames.alphaLong = mtkRIL.lookupOperatorNameForPlmnList(getSubId(mtkRIL.mInstanceId.intValue()), str, true, i2);
                CellIdentityOperatorNames cellIdentityOperatorNames2 = cellInfoGsmGsm.cellIdentityGsm.base.operatorNames;
                MtkRIL mtkRIL2 = this.mMtkRil;
                cellIdentityOperatorNames2.alphaShort = mtkRIL2.lookupOperatorNameForPlmnList(getSubId(mtkRIL2.mInstanceId.intValue()), str, false, i2);
                if (1 != 0) {
                    cellInfoGsmGsm.cellIdentityGsm.base.operatorNames.alphaLong = cellInfoGsmGsm.cellIdentityGsm.base.operatorNames.alphaLong.concat(" 2G");
                    cellInfoGsmGsm.cellIdentityGsm.base.operatorNames.alphaShort = cellInfoGsmGsm.cellIdentityGsm.base.operatorNames.alphaShort.concat(" 2G");
                }
            } else if (discriminator == 1) {
                android.hardware.radio.V1_5.CellInfoWcdma cellInfoWcdmaWcdma = cellInfo.ratSpecificInfo.wcdma();
                str = cellInfoWcdmaWcdma.cellIdentityWcdma.base.base.mcc + cellInfoWcdmaWcdma.cellIdentityWcdma.base.base.mnc;
                int i3 = cellInfoWcdmaWcdma.cellIdentityWcdma.base.base.lac;
                CellIdentityOperatorNames cellIdentityOperatorNames3 = cellInfoWcdmaWcdma.cellIdentityWcdma.base.operatorNames;
                MtkRIL mtkRIL3 = this.mMtkRil;
                cellIdentityOperatorNames3.alphaLong = mtkRIL3.lookupOperatorNameForPlmnList(getSubId(mtkRIL3.mInstanceId.intValue()), str, true, i3);
                CellIdentityOperatorNames cellIdentityOperatorNames4 = cellInfoWcdmaWcdma.cellIdentityWcdma.base.operatorNames;
                MtkRIL mtkRIL4 = this.mMtkRil;
                cellIdentityOperatorNames4.alphaShort = mtkRIL4.lookupOperatorNameForPlmnList(getSubId(mtkRIL4.mInstanceId.intValue()), str, false, i3);
                if (1 != 0) {
                    cellInfoWcdmaWcdma.cellIdentityWcdma.base.operatorNames.alphaLong = cellInfoWcdmaWcdma.cellIdentityWcdma.base.operatorNames.alphaLong.concat(" 3G");
                    cellInfoWcdmaWcdma.cellIdentityWcdma.base.operatorNames.alphaShort = cellInfoWcdmaWcdma.cellIdentityWcdma.base.operatorNames.alphaShort.concat(" 3G");
                }
            } else if (discriminator == 3) {
                android.hardware.radio.V1_5.CellInfoLte cellInfoLteLte = cellInfo.ratSpecificInfo.lte();
                str = cellInfoLteLte.cellIdentityLte.base.base.mcc + cellInfoLteLte.cellIdentityLte.base.base.mnc;
                int i4 = cellInfoLteLte.cellIdentityLte.base.base.tac;
                CellIdentityOperatorNames cellIdentityOperatorNames5 = cellInfoLteLte.cellIdentityLte.base.operatorNames;
                MtkRIL mtkRIL5 = this.mMtkRil;
                cellIdentityOperatorNames5.alphaLong = mtkRIL5.lookupOperatorNameForPlmnList(getSubId(mtkRIL5.mInstanceId.intValue()), str, true, i4);
                CellIdentityOperatorNames cellIdentityOperatorNames6 = cellInfoLteLte.cellIdentityLte.base.operatorNames;
                MtkRIL mtkRIL6 = this.mMtkRil;
                cellIdentityOperatorNames6.alphaShort = mtkRIL6.lookupOperatorNameForPlmnList(getSubId(mtkRIL6.mInstanceId.intValue()), str, false, i4);
                if (1 != 0) {
                    cellInfoLteLte.cellIdentityLte.base.operatorNames.alphaLong = cellInfoLteLte.cellIdentityLte.base.operatorNames.alphaLong.concat(" 4G");
                    cellInfoLteLte.cellIdentityLte.base.operatorNames.alphaShort = cellInfoLteLte.cellIdentityLte.base.operatorNames.alphaShort.concat(" 4G");
                }
            } else if (discriminator == 4) {
                CellInfoNr cellInfoNrNr = cellInfo.ratSpecificInfo.nr();
                str = cellInfoNrNr.cellIdentityNr.base.mcc + cellInfoNrNr.cellIdentityNr.base.mnc;
                int i5 = cellInfoNrNr.cellIdentityNr.base.tac;
                CellIdentityOperatorNames cellIdentityOperatorNames7 = cellInfoNrNr.cellIdentityNr.base.operatorNames;
                MtkRIL mtkRIL7 = this.mMtkRil;
                cellIdentityOperatorNames7.alphaLong = mtkRIL7.lookupOperatorNameForPlmnList(getSubId(mtkRIL7.mInstanceId.intValue()), str, true, i5);
                CellIdentityOperatorNames cellIdentityOperatorNames8 = cellInfoNrNr.cellIdentityNr.base.operatorNames;
                MtkRIL mtkRIL8 = this.mMtkRil;
                cellIdentityOperatorNames8.alphaShort = mtkRIL8.lookupOperatorNameForPlmnList(getSubId(mtkRIL8.mInstanceId.intValue()), str, false, i5);
                if (1 != 0) {
                    cellInfoNrNr.cellIdentityNr.base.operatorNames.alphaLong = cellInfoNrNr.cellIdentityNr.base.operatorNames.alphaLong.concat(" 5G");
                    cellInfoNrNr.cellIdentityNr.base.operatorNames.alphaShort = cellInfoNrNr.cellIdentityNr.base.operatorNames.alphaShort.concat(" 5G");
                }
            } else if (discriminator != 5) {
                throw new RuntimeException("unexpected cellinfotype: " + ((int) cellInfo.ratSpecificInfo.getDiscriminator()));
            }
            if (this.mMtkRil.hidePLMN(str)) {
                it.remove();
                this.mMtkRil.mtkRiljLog("remove this one " + str);
            }
        }
        super.networkScanResult_1_5(i, networkScanResult);
    }

    public void radioStateChanged(int i, int i2) {
        int radioState = this.mMtkRil.getRadioState();
        super.radioStateChanged(i, i2);
        if (this.mMtkRil.getRadioState() != radioState) {
            Intent intent = new Intent("com.mediatek.intent.action.RADIO_STATE_CHANGED");
            int radioStateFromInt = getRadioStateFromInt(i2);
            intent.putExtra("radioState", radioStateFromInt);
            intent.putExtra(IPplSmsFilter.KEY_SUB_ID, MtkSubscriptionManager.getSubIdUsingPhoneId(this.mMtkRil.mInstanceId.intValue()));
            this.mMtkRil.mMtkContext.sendBroadcastAsUser(intent, UserHandle.ALL);
            this.mMtkRil.riljLog("Broadcast for RadioStateChanged: state=" + radioStateFromInt);
        }
    }

    public void rilConnected(int i) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLog(1034);
        MtkRIL mtkRIL = this.mMtkRil;
        mtkRIL.setCdmaSubscriptionSource(mtkRIL.mCdmaSubscription, null);
        this.mMtkRil.notifyRegistrantsRilConnectionChanged(15);
    }
}

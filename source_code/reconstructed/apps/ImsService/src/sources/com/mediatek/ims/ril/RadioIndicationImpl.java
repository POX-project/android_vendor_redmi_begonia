package com.mediatek.ims.ril;

/* JADX INFO: loaded from: classes.dex */
public class RadioIndicationImpl extends RadioIndicationBase {
    private ImsRILAdapter mRil;

    RadioIndicationImpl(ImsRILAdapter imsRILAdapter, int i) {
        this.mRil = imsRILAdapter;
    }

    @Override // com.mediatek.ims.ril.RadioIndicationBase, android.hardware.radio.V1_0.IRadioIndication
    public void enterEmergencyCallbackMode(int i) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(1024);
        if (this.mRil.mEnterECBMRegistrants != null) {
            this.mRil.mEnterECBMRegistrants.notifyRegistrants();
        }
    }

    @Override // com.mediatek.ims.ril.RadioIndicationBase, android.hardware.radio.V1_0.IRadioIndication
    public void exitEmergencyCallbackMode(int i) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(1033);
        if (this.mRil.mExitECBMRegistrants != null) {
            this.mRil.mExitECBMRegistrants.notifyRegistrants();
        }
    }

    protected int getRadioStateFromInt(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 2;
        }
        if (i == 10) {
            return 1;
        }
        throw new RuntimeException("Unrecognized RadioState: " + i);
    }

    @Override // com.mediatek.ims.ril.RadioIndicationBase, android.hardware.radio.V1_0.IRadioIndication
    public void radioStateChanged(int i, int i2) {
        this.mRil.processIndication(i);
        int radioStateFromInt = getRadioStateFromInt(i2);
        this.mRil.unsljLogMore(1000, "radioStateChanged: " + radioStateFromInt);
        this.mRil.setRadioState(radioStateFromInt);
        this.mRil.notifyRadioStateChanged(radioStateFromInt);
    }

    @Override // com.mediatek.ims.ril.RadioIndicationBase
    protected void riljLoge(String str) {
        this.mRil.riljLoge(str);
    }
}

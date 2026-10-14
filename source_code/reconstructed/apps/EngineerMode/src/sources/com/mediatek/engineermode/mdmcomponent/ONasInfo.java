package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class ONasInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_VGNAS_MM_STATE_VALUE, MDMContentICD.MSG_ID_VGNAS_MM_FAILURE_EVENT_CAUSE, MDMContentICD.MSG_ID_VGNAS_SM_CONTEXT_INFO, MDMContentICD.MSG_ID_FAILURE_EVENT_CAUSE, MDMContentICD.MSG_ID_ENAS_EMM_CONTEXT_INFO};
    int[][] eventAddr;
    int[][] mCauseAddr;
    HashMap<Integer, String> mCauseMapping;
    int[][] mPduStateAddr;
    HashMap<Integer, String> mPduStateMapping;
    int[][] mStateTypeAddr;
    int[][] mSubstateTypeAddr;
    int[][] restrictDCNRAddr;

    public ONasInfo(Activity activity) {
        super(activity);
        this.mStateTypeAddr = new int[][]{new int[]{8, 0, 8}};
        this.mSubstateTypeAddr = new int[][]{new int[]{8, 8, 8}};
        this.mCauseAddr = new int[][]{new int[]{8, 8, 16}};
        this.mPduStateAddr = new int[][]{new int[]{8, 16, 8}, new int[]{8, 16, 8}, new int[]{8, 8, 8}};
        this.eventAddr = new int[][]{new int[]{8, 40, 16}, new int[]{8, 40, 16}};
        this.restrictDCNRAddr = new int[][]{new int[]{8, 16, 8}};
        this.mPduStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ONasInfo.1
            {
                put(0, "INACTIVE");
                put(1, "ACTIVE PENDING");
                put(2, "ACTIVE");
                put(3, "MODIFICATION PENDING");
                put(4, "INACTIVE PENDING");
            }
        };
        this.mCauseMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ONasInfo.2
            {
                put(3, "Illegal UE");
                put(5, "PEI not accepted");
                put(6, "Illegal ME");
                put(7, "5GS services not allowed");
                put(9, "UE identity cannot be derived by the network");
                put(10, "Implicitly de-registered");
                put(11, "PLMN not allowed");
                put(12, "Tracking area not allowed");
                put(13, "Roaming not allowed in this tracking area");
                put(15, "No suitable cells in tracking area");
                put(20, "MAC failure");
                put(21, "Synch failure");
                put(22, "Congestion");
                put(23, "UE security capabilities mismatch");
                put(24, "Security mode rejected, unspecified");
                put(26, "Non-5G authentication unacceptable");
                put(27, "N1 mode not allowed");
                put(28, "Restricted service area");
                put(31, "Redirection to EPC required");
                put(43, "LADN not available");
                put(62, "No network slices available");
                put(65, "Maximum number of PDU sessions reached");
                put(67, "Insufficient resources for specific slice and DNN");
                put(69, "Insufficient resources for specific slice");
                put(71, "ngKSI already in use");
                put(72, "Non-3GPP access to 5GCN not allowed");
                put(73, "Serving network not authorized");
                put(74, "Temporarily not authorized for this SNPN");
                put(75, "Permanently not authorized for this SNPN");
                put(76, "Not authorized for this CAG or authorized for CAG cells only");
                put(90, "Payload was not forwarded");
                put(91, "DNN not supported or not subscribed in the slice");
                put(92, "Insufficient user-plane resources for the PDU session");
                put(96, "Semantically incorrect message");
                put(96, "Invalid mandatory information");
                put(97, "Message type non-existent or not implemented");
                put(98, "Message type not compatible with the protocol state");
                put(99, "Information element non-existent or not implemented");
                put(100, "Conditional IE error");
                put(102, "Message not compatible with the protocol state");
                put(111, "Protocol error, unspecified");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "8. NR EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"5GMM State", "5GMM Cause", "5GSM State", "5GSM Cause", "RestrictDCNR"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Other NAS Information";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_VGNAS_MM_STATE_VALUE)) {
            int[][] iArr = this.mStateTypeAddr;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.mStateTypeAddr);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.mSubstateTypeAddr);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd + ", " + fieldValueIcd2);
            switch (fieldValueIcd) {
                case 1:
                    setData(0, "VGmmNull");
                    break;
                case 2:
                    switch (fieldValueIcd2) {
                        case 1:
                            setData(0, "VGmmDeregisteredNoSupi");
                            break;
                        case 2:
                            setData(0, "VGmmDeregisteredPlmnSearch");
                            break;
                        case 3:
                            setData(0, "VGmmDeregisteredNoCellAvailable");
                            break;
                        case 4:
                            setData(0, "VGmmDeregisteredAttemptingRegistrationUpdate");
                            break;
                        case 5:
                            setData(0, "VGmmDeregisteredLimitedService");
                            break;
                        case 6:
                            setData(0, "VGmmDeregisteredNormalService");
                            break;
                        case 7:
                            setData(0, "VGmmDeregisteredInitRegNeeded");
                            break;
                    }
                    break;
                case 3:
                    setData(0, "VGmmRegisteredInitiated");
                    break;
                case 4:
                    switch (fieldValueIcd2) {
                        case 1:
                            setData(0, "VGmmRegisteredNormalService");
                            break;
                        case 2:
                            setData(0, "VGmmRegisteredNonAllowedService");
                            break;
                        case 3:
                            setData(0, "VGmmRegisteredAttemptingToUpdate");
                            break;
                        case 4:
                            setData(0, "VGmmRegisteredLimitedService");
                            break;
                        case 5:
                            setData(0, "VGmmRegisteredPlmnSearch");
                            break;
                        case 6:
                            setData(0, "VGmmRegisteredNoCellAvailable");
                            break;
                        case 7:
                            setData(0, "VGmmRegisteredUpdateNeeded");
                            break;
                    }
                    break;
                case 5:
                    setData(0, "VGmmDeregisteredInitiated");
                    break;
                case 6:
                    setData(0, "VGmmServiceRequestInitiated");
                    break;
            }
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_VGNAS_MM_FAILURE_EVENT_CAUSE)) {
            int[][] iArr2 = this.mStateTypeAddr;
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr2[iArr2.length - 1][0]);
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.mCauseAddr, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd3);
            setData(1, getValueByMapping(this.mCauseMapping, fieldValueIcd3));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_VGNAS_SM_CONTEXT_INFO)) {
            int[][] iArr3 = this.mStateTypeAddr;
            int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, iArr3[iArr3.length - 1][0]);
            int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.mPduStateAddr);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", values = " + fieldValueIcd4);
            setData(2, getValueByMapping(this.mPduStateMapping, fieldValueIcd4));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_FAILURE_EVENT_CAUSE)) {
            int[][] iArr4 = this.eventAddr;
            int fieldValueIcdVersion4 = getFieldValueIcdVersion(byteBuffer, iArr4[iArr4.length - 1][0]);
            int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.eventAddr, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion4 + ", values = " + fieldValueIcd5);
            setData(3, Integer.valueOf(fieldValueIcd5));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_ENAS_EMM_CONTEXT_INFO)) {
            int[][] iArr5 = this.restrictDCNRAddr;
            int fieldValueIcdVersion5 = getFieldValueIcdVersion(byteBuffer, iArr5[iArr5.length - 1][0]);
            int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion5, this.restrictDCNRAddr);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion5 + ", values = " + fieldValueIcd6);
            setData(4, Integer.valueOf(fieldValueIcd6));
        }
    }
}

package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class El2FeatureDetection extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL2_FEATURE_DETECTION_IND};
    StringBuilder mDetectedFeature;
    HashMap<Integer, String> mDisplay;
    HashMap<Integer, String> mMappingFD;

    public El2FeatureDetection(Activity activity) {
        super(activity);
        this.mMappingFD = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.El2FeatureDetection.1
            {
                put(0, "ERRC_FEAT_MFBI_PRIORITIZATION");
            }
        };
        this.mDisplay = new HashMap<>();
        this.mDetectedFeature = new StringBuilder("");
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"Detected Feature"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EL2 Feature Detection";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, MDMContent.DETECTED_FEATURE);
        if (msg == null) {
            clearData();
            StringBuilder sb = this.mDetectedFeature;
            sb.delete(0, sb.toString().length() - 1);
            this.mDisplay.clear();
            return;
        }
        if (this.mDisplay.get(Integer.valueOf(fieldValue)) == null) {
            clearData();
            this.mDisplay.put(Integer.valueOf(fieldValue), this.mMappingFD.get(Integer.valueOf(fieldValue)));
            this.mDetectedFeature.append(this.mMappingFD.get(Integer.valueOf(fieldValue)));
            addData(this.mDetectedFeature.toString() + "\n");
        }
    }
}

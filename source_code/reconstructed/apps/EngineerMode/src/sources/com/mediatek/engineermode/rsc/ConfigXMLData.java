package com.mediatek.engineermode.rsc;

import com.mediatek.engineermode.Elog;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class ConfigXMLData {
    private static final String TAG = "rcs/ConfigXMLData";
    String mMagic;
    ArrayList<ProjectData> mProjectList = new ArrayList<>();
    String mTarPartName;
    String mTarPartOffset;
    int mVersion;

    class ProjectData {
        private int mPrjIndex;
        private String mPrjName;
        private String mPrjOptr;

        ProjectData() {
        }

        int getIndex() {
            return this.mPrjIndex;
        }

        String getName() {
            return this.mPrjName;
        }

        String getOptr() {
            return this.mPrjOptr;
        }

        void setIndex(int i) {
            this.mPrjIndex = i;
            Elog.d(ConfigXMLData.TAG, "mPrjIndex:" + this.mPrjIndex);
        }

        void setName(String str) {
            this.mPrjName = str;
            Elog.d(ConfigXMLData.TAG, "mPrjName:" + this.mPrjName);
        }

        void setOptr(String str) {
            this.mPrjOptr = str;
            Elog.d(ConfigXMLData.TAG, "mPrjOptr:" + this.mPrjOptr);
        }
    }

    void addProjectName(ProjectData projectData) {
        this.mProjectList.add(projectData);
    }

    String getMagic() {
        return this.mMagic;
    }

    ArrayList<ProjectData> getProjectList() {
        return this.mProjectList;
    }

    String getTarPartName() {
        return this.mTarPartName;
    }

    String getTarPartOffset() {
        return this.mTarPartOffset;
    }

    int getVersion() {
        return this.mVersion;
    }

    void setMagic(String str) {
        this.mMagic = str;
        Elog.d(TAG, "mMagic:" + this.mMagic);
    }

    void setTarPartName(String str) {
        this.mTarPartName = str;
        Elog.d(TAG, "mTarPartName:" + this.mTarPartName);
    }

    void setTarPartOffset(String str) {
        this.mTarPartOffset = str;
        Elog.d(TAG, "mTarPartOffset:" + this.mTarPartOffset);
    }

    void setVersion(int i) {
        this.mVersion = i;
        Elog.d(TAG, "mVersion:" + this.mVersion);
    }
}

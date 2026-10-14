package com.mediatek.ygps;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes.dex */
public class SatelliteInfoManager {
    List<SatelliteInfo> mSatelInfoList = new CopyOnWriteArrayList();

    void clearSatelInfos() {
        this.mSatelInfoList.clear();
    }

    List<SatelliteInfo> getSatelInfoList() {
        return this.mSatelInfoList;
    }

    boolean isUsedInFix(int i) {
        boolean z = i == -2 && this.mSatelInfoList.size() > 0;
        for (SatelliteInfo satelliteInfo : this.mSatelInfoList) {
            if (i == -2) {
                if (!satelliteInfo.mUsedInFix) {
                    return false;
                }
            } else if (i == -1) {
                if (satelliteInfo.mUsedInFix) {
                    return true;
                }
            } else if (i == satelliteInfo.mPrn) {
                return satelliteInfo.mUsedInFix;
            }
        }
        return z;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("{Satellite Count:");
        sb.append(this.mSatelInfoList.size());
        Iterator<SatelliteInfo> it = this.mSatelInfoList.iterator();
        while (it.hasNext()) {
            sb.append(it.next().toString());
        }
        sb.append("}");
        return sb.toString();
    }

    void updateSatelliteInfo(NmeaParser nmeaParser) {
        this.mSatelInfoList.clear();
        for (String str : SatelliteInfo.getTalker()) {
            ArrayList<SatelliteInfo> satelliteList = nmeaParser.getSatelliteList(str);
            Collections.sort(satelliteList, new Comparator<SatelliteInfo>(this) { // from class: com.mediatek.ygps.SatelliteInfoManager.1
                @Override // java.util.Comparator
                public int compare(SatelliteInfo satelliteInfo, SatelliteInfo satelliteInfo2) {
                    return satelliteInfo.mPrn - satelliteInfo2.mPrn;
                }
            });
            this.mSatelInfoList.addAll(satelliteList);
            int i = 0;
            int i2 = 0;
            float f = 0.0f;
            float f2 = 0.0f;
            for (SatelliteInfo satelliteInfo : satelliteList) {
                if ("L1".equals(satelliteInfo.getFq())) {
                    float f3 = satelliteInfo.mSnr;
                    if (f3 != 0.0f) {
                        f += f3;
                        i++;
                    }
                } else {
                    float f4 = satelliteInfo.mSnr;
                    if (f4 != 0.0f) {
                        f2 += f4;
                        i2++;
                    }
                }
            }
            if (i != 0) {
                SatelliteInfo.getSystem(str).setAveL1Cnr(f / i);
            }
            if (i2 != 0) {
                SatelliteInfo.getSystem(str).setAveL5Cnr(f2 / i2);
            }
        }
    }
}

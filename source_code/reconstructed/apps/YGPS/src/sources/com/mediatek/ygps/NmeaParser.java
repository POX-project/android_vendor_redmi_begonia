package com.mediatek.ygps;

import android.util.Log;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class NmeaParser {
    private static final String[] ARRAY_SYSTEM_ID = {"$GP", "$GL", "$GA", "$BD", "$QZ", "$IR", "$GP_SBAS"};
    private boolean mLogHidden;
    private final String[] OTHER_TALKER = {"$GN", "$GB", "$GQ", "$GI"};
    private final HashMap<String, String> mTalkerMap = new HashMap<String, String>() { // from class: com.mediatek.ygps.NmeaParser.1
        {
            put("$GB", "$BD");
            put("$GQ", "$QZ");
            put("$GI", "$IR");
        }
    };
    private String mCurrentTalker = "none";
    private final ArrayList<NmeaUpdateViewListener> mListener = new ArrayList<>();
    private HashMap<String, ArrayList<Integer>> mUsedFixIdMapList = new HashMap<>();
    private int mParseState = -1;
    private HashMap<String, ArrayList<SatelliteInfo>> mSatelInfoList = new HashMap<>();

    public interface NmeaUpdateViewListener {
        void onViewupdateNotify();
    }

    NmeaParser() {
        this.mLogHidden = false;
        this.mLogHidden = GpsMnlSetting.isLogHidden();
        Iterator<String> it = SatelliteInfo.getTalker().iterator();
        while (it.hasNext()) {
            this.mSatelInfoList.put(it.next(), new ArrayList<>());
        }
    }

    private void addUsedFixId(int i, String str) {
        ArrayList<Integer> arrayList = this.mUsedFixIdMapList.get(str);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            this.mUsedFixIdMapList.put(str, arrayList);
        }
        arrayList.add(Integer.valueOf(i));
    }

    private String checkTalker(String str) {
        String next;
        Iterator<String> it = SatelliteInfo.getTalker().iterator();
        do {
            if (!it.hasNext()) {
                next = "none";
                break;
            }
            next = it.next();
        } while (!str.contains(next));
        for (String str2 : this.OTHER_TALKER) {
            if (str.contains(str2)) {
                return str2;
            }
        }
        return next;
    }

    private void clearUsedFixList() {
        Iterator<ArrayList<Integer>> it = this.mUsedFixIdMapList.values().iterator();
        while (it.hasNext()) {
            it.next().clear();
        }
    }

    private String getCommonTalker(String str) {
        String str2 = this.mTalkerMap.get(str);
        Log.i("YGPS/NmeaParser", "talker :" + str + " and commonTalker:" + str2);
        return str2 != null ? str2 : str;
    }

    private boolean isUsedInFix(int i, String str) {
        ArrayList<Integer> arrayList = this.mUsedFixIdMapList.get(str);
        if (arrayList != null) {
            return arrayList.contains(Integer.valueOf(i));
        }
        this.mUsedFixIdMapList.put(str, new ArrayList<>());
        return false;
    }

    private void log(String str) {
        Log.i("YGPS/NmeaParser", str);
    }

    private float parseFloat(String str) {
        if (str.equals("")) {
            return 0.0f;
        }
        try {
            return Float.parseFloat(removeFirstZero(str));
        } catch (NumberFormatException e) {
            Log.e("YGPS/NmeaParser", "parseFloat:" + e);
            return 0.0f;
        }
    }

    private synchronized void parseGSA(String str) {
        seclog("parseGSA:" + str);
        String[] strArrSplitNmea = splitNmea(str);
        if (strArrSplitNmea.length < 17) {
            Log.e("YGPS/NmeaParser", "GSA invalid");
        } else {
            if (strArrSplitNmea[2].equals("1")) {
                return;
            }
            if (strArrSplitNmea.length == 19) {
                this.mCurrentTalker = ARRAY_SYSTEM_ID[Integer.valueOf(strArrSplitNmea[18]).intValue() - 1];
            }
            int i = 3;
            if ("$QZ".equals(this.mCurrentTalker)) {
                while (i < 15) {
                    int i2 = parseInt(strArrSplitNmea[i]);
                    if (i2 > 0) {
                        addUsedFixId(i2, (i2 > 189 || i2 < 55) ? "$QZ" : "$L1S");
                    }
                    i++;
                }
            } else {
                while (i < 15) {
                    int i3 = parseInt(strArrSplitNmea[i]);
                    if (i3 > 0) {
                        addUsedFixId(i3, this.mCurrentTalker);
                    }
                    i++;
                }
                String str2 = new String();
                if (this.mUsedFixIdMapList.get(this.mCurrentTalker) != null) {
                    Iterator<Integer> it = this.mUsedFixIdMapList.get(this.mCurrentTalker).iterator();
                    while (it.hasNext()) {
                        str2 = str2 + it.next().intValue() + " ";
                    }
                }
            }
        }
    }

    private synchronized void parseGSV(String str) {
        seclog("parseGSV:" + str);
        String[] strArrSplitNmea = splitNmea(str);
        int i = 4;
        int iIntValue = (strArrSplitNmea.length - 4) % 4 != 0 ? Integer.valueOf(strArrSplitNmea[strArrSplitNmea.length - 1]).intValue() : -1;
        if (this.mCurrentTalker.equals("$GP")) {
            parseGpGSV(strArrSplitNmea, iIntValue);
            return;
        }
        if (("$QZ".equals(this.mCurrentTalker) && iIntValue == 5) || ("$GQ".equals(this.mCurrentTalker) && iIntValue == 4)) {
            this.mCurrentTalker = "$L1S";
        }
        ArrayList<SatelliteInfo> satelliteList = getSatelliteList(getCommonTalker(this.mCurrentTalker));
        if (satelliteList == null) {
            log("parseGSV get SVlist Error" + satelliteList + " Current Talker:" + this.mCurrentTalker);
            return;
        }
        String str2 = "L1";
        if ("$BD".equals(this.mCurrentTalker) || "$QZ".equals(this.mCurrentTalker) || "$GB".equals(this.mCurrentTalker) || "$GQ".equals(this.mCurrentTalker)) {
            if (iIntValue > 0 && iIntValue != 1) {
                str2 = "L5";
            }
        } else if ("$GA".equals(this.mCurrentTalker) && iIntValue == 1) {
            str2 = "L5";
        }
        while (i + 3 < strArrSplitNmea.length) {
            int i2 = i + 1;
            int i3 = parseInt(strArrSplitNmea[i]);
            int i4 = i2 + 1;
            float f = parseFloat(strArrSplitNmea[i2]);
            int i5 = i4 + 1;
            float f2 = parseFloat(strArrSplitNmea[i4]);
            int i6 = i5 + 1;
            float f3 = parseFloat(strArrSplitNmea[i5]);
            if (i3 > 0) {
                SatelliteInfo satelliteInfo = new SatelliteInfo(i3, SatelliteInfo.getSystem(getCommonTalker(this.mCurrentTalker)));
                satelliteInfo.mSnr = f3;
                satelliteInfo.mElevation = f;
                satelliteInfo.mAzimuth = f2;
                satelliteInfo.setFq(str2);
                if ("$IR".equals(this.mCurrentTalker) || "$GI".equals(this.mCurrentTalker)) {
                    satelliteInfo.setFq("L5");
                }
                if (isUsedInFix(i3, getCommonTalker(this.mCurrentTalker))) {
                    satelliteInfo.mUsedInFix = true;
                }
                satelliteList.add(satelliteInfo);
            }
            i = i6;
        }
    }

    private synchronized void parseGpGSV(String[] strArr, int i) {
        ArrayList<SatelliteInfo> satelliteList = getSatelliteList(this.mCurrentTalker);
        ArrayList<SatelliteInfo> satelliteList2 = getSatelliteList("$GP_SBAS");
        if (satelliteList != null && satelliteList2 != null) {
            int i2 = 4;
            while (i2 + 3 < strArr.length) {
                int i3 = i2 + 1;
                int i4 = parseInt(strArr[i2]);
                int i5 = i3 + 1;
                float f = parseFloat(strArr[i3]);
                int i6 = i5 + 1;
                float f2 = parseFloat(strArr[i5]);
                int i7 = i6 + 1;
                float f3 = parseFloat(strArr[i6]);
                if (i4 > 0) {
                    String str = i4 <= 32 ? "$GP" : "$GP_SBAS";
                    SatelliteInfo satelliteInfo = new SatelliteInfo(i4, SatelliteInfo.getSystem(str));
                    satelliteInfo.mSnr = f3;
                    satelliteInfo.mElevation = f;
                    satelliteInfo.mAzimuth = f2;
                    if (i == 8) {
                        satelliteInfo.setFq("L5");
                    }
                    if (isUsedInFix(i4, str)) {
                        satelliteInfo.mUsedInFix = true;
                    }
                    if ("$GP".equals(str)) {
                        satelliteList.add(satelliteInfo);
                    } else {
                        satelliteList2.add(satelliteInfo);
                    }
                }
                i2 = i7;
            }
            return;
        }
        log("parseGSV get SVlist Error for Current Talker:" + this.mCurrentTalker);
    }

    private int parseInt(String str) {
        if (str.equals("")) {
            return 0;
        }
        try {
            return Integer.valueOf(removeFirstZero(str)).intValue();
        } catch (NumberFormatException e) {
            Log.e("YGPS/NmeaParser", "parseInt:" + e);
            return 0;
        }
    }

    private String removeFirstZero(String str) {
        int length = str.length();
        int i = 0;
        while (i < length && str.charAt(i) == '0') {
            i++;
        }
        return i < length ? str.substring(i) : "0";
    }

    private void reportSVupdate() {
        synchronized (this.mListener) {
            int size = this.mListener.size();
            Log.i("YGPS/NmeaParser", "listener size:" + size);
            for (int i = 0; i < size; i++) {
                this.mListener.get(i).onViewupdateNotify();
            }
        }
    }

    private void seclog(String str) {
        if (this.mLogHidden) {
            return;
        }
        Log.i("YGPS/NmeaParser", str);
    }

    private String[] splitNmea(String str) {
        int iIndexOf = str.indexOf(42);
        if (iIndexOf != -1) {
            return str.substring(0, iIndexOf).split(",");
        }
        return null;
    }

    void addSVUpdateListener(NmeaUpdateViewListener nmeaUpdateViewListener) {
        synchronized (this.mListener) {
            Log.i("YGPS/NmeaParser", "Add listener:" + nmeaUpdateViewListener);
            if (!this.mListener.contains(nmeaUpdateViewListener)) {
                this.mListener.add(nmeaUpdateViewListener);
            }
        }
    }

    void clearSatelliteList() {
        Iterator<ArrayList<SatelliteInfo>> it = this.mSatelInfoList.values().iterator();
        while (it.hasNext()) {
            it.next().clear();
        }
    }

    ArrayList<SatelliteInfo> getSatelliteList(String str) {
        if (this.mSatelInfoList.containsKey(str)) {
            return this.mSatelInfoList.get(str);
        }
        log("No this talker " + str + " SV exist");
        return null;
    }

    synchronized void parse(String str) {
        String strCheckTalker = checkTalker(str);
        this.mCurrentTalker = strCheckTalker;
        if ("none".equals(strCheckTalker)) {
            return;
        }
        if (this.mParseState == 3 && !str.contains("GSV")) {
            Log.i("YGPS/NmeaParser", "report update for talker:" + this.mCurrentTalker);
            reportSVupdate();
        }
        if (str.contains("GSA")) {
            this.mParseState = 2;
            try {
                parseGSA(str);
            } catch (NumberFormatException e) {
                log("Exception in parseGSA()" + e);
            }
        }
        if (str.contains("GSV")) {
            this.mParseState = 3;
            try {
                parseGSV(str);
            } catch (NumberFormatException e2) {
                log("Exception in parseGSV()" + e2);
            }
        } else if (str.contains("GGA")) {
            clearUsedFixList();
            clearSatelliteList();
        } else {
            this.mParseState = 5;
        }
    }

    void removeSVUpdateListener(NmeaUpdateViewListener nmeaUpdateViewListener) {
        synchronized (this.mListener) {
            Log.i("YGPS/NmeaParser", "remove listener:" + nmeaUpdateViewListener);
            this.mListener.remove(nmeaUpdateViewListener);
        }
    }
}

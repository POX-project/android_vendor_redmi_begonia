package com.mediatek.lbs.em2.ui;

import android.location.Location;
import android.util.Log;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class NmeaParser {
    private static final String[] TALKER = {"$GP", "$GL", "$GA", "$BD"};
    private static final int[] TALKER_COLOR = {-16711681, -256, -1, -16776961};
    private static NmeaParser sNmeaParser = null;
    private String mCurrentTalker = "none";
    private final ArrayList<NmeaUpdateViewListener> mListener = new ArrayList<>();
    private HashMap<String, ArrayList<Integer>> mUsedFixIdMapList = new HashMap<>();
    private int mParseState = -1;
    private HashMap<String, ArrayList> mSatelInfoList = new HashMap<>();
    private HashMap<String, SVExtraInfro> mExtraInfoList = new HashMap<>();
    private HashMap<String, Location> mLocRecord = new HashMap<>();

    public interface NmeaUpdateViewListener {
        void onViewupdateNotify();
    }

    class SVExtraInfro {
        public String mHdop;
        public String mPdop;
        public String mVdop;
        public String mfixtype;

        private SVExtraInfro(NmeaParser nmeaParser) {
        }
    }

    class SatelliteInfo {
        int mColor;
        int mPrn;
        float mSnr = 0.0f;
        float mElevation = 0.0f;
        float mAzimuth = 0.0f;
        boolean mUsedInFix = false;

        SatelliteInfo(NmeaParser nmeaParser, int i, int i2) {
            this.mColor = -1;
            this.mPrn = i;
            this.mColor = i2;
        }

        public String toString() {
            return "[" + this.mPrn + ", " + this.mSnr + ", " + this.mElevation + ", " + this.mAzimuth + ", " + this.mUsedInFix + "]";
        }
    }

    private NmeaParser() {
        for (String str : TALKER) {
            this.mSatelInfoList.put(str, new ArrayList());
            this.mExtraInfoList.put(str, new SVExtraInfro());
            this.mLocRecord.put(str, new Location("gps"));
        }
    }

    private void addUsedFixId(int i) {
        ArrayList<Integer> arrayList = this.mUsedFixIdMapList.get(this.mCurrentTalker);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            this.mUsedFixIdMapList.put(this.mCurrentTalker, arrayList);
        }
        arrayList.add(Integer.valueOf(i));
    }

    private String checkTalker(String str) {
        for (String str2 : TALKER) {
            if (str.contains(str2)) {
                return str2;
            }
        }
        return "none";
    }

    private int checkTalkerColor(String str) {
        for (int i = 0; i < 4; i++) {
            if (TALKER[i].equals(str)) {
                return TALKER_COLOR[i];
            }
        }
        return -65536;
    }

    private void clearSatelliteList(String str) {
        ArrayList<SatelliteInfo> satelliteList = getSatelliteList(str);
        if (satelliteList != null) {
            Iterator<SatelliteInfo> it = satelliteList.iterator();
            while (it.hasNext()) {
                it.next().mUsedInFix = false;
            }
        }
    }

    private void clearUsedFixList() {
        ArrayList<Integer> arrayList = this.mUsedFixIdMapList.get(this.mCurrentTalker);
        if (arrayList != null) {
            arrayList.clear();
        } else {
            this.mUsedFixIdMapList.put(this.mCurrentTalker, new ArrayList<>());
        }
    }

    public static NmeaParser getNMEAParser() {
        if (sNmeaParser == null) {
            sNmeaParser = new NmeaParser();
        }
        return sNmeaParser;
    }

    private ArrayList<SatelliteInfo> getSatelliteList(String str) {
        if (this.mSatelInfoList.containsKey(str)) {
            return this.mSatelInfoList.get(str);
        }
        log("No this talker " + str + " SV exist");
        return null;
    }

    private SVExtraInfro getTalkerExtra(String str) {
        if (this.mExtraInfoList.containsKey(str)) {
            return this.mExtraInfoList.get(str);
        }
        log("No this talker " + str + " Extra exist");
        return null;
    }

    private Location getTalkerLocation(String str) {
        if (this.mLocRecord.containsKey(str)) {
            return this.mLocRecord.get(str);
        }
        log("No this talker " + str + " Loc exist");
        return null;
    }

    private boolean isUsedInFix(int i) {
        ArrayList<Integer> arrayList = this.mUsedFixIdMapList.get(this.mCurrentTalker);
        if (arrayList == null) {
            this.mUsedFixIdMapList.put(this.mCurrentTalker, new ArrayList<>());
            return false;
        }
        Iterator<Integer> it = arrayList.iterator();
        while (it.hasNext()) {
            if (i == it.next().intValue()) {
                return true;
            }
        }
        return false;
    }

    private void log(String str) {
    }

    private double parseDouble(String str) {
        if (str.equals("")) {
            return 0.0d;
        }
        try {
            return Double.parseDouble(removeFirstZero(str));
        } catch (NumberFormatException e) {
            Log.d("nmeaParser", "parseDouble:" + e);
            return 0.0d;
        }
    }

    private float parseFloat(String str) {
        if (str.equals("")) {
            return 0.0f;
        }
        try {
            return Float.parseFloat(removeFirstZero(str));
        } catch (NumberFormatException e) {
            Log.d("nmeaParser", "parseFloat:" + e);
            return 0.0f;
        }
    }

    private synchronized void parseGGA(String str) {
        log("parseGGA:" + str);
        String[] strArrSplit = split(str);
        clearSatelliteList();
        Location talkerLocation = getTalkerLocation(this.mCurrentTalker);
        long jLongValue = Double.valueOf(parseDouble(strArrSplit[1])).longValue();
        double d = parseDouble(strArrSplit[2]);
        double d2 = parseDouble(strArrSplit[4]);
        double d3 = parseDouble(strArrSplit[9]);
        if (!strArrSplit[3].equals("N")) {
            d = -d;
        }
        if (!strArrSplit[5].equals("E")) {
            d2 = -d2;
        }
        if (talkerLocation != null) {
            talkerLocation.setTime(jLongValue);
            talkerLocation.setLatitude(d);
            talkerLocation.setLongitude(d2);
            talkerLocation.setAltitude(d3);
        }
    }

    private synchronized void parseGSA(String str) {
        log("parseGSA:" + str);
        String[] strArrSplit = split(str);
        SVExtraInfro talkerExtra = getTalkerExtra(this.mCurrentTalker);
        clearUsedFixList();
        if (talkerExtra == null || strArrSplit.length < 17) {
            clearSatelliteList(this.mCurrentTalker);
        } else {
            if (strArrSplit[2].equals("1")) {
                clearSatelliteList(this.mCurrentTalker);
                return;
            }
            talkerExtra.mfixtype = strArrSplit[2];
            getSatelliteList(this.mCurrentTalker);
            clearSatelliteList(this.mCurrentTalker);
            for (int i = 2; i < 15; i++) {
                int i2 = parseInt(strArrSplit[i]);
                if (i2 > 0) {
                    addUsedFixId(i2);
                }
            }
            talkerExtra.mPdop = strArrSplit[15];
            talkerExtra.mHdop = strArrSplit[16];
            talkerExtra.mVdop = strArrSplit[17];
        }
    }

    private synchronized void parseGSV(String str) {
        float f;
        int i;
        log("parseGSV:" + str);
        String[] strArrSplit = split(str);
        ArrayList<SatelliteInfo> satelliteList = getSatelliteList(this.mCurrentTalker);
        if (satelliteList == null) {
            log("parseGSV get SVlist Error" + satelliteList + " Current Talker:" + this.mCurrentTalker);
            return;
        }
        int i2 = parseInt(strArrSplit[1]);
        int i3 = parseInt(strArrSplit[2]);
        if (i2 > 0 && i3 == 1) {
            satelliteList.clear();
            this.mSatelInfoList.put(this.mCurrentTalker, satelliteList);
        }
        int i4 = 4;
        while (i4 + 3 < strArrSplit.length) {
            int i5 = i4 + 1;
            int i6 = parseInt(strArrSplit[i4]);
            int i7 = i5 + 1;
            float f2 = parseFloat(strArrSplit[i5]);
            int i8 = i7 + 1;
            float f3 = parseFloat(strArrSplit[i7]);
            if (strArrSplit[i8].contains("*")) {
                f = parseFloat(strArrSplit[i8].split("\\*")[0]);
                i = i8 + 1;
            } else {
                f = parseFloat(strArrSplit[i8]);
                i = i8 + 1;
            }
            if (i6 > 0) {
                SatelliteInfo satelliteInfo = new SatelliteInfo(this, i6, checkTalkerColor(this.mCurrentTalker));
                satelliteInfo.mSnr = f;
                satelliteInfo.mElevation = f2;
                satelliteInfo.mAzimuth = f3;
                if (isUsedInFix(i6)) {
                    satelliteInfo.mUsedInFix = true;
                }
                satelliteList.add(satelliteInfo);
            }
            i4 = i;
        }
        if (strArrSplit[1].equals(strArrSplit[2])) {
            log("mSatelInfoList add svlist : " + this.mCurrentTalker + " size:" + satelliteList.size());
            this.mSatelInfoList.put(this.mCurrentTalker, satelliteList);
        }
    }

    private int parseInt(String str) {
        if (str.equals("")) {
            return 0;
        }
        try {
            return Integer.valueOf(removeFirstZero(str)).intValue();
        } catch (NumberFormatException e) {
            Log.d("nmeaParser", "parseDouble:" + e);
            return 0;
        }
    }

    private synchronized void parseRMC(String str) {
        Location talkerLocation;
        log("parseRMC:" + str);
        String[] strArrSplit = split(str);
        double latitude = getLatitude(strArrSplit);
        double longitude = getLongitude(strArrSplit);
        int course = getCourse(strArrSplit);
        double speed = getSpeed(strArrSplit);
        if (isStatusActive(strArrSplit) && (talkerLocation = getTalkerLocation(this.mCurrentTalker)) != null) {
            talkerLocation.setLatitude(latitude);
            talkerLocation.setLongitude(longitude);
            talkerLocation.setBearing(course);
            talkerLocation.setSpeed(((float) speed) * 1000.0f);
            this.mLocRecord.put(this.mCurrentTalker, talkerLocation);
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
            for (int i = 0; i < size; i++) {
                this.mListener.get(i).onViewupdateNotify();
            }
        }
    }

    private String[] split(String str) {
        return str.split("[,]");
    }

    private String[] splitLines(String str) {
        return str.split("[\n]");
    }

    public void addSVUpdateListener(NmeaUpdateViewListener nmeaUpdateViewListener) {
        synchronized (this.mListener) {
            this.mListener.add(nmeaUpdateViewListener);
        }
    }

    public void clearSatelliteList() {
        Iterator<ArrayList> it = this.mSatelInfoList.values().iterator();
        while (it.hasNext()) {
            it.next().clear();
        }
    }

    int getCourse(String[] strArr) {
        String str = strArr[8];
        if (str.length() <= 0) {
            return 0;
        }
        try {
            return (int) parseDouble(str);
        } catch (NumberFormatException unused) {
            return 180;
        }
    }

    double getLatitude(String[] strArr) {
        String str = strArr[3];
        String str2 = strArr[4];
        if (str.length() > 0) {
            double d = parseDouble(str);
            return !str2.equals("N") ? d * (-1.0d) : d;
        }
        log("Error with latatitude");
        return 0.0d;
    }

    double getLongitude(String[] strArr) {
        String str = strArr[5];
        String str2 = strArr[6];
        if (str.length() > 0) {
            double d = parseDouble(str);
            return !str2.equals("E") ? d * (-1.0d) : d;
        }
        log("Error with longitude");
        return 0.0d;
    }

    public ArrayList<SatelliteInfo> getSatelliteList() {
        ArrayList<SatelliteInfo> arrayList = new ArrayList<>();
        Iterator<ArrayList> it = this.mSatelInfoList.values().iterator();
        while (it.hasNext()) {
            arrayList.addAll(it.next());
        }
        return arrayList;
    }

    double getSpeed(String[] strArr) {
        double d = parseDouble(strArr[7]);
        double d2 = d > 0.0d ? d * 1.852d : 0.0d;
        if (d2 < 0.0d) {
            return 0.0d;
        }
        return d2;
    }

    boolean isStatusActive(String[] strArr) {
        return "A".equals(strArr[2]);
    }

    public synchronized void parse(String str) {
        String[] strArrSplitLines = splitLines(str);
        log("splitLines line size = " + strArrSplitLines.length);
        for (String str2 : strArrSplitLines) {
            parseOneSentence(str2);
        }
    }

    public synchronized void parseOneSentence(String str) {
        log("parseOneSentence: " + str);
        this.mCurrentTalker = checkTalker(str);
        if (this.mParseState == 3 && !str.contains("GSV")) {
            reportSVupdate();
        }
        if (str.contains("RMC")) {
            this.mParseState = 4;
            try {
                parseRMC(str);
            } catch (NumberFormatException unused) {
                log("Exception in parseRMC()");
            }
        } else if (str.contains("GSA")) {
            this.mParseState = 2;
            try {
                parseGSA(str);
            } catch (NumberFormatException e) {
                log("Exception in parseGSA()" + e);
            }
        } else if (str.contains("GGA")) {
            this.mParseState = 1;
            try {
                parseGGA(str);
            } catch (NumberFormatException e2) {
                log("Exception in parseGGA()" + e2);
            }
        } else if (str.contains("GSV")) {
            this.mParseState = 3;
            try {
                parseGSV(str);
            } catch (NumberFormatException e3) {
                log("Exception in parseGSV()" + e3);
            }
        } else {
            this.mParseState = 5;
        }
    }

    public void removeSVUpdateListener(NmeaUpdateViewListener nmeaUpdateViewListener) {
        synchronized (this.mListener) {
            this.mListener.remove(nmeaUpdateViewListener);
        }
    }
}

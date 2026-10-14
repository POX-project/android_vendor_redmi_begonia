package com.mediatek.engineermode.wifi;

import android.R;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
class WifiFormatConfig {
    private static final String BW_10 = "BW10";
    private static final String BW_160c = "BW160c";
    private static final String BW_20 = "BW20";
    private static final String BW_40 = "BW40";
    private static final String BW_5 = "BW5";
    private static final String BW_80 = "BW80";
    private static final String RATE_11M = "11M";
    private static final String RATE_12M = "12M";
    private static final String RATE_18M = "18M";
    private static final String RATE_1M = "1M";
    private static final String RATE_24M = "24M";
    private static final String RATE_2M = "2M";
    private static final String RATE_36M = "36M";
    private static final String RATE_48M = "48M";
    private static final String RATE_54M = "54M";
    private static final String RATE_5dot5M = "5.5M";
    private static final String RATE_6M = "6M";
    private static final String RATE_9M = "9M";
    private static final String RATE_MCS0 = "MCS0";
    private static final String RATE_MCS0_106_DCM = "MCS0-106 DCM";
    private static final String RATE_MCS0_242_DCM = "MCS0-242 DCM";
    private static final String RATE_MCS0_DCM = "MCS0 DCM";
    private static final String RATE_MCS1 = "MCS1";
    private static final String RATE_MCS10 = "MCS10";
    private static final String RATE_MCS11 = "MCS11";
    private static final String RATE_MCS12 = "MCS12";
    private static final String RATE_MCS13 = "MCS13";
    private static final String RATE_MCS14 = "MCS14";
    private static final String RATE_MCS15 = "MCS15";
    private static final String RATE_MCS1_242_DCM = "MCS1-242 DCM";
    private static final String RATE_MCS1_DCM = "MCS1 DCM";
    private static final String RATE_MCS2 = "MCS2";
    private static final String RATE_MCS3 = "MCS3";
    private static final String RATE_MCS32 = "MCS32";
    private static final String RATE_MCS4 = "MCS4";
    private static final String RATE_MCS5 = "MCS5";
    private static final String RATE_MCS6 = "MCS6";
    private static final String RATE_MCS7 = "MCS7";
    private static final String RATE_MCS8 = "MCS8";
    private static final String RATE_MCS9 = "MCS9";
    private static final List<String> sGiGroup0 = Arrays.asList("normal GI", "short GI");
    private static final String GI_NOT_FOR_DCM = "4xLTF+0.8us GI";
    private static final List<String> sGiGroup1 = Arrays.asList("1xLTF+0.8us GI", "2xLTF+0.8us GI", "2xLTF+1.6us GI", "4xLTF+3.2us GI", GI_NOT_FOR_DCM);
    private static final List<String> sGiGroup2 = Arrays.asList("1x HE-LTF + 1.6us GI", "2x HE-LTF + 1.6us GI", "4x HE-LTF + 3.2us GI");
    private HashMap<Integer, LinkedHashMap<RuConfig, Integer>> mMapRuConfig = initRuConfigList();
    private final LinkedHashMap<String, Integer> mMapBw = new LinkedHashMap<String, Integer>() { // from class: com.mediatek.engineermode.wifi.WifiFormatConfig.1
        {
            put(WifiFormatConfig.BW_5, 4);
            put(WifiFormatConfig.BW_10, 3);
            put(WifiFormatConfig.BW_20, 0);
            put(WifiFormatConfig.BW_40, 1);
            put(WifiFormatConfig.BW_80, 2);
            put(WifiFormatConfig.BW_160c, 5);
        }
    };
    private final LinkedHashMap<String, Integer> mMapRate = new LinkedHashMap<String, Integer>() { // from class: com.mediatek.engineermode.wifi.WifiFormatConfig.2
        {
            put(WifiFormatConfig.RATE_1M, 0);
            put(WifiFormatConfig.RATE_2M, 1);
            put(WifiFormatConfig.RATE_5dot5M, 2);
            put(WifiFormatConfig.RATE_11M, 3);
            put(WifiFormatConfig.RATE_6M, 0);
            put(WifiFormatConfig.RATE_9M, 1);
            put(WifiFormatConfig.RATE_12M, 2);
            put(WifiFormatConfig.RATE_18M, 3);
            put(WifiFormatConfig.RATE_24M, 4);
            put(WifiFormatConfig.RATE_36M, 5);
            put(WifiFormatConfig.RATE_48M, 6);
            put(WifiFormatConfig.RATE_54M, 7);
            put(WifiFormatConfig.RATE_MCS0, 0);
            put(WifiFormatConfig.RATE_MCS1, 1);
            put(WifiFormatConfig.RATE_MCS2, 2);
            put(WifiFormatConfig.RATE_MCS3, 3);
            put(WifiFormatConfig.RATE_MCS4, 4);
            put(WifiFormatConfig.RATE_MCS5, 5);
            put(WifiFormatConfig.RATE_MCS6, 6);
            put(WifiFormatConfig.RATE_MCS7, 7);
            put(WifiFormatConfig.RATE_MCS8, 8);
            put(WifiFormatConfig.RATE_MCS9, 9);
            put(WifiFormatConfig.RATE_MCS10, 10);
            put(WifiFormatConfig.RATE_MCS11, 11);
            put(WifiFormatConfig.RATE_MCS12, 12);
            put(WifiFormatConfig.RATE_MCS13, 13);
            put(WifiFormatConfig.RATE_MCS14, 14);
            put(WifiFormatConfig.RATE_MCS15, 15);
            put(WifiFormatConfig.RATE_MCS32, 32);
            put(WifiFormatConfig.RATE_MCS0_DCM, 32);
            put(WifiFormatConfig.RATE_MCS1_DCM, 33);
            put(WifiFormatConfig.RATE_MCS0_242_DCM, 32);
            put(WifiFormatConfig.RATE_MCS1_242_DCM, 33);
            put(WifiFormatConfig.RATE_MCS0_106_DCM, 48);
        }
    };

    enum PreambleConfig {
        PA_CCK("CCK", 0, WifiFormatConfig.sGiGroup0, new String[]{WifiFormatConfig.RATE_1M, WifiFormatConfig.RATE_2M, WifiFormatConfig.RATE_5dot5M, WifiFormatConfig.RATE_11M}),
        PA_OFDM("OFDM", 1, WifiFormatConfig.sGiGroup0, new String[]{WifiFormatConfig.RATE_6M, WifiFormatConfig.RATE_9M, WifiFormatConfig.RATE_12M, WifiFormatConfig.RATE_18M, WifiFormatConfig.RATE_24M, WifiFormatConfig.RATE_36M, WifiFormatConfig.RATE_48M, WifiFormatConfig.RATE_54M}),
        PA_HT_MM("HT_MM", 2, WifiFormatConfig.sGiGroup0, new String[]{WifiFormatConfig.RATE_MCS0, WifiFormatConfig.RATE_MCS1, WifiFormatConfig.RATE_MCS2, WifiFormatConfig.RATE_MCS3, WifiFormatConfig.RATE_MCS4, WifiFormatConfig.RATE_MCS5, WifiFormatConfig.RATE_MCS6, WifiFormatConfig.RATE_MCS7, WifiFormatConfig.RATE_MCS8, WifiFormatConfig.RATE_MCS9, WifiFormatConfig.RATE_MCS10, WifiFormatConfig.RATE_MCS11, WifiFormatConfig.RATE_MCS12, WifiFormatConfig.RATE_MCS13, WifiFormatConfig.RATE_MCS14, WifiFormatConfig.RATE_MCS15, WifiFormatConfig.RATE_MCS32}),
        PA_HT_GF("HT_GF", 3, WifiFormatConfig.sGiGroup0, new String[]{WifiFormatConfig.RATE_MCS0, WifiFormatConfig.RATE_MCS1, WifiFormatConfig.RATE_MCS2, WifiFormatConfig.RATE_MCS3, WifiFormatConfig.RATE_MCS4, WifiFormatConfig.RATE_MCS5, WifiFormatConfig.RATE_MCS6, WifiFormatConfig.RATE_MCS7, WifiFormatConfig.RATE_MCS8, WifiFormatConfig.RATE_MCS9, WifiFormatConfig.RATE_MCS10, WifiFormatConfig.RATE_MCS11, WifiFormatConfig.RATE_MCS12, WifiFormatConfig.RATE_MCS13, WifiFormatConfig.RATE_MCS14, WifiFormatConfig.RATE_MCS15, WifiFormatConfig.RATE_MCS32}),
        PA_VHT("VHT", 4, WifiFormatConfig.sGiGroup0, new String[]{WifiFormatConfig.RATE_MCS0, WifiFormatConfig.RATE_MCS1, WifiFormatConfig.RATE_MCS2, WifiFormatConfig.RATE_MCS3, WifiFormatConfig.RATE_MCS4, WifiFormatConfig.RATE_MCS5, WifiFormatConfig.RATE_MCS6, WifiFormatConfig.RATE_MCS7, WifiFormatConfig.RATE_MCS8, WifiFormatConfig.RATE_MCS9, WifiFormatConfig.RATE_MCS10, WifiFormatConfig.RATE_MCS11}),
        PA_HE_SU("HE_SU", 8, WifiFormatConfig.sGiGroup1, new String[]{WifiFormatConfig.RATE_MCS0, WifiFormatConfig.RATE_MCS1, WifiFormatConfig.RATE_MCS2, WifiFormatConfig.RATE_MCS3, WifiFormatConfig.RATE_MCS4, WifiFormatConfig.RATE_MCS5, WifiFormatConfig.RATE_MCS6, WifiFormatConfig.RATE_MCS7, WifiFormatConfig.RATE_MCS8, WifiFormatConfig.RATE_MCS9, WifiFormatConfig.RATE_MCS10, WifiFormatConfig.RATE_MCS11, WifiFormatConfig.RATE_MCS0_DCM, WifiFormatConfig.RATE_MCS1_DCM}),
        PA_HE_ER("HE_ER", 9, WifiFormatConfig.sGiGroup1, new String[]{WifiFormatConfig.RATE_MCS0, WifiFormatConfig.RATE_MCS1, WifiFormatConfig.RATE_MCS2, WifiFormatConfig.RATE_MCS3, WifiFormatConfig.RATE_MCS4, WifiFormatConfig.RATE_MCS5, WifiFormatConfig.RATE_MCS6, WifiFormatConfig.RATE_MCS7, WifiFormatConfig.RATE_MCS8, WifiFormatConfig.RATE_MCS9, WifiFormatConfig.RATE_MCS10, WifiFormatConfig.RATE_MCS11, WifiFormatConfig.RATE_MCS0_242_DCM, WifiFormatConfig.RATE_MCS1_242_DCM, WifiFormatConfig.RATE_MCS0_106_DCM}),
        PA_HE_TB("HE_TB", 10, WifiFormatConfig.sGiGroup2, new String[]{WifiFormatConfig.RATE_MCS0, WifiFormatConfig.RATE_MCS1, WifiFormatConfig.RATE_MCS2, WifiFormatConfig.RATE_MCS3, WifiFormatConfig.RATE_MCS4, WifiFormatConfig.RATE_MCS5, WifiFormatConfig.RATE_MCS6, WifiFormatConfig.RATE_MCS7, WifiFormatConfig.RATE_MCS8, WifiFormatConfig.RATE_MCS9, WifiFormatConfig.RATE_MCS10, WifiFormatConfig.RATE_MCS11, WifiFormatConfig.RATE_MCS0_DCM, WifiFormatConfig.RATE_MCS1_DCM}),
        PA_HE_MU("HE_MU", 11, null, null);

        private List<String> mGI;
        private int mIndex;
        private String mName;
        private String[] mRateSupport;

        PreambleConfig(String str, int i, List list, String[] strArr) {
            this.mName = str;
            this.mIndex = i;
            this.mRateSupport = strArr;
            this.mGI = list;
        }

        List<String> getGiList() {
            return this.mGI;
        }

        int getIndex() {
            return this.mIndex;
        }

        String getName() {
            return this.mName;
        }

        String[] getRateList() {
            return this.mRateSupport;
        }

        boolean is11AxItem() {
            return this.mIndex >= PA_HE_SU.getIndex();
        }

        @Override // java.lang.Enum
        public String toString() {
            return this.mName;
        }
    }

    enum RuConfig {
        RU_CONFIG_26by9("1:26*9", 1, 0, 0),
        RU_CONFIG_52by4("6:52*4", 6, R.bool.config_sendPackageName, 37),
        RU_CONFIG_106by2("12:106*2", 12, R.raw.loaderror, 53),
        RU_CONFIG_242by1("13:242*1", 13, 285212672, 61),
        RU_CONFIG_484by1("14:484*1", 14, 285216768, 65),
        RU_CONFIG_996by1("15:996*1", 15, 285278208, 67);

        private int mAllocation;
        private int mIndex;
        private String mName;
        private int mOffset;

        RuConfig(String str, int i, int i2, int i3) {
            this.mName = str;
            this.mIndex = i;
            this.mAllocation = i2;
            this.mOffset = i3;
        }

        int getAllocation() {
            return this.mAllocation;
        }

        int getIndex() {
            return this.mIndex;
        }

        int getOffset() {
            return this.mOffset;
        }

        @Override // java.lang.Enum
        public String toString() {
            return this.mName;
        }
    }

    WifiFormatConfig() {
    }

    private HashMap<Integer, LinkedHashMap<RuConfig, Integer>> initRuConfigList() {
        HashMap<Integer, LinkedHashMap<RuConfig, Integer>> map = new HashMap<>();
        LinkedHashMap<RuConfig, Integer> linkedHashMap = new LinkedHashMap<RuConfig, Integer>() { // from class: com.mediatek.engineermode.wifi.WifiFormatConfig.3
            {
                put(RuConfig.RU_CONFIG_26by9, 8);
                put(RuConfig.RU_CONFIG_52by4, 3);
                put(RuConfig.RU_CONFIG_106by2, 1);
                put(RuConfig.RU_CONFIG_242by1, 0);
            }
        };
        map.put(0, linkedHashMap);
        map.put(3, linkedHashMap);
        map.put(4, linkedHashMap);
        map.put(1, new LinkedHashMap<RuConfig, Integer>() { // from class: com.mediatek.engineermode.wifi.WifiFormatConfig.4
            {
                put(RuConfig.RU_CONFIG_26by9, 17);
                put(RuConfig.RU_CONFIG_52by4, 7);
                put(RuConfig.RU_CONFIG_106by2, 3);
                put(RuConfig.RU_CONFIG_242by1, 1);
                put(RuConfig.RU_CONFIG_484by1, 0);
            }
        });
        map.put(2, new LinkedHashMap<RuConfig, Integer>() { // from class: com.mediatek.engineermode.wifi.WifiFormatConfig.5
            {
                put(RuConfig.RU_CONFIG_26by9, 36);
                put(RuConfig.RU_CONFIG_52by4, 15);
                put(RuConfig.RU_CONFIG_106by2, 7);
                put(RuConfig.RU_CONFIG_242by1, 3);
                put(RuConfig.RU_CONFIG_484by1, 1);
                put(RuConfig.RU_CONFIG_996by1, 0);
            }
        });
        LinkedHashMap<RuConfig, Integer> linkedHashMap2 = new LinkedHashMap<RuConfig, Integer>() { // from class: com.mediatek.engineermode.wifi.WifiFormatConfig.6
            {
                put(RuConfig.RU_CONFIG_26by9, 73);
                put(RuConfig.RU_CONFIG_52by4, 31);
                put(RuConfig.RU_CONFIG_106by2, 15);
                put(RuConfig.RU_CONFIG_242by1, 7);
                put(RuConfig.RU_CONFIG_484by1, 3);
                put(RuConfig.RU_CONFIG_996by1, 1);
            }
        };
        map.put(5, linkedHashMap2);
        map.put(6, linkedHashMap2);
        return map;
    }

    int getBW20Index() {
        int i = -1;
        Iterator<String> it = this.mMapBw.keySet().iterator();
        while (it.hasNext()) {
            i++;
            if (BW_20.equals(it.next())) {
                break;
            }
        }
        return i;
    }

    String getGiNotForDcm() {
        return GI_NOT_FOR_DCM;
    }

    LinkedHashMap<String, Integer> getMapBw() {
        return this.mMapBw;
    }

    LinkedHashMap<String, Integer> getMapRate() {
        return this.mMapRate;
    }

    ArrayList<PreambleConfig> getPreambleConfig(boolean z, boolean z2) {
        ArrayList<PreambleConfig> arrayList = new ArrayList<>();
        for (PreambleConfig preambleConfig : PreambleConfig.values()) {
            if ((z2 || !preambleConfig.is11AxItem()) && (!z || !PreambleConfig.PA_HE_MU.equals(preambleConfig))) {
                arrayList.add(preambleConfig);
            }
        }
        return arrayList;
    }

    List<PreambleConfig> getPreambleWithGiNotForDcm() {
        return Arrays.asList(PreambleConfig.PA_HE_SU, PreambleConfig.PA_HE_ER);
    }

    LinkedHashMap<RuConfig, Integer> getRuConfig(int i) {
        return this.mMapRuConfig.get(Integer.valueOf(i));
    }
}

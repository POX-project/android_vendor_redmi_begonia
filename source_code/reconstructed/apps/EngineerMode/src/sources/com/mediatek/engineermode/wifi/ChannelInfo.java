package com.mediatek.engineermode.wifi;

import android.support.v4.media.subtitle.Cea708CCParser;
import android.widget.ArrayAdapter;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import com.mediatek.engineermode.networkinfo.Content;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class ChannelInfo {
    static final int BW_160M = 8;
    static final int BW_20M = 1;
    static final int BW_40M = 2;
    static final int BW_80M = 4;
    static final int CHANNEL_2DOT4G = 10;
    static final int CHANNEL_5G = 11;
    public static final int CHANNEL_NUMBER_14 = 14;
    private static final int DEFAULT_CHANNEL_COUNT = 11;
    private static final int MAX_CHANNEL_COUNT = 75;
    private static final String TAG = "WifiChannelInfo";
    private String mChannelSelect;
    protected static long[] sChannels = null;
    protected static boolean sHas14Ch = false;
    protected static boolean sHasUpper14Ch = false;
    private static final int[] sBw40mUnsupported2dot4GChannels = {1, 2, 12, 13, 14};
    private static final ChannelData[] sWifiChannelDatas = {new ChannelData(1, "Channel 1 [2412MHz]", 2412000, 1), new ChannelData(2, "Channel 2 [2417MHz]", 2417000, 1), new ChannelData(3, "Channel 3 [2422MHz]", 2422000, 3), new ChannelData(4, "Channel 4 [2427MHz]", 2427000, 3), new ChannelData(5, "Channel 5 [2432MHz]", 2432000, 3), new ChannelData(6, "Channel 6 [2437MHz]", 2437000, 3), new ChannelData(7, "Channel 7 [2442MHz]", 2442000, 3), new ChannelData(8, "Channel 8 [2447MHz]", 2447000, 3), new ChannelData(9, "Channel 9 [2452MHz]", 2452000, 3), new ChannelData(10, "Channel 10 [2457MHz]", 2457000, 3), new ChannelData(11, "Channel 11 [2462MHz]", 2462000, 3), new ChannelData(12, "Channel 12 [2467MHz]", 2467000, 1), new ChannelData(13, "Channel 13 [2472MHz]", 2472000, 1), new ChannelData(14, "Channel 14 [2484MHz]", 2484000, 1), new ChannelData(18, "Channel 8 5G [5040MHz]", 5040000, 1), new ChannelData(20, "Channel 10 5G [5050MHz]", 5050000, 2), new ChannelData(22, "Channel 12 5G [5060MHz]", 5060000, 1), new ChannelData(26, "Channel 16 5G [5080MHz]", 5080000, 1), new ChannelData(36, "Channel 36 [5180MHz]", 5180000, 1), new ChannelData(38, "Channel 38 [5190MHz]", 5190000, 2), new ChannelData(40, "Channel 40 [5200MHz]", 5200000, 1), new ChannelData(42, "Channel 42 [5210MHz]", 5210000, 4), new ChannelData(44, "Channel 44 [5220MHz]", 5220000, 1), new ChannelData(46, "Channel 46 [5230MHz]", 5230000, 2), new ChannelData(48, "Channel 48 [5240MHz]", 5240000, 1), new ChannelData(50, "Channel 50 [5250MHz]", 5250000, 8), new ChannelData(52, "Channel 52 [5260MHz]", 5260000, 1), new ChannelData(54, "Channel 54 [5270MHz]", 5270000, 2), new ChannelData(56, "Channel 56 [5280MHz]", 5280000, 1), new ChannelData(58, "Channel 58 [5290MHz]", 5290000, 4), new ChannelData(60, "Channel 60 [5300MHz]", 5300000, 1), new ChannelData(62, "Channel 62 [5310MHz]", 5310000, 2), new ChannelData(64, "Channel 64 [5320MHz]", 5320000, 1), new ChannelData(68, "Channel 68 [5340MHz]", 5340000, 1), new ChannelData(70, "Channel 70 [5350MHz]", 5350000, 2), new ChannelData(72, "Channel 72 [5360MHz]", 5360000, 1), new ChannelData(74, "Channel 74 [5370MHz]", 5370000, 4), new ChannelData(76, "Channel 76 [5380MHz]", 5380000, 1), new ChannelData(78, "Channel 78 [5390MHz]", 5390000, 2), new ChannelData(80, "Channel 80 [5400MHz]", 5400000, 1), new ChannelData(82, "Channel 82 [5410MHz]", 5410000, 8), new ChannelData(84, "Channel 84 [5420MHz]", 5420000, 1), new ChannelData(86, "Channel 86 [5430MHz]", 5430000, 2), new ChannelData(88, "Channel 88 [5440MHz]", 5440000, 1), new ChannelData(90, "Channel 90 [5450MHz]", 5450000, 4), new ChannelData(92, "Channel 92 [5460MHz]", 5460000, 1), new ChannelData(94, "Channel 94 [5470MHz]", 5470000, 2), new ChannelData(96, "Channel 96 [5480MHz]", 5480000, 1), new ChannelData(100, "Channel 100 [5500MHz]", 5500000, 1), new ChannelData(102, "Channel 102 [5510MHz]", 5510000, 2), new ChannelData(104, "Channel 104 [5520MHz]", 5520000, 1), new ChannelData(NfcCommand.CommandType.MTK_NFC_EM_ALS_P2P_MODE_RSP, "Channel 106 [5530MHz]", 5530000, 4), new ChannelData(NfcCommand.CommandType.MTK_NFC_EM_ALS_CARD_MODE_RSP, "Channel 108 [5540MHz]", 5540000, 1), new ChannelData(110, "Channel 110 [5550MHz]", 5550000, 2), new ChannelData(112, "Channel 112 [5560MHz]", 5560000, 1), new ChannelData(NfcCommand.CommandType.MTK_NFC_EM_VIRTUAL_CARD_RSP, "Channel 114 [5570MHz]", 5570000, 8), new ChannelData(NfcCommand.CommandType.MTK_NFC_EM_PNFC_CMD_RSP, "Channel 116 [5580MHz]", 5580000, 1), new ChannelData(NfcCommand.CommandType.MTK_NFC_EM_ALS_READER_MODE_NTF, "Channel 118 [5590MHz]", 5590000, 2), new ChannelData(NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD, "Channel 120 [5600MHz]", 5600000, 1), new ChannelData(122, "Channel 122 [5610MHz]", 5610000, 4), new ChannelData(124, "Channel 124 [5620MHz]", 5620000, 1), new ChannelData(126, "Channel 126 [5630MHz]", 5630000, 2), new ChannelData(128, "Channel 128 [5640MHz]", 5640000, 1), new ChannelData(132, "Channel 132 [5660MHz]", 5660000, 1), new ChannelData(Cea708CCParser.Const.CODE_C1_CW6, "Channel 134 [5670MHz]", 5670000, 2), new ChannelData(136, "Channel 136 [5680MHz]", 5680000, 1), new ChannelData(Cea708CCParser.Const.CODE_C1_HDW, "Channel 138 [5690MHz]", 5690000, 4), new ChannelData(Cea708CCParser.Const.CODE_C1_DLW, "Channel 140 [5700MHz]", 5700000, 1), new ChannelData(Cea708CCParser.Const.CODE_C1_DLC, "Channel 142 [5710MHz]", 5710000, 2), new ChannelData(Cea708CCParser.Const.CODE_C1_SPA, "Channel 144 [5720MHz]", 5720000, 1), new ChannelData(149, "Channel 149 [5745MHz]", 5745000, 1), new ChannelData(Cea708CCParser.Const.CODE_C1_SWA, "Channel 151 [5755MHz]", 5755000, 2), new ChannelData(Cea708CCParser.Const.CODE_C1_DF1, "Channel 153 [5765MHz]", 5765000, 1), new ChannelData(Cea708CCParser.Const.CODE_C1_DF3, "Channel 155 [5775MHz]", 5775000, 4), new ChannelData(Cea708CCParser.Const.CODE_C1_DF5, "Channel 157 [5785MHz]", 5785000, 1), new ChannelData(159, "Channel 159 [5795MHz]", 5795000, 2), new ChannelData(161, "Channel 161 [5805MHz]", 5805000, 1), new ChannelData(163, "Channel 163 [5815MHz]", 5815000, 8), new ChannelData(165, "Channel 165 [5825MHz]", 5825000, 1), new ChannelData(167, "Channel 167 [5835MHz]", 5835000, 2), new ChannelData(169, "Channel 169 [5845MHz]", 5845000, 1), new ChannelData(171, "Channel 171 [5855MHz]", 5855000, 4), new ChannelData(173, "Channel 173 [5865MHz]", 5865000, 1), new ChannelData(175, "Channel 175 [5875MHz]", 5875000, 2), new ChannelData(Content.UL1_EM_PRX_DRX_MEASURE_INFO_INDEX, "Channel 177 [5885MHz]", 5885000, 1), new ChannelData(181, "Channel 181 [5905MHz]", 5905000, 1), new ChannelData(184, "Channel 184 [4920MHz]", 4920000, 1), new ChannelData(186, "Channel 186 [4930MHz]", 4930000, 2), new ChannelData(188, "Channel 188 [4940MHz]", 4940000, 1), new ChannelData(192, "Channel 192 [4960MHz]", 4960000, 1), new ChannelData(194, "Channel 194 [4970MHz]", 4970000, 2), new ChannelData(196, "Channel 196 [4980MHz]", 4980000, 1)};
    private static final ChannelDataFormat[] sWifiFormatChannelDatas = {new ChannelDataFormat(1, "1 [2412MHz]", false), new ChannelDataFormat(2, "2 [2417MHz]", false), new ChannelDataFormat(3, "3 [2422MHz]", false), new ChannelDataFormat(4, "4 [2427MHz]", false), new ChannelDataFormat(5, "5 [2432MHz]", false), new ChannelDataFormat(6, "6 [2437MHz]", false), new ChannelDataFormat(7, "7 [2442MHz]", false), new ChannelDataFormat(8, "8 [2447MHz]", false), new ChannelDataFormat(9, "9 [2452MHz]", false), new ChannelDataFormat(10, "10 [2457MHz]", false), new ChannelDataFormat(11, "11 [2462MHz]", false), new ChannelDataFormat(12, "12 [2467MHz]", false), new ChannelDataFormat(13, "13 [2472MHz]", false), new ChannelDataFormat(14, "14 [2484MHz]", false), new ChannelDataFormat(8, "8 [5040MHz]", true), new ChannelDataFormat(10, "10 [5050MHz]", true), new ChannelDataFormat(12, "12 [5060MHz]", true), new ChannelDataFormat(14, "14 [5070MHz]", true), new ChannelDataFormat(16, "16 [5080MHz]", true), new ChannelDataFormat(36, "36 [5180MHz]", true), new ChannelDataFormat(38, "38 [5190MHz]", true), new ChannelDataFormat(40, "40 [5200MHz]", true), new ChannelDataFormat(42, "42 [5210MHz]", true), new ChannelDataFormat(44, "44 [5220MHz]", true), new ChannelDataFormat(46, "46 [5230MHz]", true), new ChannelDataFormat(48, "48 [5240MHz]", true), new ChannelDataFormat(50, "50 [5250MHz]", true), new ChannelDataFormat(52, "52 [5260MHz]", true), new ChannelDataFormat(54, "54 [5270MHz]", true), new ChannelDataFormat(56, "56 [5280MHz]", true), new ChannelDataFormat(58, "58 [5290MHz]", true), new ChannelDataFormat(60, "60 [5300MHz]", true), new ChannelDataFormat(62, "62 [5310MHz]", true), new ChannelDataFormat(64, "64 [5320MHz]", true), new ChannelDataFormat(100, "100 [5500MHz]", true), new ChannelDataFormat(102, "102 [5510MHz]", true), new ChannelDataFormat(104, "104 [5520MHz]", true), new ChannelDataFormat(NfcCommand.CommandType.MTK_NFC_EM_ALS_P2P_MODE_RSP, "106 [5530MHz]", true), new ChannelDataFormat(NfcCommand.CommandType.MTK_NFC_EM_ALS_CARD_MODE_RSP, "108 [5540MHz]", true), new ChannelDataFormat(110, "110 [5550MHz]", true), new ChannelDataFormat(112, "112 [5560MHz]", true), new ChannelDataFormat(NfcCommand.CommandType.MTK_NFC_EM_VIRTUAL_CARD_RSP, "114 [5570MHz]", true), new ChannelDataFormat(NfcCommand.CommandType.MTK_NFC_EM_PNFC_CMD_RSP, "116 [5580MHz]", true), new ChannelDataFormat(NfcCommand.CommandType.MTK_NFC_EM_ALS_READER_MODE_NTF, "118 [5590MHz]", true), new ChannelDataFormat(NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD, "120 [5600MHz]", true), new ChannelDataFormat(122, "122 [5610MHz]", true), new ChannelDataFormat(124, "124 [5620MHz]", true), new ChannelDataFormat(126, "126 [5630MHz]", true), new ChannelDataFormat(128, "128 [5640MHz]", true), new ChannelDataFormat(132, "132 [5660MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_CW6, "134 [5670MHz]", true), new ChannelDataFormat(136, "136 [5680MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_HDW, "138 [5690MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_DLW, "140 [5700MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_DLC, "142 [5710MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_SPA, "144 [5720MHz]", true), new ChannelDataFormat(149, "149 [5745MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_SWA, "151 [5755MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_DF1, "153 [5765MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_DF3, "155 [5775MHz]", true), new ChannelDataFormat(Cea708CCParser.Const.CODE_C1_DF5, "157 [5785MHz]", true), new ChannelDataFormat(159, "159 [5795MHz]", true), new ChannelDataFormat(161, "161 [5805MHz]", true), new ChannelDataFormat(165, "165 [5825MHz]", true), new ChannelDataFormat(169, "169 [5845MHz]", true), new ChannelDataFormat(173, "173 [5865MHz]", true), new ChannelDataFormat(184, "184 [4920MHz]", true), new ChannelDataFormat(186, "186 [4930MHz]", true), new ChannelDataFormat(188, "188 [4940MHz]", true), new ChannelDataFormat(192, "192 [4960MHz]", true), new ChannelDataFormat(194, "194 [4970MHz]", true), new ChannelDataFormat(196, "196 [4980MHz]", true)};
    private static HashMap<Integer, ChannelData> sChannelDataDb = null;
    private static HashMap<Integer, ArrayList<ChannelData>> sChannelGroupMap = null;
    private static long[] sCachedSupportChannels = null;
    private static HashMap<Integer, int[]> sCachedSupportedChs = new HashMap<>();

    private static class ChannelData {
        public int bandwidth;
        public int frequency;
        public int id;
        public String name;
        public int sequence;

        public ChannelData(int i, String str, int i2, int i3) {
            this.id = i;
            this.name = str;
            this.frequency = i2;
            this.bandwidth = i3;
        }
    }

    static {
        initChannelDataDatabase();
    }

    public ChannelInfo() {
        this.mChannelSelect = null;
        this.mChannelSelect = sWifiChannelDatas[0].name;
    }

    private static void addToChannelGroup(int i, ChannelData channelData) {
        ArrayList<ChannelData> arrayList = sChannelGroupMap.get(Integer.valueOf(i));
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            sChannelGroupMap.put(Integer.valueOf(i), arrayList);
        }
        arrayList.add(channelData);
    }

    private int computeInsertIndex(ArrayAdapter<String> arrayAdapter, int i) {
        int i2 = -1;
        for (int i3 = 0; i3 < arrayAdapter.getCount(); i3++) {
            if (extractChannelIdFromName(arrayAdapter.getItem(i3)) > i) {
                i2 = i3;
                break;
            }
        }
        return i2 == -1 ? arrayAdapter.getCount() : i2;
    }

    private static int extractChannelIdFromName(String str) {
        String[] strArrSplit = str.split(" +");
        if (strArrSplit.length == 3) {
            try {
                return Integer.valueOf(strArrSplit[1]).intValue();
            } catch (NumberFormatException e) {
                Elog.e(TAG, "NumberFormatException:" + e.getMessage());
                return -1;
            }
        }
        if (strArrSplit.length != 4) {
            Elog.w(TAG, "extractChannelIdFromName(): " + str + " invalid name format!");
            return -1;
        }
        try {
            return Integer.valueOf(strArrSplit[1]).intValue() + 10;
        } catch (NumberFormatException e2) {
            Elog.e(TAG, "NumberFormatException:" + e2.getMessage());
            return -1;
        }
    }

    static ChannelDataFormat[] getAllChannels() {
        return sWifiFormatChannelDatas;
    }

    private static long[] getCachedSupportChannels() {
        if (sCachedSupportChannels == null) {
            int i = (int) sChannels[0];
            sCachedSupportChannels = new long[i];
            for (int i2 = 0; i2 < i; i2++) {
                sCachedSupportChannels[i2] = sChannels[i2 + 1];
            }
        }
        return sCachedSupportChannels;
    }

    static int getChannelFrequency(int i) {
        ChannelData channelData = sChannelDataDb.get(Integer.valueOf(i));
        if (channelData == null) {
            return 0;
        }
        return channelData.frequency;
    }

    private static ArrayList<ChannelData> getChannelGroup(int i) {
        return sChannelGroupMap.get(Integer.valueOf(i));
    }

    static int[] getChannelGroupArray(int i) {
        ArrayList<ChannelData> channelGroup = getChannelGroup(i);
        if (channelGroup == null) {
            return null;
        }
        int size = channelGroup.size();
        int[] iArr = new int[size];
        for (int i2 = 0; i2 < size; i2++) {
            iArr[i2] = channelGroup.get(i2).id;
        }
        return iArr;
    }

    static String getChannelName(int i) {
        ChannelData channelData = sChannelDataDb.get(Integer.valueOf(i));
        if (channelData == null) {
            return null;
        }
        return channelData.name;
    }

    static void getSupportChannels() {
        if (sChannels != null) {
            return;
        }
        if (!EMWifi.isInTestMode()) {
            Elog.w(TAG, "Wifi is not initialed");
            return;
        }
        long[] jArr = new long[MAX_CHANNEL_COUNT];
        sChannels = jArr;
        if (EMWifi.getSupportChannelList(jArr) != 0) {
            sChannels[0] = 11;
            for (int i = 0; i < 11; i++) {
                sChannels[i + 1] = i + 1;
            }
            return;
        }
        Elog.i(TAG, "LENGTH channels[0] = " + sChannels[0]);
        int i2 = 1;
        while (true) {
            long j = i2;
            long[] jArr2 = sChannels;
            if (j > jArr2[0]) {
                return;
            }
            if (14 == jArr2[i2]) {
                sHas14Ch = true;
            }
            if (sChannels[i2] > 14) {
                sHasUpper14Ch = true;
            }
            Elog.i(TAG, "channels[" + i2 + "] = " + sChannels[i2]);
            i2++;
        }
    }

    private int[] getSupported2dot4gChannels() {
        int[] iArr = sCachedSupportedChs.get(10);
        if (iArr != null) {
            return iArr;
        }
        long[] cachedSupportChannels = getCachedSupportChannels();
        ArrayList arrayList = new ArrayList();
        for (long j : cachedSupportChannels) {
            if (j >= 1 && j <= 14) {
                arrayList.add(Long.valueOf(j));
            }
        }
        if (arrayList.size() <= 0) {
            return null;
        }
        int[] iArr2 = new int[arrayList.size()];
        for (int i = 0; i < iArr2.length; i++) {
            iArr2[i] = ((Long) arrayList.get(i)).intValue();
        }
        sCachedSupportedChs.put(10, iArr2);
        return iArr2;
    }

    private int[] getSupported5gChannelsByBandwidth(int i) {
        ArrayList arrayList = new ArrayList();
        boolean z = true;
        if (i == 1) {
            int[] iArr = sCachedSupportedChs.get(1);
            if (iArr != null) {
                return iArr;
            }
            int[] iArrLongs2ints = longs2ints(getCachedSupportChannels());
            if (iArrLongs2ints != null) {
                for (int i2 : iArrLongs2ints) {
                    if (isIn5gChannelBandwidth(i2, i)) {
                        arrayList.add(Integer.valueOf(i2));
                    }
                }
            }
        } else if (i == 2) {
            int[] iArr2 = sCachedSupportedChs.get(2);
            if (iArr2 != null) {
                return iArr2;
            }
            ArrayList<ChannelData> channelGroup = getChannelGroup(2);
            if (channelGroup == null) {
                Elog.e(TAG, "getSupported5gChannelsByBandwidth BW_40M channel group is null");
                return null;
            }
            for (int i3 = 0; i3 < channelGroup.size(); i3++) {
                int i4 = channelGroup.get(i3).id;
                if (i4 > 14 && isChannelSupported(i4, 2)) {
                    arrayList.add(Integer.valueOf(i4));
                }
            }
        } else if (i == 4) {
            int[] iArr3 = sCachedSupportedChs.get(4);
            if (iArr3 != null) {
                return iArr3;
            }
            ArrayList<ChannelData> channelGroup2 = getChannelGroup(4);
            if (channelGroup2 == null) {
                Elog.e(TAG, "getSupported5gChannelsByBandwidth BW_80M channel group is null");
                return null;
            }
            for (int i5 = 0; i5 < channelGroup2.size(); i5++) {
                int i6 = channelGroup2.get(i5).id;
                if (isChannelSupported(i6, 4)) {
                    arrayList.add(Integer.valueOf(i6));
                }
            }
        } else {
            Elog.i(TAG, "getSupported5gChannelsByBandwidth invalid bandwidth:" + i);
            z = false;
        }
        if (arrayList.size() <= 0) {
            return null;
        }
        int[] iArr4 = new int[arrayList.size()];
        for (int i7 = 0; i7 < iArr4.length; i7++) {
            iArr4[i7] = ((Integer) arrayList.get(i7)).intValue();
        }
        if (z) {
            sCachedSupportedChs.put(Integer.valueOf(i), iArr4);
        }
        return iArr4;
    }

    private static boolean initChannelDataDatabase() {
        if (sChannelDataDb == null) {
            sChannelDataDb = new HashMap<>();
            if (sChannelGroupMap == null) {
                sChannelGroupMap = new HashMap<>();
            }
            int i = 0;
            while (true) {
                ChannelData[] channelDataArr = sWifiChannelDatas;
                if (i >= channelDataArr.length) {
                    break;
                }
                ChannelData channelData = channelDataArr[i];
                channelData.sequence = i + 1;
                String str = channelData.name;
                int i2 = channelData.frequency;
                if (str.contains(String.valueOf(i2 / 1000))) {
                    int i3 = channelData.id;
                    if (extractChannelIdFromName(str) != i3) {
                        Elog.e(TAG, "UnMatch id :" + i3 + " and name:" + str);
                    }
                    sChannelDataDb.put(Integer.valueOf(i3), channelData);
                    if (isInBandwidth(1, channelData)) {
                        addToChannelGroup(1, channelData);
                    }
                    if (isInBandwidth(2, channelData)) {
                        addToChannelGroup(2, channelData);
                    }
                    if (isInBandwidth(4, channelData)) {
                        addToChannelGroup(4, channelData);
                    }
                    if (isInBandwidth(8, channelData)) {
                        addToChannelGroup(8, channelData);
                    }
                } else {
                    Elog.e(TAG, "UnMatch name & frequency at index:" + i + " name:" + str + " frequency:" + i2);
                }
                i++;
            }
        }
        return true;
    }

    private static long[] ints2longs(int[] iArr) {
        if (iArr == null || iArr.length == 0) {
            return null;
        }
        long[] jArr = new long[iArr.length];
        for (int i = 0; i < iArr.length; i++) {
            jArr[i] = iArr[i];
        }
        return jArr;
    }

    private boolean isChannelSupported(int i, int i2) {
        int[] iArr;
        if (i2 == 1) {
            iArr = new int[]{i};
        } else if (i2 == 2) {
            iArr = new int[]{i - 2, i + 2};
        } else if (i2 == 4) {
            iArr = new int[]{i - 6, i - 2, i + 2, i + 6};
        } else {
            if (i2 != 8) {
                Elog.w(TAG, "Invalid bandwidth:" + i2);
                return false;
            }
            iArr = new int[]{i - 14, i - 10, i - 6, i - 2, i + 2, i + 6, i + 10, i + 14};
        }
        for (int i3 : iArr) {
            if (!isContains(i3)) {
                return false;
            }
        }
        return true;
    }

    private boolean isIn5gChannelBandwidth(int i, int i2) {
        ChannelData channelData;
        return (i < 1 || i > 14) && (channelData = sChannelDataDb.get(Integer.valueOf(i))) != null && i > 14 && isInBandwidth(i2, channelData);
    }

    private static boolean isInBandwidth(int i, ChannelData channelData) {
        return (channelData.bandwidth & i) > 0;
    }

    private boolean isSupported(int i) {
        ChannelData channelData = sChannelDataDb.get(Integer.valueOf(i));
        if (channelData == null) {
            return false;
        }
        if (isInBandwidth(1, channelData) && isChannelSupported(i, 1)) {
            return true;
        }
        if (isInBandwidth(2, channelData) && isChannelSupported(i, 2)) {
            return true;
        }
        return isInBandwidth(4, channelData) && isChannelSupported(i, 4);
    }

    private static int[] longs2ints(long[] jArr) {
        if (jArr == null || jArr.length == 0) {
            return null;
        }
        int[] iArr = new int[jArr.length];
        for (int i = 0; i < jArr.length; i++) {
            iArr[i] = (int) jArr[i];
        }
        return iArr;
    }

    static int parseChannelId(String str) {
        return extractChannelIdFromName(str);
    }

    void addChannelsIntoAdapter(long[] jArr, ArrayAdapter<String> arrayAdapter, boolean z) {
        addChannelsIntoAdapter(jArr, arrayAdapter, z, true);
    }

    void addChannelsIntoAdapter(long[] jArr, ArrayAdapter<String> arrayAdapter, boolean z, boolean z2) {
        String channelName;
        if (jArr == null) {
            return;
        }
        for (long j : jArr) {
            int i = (int) j;
            if ((!z2 || isSupported(i)) && (channelName = getChannelName(i)) != null) {
                if (z) {
                    insertChannelIntoAdapterByOrder(arrayAdapter, channelName);
                } else {
                    arrayAdapter.add(channelName);
                }
            }
        }
    }

    void addSupported2dot4gChannels(ArrayAdapter<String> arrayAdapter, boolean z) {
        addChannelsIntoAdapter(ints2longs(getSupported2dot4gChannels()), arrayAdapter, z);
    }

    void addSupported5gChannelsByBandwidth(ArrayAdapter<String> arrayAdapter, int i, boolean z) {
        int[] supported5gChannelsByBandwidth = getSupported5gChannelsByBandwidth(i);
        if (supported5gChannelsByBandwidth == null) {
            return;
        }
        addChannelsIntoAdapter(ints2longs(supported5gChannelsByBandwidth), arrayAdapter, z, false);
    }

    int getSelectedChannelId() {
        return extractChannelIdFromName(this.mChannelSelect);
    }

    int getSelectedFrequency() {
        return getChannelFrequency(getSelectedChannelId());
    }

    void insert5GChannels(ArrayAdapter<String> arrayAdapter) {
        long[] cachedSupportChannels = getCachedSupportChannels();
        for (int i = 0; i <= cachedSupportChannels.length; i++) {
            int i2 = (int) cachedSupportChannels[i];
            if (i2 > 14) {
                String channelName = getChannelName(i2);
                if (channelName != null) {
                    insertChannelIntoAdapterByOrder(arrayAdapter, channelName);
                } else {
                    Elog.d(TAG, "UNKnown channel:" + i2);
                }
            }
        }
    }

    void insertBw160MChannels(ArrayAdapter<String> arrayAdapter) {
        ArrayList<ChannelData> channelGroup = getChannelGroup(8);
        if (channelGroup == null) {
            Elog.e(TAG, "BW_160M channel group is null");
            return;
        }
        for (int i = 0; i < channelGroup.size(); i++) {
            ChannelData channelData = channelGroup.get(i);
            if (isChannelSupported(channelData.id, 8)) {
                insertChannelIntoAdapterByOrder(arrayAdapter, channelData.name);
            }
        }
    }

    void insertBw20MChannels(ArrayAdapter<String> arrayAdapter) {
        ArrayList<ChannelData> channelGroup = getChannelGroup(1);
        if (channelGroup == null) {
            Elog.e(TAG, "BW_20M channel group is null");
            return;
        }
        for (int i = 0; i < channelGroup.size(); i++) {
            ChannelData channelData = channelGroup.get(i);
            if (isChannelSupported(channelData.id, 1)) {
                insertChannelIntoAdapterByOrder(arrayAdapter, channelData.name);
            }
        }
    }

    void insertBw40MChannels(ArrayAdapter<String> arrayAdapter) {
        ArrayList<ChannelData> channelGroup = getChannelGroup(2);
        if (channelGroup == null) {
            Elog.e(TAG, "BW_40M channel group is null");
            return;
        }
        for (int i = 0; i < channelGroup.size(); i++) {
            ChannelData channelData = channelGroup.get(i);
            if (isChannelSupported(channelData.id, 2)) {
                insertChannelIntoAdapterByOrder(arrayAdapter, channelData.name);
            }
        }
    }

    void insertBw40mUnsupported2dot4GChannels(ArrayAdapter<String> arrayAdapter) {
        int i = 0;
        while (true) {
            int[] iArr = sBw40mUnsupported2dot4GChannels;
            if (i >= iArr.length) {
                return;
            }
            int i2 = iArr[i];
            String channelName = getChannelName(i2);
            if (channelName != null && isSupported(i2)) {
                insertChannelIntoAdapterByOrder(arrayAdapter, channelName);
            }
            i++;
        }
    }

    void insertBw80MChannels(ArrayAdapter<String> arrayAdapter) {
        ArrayList<ChannelData> channelGroup = getChannelGroup(4);
        if (channelGroup == null) {
            Elog.e(TAG, "BW_80M channel group is null");
            return;
        }
        for (int i = 0; i < channelGroup.size(); i++) {
            ChannelData channelData = channelGroup.get(i);
            if (isChannelSupported(channelData.id, 4)) {
                insertChannelIntoAdapterByOrder(arrayAdapter, channelData.name);
            }
        }
    }

    void insertChannelIntoAdapterByOrder(ArrayAdapter<String> arrayAdapter, String str) {
        if (arrayAdapter.getPosition(str) == -1) {
            arrayAdapter.insert(str, computeInsertIndex(arrayAdapter, extractChannelIdFromName(str)));
        }
    }

    public boolean isContains(int i) {
        int i2 = 1;
        while (true) {
            long j = i2;
            long[] jArr = sChannels;
            if (j > jArr[0]) {
                return false;
            }
            if (i == jArr[i2]) {
                return true;
            }
            i2++;
        }
    }

    void remove2dot4GChannels(ArrayAdapter<String> arrayAdapter) {
        for (int i = 1; i <= 14; i++) {
            arrayAdapter.remove(getChannelName(i));
        }
    }

    void remove5GChannels(ArrayAdapter<String> arrayAdapter) {
        for (int count = arrayAdapter.getCount() - 1; count >= 0; count--) {
            String item = arrayAdapter.getItem(count);
            if (extractChannelIdFromName(item) > 14) {
                arrayAdapter.remove(item);
            }
        }
    }

    void removeBw40MChannels(ArrayAdapter<String> arrayAdapter) {
        ArrayList<ChannelData> channelGroup = getChannelGroup(2);
        if (channelGroup == null) {
            Elog.e(TAG, "BW_40M channel group is null");
            return;
        }
        for (int i = 0; i < channelGroup.size(); i++) {
            ChannelData channelData = channelGroup.get(i);
            if (channelData.id > 14) {
                arrayAdapter.remove(channelData.name);
            }
        }
    }

    void removeBw40mUnsupported2dot4GChannels(ArrayAdapter<String> arrayAdapter) {
        int i = 0;
        while (true) {
            int[] iArr = sBw40mUnsupported2dot4GChannels;
            if (i >= iArr.length) {
                return;
            }
            String channelName = getChannelName(iArr[i]);
            if (channelName != null) {
                arrayAdapter.remove(channelName);
            }
            i++;
        }
    }

    void removeChannels(int[] iArr, ArrayAdapter<String> arrayAdapter) {
        for (int i : iArr) {
            String channelName = getChannelName(i);
            if (channelName != null) {
                arrayAdapter.remove(channelName);
            }
        }
    }

    void resetSupportedChannels(ArrayAdapter<String> arrayAdapter) {
        arrayAdapter.clear();
        addChannelsIntoAdapter(getCachedSupportChannels(), arrayAdapter, false);
    }

    void setSelectedChannel(String str) {
        this.mChannelSelect = str;
    }
}

package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.os.Environment;
import android.view.View;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.mdml.Msg;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public abstract class MDMComponent implements Comparable<MDMComponent> {
    protected static final String TAG = "EmInfo/MDMComponent";
    protected Activity mActivity;
    private static List<MDMComponent> mComponents = null;
    protected static String[] icdLogInfo = new String[6];
    protected static String[] emLogInfo = new String[6];

    public MDMComponent(Activity activity) {
        this.mActivity = activity;
    }

    static List<MDMComponent> getComponents(Activity activity) {
        List<MDMComponent> list = mComponents;
        if (list != null) {
            return list;
        }
        ArrayList arrayList = new ArrayList();
        mComponents = arrayList;
        arrayList.add(new RRCState(activity));
        mComponents.add(new RRState(activity));
        mComponents.add(new ERRCState(activity));
        mComponents.add(new HighPriorityPLMNSearch(activity));
        mComponents.add(new CarrierRSSIServing(activity));
        mComponents.add(new FTNetworkInfo(activity, 2));
        mComponents.add(new EUtranNeighborCellInfo(activity));
        mComponents.add(new TddServingCellInfo(activity));
        mComponents.add(new LaiRaiUmtsTdd(activity));
        mComponents.add(new GeranNeighborCellInfoUmtsTdd(activity));
        mComponents.add(new EUtranNeighborCellInfoUmtsTdd(activity));
        mComponents.add(new LteServingCellInfo(activity));
        mComponents.add(new C0010LteSCellInfo(activity));
        mComponents.add(new PrimaryCellDlBlockErrorRate(activity));
        mComponents.add(new PrimaryCellDownlinkBandwidth(activity));
        mComponents.add(new PrimaryCellUplinkBandwidth(activity));
        mComponents.add(new PrimaryCellUplinkDownlinkConfiguration(activity));
        mComponents.add(new PrimaryCellSpecialSubframeConfiguration(activity));
        mComponents.add(new PrimaryCellTransmissionMode(activity));
        mComponents.add(new SecondaryCellDlBlockErrorRate(activity));
        mComponents.add(new SecondaryCellDownlinkBandwidth(activity));
        mComponents.add(new SecondaryCellUplinkBandwidth(activity));
        mComponents.add(new SecondaryCellUplinkDownlinkConfiguration(activity));
        mComponents.add(new SecondaryCellSpecialSubframeConfiguration(activity));
        mComponents.add(new SecondaryCellTransmissionMode(activity));
        mComponents.add(new Tai(activity));
        mComponents.add(new EmIrReport(activity));
        mComponents.add(new UmtsRrcMeasurementControlForE3a(activity));
        mComponents.add(new UmtsRrcMeasurementControlForE3b(activity));
        mComponents.add(new UmtsRrcMeasurementControlForE3c(activity));
        mComponents.add(new UmtsRrcMeasurementControlForE3d(activity));
        mComponents.add(new UmtsRrcMeasurementReportForE3a(activity));
        mComponents.add(new UmtsRrcMeasurementReportForE3b(activity));
        mComponents.add(new UmtsRrcMeasurementReportForE3c(activity));
        mComponents.add(new UmtsRrcMeasurementReportForE3d(activity));
        mComponents.add(new UmtsNeighborCellInfoGsmTdd(activity));
        mComponents.add(new LTENeighborCellInfoGSM(activity));
        mComponents.add(new LteErrcMeasurementConfigForEventB1(activity));
        mComponents.add(new LteErrcMeasurementConfigForEventB2(activity));
        mComponents.add(new LteErrcMeasurementReportForEventB1(activity));
        mComponents.add(new LteErrcMeasurementReportForEventB2(activity));
        mComponents.add(new EDchTtiConfigured(activity));
        mComponents.add(new HsdpaConfiguredUmtsFdd(activity));
        mComponents.add(new DcHsdpaConfiguredUmtsFdd(activity));
        mComponents.add(new HsDschModulationPrimaryCell(activity));
        mComponents.add(new HsupaConfiguredUmtsFdd(activity));
        mComponents.add(new WcdmaHsupaCapability(activity));
        mComponents.add(new WcdmaHsdpaCapability(activity));
        mComponents.add(new Fdd3gSpeechCodec(activity));
        mComponents.add(new PlmnSearchStatusUmtsFdd(activity));
        mComponents.add(new CellSupportPsInfo(activity));
        mComponents.add(new DtxConfiguredUmtsFdd(activity));
        mComponents.add(new DrxConfiguredUmtsFdd(activity));
        mComponents.add(new FastDormancyConfiguration(activity));
        mComponents.add(new IntraFrequencyMonitoredSetUmtsFdd(activity));
        mComponents.add(new IntraFrequencyDetectedSetUmtsFdd(activity));
        mComponents.add(new ActiveSetUmtsFdd(activity));
        mComponents.add(new CsOverHspaUmtsFdd(activity));
        mComponents.add(new ShareNetworkPlmnInfo(activity));
        mComponents.add(new ServingCellInformationUmtsFdd(activity));
        mComponents.add(new PrimaryCellCqi(activity));
        mComponents.add(new PrimaryCellDlImcs(activity));
        mComponents.add(new PrimaryCellDlResourceBlock(activity));
        mComponents.add(new PrimaryCellAntennaPort(activity));
        mComponents.add(new PrimaryCellDlThroughput(activity));
        mComponents.add(new PrimaryCellDlBlockRate(activity));
        mComponents.add(new SecondaryCellCqi(activity));
        mComponents.add(new SecondaryCellDlImcs(activity));
        mComponents.add(new SecondaryCellDlResourceBlock(activity));
        mComponents.add(new SecondaryCellAntennaPort(activity));
        mComponents.add(new SecondaryCellDlThroughput(activity));
        mComponents.add(new SecondaryCellDlBlockRate(activity));
        mComponents.add(new DownlinkDataThroughput(activity));
        mComponents.add(new UplinkDataThroughput(activity));
        mComponents.add(new HandoverIntraLte(activity));
        mComponents.add(new MDFeatureDetection(activity));
        mComponents.add(new RatAndServiceStatus(activity));
        mComponents.add(new HsDschServingCellUmtsFdd(activity));
        mComponents.add(new SecondHsDschServingCell(activity));
        mComponents.add(new BasicInfoServingGsm(activity));
        mComponents.add(new RsrpLteCandidateCellUmtsFdd(activity));
        mComponents.add(new RsrqLteCandidateCellUmtsFdd(activity));
        mComponents.add(new UmtsRscp(activity));
        mComponents.add(new UmtsEcn0(activity));
        mComponents.add(new IntraFrequencyNeighbouringCellInformationLteTdd(activity));
        mComponents.add(new InterFrequencyNeighbouringCellInformationLteTdd(activity));
        mComponents.add(new GeranNeighbouringCellInformation(activity));
        mComponents.add(new UtraTddNeighbouringCellInformation(activity));
        mComponents.add(new WcdmaTasInfo(activity));
        mComponents.add(new WcdmaUTasInfo(activity));
        mComponents.add(new GSMTasInfo(activity));
        mComponents.add(new GSMUTasInfo(activity));
        mComponents.add(new TddTasInfo(activity));
        mComponents.add(new TddUTasInfo(activity));
        mComponents.add(new PrimaryCellRsrpRx(activity));
        mComponents.add(new PrimaryCellRsrp(activity));
        mComponents.add(new PrimaryCellRsrq(activity));
        mComponents.add(new PrimaryCellRssiRx(activity));
        mComponents.add(new PrimaryCellSnrRx(activity));
        mComponents.add(new PrimaryCellOsSnr(activity));
        mComponents.add(new SecondaryCellRsrpRx(activity));
        mComponents.add(new SecondaryCellRsrp(activity));
        mComponents.add(new SecondaryCellRsrq(activity));
        mComponents.add(new SecondaryCellRssiRx(activity));
        mComponents.add(new SecondaryCellSnrRx(activity));
        mComponents.add(new SecondaryCellOsSnr(activity));
        mComponents.add(new EnhancedRRCState(activity));
        mComponents.add(new LteUTasInfo(activity));
        mComponents.add(new LteTasInfo(activity));
        mComponents.add(new CellStrength(activity));
        mComponents.add(new PCellSCellBasicInfo(activity));
        mComponents.add(new ErrcFeatureDetection(activity));
        mComponents.add(new El2FeatureDetection(activity));
        mComponents.add(new LteErlcDlDrbConfiguration(activity));
        mComponents.add(new LteErlcUlDrbConfiguration(activity));
        mComponents.add(new SecondaryCell(activity));
        mComponents.add(new EMMCallInformation(activity));
        mComponents.add(new EmacInfo(activity));
        mComponents.add(new EPSBearerThroughput(activity));
        mComponents.add(new GSMRxdInfo(activity));
        mComponents.add(new LteEmacRachFailure(activity));
        mComponents.add(new LteErrcRlfEvent(activity));
        mComponents.add(new LteErrcOosEvent(activity));
        if (FeatureSupport.is93Modem()) {
            mComponents.add(new Cdma1xrttRadioInfo(activity));
            mComponents.add(new Cdma1xrttRadioUTasInfo(activity));
            mComponents.add(new EvdoServingInfo(activity));
            mComponents.add(new Cdma1xrttInfo(activity));
            mComponents.add(new Cdma1xSchInfo(activity));
            mComponents.add(new Cdma1xStatisticsInfo(activity));
            mComponents.add(new Cdma1xSeringNeihbrInfo(activity));
            mComponents.add(new EvdoFlInfo(activity));
            mComponents.add(new EvdoRlInfo(activity));
            mComponents.add(new EvdoStatueInfo(activity));
            mComponents.add(new EvdoSprintXRttInfo(activity));
            mComponents.add(new EvdoSprintInfo(activity));
            mComponents.add(new EvdoActiveSet(activity));
            mComponents.add(new EvdoCandSet(activity));
            mComponents.add(new EvdoNghdrSet(activity));
        }
        mComponents.add(new SpeechCodecInfo(activity));
        mComponents.add(new RFCalibrationStatusCheck(activity));
        mComponents.add(new LastRegisteredNetwork(activity));
        mComponents.add(new TMSIandPTMSI(activity));
        mComponents.add(new PeriodicLocationUpdateValue(activity));
        mComponents.add(new RejectCauseCode(activity));
        mComponents.add(new ActivePDPContextInformationUmtsFDD(activity));
        mComponents.add(new ActivePDPContextInformationLTE(activity));
        mComponents.add(new EUTRAMeasurementReport(activity));
        mComponents.add(new LTEPCellDLModulationTB1(activity));
        mComponents.add(new LTEPCellDLModulationTB2(activity));
        mComponents.add(new LTEPCellULModulation(activity));
        mComponents.add(new LTEPCellMIMOLayers(activity));
        mComponents.add(new LTEPDCPThroughput(activity));
        mComponents.add(new LTERLCThroughput(activity));
        mComponents.add(new LTEMACThroughput(activity));
        mComponents.add(new LTEPCellPHYThroughput(activity));
        mComponents.add(new LTESCellPHYThroughput(activity));
        mComponents.add(new LTESCellInfo(activity));
        mComponents.add(new LTENeighborCellInfo(activity));
        mComponents.add(new LTESignalView(activity));
        mComponents.add(new NRSessionInfo(activity));
        mComponents.add(new NRPServingCellInfo1(activity));
        mComponents.add(new NRPServingCellInfo2(activity));
        mComponents.add(new NRPServingCellRsrpRx(activity));
        mComponents.add(new NRPServingCellRsrqRx(activity));
        mComponents.add(new NRPServingCellRssiRx(activity));
        mComponents.add(new NRPServingCellSinrRx(activity));
        mComponents.add(new NRPNeighborCellInfo(activity));
        mComponents.add(new NRPCellResourceBlock(activity));
        mComponents.add(new NRPCellTransMode(activity));
        mComponents.add(new NRPCellTxPower(activity));
        mComponents.add(new NRPCellChannelStatePMI1(activity));
        mComponents.add(new NRPCellChannelStatePMI2(activity));
        mComponents.add(new NRPCellChannelStateCqi1(activity));
        mComponents.add(new NRPCellChannelStateCqi2(activity));
        mComponents.add(new NRPCellChannelStateRi(activity));
        mComponents.add(new NRPCellDLModulationTB1(activity));
        mComponents.add(new NRPCellDLModulationTB2(activity));
        mComponents.add(new NRPCellULModulation(activity));
        mComponents.add(new NRPCellULMIMOLayers(activity));
        mComponents.add(new NRPCellBLER(activity));
        mComponents.add(new NRPCellSDAPThroughput(activity));
        mComponents.add(new NRPCellPDCPThroughput(activity));
        mComponents.add(new NRPCellRLCThroughput(activity));
        mComponents.add(new NRPCellMACThroughput(activity));
        mComponents.add(new NRPCellPHYThroughput(activity));
        mComponents.add(new NRCdrxInfo(activity));
        mComponents.add(new NRPCellTxOpMode(activity));
        mComponents.add(new NSA(activity));
        mComponents.add(new SA(activity));
        mComponents.add(new SRSTxStatus(activity));
        mComponents.add(new NRUTasInfo(activity));
        mComponents.add(new NRNetCon(activity));
        mComponents.add(new NrTddPattern(activity));
        mComponents.add(new NRCAActive(activity));
        mComponents.add(new NRSCellInfo(activity));
        mComponents.add(new ONasInfo(activity));
        mComponents.add(new oRfcInfo(activity));
        mComponents.add(new DRBType(activity));
        mComponents.add(new NRPServingCellCSIRSReport(activity));
        mComponents.add(new DRDSDS(activity));
        mComponents.add(new RRCProcDuration(activity));
        return mComponents;
    }

    String[] addLablesAtPosition(String[] strArr, String[] strArr2, int i) {
        String[] strArr3 = new String[strArr.length + strArr2.length];
        if (i >= strArr.length) {
            System.arraycopy(strArr, 0, strArr3, 0, strArr.length);
            System.arraycopy(strArr2, 0, strArr3, strArr.length, strArr2.length);
        } else {
            for (int i2 = 0; i2 < strArr.length; i2++) {
                if (i2 < i) {
                    strArr3[i2] = strArr[i2];
                } else if (i2 == i) {
                    for (int i3 = 0; i3 < strArr2.length; i3++) {
                        strArr3[i2 + i3] = strArr2[i3];
                    }
                    strArr3[strArr2.length + i2] = strArr[i2];
                } else {
                    strArr3[strArr2.length + i2] = strArr[i2];
                }
            }
        }
        return strArr3;
    }

    abstract void clearData();

    @Override // java.lang.Comparable
    public int compareTo(MDMComponent mDMComponent) {
        return getName().compareTo(mDMComponent.getName());
    }

    public <T> T[] concatAll(T[] tArr, T[]... tArr2) {
        int length = tArr.length;
        for (T[] tArr3 : tArr2) {
            length += tArr3.length;
        }
        T[] tArr4 = (T[]) Arrays.copyOf(tArr, length);
        int length2 = tArr.length;
        for (T[] tArr5 : tArr2) {
            System.arraycopy(tArr5, 0, tArr4, length2, tArr5.length);
            length2 += tArr5.length;
        }
        return tArr4;
    }

    public boolean diff_time(String str, String str2, int i) {
        Date date = null;
        Date date2 = null;
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy_MM_dd_HH_mm_ss_SS");
        try {
            date = simpleDateFormat.parse(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            date2 = simpleDateFormat.parse(str2);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return date2.getTime() - date.getTime() > ((long) i);
    }

    public String getCurrectTime() {
        return new SimpleDateFormat("yyyy_MM_dd_HH_mm_ss_SS").format(new Date());
    }

    abstract String[] getEmComponentName();

    public int getFieldHeaderLength(ByteBuffer byteBuffer) {
        int i = (byteBuffer.get(0) & 240) >> 4;
        int i2 = byteBuffer.get(0) & 15;
        int i3 = 0;
        int valueFromIcdSource = 0;
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>() { // from class: com.mediatek.engineermode.mdmcomponent.MDMComponent.1
            {
                put(0, 0);
                put(1, 8);
                put(2, 4);
                put(8, 8);
                put(9, 4);
            }
        };
        if (i2 != 0) {
            if (i2 != 1) {
                Elog.e(TAG, "getFieldHeaderLength error, type is : " + i2);
            } else if (i == 1) {
                i3 = MDMContentICD.ICD_RECORD_V1.timeStamp[0];
                valueFromIcdSource = (int) getValueFromIcdSource(byteBuffer, MDMContentICD.ICD_RECORD_V1.timestamp_type);
            } else if (i == 2) {
                i3 = MDMContentICD.ICD_RECORD_V2.timeStamp[0];
                valueFromIcdSource = (int) getValueFromIcdSource(byteBuffer, MDMContentICD.ICD_RECORD_V2.timestamp_type);
            }
        } else if (i == 1) {
            i3 = MDMContentICD.ICD_EVENT_V1.timeStamp[0];
            valueFromIcdSource = (int) getValueFromIcdSource(byteBuffer, MDMContentICD.ICD_EVENT_V1.timestamp_type);
        } else if (i == 2) {
            i3 = MDMContentICD.ICD_EVENT_V2.timeStamp[0];
            valueFromIcdSource = (int) getValueFromIcdSource(byteBuffer, MDMContentICD.ICD_EVENT_V2.timestamp_type);
        }
        return (map.get(Integer.valueOf(valueFromIcdSource)).intValue() * 8) + i3;
    }

    public int getFieldSignedValueIcd(ByteBuffer byteBuffer, int i, int i2) {
        return (int) getSignedValueFromIcdSource(byteBuffer, new int[]{i + getFieldHeaderLength(byteBuffer), i2});
    }

    public int getFieldValue(Msg msg, String str) {
        byte[] fieldValue = msg.getFieldValue(str);
        if (fieldValue == null) {
            Elog.d(TAG, "[getFieldValue] returned null from :" + str);
        }
        return (int) Utils.getIntFromByte(fieldValue);
    }

    public int getFieldValue(Msg msg, String str, boolean z) {
        if (!z) {
            return getFieldValue(msg, str);
        }
        byte[] fieldValue = msg.getFieldValue(str);
        if (fieldValue == null) {
            Elog.d(TAG, "[getFieldValue] returned null from :" + str);
        }
        return (int) Utils.getIntFromByte(fieldValue, true);
    }

    public int getFieldValueIcd(ByteBuffer byteBuffer, int i, int i2) {
        return (int) getValueFromIcdSource(byteBuffer, new int[]{i + getFieldHeaderLength(byteBuffer), i2});
    }

    public int getFieldValueIcd(ByteBuffer byteBuffer, int i, int i2, boolean z) {
        int fieldValueIcd = getFieldValueIcd(byteBuffer, i, i2);
        return (z && (byteBuffer.get((((i + i2) + (-1)) / 8) + 21) & 128) != 0) ? ~fieldValueIcd : fieldValueIcd;
    }

    public int getFieldValueIcd(ByteBuffer byteBuffer, int i, int[][] iArr) {
        if (i <= 0 || iArr == null || iArr.length == 0) {
            Elog.e(TAG, "getFieldValueIcd: version: " + i + ", offsetAddrs, need check!");
            return 0;
        }
        if (i > iArr.length) {
            i = iArr.length;
            Elog.d(TAG, "offsetAddrs < version, use latest record" + i + ", " + iArr.length);
        }
        return getFieldValueIcd(byteBuffer, iArr[i - 1]);
    }

    public int getFieldValueIcd(ByteBuffer byteBuffer, int i, int[][] iArr, boolean z) {
        if (i <= 0 || iArr == null || iArr.length == 0) {
            Elog.e(TAG, "getFieldValueIcd: version: " + i + ", offsetAddrs, need check!");
            return 0;
        }
        if (i > iArr.length) {
            i = iArr.length;
            Elog.d(TAG, "offsetAddrs < version, use latest record" + i + ", " + iArr.length);
        }
        return getFieldValueIcd(byteBuffer, iArr[i - 1], z);
    }

    public int getFieldValueIcd(ByteBuffer byteBuffer, int[] iArr) {
        if (iArr.length != 0) {
            int length = iArr.length - 1;
            return getFieldValueIcd(byteBuffer, getOffsetByAddrs(Arrays.copyOfRange(iArr, 0, length)), iArr[length]);
        }
        Elog.e(TAG, "[getFieldValueIcd] offsetAddrs length is 0, version is " + getFieldValueIcdVersion(byteBuffer, 8) + ", return");
        return 0;
    }

    public int getFieldValueIcd(ByteBuffer byteBuffer, int[] iArr, boolean z) {
        if (iArr.length != 0) {
            int length = iArr.length - 1;
            int offsetByAddrs = getOffsetByAddrs(Arrays.copyOfRange(iArr, 0, length));
            int i = iArr[length];
            return z ? getFieldSignedValueIcd(byteBuffer, offsetByAddrs, i) : getFieldValueIcd(byteBuffer, offsetByAddrs, i);
        }
        Elog.e(TAG, "[getFieldValueIcd] offsetAddrs length is 0, version is " + getFieldValueIcdVersion(byteBuffer, 8) + ", return");
        return 0;
    }

    public int getFieldValueIcdType(ByteBuffer byteBuffer) {
        return byteBuffer.get(0) & 15;
    }

    public int getFieldValueIcdVersion(ByteBuffer byteBuffer, int i) {
        return (int) getValueFromIcdSource(byteBuffer, new int[]{getFieldHeaderLength(byteBuffer), i});
    }

    abstract String getGroup();

    public long getLongFieldValueIcd(ByteBuffer byteBuffer, int i, int[][] iArr, boolean z) {
        if (i <= 0 || iArr == null || iArr.length == 0) {
            Elog.e(TAG, "getFieldValueIcd: version: " + i + ", offsetAddrs, need check!");
            return 0L;
        }
        if (i > iArr.length) {
            i = iArr.length;
            Elog.d(TAG, "offsetAddrs < version, use latest record" + i + ", " + iArr.length);
        }
        int length = iArr[i - 1].length - 1;
        int offsetByAddrs = getOffsetByAddrs(Arrays.copyOfRange(iArr[i - 1], 0, length));
        int i2 = iArr[i - 1][length];
        int fieldHeaderLength = getFieldHeaderLength(byteBuffer);
        return (int) (z ? getSignedValueFromIcdSource(byteBuffer, new int[]{offsetByAddrs + fieldHeaderLength, i2}) : getValueFromIcdSource(byteBuffer, new int[]{offsetByAddrs + fieldHeaderLength, i2}));
    }

    abstract String getName();

    public int getOffsetByAddrs(int[] iArr) {
        int i = 0;
        for (int i2 : iArr) {
            i += i2;
        }
        return i;
    }

    public long getSignedValueFromIcdSource(ByteBuffer byteBuffer, int[] iArr) {
        int i = iArr[0];
        int i2 = iArr[1];
        int i3 = (byteBuffer.get(0) & 240) >> 4;
        int i4 = byteBuffer.get(0) & 15;
        long j = 0;
        int i5 = i % 8;
        int i6 = i / 8;
        int i7 = (i + i2) % 8;
        int i8 = (i2 + i) / 8;
        if (i8 <= byteBuffer.limit() && i6 <= byteBuffer.limit()) {
            if (i5 != 0) {
                if (i2 <= 8 - i5) {
                    return 0 | ((long) ((byteBuffer.get(i6) >> i5) & ((1 << i2) - 1)));
                }
                j = 0 | ((long) (byteBuffer.get(i6) >> i5));
                i5 = 8 - i5;
                i6++;
            }
            if (i8 > i6) {
                for (int i9 = i6; i9 < i8; i9++) {
                    j |= (long) (byteBuffer.get(i9) << (((i9 - i6) * 8) + i5));
                }
            }
            if (i7 == 0 || i8 >= byteBuffer.limit()) {
                return j;
            }
            return j | ((long) ((byteBuffer.get(i8) & ((1 << i7) - 1)) << (((i8 - i6) * 8) + i5)));
        }
        Elog.d(TAG, "getFieldSignedValueIcd version: " + i3 + ", type: " + i4 + ", offset: " + i + ", length: " + i2 + ", limit: " + byteBuffer.limit() + ", beginByte: " + i6 + ", maskBit: " + i5 + ", endByte: " + i8 + ", endBit: " + i7);
        Elog.e(TAG, "data transfer error! return.....");
        return 0L;
    }

    int getTypeIndex(String str) {
        String[] emComponentName = getEmComponentName();
        if (emComponentName == null) {
            Elog.d(TAG, "type is null " + str);
            return -1;
        }
        for (int i = 0; i < emComponentName.length; i++) {
            if (emComponentName[i].equals(str)) {
                return i;
            }
        }
        return -1;
    }

    public String getValueByMapping(HashMap<Integer, String> map, int i) {
        if (map.containsKey(Integer.valueOf(i))) {
            return map.get(Integer.valueOf(i));
        }
        if (map.containsKey(-1)) {
            return map.get(-1);
        }
        return "-(" + i + ")";
    }

    public long getValueFromIcdSource(ByteBuffer byteBuffer, int[] iArr) {
        int i = iArr[0];
        int i2 = iArr[1];
        int i3 = (byteBuffer.get(0) & 240) >> 4;
        int i4 = byteBuffer.get(0) & 15;
        long j = 0;
        int i5 = i % 8;
        int i6 = i / 8;
        int i7 = (i + i2) % 8;
        int i8 = (i2 + i) / 8;
        if (i8 <= byteBuffer.limit() && i6 <= byteBuffer.limit()) {
            if (i5 != 0) {
                if (i2 <= 8 - i5) {
                    return 0 | ((long) (((byteBuffer.get(i6) & 255) >> i5) & ((1 << i2) - 1)));
                }
                j = 0 | ((long) ((byteBuffer.get(i6) & 255) >> i5));
                i5 = 8 - i5;
                i6++;
            }
            if (i8 > i6) {
                for (int i9 = i6; i9 < i8; i9++) {
                    j |= (long) ((byteBuffer.get(i9) & 255) << (((i9 - i6) * 8) + i5));
                }
            }
            if (i7 == 0 || i8 >= byteBuffer.limit()) {
                return j;
            }
            return j | ((long) (((byteBuffer.get(i8) & 255) & ((1 << i7) - 1)) << (((i8 - i6) * 8) + i5)));
        }
        Elog.d(TAG, "getFieldValueIcd version: " + i3 + ", type: " + i4 + ", offset: " + i + ", length: " + i2 + ", limit: " + byteBuffer.limit() + ", beginByte: " + i6 + ", maskBit: " + i5 + ", endByte: " + i8 + ", endBit: " + i7);
        Elog.e(TAG, "data transfer error! return.....");
        return 0L;
    }

    abstract View getView();

    boolean hasEmType(String str) {
        String[] emComponentName = getEmComponentName();
        if (emComponentName == null) {
            Elog.d(TAG, "type is null " + str);
            return false;
        }
        for (String str2 : emComponentName) {
            if (str2.toUpperCase().equals(str.toUpperCase())) {
                return true;
            }
        }
        return false;
    }

    protected int[] insertElement(int[] iArr, int i, int i2) {
        int length = iArr.length;
        if (i2 > length || (-i2) > length) {
            return iArr;
        }
        if (i2 < 0 && (-i2) < length) {
            i2 += length;
        }
        int[] iArr2 = new int[length + 1];
        System.arraycopy(iArr, 0, iArr2, 0, i2);
        iArr2[i2] = i;
        System.arraycopy(iArr, i2, iArr2, i2 + 1, length - i2);
        return iArr2;
    }

    protected int[][] insertElement(int[][] iArr, int i, int[] iArr2, int i2) {
        if (i <= 0 || iArr == null || iArr.length == 0) {
            Elog.e(TAG, "getFieldValueIcd: version: " + i + ", offsetAddrs, need check!");
            return iArr;
        }
        int i3 = iArr2[(i > iArr2.length ? iArr2.length : i) - 1];
        int[] iArr3 = iArr[(i > iArr.length ? iArr.length : i) - 1];
        int length = iArr3.length;
        int[] iArr4 = new int[length + 1];
        if (i2 == 0 || i2 > length || (-i2) > length) {
            return iArr;
        }
        if (i2 < 0 && (-i2) < length) {
            i2 += length;
        }
        System.arraycopy(iArr3, 0, iArr4, 0, i2);
        iArr4[i2] = i3;
        System.arraycopy(iArr3, i2, iArr4, i2 + 1, length - i2);
        iArr[(i > iArr.length ? iArr.length : i) - 1] = iArr4;
        return iArr;
    }

    String[] removeLablesAtPosition(String[] strArr, int i, int i2) {
        if (i >= strArr.length) {
            return strArr;
        }
        String[] strArr2 = new String[strArr.length - i2];
        for (int i3 = 0; i3 < strArr.length - i2; i3++) {
            if (i3 < i) {
                strArr2[i3] = strArr[i3];
            } else if (i3 != i) {
                strArr2[i3] = strArr[i3 + i2];
            } else {
                if (strArr.length - i <= i2) {
                    break;
                }
                strArr2[i3] = strArr[i3 + i2];
            }
        }
        return strArr2;
    }

    abstract void removeView();

    public void saveToSDCard(String str, String str2, String str3, boolean z) throws IOException {
        String str4 = Environment.getExternalStorageDirectory().getPath() + str;
        File file = new File(str4);
        if (!file.exists()) {
            file.mkdir();
        }
        FileOutputStream fileOutputStream = new FileOutputStream(new File(str4, str2), z);
        fileOutputStream.write(str3.getBytes());
        fileOutputStream.write("\r\n".getBytes());
        fileOutputStream.close();
    }

    abstract boolean supportMultiSIM();

    public void testData() {
    }

    abstract void update(String str, Object obj);

    protected int[] updateElement(int[] iArr, int i, int i2) {
        if (i2 > iArr.length || (-i2) > iArr.length) {
            return iArr;
        }
        if (i2 < 0 && (-i2) < iArr.length) {
            i2 += iArr.length;
        }
        iArr[i2] = i;
        return iArr;
    }
}

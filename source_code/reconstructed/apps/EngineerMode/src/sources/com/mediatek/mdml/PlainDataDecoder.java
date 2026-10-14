package com.mediatek.mdml;

import android.content.Context;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.util.Log;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.mcfconfig.FileUtils;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.NoSuchElementException;
import vendor.mediatek.hardware.mdmonitor.V1_0.IMDMonitorService;

/* JADX INFO: loaded from: classes3.dex */
public class PlainDataDecoder {
    private static final String TAG = "MDML/PlainDataDecoder";
    private static HashMap<String, PlainDataDecoder> sPathDecoderMap = new HashMap<>();
    private IMDMonitorService mdmConnection;
    private InfoType currentBlock = InfoType.NONE;
    private int verMain = 0;
    private int verSub = 0;
    private InfoDat infoDat = new InfoDat();

    /* JADX INFO: renamed from: com.mediatek.mdml.PlainDataDecoder$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$mdml$InfoType;

        static {
            int[] iArr = new int[InfoType.values().length];
            $SwitchMap$com$mediatek$mdml$InfoType = iArr;
            try {
                iArr[InfoType.NONE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.OTA_INFO.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.MSG_INFO.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.PEER_INFO.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.PEER_INFO_WITHOUT_HEADER.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.GLOBAL_ID.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.SIM_INFO.ordinal()] = 7;
            } catch (NoSuchFieldError e7) {
            }
        }
    }

    @Deprecated
    public PlainDataDecoder(String str) throws Exception {
        Log.e(TAG, "Old PlainDataDecoder constructor, it was phase out. Please use new interface of PlainDataDecoder constructor.");
        throw new Exception("Old PlainDataDecoder constructor, it was phase out. Please use new interface of PlainDataDecoder constructor.");
    }

    public PlainDataDecoder(String str, Context context) throws Exception {
        if (str == null) {
            if (SystemProperties.getInt(SystemProperties.getInt("ro.build.version.sdk", 28) >= 28 ? FeatureSupport.FK_SINGLE_BIN_MODEM_SUPPORT : "ro.mtk_single_bin_modem_support", 0) == 1) {
                String str2 = context.getCacheDir().getAbsolutePath() + FileUtils.SEPARATOR;
                Log.d(TAG, "search app local directory: " + str2);
                String strSearchLayoutFile = SearchLayoutFile(str2);
                str = strSearchLayoutFile;
                if (strSearchLayoutFile == null) {
                    if (getLayoutFileDataFromMDMAndSaveToPath(str2) != 0) {
                        throw new Exception("Single bin modem support, error in getLayoutFileDataFromMDMAndSaveToPath() for extrace bin to = " + str2);
                    }
                    String strSearchLayoutFile2 = SearchLayoutFile(str2);
                    str = strSearchLayoutFile2;
                    if (strSearchLayoutFile2 == null) {
                        throw new Exception("Single bin modem support, Can't find layout file in folder = " + str2);
                    }
                }
            } else {
                String strSearchLayoutFile3 = SearchLayoutFile("/vendor/etc/mddb/");
                str = strSearchLayoutFile3;
                if (strSearchLayoutFile3 == null) {
                    throw new Exception("Can't find layout file in modem single bin OFF case.");
                }
            }
        }
        this.infoDat.otaInfo.clear();
        this.infoDat.msgInfo.clear();
        this.infoDat.globalID.clear();
        this.infoDat.simInfo.clear();
        FileReader fileReader = new FileReader(str);
        BufferedReader bufferedReader = new BufferedReader(fileReader);
        while (bufferedReader.ready()) {
            String line = bufferedReader.readLine();
            if (line != null && line.length() > 0 && (line.charAt(0) != '#' || !readTag(line.substring(1)))) {
                readContent(line);
            }
        }
        fileReader.close();
    }

    private String SearchLayoutFile(String str) {
        String str2 = null;
        if (str == null) {
            return null;
        }
        File file = new File(str);
        try {
            String[] list = file.list();
            if (list == null) {
                Log.d(TAG, str + "is not exsist");
                return null;
            }
            int i = 0;
            while (i < list.length) {
                if (list[i].startsWith("mdm_layout_desc") && list[i].endsWith(".dat")) {
                    str2 = str + list[i];
                    Log.d(TAG, "Layout file: [" + str2 + "] was found!");
                    break;
                }
                i++;
            }
            if (i == list.length) {
                Log.e(TAG, "Can't find layout file. in " + file);
            }
            return str2;
        } catch (SecurityException e) {
            Log.e(TAG, "checkRead method denies read access to the file");
            return null;
        }
    }

    private Msg commonGetMsg(Integer num, InfoType infoType) {
        CommonMsgInfo msgInfo = getMsgInfo(infoType);
        if (msgInfo == null) {
            return null;
        }
        return setBaseMsg2Msg(msgInfo.getBaseMsg(num), infoType);
    }

    private Msg commonGetMsg(String str, InfoType infoType) {
        CommonMsgInfo msgInfo = getMsgInfo(infoType);
        if (msgInfo == null) {
            return null;
        }
        return setBaseMsg2Msg(msgInfo.getBaseMsg(str), infoType);
    }

    private Msg commonGetMsg(byte[] bArr, int i, InfoType infoType) {
        OffsetAndSize offsetAndSize;
        int i2 = AnonymousClass1.$SwitchMap$com$mediatek$mdml$InfoType[infoType.ordinal()];
        if (i2 == 2) {
            offsetAndSize = this.infoDat.otaInfo.msgIdOffsetAndSize;
        } else {
            if (i2 != 3) {
                return null;
            }
            offsetAndSize = this.infoDat.msgInfo.msgIdOffsetAndSize;
        }
        Msg msgCommonGetMsg = commonGetMsg(Integer.valueOf(Util.getIntValue(bArr, i, offsetAndSize)), infoType);
        if (msgCommonGetMsg != null) {
            msgCommonGetMsg.buf = bArr;
            msgCommonGetMsg.startPos = i;
        }
        return msgCommonGetMsg;
    }

    private void connectMDMHIDL() {
        try {
            Log.d(TAG, "connectMDMHIDL");
            this.mdmConnection = IMDMonitorService.getService(true);
            Log.d(TAG, "connectMDMHIDL done!");
        } catch (RemoteException e) {
            e.printStackTrace();
            Log.e(TAG, "IMDMonitorService RemoteException ...");
            this.mdmConnection = null;
        } catch (NoSuchElementException e2) {
            e2.printStackTrace();
            Log.e(TAG, "IMDMonitorService NoSuchElementException ...");
            this.mdmConnection = null;
        }
    }

    public static String getIcdJsonPath() {
        return "/vendor/etc/AllICD.json";
    }

    @Deprecated
    public static synchronized PlainDataDecoder getInstance(String str) throws Exception {
        Log.e(TAG, "Old PlainDataDecoder getInstance function, it was phase out. Please use new interface of PlainDataDecoder getInstance.");
        throw new Exception("Old PlainDataDecoder getInstance function, it was phase out. Please use new interface of PlainDataDecoder getInstance.");
    }

    public static synchronized PlainDataDecoder getInstance(String str, Context context) {
        PlainDataDecoder plainDataDecoder;
        String str2 = str != null ? str : "null";
        plainDataDecoder = sPathDecoderMap.get(str2);
        if (plainDataDecoder == null) {
            try {
                plainDataDecoder = new PlainDataDecoder(str, context);
            } catch (Exception e) {
                e.printStackTrace();
            }
            sPathDecoderMap.put(str2, plainDataDecoder);
        }
        return plainDataDecoder;
    }

    private int getLayoutFileDataFromMDMAndSaveToPath(String str) throws Exception {
        connectMDMHIDL();
        if (this.mdmConnection == null) {
            return -1;
        }
        FileOutputStream fileOutputStream = new FileOutputStream(new File(str + "mdm_layout_desc.dat"));
        int i = 0;
        Log.d(TAG, "getModemBinData request buffer is " + (65536 / 1024) + "K");
        do {
            try {
                ArrayList<Byte> modemBinData = this.mdmConnection.getModemBinData(0, i, 65536);
                if (modemBinData.size() == 0) {
                    fileOutputStream.close();
                    Log.d(TAG, "getModemBinData request buffer end");
                    return 0;
                }
                byte[] bArr = new byte[modemBinData.size()];
                for (int i2 = 0; i2 < modemBinData.size(); i2++) {
                    bArr[i2] = modemBinData.get(i2).byteValue();
                }
                fileOutputStream.write(bArr);
                i += 65536;
            } catch (RemoteException e) {
                e.printStackTrace();
                Log.e(TAG, "getModemBinData HIDL call failed with RemoteException exception!");
                fileOutputStream.close();
                return -2;
            }
        } while (i <= 52428800);
        Log.e(TAG, "getModemBinData size out of 50 MB, somthing wrong!");
        fileOutputStream.close();
        return -3;
    }

    private CommonMsgInfo getMsgInfo(InfoType infoType) {
        int i = AnonymousClass1.$SwitchMap$com$mediatek$mdml$InfoType[infoType.ordinal()];
        if (i == 2) {
            return this.infoDat.otaInfo;
        }
        if (i != 3) {
            return null;
        }
        return this.infoDat.msgInfo;
    }

    private boolean readContent(String str) {
        int i = this.verMain;
        if (i > 2 || (i == 1 && this.verSub > 0)) {
            Log.e(TAG, "Version not support! Main =" + this.verMain + ", SubVersion = " + this.verSub);
            return false;
        }
        switch (AnonymousClass1.$SwitchMap$com$mediatek$mdml$InfoType[this.currentBlock.ordinal()]) {
            case 1:
                Log.d(TAG, "Skip line content in un-support section!");
                return false;
            case 2:
                return this.infoDat.otaInfo.readLine(str);
            case 3:
            case 4:
            case 5:
                return this.infoDat.msgInfo.readLine(str);
            case 6:
                return this.infoDat.globalID.readLine(str);
            case 7:
                return this.infoDat.simInfo.readLine(str);
            default:
                Log.e(TAG, "Skip line content in un-know section!");
                return false;
        }
    }

    private boolean readTag(String str) {
        String strTrim = str.trim();
        this.infoDat.msgInfo.setMsgHasPeerBufferHeader(false);
        if (strTrim.equals("OTA_INFO")) {
            this.currentBlock = InfoType.OTA_INFO;
        } else if (strTrim.equals("GLOBAL_ID")) {
            this.currentBlock = InfoType.GLOBAL_ID;
        } else if (strTrim.equals("MSG_INFO")) {
            this.currentBlock = InfoType.MSG_INFO;
        } else if (strTrim.equals("PEER_INFO")) {
            this.currentBlock = InfoType.PEER_INFO;
            this.infoDat.msgInfo.setMsgHasPeerBufferHeader(true);
        } else if (strTrim.equals("PEER_INFO_WITHOUT_HEADER")) {
            this.currentBlock = InfoType.PEER_INFO_WITHOUT_HEADER;
        } else if (this.infoDat.simInfo.readTag(strTrim)) {
            this.currentBlock = InfoType.SIM_INFO;
        } else if (!readVersion(strTrim)) {
            Log.d(TAG, "Un-Support section block name [" + strTrim + "]!");
            this.currentBlock = InfoType.NONE;
        }
        return true;
    }

    private boolean readVersion(String str) {
        int iLastIndexOf = str.lastIndexOf("######");
        if (!str.substring(0, "##### VER".length()).equals("##### VER") || iLastIndexOf <= 0) {
            return false;
        }
        String[] strArrSplit = str.substring("##### VER".length(), iLastIndexOf).trim().split("\\.");
        this.verMain = Integer.parseInt(strArrSplit[0]);
        this.verSub = Integer.parseInt(strArrSplit[1]);
        return true;
    }

    private Msg setBaseMsg2Msg(BaseMsg baseMsg, InfoType infoType) {
        if (baseMsg == null) {
            return null;
        }
        Msg msg = new Msg();
        msg.baseMsg = baseMsg;
        msg.type = infoType;
        int i = AnonymousClass1.$SwitchMap$com$mediatek$mdml$InfoType[infoType.ordinal()];
        if (i == 2) {
            msg.simIdxOffsetAndSize = this.infoDat.otaInfo.simIdxOffsetAndSize;
            msg.peerBufSizeOffsetAndSize = null;
            msg.globalID = this.infoDat.globalID;
            msg.simInfo = this.infoDat.simInfo;
        } else if (i != 3) {
            msg.simIdxOffsetAndSize = null;
            msg.peerBufSizeOffsetAndSize = null;
            msg.globalID = null;
            msg.simInfo = null;
        } else {
            msg.simIdxOffsetAndSize = this.infoDat.msgInfo.simIdxOffsetAndSize;
            msg.peerBufSizeOffsetAndSize = this.infoDat.msgInfo.peerBufSizeOffsetAndSize;
            msg.globalID = null;
            msg.simInfo = this.infoDat.simInfo;
        }
        return msg;
    }

    public String[] globalId_getList() {
        return this.infoDat.globalID.getList();
    }

    public final String globalId_getName(Integer num) {
        return this.infoDat.globalID.getName(num);
    }

    public final Integer globalId_getValue(String str) {
        return this.infoDat.globalID.getValue(str);
    }

    public final Msg msgInfo_getMsg(byte[] bArr, int i) {
        return commonGetMsg(bArr, i, InfoType.MSG_INFO);
    }

    public final Integer msgInfo_getMsgID(String str) {
        return this.infoDat.msgInfo.getMsgID(str);
    }

    public String[] msgInfo_getMsgList() {
        return this.infoDat.msgInfo.getMsgList();
    }

    public final String msgInfo_getMsgName(Integer num) {
        return this.infoDat.msgInfo.getMsgName(num);
    }

    public final Msg otaInfo_getMsg(byte[] bArr, int i) {
        return commonGetMsg(bArr, i, InfoType.OTA_INFO);
    }

    public final Integer otaInfo_getMsgID(String str) {
        return this.infoDat.otaInfo.getMsgID(str);
    }

    public String[] otaInfo_getMsgList() {
        return this.infoDat.otaInfo.getMsgList();
    }

    public final String otaInfo_getMsgName(Integer num) {
        return this.infoDat.otaInfo.getMsgName(num);
    }
}

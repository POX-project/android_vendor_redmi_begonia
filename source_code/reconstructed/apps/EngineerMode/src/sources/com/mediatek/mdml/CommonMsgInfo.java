package com.mediatek.mdml;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes3.dex */
class CommonMsgInfo {
    static final String peerBufHeaderSizeName = "MSG_PEER_HEADER_SIZE";
    private int currentMsgPeerBufferHeaderSize;
    private boolean doesCurrentMsgHavePeerBufferHeader;
    private String msgIdOffsetName;
    private int parserLastID_internal;
    private String parserLastNameID_internal;
    private String parserLastName_internal;
    private String peerBufSizeName;
    private String simIdxOffsetName;
    OffsetAndSize msgIdOffsetAndSize = new OffsetAndSize();
    OffsetAndSize simIdxOffsetAndSize = new OffsetAndSize();
    OffsetAndSize peerBufSizeOffsetAndSize = new OffsetAndSize();
    private HashMap<Integer, BaseMsg> idMsgMap = new HashMap<>();
    private HashMap<String, Integer> nameIdMap = new HashMap<>();
    private final List<String> parserSplitList_1separator_internal = new ArrayList();
    private final List<String> parserSplitList_2separator_internal = new ArrayList();

    /* JADX INFO: renamed from: com.mediatek.mdml.CommonMsgInfo$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$mdml$InfoType;

        static {
            int[] iArr = new int[InfoType.values().length];
            $SwitchMap$com$mediatek$mdml$InfoType = iArr;
            try {
                iArr[InfoType.OTA_INFO.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$InfoType[InfoType.MSG_INFO.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }

    CommonMsgInfo(InfoType infoType) {
        int i = AnonymousClass1.$SwitchMap$com$mediatek$mdml$InfoType[infoType.ordinal()];
        if (i == 1) {
            this.msgIdOffsetName = "OTA_TRACE_ID_OFFSET";
            this.simIdxOffsetName = "OTA_SIM_IDX_OFFSET";
            this.peerBufSizeName = null;
        } else if (i != 2) {
            this.msgIdOffsetName = null;
            this.simIdxOffsetName = null;
            this.peerBufSizeName = null;
        } else {
            this.msgIdOffsetName = "MSG_ID_OFFSET";
            this.simIdxOffsetName = "SIM_IDX_OFFSET";
            this.peerBufSizeName = "MSG_PEERSIZE_OFFSET";
        }
        this.doesCurrentMsgHavePeerBufferHeader = false;
        this.parserLastID_internal = -1;
        this.parserLastNameID_internal = null;
        this.parserLastName_internal = null;
    }

    private List<String> fastSplit_1separator(String str, char c) {
        this.parserSplitList_1separator_internal.clear();
        if (str != null && str.length() > 0) {
            int i = 0;
            int iIndexOf = str.indexOf(c);
            while (iIndexOf >= 0) {
                int i2 = iIndexOf;
                if (str.charAt(i) == ' ') {
                    i++;
                }
                if (str.charAt(iIndexOf - 1) == ' ') {
                    i2--;
                }
                this.parserSplitList_1separator_internal.add(str.substring(i, i2));
                i = iIndexOf + 1;
                iIndexOf = str.indexOf(c, i);
            }
            if (i <= str.length() - 1) {
                if (str.charAt(i) == ' ') {
                    i++;
                }
                if (i <= str.length() - 1) {
                    this.parserSplitList_1separator_internal.add(str.substring(i));
                }
            }
        }
        return this.parserSplitList_1separator_internal;
    }

    private List<String> fastSplit_2separator(String str, char c, char c2) {
        this.parserSplitList_2separator_internal.clear();
        if (str != null && str.length() > 0) {
            int i = 0;
            int iIndexOf = str.indexOf(c);
            int iIndexOf2 = str.indexOf(c2);
            if (iIndexOf > iIndexOf2) {
                iIndexOf = iIndexOf2;
            }
            while (iIndexOf >= 0) {
                this.parserSplitList_2separator_internal.add(str.substring(i, iIndexOf).trim());
                i = iIndexOf + 1;
                iIndexOf = str.indexOf(c, i);
                int iIndexOf3 = str.indexOf(c2, i);
                if (iIndexOf == -1 || (iIndexOf > iIndexOf3 && iIndexOf3 != -1)) {
                    iIndexOf = iIndexOf3;
                }
            }
            if (i < str.length() - 1) {
                this.parserSplitList_2separator_internal.add(str.substring(i).trim());
            }
        }
        return this.parserSplitList_2separator_internal;
    }

    void clear() {
        this.msgIdOffsetAndSize.clear();
        this.simIdxOffsetAndSize.clear();
        this.peerBufSizeOffsetAndSize.clear();
        this.idMsgMap.clear();
        this.nameIdMap.clear();
    }

    BaseMsg getBaseMsg(Integer num) {
        BaseMsg baseMsg = this.idMsgMap.get(num);
        if (baseMsg == null) {
            return null;
        }
        return baseMsg;
    }

    BaseMsg getBaseMsg(String str) {
        Integer msgID = getMsgID(str);
        if (msgID == null) {
            return null;
        }
        return getBaseMsg(msgID);
    }

    public Integer getMsgID(String str) {
        return this.nameIdMap.get(str);
    }

    public String[] getMsgList() {
        Set<String> setKeySet = this.nameIdMap.keySet();
        String[] strArr = (String[]) setKeySet.toArray(new String[setKeySet.size()]);
        Arrays.sort(strArr);
        return strArr;
    }

    public String getMsgName(Integer num) {
        BaseMsg baseMsg = this.idMsgMap.get(num);
        if (baseMsg != null) {
            return baseMsg.msgName;
        }
        return null;
    }

    boolean readLine(String str) {
        int i;
        List<String> listFastSplit_1separator = fastSplit_1separator(str, ',');
        if (listFastSplit_1separator.size() <= 0) {
            return false;
        }
        String str2 = this.msgIdOffsetName;
        if (str2 == null || str2.length() <= 0 || !listFastSplit_1separator.get(0).equals(this.msgIdOffsetName) || listFastSplit_1separator.size() != 3) {
            String str3 = this.simIdxOffsetName;
            if (str3 == null || str3.length() <= 0 || !listFastSplit_1separator.get(0).equals(this.simIdxOffsetName) || listFastSplit_1separator.size() != 3) {
                String str4 = this.peerBufSizeName;
                if (str4 != null && str4.length() > 0 && listFastSplit_1separator.get(0).equals(this.peerBufSizeName) && listFastSplit_1separator.size() == 3) {
                    this.peerBufSizeOffsetAndSize.offset = Integer.parseInt(listFastSplit_1separator.get(1));
                    this.peerBufSizeOffsetAndSize.size = Integer.parseInt(listFastSplit_1separator.get(2));
                } else if (peerBufHeaderSizeName.length() > 0 && listFastSplit_1separator.get(0).equals(peerBufHeaderSizeName) && listFastSplit_1separator.size() == 2) {
                    this.currentMsgPeerBufferHeaderSize = Integer.parseInt(listFastSplit_1separator.get(1));
                } else {
                    if (listFastSplit_1separator.size() < 3 || listFastSplit_1separator.size() > 4) {
                        return false;
                    }
                    if (listFastSplit_1separator.get(0).equals(this.parserLastNameID_internal)) {
                        i = this.parserLastID_internal;
                    } else {
                        List<String> listFastSplit_2separator = fastSplit_2separator(listFastSplit_1separator.get(0), '(', ')');
                        this.parserLastNameID_internal = listFastSplit_1separator.get(0);
                        this.parserLastID_internal = Integer.parseInt(listFastSplit_2separator.get(1));
                        this.parserLastName_internal = listFastSplit_2separator.get(0);
                        i = this.parserLastID_internal;
                    }
                    BaseMsg baseMsg = this.idMsgMap.get(Integer.valueOf(i));
                    if (baseMsg == null) {
                        baseMsg = new BaseMsg();
                        baseMsg.msgName = this.parserLastName_internal;
                        this.nameIdMap.put(baseMsg.msgName, Integer.valueOf(i));
                    }
                    String str5 = listFastSplit_1separator.get(1);
                    OffsetAndSize offsetAndSize = new OffsetAndSize();
                    offsetAndSize.offset = Integer.parseInt(listFastSplit_1separator.get(2));
                    if (listFastSplit_1separator.size() == 3) {
                        offsetAndSize.size = -1;
                    } else {
                        offsetAndSize.size = Integer.parseInt(listFastSplit_1separator.get(3));
                    }
                    baseMsg.fieldMap.put(str5, offsetAndSize);
                    baseMsg.hasPeerBufferHeader = this.doesCurrentMsgHavePeerBufferHeader;
                    baseMsg.peerBufferHeaderSize = this.currentMsgPeerBufferHeaderSize;
                    this.idMsgMap.put(Integer.valueOf(i), baseMsg);
                }
            } else {
                this.simIdxOffsetAndSize.offset = Integer.parseInt(listFastSplit_1separator.get(1));
                this.simIdxOffsetAndSize.size = Integer.parseInt(listFastSplit_1separator.get(2));
            }
        } else {
            this.msgIdOffsetAndSize.offset = Integer.parseInt(listFastSplit_1separator.get(1));
            this.msgIdOffsetAndSize.size = Integer.parseInt(listFastSplit_1separator.get(2));
        }
        return true;
    }

    public void setMsgHasPeerBufferHeader(boolean z) {
        this.doesCurrentMsgHavePeerBufferHeader = z;
    }
}

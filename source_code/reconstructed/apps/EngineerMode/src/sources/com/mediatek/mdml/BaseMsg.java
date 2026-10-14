package com.mediatek.mdml;

import java.util.HashMap;

/* JADX INFO: compiled from: CommonMsgInfo.java */
/* JADX INFO: loaded from: classes3.dex */
class BaseMsg {
    HashMap<String, OffsetAndSize> fieldMap = new HashMap<>();
    boolean hasPeerBufferHeader;
    String msgName;
    int peerBufferHeaderSize;

    BaseMsg() {
    }
}

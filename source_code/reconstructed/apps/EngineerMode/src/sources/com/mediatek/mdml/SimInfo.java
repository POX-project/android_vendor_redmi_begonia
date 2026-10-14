package com.mediatek.mdml;

import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
class SimInfo {
    private int currentSimIdx;
    private HashMap<Integer, Integer> simIdxMap = new HashMap<>();

    SimInfo() {
    }

    void clear() {
        this.simIdxMap.clear();
        this.currentSimIdx = -1;
    }

    Integer getSimIdx(Integer num) {
        return this.simIdxMap.get(num);
    }

    boolean readLine(String str) {
        this.simIdxMap.put(Integer.valueOf(Integer.parseInt(str.trim())), Integer.valueOf(this.currentSimIdx));
        return true;
    }

    boolean readTag(String str) {
        int iLastIndexOf = str.lastIndexOf("_INFO");
        if (!str.substring(0, "SIM".length()).equals("SIM") || iLastIndexOf <= 0) {
            this.currentSimIdx = -1;
            return false;
        }
        this.currentSimIdx = Integer.parseInt(str.substring("SIM".length(), iLastIndexOf));
        return true;
    }
}

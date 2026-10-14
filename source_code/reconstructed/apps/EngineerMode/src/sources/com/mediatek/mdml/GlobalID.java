package com.mediatek.mdml;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Set;

/* JADX INFO: loaded from: classes3.dex */
class GlobalID {
    private HashMap<Integer, String> idNameMap = new HashMap<>();
    private HashMap<String, Integer> nameIdMap = new HashMap<>();

    GlobalID() {
    }

    void clear() {
        this.idNameMap.clear();
        this.nameIdMap.clear();
    }

    public String[] getList() {
        Set<String> setKeySet = this.nameIdMap.keySet();
        String[] strArr = (String[]) setKeySet.toArray(new String[setKeySet.size()]);
        Arrays.sort(strArr);
        return strArr;
    }

    String getName(Integer num) {
        return this.idNameMap.get(num);
    }

    Integer getValue(String str) {
        return this.nameIdMap.get(str);
    }

    boolean readLine(String str) {
        String[] strArrSplit = str.split("[\\(\\)\\s]+");
        if (strArrSplit.length != 2) {
            return false;
        }
        for (int i = 0; i < strArrSplit.length; i++) {
            strArrSplit[i] = strArrSplit[i].trim();
        }
        String str2 = strArrSplit[0];
        int i2 = Integer.parseInt(strArrSplit[1]);
        this.idNameMap.put(Integer.valueOf(i2), str2);
        this.nameIdMap.put(str2, Integer.valueOf(i2));
        return true;
    }
}

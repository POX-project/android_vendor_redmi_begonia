package com.mediatek.mdml;

/* JADX INFO: loaded from: classes3.dex */
public enum TRAP_TYPE {
    TRAP_TYPE_UNDEFINED,
    TRAP_TYPE_DISCARDINFO,
    TRAP_TYPE_OTA,
    TRAP_TYPE_EM,
    TRAP_TYPE_PHASEOUT_1,
    TRAP_TYPE_PSTIME,
    TRAP_TYPE_PHASEOUT_2,
    TRAP_TYPE_ICD_RECORD,
    TRAP_TYPE_ICD_EVENT,
    TRAP_TYPE_SIZE;

    private static final TrapMap[] trapTable = {new TrapMap(TRAP_TYPE_OTA, "OTA"), new TrapMap(TRAP_TYPE_EM, "EM"), new TrapMap(TRAP_TYPE_PHASEOUT_1, "PHASEOUT_1"), new TrapMap(TRAP_TYPE_PSTIME, "PSTIME"), new TrapMap(TRAP_TYPE_PHASEOUT_2, "PHASEOUT_2"), new TrapMap(TRAP_TYPE_ICD_RECORD, "ICD_RECORD"), new TrapMap(TRAP_TYPE_ICD_EVENT, "ICD_EVENT")};

    private static class TrapMap {
        String m_szType;
        TRAP_TYPE m_type;

        TrapMap(TRAP_TYPE trap_type, String str) {
            this.m_type = trap_type;
            this.m_szType = str;
        }
    }

    public static String ToTrapStr(TRAP_TYPE trap_type) {
        int i = 0;
        while (true) {
            TrapMap[] trapMapArr = trapTable;
            if (i >= trapMapArr.length) {
                return null;
            }
            if (trap_type.equals(trapMapArr[i].m_type)) {
                return trapTable[i].m_szType;
            }
            i++;
        }
    }

    public int GetValue() {
        return ordinal();
    }
}

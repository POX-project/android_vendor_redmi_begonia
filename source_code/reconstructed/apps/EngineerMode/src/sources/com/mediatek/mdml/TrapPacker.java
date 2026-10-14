package com.mediatek.mdml;

import android.util.Log;

/* JADX INFO: loaded from: classes3.dex */
class TrapPacker {
    private static final String TAG = "MDML/TrapPacker";
    private int[] m_discardCount;
    private boolean m_isInitialized;
    private byte[] m_rawData;
    private int m_rawLen;
    private int m_trapDataOffset;
    private int m_trapLen;
    private TRAP_TYPE m_trapType;

    /* JADX INFO: renamed from: com.mediatek.mdml.TrapPacker$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$mdml$TRAP_TYPE;

        static {
            int[] iArr = new int[TRAP_TYPE.values().length];
            $SwitchMap$com$mediatek$mdml$TRAP_TYPE = iArr;
            try {
                iArr[TRAP_TYPE.TRAP_TYPE_OTA.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_EM.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_PHASEOUT_1.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_PSTIME.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_ICD_RECORD.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_ICD_EVENT.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_DISCARDINFO.ordinal()] = 7;
            } catch (NoSuchFieldError e7) {
            }
        }
    }

    public TrapPacker(TRAP_TYPE trap_type, byte[] bArr, int i) {
        this.m_isInitialized = false;
        this.m_rawData = null;
        this.m_rawLen = 0;
        this.m_trapDataOffset = 0;
        this.m_trapLen = 0;
        this.m_trapType = TRAP_TYPE.TRAP_TYPE_UNDEFINED;
        this.m_discardCount = new int[TRAP_TYPE.TRAP_TYPE_SIZE.ordinal()];
        int i2 = 0;
        while (true) {
            int[] iArr = this.m_discardCount;
            if (i2 >= iArr.length) {
                break;
            }
            iArr[i2] = 0;
            i2++;
        }
        if (bArr == null || i == 0 || i > 65536) {
            return;
        }
        switch (AnonymousClass1.$SwitchMap$com$mediatek$mdml$TRAP_TYPE[trap_type.ordinal()]) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                this.m_trapType = trap_type;
                this.m_trapLen = i;
                byte[] bArr2 = new byte[(MonitorDefs.MAX_RAWDATA_LEN - 65536) + i];
                this.m_rawData = bArr2;
                MonitorUtils.SetIntToByteArray(bArr2, 0, trap_type.ordinal(), 1);
                int i3 = 0 + 1;
                MonitorUtils.SetIntToByteArray(this.m_rawData, i3, i, 4);
                int i4 = i3 + 4;
                this.m_trapDataOffset = i4;
                System.arraycopy(bArr, 0, this.m_rawData, i4, i);
                this.m_rawLen = i4 + i;
                Log.d(TAG, "After TrapPacker::TrapPacker: type: [" + trap_type + "], len: [" + i + "]");
                this.m_isInitialized = true;
                break;
            default:
                Log.e(TAG, "Invalid trap type: [" + trap_type.ordinal() + "]");
                break;
        }
    }

    public TrapPacker(byte[] bArr, int i) {
        this.m_isInitialized = false;
        this.m_rawData = null;
        this.m_rawLen = 0;
        this.m_trapDataOffset = 0;
        this.m_trapLen = 0;
        this.m_trapType = TRAP_TYPE.TRAP_TYPE_UNDEFINED;
        this.m_discardCount = new int[TRAP_TYPE.TRAP_TYPE_SIZE.ordinal()];
        int i2 = 0;
        while (true) {
            int[] iArr = this.m_discardCount;
            if (i2 >= iArr.length) {
                break;
            }
            iArr[i2] = 0;
            i2++;
        }
        if (bArr == null || i == 0 || i > MonitorDefs.MAX_RAWDATA_LEN) {
            Log.e(TAG, "Bad parameters. rawData is null or raw len = [" + i + "]");
            return;
        }
        byte[] bArr2 = new byte[i];
        this.m_rawData = bArr2;
        System.arraycopy(bArr, 0, bArr2, 0, i);
        this.m_rawLen = i;
        if (Parse()) {
            this.m_isInitialized = true;
        } else {
            Log.e(TAG, "Parse rawData failed.");
        }
    }

    private boolean Parse() {
        int i = 0;
        int i2 = this.m_rawLen;
        while (i < i2) {
            int iByteArrayToInt = MonitorUtils.ByteArrayToInt(this.m_rawData, i, 1);
            if (iByteArrayToInt < 0 || iByteArrayToInt >= TRAP_TYPE.TRAP_TYPE_SIZE.ordinal()) {
                Log.e(TAG, "Undefined type: [" + iByteArrayToInt + "]");
                return false;
            }
            int i3 = i + 1;
            switch (AnonymousClass1.$SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.values()[iByteArrayToInt].ordinal()]) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    this.m_trapType = TRAP_TYPE.values()[iByteArrayToInt];
                    this.m_trapLen = MonitorUtils.ByteArrayToInt(this.m_rawData, i3, 4);
                    int i4 = i3 + 4;
                    Log.d(TAG, "Trap parsed: type: [" + this.m_trapType.ordinal() + "], len: [" + this.m_trapLen + "]");
                    this.m_trapDataOffset = i4;
                    i = i4 + this.m_trapLen;
                    break;
                case 7:
                    int iByteArrayToInt2 = MonitorUtils.ByteArrayToInt(this.m_rawData, i3, 4);
                    i = i3 + 4;
                    for (int i5 = 0; i5 < iByteArrayToInt2; i5++) {
                        int iByteArrayToInt3 = MonitorUtils.ByteArrayToInt(this.m_rawData, i, 1);
                        int i6 = i + 1;
                        if (iByteArrayToInt3 < TRAP_TYPE.TRAP_TYPE_SIZE.ordinal()) {
                            this.m_discardCount[iByteArrayToInt3] = MonitorUtils.ByteArrayToInt(this.m_rawData, i6, 4);
                        } else {
                            Log.e(TAG, "Invalid discard info type: [" + iByteArrayToInt3 + "]");
                        }
                        i = i6 + 4;
                    }
                    Log.d(TAG, "Parse discard info done! count = [" + iByteArrayToInt2 + "]");
                    break;
                default:
                    Log.e(TAG, "Undefined type: [" + MonitorUtils.ByteArrayToInt(this.m_rawData, i3, 1) + "]");
                    return false;
            }
        }
        return true;
    }

    public int GetDiscardInfo(TRAP_TYPE trap_type) {
        if (trap_type.ordinal() < 0 || trap_type.ordinal() >= TRAP_TYPE.TRAP_TYPE_SIZE.ordinal()) {
            return 0;
        }
        return this.m_discardCount[trap_type.ordinal()];
    }

    public byte[] GetRawData() {
        return this.m_rawData;
    }

    public int GetRawLen() {
        if (this.m_isInitialized) {
            return this.m_rawLen;
        }
        return 0;
    }

    public int GetTrapDataOffset() {
        if (this.m_isInitialized) {
            return this.m_trapDataOffset;
        }
        return -1;
    }

    public int GetTrapLen() {
        if (this.m_isInitialized) {
            return this.m_trapLen;
        }
        return 0;
    }

    public TRAP_TYPE GetTrapType() {
        return this.m_isInitialized ? this.m_trapType : TRAP_TYPE.TRAP_TYPE_UNDEFINED;
    }

    public boolean IsInitialized() {
        return this.m_isInitialized;
    }
}

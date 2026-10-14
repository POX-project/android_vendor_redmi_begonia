package com.mediatek.engineermode.mnldinterface;

import com.mediatek.socket.base.SocketUtils;

/* JADX INFO: loaded from: classes.dex */
public enum DebugReqStatusCategory implements SocketUtils.Codable {
    stopDebug,
    startDebug,
    end;

    public static final DebugReqStatusCategory _instance = stopDebug;

    /* JADX INFO: renamed from: com.mediatek.engineermode.mnldinterface.DebugReqStatusCategory$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$mnldinterface$DebugReqStatusCategory;

        static {
            int[] iArr = new int[DebugReqStatusCategory.values().length];
            $SwitchMap$com$mediatek$engineermode$mnldinterface$DebugReqStatusCategory = iArr;
            try {
                iArr[DebugReqStatusCategory.stopDebug.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$mnldinterface$DebugReqStatusCategory[DebugReqStatusCategory.startDebug.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$mnldinterface$DebugReqStatusCategory[DebugReqStatusCategory.end.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    @Override // com.mediatek.socket.base.SocketUtils.Codable
    public DebugReqStatusCategory decode(SocketUtils.BaseBuffer baseBuffer) {
        int i = baseBuffer.getInt();
        if (i == 0) {
            return stopDebug;
        }
        if (i == 1) {
            return startDebug;
        }
        if (i != Integer.MAX_VALUE) {
            return null;
        }
        return end;
    }

    @Override // com.mediatek.socket.base.SocketUtils.Codable
    public void encode(SocketUtils.BaseBuffer baseBuffer) {
        int i = AnonymousClass1.$SwitchMap$com$mediatek$engineermode$mnldinterface$DebugReqStatusCategory[ordinal()];
        if (i == 1) {
            baseBuffer.putInt(0);
        } else if (i == 2) {
            baseBuffer.putInt(1);
        } else {
            if (i != 3) {
                return;
            }
            baseBuffer.putInt(Integer.MAX_VALUE);
        }
    }

    @Override // com.mediatek.socket.base.SocketUtils.Codable
    public DebugReqStatusCategory[] getArray(SocketUtils.Codable[] codableArr) {
        DebugReqStatusCategory[] debugReqStatusCategoryArr = new DebugReqStatusCategory[codableArr.length];
        for (int i = 0; i < codableArr.length; i++) {
            debugReqStatusCategoryArr[i] = (DebugReqStatusCategory) codableArr[i];
        }
        return debugReqStatusCategoryArr;
    }
}

package com.mediatek.mdml;

import android.content.Context;
import android.util.Log;

/* JADX INFO: loaded from: classes3.dex */
public class MonitorCmdProxy implements CommandInterface {
    private static final String TAG = "MDML/MonitorCmdProxy";
    private JsonCmdEncoder mJsonCmdEncoder;

    public MonitorCmdProxy(Context context) {
        this("com.mediatek.mdmonitor.command", context);
    }

    public MonitorCmdProxy(String str, Context context) {
        Log.d(TAG, "MonitorCmdProxy Constructor start ");
        this.mJsonCmdEncoder = new JsonCmdEncoder(new HIDLMCPTransmitter(str), context);
        Log.d(TAG, "MonitorCmdProxy Constructor end");
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onCloseSession(long j) {
        return this.mJsonCmdEncoder.closeSession(j);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public long onCreateSession() {
        return this.mJsonCmdEncoder.createSession();
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onDisableTrap(long j) {
        return this.mJsonCmdEncoder.disableTrap(j);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onEnableTrap(long j) {
        return this.mJsonCmdEncoder.enableTrap(j);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onSetTrapReceiver(long j, String str) {
        return this.mJsonCmdEncoder.setTrapReceiver(j, str);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onSubscribeMultiTrap(long j, TRAP_TYPE trap_type, long[] jArr) {
        return this.mJsonCmdEncoder.subscribeMultiTrap(j, trap_type, jArr);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onSubscribeTrap(long j, TRAP_TYPE trap_type, long j2) {
        return this.mJsonCmdEncoder.subscribeTrap(j, trap_type, j2);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onUnsubscribeMultiTrap(long j, TRAP_TYPE trap_type, long[] jArr) {
        return this.mJsonCmdEncoder.unsubscribeMultiTrap(j, trap_type, jArr);
    }

    @Override // com.mediatek.mdml.CommandInterface
    public MONITOR_CMD_RESP onUnsubscribeTrap(long j, TRAP_TYPE trap_type, long j2) {
        return this.mJsonCmdEncoder.unsubscribeTrap(j, trap_type, j2);
    }
}

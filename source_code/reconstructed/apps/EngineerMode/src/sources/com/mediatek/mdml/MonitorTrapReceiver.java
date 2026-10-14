package com.mediatek.mdml;

import android.os.RemoteException;
import android.os.SystemProperties;
import android.util.Log;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.mcfconfig.FileUtils;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.NoSuchElementException;
import vendor.mediatek.hardware.mdmonitor.V1_0.IMDMonitorService;

/* JADX INFO: loaded from: classes3.dex */
public class MonitorTrapReceiver implements PayloadHandlerInterface {
    private static final String TAG = "MDML/MonitorTrapReceiver";
    private PlainDataDecoder m_decoder;
    private MDMonitorClientCallback m_hidlCallback;
    private MCPReceiver m_mcpReceiver;
    private SocketListener m_socketListener;
    private TrapHandlerInterface m_trapHandler;
    private long psTimeCounter;
    private long timeInMillisecond;

    /* JADX INFO: renamed from: com.mediatek.mdml.MonitorTrapReceiver$1, reason: invalid class name */
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
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_ICD_RECORD.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_ICD_EVENT.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_DISCARDINFO.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
        }
    }

    public MonitorTrapReceiver(long j, String str) {
        this(String.valueOf(j) + str);
    }

    public MonitorTrapReceiver(String str) {
        this.timeInMillisecond = 0L;
        this.psTimeCounter = 0L;
        this.m_trapHandler = null;
        MCPReceiver mCPReceiver = new MCPReceiver();
        this.m_mcpReceiver = mCPReceiver;
        mCPReceiver.setPayloadHandler(this);
        MDMonitorClientCallback mDMonitorClientCallback = new MDMonitorClientCallback();
        this.m_hidlCallback = mDMonitorClientCallback;
        mDMonitorClientCallback.SetMCPHandler(this.m_mcpReceiver);
        try {
            IMDMonitorService.getService(true).registerTrapCallback(str, this.m_hidlCallback);
        } catch (RemoteException e) {
            e.printStackTrace();
            Log.e(TAG, "IMDMonitorService RemoteException ...");
        } catch (NoSuchElementException e2) {
            e2.printStackTrace();
            Log.e(TAG, "IMDMonitorService NoSuchElementException ...");
        }
        try {
            this.m_decoder = PlainDataDecoder.getInstance(null);
        } catch (Exception e3) {
            e3.printStackTrace();
        }
        Log.d(TAG, "MonitorTrapReceiver Constructor done! Server name is " + str);
    }

    private void printDebugLog(long j, long j2, TrapPacker trapPacker) {
        int i = AnonymousClass1.$SwitchMap$com$mediatek$mdml$TRAP_TYPE[trapPacker.GetTrapType().ordinal()];
        if (i == 1) {
            PlainDataDecoder plainDataDecoder = this.m_decoder;
            if (plainDataDecoder == null) {
                return;
            }
            Msg msgOtaInfo_getMsg = plainDataDecoder.otaInfo_getMsg(trapPacker.GetRawData(), trapPacker.GetTrapDataOffset());
            if (msgOtaInfo_getMsg == null) {
                Log.d(TAG, "printDebuglog OTA type null");
                return;
            }
            String msgName = msgOtaInfo_getMsg.getMsgName();
            String otaMsgGlobalID = msgOtaInfo_getMsg.getOtaMsgGlobalID(msgOtaInfo_getMsg.getOtaMsgFieldValue());
            Log.d(TAG, "PSTIME: counter/millisecond = " + j + FileUtils.SEPARATOR + j2 + ", SIM index = " + msgOtaInfo_getMsg.getSimIdx() + ", Trace id = " + msgName + "(" + this.m_decoder.otaInfo_getMsgID(msgName) + "), Global id = " + otaMsgGlobalID + "(" + this.m_decoder.globalId_getValue(otaMsgGlobalID) + "), Trap len = " + trapPacker.GetTrapLen());
            return;
        }
        if (i != 2) {
            if (i == 3 || i == 4) {
                DecodeICDPacketHeader(trapPacker);
                return;
            } else {
                if (i != 5) {
                    return;
                }
                Log.d(TAG, "Discard info");
                return;
            }
        }
        PlainDataDecoder plainDataDecoder2 = this.m_decoder;
        if (plainDataDecoder2 == null) {
            return;
        }
        Msg msgMsgInfo_getMsg = plainDataDecoder2.msgInfo_getMsg(trapPacker.GetRawData(), trapPacker.GetTrapDataOffset());
        if (msgMsgInfo_getMsg == null) {
            Log.d(TAG, "printdebuglog EM type null");
            return;
        }
        String msgName2 = msgMsgInfo_getMsg.getMsgName();
        Log.d(TAG, "PSTIME: counter/millisecond = " + j + FileUtils.SEPARATOR + j2 + ", SIM index = " + msgMsgInfo_getMsg.getSimIdx() + ", EM id = " + msgName2 + "(" + this.m_decoder.msgInfo_getMsgID(msgName2) + "), Trap len = " + trapPacker.GetTrapLen());
    }

    public void DecodeICDPacketHeader(TrapPacker trapPacker) {
        byte[] bArrGetRawData = trapPacker.GetRawData();
        int iGetTrapDataOffset = trapPacker.GetTrapDataOffset();
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(Arrays.copyOfRange(bArrGetRawData, iGetTrapDataOffset, trapPacker.GetTrapLen() + iGetTrapDataOffset));
        int i = byteBufferWrap.get(0) & 15;
        int i2 = (byteBufferWrap.get(0) & 240) >> 4;
        int i3 = 0;
        if (i == 0) {
            if (i2 == 1) {
                int i4 = (byteBufferWrap.get(1) & 255) | ((byteBufferWrap.get(2) & 255) << 8);
                int i5 = byteBufferWrap.get(3) & 15;
                int i6 = (byteBufferWrap.get(3) & 240) >> 4;
                i3 = (byteBufferWrap.get(4) & 255) | ((byteBufferWrap.get(5) & 255) << 8);
            } else if (i2 == 2) {
                int i7 = (byteBufferWrap.get(1) & 255) | ((byteBufferWrap.get(2) & 255) << 8) | ((byteBufferWrap.get(2) & 255) << 16);
                int i8 = byteBufferWrap.get(4) & 15;
                int i9 = (byteBufferWrap.get(4) & 240) >> 4;
                i3 = (byteBufferWrap.get(6) & 255) | ((byteBufferWrap.get(7) & 255) << 8);
            }
            Log.d(TAG, "Get ICD event: version = " + i2 + "   msg_id = 0x" + Long.toHexString(i3).toUpperCase());
            return;
        }
        if (i != 1) {
            Log.e(TAG, "default type = " + Integer.toHexString(i));
            return;
        }
        int i10 = (byteBufferWrap.get(2) & 65280) | (byteBufferWrap.get(1) & 255) | (byteBufferWrap.get(3) & 16711680);
        int i11 = byteBufferWrap.get(4) & 15;
        int i12 = (byteBufferWrap.get(4) & 240) >> 4;
        Log.d(TAG, "Get ICD record: version = " + i2 + "  msg_id = 0x" + Long.toHexString((byteBufferWrap.get(6) & 255) | ((byteBufferWrap.get(7) & 255) << 8)).toUpperCase());
    }

    @Override // com.mediatek.mdml.PayloadHandlerInterface
    public boolean ProcessPayload(MCPInfo mCPInfo, MCPInfo mCPInfo2) {
        TrapPacker trapPacker = new TrapPacker(mCPInfo.GetData(), mCPInfo.GetLen());
        if (trapPacker.GetTrapType() != TRAP_TYPE.TRAP_TYPE_PSTIME) {
            if (this.m_trapHandler != null) {
                printDebugLog(this.psTimeCounter, this.timeInMillisecond, trapPacker);
                this.m_trapHandler.ProcessTrap(this.timeInMillisecond, trapPacker.GetTrapType(), trapPacker.GetTrapLen(), trapPacker.GetRawData(), trapPacker.GetTrapDataOffset());
            }
            return true;
        }
        this.psTimeCounter = MonitorUtils.ByteArrayToLong(trapPacker.GetRawData(), trapPacker.GetTrapDataOffset() + 2, 4);
        if (SystemProperties.getInt(FeatureSupport.FK_MD_WM_SUPPORT, 0) == 1) {
            this.timeInMillisecond = (long) ((this.psTimeCounter * 64.0d) / 1000.0d);
        } else {
            this.timeInMillisecond = (long) (this.psTimeCounter * 5.0d);
        }
        return true;
    }

    public void SetTrapHandler(TrapHandlerInterface trapHandlerInterface) {
        this.m_trapHandler = trapHandlerInterface;
    }

    protected void finalize() {
        Log.d(TAG, "MonitorTrapReceiver destructor done!");
        this.m_socketListener = null;
        this.m_mcpReceiver = null;
    }
}

.class public Lcom/mediatek/mdml/MonitorTrapReceiver;
.super Ljava/lang/Object;
.source "MonitorTrapReceiver.java"

# interfaces
.implements Lcom/mediatek/mdml/PayloadHandlerInterface;


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/MonitorTrapReceiver"


# instance fields
.field private m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;

.field private m_hidlCallback:Lcom/mediatek/mdml/MDMonitorClientCallback;

.field private m_mcpReceiver:Lcom/mediatek/mdml/MCPReceiver;

.field private m_socketListener:Lcom/mediatek/mdml/SocketListener;

.field private m_trapHandler:Lcom/mediatek/mdml/TrapHandlerInterface;

.field private psTimeCounter:J

.field private timeInMillisecond:J


# direct methods
.method public constructor <init>(JLjava/lang/String;)V
    .locals 2
    .param p1, "sessionId"    # J
    .param p3, "szServerName"    # Ljava/lang/String;

    .line 221
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/mdml/MonitorTrapReceiver;-><init>(Ljava/lang/String;)V

    .line 222
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 4
    .param p1, "szServerName"    # Ljava/lang/String;

    .line 181
    const-string v0, "MDML/MonitorTrapReceiver"

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->timeInMillisecond:J

    .line 25
    iput-wide v1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->psTimeCounter:J

    .line 183
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_trapHandler:Lcom/mediatek/mdml/TrapHandlerInterface;

    .line 184
    new-instance v2, Lcom/mediatek/mdml/MCPReceiver;

    invoke-direct {v2}, Lcom/mediatek/mdml/MCPReceiver;-><init>()V

    iput-object v2, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_mcpReceiver:Lcom/mediatek/mdml/MCPReceiver;

    .line 185
    invoke-virtual {v2, p0}, Lcom/mediatek/mdml/MCPReceiver;->setPayloadHandler(Lcom/mediatek/mdml/PayloadHandlerInterface;)V

    .line 189
    new-instance v2, Lcom/mediatek/mdml/MDMonitorClientCallback;

    invoke-direct {v2}, Lcom/mediatek/mdml/MDMonitorClientCallback;-><init>()V

    iput-object v2, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_hidlCallback:Lcom/mediatek/mdml/MDMonitorClientCallback;

    .line 190
    iget-object v3, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_mcpReceiver:Lcom/mediatek/mdml/MCPReceiver;

    invoke-virtual {v2, v3}, Lcom/mediatek/mdml/MDMonitorClientCallback;->SetMCPHandler(Lcom/mediatek/mdml/HIDLHandlerInterface;)V

    .line 194
    const/4 v2, 0x1

    :try_start_0
    invoke-static {v2}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->getService(Z)Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    move-result-object v2

    .line 195
    .local v2, "connection":Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;
    iget-object v3, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_hidlCallback:Lcom/mediatek/mdml/MDMonitorClientCallback;

    invoke-interface {v2, p1, v3}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->registerTrapCallback(Ljava/lang/String;Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/util/NoSuchElementException; {:try_start_0 .. :try_end_0} :catch_0

    .end local v2    # "connection":Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;
    goto :goto_0

    .line 199
    :catch_0
    move-exception v2

    .line 200
    .local v2, "e":Ljava/util/NoSuchElementException;
    invoke-virtual {v2}, Ljava/util/NoSuchElementException;->printStackTrace()V

    .line 201
    const-string v3, "IMDMonitorService NoSuchElementException ..."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 196
    .end local v2    # "e":Ljava/util/NoSuchElementException;
    :catch_1
    move-exception v2

    .line 197
    .local v2, "e":Landroid/os/RemoteException;
    invoke-virtual {v2}, Landroid/os/RemoteException;->printStackTrace()V

    .line 198
    const-string v3, "IMDMonitorService RemoteException ..."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 202
    .end local v2    # "e":Landroid/os/RemoteException;
    :goto_0
    nop

    .line 206
    :goto_1
    :try_start_1
    invoke-static {v1}, Lcom/mediatek/mdml/PlainDataDecoder;->getInstance(Ljava/lang/String;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    .line 209
    goto :goto_2

    .line 207
    :catch_2
    move-exception v1

    .line 208
    .local v1, "ex":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 210
    .end local v1    # "ex":Ljava/lang/Exception;
    :goto_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MonitorTrapReceiver Constructor done! Server name is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 211
    return-void
.end method

.method private printDebugLog(JJLcom/mediatek/mdml/TrapPacker;)V
    .locals 10
    .param p1, "psTimeCount"    # J
    .param p3, "psTime"    # J
    .param p5, "trapPacker"    # Lcom/mediatek/mdml/TrapPacker;

    .line 120
    const/4 v0, 0x0

    .line 121
    .local v0, "msg":Lcom/mediatek/mdml/Msg;
    sget-object v1, Lcom/mediatek/mdml/MonitorTrapReceiver$1;->$SwitchMap$com$mediatek$mdml$TRAP_TYPE:[I

    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapType()Lcom/mediatek/mdml/TRAP_TYPE;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v2

    aget v1, v1, v2

    const/4 v2, 0x1

    const-string v3, "), Trap len = "

    const-string v4, ", SIM index = "

    const-string v5, "/"

    const-string v6, "PSTIME: counter/millisecond = "

    const-string v7, "("

    const-string v8, "MDML/MonitorTrapReceiver"

    if-eq v1, v2, :cond_5

    const/4 v2, 0x2

    if-eq v1, v2, :cond_2

    const/4 v2, 0x3

    if-eq v1, v2, :cond_1

    const/4 v2, 0x4

    if-eq v1, v2, :cond_1

    const/4 v2, 0x5

    if-eq v1, v2, :cond_0

    goto/16 :goto_0

    .line 169
    :cond_0
    const-string v1, "Discard info"

    invoke-static {v8, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 170
    goto/16 :goto_0

    .line 166
    :cond_1
    invoke-virtual {p0, p5}, Lcom/mediatek/mdml/MonitorTrapReceiver;->DecodeICDPacketHeader(Lcom/mediatek/mdml/TrapPacker;)V

    .line 167
    goto/16 :goto_0

    .line 145
    :cond_2
    iget-object v1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;

    if-nez v1, :cond_3

    .line 147
    goto/16 :goto_0

    .line 149
    :cond_3
    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetRawData()[B

    move-result-object v2

    .line 150
    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapDataOffset()I

    move-result v9

    .line 149
    invoke-virtual {v1, v2, v9}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;

    move-result-object v0

    .line 151
    if-nez v0, :cond_4

    .line 152
    const-string v1, "printdebuglog EM type null"

    invoke-static {v8, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 153
    goto/16 :goto_0

    .line 155
    :cond_4
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getMsgName()Ljava/lang/String;

    move-result-object v1

    .line 156
    .local v1, "EmMsgName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3, p4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 158
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", EM id = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;

    .line 160
    invoke-virtual {v4, v1}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 161
    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapLen()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 156
    invoke-static {v8, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 162
    goto/16 :goto_0

    .line 123
    .end local v1    # "EmMsgName":Ljava/lang/String;
    :cond_5
    iget-object v1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;

    if-nez v1, :cond_6

    .line 125
    goto :goto_0

    .line 127
    :cond_6
    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetRawData()[B

    move-result-object v2

    .line 128
    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapDataOffset()I

    move-result v9

    .line 127
    invoke-virtual {v1, v2, v9}, Lcom/mediatek/mdml/PlainDataDecoder;->otaInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;

    move-result-object v0

    .line 129
    if-nez v0, :cond_7

    .line 130
    const-string v1, "printDebuglog OTA type null"

    invoke-static {v8, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 131
    goto :goto_0

    .line 133
    :cond_7
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getMsgName()Ljava/lang/String;

    move-result-object v1

    .line 134
    .local v1, "traceIdName":Ljava/lang/String;
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getOtaMsgFieldValue()[B

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/mdml/Msg;->getOtaMsgGlobalID([B)Ljava/lang/String;

    move-result-object v2

    .line 135
    .local v2, "globalIdName":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p3, p4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 137
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v4

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", Trace id = "

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;

    .line 139
    invoke-virtual {v4, v1}, Lcom/mediatek/mdml/PlainDataDecoder;->otaInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, "), Global id = "

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_decoder:Lcom/mediatek/mdml/PlainDataDecoder;

    .line 141
    invoke-virtual {v4, v2}, Lcom/mediatek/mdml/PlainDataDecoder;->globalId_getValue(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 142
    invoke-virtual {p5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapLen()I

    move-result v3

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 135
    invoke-static {v8, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 143
    nop

    .line 174
    .end local v1    # "traceIdName":Ljava/lang/String;
    .end local v2    # "globalIdName":Ljava/lang/String;
    :goto_0
    return-void
.end method


# virtual methods
.method public DecodeICDPacketHeader(Lcom/mediatek/mdml/TrapPacker;)V
    .locals 17
    .param p1, "trapPacker"    # Lcom/mediatek/mdml/TrapPacker;

    .line 69
    invoke-virtual/range {p1 .. p1}, Lcom/mediatek/mdml/TrapPacker;->GetRawData()[B

    move-result-object v0

    .line 70
    .local v0, "data":[B
    invoke-virtual/range {p1 .. p1}, Lcom/mediatek/mdml/TrapPacker;->GetTrapDataOffset()I

    move-result v1

    .line 71
    .local v1, "offset":I
    invoke-virtual/range {p1 .. p1}, Lcom/mediatek/mdml/TrapPacker;->GetTrapLen()I

    move-result v2

    .line 72
    .local v2, "len":I
    add-int v3, v2, v1

    invoke-static {v0, v1, v3}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v3

    .line 73
    .local v3, "trap_data":[B
    invoke-static {v3}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v4

    .line 75
    .local v4, "icdPacket":Ljava/nio/ByteBuffer;
    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v6

    and-int/lit8 v6, v6, 0xf

    .line 76
    .local v6, "type":I
    invoke-virtual {v4, v5}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v5

    and-int/lit16 v5, v5, 0xf0

    const/4 v7, 0x4

    shr-int/2addr v5, v7

    .line 77
    .local v5, "version":I
    const/4 v8, 0x0

    .line 78
    .local v8, "total_size":I
    const/4 v9, 0x0

    .line 79
    .local v9, "timestamp_type":I
    const/4 v10, 0x0

    .line 80
    .local v10, "protocol_id":I
    const/4 v11, 0x0

    .line 81
    .local v11, "msg_id":I
    const-string v14, "MDML/MonitorTrapReceiver"

    const/4 v15, 0x3

    const/4 v12, 0x2

    const/4 v13, 0x1

    if-eqz v6, :cond_1

    if-eq v6, v13, :cond_0

    .line 112
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "default type = "

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v6}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v14, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_1

    .line 102
    :cond_0
    invoke-virtual {v4, v13}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    and-int/lit16 v13, v13, 0xff

    .line 103
    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    const v16, 0xff00

    and-int v12, v12, v16

    or-int/2addr v12, v13

    .line 104
    invoke-virtual {v4, v15}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    const/high16 v15, 0xff0000

    and-int/2addr v13, v15

    or-int v8, v12, v13

    .line 105
    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit8 v9, v12, 0xf

    .line 106
    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xf0

    shr-int/lit8 v10, v12, 0x4

    .line 107
    const/4 v7, 0x6

    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v7

    and-int/lit16 v7, v7, 0xff

    const/4 v12, 0x7

    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xff

    shl-int/lit8 v12, v12, 0x8

    or-int v11, v7, v12

    .line 108
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "Get ICD record: version = "

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, "  msg_id = 0x"

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-long v12, v11

    invoke-static {v12, v13}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v14, v7}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 109
    goto/16 :goto_1

    .line 83
    :cond_1
    if-eq v5, v13, :cond_3

    if-eq v5, v12, :cond_2

    goto :goto_0

    .line 91
    :cond_2
    invoke-virtual {v4, v13}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    and-int/lit16 v13, v13, 0xff

    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v15

    and-int/lit16 v15, v15, 0xff

    shl-int/lit8 v15, v15, 0x8

    or-int/2addr v13, v15

    .line 92
    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xff

    shl-int/lit8 v12, v12, 0x10

    or-int v8, v13, v12

    .line 93
    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit8 v9, v12, 0xf

    .line 94
    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xf0

    shr-int/lit8 v10, v12, 0x4

    .line 95
    const/4 v7, 0x6

    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v7

    and-int/lit16 v7, v7, 0xff

    const/4 v12, 0x7

    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xff

    shl-int/lit8 v12, v12, 0x8

    or-int v11, v7, v12

    goto :goto_0

    .line 85
    :cond_3
    invoke-virtual {v4, v13}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v13

    and-int/lit16 v13, v13, 0xff

    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xff

    shl-int/lit8 v12, v12, 0x8

    or-int v8, v13, v12

    .line 86
    invoke-virtual {v4, v15}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit8 v9, v12, 0xf

    .line 87
    invoke-virtual {v4, v15}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xf0

    shr-int/lit8 v10, v12, 0x4

    .line 88
    invoke-virtual {v4, v7}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v7

    and-int/lit16 v7, v7, 0xff

    const/4 v12, 0x5

    invoke-virtual {v4, v12}, Ljava/nio/ByteBuffer;->get(I)B

    move-result v12

    and-int/lit16 v12, v12, 0xff

    shl-int/lit8 v12, v12, 0x8

    or-int v11, v7, v12

    .line 89
    nop

    .line 98
    :goto_0
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "Get ICD event: version = "

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, "   msg_id = 0x"

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-long v12, v11

    invoke-static {v12, v13}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v14, v7}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 99
    nop

    .line 115
    :goto_1
    return-void
.end method

.method public ProcessPayload(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z
    .locals 15
    .param p1, "trap"    # Lcom/mediatek/mdml/MCPInfo;
    .param p2, "not_used"    # Lcom/mediatek/mdml/MCPInfo;

    .line 39
    move-object v6, p0

    new-instance v5, Lcom/mediatek/mdml/TrapPacker;

    invoke-virtual/range {p1 .. p1}, Lcom/mediatek/mdml/MCPInfo;->GetData()[B

    move-result-object v0

    invoke-virtual/range {p1 .. p1}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v1

    invoke-direct {v5, v0, v1}, Lcom/mediatek/mdml/TrapPacker;-><init>([BI)V

    .line 48
    .local v5, "trapPacker":Lcom/mediatek/mdml/TrapPacker;
    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapType()Lcom/mediatek/mdml/TRAP_TYPE;

    move-result-object v0

    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PSTIME:Lcom/mediatek/mdml/TRAP_TYPE;

    const/4 v7, 0x1

    if-ne v0, v1, :cond_1

    .line 49
    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetRawData()[B

    move-result-object v0

    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapDataOffset()I

    move-result v1

    add-int/lit8 v1, v1, 0x2

    const/4 v2, 0x4

    invoke-static {v0, v1, v2}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToLong([BII)J

    move-result-wide v0

    iput-wide v0, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->psTimeCounter:J

    .line 50
    const/4 v0, 0x0

    const-string v1, "ro.vendor.mtk_md_world_mode_support"

    invoke-static {v1, v0}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v7, :cond_0

    .line 51
    iget-wide v0, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->psTimeCounter:J

    long-to-double v0, v0

    const-wide/high16 v2, 0x4050000000000000L    # 64.0

    mul-double/2addr v0, v2

    const-wide v2, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v2

    double-to-long v0, v0

    iput-wide v0, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->timeInMillisecond:J

    goto :goto_0

    .line 53
    :cond_0
    iget-wide v0, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->psTimeCounter:J

    long-to-double v0, v0

    const-wide/high16 v2, 0x4014000000000000L    # 5.0

    mul-double/2addr v0, v2

    double-to-long v0, v0

    iput-wide v0, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->timeInMillisecond:J

    .line 55
    :goto_0
    return v7

    .line 58
    :cond_1
    iget-object v0, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_trapHandler:Lcom/mediatek/mdml/TrapHandlerInterface;

    if-eqz v0, :cond_2

    .line 59
    iget-wide v1, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->psTimeCounter:J

    iget-wide v3, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->timeInMillisecond:J

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/mediatek/mdml/MonitorTrapReceiver;->printDebugLog(JJLcom/mediatek/mdml/TrapPacker;)V

    .line 60
    iget-object v8, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_trapHandler:Lcom/mediatek/mdml/TrapHandlerInterface;

    iget-wide v9, v6, Lcom/mediatek/mdml/MonitorTrapReceiver;->timeInMillisecond:J

    .line 61
    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapType()Lcom/mediatek/mdml/TRAP_TYPE;

    move-result-object v11

    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapLen()I

    move-result v12

    .line 62
    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetRawData()[B

    move-result-object v13

    invoke-virtual {v5}, Lcom/mediatek/mdml/TrapPacker;->GetTrapDataOffset()I

    move-result v14

    .line 60
    invoke-interface/range {v8 .. v14}, Lcom/mediatek/mdml/TrapHandlerInterface;->ProcessTrap(JLcom/mediatek/mdml/TRAP_TYPE;I[BI)V

    .line 65
    :cond_2
    return v7
.end method

.method public SetTrapHandler(Lcom/mediatek/mdml/TrapHandlerInterface;)V
    .locals 0
    .param p1, "handlerInterfaceInstance"    # Lcom/mediatek/mdml/TrapHandlerInterface;

    .line 241
    iput-object p1, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_trapHandler:Lcom/mediatek/mdml/TrapHandlerInterface;

    .line 242
    return-void
.end method

.method protected finalize()V
    .locals 2

    .line 229
    const-string v0, "MDML/MonitorTrapReceiver"

    const-string v1, "MonitorTrapReceiver destructor done!"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 230
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_socketListener:Lcom/mediatek/mdml/SocketListener;

    .line 231
    iput-object v0, p0, Lcom/mediatek/mdml/MonitorTrapReceiver;->m_mcpReceiver:Lcom/mediatek/mdml/MCPReceiver;

    .line 232
    return-void
.end method

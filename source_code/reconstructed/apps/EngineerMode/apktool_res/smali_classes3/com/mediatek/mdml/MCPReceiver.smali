.class Lcom/mediatek/mdml/MCPReceiver;
.super Ljava/lang/Object;
.source "MCPReceiver.java"

# interfaces
.implements Lcom/mediatek/mdml/ConnectionHandlerInterface;
.implements Lcom/mediatek/mdml/HIDLHandlerInterface;


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/MCPReceiver"


# instance fields
.field private mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

.field private mPayloadHandler:Lcom/mediatek/mdml/PayloadHandlerInterface;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/MCPReceiver;->mPayloadHandler:Lcom/mediatek/mdml/PayloadHandlerInterface;

    .line 47
    new-instance v0, Lcom/mediatek/mdml/MCPInfo;

    invoke-direct {v0}, Lcom/mediatek/mdml/MCPInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    .line 48
    return-void
.end method


# virtual methods
.method public DataIn(Lcom/mediatek/mdml/SocketConnection;)Z
    .locals 10
    .param p1, "connection"    # Lcom/mediatek/mdml/SocketConnection;

    .line 62
    const/4 v0, 0x0

    .line 64
    .local v0, "nPayloadProcessed":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const/4 v2, 0x5

    const/4 v3, 0x0

    const/4 v4, 0x0

    if-gt v1, v2, :cond_7

    .line 65
    invoke-virtual {p1}, Lcom/mediatek/mdml/SocketConnection;->ReadToBuffer()Z

    move-result v2

    const-string v5, "MDML/MCPReceiver"

    if-nez v2, :cond_0

    .line 66
    const-string v2, "Failed to read from connection. (read error)"

    invoke-static {v5, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 67
    return v4

    .line 70
    :cond_0
    :goto_1
    invoke-virtual {p1}, Lcom/mediatek/mdml/SocketConnection;->GetDataQueue()Lcom/mediatek/mdml/DataQueue;

    move-result-object v2

    .line 71
    .local v2, "dataQ":Lcom/mediatek/mdml/DataQueue;
    invoke-virtual {v2}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v6

    if-nez v6, :cond_1

    .line 72
    goto :goto_2

    .line 74
    :cond_1
    iget-object v6, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v6}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v6

    if-nez v6, :cond_2

    .line 75
    iget-object v6, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-static {v6, v2}, Lcom/mediatek/mdml/MCPHandler;->SearchHeader(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/DataQueue;)Z

    move-result v6

    if-nez v6, :cond_6

    .line 77
    const-string v6, "Header is not found!"

    invoke-static {v5, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 78
    goto :goto_2

    .line 82
    :cond_2
    invoke-virtual {v2}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v6

    iget-object v7, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v7}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v7

    if-ge v6, v7, :cond_4

    .line 84
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Data size ["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "] < Payload length ["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v7}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "]. Wait for next time."

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 85
    nop

    .line 109
    .end local v2    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    :goto_2
    if-lez v0, :cond_3

    .line 110
    goto/16 :goto_4

    .line 112
    :cond_3
    const-string v2, "No packet is processed. RETRY."

    invoke-static {v5, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    const-wide/16 v2, 0x1

    :try_start_0
    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 117
    goto :goto_3

    .line 115
    :catch_0
    move-exception v2

    .line 64
    :goto_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 87
    .restart local v2    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    :cond_4
    invoke-virtual {v2, v4}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 88
    iget-object v6, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v6}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v7

    iget-object v8, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v8}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v8

    invoke-virtual {v2}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v9

    invoke-virtual {v6, v7, v8, v9}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 91
    new-instance v6, Lcom/mediatek/mdml/MCPInfo;

    invoke-direct {v6}, Lcom/mediatek/mdml/MCPInfo;-><init>()V

    .line 92
    .local v6, "reply":Lcom/mediatek/mdml/MCPInfo;
    iget-object v7, p0, Lcom/mediatek/mdml/MCPReceiver;->mPayloadHandler:Lcom/mediatek/mdml/PayloadHandlerInterface;

    if-eqz v7, :cond_5

    .line 93
    iget-object v8, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-interface {v7, v8, v6}, Lcom/mediatek/mdml/PayloadHandlerInterface;->ProcessPayload(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    .line 94
    invoke-virtual {v6}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v7

    if-lez v7, :cond_5

    .line 95
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "Send command reply: type:["

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v8, "], len:["

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "], data:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v5, v7}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 97
    invoke-static {p1, v6, v3}, Lcom/mediatek/mdml/MCPHandler;->WriteToConnection(Lcom/mediatek/mdml/SocketConnection;Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    move-result v7

    if-nez v7, :cond_5

    .line 98
    const-string v3, "Failed to write socket. (write error)"

    invoke-static {v5, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 99
    return v4

    .line 103
    :cond_5
    add-int/lit8 v0, v0, 0x1

    .line 105
    iget-object v7, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v7}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v7

    invoke-virtual {v2, v7}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 106
    iget-object v7, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    sget-object v8, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    invoke-virtual {v7, v8, v4, v3}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 108
    .end local v2    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    .end local v6    # "reply":Lcom/mediatek/mdml/MCPInfo;
    :cond_6
    goto/16 :goto_1

    .line 119
    .end local v1    # "i":I
    :cond_7
    :goto_4
    if-nez v0, :cond_8

    iget-object v1, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v1}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v1

    if-lez v1, :cond_8

    .line 122
    invoke-virtual {p1}, Lcom/mediatek/mdml/SocketConnection;->GetDataQueue()Lcom/mediatek/mdml/DataQueue;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/mdml/DataQueue;->Clear()V

    .line 123
    iget-object v1, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    invoke-virtual {v1, v2, v4, v3}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 126
    :cond_8
    if-eqz v0, :cond_9

    const/4 v4, 0x1

    :cond_9
    return v4
.end method

.method public DataIn(Ljava/util/ArrayList;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)Z"
        }
    .end annotation

    .line 143
    .local p1, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const/4 v0, 0x0

    .line 145
    .local v0, "nPayloadProcessed":I
    new-instance v1, Lcom/mediatek/mdml/DataQueue;

    invoke-direct {v1}, Lcom/mediatek/mdml/DataQueue;-><init>()V

    .line 146
    .local v1, "dataQ":Lcom/mediatek/mdml/DataQueue;
    invoke-virtual {v1, p1}, Lcom/mediatek/mdml/DataQueue;->PushArrayList(Ljava/util/ArrayList;)Z

    .line 147
    iget-object v2, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    sget-object v3, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    const/4 v4, 0x0

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v4, v5}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 149
    invoke-virtual {v1}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v2

    const-string v3, "MDML/MCPReceiver"

    if-nez v2, :cond_0

    .line 150
    const-string v2, "Trap data is empty"

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 151
    return v4

    .line 154
    :cond_0
    iget-object v2, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-static {v2, v1}, Lcom/mediatek/mdml/MCPHandler;->SearchHeader(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/DataQueue;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 155
    const-string v2, "Trap data has no MCP header"

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 156
    return v4

    .line 160
    :cond_1
    invoke-virtual {v1}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v2

    iget-object v5, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v5}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v5

    if-ge v2, v5, :cond_2

    .line 162
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Data size ["

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "] < Payload length ["

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v5}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "]. "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 163
    return v4

    .line 165
    :cond_2
    invoke-virtual {v1, v4}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 166
    iget-object v2, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v2}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-virtual {v4}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v4

    invoke-virtual {v1}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v5

    invoke-virtual {v2, v3, v4, v5}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 169
    new-instance v2, Lcom/mediatek/mdml/MCPInfo;

    invoke-direct {v2}, Lcom/mediatek/mdml/MCPInfo;-><init>()V

    .line 170
    .local v2, "reply":Lcom/mediatek/mdml/MCPInfo;
    iget-object v3, p0, Lcom/mediatek/mdml/MCPReceiver;->mPayloadHandler:Lcom/mediatek/mdml/PayloadHandlerInterface;

    if-eqz v3, :cond_3

    .line 171
    iget-object v4, p0, Lcom/mediatek/mdml/MCPReceiver;->mMcpInfo:Lcom/mediatek/mdml/MCPInfo;

    invoke-interface {v3, v4, v2}, Lcom/mediatek/mdml/PayloadHandlerInterface;->ProcessPayload(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    .line 172
    invoke-virtual {v2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    .line 177
    :cond_3
    const/4 v3, 0x1

    return v3
.end method

.method public setPayloadHandler(Lcom/mediatek/mdml/PayloadHandlerInterface;)V
    .locals 0
    .param p1, "payloadHandler"    # Lcom/mediatek/mdml/PayloadHandlerInterface;

    .line 191
    iput-object p1, p0, Lcom/mediatek/mdml/MCPReceiver;->mPayloadHandler:Lcom/mediatek/mdml/PayloadHandlerInterface;

    .line 192
    return-void
.end method

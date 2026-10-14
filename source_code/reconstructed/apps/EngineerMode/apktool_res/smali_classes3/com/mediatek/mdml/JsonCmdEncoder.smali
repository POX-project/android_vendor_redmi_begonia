.class Lcom/mediatek/mdml/JsonCmdEncoder;
.super Ljava/lang/Object;
.source "JsonCmdEncoder.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;
    }
.end annotation


# static fields
.field private static final SID_ERR:I = 0x0

.field private static final TAG:Ljava/lang/String; = "MDML/JsonCmdEncoder"


# instance fields
.field private mClientContext:Landroid/content/Context;

.field private m_McpTransmitter:Lcom/mediatek/mdml/MCPTransmitter;

.field private m_hidlMcpTransmitter:Lcom/mediatek/mdml/HIDLMCPTransmitter;


# direct methods
.method public constructor <init>(Lcom/mediatek/mdml/HIDLMCPTransmitter;Landroid/content/Context;)V
    .locals 2
    .param p1, "mcpTransmitter"    # Lcom/mediatek/mdml/HIDLMCPTransmitter;
    .param p2, "context"    # Landroid/content/Context;

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->mClientContext:Landroid/content/Context;

    .line 47
    iput-object p1, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->m_hidlMcpTransmitter:Lcom/mediatek/mdml/HIDLMCPTransmitter;

    .line 48
    if-eqz p2, :cond_0

    .line 51
    iput-object p2, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->mClientContext:Landroid/content/Context;

    .line 52
    const-string v0, "MDML/JsonCmdEncoder"

    const-string v1, "JsonCmdEncoder with HIDLMCPTransmitter  Constructor done!"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 53
    return-void

    .line 49
    :cond_0
    new-instance v0, Ljava/lang/Error;

    const-string v1, "MDML/JsonCmdEncoder context should not be null!"

    invoke-direct {v0, v1}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public constructor <init>(Lcom/mediatek/mdml/MCPTransmitter;Landroid/content/Context;)V
    .locals 2
    .param p1, "mcpTransmitter"    # Lcom/mediatek/mdml/MCPTransmitter;
    .param p2, "context"    # Landroid/content/Context;

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->mClientContext:Landroid/content/Context;

    .line 37
    iput-object p1, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->m_McpTransmitter:Lcom/mediatek/mdml/MCPTransmitter;

    .line 38
    if-eqz p2, :cond_0

    .line 41
    iput-object p2, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->mClientContext:Landroid/content/Context;

    .line 42
    const-string v0, "MDML/JsonCmdEncoder"

    const-string v1, "JsonCmdEncoder with MCPTransmitter Constructor done!"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 43
    return-void

    .line 39
    :cond_0
    new-instance v0, Ljava/lang/Error;

    const-string v1, "MDML/JsonCmdEncoder context should not be null!"

    invoke-direct {v0, v1}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 16
    .param p1, "cmdCode"    # Lcom/mediatek/mdml/MONITOR_CMD_CODE;
    .param p2, "jCmd"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mediatek/mdml/MONITOR_CMD_CODE;",
            "Lorg/json/JSONObject;",
            "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<",
            "Lorg/json/JSONObject;",
            ">;)",
            "Lcom/mediatek/mdml/MONITOR_CMD_RESP;"
        }
    .end annotation

    .line 99
    .local p3, "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    move-object/from16 v1, p0

    move-object/from16 v2, p2

    const-string v0, "version"

    const-string v3, "method"

    const-string v4, "api"

    new-instance v5, Lcom/mediatek/mdml/ApiInfo;

    move-object/from16 v6, p1

    invoke-direct {v5, v6}, Lcom/mediatek/mdml/ApiInfo;-><init>(Lcom/mediatek/mdml/MONITOR_CMD_CODE;)V

    .line 103
    .local v5, "apiInfo":Lcom/mediatek/mdml/ApiInfo;
    :try_start_0
    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetApi()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v2, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 104
    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetMethod()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v2, v3, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 105
    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetVersion()I

    move-result v7

    invoke-virtual {v2, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_5

    .line 108
    nop

    .line 111
    new-instance v7, Lcom/mediatek/mdml/MCPInfo;

    invoke-direct {v7}, Lcom/mediatek/mdml/MCPInfo;-><init>()V

    .line 112
    .local v7, "cmd":Lcom/mediatek/mdml/MCPInfo;
    invoke-virtual/range {p2 .. p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v8

    .line 113
    .local v8, "strCmd":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v10, 0x0

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/String;->getBytes()[B

    move-result-object v9

    .line 114
    .local v9, "cmdData":[B
    sget-object v10, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD:Lcom/mediatek/mdml/MCP_TYPE;

    array-length v11, v9

    invoke-virtual {v7, v10, v11, v9}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 115
    new-instance v10, Lcom/mediatek/mdml/MCPInfo;

    invoke-direct {v10}, Lcom/mediatek/mdml/MCPInfo;-><init>()V

    .line 118
    .local v10, "reply":Lcom/mediatek/mdml/MCPInfo;
    invoke-virtual {v1, v7, v10}, Lcom/mediatek/mdml/JsonCmdEncoder;->Send(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    move-result v11

    const-string v12, "MDML/JsonCmdEncoder"

    if-nez v11, :cond_0

    .line 119
    const-string v0, "Send command failed."

    invoke-static {v12, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 120
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_CONNECTION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0

    .line 123
    :cond_0
    sget-object v11, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    invoke-virtual {v10}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v13

    if-ne v11, v13, :cond_1

    .line 124
    const-string v0, "No reply received."

    invoke-static {v12, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 125
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_CONNECTION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0

    .line 129
    :cond_1
    sget-object v11, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD_RESP:Lcom/mediatek/mdml/MCP_TYPE;

    invoke-virtual {v10}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v13

    const-string v14, "]"

    if-eq v11, v13, :cond_2

    .line 131
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Reply type not in Json. ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mediatek/mdml/MCP_TYPE;->ordinal()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 132
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0

    .line 134
    :cond_2
    if-nez p3, :cond_3

    .line 135
    new-instance v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;

    invoke-direct {v11, v1}, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;-><init>(Lcom/mediatek/mdml/JsonCmdEncoder;)V

    .end local p3    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    .local v11, "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    goto :goto_0

    .line 134
    .end local v11    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    .restart local p3    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    :cond_3
    move-object/from16 v11, p3

    .line 139
    .end local p3    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    .restart local v11    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    :goto_0
    :try_start_1
    new-instance v13, Ljava/lang/String;

    invoke-virtual {v10}, Lcom/mediatek/mdml/MCPInfo;->GetData()[B

    move-result-object v15

    const-string v1, "UTF-8"

    invoke-direct {v13, v15, v1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    move-object v1, v13

    .line 140
    .local v1, "strReply":Ljava/lang/String;
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "Receive reply ["

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v12, v13}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 141
    new-instance v13, Lorg/json/JSONObject;

    invoke-direct {v13, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v13, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4

    .line 145
    .end local v1    # "strReply":Ljava/lang/String;
    nop

    .line 148
    :try_start_2
    iget-object v1, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v1, Lorg/json/JSONObject;

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 149
    .local v1, "strApi":Ljava/lang/String;
    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetApi()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_4

    .line 150
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Reply API ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] != Command API ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetApi()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 151
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    return-object v0

    .line 156
    .end local v1    # "strApi":Ljava/lang/String;
    :cond_4
    nop

    .line 159
    :try_start_3
    iget-object v1, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v1, Lorg/json/JSONObject;

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 160
    .local v1, "strMethod":Ljava/lang/String;
    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetMethod()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 161
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Reply Method ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] != Command Method ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetMethod()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 162
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    return-object v0

    .line 167
    .end local v1    # "strMethod":Ljava/lang/String;
    :cond_5
    nop

    .line 170
    :try_start_4
    iget-object v1, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v1, Lorg/json/JSONObject;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 171
    .local v0, "version":I
    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetVersion()I

    move-result v1

    if-eq v0, v1, :cond_6

    .line 172
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Reply Version ["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "] != Command Version ["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mediatek/mdml/ApiInfo;->GetVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 173
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    return-object v1

    .line 178
    .end local v0    # "version":I
    :cond_6
    nop

    .line 182
    :try_start_5
    iget-object v0, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v0, Lorg/json/JSONObject;

    const-string v1, "ret"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 183
    .local v0, "ret":I
    if-ltz v0, :cond_8

    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SIZE:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    invoke-virtual {v1}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->ordinal()I

    move-result v1

    if-gt v1, v0, :cond_7

    goto :goto_1

    .line 187
    :cond_7
    invoke-static {}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->values()[Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    aget-object v1, v1, v0

    return-object v1

    .line 184
    :cond_8
    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ret is invalid. ["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 185
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    return-object v1

    .line 188
    .end local v0    # "ret":I
    :catch_0
    move-exception v0

    .line 189
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "No key: [ret] in JSON reply: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v3, Lorg/json/JSONObject;

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 190
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1

    .line 175
    .end local v0    # "e":Ljava/lang/Exception;
    :catch_1
    move-exception v0

    .line 176
    .restart local v0    # "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "No key: [version] in JSON reply: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v3, Lorg/json/JSONObject;

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 177
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1

    .line 164
    .end local v0    # "e":Ljava/lang/Exception;
    :catch_2
    move-exception v0

    .line 165
    .restart local v0    # "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "No key: [method] in JSON reply: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v3, Lorg/json/JSONObject;

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 166
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1

    .line 153
    .end local v0    # "e":Ljava/lang/Exception;
    :catch_3
    move-exception v0

    .line 154
    .restart local v0    # "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "No key: [api] in JSON reply: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v11, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v3, Lorg/json/JSONObject;

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 155
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1

    .line 142
    .end local v0    # "e":Ljava/lang/Exception;
    :catch_4
    move-exception v0

    .line 143
    .restart local v0    # "e":Ljava/lang/Exception;
    const-string v1, "Failed to parse reply string to Json."

    invoke-static {v12, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 144
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1

    .line 106
    .end local v0    # "e":Ljava/lang/Exception;
    .end local v7    # "cmd":Lcom/mediatek/mdml/MCPInfo;
    .end local v8    # "strCmd":Ljava/lang/String;
    .end local v9    # "cmdData":[B
    .end local v10    # "reply":Lcom/mediatek/mdml/MCPInfo;
    .end local v11    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    .restart local p3    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    :catch_5
    move-exception v0

    .line 107
    .restart local v0    # "e":Ljava/lang/Exception;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1
.end method


# virtual methods
.method Send(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z
    .locals 1
    .param p1, "cmd"    # Lcom/mediatek/mdml/MCPInfo;
    .param p2, "reply"    # Lcom/mediatek/mdml/MCPInfo;

    .line 76
    iget-object v0, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->m_hidlMcpTransmitter:Lcom/mediatek/mdml/HIDLMCPTransmitter;

    if-nez v0, :cond_0

    .line 77
    const/4 v0, 0x0

    return v0

    .line 80
    :cond_0
    invoke-virtual {v0, p1, p2}, Lcom/mediatek/mdml/HIDLMCPTransmitter;->Send(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    move-result v0

    return v0
.end method

.method public closeSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 4
    .param p1, "sessionId"    # J

    .line 277
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 279
    .local v0, "jCmd":Lorg/json/JSONObject;
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 280
    .local v1, "jArg":Lorg/json/JSONObject;
    const-string v2, "sessionId"

    invoke-virtual {v1, v2, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 281
    const-string v2, "arg"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 285
    nop

    .line 286
    .end local v1    # "jArg":Lorg/json/JSONObject;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CLOSE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const/4 v2, 0x0

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    return-object v1

    .line 282
    :catch_0
    move-exception v1

    .line 283
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "MDML/JsonCmdEncoder"

    const-string v3, "Failed to insert data into Json cmd."

    invoke-static {v2, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 284
    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v2
.end method

.method public createSession()J
    .locals 11

    .line 221
    const-string v0, "MDML/JsonCmdEncoder"

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 224
    .local v1, "jCmd":Lorg/json/JSONObject;
    const-wide/16 v2, 0x0

    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 225
    .local v4, "jArg":Lorg/json/JSONObject;
    const-string v5, "client_package"

    iget-object v6, p0, Lcom/mediatek/mdml/JsonCmdEncoder;->mClientContext:Landroid/content/Context;

    invoke-virtual {v6}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 226
    const-string v5, "arg"

    invoke-virtual {v1, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 230
    nop

    .line 231
    .end local v4    # "jArg":Lorg/json/JSONObject;
    new-instance v4, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;

    invoke-direct {v4, p0}, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;-><init>(Lcom/mediatek/mdml/JsonCmdEncoder;)V

    .line 232
    .local v4, "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    const-wide/16 v5, 0x0

    .line 234
    .local v5, "sessionId":J
    sget-object v7, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CREATE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    invoke-direct {p0, v7, v1, v4}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v7

    .line 236
    .local v7, "ret":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    sget-object v8, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    if-ne v8, v7, :cond_0

    .line 238
    :try_start_1
    iget-object v8, v4, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v8, Lorg/json/JSONObject;

    const-string v9, "data"

    invoke-virtual {v8, v9}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v8

    .line 239
    .local v8, "jData":Lorg/json/JSONObject;
    const-string v9, "sessionId"

    invoke-virtual {v8, v9}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-wide v5, v2

    .line 243
    .end local v8    # "jData":Lorg/json/JSONObject;
    goto :goto_0

    .line 240
    :catch_0
    move-exception v8

    .line 241
    .local v8, "e":Ljava/lang/Exception;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "No key: [api] in JSON reply: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v4, Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;->value:Ljava/lang/Object;

    check-cast v10, Lorg/json/JSONObject;

    invoke-virtual {v10}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v0, v9}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 242
    return-wide v2

    .line 244
    .end local v8    # "e":Ljava/lang/Exception;
    :cond_0
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_UNAUTHORIZED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    if-eq v0, v7, :cond_1

    .line 247
    :goto_0
    return-wide v5

    .line 245
    :cond_1
    new-instance v0, Ljava/lang/Error;

    const-string v2, "Unauthorized to use MDML!"

    invoke-direct {v0, v2}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    throw v0

    .line 227
    .end local v4    # "jReply":Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;, "Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder<Lorg/json/JSONObject;>;"
    .end local v5    # "sessionId":J
    .end local v7    # "ret":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :catch_1
    move-exception v4

    .line 228
    .local v4, "e":Ljava/lang/Exception;
    const-string v5, "Failed to insert data into Json cmd."

    invoke-static {v0, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 229
    return-wide v2
.end method

.method public disableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 4
    .param p1, "sessionId"    # J

    .line 487
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 489
    .local v0, "jCmd":Lorg/json/JSONObject;
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 490
    .local v1, "jArg":Lorg/json/JSONObject;
    const-string v2, "sessionId"

    invoke-virtual {v1, v2, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 491
    const-string v2, "arg"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 495
    nop

    .line 496
    .end local v1    # "jArg":Lorg/json/JSONObject;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_DISABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const/4 v2, 0x0

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    return-object v1

    .line 492
    :catch_0
    move-exception v1

    .line 493
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "MDML/JsonCmdEncoder"

    const-string v3, "Failed to insert data into Json cmd."

    invoke-static {v2, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 494
    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v2
.end method

.method public enableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 4
    .param p1, "sessionId"    # J

    .line 448
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 450
    .local v0, "jCmd":Lorg/json/JSONObject;
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 451
    .local v1, "jArg":Lorg/json/JSONObject;
    const-string v2, "sessionId"

    invoke-virtual {v1, v2, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 452
    const-string v2, "arg"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 456
    nop

    .line 457
    .end local v1    # "jArg":Lorg/json/JSONObject;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_ENABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const/4 v2, 0x0

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    return-object v1

    .line 453
    :catch_0
    move-exception v1

    .line 454
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "MDML/JsonCmdEncoder"

    const-string v3, "Failed to insert data into Json cmd."

    invoke-static {v2, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 455
    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v2
.end method

.method public setTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 6
    .param p1, "sessionId"    # J
    .param p3, "szServerName"    # Ljava/lang/String;

    .line 527
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 529
    .local v0, "jCmd":Lorg/json/JSONObject;
    const-string v1, "MDML/JsonCmdEncoder"

    if-nez p3, :cond_0

    .line 530
    const-string v2, "server name is null."

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 531
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_PARAMETERS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1

    .line 534
    :cond_0
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 535
    .local v2, "jArg":Lorg/json/JSONObject;
    const-string v3, "sessionId"

    invoke-virtual {v2, v3, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 537
    const-string v3, "server_name"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 538
    const-string v3, "arg"

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 542
    nop

    .line 543
    .end local v2    # "jArg":Lorg/json/JSONObject;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_RECEIVER_SET:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const/4 v2, 0x0

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    return-object v1

    .line 539
    :catch_0
    move-exception v2

    .line 540
    .local v2, "e":Ljava/lang/Exception;
    const-string v3, "Failed to insert data into Json cmd."

    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 541
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v1
.end method

.method public subscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 9
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # [J

    .line 324
    const-string v0, "MDML/JsonCmdEncoder"

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 327
    .local v1, "jCmd":Lorg/json/JSONObject;
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 328
    .local v2, "jArg":Lorg/json/JSONObject;
    const-string v3, "sessionId"

    invoke-virtual {v2, v3, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 329
    invoke-static {p3}, Lcom/mediatek/mdml/TRAP_TYPE;->ToTrapStr(Lcom/mediatek/mdml/TRAP_TYPE;)Ljava/lang/String;

    move-result-object v3

    .line 330
    .local v3, "strTrapType":Ljava/lang/String;
    if-nez v3, :cond_0

    .line 331
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "TRAP_TYPE is invalid. type = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 332
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_PARAMETERS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0

    .line 334
    :cond_0
    const-string v4, "type"

    invoke-virtual {v2, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 336
    array-length v4, p4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v5, "msgId"

    const/4 v6, 0x1

    if-ne v4, v6, :cond_1

    .line 337
    const/4 v4, 0x0

    :try_start_1
    aget-wide v6, p4, v4

    invoke-virtual {v2, v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    goto :goto_1

    .line 339
    :cond_1
    new-instance v4, Lorg/json/JSONArray;

    invoke-direct {v4}, Lorg/json/JSONArray;-><init>()V

    .line 340
    .local v4, "idArray":Lorg/json/JSONArray;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    array-length v7, p4

    if-ge v6, v7, :cond_2

    .line 341
    aget-wide v7, p4, v6

    invoke-virtual {v4, v7, v8}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    .line 340
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 343
    .end local v6    # "i":I
    :cond_2
    invoke-virtual {v2, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 346
    .end local v4    # "idArray":Lorg/json/JSONArray;
    :goto_1
    const-string v4, "arg"

    invoke-virtual {v1, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 351
    nop

    .line 352
    .end local v2    # "jArg":Lorg/json/JSONObject;
    .end local v3    # "strTrapType":Ljava/lang/String;
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_SUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const/4 v2, 0x0

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0

    .line 348
    :catch_0
    move-exception v2

    .line 349
    .local v2, "e":Ljava/lang/Exception;
    const-string v3, "Failed to insert data into Json cmd."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 350
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0
.end method

.method public subscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 2
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # J

    .line 294
    const/4 v0, 0x1

    new-array v0, v0, [J

    .line 295
    .local v0, "id":[J
    const/4 v1, 0x0

    aput-wide p4, v0, v1

    .line 296
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/mediatek/mdml/JsonCmdEncoder;->subscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    return-object v1
.end method

.method public unsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 9
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # [J

    .line 390
    const-string v0, "MDML/JsonCmdEncoder"

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 393
    .local v1, "jCmd":Lorg/json/JSONObject;
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 394
    .local v2, "jArg":Lorg/json/JSONObject;
    const-string v3, "sessionId"

    invoke-virtual {v2, v3, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 395
    invoke-static {p3}, Lcom/mediatek/mdml/TRAP_TYPE;->ToTrapStr(Lcom/mediatek/mdml/TRAP_TYPE;)Ljava/lang/String;

    move-result-object v3

    .line 396
    .local v3, "strTrapType":Ljava/lang/String;
    if-nez v3, :cond_0

    .line 397
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "TRAP_TYPE is invalid. type = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 398
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_PARAMETERS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0

    .line 400
    :cond_0
    const-string v4, "type"

    invoke-virtual {v2, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 402
    array-length v4, p4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v5, "msgId"

    const/4 v6, 0x1

    if-ne v4, v6, :cond_1

    .line 403
    const/4 v4, 0x0

    :try_start_1
    aget-wide v6, p4, v4

    invoke-virtual {v2, v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    goto :goto_1

    .line 405
    :cond_1
    new-instance v4, Lorg/json/JSONArray;

    invoke-direct {v4}, Lorg/json/JSONArray;-><init>()V

    .line 406
    .local v4, "idArray":Lorg/json/JSONArray;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    array-length v7, p4

    if-ge v6, v7, :cond_2

    .line 407
    aget-wide v7, p4, v6

    invoke-virtual {v4, v7, v8}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    .line 406
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 409
    .end local v6    # "i":I
    :cond_2
    invoke-virtual {v2, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 412
    .end local v4    # "idArray":Lorg/json/JSONArray;
    :goto_1
    const-string v4, "arg"

    invoke-virtual {v1, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 417
    nop

    .line 418
    .end local v2    # "jArg":Lorg/json/JSONObject;
    .end local v3    # "strTrapType":Ljava/lang/String;
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const/4 v2, 0x0

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/mdml/JsonCmdEncoder;->ROUTINE_TASK(Lcom/mediatek/mdml/MONITOR_CMD_CODE;Lorg/json/JSONObject;Lcom/mediatek/mdml/JsonCmdEncoder$ValueHolder;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0

    .line 414
    :catch_0
    move-exception v2

    .line 415
    .local v2, "e":Ljava/lang/Exception;
    const-string v3, "Failed to insert data into Json cmd."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 416
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0
.end method

.method public unsubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 2
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # J

    .line 360
    const/4 v0, 0x1

    new-array v0, v0, [J

    .line 361
    .local v0, "id":[J
    const/4 v1, 0x0

    aput-wide p4, v0, v1

    .line 362
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/mediatek/mdml/JsonCmdEncoder;->unsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    return-object v1
.end method

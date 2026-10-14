.class Lcom/mediatek/mdml/MCPTransmitter;
.super Ljava/lang/Object;
.source "MCPTransmitter.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/MCPTransmitter"


# instance fields
.field private m_connection:Lcom/mediatek/mdml/SocketConnection;

.field private m_serverName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1
    .param p1, "szServerName"    # Ljava/lang/String;

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    if-eqz p1, :cond_0

    .line 23
    iput-object p1, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_serverName:Ljava/lang/String;

    .line 24
    new-instance v0, Lcom/mediatek/mdml/SocketConnection;

    invoke-direct {v0}, Lcom/mediatek/mdml/SocketConnection;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_connection:Lcom/mediatek/mdml/SocketConnection;

    .line 25
    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/SocketConnection;->Connect(Ljava/lang/Object;)Z

    .line 27
    :cond_0
    return-void
.end method


# virtual methods
.method public declared-synchronized Send(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z
    .locals 5
    .param p1, "cmd"    # Lcom/mediatek/mdml/MCPInfo;
    .param p2, "reply"    # Lcom/mediatek/mdml/MCPInfo;

    monitor-enter p0

    .line 41
    if-nez p1, :cond_0

    .line 42
    const/4 v0, 0x0

    monitor-exit p0

    return v0

    .line 44
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_connection:Lcom/mediatek/mdml/SocketConnection;

    invoke-static {v0, p1, p2}, Lcom/mediatek/mdml/MCPHandler;->WriteToConnection(Lcom/mediatek/mdml/SocketConnection;Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 45
    monitor-exit p0

    return v1

    .line 47
    :cond_1
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const/4 v2, 0x5

    if-ge v0, v2, :cond_3

    .line 49
    const-wide/16 v2, 0x7d0

    :try_start_1
    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 52
    goto :goto_1

    .line 50
    .end local p0    # "this":Lcom/mediatek/mdml/MCPTransmitter;
    :catch_0
    move-exception v2

    .line 53
    :goto_1
    :try_start_2
    iget-object v2, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_connection:Lcom/mediatek/mdml/SocketConnection;

    iget-object v3, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_serverName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mediatek/mdml/SocketConnection;->Connect(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 54
    iget-object v2, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_connection:Lcom/mediatek/mdml/SocketConnection;

    invoke-static {v2, p1, p2}, Lcom/mediatek/mdml/MCPHandler;->WriteToConnection(Lcom/mediatek/mdml/SocketConnection;Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    move-result v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v2, :cond_2

    .line 55
    monitor-exit p0

    return v1

    .line 58
    :cond_2
    :try_start_3
    const-string v2, "MDML/MCPTransmitter"

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Reconnect to ["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/mdml/MCPTransmitter;->m_serverName:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "] failed."

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 47
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 61
    .end local v0    # "i":I
    :cond_3
    monitor-exit p0

    return v1

    .line 40
    .end local p1    # "cmd":Lcom/mediatek/mdml/MCPInfo;
    .end local p2    # "reply":Lcom/mediatek/mdml/MCPInfo;
    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

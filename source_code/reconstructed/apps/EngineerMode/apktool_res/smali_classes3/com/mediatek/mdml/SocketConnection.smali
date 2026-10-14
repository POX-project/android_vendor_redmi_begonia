.class Lcom/mediatek/mdml/SocketConnection;
.super Ljava/lang/Object;
.source "SocketConnection.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/SocketConnection"


# instance fields
.field protected m_dataQ:Lcom/mediatek/mdml/DataQueue;

.field private m_isValid:Z

.field private m_socket:Landroid/net/LocalSocket;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_isValid:Z

    .line 23
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    .line 24
    new-instance v0, Lcom/mediatek/mdml/DataQueue;

    invoke-direct {v0}, Lcom/mediatek/mdml/DataQueue;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    .line 25
    return-void
.end method

.method public constructor <init>(Landroid/net/LocalSocket;)V
    .locals 1
    .param p1, "socket"    # Landroid/net/LocalSocket;

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_isValid:Z

    .line 33
    iput-object p1, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    .line 34
    new-instance v0, Lcom/mediatek/mdml/DataQueue;

    invoke-direct {v0}, Lcom/mediatek/mdml/DataQueue;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    .line 35
    return-void
.end method


# virtual methods
.method public Connect(Ljava/lang/Object;)Z
    .locals 6
    .param p1, "host"    # Ljava/lang/Object;

    .line 56
    const-string v0, "MDML/SocketConnection"

    const-string v1, "SocketConnection::Connect"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 58
    const/4 v1, 0x0

    if-nez p1, :cond_0

    .line 59
    const-string v2, "Input arg is null"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 60
    return v1

    .line 62
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/mdml/SocketConnection;->Reset()V

    .line 63
    new-instance v2, Landroid/net/LocalSocket;

    invoke-direct {v2}, Landroid/net/LocalSocket;-><init>()V

    iput-object v2, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    .line 65
    :try_start_0
    new-instance v3, Landroid/net/LocalSocketAddress;

    move-object v4, p1

    check-cast v4, Ljava/lang/String;

    sget-object v5, Landroid/net/LocalSocketAddress$Namespace;->ABSTRACT:Landroid/net/LocalSocketAddress$Namespace;

    invoke-direct {v3, v4, v5}, Landroid/net/LocalSocketAddress;-><init>(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V

    invoke-virtual {v2, v3}, Landroid/net/LocalSocket;->connect(Landroid/net/LocalSocketAddress;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 70
    nop

    .line 72
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_isValid:Z

    .line 74
    return v0

    .line 66
    :catch_0
    move-exception v2

    .line 67
    .local v2, "e":Ljava/lang/Exception;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Failed to connect to "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v4, p1

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 68
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 69
    return v1
.end method

.method public GetDataQueue()Lcom/mediatek/mdml/DataQueue;
    .locals 1

    .line 235
    iget-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    return-object v0
.end method

.method public IsValid()Z
    .locals 1

    .line 248
    iget-boolean v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_isValid:Z

    return v0
.end method

.method public Read([BII)I
    .locals 6
    .param p1, "buffer"    # [B
    .param p2, "offset"    # I
    .param p3, "bufferSize"    # I

    .line 90
    const-string v0, "Failed to get input stream"

    const/4 v1, 0x0

    .line 95
    .local v1, "readBytes":I
    if-eqz p1, :cond_3

    if-ltz p2, :cond_3

    if-gtz p3, :cond_0

    goto :goto_0

    .line 99
    :cond_0
    iget-object v2, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    const/4 v3, -0x1

    const-string v4, "MDML/SocketConnection"

    if-nez v2, :cond_1

    .line 100
    const-string v0, "SocketConnection is not connected."

    invoke-static {v4, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 101
    return v3

    .line 105
    :cond_1
    :try_start_0
    invoke-virtual {v2}, Landroid/net/LocalSocket;->getInputStream()Ljava/io/InputStream;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 110
    .local v2, "inputStream":Ljava/io/InputStream;
    nop

    .line 114
    :try_start_1
    invoke-virtual {v2, p1, p2, p3}, Ljava/io/InputStream;->read([BII)I

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 119
    .end local v1    # "readBytes":I
    .local v0, "readBytes":I
    nop

    .line 120
    if-nez v0, :cond_2

    .line 121
    const-string v1, "Socket is closed."

    invoke-static {v4, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/mdml/SocketConnection;->m_isValid:Z

    .line 123
    return v3

    .line 125
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "SocketConnection::Read done! read ["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "] bytes."

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 126
    return v0

    .line 115
    .end local v0    # "readBytes":I
    .restart local v1    # "readBytes":I
    :catch_0
    move-exception v5

    .line 116
    .local v5, "e":Ljava/lang/Exception;
    invoke-static {v4, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 117
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V

    .line 118
    return v3

    .line 106
    .end local v2    # "inputStream":Ljava/io/InputStream;
    .end local v5    # "e":Ljava/lang/Exception;
    :catch_1
    move-exception v2

    .line 107
    .local v2, "e":Ljava/lang/Exception;
    invoke-static {v4, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 108
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 109
    return v3

    .line 96
    .end local v2    # "e":Ljava/lang/Exception;
    :cond_3
    :goto_0
    const/4 v0, -0x2

    return v0
.end method

.method public ReadToBuffer()Z
    .locals 5

    .line 216
    const/4 v0, 0x0

    .line 218
    .local v0, "readBytes":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BufferedConnection::ReadToBuffer. There\'re "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    invoke-virtual {v2}, Lcom/mediatek/mdml/DataQueue;->SpaceSize()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " bytes of space in dataQ."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MDML/SocketConnection"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 220
    iget-object v1, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    invoke-virtual {v1}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v1

    iget-object v3, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    invoke-virtual {v3}, Lcom/mediatek/mdml/DataQueue;->SpaceStartOffset()I

    move-result v3

    iget-object v4, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    invoke-virtual {v4}, Lcom/mediatek/mdml/DataQueue;->SpaceSize()I

    move-result v4

    invoke-virtual {p0, v1, v3, v4}, Lcom/mediatek/mdml/SocketConnection;->Read([BII)I

    move-result v1

    move v0, v1

    if-gez v1, :cond_0

    .line 221
    const-string v1, "Failed to read from connection"

    invoke-static {v2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 222
    const/4 v1, 0x0

    return v1

    .line 224
    :cond_0
    iget-object v1, p0, Lcom/mediatek/mdml/SocketConnection;->m_dataQ:Lcom/mediatek/mdml/DataQueue;

    invoke-virtual {v1, v0}, Lcom/mediatek/mdml/DataQueue;->IncSize(I)V

    .line 227
    const/4 v1, 0x1

    return v1
.end method

.method public Reset()V
    .locals 3

    .line 194
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_isValid:Z

    .line 195
    iget-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    if-eqz v0, :cond_1

    .line 197
    :try_start_0
    invoke-virtual {v0}, Landroid/net/LocalSocket;->isClosed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 198
    iget-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    invoke-virtual {v0}, Landroid/net/LocalSocket;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 203
    :cond_0
    goto :goto_0

    .line 200
    :catch_0
    move-exception v0

    .line 201
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, "MDML/SocketConnection"

    const-string v2, "Failed to close socket."

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 202
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 204
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    .line 206
    :cond_1
    return-void
.end method

.method public Write([BI)Z
    .locals 5
    .param p1, "data"    # [B
    .param p2, "len"    # I

    .line 146
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 147
    return v0

    .line 150
    :cond_0
    const/4 v1, 0x1

    if-nez p2, :cond_1

    .line 151
    return v1

    .line 154
    :cond_1
    iget-object v2, p0, Lcom/mediatek/mdml/SocketConnection;->m_socket:Landroid/net/LocalSocket;

    const-string v3, "MDML/SocketConnection"

    if-nez v2, :cond_2

    .line 155
    const-string v1, "SocketConnection is not connected."

    invoke-static {v3, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 156
    return v0

    .line 160
    :cond_2
    :try_start_0
    invoke-virtual {v2}, Landroid/net/LocalSocket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 164
    .local v2, "outputStream":Ljava/io/OutputStream;
    nop

    .line 169
    invoke-virtual {p0}, Lcom/mediatek/mdml/SocketConnection;->IsValid()Z

    move-result v4

    if-nez v4, :cond_3

    .line 170
    return v0

    .line 173
    :cond_3
    :try_start_1
    invoke-virtual {v2, p1, v0, p2}, Ljava/io/OutputStream;->write([BII)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 178
    nop

    .line 186
    return v1

    .line 174
    :catch_0
    move-exception v1

    .line 175
    .local v1, "e":Ljava/lang/Exception;
    const-string v4, "Failed to write to output stream."

    invoke-static {v3, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 176
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 177
    return v0

    .line 161
    .end local v1    # "e":Ljava/lang/Exception;
    .end local v2    # "outputStream":Ljava/io/OutputStream;
    :catch_1
    move-exception v1

    .line 162
    .restart local v1    # "e":Ljava/lang/Exception;
    const-string v2, "Failed to get output stream."

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 163
    return v0
.end method

.method public finalize()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    .line 41
    const-string v0, "MDML/SocketConnection"

    const-string v1, "~SocketConnection"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 42
    invoke-virtual {p0}, Lcom/mediatek/mdml/SocketConnection;->Reset()V

    .line 43
    invoke-super {p0}, Ljava/lang/Object;->finalize()V

    .line 44
    return-void
.end method

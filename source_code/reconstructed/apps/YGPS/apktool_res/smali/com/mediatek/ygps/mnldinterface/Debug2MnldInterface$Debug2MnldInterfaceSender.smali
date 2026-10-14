.class public Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;
.super Ljava/lang/Object;
.source "Debug2MnldInterface.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public debugMnldNeMsg(Lcom/mediatek/socket/base/UdpClient;Z)Z
    .locals 1

    .line 39
    monitor-enter p1

    .line 40
    :try_start_0
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->connect()Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    .line 41
    monitor-exit p1

    return p0

    .line 43
    :cond_0
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->getBuff()Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;

    move-result-object p0

    const/16 v0, 0x131

    .line 44
    invoke-virtual {p0, v0}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putInt(I)V

    const/4 v0, 0x1

    .line 45
    invoke-virtual {p0, v0}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putInt(I)V

    .line 46
    invoke-virtual {p0, p2}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putBool(Z)V

    .line 47
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->write()Z

    move-result p0

    .line 48
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->close()V

    .line 49
    monitor-exit p1

    return p0

    :catchall_0
    move-exception p0

    .line 50
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public debugMnldRadioMsg(Lcom/mediatek/socket/base/UdpClient;Ljava/lang/String;)Z
    .locals 2

    .line 54
    monitor-enter p1

    .line 55
    :try_start_0
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->connect()Z

    move-result p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 56
    monitor-exit p1

    return v0

    .line 58
    :cond_0
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->getBuff()Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;

    move-result-object p0

    const/16 v1, 0x131

    .line 59
    invoke-virtual {p0, v1}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putInt(I)V

    const/4 v1, 0x2

    .line 60
    invoke-virtual {p0, v1}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putInt(I)V

    const/16 v1, 0xa

    .line 61
    invoke-static {p2, v1, v0}, Lcom/mediatek/socket/base/SocketUtils;->assertSize(Ljava/lang/Object;II)V

    .line 62
    invoke-virtual {p0, p2}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putString(Ljava/lang/String;)V

    .line 63
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->write()Z

    move-result p0

    .line 64
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->close()V

    .line 65
    monitor-exit p1

    return p0

    :catchall_0
    move-exception p0

    .line 66
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

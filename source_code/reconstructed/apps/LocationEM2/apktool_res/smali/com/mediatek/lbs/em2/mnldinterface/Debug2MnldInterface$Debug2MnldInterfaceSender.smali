.class public Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;
.super Ljava/lang/Object;
.source "Debug2MnldInterface.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public debugMnldNeMsg(Lcom/mediatek/socket/base/UdpClient;Z)Z
    .locals 1

    .line 37
    monitor-enter p1

    .line 38
    :try_start_0
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->connect()Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    .line 39
    monitor-exit p1

    return p0

    .line 41
    :cond_0
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->getBuff()Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;

    move-result-object p0

    const/16 v0, 0x131

    .line 42
    invoke-virtual {p0, v0}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putInt(I)V

    const/4 v0, 0x1

    .line 43
    invoke-virtual {p0, v0}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putInt(I)V

    .line 44
    invoke-virtual {p0, p2}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putBool(Z)V

    .line 45
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->write()Z

    move-result p0

    .line 46
    invoke-virtual {p1}, Lcom/mediatek/socket/base/UdpClient;->close()V

    .line 47
    monitor-exit p1

    return p0

    :catchall_0
    move-exception p0

    .line 48
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

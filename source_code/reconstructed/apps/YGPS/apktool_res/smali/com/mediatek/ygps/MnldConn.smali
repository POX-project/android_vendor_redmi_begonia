.class public Lcom/mediatek/ygps/MnldConn;
.super Ljava/lang/Object;
.source "MnldConn.java"


# instance fields
.field private mToMnldSender:Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

.field private mUdpClient:Lcom/mediatek/socket/base/UdpClient;


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    new-instance v0, Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    invoke-direct {v0}, Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/MnldConn;->mToMnldSender:Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    .line 26
    new-instance v0, Lcom/mediatek/socket/base/UdpClient;

    sget-object v1, Landroid/net/LocalSocketAddress$Namespace;->ABSTRACT:Landroid/net/LocalSocketAddress$Namespace;

    const-string v2, "mtk_debugService2mnld"

    const/16 v3, 0x17

    invoke-direct {v0, v2, v1, v3}, Lcom/mediatek/socket/base/UdpClient;-><init>(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;I)V

    iput-object v0, p0, Lcom/mediatek/ygps/MnldConn;->mUdpClient:Lcom/mediatek/socket/base/UdpClient;

    return-void
.end method


# virtual methods
.method setMnldProp(Ljava/lang/String;)V
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/mediatek/ygps/MnldConn;->mToMnldSender:Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    iget-object p0, p0, Lcom/mediatek/ygps/MnldConn;->mUdpClient:Lcom/mediatek/socket/base/UdpClient;

    invoke-virtual {v0, p0, p1}, Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;->debugMnldRadioMsg(Lcom/mediatek/socket/base/UdpClient;Ljava/lang/String;)Z

    return-void
.end method

.method setTriggerNe(Z)V
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/mediatek/ygps/MnldConn;->mToMnldSender:Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    iget-object p0, p0, Lcom/mediatek/ygps/MnldConn;->mUdpClient:Lcom/mediatek/socket/base/UdpClient;

    invoke-virtual {v0, p0, p1}, Lcom/mediatek/ygps/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;->debugMnldNeMsg(Lcom/mediatek/socket/base/UdpClient;Z)Z

    return-void
.end method

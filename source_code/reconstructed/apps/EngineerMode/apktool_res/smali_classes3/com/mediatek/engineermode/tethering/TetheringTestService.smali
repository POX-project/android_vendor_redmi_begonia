.class public Lcom/mediatek/engineermode/tethering/TetheringTestService;
.super Landroid/app/Service;
.source "TetheringTestService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;
    }
.end annotation


# static fields
.field private static final EVENT_TEST_STATE_CHANGED:I = 0x0

.field private static final TAG:Ljava/lang/String; = "TetheringTestService"

.field private static sConnMgr:Landroid/net/ConnectivityManager;

.field private static sTetherHandler:Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;


# instance fields
.field private final mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private mContext:Landroid/content/Context;

.field private mCurrentNetwork:Landroid/net/Network;

.field private mDownIface:Ljava/lang/String;

.field private mIsNetworkAvailable:Z

.field private mIsNsIotCmdSent:Z

.field private mIsTetheringOn:Z

.field private final mNetworkCallback:Landroid/net/ConnectivityManager$NetworkCallback;

.field private mUpstreamIface:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 33
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 42
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    .line 43
    iput-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    .line 184
    new-instance v0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;-><init>(Lcom/mediatek/engineermode/tethering/TetheringTestService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mNetworkCallback:Landroid/net/ConnectivityManager$NetworkCallback;

    .line 218
    new-instance v0, Lcom/mediatek/engineermode/tethering/TetheringTestService$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/tethering/TetheringTestService$2;-><init>(Lcom/mediatek/engineermode/tethering/TetheringTestService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Landroid/net/Network;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 33
    iget-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mCurrentNetwork:Landroid/net/Network;

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/tethering/TetheringTestService;Landroid/net/Network;)Landroid/net/Network;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;
    .param p1, "x1"    # Landroid/net/Network;

    .line 33
    iput-object p1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mCurrentNetwork:Landroid/net/Network;

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 33
    iget-boolean v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsNetworkAvailable:Z

    return v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;
    .param p1, "x1"    # Z

    .line 33
    iput-boolean p1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsNetworkAvailable:Z

    return p1
.end method

.method static synthetic access$200()Landroid/net/ConnectivityManager;
    .locals 1

    .line 33
    sget-object v0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 33
    iget-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$400()Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;
    .locals 1

    .line 33
    sget-object v0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sTetherHandler:Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 33
    iget-boolean v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsTetheringOn:Z

    return v0
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;
    .param p1, "x1"    # Z

    .line 33
    iput-boolean p1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsTetheringOn:Z

    return p1
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;
    .param p1, "x1"    # Z

    .line 33
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->enableNsIotTest(Z)V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 33
    iget-boolean v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsNsIotCmdSent:Z

    return v0
.end method

.method static synthetic access$702(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;
    .param p1, "x1"    # Z

    .line 33
    iput-boolean p1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsNsIotCmdSent:Z

    return p1
.end method

.method private enableNsIotTest(Z)V
    .locals 11
    .param p1, "enabled"    # Z

    .line 125
    const-string v0, "vendor.net.rndis.client"

    const-string v1, "netdagent firewall get_usb_client "

    sget-object v2, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    invoke-virtual {v2}, Landroid/net/ConnectivityManager;->getTetheredIfaces()[Ljava/lang/String;

    move-result-object v2

    .line 126
    .local v2, "tethered":[Ljava/lang/String;
    array-length v3, v2

    const-string v4, "TetheringTestService"

    const/4 v5, 0x1

    if-eq v3, v5, :cond_0

    .line 127
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "tethered iface:"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v5, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 129
    :cond_0
    const/4 v3, 0x0

    aget-object v3, v2, v3

    iput-object v3, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    .line 132
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mCurrentNetwork:Landroid/net/Network;

    if-eqz v3, :cond_2

    .line 133
    sget-object v5, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    invoke-virtual {v5, v3}, Landroid/net/ConnectivityManager;->getLinkProperties(Landroid/net/Network;)Landroid/net/LinkProperties;

    move-result-object v3

    .line 134
    .local v3, "link":Landroid/net/LinkProperties;
    if-eqz v3, :cond_1

    .line 135
    invoke-virtual {v3}, Landroid/net/LinkProperties;->getInterfaceName()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    goto :goto_1

    .line 137
    :cond_1
    const-string v5, "No interface for upstreaming"

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    .end local v3    # "link":Landroid/net/LinkProperties;
    :goto_1
    goto :goto_2

    .line 140
    :cond_2
    const-string v3, "Current network is null"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    :goto_2
    iget-object v3, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    if-eqz v3, :cond_7

    iget-object v3, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    if-nez v3, :cond_3

    goto/16 :goto_5

    .line 148
    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Upstream iface:"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " downstream iface:"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    :try_start_0
    invoke-static {}, Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;->getService()Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;

    move-result-object v3

    .line 154
    .local v3, "agent":Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;
    if-nez v3, :cond_4

    .line 155
    const-string v0, "agnet is null"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    return-void

    .line 158
    :cond_4
    const-string v5, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 159
    .local v5, "cmd":Ljava/lang/String;
    const-string v6, " "

    if-eqz p1, :cond_6

    .line 161
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-interface {v3, v7}, Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;->dispatchNetdagentCmd(Ljava/lang/String;)Z

    .line 162
    const-wide/16 v7, 0x1f4

    invoke-static {v7, v8}, Ljava/lang/Thread;->sleep(J)V

    .line 163
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 164
    .local v9, "ipaddr":Ljava/lang/String;
    invoke-virtual {v9}, Ljava/lang/String;->length()I

    move-result v10

    if-nez v10, :cond_5

    .line 165
    invoke-static {v7, v8}, Ljava/lang/Thread;->sleep(J)V

    .line 166
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v1}, Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;->dispatchNetdagentCmd(Ljava/lang/String;)Z

    .line 167
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    move-object v9, v0

    .line 169
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ipaddr from vendor.net.rndis.client:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "netdagent firewall set_udp_forwarding "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 173
    .end local v5    # "cmd":Ljava/lang/String;
    .end local v9    # "ipaddr":Ljava/lang/String;
    .local v0, "cmd":Ljava/lang/String;
    goto :goto_3

    .line 174
    .end local v0    # "cmd":Ljava/lang/String;
    .restart local v5    # "cmd":Ljava/lang/String;
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "netdagent firewall clear_udp_forwarding "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mDownIface:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mUpstreamIface:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 177
    .end local v5    # "cmd":Ljava/lang/String;
    .restart local v0    # "cmd":Ljava/lang/String;
    :goto_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Send "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    invoke-interface {v3, v0}, Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;->dispatchNetdagentCmd(Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 181
    nop

    .end local v0    # "cmd":Ljava/lang/String;
    .end local v3    # "agent":Lvendor/mediatek/hardware/netdagent/V1_0/INetdagent;
    goto :goto_4

    .line 179
    :catch_0
    move-exception v0

    .line 180
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 182
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_4
    return-void

    .line 144
    :cond_7
    :goto_5
    const-string v0, "network interface is not ready"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    return-void
.end method

.method private init()V
    .locals 5

    .line 91
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 92
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "android.net.conn.TETHER_STATE_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 93
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 95
    sget-object v1, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    iget-object v2, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mNetworkCallback:Landroid/net/ConnectivityManager$NetworkCallback;

    invoke-virtual {v1, v2}, Landroid/net/ConnectivityManager;->registerDefaultNetworkCallback(Landroid/net/ConnectivityManager$NetworkCallback;)V

    .line 96
    sget-object v1, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetwork()Landroid/net/Network;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mCurrentNetwork:Landroid/net/Network;

    .line 97
    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    iput-boolean v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsNetworkAvailable:Z

    .line 98
    sget-object v1, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getTetheredIfaces()[Ljava/lang/String;

    move-result-object v1

    .line 99
    .local v1, "tethered":[Ljava/lang/String;
    array-length v4, v1

    if-eqz v4, :cond_1

    goto :goto_1

    :cond_1
    move v2, v3

    :goto_1
    iput-boolean v2, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsTetheringOn:Z

    .line 100
    iput-boolean v3, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mIsNsIotCmdSent:Z

    .line 102
    sget-object v2, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sTetherHandler:Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->sendEmptyMessage(I)Z

    .line 103
    return-void
.end method

.method private uninit()V
    .locals 2

    .line 106
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->enableNsIotTest(Z)V

    .line 107
    iget-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 108
    sget-object v0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mNetworkCallback:Landroid/net/ConnectivityManager$NetworkCallback;

    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->unregisterNetworkCallback(Landroid/net/ConnectivityManager$NetworkCallback;)V

    .line 109
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 113
    const/4 v0, 0x0

    return-object v0
.end method

.method public onCreate()V
    .locals 4

    .line 56
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 58
    invoke-virtual {p0}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mContext:Landroid/content/Context;

    .line 59
    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    sput-object v0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sConnMgr:Landroid/net/ConnectivityManager;

    .line 61
    invoke-virtual {p0}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService;->mContext:Landroid/content/Context;

    .line 63
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "TetheringTestService"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    .line 64
    .local v0, "tetherThread":Landroid/os/HandlerThread;
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 65
    new-instance v2, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;-><init>(Lcom/mediatek/engineermode/tethering/TetheringTestService;Landroid/os/Looper;)V

    sput-object v2, Lcom/mediatek/engineermode/tethering/TetheringTestService;->sTetherHandler:Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;

    .line 67
    const-string v2, "onCreate"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->init()V

    .line 69
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 118
    invoke-direct {p0}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->uninit()V

    .line 119
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 120
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 9
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 73
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 74
    .local v0, "action":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onStartCommand:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "TetheringTestService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    const-string v1, "TetheringTestService"

    .line 76
    .local v1, "channelId":Ljava/lang/String;
    const/4 v3, 0x1

    .line 77
    .local v3, "notificationId":I
    const-class v4, Landroid/app/NotificationManager;

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->getSystemService(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/app/NotificationManager;

    .line 78
    .local v4, "nm":Landroid/app/NotificationManager;
    new-instance v5, Landroid/app/NotificationChannel;

    const/4 v6, 0x2

    invoke-direct {v5, v2, v2, v6}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 80
    .local v5, "nc":Landroid/app/NotificationChannel;
    invoke-virtual {v4, v5}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 81
    new-instance v6, Landroid/app/Notification$Builder;

    invoke-direct {v6, p0}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    .line 82
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Landroid/app/Notification$Builder;->setWhen(J)Landroid/app/Notification$Builder;

    move-result-object v6

    .line 83
    invoke-virtual {v6, v2}, Landroid/app/Notification$Builder;->setChannelId(Ljava/lang/String;)Landroid/app/Notification$Builder;

    move-result-object v6

    .line 84
    const v7, 0x1080555

    invoke-virtual {v6, v7}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object v6

    .line 85
    invoke-virtual {v6, v2}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v2

    .line 86
    .local v2, "nb":Landroid/app/Notification$Builder;
    invoke-virtual {v2}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v6

    const/4 v7, 0x1

    invoke-virtual {p0, v7, v6}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->startForeground(ILandroid/app/Notification;)V

    .line 87
    return v7
.end method

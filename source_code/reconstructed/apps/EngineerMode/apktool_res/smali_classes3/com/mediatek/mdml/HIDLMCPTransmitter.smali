.class Lcom/mediatek/mdml/HIDLMCPTransmitter;
.super Ljava/lang/Object;
.source "HIDLMCPTransmitter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/HIDLMCPTransmitter"


# instance fields
.field mHidlDeathRecepient:Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;

.field private m_connection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

.field private m_serviceName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2
    .param p1, "szServiceName"    # Ljava/lang/String;

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 89
    new-instance v0, Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;

    invoke-direct {v0, p0}, Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;-><init>(Lcom/mediatek/mdml/HIDLMCPTransmitter;)V

    iput-object v0, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->mHidlDeathRecepient:Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;

    .line 29
    const-string v0, "MDML/HIDLMCPTransmitter"

    const-string v1, "HIDLMCPTransmitter constructor"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 30
    if-eqz p1, :cond_0

    .line 31
    iput-object p1, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->m_serviceName:Ljava/lang/String;

    .line 33
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/mdml/HIDLMCPTransmitter;->connectMDMHIDL()V

    .line 34
    const-string v1, "HIDLMCPTransmitter constructor done"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 35
    return-void
.end method


# virtual methods
.method public declared-synchronized Send(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z
    .locals 3
    .param p1, "cmd"    # Lcom/mediatek/mdml/MCPInfo;
    .param p2, "reply"    # Lcom/mediatek/mdml/MCPInfo;

    monitor-enter p0

    .line 67
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 68
    monitor-exit p0

    return v0

    .line 70
    :cond_0
    :try_start_0
    const-string v1, "MDML/HIDLMCPTransmitter"

    const-string v2, "Send HIDL MCP CMD start ..."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 71
    iget-object v1, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->m_connection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    invoke-static {v1, p1, p2}, Lcom/mediatek/mdml/MCPHandler;->WriteToHIDLService(Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 72
    const-string v0, "MDML/HIDLMCPTransmitter"

    const-string v1, "Send HIDL MCP CMD ok"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 73
    const/4 v0, 0x1

    monitor-exit p0

    return v0

    .line 75
    .end local p0    # "this":Lcom/mediatek/mdml/HIDLMCPTransmitter;
    :cond_1
    :try_start_1
    const-string v1, "MDML/HIDLMCPTransmitter"

    const-string v2, "Send HIDL MCP CMD error"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 76
    monitor-exit p0

    return v0

    .line 66
    .end local p1    # "cmd":Lcom/mediatek/mdml/MCPInfo;
    .end local p2    # "reply":Lcom/mediatek/mdml/MCPInfo;
    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public connectMDMHIDL()V
    .locals 6

    .line 40
    const-string v0, "MDML/HIDLMCPTransmitter"

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "connectMDMHIDL"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 41
    const/4 v2, 0x1

    invoke-static {v2}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->getService(Z)Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->m_connection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    .line 42
    iget-object v3, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->mHidlDeathRecepient:Lcom/mediatek/mdml/HIDLMCPTransmitter$TransmitterDeathRecipient;

    const-wide/16 v4, 0x0

    invoke-interface {v2, v3, v4, v5}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z

    .line 43
    const-string v2, "connectMDMHIDL done!"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/util/NoSuchElementException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 48
    :catch_0
    move-exception v2

    .line 49
    .local v2, "e":Ljava/util/NoSuchElementException;
    invoke-virtual {v2}, Ljava/util/NoSuchElementException;->printStackTrace()V

    .line 50
    const-string v3, "IMDMonitorService NoSuchElementException ..."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 51
    iput-object v1, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->m_connection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    goto :goto_1

    .line 44
    .end local v2    # "e":Ljava/util/NoSuchElementException;
    :catch_1
    move-exception v2

    .line 45
    .local v2, "e":Landroid/os/RemoteException;
    invoke-virtual {v2}, Landroid/os/RemoteException;->printStackTrace()V

    .line 46
    const-string v3, "IMDMonitorService RemoteException ..."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 47
    iput-object v1, p0, Lcom/mediatek/mdml/HIDLMCPTransmitter;->m_connection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    .line 52
    .end local v2    # "e":Landroid/os/RemoteException;
    :goto_0
    nop

    .line 53
    :goto_1
    return-void
.end method

.class Lcom/mediatek/mdml/MDMonitorClientCallback;
.super Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback$Stub;
.source "MDMonitorClientCallback.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/MDMonitorClientCallback"


# instance fields
.field private m_mcpHandlerInstance:Lcom/mediatek/mdml/HIDLHandlerInterface;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 53
    invoke-direct {p0}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorClientCallback$Stub;-><init>()V

    .line 54
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/MDMonitorClientCallback;->m_mcpHandlerInstance:Lcom/mediatek/mdml/HIDLHandlerInterface;

    .line 55
    return-void
.end method


# virtual methods
.method public MCPReceiver(Ljava/util/ArrayList;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)Z"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 73
    .local p1, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    iget-object v0, p0, Lcom/mediatek/mdml/MDMonitorClientCallback;->m_mcpHandlerInstance:Lcom/mediatek/mdml/HIDLHandlerInterface;

    const-string v1, "MDML/MDMonitorClientCallback"

    if-eqz v0, :cond_0

    .line 74
    invoke-interface {v0, p1}, Lcom/mediatek/mdml/HIDLHandlerInterface;->DataIn(Ljava/util/ArrayList;)Z

    .line 75
    const-string v0, "MCPReceiver end"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 76
    const/4 v0, 0x1

    return v0

    .line 78
    :cond_0
    const-string v0, "MCPReceiver end without handler"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    const/4 v0, 0x0

    return v0
.end method

.method public SetMCPHandler(Lcom/mediatek/mdml/HIDLHandlerInterface;)V
    .locals 0
    .param p1, "handlerInstance"    # Lcom/mediatek/mdml/HIDLHandlerInterface;

    .line 64
    iput-object p1, p0, Lcom/mediatek/mdml/MDMonitorClientCallback;->m_mcpHandlerInstance:Lcom/mediatek/mdml/HIDLHandlerInterface;

    .line 65
    return-void
.end method

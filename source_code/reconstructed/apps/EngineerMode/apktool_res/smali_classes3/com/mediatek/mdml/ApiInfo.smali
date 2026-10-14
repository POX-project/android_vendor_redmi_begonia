.class Lcom/mediatek/mdml/ApiInfo;
.super Ljava/lang/Object;
.source "ApiInfo.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/mdml/ApiInfo$CmdApiMap;
    }
.end annotation


# instance fields
.field private cmdTable:[Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

.field private m_api:Ljava/lang/String;

.field private m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field private m_method:Ljava/lang/String;

.field private m_version:I


# direct methods
.method public constructor <init>(Lcom/mediatek/mdml/MONITOR_CMD_CODE;)V
    .locals 7
    .param p1, "code"    # Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 136
    const/4 v0, 0x7

    new-array v0, v0, [Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CREATE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v3, "MDMonitor.Session"

    const-string v4, "create"

    invoke-direct {v1, p0, v2, v3, v4}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CLOSE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "close"

    invoke-direct {v1, p0, v4, v3, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x1

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_SUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "MDMonitor.Trap"

    const-string v6, "subscribe"

    invoke-direct {v1, p0, v4, v5, v6}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x2

    aput-object v1, v0, v4

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v6, "unsubscribe"

    invoke-direct {v1, p0, v4, v5, v6}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x3

    aput-object v1, v0, v4

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_ENABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v6, "enable"

    invoke-direct {v1, p0, v4, v5, v6}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x4

    aput-object v1, v0, v4

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_DISABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v6, "disable"

    invoke-direct {v1, p0, v4, v5, v6}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x5

    aput-object v1, v0, v4

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_RECEIVER_SET:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "MDMonitor.Trap.Receiver"

    const-string v6, "set"

    invoke-direct {v1, p0, v4, v5, v6}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x6

    aput-object v1, v0, v4

    iput-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->cmdTable:[Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    .line 54
    iput v2, p0, Lcom/mediatek/mdml/ApiInfo;->m_version:I

    .line 55
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/mdml/ApiInfo;->m_api:Ljava/lang/String;

    .line 56
    iput-object v1, p0, Lcom/mediatek/mdml/ApiInfo;->m_method:Ljava/lang/String;

    .line 57
    iput-object p1, p0, Lcom/mediatek/mdml/ApiInfo;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 59
    array-length v1, v0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v4, v0, v2

    .line 60
    .local v4, "aCmdTable":Lcom/mediatek/mdml/ApiInfo$CmdApiMap;
    iget-object v5, v4, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    invoke-virtual {p1, v5}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 61
    iget-object v0, v4, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_szApi:Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_api:Ljava/lang/String;

    .line 62
    iget-object v0, v4, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_szMethod:Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_method:Ljava/lang/String;

    .line 63
    iput v3, p0, Lcom/mediatek/mdml/ApiInfo;->m_version:I

    .line 64
    return-void

    .line 59
    .end local v4    # "aCmdTable":Lcom/mediatek/mdml/ApiInfo$CmdApiMap;
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 67
    :cond_1
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "szApi"    # Ljava/lang/String;
    .param p2, "szMethod"    # Ljava/lang/String;

    .line 20
    const/4 v0, 0x1

    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/mdml/ApiInfo;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    .line 21
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 6
    .param p1, "szApi"    # Ljava/lang/String;
    .param p2, "szMethod"    # Ljava/lang/String;
    .param p3, "version"    # I

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 136
    const/4 v0, 0x7

    new-array v0, v0, [Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CREATE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v3, "MDMonitor.Session"

    const-string v4, "create"

    invoke-direct {v1, p0, v2, v3, v4}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CLOSE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "close"

    invoke-direct {v1, p0, v4, v3, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x1

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v3, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_SUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v4, "MDMonitor.Trap"

    const-string v5, "subscribe"

    invoke-direct {v1, p0, v3, v4, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x2

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v3, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "unsubscribe"

    invoke-direct {v1, p0, v3, v4, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x3

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v3, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_ENABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "enable"

    invoke-direct {v1, p0, v3, v4, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x4

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v3, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_DISABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v5, "disable"

    invoke-direct {v1, p0, v3, v4, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x5

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    sget-object v3, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_RECEIVER_SET:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v4, "MDMonitor.Trap.Receiver"

    const-string v5, "set"

    invoke-direct {v1, p0, v3, v4, v5}, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;-><init>(Lcom/mediatek/mdml/ApiInfo;Lcom/mediatek/mdml/MONITOR_CMD_CODE;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x6

    aput-object v1, v0, v3

    iput-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->cmdTable:[Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    .line 33
    iput p3, p0, Lcom/mediatek/mdml/ApiInfo;->m_version:I

    .line 34
    iput-object p1, p0, Lcom/mediatek/mdml/ApiInfo;->m_api:Ljava/lang/String;

    .line 35
    iput-object p2, p0, Lcom/mediatek/mdml/ApiInfo;->m_method:Ljava/lang/String;

    .line 36
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_UNDEFINED:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    iput-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 38
    iget-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->cmdTable:[Lcom/mediatek/mdml/ApiInfo$CmdApiMap;

    array-length v1, v0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 39
    .local v3, "aCmdTable":Lcom/mediatek/mdml/ApiInfo$CmdApiMap;
    iget-object v4, v3, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_szApi:Ljava/lang/String;

    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    iget-object v4, v3, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_szMethod:Ljava/lang/String;

    .line 40
    invoke-virtual {p2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 41
    iget-object v0, v3, Lcom/mediatek/mdml/ApiInfo$CmdApiMap;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    iput-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 42
    return-void

    .line 38
    .end local v3    # "aCmdTable":Lcom/mediatek/mdml/ApiInfo$CmdApiMap;
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 46
    :cond_1
    return-void
.end method


# virtual methods
.method public GetApi()Ljava/lang/String;
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_api:Ljava/lang/String;

    return-object v0
.end method

.method public GetCmdCode()Lcom/mediatek/mdml/MONITOR_CMD_CODE;
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_cmdCode:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    return-object v0
.end method

.method public GetMethod()Ljava/lang/String;
    .locals 1

    .line 91
    iget-object v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_method:Ljava/lang/String;

    return-object v0
.end method

.method public GetVersion()I
    .locals 1

    .line 99
    iget v0, p0, Lcom/mediatek/mdml/ApiInfo;->m_version:I

    return v0
.end method

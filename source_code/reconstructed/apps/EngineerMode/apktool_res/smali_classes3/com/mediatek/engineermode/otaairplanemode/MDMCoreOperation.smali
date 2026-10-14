.class public Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
.super Ljava/lang/Object;
.source "MDMCoreOperation.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$UnSubscribeTask;,
        Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$SubscribeTask;,
        Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;,
        Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;,
        Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;
    }
.end annotation


# static fields
.field public static final MDM_SERVICE_INIT:I = 0x0

.field public static final MSG_UPDATE_UI_URC:I = 0x7

.field private static final SERVICE_NAME:Ljava/lang/String; = "md_monitor"

.field public static final SUBSCRIBE_DONE:I = 0x1

.field private static final SZ_SERVER_NAME:Ljava/lang/String; = "demo_receiver"

.field private static final TAG:Ljava/lang/String; = "MDMCoreOperation"

.field public static final UNSUBSCRIBE_DONE:I = 0x4

.field public static final UPDATE_INTERVAL:I = 0x32

.field private static final WAIT_TIMEOUT:I = 0xbb8

.field private static single:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;


# instance fields
.field private mCheckedEmInteger:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private mComponents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;",
            ">;"
        }
    .end annotation
.end field

.field private mMDMChangedListener:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;

.field private mSimTypeShow:I

.field public mUpdateUiHandler:Landroid/os/Handler;

.field private m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

.field private m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

.field private m_sid:J

.field private m_trapReceiver:Lcom/mediatek/mdml/MonitorTrapReceiver;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->single:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mUpdateUiHandler:Landroid/os/Handler;

    .line 61
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mSimTypeShow:I

    .line 62
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mComponents:Ljava/util/List;

    .line 63
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    .line 67
    return-void
.end method

.method private InitDecoder(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 148
    const/4 v0, 0x0

    :try_start_0
    invoke-static {v0, p1}, Lcom/mediatek/mdml/PlainDataDecoder;->getInstance(Ljava/lang/String;Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 151
    goto :goto_0

    .line 149
    :catch_0
    move-exception v0

    .line 150
    .local v0, "ex":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 152
    .end local v0    # "ex":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method private InitMDML(Landroid/content/Context;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;

    .line 139
    new-instance v0, Lcom/mediatek/mdml/MonitorCmdProxy;

    invoke-direct {v0, p1}, Lcom/mediatek/mdml/MonitorCmdProxy;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    .line 140
    invoke-virtual {v0}, Lcom/mediatek/mdml/MonitorCmdProxy;->onCreateSession()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    .line 141
    new-instance v2, Lcom/mediatek/mdml/MonitorTrapReceiver;

    const-string v3, "demo_receiver"

    invoke-direct {v2, v0, v1, v3}, Lcom/mediatek/mdml/MonitorTrapReceiver;-><init>(JLjava/lang/String;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_trapReceiver:Lcom/mediatek/mdml/MonitorTrapReceiver;

    .line 142
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;)V

    invoke-virtual {v2, v0}, Lcom/mediatek/mdml/MonitorTrapReceiver;->SetTrapHandler(Lcom/mediatek/mdml/TrapHandlerInterface;)V

    .line 143
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSetTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 144
    return-void
.end method

.method private StartMDLService()V
    .locals 6

    .line 121
    const-string v0, "md_monitor"

    invoke-static {v0}, Landroid/os/SystemService;->isRunning(Ljava/lang/String;)Z

    move-result v1

    .line 122
    .local v1, "isRunning":Z
    if-nez v1, :cond_0

    .line 123
    const-string v2, "MDMCoreOperation"

    const-string v3, "start md_monitor prop"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    const-string v3, "ctl.start"

    invoke-static {v3, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    :try_start_0
    sget-object v3, Landroid/os/SystemService$State;->RUNNING:Landroid/os/SystemService$State;

    const-wide/16 v4, 0xbb8

    .line 127
    invoke-static {v0, v3, v4, v5}, Landroid/os/SystemService;->waitForState(Ljava/lang/String;Landroid/os/SystemService$State;J)V
    :try_end_0
    .catch Ljava/util/concurrent/TimeoutException; {:try_start_0 .. :try_end_0} :catch_0

    .line 130
    goto :goto_0

    .line 128
    :catch_0
    move-exception v3

    .line 129
    .local v3, "e":Ljava/util/concurrent/TimeoutException;
    invoke-virtual {v3}, Ljava/util/concurrent/TimeoutException;->printStackTrace()V

    .line 131
    .end local v3    # "e":Ljava/util/concurrent/TimeoutException;
    :goto_0
    invoke-static {v0}, Landroid/os/SystemService;->isRunning(Ljava/lang/String;)Z

    move-result v1

    .line 132
    if-nez v1, :cond_0

    .line 133
    const-string v0, "start md_monitor failed time out"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    :cond_0
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)Lcom/mediatek/mdml/PlainDataDecoder;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mMDMChangedListener:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->subscribeTrap()V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->unSubscribeTrap()V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mSimTypeShow:I

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->StartMDLService()V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Landroid/content/Context;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
    .param p1, "x1"    # Landroid/content/Context;

    .line 28
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->InitMDML(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Landroid/content/Context;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
    .param p1, "x1"    # Landroid/content/Context;

    .line 28
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->InitDecoder(Landroid/content/Context;)V

    return-void
.end method

.method public static declared-synchronized getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
    .locals 2

    const-class v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    monitor-enter v0

    .line 70
    :try_start_0
    sget-object v1, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->single:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    if-nez v1, :cond_0

    .line 71
    new-instance v1, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-direct {v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->single:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 73
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->single:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    .line 69
    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private subscribeTrap()V
    .locals 10

    .line 156
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mComponents:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    const-string v2, "MDMCoreOperation"

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;

    .line 158
    .local v1, "com":Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;
    invoke-virtual {v1}, Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v3

    .line 159
    .local v3, "emComponentName":[Ljava/lang/String;
    const/4 v4, 0x0

    .local v4, "j":I
    :goto_1
    array-length v5, v3

    if-ge v4, v5, :cond_2

    .line 160
    iget-object v5, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    aget-object v6, v3, v4

    invoke-virtual {v5, v6}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    .line 161
    .local v5, "msgIdInt":Ljava/lang/Integer;
    if-eqz v5, :cond_0

    .line 162
    invoke-virtual {v5}, Ljava/lang/Integer;->longValue()J

    move-result-wide v6

    .line 167
    .local v6, "msgId":J
    iget-object v8, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_1

    .line 168
    iget-object v8, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 169
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "onSubscribeTrap msg Name = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v3, v4

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 164
    .end local v6    # "msgId":J
    :cond_0
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "The msgid is not support, msgName = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v3, v4

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    nop

    .line 159
    .end local v5    # "msgIdInt":Ljava/lang/Integer;
    :cond_1
    :goto_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 172
    .end local v1    # "com":Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;
    .end local v3    # "emComponentName":[Ljava/lang/String;
    .end local v4    # "j":I
    :cond_2
    goto :goto_0

    .line 173
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    .line 174
    .local v0, "size":I
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    new-array v3, v0, [Ljava/lang/Long;

    invoke-interface {v1, v3}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Long;

    .line 175
    .local v1, "array":[Ljava/lang/Long;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onSubscribeTrap msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    iget-object v2, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v3, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    sget-object v5, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v6

    invoke-virtual {v2, v3, v4, v5, v6}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 177
    return-void
.end method

.method private unSubscribeTrap()V
    .locals 8

    .line 187
    const-string v0, "MDMCoreOperation"

    const-string v1, "Before unSubscribeTrap.."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    .line 189
    .local v1, "size":I
    iget-object v2, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    new-array v3, v1, [Ljava/lang/Long;

    invoke-interface {v2, v3}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/Long;

    .line 190
    .local v2, "array":[Ljava/lang/Long;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "unSubscribeTrap msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v4, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    sget-object v6, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v7

    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mediatek/mdml/MonitorCmdProxy;->onUnsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 193
    const-string v3, "onDisableTrap.."

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v4, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    invoke-virtual {v3, v4, v5}, Lcom/mediatek/mdml/MonitorCmdProxy;->onDisableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v3

    .line 195
    .local v3, "ret":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    if-eq v4, v3, :cond_0

    .line 196
    const-string v4, "Disable Trap fail"

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    return-void

    .line 199
    :cond_0
    const-string v4, "Disable Trap succeed"

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    const-string v4, "ctl.stop"

    const-string v5, "md_monitor"

    invoke-static {v4, v5}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    const-string v4, "Disable mdm monitor"

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    return-void
.end method


# virtual methods
.method public getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I
    .locals 3
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "msgName"    # Ljava/lang/String;

    .line 206
    invoke-virtual {p1, p2}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    .line 207
    .local v0, "bData":[B
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([B)J

    move-result-wide v1

    long-to-int v1, v1

    .line 208
    .local v1, "iData":I
    return v1
.end method

.method public getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I
    .locals 3
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "msgName"    # Ljava/lang/String;
    .param p3, "sign"    # Z

    .line 212
    if-nez p3, :cond_0

    .line 213
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    return v0

    .line 215
    :cond_0
    invoke-virtual {p1, p2}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    .line 216
    .local v0, "bData":[B
    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([BZ)J

    move-result-wide v1

    long-to-int v1, v1

    .line 217
    .local v1, "iData":I
    return v1
.end method

.method public getSelectedComponents()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;",
            ">;"
        }
    .end annotation

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mComponents:Ljava/util/List;

    return-object v0
.end method

.method public mdmInitialize(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;)V

    const/4 v1, 0x1

    new-array v1, v1, [Landroid/content/Context;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 87
    return-void
.end method

.method public mdmParametersSeting(Ljava/util/List;I)V
    .locals 0
    .param p2, "simTypeShow"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;",
            ">;I)V"
        }
    .end annotation

    .line 77
    .local p1, "components":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mComponents:Ljava/util/List;

    .line 78
    iput p2, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mSimTypeShow:I

    .line 79
    return-void
.end method

.method public mdmlClosing()Z
    .locals 3

    .line 110
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/mdml/MonitorCmdProxy;->onCloseSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    move-object v1, v0

    .line 111
    .local v0, "ret":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v2, "MDMCoreOperation"

    if-eq v1, v0, :cond_0

    .line 112
    const-string v1, "Close Session fail"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    const/4 v1, 0x0

    return v1

    .line 115
    :cond_0
    const-string v1, "Close Session succeed"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    const/4 v1, 0x1

    return v1
.end method

.method public mdmlEnableSubscribe()V
    .locals 3

    .line 99
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->m_sid:J

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/mdml/MonitorCmdProxy;->onEnableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 102
    goto :goto_0

    .line 100
    :catch_0
    move-exception v0

    .line 101
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, "MDMCoreOperation"

    const-string v2, "MdmCoreOperation.m_cmdProxy.onEnableTrap failed "

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public mdmlSubscribe()V
    .locals 2

    .line 90
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$SubscribeTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$SubscribeTask;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;)V

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$SubscribeTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 91
    return-void
.end method

.method public mdmlUnSubscribe()V
    .locals 2

    .line 94
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$UnSubscribeTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$UnSubscribeTask;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;)V

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$UnSubscribeTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 95
    return-void
.end method

.method public setOnMDMChangedListener(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;)V
    .locals 0
    .param p1, "onMDMChangedListener"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;

    .line 82
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mMDMChangedListener:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;

    .line 83
    return-void
.end method

.method public varargs toPrimitives([Ljava/lang/Long;)[J
    .locals 4
    .param p1, "objects"    # [Ljava/lang/Long;

    .line 180
    array-length v0, p1

    new-array v0, v0, [J

    .line 181
    .local v0, "primitives":[J
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 182
    aget-object v2, p1, v1

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    aput-wide v2, v0, v1

    .line 181
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 183
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

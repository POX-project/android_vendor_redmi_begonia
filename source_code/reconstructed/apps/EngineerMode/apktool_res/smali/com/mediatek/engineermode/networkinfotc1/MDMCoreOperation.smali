.class public Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
.super Ljava/lang/Object;
.source "MDMCoreOperation.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$UnSubscribeTask;,
        Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;,
        Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$LoadingTask;,
        Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;,
        Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;
    }
.end annotation


# static fields
.field private static final MDM_PROP:Ljava/lang/String; = "persist.vendor.mdmmonitor"

.field public static final MDM_SERVICE_INIT:I = 0x0

.field public static final MSG_UPDATE_UI_URC:I = 0x7

.field private static final SERVICE_NAME:Ljava/lang/String; = "md_monitor"

.field public static final SUBSCRIBE_DONE:I = 0x1

.field private static final SZ_SERVER_NAME:Ljava/lang/String; = "demo_receiver"

.field private static final TAG:Ljava/lang/String; = "MDMCoreOperation"

.field public static final UNSUBSCRIBE_DONE:I = 0x4

.field public static final UPDATE_INTERVAL:I = 0x32

.field private static final WAIT_TIMEOUT:I = 0xbb8

.field private static single:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;


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
            "Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;",
            ">;"
        }
    .end annotation
.end field

.field private mMDMChangedListener:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;

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

    sput-object v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->single:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mUpdateUiHandler:Landroid/os/Handler;

    .line 61
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mSimTypeShow:I

    .line 62
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mComponents:Ljava/util/List;

    .line 63
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    .line 67
    return-void
.end method

.method private InitDecoder(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 151
    const/4 v0, 0x0

    :try_start_0
    invoke-static {v0, p1}, Lcom/mediatek/mdml/PlainDataDecoder;->getInstance(Ljava/lang/String;Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 154
    goto :goto_0

    .line 152
    :catch_0
    move-exception v0

    .line 153
    .local v0, "ex":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 155
    .end local v0    # "ex":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method private InitMDML(Landroid/content/Context;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;

    .line 142
    new-instance v0, Lcom/mediatek/mdml/MonitorCmdProxy;

    invoke-direct {v0, p1}, Lcom/mediatek/mdml/MonitorCmdProxy;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    .line 143
    invoke-virtual {v0}, Lcom/mediatek/mdml/MonitorCmdProxy;->onCreateSession()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

    .line 144
    new-instance v2, Lcom/mediatek/mdml/MonitorTrapReceiver;

    const-string v3, "demo_receiver"

    invoke-direct {v2, v0, v1, v3}, Lcom/mediatek/mdml/MonitorTrapReceiver;-><init>(JLjava/lang/String;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_trapReceiver:Lcom/mediatek/mdml/MonitorTrapReceiver;

    .line 145
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;)V

    invoke-virtual {v2, v0}, Lcom/mediatek/mdml/MonitorTrapReceiver;->SetTrapHandler(Lcom/mediatek/mdml/TrapHandlerInterface;)V

    .line 146
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSetTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 147
    return-void
.end method

.method private StartMDLService()V
    .locals 6

    .line 124
    const-string v0, "md_monitor"

    invoke-static {v0}, Landroid/os/SystemService;->isRunning(Ljava/lang/String;)Z

    move-result v1

    .line 125
    .local v1, "isRunning":Z
    if-nez v1, :cond_0

    .line 126
    const-string v2, "MDMCoreOperation"

    const-string v3, "start md_monitor prop"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 127
    const-string v3, "persist.vendor.mdmmonitor"

    const-string v4, "1"

    invoke-static {v3, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    :try_start_0
    sget-object v3, Landroid/os/SystemService$State;->RUNNING:Landroid/os/SystemService$State;

    const-wide/16 v4, 0xbb8

    .line 130
    invoke-static {v0, v3, v4, v5}, Landroid/os/SystemService;->waitForState(Ljava/lang/String;Landroid/os/SystemService$State;J)V
    :try_end_0
    .catch Ljava/util/concurrent/TimeoutException; {:try_start_0 .. :try_end_0} :catch_0

    .line 133
    goto :goto_0

    .line 131
    :catch_0
    move-exception v3

    .line 132
    .local v3, "e":Ljava/util/concurrent/TimeoutException;
    invoke-virtual {v3}, Ljava/util/concurrent/TimeoutException;->printStackTrace()V

    .line 134
    .end local v3    # "e":Ljava/util/concurrent/TimeoutException;
    :goto_0
    invoke-static {v0}, Landroid/os/SystemService;->isRunning(Ljava/lang/String;)Z

    move-result v1

    .line 135
    if-nez v1, :cond_0

    .line 136
    const-string v0, "start md_monitor failed time out"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    :cond_0
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)Lcom/mediatek/mdml/PlainDataDecoder;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 27
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 27
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mMDMChangedListener:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 27
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->subscribeTrap()V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 27
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->unSubscribeTrap()V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 27
    iget v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mSimTypeShow:I

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 27
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->StartMDLService()V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Landroid/content/Context;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
    .param p1, "x1"    # Landroid/content/Context;

    .line 27
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->InitMDML(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Landroid/content/Context;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
    .param p1, "x1"    # Landroid/content/Context;

    .line 27
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->InitDecoder(Landroid/content/Context;)V

    return-void
.end method

.method public static declared-synchronized getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
    .locals 2

    const-class v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    monitor-enter v0

    .line 70
    :try_start_0
    sget-object v1, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->single:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    if-nez v1, :cond_0

    .line 71
    new-instance v1, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-direct {v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->single:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    .line 73
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->single:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
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
    .locals 15

    .line 158
    const-wide/16 v0, 0x0

    .line 159
    .local v0, "msgId":J
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->clear()V

    .line 160
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mComponents:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    .line 161
    .local v3, "com":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v4

    .line 162
    .local v4, "emComponentName":[Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "j":I
    :goto_1
    array-length v6, v4

    if-ge v5, v6, :cond_2

    .line 163
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    aget-object v7, v4, v5

    invoke-virtual {v6, v7}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    .line 164
    .local v6, "msgIdInt":Ljava/lang/Integer;
    const-string v7, "MDMCoreOperation"

    if-eqz v6, :cond_0

    .line 165
    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v8

    int-to-long v8, v8

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    .line 170
    iget-object v8, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_1

    .line 171
    iget-object v8, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 172
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "onSubscribeTrap msg Name = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v4, v5

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    iget-object v9, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

    sget-object v12, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    move-wide v13, v0

    invoke-virtual/range {v9 .. v14}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    goto :goto_2

    .line 167
    :cond_0
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "The msgid is not support, msgName = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v4, v5

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    nop

    .line 162
    .end local v6    # "msgIdInt":Ljava/lang/Integer;
    :cond_1
    :goto_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 176
    .end local v3    # "com":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    .end local v4    # "emComponentName":[Ljava/lang/String;
    .end local v5    # "j":I
    :cond_2
    goto :goto_0

    .line 177
    :cond_3
    return-void
.end method

.method private unSubscribeTrap()V
    .locals 15

    .line 180
    const-wide/16 v0, 0x0

    .line 181
    .local v0, "msgId":J
    const-string v2, "MDMCoreOperation"

    const-string v3, "Before unSubscribeTrap.."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->clear()V

    .line 183
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mComponents:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    .line 184
    .local v4, "com":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    invoke-virtual {v4}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v5

    .line 185
    .local v5, "emComponentName":[Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "j":I
    :goto_1
    array-length v7, v5

    if-ge v6, v7, :cond_2

    .line 186
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    aget-object v8, v5, v6

    invoke-virtual {v7, v8}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    .line 187
    .local v7, "msgIdInt":Ljava/lang/Integer;
    if-eqz v7, :cond_0

    .line 188
    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v8

    int-to-long v8, v8

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    .line 193
    iget-object v8, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_1

    .line 194
    iget-object v8, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mCheckedEmInteger:Ljava/util/List;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 195
    iget-object v9, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

    sget-object v12, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    move-wide v13, v0

    invoke-virtual/range {v9 .. v14}, Lcom/mediatek/mdml/MonitorCmdProxy;->onUnsubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 196
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "unSubscribeTrap["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v9, "] = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v5, v6

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 190
    :cond_0
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "The msgid is not support, msgName = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v5, v6

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    nop

    .line 185
    .end local v7    # "msgIdInt":Ljava/lang/Integer;
    :cond_1
    :goto_2
    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    .line 199
    .end local v4    # "com":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    .end local v5    # "emComponentName":[Ljava/lang/String;
    .end local v6    # "j":I
    :cond_2
    goto/16 :goto_0

    .line 200
    :cond_3
    return-void
.end method


# virtual methods
.method public getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I
    .locals 3
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "msgName"    # Ljava/lang/String;

    .line 203
    invoke-virtual {p1, p2}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    .line 204
    .local v0, "bData":[B
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([B)J

    move-result-wide v1

    long-to-int v1, v1

    .line 205
    .local v1, "iData":I
    return v1
.end method

.method public getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I
    .locals 3
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "msgName"    # Ljava/lang/String;
    .param p3, "sign"    # Z

    .line 209
    if-nez p3, :cond_0

    .line 210
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    return v0

    .line 212
    :cond_0
    invoke-virtual {p1, p2}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    .line 213
    .local v0, "bData":[B
    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([BZ)J

    move-result-wide v1

    long-to-int v1, v1

    .line 214
    .local v1, "iData":I
    return v1
.end method

.method public getSelectedComponents()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;",
            ">;"
        }
    .end annotation

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mComponents:Ljava/util/List;

    return-object v0
.end method

.method public mdmInitialize(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$LoadingTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$LoadingTask;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;)V

    const/4 v1, 0x1

    new-array v1, v1, [Landroid/content/Context;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$LoadingTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

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
            "Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;",
            ">;I)V"
        }
    .end annotation

    .line 77
    .local p1, "components":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mComponents:Ljava/util/List;

    .line 78
    iput p2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mSimTypeShow:I

    .line 79
    return-void
.end method

.method public mdmlClosing()Z
    .locals 6

    .line 110
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/mdml/MonitorCmdProxy;->onDisableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    .line 111
    .local v0, "ret":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const/4 v2, 0x0

    const-string v3, "MDMCoreOperation"

    if-eq v1, v0, :cond_0

    .line 112
    const-string v1, "Disable Trap time out"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    return v2

    .line 115
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v4, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

    invoke-virtual {v1, v4, v5}, Lcom/mediatek/mdml/MonitorCmdProxy;->onCloseSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    .line 116
    sget-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    if-eq v1, v0, :cond_1

    .line 117
    const-string v1, "Close Session fail"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    return v2

    .line 120
    :cond_1
    const/4 v1, 0x1

    return v1
.end method

.method public mdmlEnableSubscribe()V
    .locals 3

    .line 99
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    iget-wide v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->m_sid:J

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
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;)V

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 91
    return-void
.end method

.method public mdmlUnSubscribe()V
    .locals 2

    .line 94
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$UnSubscribeTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$UnSubscribeTask;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;)V

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$UnSubscribeTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 95
    return-void
.end method

.method public setOnMDMChangedListener(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;)V
    .locals 0
    .param p1, "onMDMChangedListener"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;

    .line 82
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mMDMChangedListener:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;

    .line 83
    return-void
.end method

.class public Lcom/mediatek/engineermode/boot/EmBootStartService;
.super Landroid/app/Service;
.source "EmBootStartService.java"


# static fields
.field private static final KEY_REQ_START_SERV:Ljava/lang/String; = "req_start_serv"

.field private static final MSG_CHECK_STOP_SERVICE:I = 0x6f

.field private static final TAG:Ljava/lang/String; = "BootStartService"

.field private static sStartReqHandlerMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mediatek/engineermode/boot/IBootServiceHandler;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private mMainHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 23
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/boot/EmBootStartService;->sStartReqHandlerMap:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 26
    new-instance v0, Lcom/mediatek/engineermode/boot/EmBootStartService$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/boot/EmBootStartService$1;-><init>(Lcom/mediatek/engineermode/boot/EmBootStartService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/boot/EmBootStartService;->mMainHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000()Ljava/util/Map;
    .locals 1

    .line 18
    sget-object v0, Lcom/mediatek/engineermode/boot/EmBootStartService;->sStartReqHandlerMap:Ljava/util/Map;

    return-object v0
.end method

.method private onHandleRequest(Ljava/lang/String;)I
    .locals 2
    .param p1, "handlerName"    # Ljava/lang/String;

    .line 65
    sget-object v0, Lcom/mediatek/engineermode/boot/EmBootStartService;->sStartReqHandlerMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/boot/IBootServiceHandler;

    .line 66
    .local v0, "handler":Lcom/mediatek/engineermode/boot/IBootServiceHandler;
    if-nez v0, :cond_0

    .line 67
    const/16 v1, 0x64

    return v1

    .line 69
    :cond_0
    invoke-interface {v0, p0}, Lcom/mediatek/engineermode/boot/IBootServiceHandler;->handleStartRequest(Lcom/mediatek/engineermode/boot/EmBootStartService;)I

    move-result v1

    return v1
.end method

.method private stopStartedService(Lcom/mediatek/engineermode/boot/IBootServiceHandler;)V
    .locals 3
    .param p1, "handler"    # Lcom/mediatek/engineermode/boot/IBootServiceHandler;

    .line 55
    if-eqz p1, :cond_0

    .line 56
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getCanonicalName()Ljava/lang/String;

    move-result-object v0

    .line 57
    .local v0, "handlerName":Ljava/lang/String;
    const-class v1, Lcom/mediatek/engineermode/boot/EmBootStartService;

    monitor-enter v1

    .line 58
    :try_start_0
    sget-object v2, Lcom/mediatek/engineermode/boot/EmBootStartService;->sStartReqHandlerMap:Ljava/util/Map;

    invoke-interface {v2, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 59
    monitor-exit v1

    goto :goto_0

    :catchall_0
    move-exception v2

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v2

    .line 61
    .end local v0    # "handlerName":Ljava/lang/String;
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/boot/EmBootStartService;->mMainHandler:Landroid/os/Handler;

    const/16 v1, 0x6f

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 62
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 46
    const/4 v0, 0x0

    return-object v0
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 3
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 74
    if-eqz p1, :cond_0

    .line 75
    const-string v0, "req_start_serv"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 76
    .local v0, "handlerName":Ljava/lang/String;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/boot/EmBootStartService;->onHandleRequest(Ljava/lang/String;)I

    move-result v1

    .line 77
    .local v1, "ret":I
    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    .line 78
    sget-object v2, Lcom/mediatek/engineermode/boot/EmBootStartService;->sStartReqHandlerMap:Ljava/util/Map;

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/boot/IBootServiceHandler;

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/boot/EmBootStartService;->stopStartedService(Lcom/mediatek/engineermode/boot/IBootServiceHandler;)V

    .line 81
    .end local v0    # "handlerName":Ljava/lang/String;
    .end local v1    # "ret":I
    :cond_0
    const/4 v0, 0x2

    return v0
.end method

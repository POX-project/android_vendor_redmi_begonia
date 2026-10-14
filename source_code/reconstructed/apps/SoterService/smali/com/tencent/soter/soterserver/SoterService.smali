.class public Lcom/tencent/soter/soterserver/SoterService;
.super Landroid/app/Service;
.source "SoterService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/soter/soterserver/SoterService$ServiceStub;,
        Lcom/tencent/soter/soterserver/SoterService$UserAppUninstallReceiver;
    }
.end annotation


# instance fields
.field private final mBinder:Landroid/os/IBinder;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 29
    new-instance v0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

    invoke-direct {v0, p0, p0}, Lcom/tencent/soter/soterserver/SoterService$ServiceStub;-><init>(Lcom/tencent/soter/soterserver/SoterService;Lcom/tencent/soter/soterserver/SoterService;)V

    iput-object v0, p0, Lcom/tencent/soter/soterserver/SoterService;->mBinder:Landroid/os/IBinder;

    const-string p0, "SoterService"

    .line 32
    invoke-static {p0, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method static synthetic access$000(Lcom/tencent/soter/soterserver/SoterService;Ljava/util/List;)[B
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/tencent/soter/soterserver/SoterService;->listTobyte(Ljava/util/List;)[B

    move-result-object p0

    return-object p0
.end method

.method private listTobyte(Ljava/util/List;)[B
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Byte;",
            ">;)[B"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 374
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p0

    if-nez p0, :cond_0

    goto :goto_1

    .line 376
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p0

    new-array p0, p0, [B

    const/4 v0, 0x0

    .line 378
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Byte;

    .line 379
    invoke-virtual {v1}, Ljava/lang/Byte;->byteValue()B

    move-result v1

    aput-byte v1, p0, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-object p0

    :cond_2
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    const-string p1, "SoterService"

    const-string v0, "OnBind"

    .line 43
    invoke-static {p1, v0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 44
    iget-object p0, p0, Lcom/tencent/soter/soterserver/SoterService;->mBinder:Landroid/os/IBinder;

    return-object p0
.end method

.method public onCreate()V
    .locals 2

    const-string v0, "SoterService"

    const-string v1, "OnCreate"

    .line 37
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 38
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    const-string p0, "SoterService"

    const-string v0, "onDestroy"

    .line 49
    invoke-static {p0, v0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.class public Lorg/mipay/android/manager/MipayService;
.super Landroid/app/Service;
.source "MipayService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/mipay/android/manager/MipayService$MipayServiceStub;
    }
.end annotation


# instance fields
.field private mService:Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

.field private final mTidaBinder:Landroid/os/IBinder;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 23
    new-instance v0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;

    invoke-direct {v0, p0, p0}, Lorg/mipay/android/manager/MipayService$MipayServiceStub;-><init>(Lorg/mipay/android/manager/MipayService;Lorg/mipay/android/manager/MipayService;)V

    iput-object v0, p0, Lorg/mipay/android/manager/MipayService;->mTidaBinder:Landroid/os/IBinder;

    const-string p0, "MipayService"

    .line 27
    invoke-static {p0, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method static synthetic access$000(Lorg/mipay/android/manager/MipayService;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 20
    invoke-direct {p0}, Lorg/mipay/android/manager/MipayService;->initService()V

    return-void
.end method

.method static synthetic access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;
    .locals 0

    .line 20
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService;->mService:Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    return-object p0
.end method

.method private initService()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 49
    iget-object v0, p0, Lorg/mipay/android/manager/MipayService;->mService:Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    if-nez v0, :cond_0

    .line 50
    invoke-static {}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->getService()Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v0

    iput-object v0, p0, Lorg/mipay/android/manager/MipayService;->mService:Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    goto :goto_0

    :cond_0
    const-string p0, "MipayService"

    const-string v0, "mService is not null, skip initService."

    .line 52
    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    const-string p1, "MipayService"

    const-string v0, "OnBind"

    .line 38
    invoke-static {p1, v0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 39
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService;->mTidaBinder:Landroid/os/IBinder;

    return-object p0
.end method

.method public onCreate()V
    .locals 2

    const-string v0, "MipayService"

    const-string v1, "OnCreate"

    .line 32
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 33
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    const-string v0, "MipayService"

    const-string v1, "onDestroy"

    .line 44
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 45
    iput-object v0, p0, Lorg/mipay/android/manager/MipayService;->mService:Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    return-void
.end method

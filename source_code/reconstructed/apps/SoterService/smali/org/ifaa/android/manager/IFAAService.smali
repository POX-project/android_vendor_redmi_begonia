.class public Lorg/ifaa/android/manager/IFAAService;
.super Landroid/app/Service;
.source "IFAAService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;
    }
.end annotation


# instance fields
.field private final mIFAABinder:Landroid/os/IBinder;

.field private mService:Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 22
    new-instance v0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;

    invoke-direct {v0, p0, p0}, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;-><init>(Lorg/ifaa/android/manager/IFAAService;Lorg/ifaa/android/manager/IFAAService;)V

    iput-object v0, p0, Lorg/ifaa/android/manager/IFAAService;->mIFAABinder:Landroid/os/IBinder;

    const-string p0, "IFAAService"

    .line 26
    invoke-static {p0, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method static synthetic access$000(Lorg/ifaa/android/manager/IFAAService;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 20
    invoke-direct {p0}, Lorg/ifaa/android/manager/IFAAService;->initService()V

    return-void
.end method

.method static synthetic access$100(Lorg/ifaa/android/manager/IFAAService;)Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;
    .locals 0

    .line 20
    iget-object p0, p0, Lorg/ifaa/android/manager/IFAAService;->mService:Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    return-object p0
.end method

.method static synthetic access$200(Lorg/ifaa/android/manager/IFAAService;[B)[Ljava/lang/Byte;
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lorg/ifaa/android/manager/IFAAService;->wrapArray([B)[Ljava/lang/Byte;

    move-result-object p0

    return-object p0
.end method

.method private initService()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 48
    iget-object v0, p0, Lorg/ifaa/android/manager/IFAAService;->mService:Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    if-nez v0, :cond_0

    .line 49
    invoke-static {}, Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;->getService()Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    move-result-object v0

    iput-object v0, p0, Lorg/ifaa/android/manager/IFAAService;->mService:Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    goto :goto_0

    :cond_0
    const-string p0, "IFAAService"

    const-string v0, "mService is not null, skip initService"

    .line 51
    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private wrapArray([B)[Ljava/lang/Byte;
    .locals 5

    .line 56
    array-length p0, p1

    new-array p0, p0, [Ljava/lang/Byte;

    .line 58
    array-length v0, p1

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v1, v0, :cond_0

    aget-byte v3, p1, v1

    add-int/lit8 v4, v2, 0x1

    .line 59
    invoke-static {v3}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v3

    aput-object v3, p0, v2

    add-int/lit8 v1, v1, 0x1

    move v2, v4

    goto :goto_0

    :cond_0
    return-object p0
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    const-string p1, "IFAAService"

    const-string v0, "OnBind"

    .line 37
    invoke-static {p1, v0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 38
    iget-object p0, p0, Lorg/ifaa/android/manager/IFAAService;->mIFAABinder:Landroid/os/IBinder;

    return-object p0
.end method

.method public onCreate()V
    .locals 2

    const-string v0, "IFAAService"

    const-string v1, "OnCreate"

    .line 31
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 32
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    const-string v0, "IFAAService"

    const-string v1, "onDestroy"

    .line 43
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 44
    iput-object v0, p0, Lorg/ifaa/android/manager/IFAAService;->mService:Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    return-void
.end method

.class final Lcom/xiaomi/android/manager/MtService$MtServiceStub;
.super Lcom/xiaomi/android/manager/IMtService$Stub;
.source "MtService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/xiaomi/android/manager/MtService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "MtServiceStub"
.end annotation


# instance fields
.field private mService:Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;


# direct methods
.method constructor <init>(Lcom/xiaomi/android/manager/MtService;Lcom/xiaomi/android/manager/MtService;)V
    .locals 0

    .line 48
    invoke-direct {p0}, Lcom/xiaomi/android/manager/IMtService$Stub;-><init>()V

    const/4 p1, 0x0

    .line 46
    iput-object p1, p0, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->mService:Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    .line 49
    new-instance p0, Ljava/lang/ref/WeakReference;

    invoke-direct {p0, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    return-void
.end method

.method private getInstance()Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 53
    iget-object v0, p0, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->mService:Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    if-nez v0, :cond_0

    .line 55
    :try_start_0
    invoke-static {}, Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;->getService()Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    move-result-object v0

    iput-object v0, p0, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->mService:Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 57
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "obtain mtservice fail: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MTServiceJava"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 58
    throw p0

    .line 61
    :cond_0
    :goto_0
    iget-object p0, p0, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->mService:Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    return-object p0
.end method


# virtual methods
.method public widevineDump()[B
    .locals 2

    .line 100
    :try_start_0
    invoke-direct {p0}, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->getInstance()Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    move-result-object p0

    invoke-interface {p0}, Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;->widevine_dump()Ljava/lang/String;

    move-result-object p0

    .line 101
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 103
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "widevineDump fail: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MTServiceJava"

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return-object p0
.end method

.method public widevineGetVersion()I
    .locals 2

    .line 67
    :try_start_0
    invoke-direct {p0}, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->getInstance()Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    move-result-object p0

    invoke-interface {p0}, Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;->widevine_get_version()I

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 69
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "widevineGetVersion fail: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MTServiceJava"

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return p0
.end method

.method public widevineLoad([B[B)I
    .locals 1

    .line 88
    :try_start_0
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    .line 89
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, p2}, Ljava/lang/String;-><init>([B)V

    .line 90
    invoke-direct {p0}, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->getInstance()Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    move-result-object p0

    invoke-interface {p0, v0, p1}, Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;->widevine_load(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 92
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "widevineLoad fail: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MTServiceJava"

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, -0x1

    return p0
.end method

.method public widevinePrepare()[B
    .locals 2

    .line 77
    :try_start_0
    invoke-direct {p0}, Lcom/xiaomi/android/manager/MtService$MtServiceStub;->getInstance()Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;

    move-result-object p0

    invoke-interface {p0}, Lvendor/xiaomi/hardware/mtdservice/V1_1/IMTService;->widevine_prepare()Ljava/lang/String;

    move-result-object p0

    .line 78
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "widevinePrepare fail: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MTServiceJava"

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return-object p0
.end method

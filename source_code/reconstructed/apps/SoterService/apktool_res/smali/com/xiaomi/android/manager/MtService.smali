.class public Lcom/xiaomi/android/manager/MtService;
.super Landroid/app/Service;
.source "MtService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/xiaomi/android/manager/MtService$MtServiceStub;
    }
.end annotation


# instance fields
.field private final mMtBinder:Landroid/os/IBinder;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 19
    new-instance v0, Lcom/xiaomi/android/manager/MtService$MtServiceStub;

    invoke-direct {v0, p0, p0}, Lcom/xiaomi/android/manager/MtService$MtServiceStub;-><init>(Lcom/xiaomi/android/manager/MtService;Lcom/xiaomi/android/manager/MtService;)V

    iput-object v0, p0, Lcom/xiaomi/android/manager/MtService;->mMtBinder:Landroid/os/IBinder;

    const-string p0, "MTServiceJava"

    const-string v0, "MtService"

    .line 23
    invoke-static {p0, v0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    const-string p1, "MTServiceJava"

    const-string v0, "OnCreate"

    .line 34
    invoke-static {p1, v0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 35
    iget-object p0, p0, Lcom/xiaomi/android/manager/MtService;->mMtBinder:Landroid/os/IBinder;

    return-object p0
.end method

.method public onCreate()V
    .locals 2

    const-string v0, "MTServiceJava"

    const-string v1, "OnCreate"

    .line 28
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 29
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    const-string v0, "MTServiceJava"

    const-string v1, "OnDestroy"

    .line 40
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 41
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    return-void
.end method

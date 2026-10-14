.class public interface abstract Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;
.super Ljava/lang/Object;
.source "ITidaService.java"

# interfaces
.implements Lvendor/xiaomi/hardware/tidaservice/V1_0/ITidaService;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService$Proxy;
    }
.end annotation


# direct methods
.method public static asInterface(Landroid/os/IHwBinder;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "vendor.xiaomi.hardware.tidaservice@1.1::ITidaService"

    .line 18
    invoke-interface {p0, v1}, Landroid/os/IHwBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IHwInterface;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 20
    instance-of v3, v2, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    if-eqz v3, :cond_1

    .line 21
    check-cast v2, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    return-object v2

    .line 24
    :cond_1
    new-instance v2, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService$Proxy;

    invoke-direct {v2, p0}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService$Proxy;-><init>(Landroid/os/IHwBinder;)V

    .line 27
    :try_start_0
    invoke-interface {v2}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->interfaceChain()Ljava/util/ArrayList;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_2
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 28
    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_2

    return-object v2

    :catch_0
    :cond_3
    return-object v0
.end method

.method public static getService()Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string v0, "default"

    .line 77
    invoke-static {v0}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->getService(Ljava/lang/String;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v0

    return-object v0
.end method

.method public static getService(Ljava/lang/String;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string v0, "vendor.xiaomi.hardware.tidaservice@1.1::ITidaService"

    .line 70
    invoke-static {v0, p0}, Landroid/os/HwBinder;->getService(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IHwBinder;

    move-result-object p0

    invoke-static {p0}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->asInterface(Landroid/os/IHwBinder;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public abstract contains_1_1(ILjava/lang/String;)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract generateKeyPair_1_1(ILjava/lang/String;Ljava/lang/String;)I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract interfaceChain()Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract removeAllKey_1_1(I)I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract signInit_1_1(ILjava/lang/String;Ljava/lang/String;)I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract signUpdate_1_1(ILjava/lang/String;)I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

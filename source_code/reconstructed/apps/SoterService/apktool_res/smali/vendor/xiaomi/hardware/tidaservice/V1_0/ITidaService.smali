.class public interface abstract Lvendor/xiaomi/hardware/tidaservice/V1_0/ITidaService;
.super Ljava/lang/Object;
.source "ITidaService.java"

# interfaces
.implements Landroid/os/IHwInterface;


# virtual methods
.method public abstract getFpIds()Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract sign()Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.class public interface abstract Lvendor/xiaomi/hardware/mlipay/V1_0/IMlipayService;
.super Ljava/lang/Object;
.source "IMlipayService.java"

# interfaces
.implements Landroid/os/IHwInterface;


# virtual methods
.method public abstract invoke_command(Ljava/util/ArrayList;I)Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;I)",
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

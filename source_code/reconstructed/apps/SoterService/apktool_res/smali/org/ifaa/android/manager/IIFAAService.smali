.class public interface abstract Lorg/ifaa/android/manager/IIFAAService;
.super Ljava/lang/Object;
.source "IIFAAService.java"

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/ifaa/android/manager/IIFAAService$Stub;
    }
.end annotation


# virtual methods
.method public abstract getIDList(I)[I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract processCmd_v2([B)[B
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

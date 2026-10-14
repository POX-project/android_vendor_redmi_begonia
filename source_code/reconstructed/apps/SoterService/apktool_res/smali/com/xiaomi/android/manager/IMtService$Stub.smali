.class public abstract Lcom/xiaomi/android/manager/IMtService$Stub;
.super Landroid/os/Binder;
.source "IMtService.java"

# interfaces
.implements Lcom/xiaomi/android/manager/IMtService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/xiaomi/android/manager/IMtService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.xiaomi.android.manager.IMtService"

    .line 38
    invoke-virtual {p0, p0, v0}, Landroid/os/Binder;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    const-string v1, "com.xiaomi.android.manager.IMtService"

    if-eq p1, v0, :cond_4

    const/4 v2, 0x2

    if-eq p1, v2, :cond_3

    const/4 v2, 0x3

    if-eq p1, v2, :cond_2

    const/4 v2, 0x4

    if-eq p1, v2, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 107
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p0

    return p0

    .line 66
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 99
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 100
    invoke-interface {p0}, Lcom/xiaomi/android/manager/IMtService;->widevineDump()[B

    move-result-object p0

    .line 101
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 102
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeByteArray([B)V

    return v0

    .line 87
    :cond_2
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 89
    invoke-virtual {p2}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object p1

    .line 91
    invoke-virtual {p2}, Landroid/os/Parcel;->createByteArray()[B

    move-result-object p2

    .line 92
    invoke-interface {p0, p1, p2}, Lcom/xiaomi/android/manager/IMtService;->widevineLoad([B[B)I

    move-result p0

    .line 93
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 94
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v0

    .line 79
    :cond_3
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 80
    invoke-interface {p0}, Lcom/xiaomi/android/manager/IMtService;->widevinePrepare()[B

    move-result-object p0

    .line 81
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 82
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeByteArray([B)V

    return v0

    .line 71
    :cond_4
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 72
    invoke-interface {p0}, Lcom/xiaomi/android/manager/IMtService;->widevineGetVersion()I

    move-result p0

    .line 73
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 74
    invoke-virtual {p3, p0}, Landroid/os/Parcel;->writeInt(I)V

    return v0
.end method
